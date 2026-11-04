// Type: Gisketch.Aottg2UI.Styling.GisketchTheme
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTheme.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddAtomDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddAtomDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x18188ca90

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddAtomDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Color__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  System_Nullable_bool__Fields local_res8 [8];
  System_Nullable_bool__Fields local_res18 [4];
  System_Nullable_bool__Fields local_res20 [4];
  System_Nullable_bool__Fields local_a8 [2];
  System_Nullable_bool__Fields local_a4 [2];
  System_Nullable_float__Fields local_a0;
  System_Nullable_float__Fields local_98;
  System_Nullable_float__Fields local_90;
  System_Nullable_float__Fields local_88;
  System_Nullable_float__Fields local_80;
  UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_Fields local_78 [5];
  
  if (Il2CppMethodInitialized_184341f14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"icon");
    il2cpp_codegen_initialize_runtime_metadata(&"separator");
    il2cpp_codegen_initialize_runtime_metadata(&"select");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"controlMark");
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    il2cpp_codegen_initialize_runtime_metadata(&"checkBox");
    il2cpp_codegen_initialize_runtime_metadata(&"sliderTrack");
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"dialog");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutText");
    il2cpp_codegen_initialize_runtime_metadata(&"textArea");
    il2cpp_codegen_initialize_runtime_metadata(&"searchResultItem");
    il2cpp_codegen_initialize_runtime_metadata(&"callout");
    il2cpp_codegen_initialize_runtime_metadata(&"dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"success");
    il2cpp_codegen_initialize_runtime_metadata(&"sliderFill");
    il2cpp_codegen_initialize_runtime_metadata(&"sliderThumb");
    il2cpp_codegen_initialize_runtime_metadata(&"destructive");
    il2cpp_codegen_initialize_runtime_metadata(&"switch");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutBorderSuccess");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutBorderError");
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"checkMark");
    il2cpp_codegen_initialize_runtime_metadata(&"surfaceSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutBorderPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"sliderValue");
    il2cpp_codegen_initialize_runtime_metadata(&"switchThumb");
    il2cpp_codegen_initialize_runtime_metadata(&"radio");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutBorderWarning");
    il2cpp_codegen_initialize_runtime_metadata(&"controlLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"textMuted");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    il2cpp_codegen_initialize_runtime_metadata(&"engravedBg");
    il2cpp_codegen_initialize_runtime_metadata(&"spriteButton");
    il2cpp_codegen_initialize_runtime_metadata(&"switchTrack");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    il2cpp_codegen_initialize_runtime_metadata(&"dropdownItem");
    il2cpp_codegen_initialize_runtime_metadata(&"italic");
    il2cpp_codegen_initialize_runtime_metadata(&"checkbox");
    Il2CppMethodInitialized_184341f14 = '\x01';
  }
  pSVar1 = (__this->fields)._colors;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
    local_78[0].DefaultActionCategories = 0;
    local_78[0].DefaultActionAtTargetCategories = 0;
    local_78[0].HandleEventTrickleDownCategories = 0;
    local_78[0].HandleEventBubbleUpCategories = 0x3ea3d70a;
    System_Collections_Generic_Dictionary_object__Color___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               (Il2CppObject *)"shadow",(UnityEngine_Color_o *)local_78,
               (MethodInfo_1465870 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    pSVar1 = (__this->fields)._colors;
    if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                ((UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o *)local_78,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                 (Il2CppObject *)"primary",
                 (MethodInfo_1454D90 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item)
      ;
      System_Collections_Generic_Dictionary_object__Color___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                 (Il2CppObject *)"controlMark",(UnityEngine_Color_o *)local_78,
                 (MethodInfo_1465870 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item)
      ;
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pGVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)"tooltip",
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                           );
        local_res8[0].hasValue = false;
        local_res8[0].value = false;
        System_Nullable_bool____ctor
                  ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\x01',MethodInfo_System_Nullable_bool_ctor);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          (pGVar3->fields).shadow.fields = local_res8[0];
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pGVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)"dialog",
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                               );
            local_res18[0].hasValue = false;
            local_res18[0].value = false;
            System_Nullable_bool____ctor
                      ((System_Data_SqlTypes_SqlByte_o *)local_res18,'\x01',
                       MethodInfo_System_Nullable_bool_ctor);
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
              (pGVar3->fields).shadow.fields = local_res18[0];
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
              if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pGVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar2,(Il2CppObject *)"popover",
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                   );
                local_res20[0].hasValue = false;
                local_res20[0].value = false;
                System_Nullable_bool____ctor
                          ((System_Data_SqlTypes_SqlByte_o *)local_res20,'\x01',
                           MethodInfo_System_Nullable_bool_ctor);
                if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                  (pGVar3->fields).shadow.fields = local_res20[0];
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles
                  ;
                  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0)
                  {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                  }
                  pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                     ("icon","text",24.0,(MethodInfo *)0x0);
                  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pSVar2,(Il2CppObject *)"icon",(Il2CppObject *)pGVar3,
                               (MethodInfo_147A7F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                              );
                    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._styles;
                    pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                       ("spriteButton","clear",48.0,(MethodInfo *)0x0);
                    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__object___set_Item
                                (pSVar2,(Il2CppObject *)"spriteButton",(Il2CppObject *)pGVar3,
                                 (MethodInfo_147A7F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                );
                      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                               (__this->fields)._styles;
                      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        pGVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                                           (pSVar2,(Il2CppObject *)"spriteButton",
                                            (MethodInfo_147A5B0 *)
                                            MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                           );
                        pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(48.0,(MethodInfo *)0x0);
                        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                          (pGVar3->fields).width = pGVar4;
                          Il2CppCodeGenWriteBarrier(&(pGVar3->fields).width,pGVar4);
                          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                   (__this->fields)._styles;
                          pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                             ("separator","primary",2.0,
                                              (MethodInfo *)0x0);
                          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                            System_Collections_Generic_Dictionary_object__object___set_Item
                                      (pSVar2,(Il2CppObject *)"separator",(Il2CppObject *)pGVar3,
                                       (MethodInfo_147A7F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                      );
                            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     (__this->fields)._styles;
                            pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                               ("dropdown","clear",42.0,
                                                (MethodInfo *)0x0);
                            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__object___set_Item
                                        (pSVar2,(Il2CppObject *)"dropdown",(Il2CppObject *)pGVar3,
                                         (MethodInfo_147A7F0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                        );
                              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       (__this->fields)._styles;
                              pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                 ("select","clear",42.0,
                                                  (MethodInfo *)0x0);
                              if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                                System_Collections_Generic_Dictionary_object__object___set_Item
                                          (pSVar2,(Il2CppObject *)"select",(Il2CppObject *)pGVar3
                                           ,(MethodInfo_147A7F0 *)
                                            MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                          );
                                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         (__this->fields)._styles;
                                pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle
                                                   ("dropdownItem",false,(MethodInfo *)0x0);
                                if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                                {
                                  System_Collections_Generic_Dictionary_object__object___set_Item
                                            (pSVar2,(Il2CppObject *)"dropdownItem",
                                             (Il2CppObject *)pGVar3,
                                             (MethodInfo_147A7F0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                            );
                                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                           (__this->fields)._styles;
                                  pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle
                                                     ("searchResultItem",true,(MethodInfo *)0x0);
                                  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0
                                     ) {
                                    System_Collections_Generic_Dictionary_object__object___set_Item
                                              (pSVar2,(Il2CppObject *)"searchResultItem",
                                               (Il2CppObject *)pGVar3,
                                               (MethodInfo_147A7F0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                              );
                                    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                             (__this->fields)._styles;
                                    pGVar3 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)
                                                                                                                
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                    Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,
                                               (MethodInfo *)0x0);
                                    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                      (pGVar3->fields).name = "callout";
                                      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).name,"callout");
                                      (pGVar3->fields).background = "surface";
                                      Il2CppCodeGenWriteBarrier
                                                (&(pGVar3->fields).background,"surface");
                                      local_a0.hasValue = false;
                                      local_a0._1_3_ = 0;
                                      local_a0.value = 0.0;
                                      System_Nullable_float____ctor
                                                ((System_Nullable_float__o *)&local_a0,0.0,
                                                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                                      (pGVar3->fields).padding.fields = local_a0;
                                      local_98.hasValue = false;
                                      local_98._1_3_ = 0;
                                      local_98.value = 0.0;
                                      System_Nullable_float____ctor
                                                ((System_Nullable_float__o *)&local_98,12.0,
                                                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                                      (pGVar3->fields).gap.fields = local_98;
                                      local_a8[0].hasValue = false;
                                      local_a8[0].value = false;
                                      System_Nullable_bool____ctor
                                                ((System_Data_SqlTypes_SqlByte_o *)local_a8,'\x01',
                                                 MethodInfo_System_Nullable_bool_ctor);
                                      (pGVar3->fields).textured.fields = local_a8[0];
                                      local_a4[0].hasValue = false;
                                      local_a4[0].value = false;
                                      System_Nullable_bool____ctor
                                                ((System_Data_SqlTypes_SqlByte_o *)local_a4,'\x01',
                                                 MethodInfo_System_Nullable_bool_ctor);
                                      (pGVar3->fields).worn.fields = local_a4[0];
                                      local_90.hasValue = false;
                                      local_90._1_3_ = 0;
                                      local_90.value = 0.0;
                                      System_Nullable_float____ctor
                                                ((System_Nullable_float__o *)&local_90,4.0,
                                                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                                      (pGVar3->fields).wornStainScale.fields = local_90;
                                      local_88.hasValue = false;
                                      local_88._1_3_ = 0;
                                      local_88.value = 0.0;
                                      System_Nullable_float____ctor
                                                ((System_Nullable_float__o *)&local_88,0.0,
                                                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                                      (pGVar3->fields).relief.fields = local_88;
                                      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *
                                                    )0x0) {
                                        System_Collections_Generic_Dictionary_object__object___set_Item
                                                  (pSVar2,(Il2CppObject *)"callout",
                                                   (Il2CppObject *)pGVar3,
                                                   (MethodInfo_147A7F0 *)
                                                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                  );
                                        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                 (__this->fields)._styles;
                                        pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                           ("calloutText","textMuted",
                                                            "text",400,18.0,(MethodInfo *)0x0);
                                        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                          System_Collections_Generic_Dictionary_object__object___set_Item
                                                    (pSVar2,(Il2CppObject *)"calloutText",
                                                     (Il2CppObject *)pGVar3,
                                                     (MethodInfo_147A7F0 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                    );
                                          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                   (__this->fields)._styles;
                                          if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                            pGVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                               (pSVar2,(Il2CppObject *)"calloutText",
                                                                (MethodInfo_147A5B0 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                                                          0x0) {
                                              (pGVar3->fields).fontStyle = "italic";
                                              Il2CppCodeGenWriteBarrier
                                                        (&(pGVar3->fields).fontStyle,"italic");
                                              pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                              if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                pGVar3 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar2,(Il2CppObject *)"calloutText"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                local_80.hasValue = false;
                                                local_80._1_3_ = 0;
                                                local_80.value = 0.0;
                                                System_Nullable_float____ctor
                                                          ((System_Nullable_float__o *)&local_80,12.0,
                                                           (MethodInfo_AE2920 *)
                                                           MethodInfo_System_Nullable_float_ctor);
                                                if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                {
                                                  (pGVar3->fields).padding.fields = local_80;
                                                  pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                  pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("calloutBorderPrimary","primary",
                                                                  42.0,(MethodInfo *)0x0);
                                                  if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                    System_Collections_Generic_Dictionary_object__object___set_Item
                                                              (pSVar2,(Il2CppObject *)"calloutBorderPrimary",
                                                               (Il2CppObject *)pGVar3,
                                                               (MethodInfo_147A7F0 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                    pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                    pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("calloutBorderSuccess","success",
                                                                  42.0,(MethodInfo *)0x0);
                                                    if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                      System_Collections_Generic_Dictionary_object__object___set_Item
                                                                (pSVar2,(Il2CppObject *)"calloutBorderSuccess",
                                                                 (Il2CppObject *)pGVar3,
                                                                 (MethodInfo_147A7F0 *)
                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                      pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                      pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("calloutBorderWarning","warning",
                                                                  42.0,(MethodInfo *)0x0);
                                                      if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"calloutBorderWarning"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("calloutBorderError","destructive",
                                                                  42.0,(MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"calloutBorderError"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__CopyInputStyle
                                                                 ("textArea",118.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"textArea"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("slider","clear",
                                                                  48.0,(MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"slider"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("sliderTrack","engravedBg",
                                                                  18.0,(MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"sliderTrack"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("sliderFill","primary",
                                                                  "header",400,1.0,18.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"sliderFill"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("sliderThumb","surfaceSoft",
                                                                  "header",400,1.0,24.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"sliderThumb"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar3 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar2,(Il2CppObject *)"sliderThumb"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (24.0,(MethodInfo *)0x0);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar3->fields).width = pGVar4;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).width,pGVar4);
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar3 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar2,(Il2CppObject *)"sliderThumb"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar3->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).textColor,
                                                                    "text");
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("sliderValue","textMuted",
                                                                  "text",500,18.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"sliderValue"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("stateMetaText","textMuted",
                                                                  "text",400,20.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"stateMetaText"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar3 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar2,(Il2CppObject *)"stateMetaText"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar3->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).textAlignment,
                                                                    "left");
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar3 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar2,(Il2CppObject *)"stateMetaText"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Percent
                                                                 (100.0,(MethodInfo *)0x0);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar3->fields).width = pGVar4;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).width,pGVar4);
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("checkbox","clear",
                                                                  42.0,(MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"checkbox"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("radio","clear",
                                                                  42.0,(MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"radio"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("checkBox","engravedBg",
                                                                  26.0,(MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"checkBox"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("checkMark","controlMark",
                                                                  16.0,(MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"checkMark"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("switch","clear",
                                                                  42.0,(MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"switch"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar3 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar2,(Il2CppObject *)"switch"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (58.0,(MethodInfo *)0x0);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar3->fields).width = pGVar4;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).width,pGVar4);
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("switchTrack","engravedBg",
                                                                  26.0,(MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"switchTrack"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar3 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar2,(Il2CppObject *)"switchTrack"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (52.0,(MethodInfo *)0x0);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar3->fields).width = pGVar4;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).width,pGVar4);
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("switchThumb","surfaceSoft",
                                                                  "header",400,1.0,22.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"switchThumb"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar3 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar2,(Il2CppObject *)"switchThumb"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (22.0,(MethodInfo *)0x0);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar3->fields).width = pGVar4;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).width,pGVar4);
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("controlLabel","text",
                                                                  "text",400,19.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"controlLabel"
                                                                  ,(Il2CppObject *)pGVar3,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastDefaults
                                                                 (__this,(MethodInfo *)0x0);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddMainMenuDefaults
                                                                 (__this,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddToastDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x181895a30

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_res18 [4];
  System_Nullable_bool__Fields local_res20 [4];
  System_Nullable_float__Fields local_58;
  System_Nullable_float__Fields local_50;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40 [5];
  
  if (Il2CppMethodInitialized_184341f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"toastTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"Workshop");
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"toastContent");
    il2cpp_codegen_initialize_runtime_metadata(&"Warning");
    il2cpp_codegen_initialize_runtime_metadata(&"balloon");
    il2cpp_codegen_initialize_runtime_metadata(&"success");
    il2cpp_codegen_initialize_runtime_metadata(&"Success");
    il2cpp_codegen_initialize_runtime_metadata(&"destructive");
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"toastContentPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"toastCloseButton");
    il2cpp_codegen_initialize_runtime_metadata(&"toast");
    il2cpp_codegen_initialize_runtime_metadata(&"negative");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"workshop");
    il2cpp_codegen_initialize_runtime_metadata(&"textMuted");
    il2cpp_codegen_initialize_runtime_metadata(&"Error");
    il2cpp_codegen_initialize_runtime_metadata(&"Information");
    Il2CppMethodInitialized_184341f15 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar2->fields).name = "toast";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"toast");
    (pGVar2->fields).background = "surface";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background,"surface");
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(520.0,(MethodInfo *)0x0);
    (pGVar2->fields).width = pGVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width,pGVar3);
    (pGVar2->fields).motion = "balloon";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).motion,"balloon");
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (pGVar2->fields).textured.fields = local_res8[0];
    local_res18[0].hasValue = false;
    local_res18[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res18,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (pGVar2->fields).worn.fields = local_res18[0];
    local_58.hasValue = false;
    local_58._1_3_ = 0;
    local_58.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_58,4.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (pGVar2->fields).wornStainScale.fields = local_58;
    local_50.hasValue = false;
    local_50._1_3_ = 0;
    local_50.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_50,1.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (pGVar2->fields).relief.fields = local_50;
    local_res20[0].hasValue = false;
    local_res20[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res20,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (pGVar2->fields).shadow.fields = local_res20[0];
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)"toast",(Il2CppObject *)pGVar2,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      pGVar2 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
      Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        (pGVar2->fields).name = "toastContentPanel";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"toastContentPanel");
        (pGVar2->fields).background = "clear";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background,"clear");
        local_48.hasValue = false;
        local_48._1_3_ = 0;
        local_48.value = 0.0;
        System_Nullable_float____ctor
                  ((System_Nullable_float__o *)&local_48,12.0,
                   (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
        (pGVar2->fields).padding.fields = local_48;
        local_40[0].hasValue = false;
        local_40[0]._1_3_ = 0;
        local_40[0].value = 0.0;
        System_Nullable_float____ctor
                  ((System_Nullable_float__o *)local_40,6.0,
                   (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
        (pGVar2->fields).gap.fields = local_40[0];
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)"toastContentPanel",(Il2CppObject *)pGVar2,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item)
          ;
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
          pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                             ("toastTitle","text","header",400,22.0,
                              (MethodInfo *)0x0);
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar1,(Il2CppObject *)"toastTitle",(Il2CppObject *)pGVar2,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                      );
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
            pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                               ("toastContent","textMuted","text",400,18.0,
                                (MethodInfo *)0x0);
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar1,(Il2CppObject *)"toastContent",(Il2CppObject *)pGVar2,
                         (MethodInfo_147A7F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                        );
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
              pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                 ("toastCloseButton","primary","header",400,1.0,
                                  34.0,(MethodInfo *)0x0);
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar1,(Il2CppObject *)"toastCloseButton",(Il2CppObject *)pGVar2,
                           (MethodInfo_147A7F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                          );
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar1,(Il2CppObject *)"toastCloseButton",
                                      (MethodInfo_147A5B0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                     );
                  pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(34.0,(MethodInfo *)0x0);
                  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                    (pGVar2->fields).width = pGVar3;
                    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width,pGVar3);
                    Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                              (__this,"Error","destructive","destructive",
                               (MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                              (__this,"Warning","warning","warning",
                               (MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                              (__this,"Information","negative","negative",
                               (MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                              (__this,"Workshop","workshop","workshop",
                               (MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                              (__this,"Success","success","success",
                               (MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddToastVariant
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* suffix, System_String_o* border, System_String_o* icon, const MethodInfo* method);
// 0x181896050

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *suffix,
               System_String_o *border,System_String_o *icon,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  
  if (Il2CppMethodInitialized_184341f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&"toastIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"toastBorder");
    Il2CppMethodInitialized_184341f16 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pSVar2 = System_String__Concat_1969e50("toastBorder",suffix,(MethodInfo *)0x0);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_1969e50("toastBorder",suffix,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar3->fields).name = pSVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).name,pSVar4);
    (pGVar3->fields).background = border;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).background,border);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(6.0,(MethodInfo *)0x0);
    (pGVar3->fields).width = pGVar5;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).width,pGVar5);
    pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__Percent(100.0,(MethodInfo *)0x0);
    (pGVar3->fields).height = pGVar5;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).height,pGVar5);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar3,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      pSVar2 = System_String__Concat_1969e50("toastIcon",suffix,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50("toastIcon",suffix,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle(pSVar4,icon,24.0,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar3,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyInputStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__CopyInputStyle (System_String_o* name, float height, const MethodInfo* method);
// 0x181896a10

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__CopyInputStyle(System_String_o *name,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_res20 [4];
  System_Nullable_int__Fields local_48;
  System_Nullable_float__Fields local_40;
  System_Nullable_float__Fields local_38;
  System_Nullable_float__Fields local_30;
  System_Nullable_float__Fields local_28 [4];
  
  if (Il2CppMethodInitialized_184341f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"engravedBg");
    Il2CppMethodInitialized_184341f17 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,name);
    (__this->fields).background = "engravedBg";
    Il2CppCodeGenWriteBarrier(&(__this->fields).background,"engravedBg");
    (__this->fields).textColor = "text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).textColor,"text");
    (__this->fields).fontFamily = "text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).fontFamily,"text");
    local_48.hasValue = false;
    local_48._1_3_ = 0;
    local_48.value = 0;
    System_Nullable_int____ctor
              ((System_Data_SqlTypes_SqlInt32_o *)&local_48,400,MethodInfo_System_Nullable_int_ctor);
    (__this->fields).fontWeight.fields = local_48;
    local_40.hasValue = false;
    local_40._1_3_ = 0;
    local_40.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_40,19.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).fontSize.fields = local_40;
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_38,12.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).padding.fields = local_38;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(280.0,(MethodInfo *)0x0);
    (__this->fields).width = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).width,pGVar1);
    pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(height,(MethodInfo *)0x0);
    (__this->fields).height = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).height,pGVar1);
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (__this->fields).textured.fields = local_res8[0];
    local_res20[0].hasValue = false;
    local_res20[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res20,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (__this->fields).worn.fields = local_res20[0];
    local_30.hasValue = false;
    local_30._1_3_ = 0;
    local_30.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_30,4.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).wornStainScale.fields = local_30;
    local_28[0].hasValue = false;
    local_28[0]._1_3_ = 0;
    local_28[0].value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)local_28,-1.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).relief.fields = local_28[0];
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ControlStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle (System_String_o* name, System_String_o* background, float height, const MethodInfo* method);
// 0x181896810

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
          (System_String_o *name,System_String_o *background,float height,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *value;
  float value_00;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_38 [4];
  System_Nullable_float__Fields local_30;
  System_Nullable_float__Fields local_28 [4];
  
  if (Il2CppMethodInitialized_184341f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inputBg");
    il2cpp_codegen_initialize_runtime_metadata(&"engravedBg");
    Il2CppMethodInitialized_184341f18 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).name,name);
  (__this->fields).background = background;
  Il2CppCodeGenWriteBarrier(&(__this->fields).background,background);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  value = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(height,(MethodInfo *)0x0);
  (__this->fields).height = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).height,value);
  bVar1 = System_String__op_Inequality(background,"clear",(MethodInfo *)0x0);
  local_res8[0].hasValue = false;
  local_res8[0].value = false;
  System_Nullable_bool____ctor
            ((System_Data_SqlTypes_SqlByte_o *)local_res8,bVar1,MethodInfo_System_Nullable_bool_ctor);
  (__this->fields).textured.fields = local_res8[0];
  local_38[0].hasValue = false;
  local_38[0].value = false;
  System_Nullable_bool____ctor
            ((System_Data_SqlTypes_SqlByte_o *)local_38,'\x01',MethodInfo_System_Nullable_bool_ctor);
  (__this->fields).worn.fields = local_38[0];
  local_30.hasValue = false;
  local_30._1_3_ = 0;
  local_30.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_30,4.0,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  (__this->fields).wornStainScale.fields = local_30;
  bVar1 = System_String__op_Equality(background,"inputBg",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(background,"engravedBg",(MethodInfo *)0x0);
    if (!bVar1) {
      value_00 = 0.0;
      goto label_1818969c8;
    }
  }
  value_00 = -1.0;
label_1818969c8:
  local_28[0].hasValue = false;
  local_28[0]._1_3_ = 0;
  local_28[0].value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)local_28,value_00,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  (__this->fields).relief.fields = local_28[0];
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$IconStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle (System_String_o* name, System_String_o* color, float size, const MethodInfo* method);
// 0x181897bc0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
          (System_String_o *name,System_String_o *color,float size,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  
  if (Il2CppMethodInitialized_184341f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_184341f19 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,name);
    (__this->fields).textColor = color;
    Il2CppCodeGenWriteBarrier(&(__this->fields).textColor,color);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(size,(MethodInfo *)0x0);
    (__this->fields).width = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).width,pGVar1);
    pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(size,(MethodInfo *)0x0);
    (__this->fields).height = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).height,pGVar1);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$DropdownItemStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle (System_String_o* name, bool leftAligned, const MethodInfo* method);
// 0x1818971b0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle
          (System_String_o *name,bool leftAligned,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *value;
  System_String_o *value_00;
  System_Nullable_int__Fields local_res8;
  System_Nullable_float__Fields local_res20;
  System_Nullable_float__Fields local_18 [2];
  
  if (Il2CppMethodInitialized_184341f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184341f1a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,name);
    (__this->fields).background = "clear";
    Il2CppCodeGenWriteBarrier(&(__this->fields).background,"clear");
    (__this->fields).textColor = "text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).textColor,"text");
    (__this->fields).fontFamily = "text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).fontFamily,"text");
    local_res8.hasValue = false;
    local_res8._1_3_ = 0;
    local_res8.value = 0;
    System_Nullable_int____ctor
              ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,400,MethodInfo_System_Nullable_int_ctor);
    (__this->fields).fontWeight.fields = local_res8;
    local_res20.hasValue = false;
    local_res20._1_3_ = 0;
    local_res20.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_res20,20.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).fontSize.fields = local_res20;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    value = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(38.0,(MethodInfo *)0x0);
    (__this->fields).height = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).height,value);
    local_18[0].hasValue = false;
    local_18[0]._1_3_ = 0;
    local_18[0].value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)local_18,12.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).paddingX.fields = local_18[0];
    value_00 = (System_String_o *)0x0;
    if (leftAligned) {
      value_00 = "left";
    }
    (__this->fields).textAlignment = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).textAlignment,value_00);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$Percent
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Styling_GisketchTheme__Percent (float value, const MethodInfo* method);
// 0x1818980d0

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__Percent(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_184341f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_184341f1b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this->fields).unit,"percent");
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddChangelogDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddChangelogDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x18188daf0

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddChangelogDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  
  if (Il2CppMethodInitialized_184341f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&"points");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogPreviewMeta");
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogMarkdownHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogPreviewIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"textMuted");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogSectionHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogPreviewVersion");
    Il2CppMethodInitialized_184341f1c = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                     ("changelogSectionHeader","text","header",400,32.0,
                      (MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)"changelogSectionHeader",(Il2CppObject *)pGVar2,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)"changelogSectionHeader",
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                         );
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        (pGVar2->fields).textAlignment = "left";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textAlignment,"left");
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
        pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                           ("changelogMarkdownHeader","text","header",400,30.0,
                            (MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)"changelogMarkdownHeader",(Il2CppObject *)pGVar2,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item)
          ;
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,(Il2CppObject *)"changelogMarkdownHeader",
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                               );
            if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
              (pGVar2->fields).textAlignment = "left";
              Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textAlignment,"left");
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
              pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                 ("changelogPreviewVersion","text","text",700,22.0,
                                  (MethodInfo *)0x0);
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar1,(Il2CppObject *)"changelogPreviewVersion",(Il2CppObject *)pGVar2,
                           (MethodInfo_147A7F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                          );
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar1,(Il2CppObject *)"changelogPreviewVersion",
                                      (MethodInfo_147A5B0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                     );
                  pGVar3 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,(MethodInfo *)0x0);
                  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    (pGVar3->fields).value = 100.0;
                    (pGVar3->fields).unit = "percent";
                    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit,"percent");
                    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                      (pGVar2->fields).width = pGVar3;
                      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width,pGVar3);
                      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                               (__this->fields)._styles;
                      pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                         ("changelogPreviewMeta","textMuted","text",
                                          400,20.0,(MethodInfo *)0x0);
                      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  (pSVar1,(Il2CppObject *)"changelogPreviewMeta",(Il2CppObject *)pGVar2,
                                   (MethodInfo_147A7F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                  );
                        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._styles;
                        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                                             (pSVar1,(Il2CppObject *)"changelogPreviewMeta",
                                              (MethodInfo_147A5B0 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                             );
                          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                            (pGVar2->fields).textAlignment = "left";
                            Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textAlignment,"left");
                            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     (__this->fields)._styles;
                            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                 (pSVar1,(Il2CppObject *)"changelogPreviewMeta",
                                                  (MethodInfo_147A5B0 *)
                                                  MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                 );
                              pGVar3 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)
                                                  TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                        ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,
                                         (MethodInfo *)0x0);
                              if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                (pGVar3->fields).value = 100.0;
                                (pGVar3->fields).unit = "percent";
                                Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit,"percent");
                                if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                  (pGVar2->fields).width = pGVar3;
                                  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width,pGVar3);
                                  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                           (__this->fields)._styles;
                                  pGVar2 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)
                                                      TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition)
                                  ;
                                  UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,
                                             (MethodInfo *)0x0);
                                  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                    (pGVar2->fields).name = "changelogPreviewIcon";
                                    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"changelogPreviewIcon");
                                    (pGVar2->fields).textColor = "text";
                                    Il2CppCodeGenWriteBarrier
                                              (&(pGVar2->fields).textColor,"text");
                                    pGVar3 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)
                                                        TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,
                                               (MethodInfo *)0x0);
                                    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                      (pGVar3->fields).value = 32.0;
                                      (pGVar3->fields).unit = "points";
                                      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit,"points");
                                      (pGVar2->fields).width = pGVar3;
                                      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width,pGVar3);
                                      pGVar3 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)
                                                          TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,
                                                 (MethodInfo *)0x0);
                                      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                        (pGVar3->fields).value = 32.0;
                                        (pGVar3->fields).unit = "points";
                                        Il2CppCodeGenWriteBarrier
                                                  (&(pGVar3->fields).unit,"points");
                                        (pGVar2->fields).height = pGVar3;
                                        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).height,pGVar3);
                                        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                          System_Collections_Generic_Dictionary_object__object___set_Item
                                                    (pSVar1,(Il2CppObject *)"changelogPreviewIcon",
                                                     (Il2CppObject *)pGVar2,
                                                     (MethodInfo_147A7F0 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                    );
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x18188e060

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Color__o *pSVar1;
  System_Collections_Generic_Dictionary_string__Color__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionToken_o *value;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  System_Nullable_bool__Fields local_res8 [8];
  System_Nullable_bool__Fields local_res18 [4];
  System_Nullable_bool__Fields local_res20 [4];
  UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_Fields local_2a8;
  UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_Fields local_298;
  System_Nullable_bool__Fields local_288 [2];
  System_Nullable_bool__Fields local_284 [2];
  System_Nullable_bool__Fields local_280 [2];
  System_Nullable_bool__Fields local_27c [2];
  System_Nullable_bool__Fields local_278 [2];
  System_Nullable_bool__Fields local_274 [2];
  System_Nullable_bool__Fields local_270 [2];
  System_Nullable_bool__Fields local_26c [2];
  System_Nullable_bool__Fields local_268 [2];
  System_Nullable_bool__Fields local_264 [2];
  System_Nullable_bool__Fields local_260 [2];
  System_Nullable_bool__Fields local_25c [2];
  System_Nullable_bool__Fields local_258 [2];
  System_Nullable_bool__Fields local_254 [2];
  System_Nullable_bool__Fields local_250 [2];
  System_Nullable_bool__Fields local_24c [2];
  System_Nullable_bool__Fields local_248 [2];
  System_Nullable_bool__Fields local_244 [2];
  System_Nullable_bool__Fields local_240 [4];
  System_Nullable_float__Fields local_238;
  System_Nullable_float__Fields local_230;
  System_Nullable_float__Fields local_228;
  System_Nullable_float__Fields local_220;
  System_Nullable_float__Fields local_218;
  System_Nullable_float__Fields local_210;
  System_Nullable_float__Fields local_208;
  System_Nullable_float__Fields local_200;
  System_Nullable_float__Fields local_1f8;
  System_Nullable_float__Fields local_1f0;
  System_Nullable_float__Fields local_1e8;
  System_Nullable_float__Fields local_1e0;
  System_Nullable_float__Fields local_1d8;
  System_Nullable_float__Fields local_1d0;
  System_Nullable_float__Fields local_1c8;
  System_Nullable_float__Fields local_1c0;
  System_Nullable_float__Fields local_1b8;
  System_Nullable_float__Fields local_1b0;
  System_Nullable_float__Fields local_1a8;
  System_Nullable_float__Fields local_1a0;
  System_Nullable_float__Fields local_198;
  System_Nullable_float__Fields local_190;
  System_Nullable_float__Fields local_188;
  System_Nullable_float__Fields local_180;
  System_Nullable_float__Fields local_178;
  System_Nullable_float__Fields local_170;
  System_Nullable_float__Fields local_168;
  System_Nullable_float__Fields local_160;
  System_Nullable_float__Fields local_158;
  System_Nullable_float__Fields local_150;
  System_Nullable_int__Fields local_148;
  System_Nullable_float__Fields local_140;
  System_Nullable_float__Fields local_138;
  System_Nullable_float__Fields local_130;
  System_Nullable_float__Fields local_128;
  System_Nullable_int__Fields local_120;
  System_Nullable_float__Fields local_118;
  System_Nullable_float__Fields local_110;
  System_Nullable_float__Fields local_108;
  System_Nullable_int__Fields local_100;
  System_Nullable_float__Fields local_f8;
  System_Nullable_float__Fields local_f0;
  System_Nullable_float__Fields local_e8;
  System_Nullable_float__Fields local_e0;
  System_Nullable_float__Fields local_d8;
  System_Nullable_float__Fields local_d0;
  UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o local_c8 [10];
  
  if (Il2CppMethodInitialized_184341f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionToken);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerBg");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"stepper");
    il2cpp_codegen_initialize_runtime_metadata(&"muted");
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"Workshop");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonSecondary");
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"Quiet");
    il2cpp_codegen_initialize_runtime_metadata(&"skeletonPulse");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    il2cpp_codegen_initialize_runtime_metadata(&"accent2");
    il2cpp_codegen_initialize_runtime_metadata(&"tooltipText");
    il2cpp_codegen_initialize_runtime_metadata(&"dialog");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsDirtyStrip");
    il2cpp_codegen_initialize_runtime_metadata(&"Negative");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarBg");
    il2cpp_codegen_initialize_runtime_metadata(&"secondaryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"balloon");
    il2cpp_codegen_initialize_runtime_metadata(&"screenFlush");
    il2cpp_codegen_initialize_runtime_metadata(&"success");
    il2cpp_codegen_initialize_runtime_metadata(&"primaryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbarThumb");
    il2cpp_codegen_initialize_runtime_metadata(&"accent");
    il2cpp_codegen_initialize_runtime_metadata(&"slide");
    il2cpp_codegen_initialize_runtime_metadata(&"inputPlaceholder");
    il2cpp_codegen_initialize_runtime_metadata(&"destructive");
    il2cpp_codegen_initialize_runtime_metadata(&"scrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"settingStepperValue");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPlain");
    il2cpp_codegen_initialize_runtime_metadata(&"screenSlide");
    il2cpp_codegen_initialize_runtime_metadata(&"void");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"panelSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"Secondary");
    il2cpp_codegen_initialize_runtime_metadata(&"card");
    il2cpp_codegen_initialize_runtime_metadata(&"pop");
    il2cpp_codegen_initialize_runtime_metadata(&"Danger");
    il2cpp_codegen_initialize_runtime_metadata(&"skeletonBase");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonWorkshop");
    il2cpp_codegen_initialize_runtime_metadata(&"surfaceSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogFooter");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonDanger");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"negative");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButton");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"paper");
    il2cpp_codegen_initialize_runtime_metadata(&"keybindButton");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleIconQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"inputBg");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogBody");
    il2cpp_codegen_initialize_runtime_metadata(&"tooltipBg");
    il2cpp_codegen_initialize_runtime_metadata(&"settingInfoIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    il2cpp_codegen_initialize_runtime_metadata(&"workshop");
    il2cpp_codegen_initialize_runtime_metadata(&"negativeText");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsDirtyDot");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonNegative");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarBorder");
    il2cpp_codegen_initialize_runtime_metadata(&"panel");
    il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
    il2cpp_codegen_initialize_runtime_metadata(&"textMuted");
    il2cpp_codegen_initialize_runtime_metadata(&"secondary");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleTextQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    il2cpp_codegen_initialize_runtime_metadata(&"engravedBg");
    il2cpp_codegen_initialize_runtime_metadata(&"settingLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsDirty");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleText");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonHeaderTab");
    il2cpp_codegen_initialize_runtime_metadata(&"ink");
    il2cpp_codegen_initialize_runtime_metadata(&"center");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitle");
    Il2CppMethodInitialized_184341f1d = '\x01';
  }
  pSVar1 = (__this->fields)._colors;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
    local_298.DefaultActionCategories = 0;
    local_298.DefaultActionAtTargetCategories = 0;
    local_298.HandleEventTrickleDownCategories = 0;
    local_298.HandleEventBubbleUpCategories = 0;
    System_Collections_Generic_Dictionary_object__Color___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               (Il2CppObject *)"clear",(UnityEngine_Color_o *)&local_298,
               (MethodInfo_1465870 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    pSVar1 = (__this->fields)._colors;
    if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      local_298.DefaultActionCategories = 0x3f35c28f;
      local_298.DefaultActionAtTargetCategories = 0x3e3851ec;
      local_298.HandleEventTrickleDownCategories = 0x3e4ccccd;
      local_298.HandleEventBubbleUpCategories = 0x3f800000;
      System_Collections_Generic_Dictionary_object__Color___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                 (Il2CppObject *)"primary",(UnityEngine_Color_o *)&local_298,
                 (MethodInfo_1465870 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item)
      ;
      pSVar1 = (__this->fields)._colors;
      if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
        local_298.DefaultActionCategories = 0x3f570a3d;
        local_298.DefaultActionAtTargetCategories = 0x3dcccccd;
        local_298.HandleEventTrickleDownCategories = 0x3e051eb8;
        local_298.HandleEventBubbleUpCategories = 0x3f800000;
        System_Collections_Generic_Dictionary_object__Color___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                   (Il2CppObject *)"destructive",(UnityEngine_Color_o *)&local_298,
                   (MethodInfo_1465870 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
        pSVar1 = (__this->fields)._colors;
        if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          local_298.DefaultActionCategories = 0x3ee147ae;
          local_298.DefaultActionAtTargetCategories = 0x3e947ae1;
          local_298.HandleEventTrickleDownCategories = 0x3f266666;
          local_298.HandleEventBubbleUpCategories = 0x3f800000;
          System_Collections_Generic_Dictionary_object__Color___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                     (Il2CppObject *)"secondary",(UnityEngine_Color_o *)&local_298,
                     (MethodInfo_1465870 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
          pSVar1 = (__this->fields)._colors;
          if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
            local_298.DefaultActionCategories = 0;
            local_298.DefaultActionAtTargetCategories = 0x3f2e147b;
            local_298.HandleEventTrickleDownCategories = 0x3f51eb85;
            local_298.HandleEventBubbleUpCategories = 0x3f800000;
            System_Collections_Generic_Dictionary_object__Color___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                       (Il2CppObject *)"workshop",(UnityEngine_Color_o *)&local_298,
                       (MethodInfo_1465870 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
            pSVar1 = (__this->fields)._colors;
            if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
              local_298.DefaultActionCategories = 0x3f6b851f;
              local_298.DefaultActionAtTargetCategories = 0x3f23d70a;
              local_298.HandleEventTrickleDownCategories = 0x3da3d70a;
              local_298.HandleEventBubbleUpCategories = 0x3f800000;
              System_Collections_Generic_Dictionary_object__Color___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                         (Il2CppObject *)"warning",(UnityEngine_Color_o *)&local_298,
                         (MethodInfo_1465870 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
              pSVar1 = (__this->fields)._colors;
              if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                local_298.DefaultActionCategories = 0x3df5c28f;
                local_298.DefaultActionAtTargetCategories = 0x3f1eb852;
                local_298.HandleEventTrickleDownCategories = 0x3ea3d70a;
                local_298.HandleEventBubbleUpCategories = 0x3f800000;
                System_Collections_Generic_Dictionary_object__Color___set_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (Il2CppObject *)"success",(UnityEngine_Color_o *)&local_298,
                           (MethodInfo_1465870 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                pSVar1 = (__this->fields)._colors;
                if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                  local_298.DefaultActionCategories = 0x3f800000;
                  local_298.DefaultActionAtTargetCategories = 0x3f28f5c3;
                  local_298.HandleEventTrickleDownCategories = 0x3df5c28f;
                  local_298.HandleEventBubbleUpCategories = 0x3f5c28f6;
                  System_Collections_Generic_Dictionary_object__Color___set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                             (Il2CppObject *)"settingsDirty",(UnityEngine_Color_o *)&local_298,
                             (MethodInfo_1465870 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                  pSVar1 = (__this->fields)._colors;
                  if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                    local_298.DefaultActionCategories = 0x3f800000;
                    local_298.DefaultActionAtTargetCategories = 0x3f800000;
                    local_298.HandleEventTrickleDownCategories = 0x3f800000;
                    local_298.HandleEventBubbleUpCategories = 0x3f800000;
                    System_Collections_Generic_Dictionary_object__Color___set_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                               (Il2CppObject *)"surface",(UnityEngine_Color_o *)&local_298,
                               (MethodInfo_1465870 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                    pSVar1 = (__this->fields)._colors;
                    if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                      local_298._0_8_ = 0x3f7333333f733333;
                      local_298.HandleEventTrickleDownCategories = 0x3f733333;
                      local_298.HandleEventBubbleUpCategories = 0x3f800000;
                      System_Collections_Generic_Dictionary_object__Color___set_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                 (Il2CppObject *)"surfaceSoft",(UnityEngine_Color_o *)&local_298,
                                 (MethodInfo_1465870 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                      pSVar1 = (__this->fields)._colors;
                      if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                        local_298.DefaultActionCategories = 0x3ca3d70a;
                        local_298.DefaultActionAtTargetCategories = 0x3ca3d70a;
                        local_298.HandleEventTrickleDownCategories = 0x3ca3d70a;
                        local_298.HandleEventBubbleUpCategories = 0x3f800000;
                        System_Collections_Generic_Dictionary_object__Color___set_Item
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                   (Il2CppObject *)"text",(UnityEngine_Color_o *)&local_298,
                                   (MethodInfo_1465870 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                        pSVar1 = (__this->fields)._colors;
                        if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                          local_298.DefaultActionCategories = 0x3e4ccccd;
                          local_298.DefaultActionAtTargetCategories = 0x3e4ccccd;
                          local_298.HandleEventTrickleDownCategories = 0x3e4ccccd;
                          local_298.HandleEventBubbleUpCategories = 0x3f800000;
                          System_Collections_Generic_Dictionary_object__Color___set_Item
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                     (Il2CppObject *)"textMuted",(UnityEngine_Color_o *)&local_298,
                                     (MethodInfo_1465870 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                          pSVar1 = (__this->fields)._colors;
                          if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                            System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                      ((UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                        *)&local_298,
                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                       (Il2CppObject *)"text",
                                       (MethodInfo_1454D90 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item)
                            ;
                            pSVar2 = (__this->fields)._colors;
                            if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                        (local_c8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                  pSVar2,(Il2CppObject *)"text",
                                         (MethodInfo_1454D90 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                        );
                              pSVar2 = (__this->fields)._colors;
                              if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                          ((UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                            *)&local_2a8,
                                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                                           (Il2CppObject *)"text",
                                           (MethodInfo_1454D90 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                          );
                                iVar4 = local_298.DefaultActionCategories;
                                local_298.DefaultActionAtTargetCategories =
                                     local_c8[0].fields.DefaultActionAtTargetCategories;
                                local_298.DefaultActionCategories = iVar4;
                                local_298.HandleEventBubbleUpCategories = 0x3f400000;
                                local_298.HandleEventTrickleDownCategories =
                                     local_2a8.HandleEventTrickleDownCategories;
                                System_Collections_Generic_Dictionary_object__Color___set_Item
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                           (Il2CppObject *)"settingInfoIcon",
                                           (UnityEngine_Color_o *)&local_298,
                                           (MethodInfo_1465870 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                          );
                                pSVar1 = (__this->fields)._colors;
                                if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                  local_2a8.DefaultActionCategories = 0x3f800000;
                                  local_2a8.DefaultActionAtTargetCategories = 0x3f800000;
                                  local_2a8.HandleEventTrickleDownCategories = 0x3f800000;
                                  local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                  System_Collections_Generic_Dictionary_object__Color___set_Item
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                             (Il2CppObject *)"buttonText",
                                             (UnityEngine_Color_o *)&local_2a8,
                                             (MethodInfo_1465870 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                            );
                                  pSVar1 = (__this->fields)._colors;
                                  if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0)
                                  {
                                    local_2a8.DefaultActionCategories = 0;
                                    local_2a8.DefaultActionAtTargetCategories = 0;
                                    local_2a8.HandleEventTrickleDownCategories = 0;
                                    local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                    System_Collections_Generic_Dictionary_object__Color___set_Item
                                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1
                                               ,(Il2CppObject *)"negative",
                                               (UnityEngine_Color_o *)&local_2a8,
                                               (MethodInfo_1465870 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                              );
                                    pSVar1 = (__this->fields)._colors;
                                    if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)
                                                  0x0) {
                                      local_2a8.DefaultActionCategories = 0x3f800000;
                                      local_2a8.DefaultActionAtTargetCategories = 0x3f800000;
                                      local_2a8.HandleEventTrickleDownCategories = 0x3f800000;
                                      local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                      System_Collections_Generic_Dictionary_object__Color___set_Item
                                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                 pSVar1,(Il2CppObject *)"negativeText",
                                                 (UnityEngine_Color_o *)&local_2a8,
                                                 (MethodInfo_1465870 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                );
                                      pSVar1 = (__this->fields)._colors;
                                      if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o *)
                                                    0x0) {
                                        local_2a8.DefaultActionCategories = 0x3f70a3d7;
                                        local_2a8.DefaultActionAtTargetCategories = 0x3f70a3d7;
                                        local_2a8.HandleEventTrickleDownCategories = 0x3f70a3d7;
                                        local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                        System_Collections_Generic_Dictionary_object__Color___set_Item
                                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                   pSVar1,(Il2CppObject *)"inputBg",
                                                   (UnityEngine_Color_o *)&local_2a8,
                                                   (MethodInfo_1465870 *)
                                                   MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                  );
                                        pSVar1 = (__this->fields)._colors;
                                        if (pSVar1 != (System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                          local_2a8.DefaultActionCategories = 0x3f59999a;
                                          local_2a8.DefaultActionAtTargetCategories = 0x3f59999a;
                                          local_2a8.HandleEventTrickleDownCategories = 0x3f59999a;
                                          local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                          System_Collections_Generic_Dictionary_object__Color___set_Item
                                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                     pSVar1,(Il2CppObject *)"engravedBg",
                                                     (UnityEngine_Color_o *)&local_2a8,
                                                     (MethodInfo_1465870 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                    );
                                          pSVar1 = (__this->fields)._colors;
                                          if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                            local_2a8.DefaultActionCategories = 0x3ed70a3d;
                                            local_2a8.DefaultActionAtTargetCategories = 0x3ed70a3d;
                                            local_2a8.HandleEventTrickleDownCategories = 0x3ed70a3d;
                                            local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                            System_Collections_Generic_Dictionary_object__Color___set_Item
                                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"inputPlaceholder",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                      );
                                            pSVar1 = (__this->fields)._colors;
                                            if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                              System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                        ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"primary",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                              System_Collections_Generic_Dictionary_object__Color___set_Item
                                                        ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"focusRing",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                              pSVar1 = (__this->fields)._colors;
                                              if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                local_2a8.DefaultActionCategories = 0x3ca3d70a;
                                                local_2a8.DefaultActionAtTargetCategories = 0x3ca3d70a;
                                                local_2a8.HandleEventTrickleDownCategories = 0x3ca3d70a;
                                                local_2a8.HandleEventBubbleUpCategories = 0x3f75c28f;
                                                System_Collections_Generic_Dictionary_object__Color___set_Item
                                                          ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"tooltipBg",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                pSVar1 = (__this->fields)._colors;
                                                if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                  local_2a8.DefaultActionCategories = 0x3f800000;
                                                  local_2a8.DefaultActionAtTargetCategories = 0x3f800000;
                                                  local_2a8.HandleEventTrickleDownCategories = 0x3f800000;
                                                  local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                                  System_Collections_Generic_Dictionary_object__Color___set_Item
                                                            ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"tooltipText",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                  pSVar1 = (__this->fields)._colors;
                                                  if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                    local_2a8.DefaultActionCategories = 0;
                                                    local_2a8.DefaultActionAtTargetCategories = 0;
                                                    local_2a8.HandleEventTrickleDownCategories = 0;
                                                    local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                                    System_Collections_Generic_Dictionary_object__Color___set_Item
                                                              ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"void",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                    pSVar1 = (__this->fields)._colors;
                                                    if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                      local_2a8.DefaultActionCategories = 0;
                                                      local_2a8.DefaultActionAtTargetCategories = 0;
                                                      local_2a8.HandleEventTrickleDownCategories = 0;
                                                      local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                                      System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"brushSidePanelOutline",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                      pSVar1 = (__this->fields)._colors;
                                                      if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"surface",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"paper",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"surface",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"panel",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"surfaceSoft",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"panelSoft",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"text",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"ink",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"textMuted",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"muted",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"engravedBg",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"profileCardAvatarBg",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"surfaceSoft",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"profileCardAvatarBorder",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"engravedBg",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"profileCardBannerBg",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         local_2a8.DefaultActionCategories = 0x3f3851ec;
                                                         local_2a8.DefaultActionAtTargetCategories =
                                                              0x3f3851ec;
                                                         local_2a8.HandleEventTrickleDownCategories =
                                                              0x3f3851ec;
                                                         local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"skeletonBase",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         local_2a8.DefaultActionCategories = 0x3f51eb85;
                                                         local_2a8.DefaultActionAtTargetCategories =
                                                              0x3f51eb85;
                                                         local_2a8.HandleEventTrickleDownCategories =
                                                              0x3f51eb85;
                                                         local_2a8.HandleEventBubbleUpCategories = 0x3f800000;
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"skeletonPulse",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"primary",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"accent",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._colors;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                                                                 ((
                                                       UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o
                                                       *)&local_2a8,
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pSVar1,(Il2CppObject *)"secondary",
                                                       (MethodInfo_1454D90 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar1,(Il2CppObject *)"accent2",
                                                       (UnityEngine_Color_o *)&local_2a8,
                                                       (MethodInfo_1465870 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._motions;
                                                       value = il2cpp_codegen_object_new
                                                                         ((Il2CppClass *)
                                                                                                                                                    
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionToken);
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       value,(MethodInfo *)0x0);
                                                       if (value != (
                                                       Gisketch_Aottg2UI_Data_GisketchMotionToken_o *)0x0) {
                                                         (value->fields).name = "screenSlide";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(value->fields).name,
                                                                    "screenSlide");
                                                         (value->fields).preset = "slide";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(value->fields).preset,
                                                                    "slide");
                                                         (value->fields).duration = 0.053;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"screenSlide"
                                                                  ,(Il2CppObject *)value,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "default";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "default");
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "clear");
                                                         (pGVar5->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor,
                                                                    "text");
                                                         (pGVar5->fields).fontFamily = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).fontFamily,
                                                                    "text");
                                                         local_148.hasValue = false;
                                                         local_148._1_3_ = 0;
                                                         local_148.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Data_SqlTypes_SqlInt32_o *)
                                                                    &local_148,400,
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar5->fields).fontWeight.fields = local_148;
                                                         local_d8.hasValue = false;
                                                         local_d8._1_3_ = 0;
                                                         local_d8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_d8,24.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).fontSize.fields = local_d8;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"default"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "tooltip";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "tooltip");
                                                         (pGVar5->fields).background = "tooltipBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "tooltipBg");
                                                         local_238.hasValue = false;
                                                         local_238._1_3_ = 0;
                                                         local_238.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_238,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).padding.fields = local_238;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"tooltip"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->
                                                           _2).cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                                                                                        
                                                       TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                                       }
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("tooltipText","tooltipText",
                                                                  "text",500,16.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"tooltipText"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "screen";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "screen");
                                                         (pGVar5->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "surface");
                                                         local_230.hasValue = false;
                                                         local_230._1_3_ = 0;
                                                         local_230.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_230,
                                                                    44.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).padding.fields = local_230;
                                                         local_228.hasValue = false;
                                                         local_228._1_3_ = 0;
                                                         local_228.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_228,
                                                                    14.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).gap.fields = local_228;
                                                         (pGVar5->fields).motion = "screenSlide";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).motion,
                                                                    "screenSlide");
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"screen"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "screenFlush";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "screenFlush");
                                                         (pGVar5->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "surface");
                                                         local_220.hasValue = false;
                                                         local_220._1_3_ = 0;
                                                         local_220.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_220,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).padding.fields = local_220;
                                                         local_218.hasValue = false;
                                                         local_218._1_3_ = 0;
                                                         local_218.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_218,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_218;
                                                         (pGVar5->fields).motion = "screenSlide";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).motion,
                                                                    "screenSlide");
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"screenFlush"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "scrollView";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "scrollView");
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "clear");
                                                         local_210.hasValue = false;
                                                         local_210._1_3_ = 0;
                                                         local_210.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_210,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).padding.fields = local_210;
                                                         local_208.hasValue = false;
                                                         local_208._1_3_ = 0;
                                                         local_208.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_208,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_208;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"scrollView"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "scrollbar";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "scrollbar");
                                                         (pGVar5->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "surfaceSoft");
                                                         pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (12.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).width = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).width,pGVar6);
                                                       local_res8[0].hasValue = false;
                                                       local_res8[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_res8
                                                                  ,'\x01',MethodInfo_System_Nullable_bool_ctor
                                                                 );
                                                       (pGVar5->fields).textured.fields = local_res8[0];
                                                       local_res18[0].hasValue = false;
                                                       local_res18[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)
                                                                  local_res18,'\x01',
                                                                  MethodInfo_System_Nullable_bool_ctor);
                                                       (pGVar5->fields).worn.fields = local_res18[0];
                                                       local_200.hasValue = false;
                                                       local_200._1_3_ = 0;
                                                       local_200.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_200,4.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).wornStainScale.fields = local_200;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"scrollbar"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "scrollbarThumb";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "scrollbarThumb");
                                                         (pGVar5->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "primary");
                                                         local_res20[0].hasValue = false;
                                                         local_res20[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_res20,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_res20[0];
                                                         local_288[0].hasValue = false;
                                                         local_288[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_288,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_288[0];
                                                         local_1f8.hasValue = false;
                                                         local_1f8._1_3_ = 0;
                                                         local_1f8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1f8,1.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).relief.fields = local_1f8;
                                                         local_284[0].hasValue = false;
                                                         local_284[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_284,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).reliefGradient.fields = local_284[0]
                                                         ;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"scrollbarThumb"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "card";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "card");
                                                         (pGVar5->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "surface");
                                                         local_1f0.hasValue = false;
                                                         local_1f0._1_3_ = 0;
                                                         local_1f0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1f0,
                                                                    24.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).padding.fields = local_1f0;
                                                         local_1e8.hasValue = false;
                                                         local_1e8._1_3_ = 0;
                                                         local_1e8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1e8,
                                                                    12.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).gap.fields = local_1e8;
                                                         pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (760.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).width = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).width,pGVar6);
                                                       local_280[0].hasValue = false;
                                                       local_280[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_280,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar5->fields).textured.fields = local_280[0];
                                                       local_27c[0].hasValue = false;
                                                       local_27c[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_27c,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar5->fields).worn.fields = local_27c[0];
                                                       local_1e0.hasValue = false;
                                                       local_1e0._1_3_ = 0;
                                                       local_1e0.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_1e0,4.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).wornStainScale.fields = local_1e0;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"card"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "row";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "row");
                                                         (pGVar5->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "surfaceSoft");
                                                         local_1d8.hasValue = false;
                                                         local_1d8._1_3_ = 0;
                                                         local_1d8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1d8,
                                                                    10.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).padding.fields = local_1d8;
                                                         local_1d0.hasValue = false;
                                                         local_1d0._1_3_ = 0;
                                                         local_1d0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1d0,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_1d0;
                                                         local_278[0].hasValue = false;
                                                         local_278[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_278,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_278[0];
                                                         local_274[0].hasValue = false;
                                                         local_274[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_274,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_274[0];
                                                         local_1c8.hasValue = false;
                                                         local_1c8._1_3_ = 0;
                                                         local_1c8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1c8,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_1c8;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"row"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "skeleton";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "skeleton");
                                                         (pGVar5->fields).background = "skeletonBase";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "skeletonBase");
                                                         (pGVar5->fields).textColor = "skeletonPulse";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor,
                                                                    "skeletonPulse");
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"skeleton"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("header","text",
                                                                  "header",400,44.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"header"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("settingLabel","text",
                                                                  "text",500,20.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"settingLabel"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("settingStepperValue","text",
                                                                  "text",500,20.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"settingStepperValue"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar3,(Il2CppObject *)"settingStepperValue"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment,
                                                                    "center");
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "settingInfoIcon";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "settingInfoIcon");
                                                         (pGVar5->fields).background = "settingInfoIcon";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "settingInfoIcon");
                                                         pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (24.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).width = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).width,pGVar6);
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (24.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).height = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).height,pGVar6);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"settingInfoIcon"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "settingsDirtyStrip";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "settingsDirtyStrip");
                                                         (pGVar5->fields).background = "settingsDirty";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "settingsDirty");
                                                         pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (3.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).width = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).width,pGVar6);
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (34.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).height = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).height,pGVar6);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"settingsDirtyStrip"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "settingsDirtyDot";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "settingsDirtyDot");
                                                         (pGVar5->fields).background = "settingsDirty";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "settingsDirty");
                                                         pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (7.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).width = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).width,pGVar6);
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (7.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).height = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).height,pGVar6);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"settingsDirtyDot"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("subtext","textMuted",
                                                                  "subtext",400,24.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"subtext"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("text","textMuted",
                                                                  "text",400,20.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"text"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "dialog";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "dialog");
                                                         (pGVar5->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "surface");
                                                         local_1c0.hasValue = false;
                                                         local_1c0._1_3_ = 0;
                                                         local_1c0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1c0,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).padding.fields = local_1c0;
                                                         local_1b8.hasValue = false;
                                                         local_1b8._1_3_ = 0;
                                                         local_1b8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1b8,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_1b8;
                                                         pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (620.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).width = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).width,pGVar6);
                                                       (pGVar5->fields).motion = "pop";
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).motion,
                                                                  "pop");
                                                       local_270[0].hasValue = false;
                                                       local_270[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_270,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar5->fields).textured.fields = local_270[0];
                                                       local_26c[0].hasValue = false;
                                                       local_26c[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_26c,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar5->fields).worn.fields = local_26c[0];
                                                       local_1b0.hasValue = false;
                                                       local_1b0._1_3_ = 0;
                                                       local_1b0.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_1b0,4.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).wornStainScale.fields = local_1b0;
                                                       local_1a8.hasValue = false;
                                                       local_1a8._1_3_ = 0;
                                                       local_1a8.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_1a8,1.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).relief.fields = local_1a8;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialog"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "dialogHeader";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "dialogHeader");
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "clear");
                                                         local_1a0.hasValue = false;
                                                         local_1a0._1_3_ = 0;
                                                         local_1a0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1a0,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_1a0;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogHeader"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "dialogBody";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "dialogBody");
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "clear");
                                                         local_198.hasValue = false;
                                                         local_198._1_3_ = 0;
                                                         local_198.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_198,
                                                                    18.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).padding.fields = local_198;
                                                         local_190.hasValue = false;
                                                         local_190._1_3_ = 0;
                                                         local_190.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_190,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_190;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogBody"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "dialogFooter";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "dialogFooter");
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "clear");
                                                         local_188.hasValue = false;
                                                         local_188._1_3_ = 0;
                                                         local_188.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_188,
                                                                    18.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).padding.fields = local_188;
                                                         local_180.hasValue = false;
                                                         local_180._1_3_ = 0;
                                                         local_180.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_180,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_180;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogFooter"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("dialogTitle","text",
                                                                  "header",400,34.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogTitle"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "dialogTitleBar";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "dialogTitleBar");
                                                         (pGVar5->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "primary");
                                                         local_178.hasValue = false;
                                                         local_178._1_3_ = 0;
                                                         local_178.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_178,
                                                                    18.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).paddingX.fields = local_178;
                                                         local_170.hasValue = false;
                                                         local_170._1_3_ = 0;
                                                         local_170.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_170,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).paddingY.fields = local_170;
                                                         local_168.hasValue = false;
                                                         local_168._1_3_ = 0;
                                                         local_168.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_168,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_168;
                                                         local_268[0].hasValue = false;
                                                         local_268[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_268,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_268[0];
                                                         local_264[0].hasValue = false;
                                                         local_264[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_264,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_264[0];
                                                         local_160.hasValue = false;
                                                         local_160._1_3_ = 0;
                                                         local_160.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_160,1.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).relief.fields = local_160;
                                                         local_260[0].hasValue = false;
                                                         local_260[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_260,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).reliefGradient.fields = local_260[0]
                                                         ;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogTitleBar"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("dialogTitleText","buttonText",
                                                                  "header",400,26.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogTitleText"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("dialogTitleTextQuiet","text",
                                                                  "header",400,26.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogTitleTextQuiet"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("dialogTitleTextNegative","negativeText",
                                                                  "header",400,26.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogTitleTextNegative"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                                                 ("dialogTitleIcon","buttonText",
                                                                  24.0,(MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogTitleIcon"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                                                 ("dialogTitleIconQuiet","text",
                                                                  24.0,(MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogTitleIconQuiet"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                                                 ("dialogTitleIconNegative","negativeText",
                                                                  24.0,(MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogTitleIconNegative"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("dialogTitleCloseButton","primary",
                                                                  "header",400,22.0,34.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"dialogTitleCloseButton"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (__this,"Secondary",
                                                                  "secondary","buttonText",
                                                                  (MethodInfo *)0x0);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (__this,"Workshop",
                                                                  "workshop","buttonText",
                                                                  (MethodInfo *)0x0);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (__this,"Quiet",
                                                                  "surfaceSoft","text",
                                                                  (MethodInfo *)0x0);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (__this,"Danger",
                                                                  "destructive","buttonText",
                                                                  (MethodInfo *)0x0);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (__this,"Negative",
                                                                  "negative","negativeText",
                                                                  (MethodInfo *)0x0);
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "stepper";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "stepper");
                                                         (pGVar5->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "surfaceSoft");
                                                         local_158.hasValue = false;
                                                         local_158._1_3_ = 0;
                                                         local_158.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_158,
                                                                    10.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).padding.fields = local_158;
                                                         local_150.hasValue = false;
                                                         local_150._1_3_ = 0;
                                                         local_150.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_150,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_150;
                                                         local_25c[0].hasValue = false;
                                                         local_25c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_25c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_25c[0];
                                                         local_258[0].hasValue = false;
                                                         local_258[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_258,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_258[0];
                                                         local_108.hasValue = false;
                                                         local_108._1_3_ = 0;
                                                         local_108.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_108,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_108;
                                                         if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"stepper"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "popover";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "popover");
                                                         (pGVar5->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "surface");
                                                         local_140.hasValue = false;
                                                         local_140._1_3_ = 0;
                                                         local_140.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_140,
                                                                    12.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).padding.fields = local_140;
                                                         local_138.hasValue = false;
                                                         local_138._1_3_ = 0;
                                                         local_138.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_138,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_138;
                                                         pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (420.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).width = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).width,pGVar6);
                                                       (pGVar5->fields).motion = "balloon";
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).motion,
                                                                  "balloon");
                                                       local_254[0].hasValue = false;
                                                       local_254[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_254,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar5->fields).textured.fields = local_254[0];
                                                       local_250[0].hasValue = false;
                                                       local_250[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_250,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar5->fields).worn.fields = local_250[0];
                                                       local_130.hasValue = false;
                                                       local_130._1_3_ = 0;
                                                       local_130.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_130,4.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).wornStainScale.fields = local_130;
                                                       local_128.hasValue = false;
                                                       local_128._1_3_ = 0;
                                                       local_128.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_128,1.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).relief.fields = local_128;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"popover"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonPrimary","primary",
                                                                  "header",400,21.0,42.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonPrimary"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonSecondary","secondary",
                                                                  "header",500,20.0,40.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonSecondary"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonWorkshop","workshop",
                                                                  "header",500,20.0,40.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonWorkshop"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonQuiet","surfaceSoft",
                                                                  "header",500,20.0,40.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonQuiet"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonQuiet"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor,
                                                                    "text");
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "buttonHeaderTab";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "buttonHeaderTab");
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "clear");
                                                         (pGVar5->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor,
                                                                    "text");
                                                         (pGVar5->fields).fontFamily = "header";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).fontFamily,
                                                                    "header");
                                                         local_120.hasValue = false;
                                                         local_120._1_3_ = 0;
                                                         local_120.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Data_SqlTypes_SqlInt32_o *)
                                                                    &local_120,400,
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar5->fields).fontWeight.fields = local_120;
                                                         local_118.hasValue = false;
                                                         local_118._1_3_ = 0;
                                                         local_118.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_118,
                                                                    44.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).fontSize.fields = local_118;
                                                         (pGVar5->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment,
                                                                    "left");
                                                         local_110.hasValue = false;
                                                         local_110._1_3_ = 0;
                                                         local_110.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_110,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).paddingX.fields = local_110;
                                                         pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (72.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).height = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).height,pGVar6);
                                                       local_24c[0].hasValue = false;
                                                       local_24c[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_24c,
                                                                  '\0',MethodInfo_System_Nullable_bool_ctor);
                                                       (pGVar5->fields).textured.fields = local_24c[0];
                                                       local_248[0].hasValue = false;
                                                       local_248[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_248,
                                                                  '\0',MethodInfo_System_Nullable_bool_ctor);
                                                       (pGVar5->fields).worn.fields = local_248[0];
                                                       local_d0.hasValue = false;
                                                       local_d0._1_3_ = 0;
                                                       local_d0.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_d0,0.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).relief.fields = local_d0;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonHeaderTab"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonPlain","paper",
                                                                  "header",500,20.0,40.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonPlain"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonPlain"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor,
                                                                    "text");
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("keybindButton","paper",
                                                                  "header",500,20.0,46.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"keybindButton"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar3,(Il2CppObject *)"keybindButton"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor,
                                                                    "text");
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonDanger","destructive",
                                                                  "header",700,20.0,40.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonDanger"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonNegative","negative",
                                                                  "header",500,20.0,40.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonNegative"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonNegative"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textColor = "negativeText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor,
                                                                    "negativeText");
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "inputField";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).name,
                                                                    "inputField");
                                                         (pGVar5->fields).background = "engravedBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background,
                                                                    "engravedBg");
                                                         (pGVar5->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor,
                                                                    "text");
                                                         (pGVar5->fields).fontFamily = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).fontFamily,
                                                                    "text");
                                                         local_100.hasValue = false;
                                                         local_100._1_3_ = 0;
                                                         local_100.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Data_SqlTypes_SqlInt32_o *)
                                                                    &local_100,400,
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar5->fields).fontWeight.fields = local_100;
                                                         local_f8.hasValue = false;
                                                         local_f8._1_3_ = 0;
                                                         local_f8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_f8,19.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).fontSize.fields = local_f8;
                                                         local_f0.hasValue = false;
                                                         local_f0._1_3_ = 0;
                                                         local_f0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_f0,12.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).padding.fields = local_f0;
                                                         pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (280.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).width = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).width,pGVar6);
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (42.0,(MethodInfo *)0x0);
                                                       (pGVar5->fields).height = pGVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).height,pGVar6);
                                                       local_244[0].hasValue = false;
                                                       local_244[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_244,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar5->fields).textured.fields = local_244[0];
                                                       local_240[0].hasValue = false;
                                                       local_240[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_240,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar5->fields).worn.fields = local_240[0];
                                                       local_e8.hasValue = false;
                                                       local_e8._1_3_ = 0;
                                                       local_e8.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_e8,4.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).wornStainScale.fields = local_e8;
                                                       local_e0.hasValue = false;
                                                       local_e0._1_3_ = 0;
                                                       local_e0.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_e0,-1.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).relief.fields = local_e0;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"inputField"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("inputPlaceholder","inputPlaceholder",
                                                                  "text",400,19.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"inputPlaceholder"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonPrimary"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"primaryButton"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar3,(Il2CppObject *)"buttonSecondary"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"secondaryButton"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if (Il2CppMethodInitialized_184341f2a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&
                                                       TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"settingsCategoryTitle");
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"settingsSubtabStrip");
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"header");
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"text");
                                                       Il2CppMethodInitialized_184341f2a = '\x01';
                                                       }
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->
                                                           _2).cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                                                                                        
                                                       TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                                       }
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("settingsCategoryTitle","text",
                                                                  "header",400,56.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"settingsCategoryTitle"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("settingsSubtabStrip","text",
                                                                  "header",400,30.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"settingsSubtabStrip"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddAtomDefaults
                                                                 (__this,(MethodInfo *)0x0);
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
                                                       }
                                                       }
                                                       }
                                                       ThrowNullReferenceException();
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddDialogVariant
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* suffix, System_String_o* background, System_String_o* textColor, const MethodInfo* method);
// 0x181891280

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *suffix,
               System_String_o *background,System_String_o *textColor,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_res10 [4];
  System_Nullable_bool__Fields local_res18 [4];
  System_Nullable_float__Fields local_58;
  System_Nullable_float__Fields local_50;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40;
  
  if (Il2CppMethodInitialized_184341f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButton");
    Il2CppMethodInitialized_184341f1e = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pSVar2 = System_String__Concat_1969e50("dialogTitleBar",suffix,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969e50("dialogTitleBar",suffix,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  if (Il2CppMethodInitialized_184341f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_184341f1f = '\x01';
  }
  pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar4->fields).name = pSVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).name,pSVar3);
    (pGVar4->fields).background = background;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).background,background);
    local_58.hasValue = false;
    local_58._1_3_ = 0;
    local_58.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_58,18.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (pGVar4->fields).paddingX.fields = local_58;
    local_50.hasValue = false;
    local_50._1_3_ = 0;
    local_50.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_50,8.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (pGVar4->fields).paddingY.fields = local_50;
    local_48.hasValue = false;
    local_48._1_3_ = 0;
    local_48.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_48,8.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (pGVar4->fields).gap.fields = local_48;
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (pGVar4->fields).textured.fields = local_res8[0];
    local_res10[0].hasValue = false;
    local_res10[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res10,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (pGVar4->fields).worn.fields = local_res10[0];
    local_40.hasValue = false;
    local_40._1_3_ = 0;
    local_40.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_40,1.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (pGVar4->fields).relief.fields = local_40;
    local_res18[0].hasValue = false;
    local_res18[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res18,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (pGVar4->fields).reliefGradient.fields = local_res18[0];
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar4,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      pSVar2 = System_String__Concat_1969e50("dialogTitleCloseButton",suffix,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50("dialogTitleCloseButton",suffix,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                         (pSVar3,background,"header",400,22.0,34.0,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar4,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
        pSVar2 = System_String__Concat_1969e50("dialogTitleCloseButton",suffix,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pGVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)pSVar2,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                             );
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            (pGVar4->fields).textColor = textColor;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textColor,textColor);
            return;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$DialogTitleBar
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__DialogTitleBar (System_String_o* name, System_String_o* background, const MethodInfo* method);
// 0x181896ff0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__DialogTitleBar
          (System_String_o *name,System_String_o *background,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_res20 [4];
  System_Nullable_bool__Fields local_38 [4];
  System_Nullable_float__Fields local_30;
  System_Nullable_float__Fields local_28;
  System_Nullable_float__Fields local_20;
  System_Nullable_float__Fields local_18 [2];
  
  if (Il2CppMethodInitialized_184341f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_184341f1f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,name);
    (__this->fields).background = background;
    Il2CppCodeGenWriteBarrier(&(__this->fields).background,background);
    local_30.hasValue = false;
    local_30._1_3_ = 0;
    local_30.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_30,18.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).paddingX.fields = local_30;
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_28,8.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).paddingY.fields = local_28;
    local_20.hasValue = false;
    local_20._1_3_ = 0;
    local_20.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_20,8.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).gap.fields = local_20;
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (__this->fields).textured.fields = local_res8[0];
    local_res20[0].hasValue = false;
    local_res20[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res20,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (__this->fields).worn.fields = local_res20[0];
    local_18[0].hasValue = false;
    local_18[0]._1_3_ = 0;
    local_18[0].value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)local_18,1.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).relief.fields = local_18[0];
    local_38[0].hasValue = false;
    local_38[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_38,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (__this->fields).reliefGradient.fields = local_38[0];
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ButtonStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle (System_String_o* name, System_String_o* background, System_String_o* fontFamily, int32_t fontWeight, float fontSize, float height, const MethodInfo* method);
// 0x1818965e0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
          (System_String_o *name,System_String_o *background,System_String_o *fontFamily,int32_t fontWeight,
          float fontSize,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *value;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_38 [4];
  System_Nullable_int__Fields local_30;
  System_Nullable_float__Fields local_28;
  System_Nullable_float__Fields local_20;
  
  if (Il2CppMethodInitialized_184341f20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"slide");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    Il2CppMethodInitialized_184341f20 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,name);
    (__this->fields).background = background;
    Il2CppCodeGenWriteBarrier(&(__this->fields).background,background);
    (__this->fields).textColor = "buttonText";
    Il2CppCodeGenWriteBarrier(&(__this->fields).textColor,"buttonText");
    (__this->fields).fontFamily = fontFamily;
    Il2CppCodeGenWriteBarrier(&(__this->fields).fontFamily,fontFamily);
    local_30.hasValue = false;
    local_30._1_3_ = 0;
    local_30.value = 0;
    System_Nullable_int____ctor
              ((System_Data_SqlTypes_SqlInt32_o *)&local_30,fontWeight,MethodInfo_System_Nullable_int_ctor);
    (__this->fields).fontWeight.fields = local_30;
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_28,fontSize,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).fontSize.fields = local_28;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    value = Gisketch_Aottg2UI_Styling_GisketchTheme__Points(height,(MethodInfo *)0x0);
    (__this->fields).height = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).height,value);
    (__this->fields).motion = "slide";
    Il2CppCodeGenWriteBarrier(&(__this->fields).motion,"slide");
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (__this->fields).textured.fields = local_res8[0];
    local_38[0].hasValue = false;
    local_38[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_38,'\x01',MethodInfo_System_Nullable_bool_ctor);
    (__this->fields).worn.fields = local_38[0];
    local_20.hasValue = false;
    local_20._1_3_ = 0;
    local_20.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_20,1.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).relief.fields = local_20;
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$TextStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle (System_String_o* name, System_String_o* textColor, System_String_o* fontFamily, int32_t fontWeight, float fontSize, const MethodInfo* method);
// 0x181898280

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
          (System_String_o *name,System_String_o *textColor,System_String_o *fontFamily,int32_t fontWeight,
          float fontSize,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  System_Nullable_int__Fields local_res8;
  System_Nullable_float__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184341f21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_184341f21 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,name);
    (__this->fields).textColor = textColor;
    Il2CppCodeGenWriteBarrier(&(__this->fields).textColor,textColor);
    (__this->fields).fontFamily = fontFamily;
    Il2CppCodeGenWriteBarrier(&(__this->fields).fontFamily,fontFamily);
    local_res8.hasValue = false;
    local_res8._1_3_ = 0;
    local_res8.value = 0;
    System_Nullable_int____ctor
              ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,fontWeight,MethodInfo_System_Nullable_int_ctor);
    (__this->fields).fontWeight.fields = local_res8;
    local_28[0].hasValue = false;
    local_28[0]._1_3_ = 0;
    local_28[0].value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)local_28,fontSize,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).fontSize.fields = local_28[0];
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$Points
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Styling_GisketchTheme__Points (float value, const MethodInfo* method);
// 0x181898160

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__Points(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_184341f22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184341f22 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "point";
    Il2CppCodeGenWriteBarrier(&(__this->fields).unit,"point");
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddMainMenuDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddMainMenuDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x1818915e0

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddMainMenuDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_res18 [4];
  System_Nullable_bool__Fields local_res20 [4];
  System_Nullable_bool__Fields local_3c8 [2];
  System_Nullable_bool__Fields local_3c4 [2];
  System_Nullable_bool__Fields local_3c0 [2];
  System_Nullable_bool__Fields local_3bc [2];
  System_Nullable_bool__Fields local_3b8 [2];
  System_Nullable_bool__Fields local_3b4 [2];
  System_Nullable_bool__Fields local_3b0 [2];
  System_Nullable_bool__Fields local_3ac [2];
  System_Nullable_bool__Fields local_3a8 [2];
  System_Nullable_bool__Fields local_3a4 [2];
  System_Nullable_bool__Fields local_3a0 [2];
  System_Nullable_bool__Fields local_39c [2];
  System_Nullable_bool__Fields local_398 [2];
  System_Nullable_bool__Fields local_394 [2];
  System_Nullable_bool__Fields local_390 [2];
  System_Nullable_bool__Fields local_38c [2];
  System_Nullable_bool__Fields local_388 [2];
  System_Nullable_bool__Fields local_384 [2];
  System_Nullable_bool__Fields local_380 [2];
  System_Nullable_bool__Fields local_37c [2];
  System_Nullable_bool__Fields local_378 [2];
  System_Nullable_bool__Fields local_374 [2];
  System_Nullable_bool__Fields local_370 [2];
  System_Nullable_bool__Fields local_36c [2];
  System_Nullable_bool__Fields local_368 [2];
  System_Nullable_bool__Fields local_364 [2];
  System_Nullable_bool__Fields local_360 [2];
  System_Nullable_bool__Fields local_35c [2];
  System_Nullable_bool__Fields local_358 [2];
  System_Nullable_bool__Fields local_354 [2];
  System_Nullable_bool__Fields local_350 [2];
  System_Nullable_bool__Fields local_34c [2];
  System_Nullable_bool__Fields local_348 [2];
  System_Nullable_bool__Fields local_344 [2];
  System_Nullable_bool__Fields local_340 [2];
  System_Nullable_bool__Fields local_33c [2];
  System_Nullable_bool__Fields local_338 [2];
  System_Nullable_bool__Fields local_334 [2];
  System_Nullable_bool__Fields local_330 [2];
  System_Nullable_bool__Fields local_32c [2];
  System_Nullable_bool__Fields local_328 [2];
  System_Nullable_bool__Fields local_324 [2];
  System_Nullable_bool__Fields local_320 [2];
  System_Nullable_bool__Fields local_31c [2];
  System_Nullable_bool__Fields local_318 [2];
  System_Nullable_bool__Fields local_314 [2];
  System_Nullable_bool__Fields local_310 [2];
  System_Nullable_bool__Fields local_30c [2];
  System_Nullable_bool__Fields local_308 [2];
  System_Nullable_bool__Fields local_304 [2];
  System_Nullable_bool__Fields local_300 [2];
  System_Nullable_bool__Fields local_2fc [2];
  System_Nullable_bool__Fields local_2f8 [4];
  System_Nullable_float__Fields local_2f0;
  System_Nullable_float__Fields local_2e8;
  System_Nullable_float__Fields local_2e0;
  System_Nullable_float__Fields local_2d8;
  System_Nullable_float__Fields local_2d0;
  System_Nullable_float__Fields local_2c8;
  System_Nullable_float__Fields local_2c0;
  System_Nullable_float__Fields local_2b8;
  System_Nullable_float__Fields local_2b0;
  System_Nullable_float__Fields local_2a8;
  System_Nullable_float__Fields local_2a0;
  System_Nullable_float__Fields local_298;
  System_Nullable_float__Fields local_290;
  System_Nullable_float__Fields local_288;
  System_Nullable_float__Fields local_280;
  System_Nullable_float__Fields local_278;
  System_Nullable_int__Fields local_270;
  System_Nullable_float__Fields local_268;
  System_Nullable_float__Fields local_260;
  System_Nullable_int__Fields local_258;
  System_Nullable_float__Fields local_250;
  System_Nullable_float__Fields local_248;
  System_Nullable_float__Fields local_240;
  System_Nullable_float__Fields local_238;
  System_Nullable_float__Fields local_230;
  System_Nullable_float__Fields local_228;
  System_Nullable_float__Fields local_220;
  System_Nullable_float__Fields local_218;
  System_Nullable_float__Fields local_210;
  System_Nullable_float__Fields local_208;
  System_Nullable_float__Fields local_200;
  System_Nullable_float__Fields local_1f8;
  System_Nullable_float__Fields local_1f0;
  System_Nullable_float__Fields local_1e8;
  System_Nullable_float__Fields local_1e0;
  System_Nullable_float__Fields local_1d8;
  System_Nullable_float__Fields local_1d0;
  System_Nullable_float__Fields local_1c8;
  System_Nullable_float__Fields local_1c0;
  System_Nullable_float__Fields local_1b8;
  System_Nullable_float__Fields local_1b0;
  System_Nullable_float__Fields local_1a8;
  System_Nullable_float__Fields local_1a0;
  System_Nullable_float__Fields local_198;
  System_Nullable_float__Fields local_190;
  System_Nullable_float__Fields local_188;
  System_Nullable_float__Fields local_180;
  System_Nullable_float__Fields local_178;
  System_Nullable_float__Fields local_170;
  System_Nullable_int__Fields local_168;
  System_Nullable_float__Fields local_160;
  System_Nullable_float__Fields local_158;
  System_Nullable_float__Fields local_150;
  System_Nullable_float__Fields local_148;
  System_Nullable_int__Fields local_140;
  System_Nullable_float__Fields local_138;
  System_Nullable_float__Fields local_130;
  System_Nullable_float__Fields local_128;
  System_Nullable_float__Fields local_120;
  System_Nullable_float__Fields local_118;
  System_Nullable_float__Fields local_110;
  System_Nullable_float__Fields local_108;
  System_Nullable_float__Fields local_100;
  System_Nullable_float__Fields local_f8;
  System_Nullable_float__Fields local_f0;
  System_Nullable_float__Fields local_e8;
  System_Nullable_float__Fields local_e0;
  System_Nullable_float__Fields local_d8;
  System_Nullable_float__Fields local_d0;
  System_Nullable_int__Fields local_c8;
  System_Nullable_float__Fields local_c0;
  System_Nullable_float__Fields local_b8;
  System_Nullable_float__Fields local_b0;
  System_Nullable_float__Fields local_a8;
  System_Nullable_float__Fields local_a0 [15];
  
  if (Il2CppMethodInitialized_184341f23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"profileHoverDialog");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerBg");
    il2cpp_codegen_initialize_runtime_metadata(&"characterNamePreviewBg");
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsCategoryHeaderText");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBannerFrame");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewSelection");
    il2cpp_codegen_initialize_runtime_metadata(&"gridPickerLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBody");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialText");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerImage");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBodyText");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarBg");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardHandle");
    il2cpp_codegen_initialize_runtime_metadata(&"gridPickerItem");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewAvatar");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBody");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteSlotText");
    il2cpp_codegen_initialize_runtime_metadata(&"balloon");
    il2cpp_codegen_initialize_runtime_metadata(&"characterTextColorInput");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelShell");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanel");
    il2cpp_codegen_initialize_runtime_metadata(&"slide");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlayBody");
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    il2cpp_codegen_initialize_runtime_metadata(&"profileInfoStatus");
    il2cpp_codegen_initialize_runtime_metadata(&"inGamePauseDimOverlay");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogoSlot");
    il2cpp_codegen_initialize_runtime_metadata(&"void");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsContributorCell");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreateFavoritesTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelBrushButton");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"profileColorSwatch");
    il2cpp_codegen_initialize_runtime_metadata(&"gridPickerThumbnail");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBanner");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooterTopShadow");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsCategoryHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelScreenScroll");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooter");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelScreenContent");
    il2cpp_codegen_initialize_runtime_metadata(&"characterTextInput");
    il2cpp_codegen_initialize_runtime_metadata(&"surfaceSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewDialog");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarFrame");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewName");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelHeaderText");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    il2cpp_codegen_initialize_runtime_metadata(&"right");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsCategoryBrush");
    il2cpp_codegen_initialize_runtime_metadata(&"profileGridItem");
    il2cpp_codegen_initialize_runtime_metadata(&"profileGridItemThumbnail");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsInfoIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuBrushButton");
    il2cpp_codegen_initialize_runtime_metadata(&"profileGridItemLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipText");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewAvatarFrame");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogo");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarBorder");
    il2cpp_codegen_initialize_runtime_metadata(&"textMuted");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooterTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardName");
    il2cpp_codegen_initialize_runtime_metadata(&"secondary");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteWheelSubtext");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCard");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuFooterSpriteButton");
    il2cpp_codegen_initialize_runtime_metadata(&"engravedBg");
    il2cpp_codegen_initialize_runtime_metadata(&"jek5");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsSubcategoryHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewHandle");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelFooterPrimaryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarImage");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteWheelTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreateFavoritesCard");
    il2cpp_codegen_initialize_runtime_metadata(&"center");
    il2cpp_codegen_initialize_runtime_metadata(&"profileHoverBio");
    il2cpp_codegen_initialize_runtime_metadata(&"menuText");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewCard");
    Il2CppMethodInitialized_184341f23 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar2->fields).name = "mainMenuOverlay";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"mainMenuOverlay");
    (pGVar2->fields).background = "clear";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background,"clear");
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)"mainMenuOverlay",(Il2CppObject *)pGVar2,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      pGVar2 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
      Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        (pGVar2->fields).name = "gameCreateFavoritesCard";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"gameCreateFavoritesCard");
        (pGVar2->fields).background = "primary";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background,"primary");
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)"gameCreateFavoritesCard",(Il2CppObject *)pGVar2,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item)
          ;
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme)
            ;
          }
          pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                             ("gameCreateFavoritesTitle","buttonText","header",400,44.0,
                              (MethodInfo *)0x0);
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar1,(Il2CppObject *)"gameCreateFavoritesTitle",(Il2CppObject *)pGVar2,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                      );
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
            pGVar2 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
            Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
            if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
              (pGVar2->fields).name = "mainMenuOverlayBody";
              Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"mainMenuOverlayBody");
              (pGVar2->fields).background = "clear";
              Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background,"clear");
              local_2f0.hasValue = false;
              local_2f0._1_3_ = 0;
              local_2f0.value = 0.0;
              System_Nullable_float____ctor
                        ((System_Nullable_float__o *)&local_2f0,0.0,
                         (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
              (pGVar2->fields).padding.fields = local_2f0;
              local_2e8.hasValue = false;
              local_2e8._1_3_ = 0;
              local_2e8.value = 0.0;
              System_Nullable_float____ctor
                        ((System_Nullable_float__o *)&local_2e8,0.0,
                         (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
              (pGVar2->fields).gap.fields = local_2e8;
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar1,(Il2CppObject *)"mainMenuOverlayBody",(Il2CppObject *)pGVar2,
                           (MethodInfo_147A7F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                          );
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
                pGVar2 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
                Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                          ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
                if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                  (pGVar2->fields).name = "inGamePauseDimOverlay";
                  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"inGamePauseDimOverlay");
                  (pGVar2->fields).background = "shadow";
                  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background,"shadow");
                  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pSVar1,(Il2CppObject *)"inGamePauseDimOverlay",(Il2CppObject *)pGVar2,
                               (MethodInfo_147A7F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                              );
                    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._styles;
                    pGVar2 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                       );
                    Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
                    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                      (pGVar2->fields).name = "mainMenuLogoSlot";
                      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"mainMenuLogoSlot");
                      (pGVar2->fields).background = "clear";
                      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background,"clear");
                      local_2e0.hasValue = false;
                      local_2e0._1_3_ = 0;
                      local_2e0.value = 0.0;
                      System_Nullable_float____ctor
                                ((System_Nullable_float__o *)&local_2e0,0.0,
                                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                      (pGVar2->fields).padding.fields = local_2e0;
                      local_2d8.hasValue = false;
                      local_2d8._1_3_ = 0;
                      local_2d8.value = 0.0;
                      System_Nullable_float____ctor
                                ((System_Nullable_float__o *)&local_2d8,0.0,
                                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                      (pGVar2->fields).gap.fields = local_2d8;
                      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  (pSVar1,(Il2CppObject *)"mainMenuLogoSlot",(Il2CppObject *)pGVar2,
                                   (MethodInfo_147A7F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                  );
                        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._styles;
                        pGVar2 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)
                                            TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
                        Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,
                                   (MethodInfo *)0x0);
                        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                          (pGVar2->fields).name = "mainMenuPanel";
                          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"mainMenuPanel");
                          pGVar3 = il2cpp_codegen_object_new
                                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                          Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,
                                     (MethodInfo *)0x0);
                          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                            (pGVar3->fields).value = 100.0;
                            (pGVar3->fields).unit = "percent";
                            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit,"percent");
                            (pGVar2->fields).height = pGVar3;
                            Il2CppCodeGenWriteBarrier(&(pGVar2->fields).height,pGVar3);
                            local_2d0.hasValue = false;
                            local_2d0._1_3_ = 0;
                            local_2d0.value = 0.0;
                            System_Nullable_float____ctor
                                      ((System_Nullable_float__o *)&local_2d0,0.9064815,
                                       (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                            (pGVar2->fields).aspectRatio.fields = local_2d0;
                            local_res8[0].hasValue = false;
                            local_res8[0].value = false;
                            System_Nullable_bool____ctor
                                      ((System_Data_SqlTypes_SqlByte_o *)local_res8,'\x01',
                                       MethodInfo_System_Nullable_bool_ctor);
                            (pGVar2->fields).shadow.fields = local_res8[0];
                            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__object___set_Item
                                        (pSVar1,(Il2CppObject *)"mainMenuPanel",(Il2CppObject *)pGVar2,
                                         (MethodInfo_147A7F0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                        );
                              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       (__this->fields)._styles;
                              pGVar2 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)
                                                  TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
                              Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                        ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,
                                         (MethodInfo *)0x0);
                              if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                (pGVar2->fields).name = "brushSidePanel";
                                Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"brushSidePanel");
                                (pGVar2->fields).background = "surface";
                                Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background,"surface");
                                local_res18[0].hasValue = false;
                                local_res18[0].value = false;
                                System_Nullable_bool____ctor
                                          ((System_Data_SqlTypes_SqlByte_o *)local_res18,'\x01',
                                           MethodInfo_System_Nullable_bool_ctor);
                                (pGVar2->fields).textured.fields = local_res18[0];
                                local_res20[0].hasValue = false;
                                local_res20[0].value = false;
                                System_Nullable_bool____ctor
                                          ((System_Data_SqlTypes_SqlByte_o *)local_res20,'\x01',
                                           MethodInfo_System_Nullable_bool_ctor);
                                (pGVar2->fields).worn.fields = local_res20[0];
                                local_2c8.hasValue = false;
                                local_2c8._1_3_ = 0;
                                local_2c8.value = 0.0;
                                System_Nullable_float____ctor
                                          ((System_Nullable_float__o *)&local_2c8,4.0,
                                           (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                                (pGVar2->fields).wornStainScale.fields = local_2c8;
                                local_3c8[0].hasValue = false;
                                local_3c8[0].value = false;
                                System_Nullable_bool____ctor
                                          ((System_Data_SqlTypes_SqlByte_o *)local_3c8,'\x01',
                                           MethodInfo_System_Nullable_bool_ctor);
                                (pGVar2->fields).shadow.fields = local_3c8[0];
                                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                                {
                                  System_Collections_Generic_Dictionary_object__object___set_Item
                                            (pSVar1,(Il2CppObject *)"brushSidePanel",
                                             (Il2CppObject *)pGVar2,
                                             (MethodInfo_147A7F0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                            );
                                  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                           (__this->fields)._styles;
                                  pGVar2 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)
                                                      TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition)
                                  ;
                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,
                                             (MethodInfo *)0x0);
                                  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                    (pGVar2->fields).name = "brushSidePanelShell";
                                    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name,"brushSidePanelShell");
                                    (pGVar2->fields).background = "clear";
                                    Il2CppCodeGenWriteBarrier
                                              (&(pGVar2->fields).background,"clear");
                                    pGVar3 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)
                                                        TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,
                                               (MethodInfo *)0x0);
                                    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                      (pGVar3->fields).value = 100.0;
                                      (pGVar3->fields).unit = "percent";
                                      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit,"percent");
                                      (pGVar2->fields).height = pGVar3;
                                      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).height,pGVar3);
                                      local_2c0.hasValue = false;
                                      local_2c0._1_3_ = 0;
                                      local_2c0.value = 0.0;
                                      System_Nullable_float____ctor
                                                ((System_Nullable_float__o *)&local_2c0,0.38333333,
                                                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
                                      (pGVar2->fields).aspectRatio.fields = local_2c0;
                                      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *
                                                    )0x0) {
                                        System_Collections_Generic_Dictionary_object__object___set_Item
                                                  (pSVar1,(Il2CppObject *)"brushSidePanelShell",
                                                   (Il2CppObject *)pGVar2,
                                                   (MethodInfo_147A7F0 *)
                                                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                  );
                                        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                 (__this->fields)._styles;
                                        pGVar2 = il2cpp_codegen_object_new
                                                           ((Il2CppClass *)
                                                                                                                        
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                        Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,
                                                   (MethodInfo *)0x0);
                                        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                        {
                                          (pGVar2->fields).name = "brushSidePanelScreenContent";
                                          Il2CppCodeGenWriteBarrier
                                                    (&(pGVar2->fields).name,"brushSidePanelScreenContent");
                                          (pGVar2->fields).background = "surface";
                                          Il2CppCodeGenWriteBarrier
                                                    (&(pGVar2->fields).background,"surface");
                                          local_3c4[0].hasValue = false;
                                          local_3c4[0].value = false;
                                          System_Nullable_bool____ctor
                                                    ((System_Data_SqlTypes_SqlByte_o *)local_3c4,'\x01',
                                                     MethodInfo_System_Nullable_bool_ctor);
                                          (pGVar2->fields).textured.fields = local_3c4[0];
                                          local_3c0[0].hasValue = false;
                                          local_3c0[0].value = false;
                                          System_Nullable_bool____ctor
                                                    ((System_Data_SqlTypes_SqlByte_o *)local_3c0,'\x01',
                                                     MethodInfo_System_Nullable_bool_ctor);
                                          (pGVar2->fields).worn.fields = local_3c0[0];
                                          local_2b8.hasValue = false;
                                          local_2b8._1_3_ = 0;
                                          local_2b8.value = 0.0;
                                          System_Nullable_float____ctor
                                                    ((System_Nullable_float__o *)&local_2b8,4.0,
                                                     (MethodInfo_AE2920 *)
                                                     MethodInfo_System_Nullable_float_ctor);
                                          (pGVar2->fields).wornStainScale.fields = local_2b8;
                                          if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                            System_Collections_Generic_Dictionary_object__object___set_Item
                                                      (pSVar1,(Il2CppObject *)"brushSidePanelScreenContent",
                                                       (Il2CppObject *)pGVar2,
                                                       (MethodInfo_147A7F0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                      );
                                            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o
                                                      *)(__this->fields)._styles;
                                            pGVar2 = il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                                                                                
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                            Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                            if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                                                          0x0) {
                                              (pGVar2->fields).name = "brushSidePanelContentFooter";
                                              Il2CppCodeGenWriteBarrier
                                                        (&(pGVar2->fields).name,"brushSidePanelContentFooter");
                                              (pGVar2->fields).background = "surface";
                                              Il2CppCodeGenWriteBarrier
                                                        (&(pGVar2->fields).background,"surface");
                                              local_3bc[0].hasValue = false;
                                              local_3bc[0].value = false;
                                              System_Nullable_bool____ctor
                                                        ((System_Data_SqlTypes_SqlByte_o *)local_3bc,'\x01',
                                                         MethodInfo_System_Nullable_bool_ctor);
                                              (pGVar2->fields).textured.fields = local_3bc[0];
                                              local_3b8[0].hasValue = false;
                                              local_3b8[0].value = false;
                                              System_Nullable_bool____ctor
                                                        ((System_Data_SqlTypes_SqlByte_o *)local_3b8,'\x01',
                                                         MethodInfo_System_Nullable_bool_ctor);
                                              (pGVar2->fields).worn.fields = local_3b8[0];
                                              local_2b0.hasValue = false;
                                              local_2b0._1_3_ = 0;
                                              local_2b0.value = 0.0;
                                              System_Nullable_float____ctor
                                                        ((System_Nullable_float__o *)&local_2b0,4.0,
                                                         (MethodInfo_AE2920 *)
                                                         MethodInfo_System_Nullable_float_ctor);
                                              (pGVar2->fields).wornStainScale.fields = local_2b0;
                                              if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                System_Collections_Generic_Dictionary_object__object___set_Item
                                                          (pSVar1,(Il2CppObject *)"brushSidePanelContentFooter",
                                                           (Il2CppObject *)pGVar2,
                                                           (MethodInfo_147A7F0 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                pGVar2 = il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                                                                                        
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                          ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *
                                                           )pGVar2,(MethodInfo *)0x0);
                                                if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                {
                                                  (pGVar2->fields).name = "brushSidePanelContentFooterTexture";
                                                  Il2CppCodeGenWriteBarrier
                                                            (&(pGVar2->fields).name,"brushSidePanelContentFooterTexture");
                                                  (pGVar2->fields).background = "clear";
                                                  Il2CppCodeGenWriteBarrier
                                                            (&(pGVar2->fields).background,
                                                             "clear");
                                                  local_3b4[0].hasValue = false;
                                                  local_3b4[0].value = false;
                                                  System_Nullable_bool____ctor
                                                            ((System_Data_SqlTypes_SqlByte_o *)local_3b4,
                                                             '\x01',MethodInfo_System_Nullable_bool_ctor);
                                                  (pGVar2->fields).textured.fields = local_3b4[0];
                                                  local_3b0[0].hasValue = false;
                                                  local_3b0[0].value = false;
                                                  System_Nullable_bool____ctor
                                                            ((System_Data_SqlTypes_SqlByte_o *)local_3b0,
                                                             '\x01',MethodInfo_System_Nullable_bool_ctor);
                                                  (pGVar2->fields).worn.fields = local_3b0[0];
                                                  local_2a8.hasValue = false;
                                                  local_2a8._1_3_ = 0;
                                                  local_2a8.value = 0.0;
                                                  System_Nullable_float____ctor
                                                            ((System_Nullable_float__o *)&local_2a8,4.0,
                                                             (MethodInfo_AE2920 *)
                                                             MethodInfo_System_Nullable_float_ctor);
                                                  (pGVar2->fields).wornStainScale.fields = local_2a8;
                                                  if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                    System_Collections_Generic_Dictionary_object__object___set_Item
                                                              (pSVar1,(Il2CppObject *)"brushSidePanelContentFooterTexture",
                                                               (Il2CppObject *)pGVar2,
                                                               (MethodInfo_147A7F0 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                    pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                    pGVar2 = il2cpp_codegen_object_new
                                                                       ((Il2CppClass *)
                                                                                                                                                
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                    UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                              ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                    if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                    {
                                                      (pGVar2->fields).name = "brushSidePanelContentFooterTopShadow";
                                                      Il2CppCodeGenWriteBarrier
                                                                (&(pGVar2->fields).name,"brushSidePanelContentFooterTopShadow")
                                                      ;
                                                      (pGVar2->fields).background = "clear";
                                                      Il2CppCodeGenWriteBarrier
                                                                (&(pGVar2->fields).background,
                                                                 "clear");
                                                      local_3ac[0].hasValue = false;
                                                      local_3ac[0].value = false;
                                                      System_Nullable_bool____ctor
                                                                ((System_Data_SqlTypes_SqlByte_o *)local_3ac,
                                                                 '\x01',MethodInfo_System_Nullable_bool_ctor);
                                                      (pGVar2->fields).shadow.fields = local_3ac[0];
                                                      if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelContentFooterTopShadow"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "brushSidePanelScreenScroll";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "brushSidePanelScreenScroll");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         local_2a0.hasValue = false;
                                                         local_2a0._1_3_ = 0;
                                                         local_2a0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_2a0,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).padding.fields = local_2a0;
                                                         local_298.hasValue = false;
                                                         local_298._1_3_ = 0;
                                                         local_298.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_298,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).gap.fields = local_298;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelScreenScroll"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "brushSidePanelOutline";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "brushSidePanelOutline");
                                                         (pGVar2->fields).background = "brushSidePanelOutline";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "brushSidePanelOutline");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelOutline"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "brushSidePanelTexture";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "brushSidePanelTexture");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         local_3a8[0].hasValue = false;
                                                         local_3a8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_3a8,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_3a8[0];
                                                         local_3a4[0].hasValue = false;
                                                         local_3a4[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_3a4,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_3a4[0];
                                                         local_290.hasValue = false;
                                                         local_290._1_3_ = 0;
                                                         local_290.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_290,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_290;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelTexture"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "brushSidePanelHeader";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "brushSidePanelHeader");
                                                         (pGVar2->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "primary");
                                                         local_288.hasValue = false;
                                                         local_288._1_3_ = 0;
                                                         local_288.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_288,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).padding.fields = local_288;
                                                         local_280.hasValue = false;
                                                         local_280._1_3_ = 0;
                                                         local_280.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_280,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).gap.fields = local_280;
                                                         local_3a0[0].hasValue = false;
                                                         local_3a0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_3a0,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_3a0[0];
                                                         local_39c[0].hasValue = false;
                                                         local_39c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_39c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_39c[0];
                                                         local_278.hasValue = false;
                                                         local_278._1_3_ = 0;
                                                         local_278.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_278,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_278;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelHeader"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "brushSidePanelHeaderText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "brushSidePanelHeaderText");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         (pGVar2->fields).textColor = "buttonText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textColor,
                                                                    "buttonText");
                                                         (pGVar2->fields).fontFamily = "header";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).fontFamily,
                                                                    "header");
                                                         local_270.hasValue = false;
                                                         local_270._1_3_ = 0;
                                                         local_270.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Data_SqlTypes_SqlInt32_o *)
                                                                    &local_270,400,
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar2->fields).fontWeight.fields = local_270;
                                                         local_268.hasValue = false;
                                                         local_268._1_3_ = 0;
                                                         local_268.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_268,
                                                                    104.0,(MethodInfo_AE2920 *)
                                                                                                                                                    
                                                       MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).fontSize.fields = local_268;
                                                       (pGVar2->fields).textAlignment = "right";
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).textAlignment,
                                                                  "right");
                                                       local_260.hasValue = false;
                                                       local_260._1_3_ = 0;
                                                       local_260.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_260,80.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).paddingX.fields = local_260;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelHeaderText"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "brushSidePanelBrushButton";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "brushSidePanelBrushButton");
                                                         (pGVar2->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "primary");
                                                         (pGVar2->fields).textColor = "void";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textColor,
                                                                    "void");
                                                         (pGVar2->fields).fontFamily = "menuText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).fontFamily,
                                                                    "menuText");
                                                         local_258.hasValue = false;
                                                         local_258._1_3_ = 0;
                                                         local_258.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Data_SqlTypes_SqlInt32_o *)
                                                                    &local_258,400,
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar2->fields).fontWeight.fields = local_258;
                                                         local_250.hasValue = false;
                                                         local_250._1_3_ = 0;
                                                         local_250.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_250,
                                                                    112.0,(MethodInfo_AE2920 *)
                                                                                                                                                    
                                                       MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).fontSize.fields = local_250;
                                                       (pGVar2->fields).textAlignment = "left";
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).textAlignment,
                                                                  "left");
                                                       local_248.hasValue = false;
                                                       local_248._1_3_ = 0;
                                                       local_248.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_248,104.0
                                                                  ,(MethodInfo_AE2920 *)
                                                                   MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).iconSize.fields = local_248;
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (236.0,(MethodInfo *)0x0);
                                                       (pGVar2->fields).height = pGVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).height,pGVar3);
                                                       local_240.hasValue = false;
                                                       local_240._1_3_ = 0;
                                                       local_240.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_240,224.0
                                                                  ,(MethodInfo_AE2920 *)
                                                                   MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).paddingX.fields = local_240;
                                                       local_238.hasValue = false;
                                                       local_238._1_3_ = 0;
                                                       local_238.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_238,36.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).gap.fields = local_238;
                                                       local_398[0].hasValue = false;
                                                       local_398[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_398,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar2->fields).textured.fields = local_398[0];
                                                       local_394[0].hasValue = false;
                                                       local_394[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_394,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar2->fields).worn.fields = local_394[0];
                                                       local_230.hasValue = false;
                                                       local_230._1_3_ = 0;
                                                       local_230.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_230,4.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).wornStainScale.fields = local_230;
                                                       (pGVar2->fields).motion = "slide";
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).motion,
                                                                  "slide");
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelBrushButton"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("brushSidePanelFooterPrimaryButton","primary",
                                                                  "header",400,26.0,63.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelFooterPrimaryButton"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelFooterPrimaryButton"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_228.hasValue = false;
                                                       local_228._1_3_ = 0;
                                                       local_228.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_228,26.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).iconSize.fields = local_228;
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelFooterPrimaryButton"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_220.hasValue = false;
                                                       local_220._1_3_ = 0;
                                                       local_220.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_220,24.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).paddingX.fields = local_220;
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"brushSidePanelFooterPrimaryButton"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_218.hasValue = false;
                                                       local_218._1_3_ = 0;
                                                       local_218.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_218,9.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).gap.fields = local_218;
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileCard";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileCard");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         local_210.hasValue = false;
                                                         local_210._1_3_ = 0;
                                                         local_210.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_210,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).gap.fields = local_210;
                                                         local_390[0].hasValue = false;
                                                         local_390[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_390,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).shadow.fields = local_390[0];
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCard"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileCardBanner";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileCardBanner");
                                                         (pGVar2->fields).background = "profileCardBannerBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "profileCardBannerBg");
                                                         local_38c[0].hasValue = false;
                                                         local_38c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_38c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_38c[0];
                                                         local_388[0].hasValue = false;
                                                         local_388[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_388,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_388[0];
                                                         local_208.hasValue = false;
                                                         local_208._1_3_ = 0;
                                                         local_208.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_208,3.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_208;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardBanner"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileCardBannerImage";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileCardBannerImage");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardBannerImage"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileCardBody";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileCardBody");
                                                         (pGVar2->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "surfaceSoft");
                                                         local_384[0].hasValue = false;
                                                         local_384[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_384,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_384[0];
                                                         local_380[0].hasValue = false;
                                                         local_380[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_380,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_380[0];
                                                         local_200.hasValue = false;
                                                         local_200._1_3_ = 0;
                                                         local_200.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_200,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_200;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardBody"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileCardAvatarFrame";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileCardAvatarFrame");
                                                         (pGVar2->fields).background = "profileCardAvatarBorder";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "profileCardAvatarBorder");
                                                         local_1f8.hasValue = false;
                                                         local_1f8._1_3_ = 0;
                                                         local_1f8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1f8,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).padding.fields = local_1f8;
                                                         local_37c[0].hasValue = false;
                                                         local_37c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_37c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_37c[0];
                                                         local_378[0].hasValue = false;
                                                         local_378[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_378,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_378[0];
                                                         local_1f0.hasValue = false;
                                                         local_1f0._1_3_ = 0;
                                                         local_1f0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1f0,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_1f0;
                                                         local_374[0].hasValue = false;
                                                         local_374[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_374,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).shadow.fields = local_374[0];
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardAvatarFrame"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileCardAvatarBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileCardAvatarBg");
                                                         (pGVar2->fields).background = "profileCardAvatarBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "profileCardAvatarBg");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardAvatarBg"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileCardAvatarImage";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileCardAvatarImage");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardAvatarImage"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileCardName","text",
                                                                  "header",400,42.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardName"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileCardHandle","textMuted",
                                                                  "text",400,20.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardHandle"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileCardBodyText","textMuted",
                                                                  "text",400,22.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardBodyText"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileCardSocialText","textMuted",
                                                                  "text",400,22.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardSocialText"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardSocialText"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       pGVar3 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar3,(MethodInfo *)0x0);
                                                       if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar3->fields).value = 100.0;
                                                         (pGVar3->fields).unit = "percent";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).unit,
                                                                    "percent");
                                                         if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).width = pGVar3;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).width,pGVar3);
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileInfoStatus","textMuted",
                                                                  "text",400,20.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileInfoStatus"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileInfoStatus"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textAlignment =
                                                              "right";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textAlignment,
                                                                    "right");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileCardSocialIcon";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileCardSocialIcon");
                                                         (pGVar2->fields).background = "textMuted";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "textMuted");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileCardSocialIcon"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "creditsCategoryHeader";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "creditsCategoryHeader");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         local_1e8.hasValue = false;
                                                         local_1e8._1_3_ = 0;
                                                         local_1e8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1e8,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).gap.fields = local_1e8;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"creditsCategoryHeader"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "creditsCategoryBrush";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "creditsCategoryBrush");
                                                         (pGVar2->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "primary");
                                                         local_370[0].hasValue = false;
                                                         local_370[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_370,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_370[0];
                                                         local_36c[0].hasValue = false;
                                                         local_36c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_36c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_36c[0];
                                                         local_1e0.hasValue = false;
                                                         local_1e0._1_3_ = 0;
                                                         local_1e0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1e0,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_1e0;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"creditsCategoryBrush"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("creditsCategoryHeaderText","text",
                                                                  "header",400,40.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"creditsCategoryHeaderText"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"creditsCategoryHeaderText"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textAlignment,
                                                                    "left");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("creditsSubcategoryHeader","text",
                                                                  "menuText",400,28.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"creditsSubcategoryHeader"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddChangelogDefaults
                                                                 (__this,(MethodInfo *)0x0);
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "creditsInfoIcon";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "creditsInfoIcon");
                                                         (pGVar2->fields).background = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "text");
                                                         pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (18.0,(MethodInfo *)0x0);
                                                       (pGVar2->fields).width = pGVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).width,pGVar3);
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (18.0,(MethodInfo *)0x0);
                                                       (pGVar2->fields).height = pGVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).height,pGVar3);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"creditsInfoIcon"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "creditsContributorCell";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "creditsContributorCell");
                                                         (pGVar2->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "surfaceSoft");
                                                         local_1d8.hasValue = false;
                                                         local_1d8._1_3_ = 0;
                                                         local_1d8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1d8,
                                                                    10.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar2->fields).paddingX.fields = local_1d8;
                                                         local_1d0.hasValue = false;
                                                         local_1d0._1_3_ = 0;
                                                         local_1d0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1d0,8.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).gap.fields = local_1d0;
                                                         local_368[0].hasValue = false;
                                                         local_368[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_368,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_368[0];
                                                         local_364[0].hasValue = false;
                                                         local_364[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_364,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_364[0];
                                                         local_1c8.hasValue = false;
                                                         local_1c8._1_3_ = 0;
                                                         local_1c8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1c8,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_1c8;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"creditsContributorCell"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profilePreviewCard";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profilePreviewCard");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         local_1c0.hasValue = false;
                                                         local_1c0._1_3_ = 0;
                                                         local_1c0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1c0,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).gap.fields = local_1c0;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewCard"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profilePreviewDialog";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profilePreviewDialog");
                                                         (pGVar2->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "surfaceSoft");
                                                         local_360[0].hasValue = false;
                                                         local_360[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_360,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_360[0];
                                                         local_35c[0].hasValue = false;
                                                         local_35c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_35c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_35c[0];
                                                         local_1b8.hasValue = false;
                                                         local_1b8._1_3_ = 0;
                                                         local_1b8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1b8,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_1b8;
                                                         local_358[0].hasValue = false;
                                                         local_358[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_358,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).shadow.fields = local_358[0];
                                                         local_1b0.hasValue = false;
                                                         local_1b0._1_3_ = 0;
                                                         local_1b0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1b0,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).gap.fields = local_1b0;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewDialog"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileHoverDialog";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileHoverDialog");
                                                         (pGVar2->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "surfaceSoft");
                                                         local_354[0].hasValue = false;
                                                         local_354[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_354,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_354[0];
                                                         local_350[0].hasValue = false;
                                                         local_350[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_350,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_350[0];
                                                         local_1a8.hasValue = false;
                                                         local_1a8._1_3_ = 0;
                                                         local_1a8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1a8,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_1a8;
                                                         local_34c[0].hasValue = false;
                                                         local_34c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_34c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).shadow.fields = local_34c[0];
                                                         local_1a0.hasValue = false;
                                                         local_1a0._1_3_ = 0;
                                                         local_1a0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1a0,0.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).gap.fields = local_1a0;
                                                         (pGVar2->fields).motion = "balloon";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).motion,
                                                                    "balloon");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileHoverDialog"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profilePreviewTitleBar";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profilePreviewTitleBar");
                                                         (pGVar2->fields).background = "secondary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "secondary");
                                                         local_198.hasValue = false;
                                                         local_198._1_3_ = 0;
                                                         local_198.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_198,
                                                                    16.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar2->fields).paddingX.fields = local_198;
                                                         local_190.hasValue = false;
                                                         local_190._1_3_ = 0;
                                                         local_190.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_190,7.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).paddingY.fields = local_190;
                                                         local_348[0].hasValue = false;
                                                         local_348[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_348,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_348[0];
                                                         local_344[0].hasValue = false;
                                                         local_344[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_344,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_344[0];
                                                         local_188.hasValue = false;
                                                         local_188._1_3_ = 0;
                                                         local_188.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_188,1.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).relief.fields = local_188;
                                                         local_340[0].hasValue = false;
                                                         local_340[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_340,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).reliefGradient.fields = local_340[0]
                                                         ;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewTitleBar"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profilePreviewTitle","buttonText",
                                                                  "header",400,23.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewTitle"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profilePreviewBannerFrame";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profilePreviewBannerFrame");
                                                         (pGVar2->fields).background = "profileCardBannerBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "profileCardBannerBg");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewBannerFrame"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profilePreviewBanner";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profilePreviewBanner");
                                                         (pGVar2->fields).background = "profileCardBannerBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "profileCardBannerBg");
                                                         local_33c[0].hasValue = false;
                                                         local_33c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_33c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_33c[0];
                                                         local_338[0].hasValue = false;
                                                         local_338[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_338,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_338[0];
                                                         local_180.hasValue = false;
                                                         local_180._1_3_ = 0;
                                                         local_180.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_180,3.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_180;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewBanner"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profilePreviewBody";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profilePreviewBody");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewBody"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profilePreviewAvatarFrame";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profilePreviewAvatarFrame");
                                                         (pGVar2->fields).background = "profileCardAvatarBorder";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "profileCardAvatarBorder");
                                                         local_178.hasValue = false;
                                                         local_178._1_3_ = 0;
                                                         local_178.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_178,6.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).padding.fields = local_178;
                                                         local_334[0].hasValue = false;
                                                         local_334[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_334,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_334[0];
                                                         local_330[0].hasValue = false;
                                                         local_330[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_330,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_330[0];
                                                         local_170.hasValue = false;
                                                         local_170._1_3_ = 0;
                                                         local_170.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_170,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_170;
                                                         local_32c[0].hasValue = false;
                                                         local_32c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_32c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).shadow.fields = local_32c[0];
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewAvatarFrame"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profilePreviewAvatar";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profilePreviewAvatar");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewAvatar"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profilePreviewName","text",
                                                                  "header",400,30.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewName"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profilePreviewHandle","textMuted",
                                                                  "text",400,17.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewHandle"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profilePreviewSelection","textMuted",
                                                                  "text",500,16.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profilePreviewSelection"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileHoverBio","textMuted",
                                                                  "text",400,18.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileHoverBio"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "characterTextInput";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "characterTextInput");
                                                         (pGVar2->fields).background = "characterNamePreviewBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "characterNamePreviewBg");
                                                         (pGVar2->fields).textColor = "buttonText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textColor,
                                                                    "buttonText");
                                                         (pGVar2->fields).fontFamily = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).fontFamily,
                                                                    "text");
                                                         local_168.hasValue = false;
                                                         local_168._1_3_ = 0;
                                                         local_168.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Data_SqlTypes_SqlInt32_o *)
                                                                    &local_168,400,
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar2->fields).fontWeight.fields = local_168;
                                                         local_160.hasValue = false;
                                                         local_160._1_3_ = 0;
                                                         local_160.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_160,
                                                                    19.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar2->fields).fontSize.fields = local_160;
                                                         local_158.hasValue = false;
                                                         local_158._1_3_ = 0;
                                                         local_158.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_158,
                                                                    12.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar2->fields).padding.fields = local_158;
                                                         pGVar3 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar3,(MethodInfo *)0x0);
                                                       if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar3->fields).value = 42.0;
                                                         (pGVar3->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).unit,
                                                                    "point");
                                                         (pGVar2->fields).height = pGVar3;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).height,pGVar3);
                                                         local_328[0].hasValue = false;
                                                         local_328[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_328,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_328[0];
                                                         local_324[0].hasValue = false;
                                                         local_324[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_324,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_324[0];
                                                         local_150.hasValue = false;
                                                         local_150._1_3_ = 0;
                                                         local_150.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_150,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_150;
                                                         local_148.hasValue = false;
                                                         local_148._1_3_ = 0;
                                                         local_148.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_148,
                                                                    -1.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar2->fields).relief.fields = local_148;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"characterTextInput"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "characterTextColorInput";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "characterTextColorInput");
                                                         (pGVar2->fields).background = "characterNamePreviewBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "characterNamePreviewBg");
                                                         (pGVar2->fields).textColor = "buttonText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textColor,
                                                                    "buttonText");
                                                         (pGVar2->fields).fontFamily = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).fontFamily,
                                                                    "text");
                                                         local_140.hasValue = false;
                                                         local_140._1_3_ = 0;
                                                         local_140.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Data_SqlTypes_SqlInt32_o *)
                                                                    &local_140,400,
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar2->fields).fontWeight.fields = local_140;
                                                         local_138.hasValue = false;
                                                         local_138._1_3_ = 0;
                                                         local_138.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_138,
                                                                    36.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar2->fields).fontSize.fields = local_138;
                                                         local_130.hasValue = false;
                                                         local_130._1_3_ = 0;
                                                         local_130.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_130,
                                                                    18.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar2->fields).padding.fields = local_130;
                                                         pGVar3 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar3,(MethodInfo *)0x0);
                                                       if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar3->fields).value = 112.0;
                                                         (pGVar3->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).unit,
                                                                    "point");
                                                         (pGVar2->fields).height = pGVar3;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).height,pGVar3);
                                                         local_320[0].hasValue = false;
                                                         local_320[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_320,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_320[0];
                                                         local_31c[0].hasValue = false;
                                                         local_31c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_31c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_31c[0];
                                                         local_128.hasValue = false;
                                                         local_128._1_3_ = 0;
                                                         local_128.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_128,4.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_128;
                                                         local_120.hasValue = false;
                                                         local_120._1_3_ = 0;
                                                         local_120.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_120,
                                                                    -1.0,(MethodInfo_AE2920 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar2->fields).relief.fields = local_120;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"characterTextColorInput"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("gridPickerItem","surfaceSoft",
                                                                  "text",500,16.0,144.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"gridPickerItem"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"gridPickerItem"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_118.hasValue = false;
                                                       local_118._1_3_ = 0;
                                                       local_118.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_118,10.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).padding.fields = local_118;
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"gridPickerItem"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_110.hasValue = false;
                                                       local_110._1_3_ = 0;
                                                       local_110.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_110,7.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).gap.fields = local_110;
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"gridPickerItem"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textColor,
                                                                    "text");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"gridPickerItem"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_108.hasValue = false;
                                                       local_108._1_3_ = 0;
                                                       local_108.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_108,0.045
                                                                  ,(MethodInfo_AE2920 *)
                                                                   MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).pressDepth.fields = local_108;
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "gridPickerThumbnail";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "gridPickerThumbnail");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         local_318[0].hasValue = false;
                                                         local_318[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_318,'\0',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_318[0];
                                                         local_314[0].hasValue = false;
                                                         local_314[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_314,'\0',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_314[0];
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"gridPickerThumbnail"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("gridPickerLabel","textMuted",
                                                                  "text",500,15.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"gridPickerLabel"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"gridPickerLabel"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textAlignment,
                                                                    "center");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("profileGridItem","surfaceSoft",
                                                                  "text",500,16.0,144.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileGridItem"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileGridItem"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_100.hasValue = false;
                                                       local_100._1_3_ = 0;
                                                       local_100.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_100,10.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).padding.fields = local_100;
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileGridItem"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_f8.hasValue = false;
                                                       local_f8._1_3_ = 0;
                                                       local_f8.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_f8,7.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).gap.fields = local_f8;
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileGridItem"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textColor,
                                                                    "text");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileGridItem"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_f0.hasValue = false;
                                                       local_f0._1_3_ = 0;
                                                       local_f0.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_f0,0.045,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).pressDepth.fields = local_f0;
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileGridItemThumbnail";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileGridItemThumbnail");
                                                         (pGVar2->fields).background = "engravedBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "engravedBg");
                                                         local_310[0].hasValue = false;
                                                         local_310[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_310,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_310[0];
                                                         local_30c[0].hasValue = false;
                                                         local_30c[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_30c,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_30c[0];
                                                         local_e8.hasValue = false;
                                                         local_e8._1_3_ = 0;
                                                         local_e8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_e8,3.0,
                                                                    (MethodInfo_AE2920 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_e8;
                                                         local_e0.hasValue = false;
                                                         local_e0._1_3_ = 0;
                                                         local_e0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_e0,-1.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).relief.fields = local_e0;
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileGridItemThumbnail"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileGridItemLabel","textMuted",
                                                                  "text",500,15.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileGridItemLabel"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileGridItemLabel"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textAlignment,
                                                                    "center");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileEmoteSlotText","textMuted",
                                                                  "text",500,20.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileEmoteSlotText"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileEmoteSlotText"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textAlignment,
                                                                    "center");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileEmoteWheelTitle","text",
                                                                  "jek5",400,36.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileEmoteWheelTitle"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileEmoteWheelTitle"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textAlignment,
                                                                    "center");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileEmoteWheelSubtext","textMuted",
                                                                  "text",400,18.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileEmoteWheelSubtext"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"profileEmoteWheelSubtext"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textAlignment,
                                                                    "center");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "profileColorSwatch";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "profileColorSwatch");
                                                         (pGVar2->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "surface");
                                                         local_308[0].hasValue = false;
                                                         local_308[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_308,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).textured.fields = local_308[0];
                                                         local_304[0].hasValue = false;
                                                         local_304[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_304,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).worn.fields = local_304[0];
                                                         local_d8.hasValue = false;
                                                         local_d8._1_3_ = 0;
                                                         local_d8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_d8,2.0,
                                                                    (MethodInfo_AE2920 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).wornStainScale.fields = local_d8;
                                                         local_d0.hasValue = false;
                                                         local_d0._1_3_ = 0;
                                                         local_d0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_d0,1.0,
                                                                    (MethodInfo_AE2920 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).relief.fields = local_d0;
                                                         local_300[0].hasValue = false;
                                                         local_300[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Data_SqlTypes_SqlByte_o *)
                                                                    local_300,'\x01',
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar2->fields).reliefGradient.fields = local_300[0]
                                                         ;
                                                         pGVar3 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar3,(MethodInfo *)0x0);
                                                       if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar3->fields).value = 42.0;
                                                         (pGVar3->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).unit,
                                                                    "point");
                                                         (pGVar2->fields).width = pGVar3;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).width,pGVar3);
                                                         pGVar3 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar3,(MethodInfo *)0x0);
                                                       if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar3->fields).value = 42.0;
                                                         (pGVar3->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar3->fields).unit,
                                                                    "point");
                                                         (pGVar2->fields).height = pGVar3;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).height,pGVar3);
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"profileColorSwatch"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "mainMenuLogo";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "mainMenuLogo");
                                                         pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (640.0,(MethodInfo *)0x0);
                                                       (pGVar2->fields).width = pGVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).width,pGVar3);
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (450.0,(MethodInfo *)0x0);
                                                       (pGVar2->fields).height = pGVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).height,pGVar3);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"mainMenuLogo"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "mainMenuBrushButton";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "mainMenuBrushButton");
                                                         (pGVar2->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "primary");
                                                         (pGVar2->fields).textColor = "void";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textColor,
                                                                    "void");
                                                         (pGVar2->fields).fontFamily = "menuText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).fontFamily,
                                                                    "menuText");
                                                         local_c8.hasValue = false;
                                                         local_c8._1_3_ = 0;
                                                         local_c8.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Data_SqlTypes_SqlInt32_o *)
                                                                    &local_c8,400,
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar2->fields).fontWeight.fields = local_c8;
                                                         local_c0.hasValue = false;
                                                         local_c0._1_3_ = 0;
                                                         local_c0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_c0,56.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).fontSize.fields = local_c0;
                                                         (pGVar2->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textAlignment,
                                                                    "left");
                                                         local_b8.hasValue = false;
                                                         local_b8._1_3_ = 0;
                                                         local_b8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_b8,52.0
                                                                    ,(MethodInfo_AE2920 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar2->fields).iconSize.fields = local_b8;
                                                         pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (118.0,(MethodInfo *)0x0);
                                                       (pGVar2->fields).height = pGVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).height,pGVar3);
                                                       local_b0.hasValue = false;
                                                       local_b0._1_3_ = 0;
                                                       local_b0.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_b0,112.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).paddingX.fields = local_b0;
                                                       local_a8.hasValue = false;
                                                       local_a8._1_3_ = 0;
                                                       local_a8.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_a8,18.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).gap.fields = local_a8;
                                                       local_2fc[0].hasValue = false;
                                                       local_2fc[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_2fc,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar2->fields).textured.fields = local_2fc[0];
                                                       local_2f8[0].hasValue = false;
                                                       local_2f8[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Data_SqlTypes_SqlByte_o *)local_2f8,
                                                                  '\x01',MethodInfo_System_Nullable_bool_ctor)
                                                       ;
                                                       (pGVar2->fields).worn.fields = local_2f8[0];
                                                       local_a0[0].hasValue = false;
                                                       local_a0[0]._1_3_ = 0;
                                                       local_a0[0].value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)local_a0,4.0,
                                                                  (MethodInfo_AE2920 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar2->fields).wornStainScale.fields = local_a0[0];
                                                       (pGVar2->fields).motion = "slide";
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).motion,
                                                                  "slide");
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"mainMenuBrushButton"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "mainMenuTipPanel";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "mainMenuTipPanel");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"mainMenuTipPanel"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "mainMenuTipBackground";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "mainMenuTipBackground");
                                                         (pGVar2->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "primary");
                                                         if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"mainMenuTipBackground"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("mainMenuTipText","buttonText",
                                                                  "jek5",400,30.0,
                                                                  (MethodInfo *)0x0);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"mainMenuTipText"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar2 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar1,(Il2CppObject *)"mainMenuTipText"
                                                                  ,(MethodInfo_147A5B0 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).textAlignment,
                                                                    "left");
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar2 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)
                                                       pGVar2,(MethodInfo *)0x0);
                                                       if (pGVar2 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar2->fields).name = "mainMenuFooterSpriteButton";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).name,
                                                                    "mainMenuFooterSpriteButton");
                                                         (pGVar2->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar2->fields).background,
                                                                    "clear");
                                                         pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (48.0,(MethodInfo *)0x0);
                                                       (pGVar2->fields).width = pGVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).width,pGVar3);
                                                       pGVar3 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__Points
                                                                 (48.0,(MethodInfo *)0x0);
                                                       (pGVar2->fields).height = pGVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar2->fields).height,pGVar3);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"mainMenuFooterSpriteButton"
                                                                  ,(Il2CppObject *)pGVar2,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
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
                                                       ThrowNullReferenceException();
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ApplyColors
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, Gisketch_Aottg2UI_Data_GisketchColorToken_array* colors, const MethodInfo* method);
// 0x1818964c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818965b3: mov rdi, qword ptr [rsp + 0x58]
// asm:   0x1818965b8: mov rbx, qword ptr [rsp + 0x50]

void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,
               Gisketch_Aottg2UI_Data_GisketchColorToken_array *colors,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchColorToken_o *pGVar1;
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  bool bVar2;
  uint uVar3;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184341f24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    Il2CppMethodInitialized_184341f24 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  if (colors != (Gisketch_Aottg2UI_Data_GisketchColorToken_array *)0x0) {
    for (uVar3 = 0; (int)uVar3 < (int)colors->max_length; uVar3 = uVar3 + 1) {
      if ((uint)colors->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pGVar1 = colors->m_Items[(int)uVar3];
      if ((((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchColorToken_o *)0x0) &&
           (bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).name,(MethodInfo *)0x0), !bVar2)) &&
          (bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).value,(MethodInfo *)0x0), !bVar2)) &&
         (bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                            ((pGVar1->fields).value,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0), bVar2
         )) {
        __this_00 = (__this->fields)._colors;
        if (__this_00 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          ThrowNullReferenceException();
        }
        local_18.r = local_28.r;
        local_18.g = local_28.g;
        local_18.b = local_28.b;
        local_18.a = local_28.a;
        System_Collections_Generic_Dictionary_object__Color___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (Il2CppObject *)(pGVar1->fields).name,(UnityEngine_Color_o *)&local_18,
                   (MethodInfo_1465870 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
        local_18.r = local_28.r;
        local_18.g = local_28.g;
        local_18.b = local_28.b;
        local_18.a = local_28.a;
        Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyAlias
                  (__this,(pGVar1->fields).name,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ApplyAlias
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyAlias (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* token, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181896210

void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyAlias
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *token,
               UnityEngine_Color_o *color,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__Color__o *pSVar2;
  System_String_o *key;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184341f25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"muted");
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"accent2");
    il2cpp_codegen_initialize_runtime_metadata(&"accent");
    il2cpp_codegen_initialize_runtime_metadata(&"panelSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"surfaceSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"paper");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"panel");
    il2cpp_codegen_initialize_runtime_metadata(&"textMuted");
    il2cpp_codegen_initialize_runtime_metadata(&"secondary");
    il2cpp_codegen_initialize_runtime_metadata(&"ink");
    Il2CppMethodInitialized_184341f25 = '\x01';
  }
  bVar1 = System_String__op_Equality(token,"primary",(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (__this->fields)._colors;
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      local_18.r = (color->fields).r;
      local_18.g = (color->fields).g;
      local_18.b = (color->fields).b;
      local_18.a = (color->fields).a;
      key = "accent";
      goto label_1818963a0;
    }
  }
  else {
    bVar1 = System_String__op_Equality(token,"secondary",(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields)._colors;
      if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
        local_18.r = (color->fields).r;
        local_18.g = (color->fields).g;
        local_18.b = (color->fields).b;
        local_18.a = (color->fields).a;
        key = "accent2";
        goto label_1818963a0;
      }
    }
    else {
      bVar1 = System_String__op_Equality(token,"surface",(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields)._colors;
        if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          local_18.r = (color->fields).r;
          local_18.g = (color->fields).g;
          local_18.b = (color->fields).b;
          local_18.a = (color->fields).a;
          System_Collections_Generic_Dictionary_object__Color___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                     (Il2CppObject *)"paper",(UnityEngine_Color_o *)&local_18,
                     (MethodInfo_1465870 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
          pSVar2 = (__this->fields)._colors;
          if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
            local_18.r = (color->fields).r;
            local_18.g = (color->fields).g;
            local_18.b = (color->fields).b;
            local_18.a = (color->fields).a;
            key = "panel";
            goto label_1818963a0;
          }
        }
      }
      else {
        bVar1 = System_String__op_Equality(token,"surfaceSoft",(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__op_Equality(token,"text",(MethodInfo *)0x0);
          if (bVar1) {
            pSVar2 = (__this->fields)._colors;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) goto label_1818964b1;
            local_18.r = (color->fields).r;
            local_18.g = (color->fields).g;
            local_18.b = (color->fields).b;
            local_18.a = (color->fields).a;
            key = "ink";
          }
          else {
            bVar1 = System_String__op_Equality(token,"textMuted",(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pSVar2 = (__this->fields)._colors;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) goto label_1818964b1;
            local_18.r = (color->fields).r;
            local_18.g = (color->fields).g;
            local_18.b = (color->fields).b;
            local_18.a = (color->fields).a;
            key = "muted";
          }
label_1818963a0:
          System_Collections_Generic_Dictionary_object__Color___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)key,
                     (UnityEngine_Color_o *)&local_18,
                     (MethodInfo_1465870 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
          return;
        }
        pSVar2 = (__this->fields)._colors;
        if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          local_18.r = (color->fields).r;
          local_18.g = (color->fields).g;
          local_18.b = (color->fields).b;
          local_18.a = (color->fields).a;
          key = "panelSoft";
          goto label_1818963a0;
        }
      }
    }
  }
label_1818964b1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$FindPalette
// il2cpp: Gisketch_Aottg2UI_Data_GisketchThemePalette_o* Gisketch_Aottg2UI_Styling_GisketchTheme__FindPalette (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* definition, const MethodInfo* method);
// 0x181897390
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181897419: nop dword ptr [rax]
// asm:   0x181897492: mov rax, rbx
// asm:   0x1818974af: mov rax, rbp
// asm:   0x1818974b2: jmp 0x181897495

Gisketch_Aottg2UI_Data_GisketchThemePalette_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__FindPalette
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,
          Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemePalette_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar4;
  uint uVar5;
  System_String_o *b;
  
  if (Il2CppMethodInitialized_184341f26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"light");
    Il2CppMethodInitialized_184341f26 = '\x01';
  }
  if (definition != (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    if (((definition->fields).palettes == (Gisketch_Aottg2UI_Data_GisketchThemePalette_array *)0x0) ||
       (((definition->fields).palettes)->max_length == 0)) {
      return (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0;
    }
    bVar3 = System_String__IsNullOrEmpty((definition->fields).mode,(MethodInfo *)0x0);
    b = "light";
    if (!bVar3) {
      b = (definition->fields).mode;
    }
    pGVar1 = (definition->fields).palettes;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_array *)0x0) {
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0;
      uVar5 = 0;
      while( true ) {
        if ((int)pGVar1->max_length <= (int)uVar5) {
          return pGVar4;
        }
        if ((uint)pGVar1->max_length <= uVar5) break;
        pGVar2 = pGVar1->m_Items[(int)uVar5];
        if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) &&
           (bVar3 = System_String__IsNullOrEmpty((pGVar2->fields).name,(MethodInfo *)0x0), !bVar3)) {
          bVar3 = System_String__Equals_196c550((pGVar2->fields).name,b,5,(MethodInfo *)0x0);
          if (bVar3) {
            return pGVar2;
          }
          if ((pGVar4 == (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) ||
             (bVar3 = System_String__Equals_196c550
                                ((pGVar2->fields).name,"light",5,(MethodInfo *)0x0), bVar3)) {
            pGVar4 = pGVar2;
          }
        }
        uVar5 = uVar5 + 1;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$MergeStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__MergeStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* baseStyle, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* patch, const MethodInfo* method);
// 0x181897cc0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__MergeStyle
          (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *baseStyle,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *patch,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184341f27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    Il2CppMethodInitialized_184341f27 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__CopyStyle(baseStyle,(MethodInfo *)0x0);
  if (patch != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((patch->fields).name,(MethodInfo *)0x0);
    if (bVar2) {
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818980bc;
      pSVar6 = (pGVar3->fields).name;
    }
    else {
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818980bc;
      pSVar6 = (patch->fields).name;
    }
    (pGVar3->fields).name = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).name,pSVar6);
    pGVar5 = pGVar3;
    if ((patch->fields).background != (System_String_o *)0x0) {
      pGVar5 = patch;
    }
    pSVar6 = (pGVar5->fields).background;
    (pGVar3->fields).background = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).background,pSVar6);
    pGVar5 = patch;
    if ((patch->fields).textColor == (System_String_o *)0x0) {
      pGVar5 = pGVar3;
    }
    pSVar6 = (pGVar5->fields).textColor;
    (pGVar3->fields).textColor = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textColor,pSVar6);
    pGVar5 = pGVar3;
    if ((patch->fields).fontFamily != (System_String_o *)0x0) {
      pGVar5 = patch;
    }
    pSVar6 = (pGVar5->fields).fontFamily;
    (pGVar3->fields).fontFamily = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).fontFamily,pSVar6);
    pGVar5 = pGVar3;
    if ((patch->fields).fontWeight.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).fontWeight.fields = (pGVar5->fields).fontWeight.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).fontSize.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).fontSize.fields = (pGVar5->fields).fontSize.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).textAlignment != (System_String_o *)0x0) {
      pGVar5 = patch;
    }
    pSVar6 = (pGVar5->fields).textAlignment;
    (pGVar3->fields).textAlignment = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textAlignment,pSVar6);
    pGVar5 = pGVar3;
    if ((patch->fields).iconSize.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).iconSize.fields = (pGVar5->fields).iconSize.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).padding.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).padding.fields = (pGVar5->fields).padding.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).paddingX.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).paddingX.fields = (pGVar5->fields).paddingX.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).paddingY.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).paddingY.fields = (pGVar5->fields).paddingY.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).gap.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).gap.fields = (pGVar5->fields).gap.fields;
    if ((patch->fields).width == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pGVar4 = (pGVar3->fields).width;
    }
    else {
      pGVar1 = (patch->fields).width;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
      }
      if (Il2CppMethodInitialized_184341f29 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        Il2CppMethodInitialized_184341f29 = '\x01';
      }
      pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_1818980bc;
      (pGVar4->fields).value = (pGVar1->fields).value;
      pSVar6 = (pGVar1->fields).unit;
      (pGVar4->fields).unit = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).unit,pSVar6);
    }
    (pGVar3->fields).width = pGVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).width,pGVar4);
    if ((patch->fields).height == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pGVar4 = (pGVar3->fields).height;
    }
    else {
      pGVar1 = (patch->fields).height;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
      }
      if (Il2CppMethodInitialized_184341f29 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        Il2CppMethodInitialized_184341f29 = '\x01';
      }
      pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818980bc:
        ThrowNullReferenceException();
      }
      (pGVar4->fields).value = (pGVar1->fields).value;
      pSVar6 = (pGVar1->fields).unit;
      (pGVar4->fields).unit = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).unit,pSVar6);
    }
    (pGVar3->fields).height = pGVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).height,pGVar4);
    pGVar5 = pGVar3;
    if ((patch->fields).aspectRatio.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).aspectRatio.fields = (pGVar5->fields).aspectRatio.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).motion != (System_String_o *)0x0) {
      pGVar5 = patch;
    }
    pSVar6 = (pGVar5->fields).motion;
    (pGVar3->fields).motion = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).motion,pSVar6);
    pGVar5 = pGVar3;
    if ((patch->fields).textured.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).textured.fields = (pGVar5->fields).textured.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).worn.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).worn.fields = (pGVar5->fields).worn.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).wornStainScale.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).wornStainScale.fields = (pGVar5->fields).wornStainScale.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).relief.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).relief.fields = (pGVar5->fields).relief.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).reliefGradient.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).reliefGradient.fields = (pGVar5->fields).reliefGradient.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).pressDepth.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).pressDepth.fields = (pGVar5->fields).pressDepth.fields;
    pGVar5 = pGVar3;
    if ((patch->fields).shadow.fields.hasValue != false) {
      pGVar5 = patch;
    }
    (pGVar3->fields).shadow.fields = (pGVar5->fields).shadow.fields;
  }
  return pGVar3;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__CopyStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x181896d20

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__CopyStyle
          (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  
  if (Il2CppMethodInitialized_184341f28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_184341f28 = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition)
    ;
    Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,(MethodInfo *)0x0);
    return pGVar3;
  }
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar1 = (style->fields).name;
    (pGVar3->fields).name = pSVar1;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).name,pSVar1);
    pSVar1 = (style->fields).background;
    (pGVar3->fields).background = pSVar1;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).background,pSVar1);
    pSVar1 = (style->fields).textColor;
    (pGVar3->fields).textColor = pSVar1;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textColor,pSVar1);
    pSVar1 = (style->fields).fontFamily;
    (pGVar3->fields).fontFamily = pSVar1;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).fontFamily,pSVar1);
    (pGVar3->fields).fontWeight.fields = (style->fields).fontWeight.fields;
    (pGVar3->fields).fontSize.fields = (style->fields).fontSize.fields;
    pSVar1 = (style->fields).textAlignment;
    (pGVar3->fields).textAlignment = pSVar1;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textAlignment,pSVar1);
    (pGVar3->fields).iconSize.fields = (style->fields).iconSize.fields;
    (pGVar3->fields).padding.fields = (style->fields).padding.fields;
    (pGVar3->fields).paddingX.fields = (style->fields).paddingX.fields;
    (pGVar3->fields).paddingY.fields = (style->fields).paddingY.fields;
    (pGVar3->fields).gap.fields = (style->fields).gap.fields;
    pGVar2 = (style->fields).width;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    if (Il2CppMethodInitialized_184341f29 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Il2CppMethodInitialized_184341f29 = '\x01';
    }
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_181896fdc;
      (pGVar4->fields).value = (pGVar2->fields).value;
      pSVar1 = (pGVar2->fields).unit;
      (pGVar4->fields).unit = pSVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).unit,pSVar1);
    }
    (pGVar3->fields).width = pGVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).width,pGVar4);
    pGVar2 = (style->fields).height;
    if (Il2CppMethodInitialized_184341f29 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Il2CppMethodInitialized_184341f29 = '\x01';
    }
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_181896fdc;
      (pGVar4->fields).value = (pGVar2->fields).value;
      pSVar1 = (pGVar2->fields).unit;
      (pGVar4->fields).unit = pSVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).unit,pSVar1);
    }
    (pGVar3->fields).height = pGVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).height,pGVar4);
    (pGVar3->fields).aspectRatio.fields = (style->fields).aspectRatio.fields;
    pSVar1 = (style->fields).motion;
    (pGVar3->fields).motion = pSVar1;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).motion,pSVar1);
    (pGVar3->fields).textured.fields = (style->fields).textured.fields;
    (pGVar3->fields).worn.fields = (style->fields).worn.fields;
    (pGVar3->fields).wornStainScale.fields = (style->fields).wornStainScale.fields;
    (pGVar3->fields).relief.fields = (style->fields).relief.fields;
    (pGVar3->fields).reliefGradient.fields = (style->fields).reliefGradient.fields;
    (pGVar3->fields).pressDepth.fields = (style->fields).pressDepth.fields;
    (pGVar3->fields).shadow.fields = (style->fields).shadow.fields;
    return pGVar3;
  }
label_181896fdc:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyLength
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Styling_GisketchTheme__CopyLength (Gisketch_Aottg2UI_Data_GisketchLength_o* length, const MethodInfo* method);
// 0x181896ca0

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__CopyLength
          (Gisketch_Aottg2UI_Data_GisketchLength_o *length,MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_184341f29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Il2CppMethodInitialized_184341f29 = '\x01';
  }
  if (length == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    return (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = (length->fields).value;
    value = (length->fields).unit;
    (__this->fields).unit = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).unit,value);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddSettingsDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddSettingsDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x1818958f0

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddSettingsDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_184341f2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&"settingsCategoryTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsSubtabStrip");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184341f2a = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                     ("settingsCategoryTitle","text","header",400,56.0,
                      (MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)"settingsCategoryTitle",(Il2CppObject *)pGVar2,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                       ("settingsSubtabStrip","text","header",400,30.0,
                        (MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)"settingsSubtabStrip",(Il2CppObject *)pGVar2,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$get_ReliefIntensity
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchTheme__get_ReliefIntensity (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x180584ac0

float
Gisketch_Aottg2UI_Styling_GisketchTheme__get_ReliefIntensity(Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, MethodInfo* method)

{
  return (__this->fields)._ReliefIntensity_k__BackingField;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$set_ReliefIntensity
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__set_ReliefIntensity (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, float value, const MethodInfo* method);
// 0x180584b70

void
Gisketch_Aottg2UI_Styling_GisketchTheme__set_ReliefIntensity(Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, float value, MethodInfo* method)

{
  (__this->fields)._ReliefIntensity_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$get_IsDarkMode
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTheme__get_IsDarkMode (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x180584ab0

bool
Gisketch_Aottg2UI_Styling_GisketchTheme__get_IsDarkMode(Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, MethodInfo* method)

{
  return (__this->fields)._IsDarkMode_k__BackingField;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$set_IsDarkMode
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__set_IsDarkMode (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, bool value, const MethodInfo* method);
// 0x180584b60

void
Gisketch_Aottg2UI_Styling_GisketchTheme__set_IsDarkMode(Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._IsDarkMode_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$FromJson
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson (System_String_o* json, const MethodInfo* method);
// 0x1818978b0

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(System_String_o *json,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  
  if (Il2CppMethodInitialized_184341f2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_184341f2b = '\x01';
  }
  definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$FromDefinition
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* definition, const MethodInfo* method);
// 0x1818974d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818976ec: nop dword ptr [rax]

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition
          (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemePalette_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *pGVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionToken_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionToken_o *value;
  bool bVar5;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *__this_01;
  System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *baseStyle;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar7;
  uint uVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar10;
  
  if (Il2CppMethodInitialized_184341f2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&"dark");
    Il2CppMethodInitialized_184341f2c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  if (Il2CppMethodInitialized_184341f33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Color);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken);
    Il2CppMethodInitialized_184341f33 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Color);
  System_Collections_Generic_Dictionary_object__Color____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_ctor);
  (__this->fields)._colors = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colors,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_ctor);
  (__this->fields)._styles = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._styles,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_ctor);
  (__this->fields)._motions = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._motions,__this_02);
  (__this->fields)._ReliefIntensity_k__BackingField = 1.0;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Styling_GisketchTheme__AddDefaults(__this,(MethodInfo *)0x0);
  if (definition != (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    bVar5 = System_String__Equals_196c550((definition->fields).mode,"dark",5,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      (__this->fields)._IsDarkMode_k__BackingField = true;
      (__this->fields)._ReliefIntensity_k__BackingField = 0.5;
    }
    if ((definition->fields).colors != (Gisketch_Aottg2UI_Data_GisketchColorToken_array *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors
                (__this,(definition->fields).colors,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_184341f26 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"light");
      Il2CppMethodInitialized_184341f26 = '\x01';
    }
    if (((definition->fields).palettes != (Gisketch_Aottg2UI_Data_GisketchThemePalette_array *)0x0) &&
       (((definition->fields).palettes)->max_length != 0)) {
      bVar5 = System_String__IsNullOrEmpty((definition->fields).mode,(MethodInfo *)0x0);
      pSVar9 = "light";
      if (!bVar5) {
        pSVar9 = (definition->fields).mode;
      }
      pGVar1 = (definition->fields).palettes;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchThemePalette_array *)0x0) {
label_18189789d:
        ThrowNullReferenceException();
      }
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0;
      for (uVar8 = 0; (int)uVar8 < (int)pGVar1->max_length; uVar8 = uVar8 + 1) {
        if ((uint)pGVar1->max_length <= uVar8) goto label_1818978a3;
        pGVar7 = pGVar1->m_Items[(int)uVar8];
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) {
          bVar5 = System_String__IsNullOrEmpty((pGVar7->fields).name,(MethodInfo *)0x0);
          if (!bVar5) {
            bVar5 = System_String__Equals_196c550((pGVar7->fields).name,pSVar9,5,(MethodInfo *)0x0);
            if (bVar5) goto label_181897766;
            if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) {
              bVar5 = System_String__Equals_196c550
                                ((pGVar7->fields).name,"light",5,(MethodInfo *)0x0);
              if (!bVar5) goto label_181897758;
            }
            pGVar10 = pGVar7;
          }
        }
label_181897758:
      }
      pGVar7 = pGVar10;
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) {
label_181897766:
        Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors(__this,(pGVar7->fields).colors,(MethodInfo *)0x0)
        ;
      }
    }
    if ((definition->fields).styles != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *)0x0) {
      pGVar2 = (definition->fields).styles;
      for (uVar8 = 0; (int)uVar8 < (int)pGVar2->max_length; uVar8 = uVar8 + 1) {
        if ((uint)pGVar2->max_length <= uVar8) goto label_1818978a3;
        pGVar6 = pGVar2->m_Items[(int)uVar8];
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          bVar5 = System_String__IsNullOrEmpty((pGVar6->fields).name,(MethodInfo *)0x0);
          if (!bVar5) {
            pSVar9 = (pGVar6->fields).name;
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
            baseStyle = Gisketch_Aottg2UI_Styling_GisketchTheme__StyleOrNull(__this,pSVar9,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
            }
            pGVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__MergeStyle(baseStyle,pGVar6,(MethodInfo *)0x0);
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18189789d;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar3,(Il2CppObject *)pSVar9,(Il2CppObject *)pGVar6,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                      );
          }
        }
      }
    }
    if ((definition->fields).motions != (Gisketch_Aottg2UI_Data_GisketchMotionToken_array *)0x0) {
      pGVar4 = (definition->fields).motions;
      for (uVar8 = 0; (int)uVar8 < (int)pGVar4->max_length; uVar8 = uVar8 + 1) {
        if ((uint)pGVar4->max_length <= uVar8) {
label_1818978a3:
          ThrowIndexOutOfRangeException();
        }
        value = pGVar4->m_Items[(int)uVar8];
        if (value != (Gisketch_Aottg2UI_Data_GisketchMotionToken_o *)0x0) {
          bVar5 = System_String__IsNullOrEmpty((value->fields).name,(MethodInfo *)0x0);
          if (!bVar5) {
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._motions;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18189789d;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar3,(Il2CppObject *)(value->fields).name,(Il2CppObject *)value,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_set_Item);
          }
        }
      }
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181897b00

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_184341f2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_184341f2d = '\x01';
  }
  local_res10[0] = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181897bb3;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)name,(Il2CppObject **)local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue
                      );
    if (bVar2) {
      return local_res10[0];
    }
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pGVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)"default",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                       );
    return pGVar3;
  }
label_181897bb3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$TryGetStyle
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o** style, const MethodInfo* method);
// 0x181898390

bool Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **style,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue);
    Il2CppMethodInitialized_184341f2e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)name,(Il2CppObject **)style,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue
                      );
    if (bVar1) {
      return true;
    }
  }
  *style = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  Il2CppCodeGenWriteBarrier(style,(void *)0x0);
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* token, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x181897910

UnityEngine_Color_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
          (UnityEngine_Color_o *__return_storage_ptr__,Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,
          System_String_o *token,UnityEngine_Color_o *fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_Fields local_38;
  
  if (Il2CppMethodInitialized_184341f2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_TryGetValue);
    Il2CppMethodInitialized_184341f2f = '\x01';
  }
  local_38.DefaultActionCategories = 0;
  local_38.DefaultActionAtTargetCategories = 0;
  local_38.HandleEventTrickleDownCategories = 0;
  local_38.HandleEventBubbleUpCategories = 0;
  bVar4 = System_String__IsNullOrEmpty(token,(MethodInfo *)0x0);
  if (!bVar4) {
    __this_00 = (__this->fields)._colors;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)token,
                       (UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o *)
                       &local_38,
                       (MethodInfo_1461A40 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_TryGetValue);
    if (bVar4) {
      (__return_storage_ptr__->fields).r = (float)local_38.DefaultActionCategories;
      (__return_storage_ptr__->fields).g = (float)local_38.DefaultActionAtTargetCategories;
      (__return_storage_ptr__->fields).b = (float)local_38.HandleEventTrickleDownCategories;
      (__return_storage_ptr__->fields).a = (float)local_38.HandleEventBubbleUpCategories;
      return __return_storage_ptr__;
    }
  }
  fVar1 = (fallback->fields).g;
  fVar2 = (fallback->fields).b;
  fVar3 = (fallback->fields).a;
  (__return_storage_ptr__->fields).r = (fallback->fields).r;
  (__return_storage_ptr__->fields).g = fVar1;
  (__return_storage_ptr__->fields).b = fVar2;
  (__return_storage_ptr__->fields).a = fVar3;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetMotionPreset
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionPreset (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* tokenOrPreset, const MethodInfo* method);
// 0x181897a60

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionPreset
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *tokenOrPreset,MethodInfo *method
          )

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_res10 [3];
  
  if (Il2CppMethodInitialized_184341f30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_TryGetValue);
    Il2CppMethodInitialized_184341f30 = '\x01';
  }
  local_res10[0] = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(tokenOrPreset,(MethodInfo *)0x0);
  if (bVar1) {
    return tokenOrPreset;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._motions;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)tokenOrPreset,local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_TryGetValue
                      );
    if (!bVar1) {
      return tokenOrPreset;
    }
    if (local_res10[0] != (Il2CppObject *)0x0) {
      return local_res10[0][1].monitor;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetMotionDuration
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionDuration (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* tokenOrPreset, float fallback, const MethodInfo* method);
// 0x1818979b0

float Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionDuration
                (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *tokenOrPreset,
                float fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_res10 [3];
  
  if (Il2CppMethodInitialized_184341f31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_TryGetValue);
    Il2CppMethodInitialized_184341f31 = '\x01';
  }
  local_res10[0] = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(tokenOrPreset,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._motions;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_181897a59:
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)tokenOrPreset,local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_TryGetValue
                      );
    if (bVar1) {
      if (local_res10[0] == (Il2CppObject *)0x0) goto label_181897a59;
      if (0.0 < *(float *)&local_res10[0][2].klass) {
        return *(float *)&local_res10[0][2].klass;
      }
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$StyleOrNull
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__StyleOrNull (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1818981f0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__StyleOrNull
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_184341f32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue);
    Il2CppMethodInitialized_184341f32 = '\x01';
  }
  local_res10[0] = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)name,(Il2CppObject **)local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue
                      );
    if (bVar1) {
      return local_res10[0];
    }
  }
  return (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme___ctor (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x1818984b0

void Gisketch_Aottg2UI_Styling_GisketchTheme___ctor
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *__this_01;
  System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *__this_02;
  
  if (Il2CppMethodInitialized_184341f33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Color);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken);
    Il2CppMethodInitialized_184341f33 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Color);
  System_Collections_Generic_Dictionary_object__Color____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_ctor);
  (__this->fields)._colors = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colors,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_ctor);
  (__this->fields)._styles = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._styles,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_ctor);
  (__this->fields)._motions = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._motions,__this_02);
  (__this->fields)._ReliefIntensity_k__BackingField = 1.0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme___cctor (const MethodInfo* method);
// 0x181898430

void Gisketch_Aottg2UI_Styling_GisketchTheme___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *value;
  
  if (Il2CppMethodInitialized_184341f34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchThemeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_184341f34 = '\x01';
  }
  definition = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchThemeDefinition);
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)definition,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default,value);
  return;
}


