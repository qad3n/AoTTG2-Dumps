// Type: Gisketch.Aottg2UI.Styling.GisketchTheme
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTheme.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddAtomDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddAtomDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x5335450

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddAtomDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o **ppSVar1;
  System_Collections_Generic_Dictionary_string__Color__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *in_R8;
  UnityEngine_Color_o value;
  System_Nullable_bool__Fields local_88 [4];
  System_Nullable_bool__Fields local_80 [4];
  System_Nullable_bool__Fields local_78 [4];
  System_Nullable_bool__Fields local_70 [4];
  System_Nullable_bool__Fields local_68 [4];
  System_Nullable_float__Fields local_60;
  System_Nullable_float__Fields local_58;
  System_Nullable_float__Fields local_50;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *local_38;
  
  if (Il2CppMethodInitialized_0754288e == '\0') {
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
    Il2CppMethodInitialized_0754288e = '\x01';
  }
  pSVar2 = (__this->fields)._colors;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
    System_Collections_Generic_Dictionary_object__Color___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               (Il2CppObject *)"shadow",
               (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
               (MethodInfo_4A8D130 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    pSVar2 = (__this->fields)._colors;
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      value = System_Collections_Generic_Dictionary_object__Color___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)"primary",
                         (MethodInfo_4A8D0C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item);
      System_Collections_Generic_Dictionary_object__Color___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (Il2CppObject *)"controlMark",value,
                 (MethodInfo_4A8D130 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item)
      ;
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pGVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar3,(Il2CppObject *)"tooltip",
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                           );
        local_68[0].hasValue = false;
        local_68[0].value = false;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o *)local_68,true,
                   (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          ppSVar1 = &(__this->fields)._styles;
          (pGVar4->fields).shadow.fields = local_68[0];
          if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pGVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,
                                (Il2CppObject *)"dialog",
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                               );
            local_70[0].hasValue = false;
            local_70[0].value = false;
            System_Nullable_bool____ctor
                      ((System_Nullable_bool__o *)local_70,true,
                       (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
              (pGVar4->fields).shadow.fields = local_70[0];
              if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
                  (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pGVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,
                                    (Il2CppObject *)"popover",
                                    (MethodInfo_4AAD450 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                   );
                local_78[0].hasValue = false;
                local_78[0].value = false;
                System_Nullable_bool____ctor
                          ((System_Nullable_bool__o *)local_78,true,
                           (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
                if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                  (pGVar4->fields).shadow.fields = local_78[0];
                  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                  pMVar6 = extraout_RDX;
                  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0)
                  {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                    pMVar6 = extraout_RDX_00;
                  }
                  pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                     ("icon","text",24.0,pMVar6);
                  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pSVar3,(Il2CppObject *)"icon",(Il2CppObject *)pGVar4,
                               (MethodInfo_4AAD4C0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                              );
                    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                       ("spriteButton","clear",48.0,method_00);
                    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      local_38 = __this;
                      System_Collections_Generic_Dictionary_object__object___set_Item
                                (pSVar3,(Il2CppObject *)"spriteButton",(Il2CppObject *)pGVar4,
                                 (MethodInfo_4AAD4C0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                );
                      if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
                          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        pGVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                           ((System_Collections_Generic_Dictionary_object__object__o *)
                                            *ppSVar1,(Il2CppObject *)"spriteButton",
                                            (MethodInfo_4AAD450 *)
                                            MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                           );
                        if (Il2CppMethodInitialized_0754289c == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                          il2cpp_codegen_initialize_runtime_metadata(&"point");
                          Il2CppMethodInitialized_0754289c = '\x01';
                        }
                        pGVar5 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                        Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
                        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                          (pGVar5->fields).value = 48.0;
                          (pGVar5->fields).unit = "point";
                          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
                          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                            (pGVar4->fields).width = pGVar5;
                            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).width);
                            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                            pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                               ("separator","primary",2.0,method_01);
                            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__object___set_Item
                                        (pSVar3,(Il2CppObject *)"separator",(Il2CppObject *)pGVar4,
                                         (MethodInfo_4AAD4C0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                        );
                              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                              pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                 ("dropdown","clear",42.0,method_02);
                              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                                System_Collections_Generic_Dictionary_object__object___set_Item
                                          (pSVar3,(Il2CppObject *)"dropdown",(Il2CppObject *)pGVar4
                                           ,(MethodInfo_4AAD4C0 *)
                                            MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                          );
                                pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                                pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                   ("select","clear",42.0,method_03
                                                   );
                                if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                                {
                                  System_Collections_Generic_Dictionary_object__object___set_Item
                                            (pSVar3,(Il2CppObject *)"select",
                                             (Il2CppObject *)pGVar4,
                                             (MethodInfo_4AAD4C0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                            );
                                  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1
                                  ;
                                  pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle
                                                     ("dropdownItem",false,method_04);
                                  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0
                                     ) {
                                    System_Collections_Generic_Dictionary_object__object___set_Item
                                              (pSVar3,(Il2CppObject *)"dropdownItem",
                                               (Il2CppObject *)pGVar4,
                                               (MethodInfo_4AAD4C0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                              );
                                    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                             *ppSVar1;
                                    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle
                                                       ("searchResultItem",true,method_05);
                                    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)
                                                  0x0) {
                                      System_Collections_Generic_Dictionary_object__object___set_Item
                                                (pSVar3,(Il2CppObject *)"searchResultItem",
                                                 (Il2CppObject *)pGVar4,
                                                 (MethodInfo_4AAD4C0 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                );
                                      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                               *ppSVar1;
                                      pGVar4 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)
                                                                                                                    
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                      Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                (pGVar4,(MethodInfo *)0x0);
                                      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                        (pGVar4->fields).name = "callout";
                                        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).name);
                                        (pGVar4->fields).background = "surface";
                                        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).background);
                                        local_40.hasValue = false;
                                        local_40._1_3_ = 0;
                                        local_40.value = 0.0;
                                        System_Nullable_float____ctor
                                                  ((System_Nullable_float__o *)&local_40,0.0,
                                                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor
                                                  );
                                        (pGVar4->fields).padding.fields = local_40;
                                        local_48.hasValue = false;
                                        local_48._1_3_ = 0;
                                        local_48.value = 0.0;
                                        System_Nullable_float____ctor
                                                  ((System_Nullable_float__o *)&local_48,12.0,
                                                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor
                                                  );
                                        (pGVar4->fields).gap.fields = local_48;
                                        local_80[0].hasValue = false;
                                        local_80[0].value = false;
                                        System_Nullable_bool____ctor
                                                  ((System_Nullable_bool__o *)local_80,true,
                                                   (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor)
                                        ;
                                        (pGVar4->fields).textured.fields = local_80[0];
                                        local_88[0].hasValue = false;
                                        local_88[0].value = false;
                                        System_Nullable_bool____ctor
                                                  ((System_Nullable_bool__o *)local_88,true,
                                                   (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor)
                                        ;
                                        (pGVar4->fields).worn.fields = local_88[0];
                                        local_50.hasValue = false;
                                        local_50._1_3_ = 0;
                                        local_50.value = 0.0;
                                        System_Nullable_float____ctor
                                                  ((System_Nullable_float__o *)&local_50,4.0,
                                                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor
                                                  );
                                        (pGVar4->fields).wornStainScale.fields = local_50;
                                        local_58.hasValue = false;
                                        local_58._1_3_ = 0;
                                        local_58.value = 0.0;
                                        System_Nullable_float____ctor
                                                  ((System_Nullable_float__o *)&local_58,0.0,
                                                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor
                                                  );
                                        (pGVar4->fields).relief.fields = local_58;
                                        if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                          System_Collections_Generic_Dictionary_object__object___set_Item
                                                    (pSVar3,(Il2CppObject *)"callout",
                                                     (Il2CppObject *)pGVar4,
                                                     (MethodInfo_4AAD4C0 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                    );
                                          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                   *ppSVar1;
                                          pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                             ("calloutText","textMuted",
                                                              "text",400,18.0,in_R8);
                                          if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                            System_Collections_Generic_Dictionary_object__object___set_Item
                                                      (pSVar3,(Il2CppObject *)"calloutText",
                                                       (Il2CppObject *)pGVar4,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                      );
                                            if ((System_Collections_Generic_Dictionary_object__object__o *)
                                                *ppSVar1 !=
                                                (System_Collections_Generic_Dictionary_object__object__o *)0x0
                                               ) {
                                              pGVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"calloutText",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                              if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o
                                                             *)0x0) {
                                                (pGVar4->fields).fontStyle = "italic";
                                                Il2CppCodeGenWriteBarrier(&(pGVar4->fields).fontStyle);
                                                if ((System_Collections_Generic_Dictionary_object__object__o *
                                                    )*ppSVar1 !=
                                                    (System_Collections_Generic_Dictionary_object__object__o *
                                                    )0x0) {
                                                  pGVar4 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"calloutText",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                  local_60.hasValue = false;
                                                  local_60._1_3_ = 0;
                                                  local_60.value = 0.0;
                                                  System_Nullable_float____ctor
                                                            ((System_Nullable_float__o *)&local_60,12.0,
                                                             (MethodInfo_3CDA2B0 *)
                                                             MethodInfo_System_Nullable_float_ctor);
                                                  if (pGVar4 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                  {
                                                    (pGVar4->fields).padding.fields = local_60;
                                                    pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                    pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("calloutBorderPrimary","primary",
                                                                  42.0,method_06);
                                                    if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                      System_Collections_Generic_Dictionary_object__object___set_Item
                                                                (pSVar3,(Il2CppObject *)"calloutBorderPrimary",
                                                                 (Il2CppObject *)pGVar4,
                                                                 (MethodInfo_4AAD4C0 *)
                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                      pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                      pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("calloutBorderSuccess","success",
                                                                  42.0,method_07);
                                                      if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"calloutBorderSuccess"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("calloutBorderWarning","warning",
                                                                  42.0,method_08);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"calloutBorderWarning"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("calloutBorderError","destructive",
                                                                  42.0,method_09);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pMVar6 = (MethodInfo *)"calloutBorderError";
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"calloutBorderError"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__CopyInputStyle
                                                                 ("textArea",118.0,pMVar6);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"textArea"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("slider","clear",
                                                                  48.0,method_10);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"slider"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("sliderTrack","engravedBg",
                                                                  18.0,method_11);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"sliderTrack"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("sliderFill","primary",
                                                                  "header",400,1.0,18.0,in_R8);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"sliderFill"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("sliderThumb","surfaceSoft",
                                                                  "header",400,1.0,24.0,in_R8);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"sliderThumb"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar4 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"sliderThumb",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (Il2CppMethodInitialized_0754289c == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar5->fields).value = 24.0;
                                                         (pGVar5->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
                                                         if (pGVar4 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar4->fields).width = pGVar5;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar4->fields).width);
                                                         if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar4 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"sliderThumb",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar4 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar4->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar4->fields).textColor);
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("sliderValue","textMuted",
                                                                  "text",500,18.0,in_R8);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"sliderValue"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("stateMetaText","textMuted",
                                                                  "text",400,20.0,in_R8);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"stateMetaText"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar4 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"stateMetaText",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar4 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar4->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar4->fields).textAlignment);
                                                         if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar4 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"stateMetaText",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (Il2CppMethodInitialized_07542895 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"percent");
                                                       Il2CppMethodInitialized_07542895 = '\x01';
                                                       }
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar5->fields).value = 100.0;
                                                         (pGVar5->fields).unit = "percent";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
                                                         if (pGVar4 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar4->fields).width = pGVar5;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar4->fields).width);
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("checkbox","clear",
                                                                  42.0,method_12);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"checkbox"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("radio","clear",
                                                                  42.0,method_13);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"radio"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("checkBox","engravedBg",
                                                                  26.0,method_14);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"checkBox"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("checkMark","controlMark",
                                                                  16.0,method_15);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"checkMark"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("switch","clear",
                                                                  42.0,method_16);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"switch"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar4 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"switch",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (Il2CppMethodInitialized_0754289c == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar5->fields).value = 58.0;
                                                         (pGVar5->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
                                                         if (pGVar4 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar4->fields).width = pGVar5;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar4->fields).width);
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                                 ("switchTrack","engravedBg",
                                                                  26.0,method_17);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"switchTrack"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar4 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"switchTrack",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (Il2CppMethodInitialized_0754289c == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar5->fields).value = 52.0;
                                                         (pGVar5->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
                                                         if (pGVar4 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar4->fields).width = pGVar5;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar4->fields).width);
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("switchThumb","surfaceSoft",
                                                                  "header",400,1.0,22.0,in_R8);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"switchThumb"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar4 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"switchThumb",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (Il2CppMethodInitialized_0754289c == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar5->fields).value = 22.0;
                                                         (pGVar5->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
                                                         if (pGVar4 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar4->fields).width = pGVar5;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar4->fields).width);
                                                         pSVar3 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar4 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("controlLabel","text",
                                                                  "text",400,19.0,in_R8);
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pMVar6 = (MethodInfo *)"controlLabel";
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar3,(Il2CppObject *)"controlLabel"
                                                                  ,(Il2CppObject *)pGVar4,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       __this_00 = local_38;
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastDefaults
                                                                 (local_38,pMVar6);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddMainMenuDefaults
                                                                 (__this_00,pMVar6);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddToastDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x5337530
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5337718: cmp byte ptr [rip + 0x220b17d], 0
// asm:   0x533771f: jne 0x5337740
// asm:   0x5337bd8: jmp 0x5337740

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  MethodInfo *in_R8;
  System_Nullable_bool__Fields local_68 [4];
  System_Nullable_bool__Fields local_60 [4];
  System_Nullable_bool__Fields local_58 [4];
  System_Nullable_float__Fields local_50;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40;
  System_Nullable_float__Fields local_38;
  
  if (Il2CppMethodInitialized_0754288f == '\0') {
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
    Il2CppMethodInitialized_0754288f = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar2->fields).name = "toast";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name);
    (pGVar2->fields).background = "surface";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    if (Il2CppMethodInitialized_0754289c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_0754289c = '\x01';
    }
    pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar3->fields).value = 520.0;
      (pGVar3->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit);
      (pGVar2->fields).width = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width);
      (pGVar2->fields).motion = "balloon";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).motion);
      local_58[0].hasValue = false;
      local_58[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_58,true,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      (pGVar2->fields).textured.fields = local_58[0];
      local_60[0].hasValue = false;
      local_60[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_60,true,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      (pGVar2->fields).worn.fields = local_60[0];
      local_38.hasValue = false;
      local_38._1_3_ = 0;
      local_38.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_38,4.0,
                 (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      (pGVar2->fields).wornStainScale.fields = local_38;
      local_40.hasValue = false;
      local_40._1_3_ = 0;
      local_40.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_40,1.0,
                 (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      (pGVar2->fields).relief.fields = local_40;
      local_68[0].hasValue = false;
      local_68[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_68,true,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      (pGVar2->fields).shadow.fields = local_68[0];
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)"toast",(Il2CppObject *)pGVar2,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
        pGVar2 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
        Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          (pGVar2->fields).name = "toastContentPanel";
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name);
          (pGVar2->fields).background = "clear";
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).background);
          local_48.hasValue = false;
          local_48._1_3_ = 0;
          local_48.value = 0.0;
          System_Nullable_float____ctor
                    ((System_Nullable_float__o *)&local_48,12.0,
                     (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
          (pGVar2->fields).padding.fields = local_48;
          local_50.hasValue = false;
          local_50._1_3_ = 0;
          local_50.value = 0.0;
          System_Nullable_float____ctor
                    ((System_Nullable_float__o *)&local_50,6.0,
                     (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
          (pGVar2->fields).gap.fields = local_50;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar1,(Il2CppObject *)"toastContentPanel",(Il2CppObject *)pGVar2,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                      );
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
            pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                               ("toastTitle","text","header",400,22.0,
                                in_R8);
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar1,(Il2CppObject *)"toastTitle",(Il2CppObject *)pGVar2,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                        );
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
              pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                 ("toastContent","textMuted","text",400,18.0,
                                  in_R8);
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar1,(Il2CppObject *)"toastContent",(Il2CppObject *)pGVar2,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                          );
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
                pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                   ("toastCloseButton","primary","header",400,1.0,
                                    34.0,in_R8);
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar1,(Il2CppObject *)"toastCloseButton",(Il2CppObject *)pGVar2,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                            );
                  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles
                  ;
                  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                                       (pSVar1,(Il2CppObject *)"toastCloseButton",
                                        (MethodInfo_4AAD450 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                       );
                    if (Il2CppMethodInitialized_0754289c == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                      il2cpp_codegen_initialize_runtime_metadata(&"point");
                      Il2CppMethodInitialized_0754289c = '\x01';
                    }
                    pGVar3 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                      (pGVar3->fields).value = 34.0;
                      (pGVar3->fields).unit = "point";
                      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit);
                      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                        (pGVar2->fields).width = pGVar3;
                        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Error","destructive","destructive",
                                   in_R8);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Warning","warning","warning",
                                   in_R8);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Information","negative","negative",
                                   in_R8);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Workshop","workshop","workshop",
                                   in_R8);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Success","success","success",
                                   in_R8);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddToastVariant
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* suffix, System_String_o* border, System_String_o* icon, const MethodInfo* method);
// 0x533c5c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x533c6ae: cmp byte ptr [rip + 0x22061e7], 0
// asm:   0x533c6b5: jne 0x533c6d6
// asm:   0x533c83f: jmp 0x533c6d6

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *suffix,
               System_String_o *border,System_String_o *icon,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542890 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&"toastIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"toastBorder");
    Il2CppMethodInitialized_07542890 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pSVar2 = System_String__Concat_52f0320("toastBorder",suffix,(MethodInfo *)0x0);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_52f0320("toastBorder",suffix,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar3->fields).name = pSVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).name);
    (pGVar3->fields).background = border;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).background);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    if (Il2CppMethodInitialized_0754289c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_0754289c = '\x01';
    }
    pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar5->fields).value = 6.0;
      (pGVar5->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
      (pGVar3->fields).width = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).width);
      if (Il2CppMethodInitialized_07542895 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        il2cpp_codegen_initialize_runtime_metadata(&"percent");
        Il2CppMethodInitialized_07542895 = '\x01';
      }
      pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar5->fields).value = 100.0;
        (pGVar5->fields).unit = "percent";
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).unit);
        (pGVar3->fields).height = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).height);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar3,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item)
          ;
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
          pSVar2 = System_String__Concat_52f0320("toastIcon",suffix,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat_52f0320("toastIcon",suffix,(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle(pSVar4,icon,24.0,method_00);
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar3,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                      );
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyInputStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__CopyInputStyle (System_String_o* name, float height, const MethodInfo* method);
// 0x5336e90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5337014: cmp byte ptr [rip + 0x220b881], 0
// asm:   0x533701b: jne 0x533703c
// asm:   0x53371da: jmp 0x533703c

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__CopyInputStyle(System_String_o *name,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  System_Nullable_bool__Fields local_60 [4];
  System_Nullable_bool__Fields local_58 [2];
  float local_54;
  System_Nullable_float__Fields local_50;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40;
  System_Nullable_float__Fields local_38;
  System_Nullable_int__Fields local_30;
  
  local_54 = height;
  if (Il2CppMethodInitialized_07542891 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"engravedBg");
    Il2CppMethodInitialized_07542891 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name);
    (__this->fields).background = "engravedBg";
    Il2CppCodeGenWriteBarrier(&(__this->fields).background);
    (__this->fields).textColor = "text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).textColor);
    (__this->fields).fontFamily = "text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).fontFamily);
    local_30.hasValue = false;
    local_30._1_3_ = 0;
    local_30.value = 0;
    System_Nullable_int____ctor
              ((System_Nullable_int__o *)&local_30,400,
               (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
    (__this->fields).fontWeight.fields = local_30;
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_38,19.0,
               (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).fontSize.fields = local_38;
    local_40.hasValue = false;
    local_40._1_3_ = 0;
    local_40.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_40,12.0,
               (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).padding.fields = local_40;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    if (Il2CppMethodInitialized_0754289c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_0754289c = '\x01';
    }
    pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar1->fields).value = 280.0;
      (pGVar1->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).unit);
      (__this->fields).width = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).width);
      if (Il2CppMethodInitialized_0754289c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        il2cpp_codegen_initialize_runtime_metadata(&"point");
        Il2CppMethodInitialized_0754289c = '\x01';
      }
      pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar1->fields).value = local_54;
        (pGVar1->fields).unit = "point";
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).unit);
        (__this->fields).height = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields).height);
        local_58[0].hasValue = false;
        local_58[0].value = false;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o *)local_58,true,
                   (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
        (__this->fields).textured.fields = local_58[0];
        local_60[0].hasValue = false;
        local_60[0].value = false;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o *)local_60,true,
                   (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
        (__this->fields).worn.fields = local_60[0];
        local_48.hasValue = false;
        local_48._1_3_ = 0;
        local_48.value = 0.0;
        System_Nullable_float____ctor
                  ((System_Nullable_float__o *)&local_48,4.0,
                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
        (__this->fields).wornStainScale.fields = local_48;
        local_50.hasValue = false;
        local_50._1_3_ = 0;
        local_50.value = 0.0;
        System_Nullable_float____ctor
                  ((System_Nullable_float__o *)&local_50,-1.0,
                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
        (__this->fields).relief.fields = local_50;
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ControlStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle (System_String_o* name, System_String_o* background, float height, const MethodInfo* method);
// 0x5336800
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53368db: cmp byte ptr [rip + 0x220bfba], 0
// asm:   0x53368e2: jne 0x5336903
// asm:   0x5336a7c: jmp 0x5336903

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
          (System_String_o *name,System_String_o *background,float height,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  float value;
  System_Nullable_bool__Fields local_40 [4];
  System_Nullable_bool__Fields local_38 [4];
  System_Nullable_float__Fields local_30;
  float local_24;
  
  local_24 = height;
  if (Il2CppMethodInitialized_07542892 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inputBg");
    il2cpp_codegen_initialize_runtime_metadata(&"engravedBg");
    Il2CppMethodInitialized_07542892 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
label_05336a81:
    ThrowNullReferenceException();
  }
  (__this->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).name);
  (__this->fields).background = background;
  Il2CppCodeGenWriteBarrier(&(__this->fields).background);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  if (Il2CppMethodInitialized_0754289c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_0754289c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_05336a81;
  (__this_00->fields).value = local_24;
  (__this_00->fields).unit = "point";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
  (__this->fields).height = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).height);
  bVar1 = System_String__op_Inequality(background,"clear",(MethodInfo *)0x0);
  local_38[0].hasValue = false;
  local_38[0].value = false;
  System_Nullable_bool____ctor
            ((System_Nullable_bool__o *)local_38,bVar1,
             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
  (__this->fields).textured.fields = local_38[0];
  local_40[0].hasValue = false;
  local_40[0].value = false;
  System_Nullable_bool____ctor
            ((System_Nullable_bool__o *)local_40,true,
             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
  (__this->fields).worn.fields = local_40[0];
  local_30.hasValue = false;
  local_30._1_3_ = 0;
  local_30.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_30,4.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  (__this->fields).wornStainScale.fields = local_30;
  bVar1 = System_String__op_Equality(background,"inputBg",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(background,"engravedBg",(MethodInfo *)0x0);
    value = 0.0;
    if (!bVar1) goto label_05336a38;
  }
  value = -1.0;
label_05336a38:
  local_30.hasValue = false;
  local_30._1_3_ = 0;
  local_30.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_30,value,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  (__this->fields).relief.fields = local_30;
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$IconStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle (System_String_o* name, System_String_o* color, float size, const MethodInfo* method);
// 0x5336630
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53366cc: cmp byte ptr [rip + 0x220c1c9], 0
// asm:   0x53366d3: jne 0x53366f4
// asm:   0x53367e8: jmp 0x53366f4

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
          (System_String_o *name,System_String_o *color,float size,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  
  if (Il2CppMethodInitialized_07542893 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_07542893 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name);
    (__this->fields).textColor = color;
    Il2CppCodeGenWriteBarrier(&(__this->fields).textColor);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    if (Il2CppMethodInitialized_0754289c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_0754289c = '\x01';
    }
    pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar1->fields).value = size;
      (pGVar1->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).unit);
      (__this->fields).width = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).width);
      if (Il2CppMethodInitialized_0754289c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        il2cpp_codegen_initialize_runtime_metadata(&"point");
        Il2CppMethodInitialized_0754289c = '\x01';
      }
      pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar1->fields).value = size;
        (pGVar1->fields).unit = "point";
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).unit);
        (__this->fields).height = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields).height);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$DropdownItemStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle (System_String_o* name, bool leftAligned, const MethodInfo* method);
// 0x5336b20
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5336c79: cmp byte ptr [rip + 0x220bc1c], 0
// asm:   0x5336c80: jne 0x5336ca1
// asm:   0x5336d63: jmp 0x5336ca1

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle
          (System_String_o *name,bool leftAligned,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  System_String_o *pSVar1;
  System_Nullable_float__Fields local_38;
  System_Nullable_float__Fields local_30;
  System_Nullable_int__Fields local_28;
  
  if (Il2CppMethodInitialized_07542894 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07542894 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name);
    (__this->fields).background = "clear";
    Il2CppCodeGenWriteBarrier(&(__this->fields).background);
    (__this->fields).textColor = "text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).textColor);
    (__this->fields).fontFamily = "text";
    Il2CppCodeGenWriteBarrier(&(__this->fields).fontFamily);
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value = 0;
    System_Nullable_int____ctor
              ((System_Nullable_int__o *)&local_28,400,
               (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
    (__this->fields).fontWeight.fields = local_28;
    local_30.hasValue = false;
    local_30._1_3_ = 0;
    local_30.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_30,20.0,
               (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).fontSize.fields = local_30;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    if (Il2CppMethodInitialized_0754289c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_0754289c = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 38.0;
      (__this_00->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
      (__this->fields).height = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).height);
      local_38.hasValue = false;
      local_38._1_3_ = 0;
      local_38.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_38,12.0,
                 (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      (__this->fields).paddingX.fields = local_38;
      if (leftAligned) {
        pSVar1 = "left";
      }
      else {
        pSVar1 = (System_String_o *)0x0;
      }
      (__this->fields).textAlignment = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).textAlignment);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$Percent
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Styling_GisketchTheme__Percent (float value, const MethodInfo* method);
// 0x53374a0

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__Percent(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_07542895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_07542895 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).value = value;
  (__this->fields).unit = "percent";
  Il2CppCodeGenWriteBarrier(&(__this->fields).unit);
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddChangelogDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddChangelogDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x533c850

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddChangelogDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07542896 == '\0') {
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
    Il2CppMethodInitialized_07542896 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                     ("changelogSectionHeader","text","header",400,32.0,in_R8);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)"changelogSectionHeader",(Il2CppObject *)pGVar2,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)"changelogSectionHeader",
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                         );
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        (pGVar2->fields).textAlignment = "left";
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textAlignment);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
        pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                           ("changelogMarkdownHeader","text","header",400,30.0,in_R8);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)"changelogMarkdownHeader",(Il2CppObject *)pGVar2,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item)
          ;
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,(Il2CppObject *)"changelogMarkdownHeader",
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                               );
            if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
              (pGVar2->fields).textAlignment = "left";
              Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textAlignment);
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
              pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                 ("changelogPreviewVersion","text","text",700,22.0,
                                  in_R8);
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar1,(Il2CppObject *)"changelogPreviewVersion",(Il2CppObject *)pGVar2,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                          );
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar1,(Il2CppObject *)"changelogPreviewVersion",
                                      (MethodInfo_4AAD450 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                     );
                  pGVar3 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    (pGVar3->fields).value = 100.0;
                    (pGVar3->fields).unit = "percent";
                    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit);
                    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                      (pGVar2->fields).width = pGVar3;
                      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width);
                      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                               (__this->fields)._styles;
                      pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                         ("changelogPreviewMeta","textMuted","text",
                                          400,20.0,in_R8);
                      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  (pSVar1,(Il2CppObject *)"changelogPreviewMeta",(Il2CppObject *)pGVar2,
                                   (MethodInfo_4AAD4C0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                  );
                        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._styles;
                        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                                             (pSVar1,(Il2CppObject *)"changelogPreviewMeta",
                                              (MethodInfo_4AAD450 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                             );
                          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                            (pGVar2->fields).textAlignment = "left";
                            Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textAlignment);
                            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     (__this->fields)._styles;
                            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              pGVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                 (pSVar1,(Il2CppObject *)"changelogPreviewMeta",
                                                  (MethodInfo_4AAD450 *)
                                                  MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                 );
                              pGVar3 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)
                                                  TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                              Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                              if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                (pGVar3->fields).value = 100.0;
                                (pGVar3->fields).unit = "percent";
                                Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit);
                                if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                  (pGVar2->fields).width = pGVar3;
                                  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width);
                                  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                           (__this->fields)._styles;
                                  pGVar2 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)
                                                      TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition)
                                  ;
                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                            (pGVar2,(MethodInfo *)0x0);
                                  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                    (pGVar2->fields).name = "changelogPreviewIcon";
                                    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).name);
                                    (pGVar2->fields).textColor = "text";
                                    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textColor);
                                    pGVar3 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)
                                                        TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                                    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                      (pGVar3->fields).value = 32.0;
                                      (pGVar3->fields).unit = "points";
                                      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit);
                                      (pGVar2->fields).width = pGVar3;
                                      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).width);
                                      pGVar3 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)
                                                          TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                                      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                        (pGVar3->fields).value = 32.0;
                                        (pGVar3->fields).unit = "points";
                                        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit);
                                        (pGVar2->fields).height = pGVar3;
                                        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).height);
                                        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                          System_Collections_Generic_Dictionary_object__object___set_Item
                                                    (pSVar1,(Il2CppObject *)"changelogPreviewIcon",
                                                     (Il2CppObject *)pGVar2,
                                                     (MethodInfo_4AAD4C0 *)
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
// 0x533cd70

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_Fields *pGVar1;
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o **ppSVar2;
  System_Collections_Generic_Dictionary_string__Color__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionToken_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_R8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Color_o value_04;
  UnityEngine_Color_o value_05;
  UnityEngine_Color_o value_06;
  UnityEngine_Color_o value_07;
  UnityEngine_Color_o value_08;
  UnityEngine_Color_o UVar8;
  UnityEngine_Color_o value_09;
  UnityEngine_Color_o value_10;
  UnityEngine_Color_o value_11;
  UnityEngine_Color_o value_12;
  UnityEngine_Color_o value_13;
  UnityEngine_Color_o value_14;
  UnityEngine_Color_o value_15;
  UnityEngine_Color_o value_16;
  UnityEngine_Color_o value_17;
  UnityEngine_Color_o value_18;
  System_Nullable_bool__Fields local_280 [4];
  System_Nullable_bool__Fields local_278 [4];
  System_Nullable_bool__Fields local_270 [4];
  System_Nullable_bool__Fields local_268 [4];
  System_Nullable_bool__Fields local_260 [4];
  System_Nullable_bool__Fields local_258 [4];
  System_Nullable_bool__Fields local_250 [4];
  System_Nullable_bool__Fields local_248 [4];
  System_Nullable_bool__Fields local_240 [4];
  System_Nullable_bool__Fields local_238 [4];
  System_Nullable_bool__Fields local_230 [4];
  System_Nullable_bool__Fields local_228 [4];
  System_Nullable_bool__Fields local_220 [4];
  System_Nullable_bool__Fields local_218 [4];
  System_Nullable_bool__Fields local_210 [4];
  System_Nullable_bool__Fields local_208 [4];
  System_Nullable_bool__Fields local_200 [4];
  System_Nullable_bool__Fields local_1f8 [4];
  System_Nullable_bool__Fields local_1f0 [4];
  System_Nullable_bool__Fields local_1e8 [4];
  System_Nullable_bool__Fields local_1e0 [4];
  System_Nullable_bool__Fields local_1d8 [4];
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *local_1d0;
  System_Nullable_float__Fields local_1c8;
  System_Nullable_float__Fields local_1c0;
  System_Nullable_float__Fields local_1b8;
  System_Nullable_float__Fields local_1b0;
  System_Nullable_int__Fields local_1a8;
  System_Nullable_float__Fields local_1a0;
  System_Nullable_float__Fields local_198;
  System_Nullable_float__Fields local_190;
  System_Nullable_int__Fields local_188;
  System_Nullable_float__Fields local_180;
  System_Nullable_float__Fields local_178;
  System_Nullable_float__Fields local_170;
  System_Nullable_float__Fields local_168;
  System_Nullable_float__Fields local_160;
  System_Nullable_float__Fields local_158;
  System_Nullable_float__Fields local_150;
  System_Nullable_float__Fields local_148;
  System_Nullable_float__Fields local_140;
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
  System_Nullable_float__Fields local_c8;
  System_Nullable_float__Fields local_c0;
  System_Nullable_float__Fields local_b8;
  System_Nullable_float__Fields local_b0;
  System_Nullable_float__Fields local_a8;
  System_Nullable_float__Fields local_a0;
  System_Nullable_float__Fields local_98;
  System_Nullable_float__Fields local_90;
  System_Nullable_float__Fields local_88;
  System_Nullable_float__Fields local_80;
  System_Nullable_float__Fields local_78;
  System_Nullable_float__Fields local_70;
  System_Nullable_float__Fields local_68;
  System_Nullable_int__Fields local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_07542897 == '\0') {
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
    Il2CppMethodInitialized_07542897 = '\x01';
  }
  pSVar3 = (__this->fields)._colors;
  if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
    pGVar1 = &__this->fields;
    System_Collections_Generic_Dictionary_object__Color___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
               (Il2CppObject *)"clear",(UnityEngine_Color_o)ZEXT416(0),
               (MethodInfo_4A8D130 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      UVar8.fields.b = 0.2;
      UVar8.fields.a = 1.0;
      UVar8.fields.r = 0.71;
      UVar8.fields.g = 0.18;
      System_Collections_Generic_Dictionary_object__Color___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                 (Il2CppObject *)"primary",UVar8,
                 (MethodInfo_4A8D130 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item)
      ;
      if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
        value.fields.b = 0.13;
        value.fields.a = 1.0;
        value.fields.r = 0.84;
        value.fields.g = 0.1;
        System_Collections_Generic_Dictionary_object__Color___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                   (Il2CppObject *)"destructive",value,
                   (MethodInfo_4A8D130 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
        if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          value_00.fields.b = 0.65;
          value_00.fields.a = 1.0;
          value_00.fields.r = 0.44;
          value_00.fields.g = 0.29;
          System_Collections_Generic_Dictionary_object__Color___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                     (Il2CppObject *)"secondary",value_00,
                     (MethodInfo_4A8D130 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
          if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
            value_01.fields.b = 0.82;
            value_01.fields.a = 1.0;
            value_01.fields.r = 0.0;
            value_01.fields.g = 0.68;
            System_Collections_Generic_Dictionary_object__Color___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                       (Il2CppObject *)"workshop",value_01,
                       (MethodInfo_4A8D130 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
            if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
              value_02.fields.b = 0.08;
              value_02.fields.a = 1.0;
              value_02.fields.r = 0.92;
              value_02.fields.g = 0.64;
              System_Collections_Generic_Dictionary_object__Color___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                         (Il2CppObject *)"warning",value_02,
                         (MethodInfo_4A8D130 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
              if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                value_03.fields.b = 0.32;
                value_03.fields.a = 1.0;
                value_03.fields.r = 0.12;
                value_03.fields.g = 0.62;
                System_Collections_Generic_Dictionary_object__Color___set_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                           (Il2CppObject *)"success",value_03,
                           (MethodInfo_4A8D130 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                  value_04.fields.b = 0.12;
                  value_04.fields.a = 0.86;
                  value_04.fields.r = 1.0;
                  value_04.fields.g = 0.66;
                  System_Collections_Generic_Dictionary_object__Color___set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                             (Il2CppObject *)"settingsDirty",value_04,
                             (MethodInfo_4A8D130 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                  if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                    value_05.fields.b = 1.0;
                    value_05.fields.a = 1.0;
                    value_05.fields.r = 1.0;
                    value_05.fields.g = 1.0;
                    System_Collections_Generic_Dictionary_object__Color___set_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                               (Il2CppObject *)"surface",value_05,
                               (MethodInfo_4A8D130 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                    if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                      value_06.fields.b = 0.95;
                      value_06.fields.a = 1.0;
                      value_06.fields._0_8_ = 0x3f7333333f733333;
                      System_Collections_Generic_Dictionary_object__Color___set_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                                 (Il2CppObject *)"surfaceSoft",value_06,
                                 (MethodInfo_4A8D130 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                      if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                        value_07.fields.b = 0.02;
                        value_07.fields.a = 1.0;
                        value_07.fields.r = 0.02;
                        value_07.fields.g = 0.02;
                        System_Collections_Generic_Dictionary_object__Color___set_Item
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                                   (Il2CppObject *)"text",value_07,
                                   (MethodInfo_4A8D130 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                        if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0)
                        {
                          value_08.fields.b = 0.2;
                          value_08.fields.a = 1.0;
                          value_08.fields.r = 0.2;
                          value_08.fields.g = 0.2;
                          System_Collections_Generic_Dictionary_object__Color___set_Item
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                                     (Il2CppObject *)"textMuted",value_08,
                                     (MethodInfo_4A8D130 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
                          pSVar3 = pGVar1->_colors;
                          if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                            UVar8 = System_Collections_Generic_Dictionary_object__Color___get_Item
                                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3
                                               ,(Il2CppObject *)"text",
                                               (MethodInfo_4A8D0C0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                              );
                            local_48._8_4_ = extraout_XMM0_Dc;
                            local_48._0_8_ = UVar8.fields._0_8_;
                            local_48._12_4_ = extraout_XMM0_Dd;
                            if (pGVar1->_colors !=
                                (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                              UVar8 = System_Collections_Generic_Dictionary_object__Color___get_Item
                                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                 pGVar1->_colors,(Il2CppObject *)"text",
                                                 (MethodInfo_4A8D0C0 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                );
                              local_58._8_4_ = extraout_XMM0_Dc_00;
                              local_58._0_8_ = UVar8.fields._0_8_;
                              local_58._12_4_ = extraout_XMM0_Dd_00;
                              if (pGVar1->_colors !=
                                  (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                UVar8 = System_Collections_Generic_Dictionary_object__Color___get_Item
                                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                   pGVar1->_colors,(Il2CppObject *)"text",
                                                   (MethodInfo_4A8D0C0 *)
                                                   MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                  );
                                value_09.fields.b = UVar8.fields.b;
                                value_09.fields.a = 0.75;
                                value_09.fields.g = (float)local_58._4_4_;
                                value_09.fields.r = (float)local_48._0_4_;
                                System_Collections_Generic_Dictionary_object__Color___set_Item
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                                           (Il2CppObject *)"settingInfoIcon",value_09,
                                           (MethodInfo_4A8D130 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                          );
                                if (pGVar1->_colors !=
                                    (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                  value_10.fields.b = 1.0;
                                  value_10.fields.a = 1.0;
                                  value_10.fields.r = 1.0;
                                  value_10.fields.g = 1.0;
                                  System_Collections_Generic_Dictionary_object__Color___set_Item
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                             pGVar1->_colors,(Il2CppObject *)"buttonText",value_10,
                                             (MethodInfo_4A8D130 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                            );
                                  if (pGVar1->_colors !=
                                      (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                    System_Collections_Generic_Dictionary_object__Color___set_Item
                                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                               pGVar1->_colors,(Il2CppObject *)"negative",
                                               (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                                               (MethodInfo_4A8D130 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                              );
                                    if (pGVar1->_colors !=
                                        (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                      value_11.fields.b = 1.0;
                                      value_11.fields.a = 1.0;
                                      value_11.fields.r = 1.0;
                                      value_11.fields.g = 1.0;
                                      System_Collections_Generic_Dictionary_object__Color___set_Item
                                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                 pGVar1->_colors,(Il2CppObject *)"negativeText",
                                                 value_11,(MethodInfo_4A8D130 *)
                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                );
                                      if (pGVar1->_colors !=
                                          (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                        value_12.fields.b = 0.94;
                                        value_12.fields.a = 1.0;
                                        value_12.fields.r = 0.94;
                                        value_12.fields.g = 0.94;
                                        System_Collections_Generic_Dictionary_object__Color___set_Item
                                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                   pGVar1->_colors,(Il2CppObject *)"inputBg",
                                                   value_12,(MethodInfo_4A8D130 *)
                                                                                                                        
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                  );
                                        if (pGVar1->_colors !=
                                            (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                          value_13.fields.b = 0.85;
                                          value_13.fields.a = 1.0;
                                          value_13.fields.r = 0.85;
                                          value_13.fields.g = 0.85;
                                          System_Collections_Generic_Dictionary_object__Color___set_Item
                                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                     pGVar1->_colors,(Il2CppObject *)"engravedBg",
                                                     value_13,(MethodInfo_4A8D130 *)
                                                                                                                            
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                    );
                                          if (pGVar1->_colors !=
                                              (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                            value_14.fields.b = 0.42;
                                            value_14.fields.a = 1.0;
                                            value_14.fields.r = 0.42;
                                            value_14.fields.g = 0.42;
                                            System_Collections_Generic_Dictionary_object__Color___set_Item
                                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o
                                                        *)pGVar1->_colors,
                                                       (Il2CppObject *)"inputPlaceholder",value_14,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                      );
                                            pSVar3 = pGVar1->_colors;
                                            if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                              UVar8 = System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"primary",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                              System_Collections_Generic_Dictionary_object__Color___set_Item
                                                        ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"focusRing",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                              if (pGVar1->_colors !=
                                                  (System_Collections_Generic_Dictionary_string__Color__o *)
                                                  0x0) {
                                                value_15.fields.b = 0.02;
                                                value_15.fields.a = 0.96;
                                                value_15.fields.r = 0.02;
                                                value_15.fields.g = 0.02;
                                                System_Collections_Generic_Dictionary_object__Color___set_Item
                                                          ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pGVar1->_colors,(Il2CppObject *)"tooltipBg",
                                                       value_15,(MethodInfo_4A8D130 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                if (pGVar1->_colors !=
                                                    (System_Collections_Generic_Dictionary_string__Color__o *)
                                                    0x0) {
                                                  value_16.fields.b = 1.0;
                                                  value_16.fields.a = 1.0;
                                                  value_16.fields.r = 1.0;
                                                  value_16.fields.g = 1.0;
                                                  System_Collections_Generic_Dictionary_object__Color___set_Item
                                                            ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pGVar1->_colors,(Il2CppObject *)"tooltipText",
                                                       value_16,(MethodInfo_4A8D130 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                  if (pGVar1->_colors !=
                                                      (System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                    System_Collections_Generic_Dictionary_object__Color___set_Item
                                                              ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pGVar1->_colors,(Il2CppObject *)"void",
                                                       (UnityEngine_Color_o)
                                                       (ZEXT816(0x3f80000000000000) << 0x40),
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                    if (pGVar1->_colors !=
                                                        (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                      System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pGVar1->_colors,(Il2CppObject *)"brushSidePanelOutline",
                                                       (UnityEngine_Color_o)
                                                       (ZEXT816(0x3f80000000000000) << 0x40),
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                      pSVar3 = pGVar1->_colors;
                                                      if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                        UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"surface",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"paper",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = pGVar1->_colors;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"surface",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"panel",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = pGVar1->_colors;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"surfaceSoft",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"panelSoft",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = pGVar1->_colors;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"text",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"ink",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = pGVar1->_colors;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"textMuted",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"muted",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = pGVar1->_colors;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"engravedBg",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"profileCardAvatarBg",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = pGVar1->_colors;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"surfaceSoft",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"profileCardAvatarBorder",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = pGVar1->_colors;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"engravedBg",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"profileCardBannerBg",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       if (pGVar1->_colors !=
                                                           (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         value_17.fields.b = 0.72;
                                                         value_17.fields.a = 1.0;
                                                         value_17.fields.r = 0.72;
                                                         value_17.fields.g = 0.72;
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pGVar1->_colors,(Il2CppObject *)"skeletonBase",
                                                       value_17,(MethodInfo_4A8D130 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       if (pGVar1->_colors !=
                                                           (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         value_18.fields.b = 0.82;
                                                         value_18.fields.a = 1.0;
                                                         value_18.fields.r = 0.82;
                                                         value_18.fields.g = 0.82;
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pGVar1->_colors,(Il2CppObject *)"skeletonPulse",
                                                       value_18,(MethodInfo_4A8D130 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = pGVar1->_colors;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"primary",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"accent",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar3 = pGVar1->_colors;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_Dictionary_string__Color__o
                                                       *)0x0) {
                                                         UVar8 = 
                                                       System_Collections_Generic_Dictionary_object__Color___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"secondary",
                                                       (MethodInfo_4A8D0C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__Color___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,(Il2CppObject *)"accent2",UVar8,
                                                       (MethodInfo_4A8D130 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._motions;
                                                       __this_00 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionToken);
                                                       Gisketch_Aottg2UI_Data_GisketchMotionToken___ctor
                                                                 (__this_00,(MethodInfo *)0x0);
                                                       if (__this_00 !=
                                                           (Gisketch_Aottg2UI_Data_GisketchMotionToken_o *)0x0
                                                          ) {
                                                         (__this_00->fields).name = "screenSlide";
                                                         Il2CppCodeGenWriteBarrier(&(__this_00->fields).name);
                                                         (__this_00->fields).preset = "slide";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(__this_00->fields).preset);
                                                         (__this_00->fields).duration = 0.053;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"screenSlide"
                                                                  ,(Il2CppObject *)__this_00,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._styles;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "default";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         (pGVar6->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textColor);
                                                         (pGVar6->fields).fontFamily = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).fontFamily);
                                                         local_60.hasValue = false;
                                                         local_60._1_3_ = 0;
                                                         local_60.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Nullable_int__o *)&local_60,400,
                                                                    (MethodInfo_3CD4BA0 *)
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar6->fields).fontWeight.fields = local_60;
                                                         local_68.hasValue = false;
                                                         local_68._1_3_ = 0;
                                                         local_68.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_68,24.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).fontSize.fields = local_68;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         ppSVar2 = &(__this->fields)._styles;
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"default"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "tooltip";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "tooltipBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_70.hasValue = false;
                                                         local_70._1_3_ = 0;
                                                         local_70.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_70,8.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).padding.fields = local_70;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"tooltip"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       local_1d0 = __this;
                                                       if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->
                                                           _2).cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                                                                                        
                                                       TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                                                       }
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("tooltipText","tooltipText",
                                                                  "text",500,16.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"tooltipText"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "screen";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_78.hasValue = false;
                                                         local_78._1_3_ = 0;
                                                         local_78.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_78,44.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).padding.fields = local_78;
                                                         local_80.hasValue = false;
                                                         local_80._1_3_ = 0;
                                                         local_80.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_80,14.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_80;
                                                         (pGVar6->fields).motion = "screenSlide";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).motion);
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"screen"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "screenFlush";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_88.hasValue = false;
                                                         local_88._1_3_ = 0;
                                                         local_88.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_88,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).padding.fields = local_88;
                                                         local_90.hasValue = false;
                                                         local_90._1_3_ = 0;
                                                         local_90.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_90,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_90;
                                                         (pGVar6->fields).motion = "screenSlide";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).motion);
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"screenFlush"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "scrollView";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_98.hasValue = false;
                                                         local_98._1_3_ = 0;
                                                         local_98.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_98,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).padding.fields = local_98;
                                                         local_a0.hasValue = false;
                                                         local_a0._1_3_ = 0;
                                                         local_a0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_a0,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_a0;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"scrollView"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "scrollbar";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 12.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).width = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width);
                                                         local_1d8[0].hasValue = false;
                                                         local_1d8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_1d8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_1d8[0];
                                                         local_1e0[0].hasValue = false;
                                                         local_1e0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_1e0,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_1e0[0];
                                                         local_a8.hasValue = false;
                                                         local_a8._1_3_ = 0;
                                                         local_a8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_a8,4.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).wornStainScale.fields = local_a8;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"scrollbar"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "scrollbarThumb";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_1e8[0].hasValue = false;
                                                         local_1e8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_1e8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_1e8[0];
                                                         local_1f0[0].hasValue = false;
                                                         local_1f0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_1f0,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_1f0[0];
                                                         local_b0.hasValue = false;
                                                         local_b0._1_3_ = 0;
                                                         local_b0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_b0,1.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).relief.fields = local_b0;
                                                         local_1f8[0].hasValue = false;
                                                         local_1f8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_1f8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).reliefGradient.fields = local_1f8[0]
                                                         ;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"scrollbarThumb"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "card";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_b8.hasValue = false;
                                                         local_b8._1_3_ = 0;
                                                         local_b8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_b8,24.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).padding.fields = local_b8;
                                                         local_c0.hasValue = false;
                                                         local_c0._1_3_ = 0;
                                                         local_c0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_c0,12.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_c0;
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 760.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).width = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width);
                                                         local_200[0].hasValue = false;
                                                         local_200[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_200,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_200[0];
                                                         local_208[0].hasValue = false;
                                                         local_208[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_208,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_208[0];
                                                         local_c8.hasValue = false;
                                                         local_c8._1_3_ = 0;
                                                         local_c8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_c8,4.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).wornStainScale.fields = local_c8;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"card"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "row";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_d0.hasValue = false;
                                                         local_d0._1_3_ = 0;
                                                         local_d0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_d0,10.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).padding.fields = local_d0;
                                                         local_d8.hasValue = false;
                                                         local_d8._1_3_ = 0;
                                                         local_d8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_d8,8.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_d8;
                                                         local_210[0].hasValue = false;
                                                         local_210[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_210,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_210[0];
                                                         local_218[0].hasValue = false;
                                                         local_218[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_218,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_218[0];
                                                         local_e0.hasValue = false;
                                                         local_e0._1_3_ = 0;
                                                         local_e0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_e0,4.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).wornStainScale.fields = local_e0;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"row"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "skeleton";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "skeletonBase";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         (pGVar6->fields).textColor = "skeletonPulse";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textColor);
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"skeleton"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("header","text",
                                                                  "header",400,44.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"header"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("settingLabel","text",
                                                                  "text",500,20.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"settingLabel"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("settingStepperValue","text",
                                                                  "text",500,20.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"settingStepperValue"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar6 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2,(Il2CppObject *)"settingStepperValue",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textAlignment);
                                                         pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "settingInfoIcon";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "settingInfoIcon";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 24.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).width = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 24.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).height = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).height);
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"settingInfoIcon"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "settingsDirtyStrip";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "settingsDirty";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 3.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).width = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 34.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).height = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).height);
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"settingsDirtyStrip"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "settingsDirtyDot";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "settingsDirty";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 7.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).width = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 7.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).height = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).height);
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"settingsDirtyDot"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("subtext","textMuted",
                                                                  "subtext",400,24.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"subtext"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("text","textMuted",
                                                                  "text",400,20.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"text"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "dialog";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_e8.hasValue = false;
                                                         local_e8._1_3_ = 0;
                                                         local_e8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_e8,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).padding.fields = local_e8;
                                                         local_f0.hasValue = false;
                                                         local_f0._1_3_ = 0;
                                                         local_f0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_f0,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_f0;
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 620.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).width = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width);
                                                         (pGVar6->fields).motion = "pop";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).motion);
                                                         local_220[0].hasValue = false;
                                                         local_220[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_220,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_220[0];
                                                         local_228[0].hasValue = false;
                                                         local_228[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_228,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_228[0];
                                                         local_f8.hasValue = false;
                                                         local_f8._1_3_ = 0;
                                                         local_f8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_f8,4.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).wornStainScale.fields = local_f8;
                                                         local_100.hasValue = false;
                                                         local_100._1_3_ = 0;
                                                         local_100.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_100,1.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).relief.fields = local_100;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialog"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "dialogHeader";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_108.hasValue = false;
                                                         local_108._1_3_ = 0;
                                                         local_108.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_108,0.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_108;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogHeader"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "dialogBody";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_110.hasValue = false;
                                                         local_110._1_3_ = 0;
                                                         local_110.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_110,
                                                                    18.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar6->fields).padding.fields = local_110;
                                                         local_118.hasValue = false;
                                                         local_118._1_3_ = 0;
                                                         local_118.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_118,8.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_118;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogBody"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "dialogFooter";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_120.hasValue = false;
                                                         local_120._1_3_ = 0;
                                                         local_120.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_120,
                                                                    18.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar6->fields).padding.fields = local_120;
                                                         local_128.hasValue = false;
                                                         local_128._1_3_ = 0;
                                                         local_128.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_128,8.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_128;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogFooter"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("dialogTitle","text",
                                                                  "header",400,34.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogTitle"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "dialogTitleBar";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_130.hasValue = false;
                                                         local_130._1_3_ = 0;
                                                         local_130.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_130,
                                                                    18.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar6->fields).paddingX.fields = local_130;
                                                         local_138.hasValue = false;
                                                         local_138._1_3_ = 0;
                                                         local_138.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_138,8.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).paddingY.fields = local_138;
                                                         local_140.hasValue = false;
                                                         local_140._1_3_ = 0;
                                                         local_140.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_140,8.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_140;
                                                         local_230[0].hasValue = false;
                                                         local_230[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_230,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_230[0];
                                                         local_238[0].hasValue = false;
                                                         local_238[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_238,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_238[0];
                                                         local_148.hasValue = false;
                                                         local_148._1_3_ = 0;
                                                         local_148.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_148,1.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).relief.fields = local_148;
                                                         local_240[0].hasValue = false;
                                                         local_240[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_240,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).reliefGradient.fields = local_240[0]
                                                         ;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogTitleBar"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("dialogTitleText","buttonText",
                                                                  "header",400,26.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogTitleText"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("dialogTitleTextQuiet","text",
                                                                  "header",400,26.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogTitleTextQuiet"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("dialogTitleTextNegative","negativeText",
                                                                  "header",400,26.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogTitleTextNegative"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                                                 ("dialogTitleIcon","buttonText",
                                                                  24.0,method_00);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogTitleIcon"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                                                 ("dialogTitleIconQuiet","text",
                                                                  24.0,method_01);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogTitleIconQuiet"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                                                 ("dialogTitleIconNegative","negativeText",
                                                                  24.0,method_02);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogTitleIconNegative"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("dialogTitleCloseButton","primary",
                                                                  "header",400,22.0,34.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"dialogTitleCloseButton"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar5 = local_1d0;
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (local_1d0,"Secondary",
                                                                  "secondary","buttonText",
                                                                  in_R8);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (pGVar5,"Workshop",
                                                                  "workshop","buttonText",
                                                                  in_R8);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (pGVar5,"Quiet",
                                                                  "surfaceSoft","text",
                                                                  in_R8);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (pGVar5,"Danger",
                                                                  "destructive","buttonText",
                                                                  in_R8);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                                 (pGVar5,"Negative",
                                                                  "negative","negativeText",
                                                                  in_R8);
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(pGVar5->fields)._styles;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "stepper";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_150.hasValue = false;
                                                         local_150._1_3_ = 0;
                                                         local_150.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_150,
                                                                    10.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar6->fields).padding.fields = local_150;
                                                         local_158.hasValue = false;
                                                         local_158._1_3_ = 0;
                                                         local_158.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_158,8.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_158;
                                                         local_248[0].hasValue = false;
                                                         local_248[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_248,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_248[0];
                                                         local_250[0].hasValue = false;
                                                         local_250[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_250,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_250[0];
                                                         local_160.hasValue = false;
                                                         local_160._1_3_ = 0;
                                                         local_160.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_160,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).wornStainScale.fields = local_160;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"stepper"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "popover";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         local_168.hasValue = false;
                                                         local_168._1_3_ = 0;
                                                         local_168.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_168,
                                                                    12.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar6->fields).padding.fields = local_168;
                                                         local_170.hasValue = false;
                                                         local_170._1_3_ = 0;
                                                         local_170.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_170,8.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).gap.fields = local_170;
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 420.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).width = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width);
                                                         (pGVar6->fields).motion = "balloon";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).motion);
                                                         local_258[0].hasValue = false;
                                                         local_258[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_258,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_258[0];
                                                         local_260[0].hasValue = false;
                                                         local_260[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_260,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_260[0];
                                                         local_178.hasValue = false;
                                                         local_178._1_3_ = 0;
                                                         local_178.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_178,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).wornStainScale.fields = local_178;
                                                         local_180.hasValue = false;
                                                         local_180._1_3_ = 0;
                                                         local_180.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_180,1.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).relief.fields = local_180;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"popover"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonPrimary","primary",
                                                                  "header",400,21.0,42.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonPrimary"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonSecondary","secondary",
                                                                  "header",500,20.0,40.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonSecondary"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonWorkshop","workshop",
                                                                  "header",500,20.0,40.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonWorkshop"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonQuiet","surfaceSoft",
                                                                  "header",500,20.0,40.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonQuiet"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar6 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2,(Il2CppObject *)"buttonQuiet",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textColor);
                                                         pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "buttonHeaderTab";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         (pGVar6->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textColor);
                                                         (pGVar6->fields).fontFamily = "header";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).fontFamily);
                                                         local_188.hasValue = false;
                                                         local_188._1_3_ = 0;
                                                         local_188.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Nullable_int__o *)&local_188,400,
                                                                    (MethodInfo_3CD4BA0 *)
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar6->fields).fontWeight.fields = local_188;
                                                         local_190.hasValue = false;
                                                         local_190._1_3_ = 0;
                                                         local_190.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_190,
                                                                    44.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar6->fields).fontSize.fields = local_190;
                                                         (pGVar6->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textAlignment);
                                                         local_198.hasValue = false;
                                                         local_198._1_3_ = 0;
                                                         local_198.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_198,0.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).paddingX.fields = local_198;
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 72.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).height = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).height);
                                                         local_268[0].hasValue = false;
                                                         local_268[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_268,false
                                                                    ,(MethodInfo_3CCFD20 *)
                                                                     MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_268[0];
                                                         local_270[0].hasValue = false;
                                                         local_270[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_270,false
                                                                    ,(MethodInfo_3CCFD20 *)
                                                                     MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_270[0];
                                                         local_1a0.hasValue = false;
                                                         local_1a0._1_3_ = 0;
                                                         local_1a0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1a0,0.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).relief.fields = local_1a0;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonHeaderTab"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonPlain","paper",
                                                                  "header",500,20.0,40.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonPlain"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar6 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2,(Il2CppObject *)"buttonPlain",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textColor);
                                                         pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("keybindButton","paper",
                                                                  "header",500,20.0,46.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"keybindButton"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar6 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2,(Il2CppObject *)"keybindButton",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textColor);
                                                         pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonDanger","destructive",
                                                                  "header",700,20.0,40.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonDanger"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("buttonNegative","negative",
                                                                  "header",500,20.0,40.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonNegative"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar6 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2,(Il2CppObject *)"buttonNegative",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).textColor = "negativeText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textColor);
                                                         pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar6->fields).name = "inputField";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).name);
                                                         (pGVar6->fields).background = "engravedBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).background);
                                                         (pGVar6->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).textColor);
                                                         (pGVar6->fields).fontFamily = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar6->fields).fontFamily);
                                                         local_1a8.hasValue = false;
                                                         local_1a8._1_3_ = 0;
                                                         local_1a8.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Nullable_int__o *)&local_1a8,400,
                                                                    (MethodInfo_3CD4BA0 *)
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar6->fields).fontWeight.fields = local_1a8;
                                                         local_1b0.hasValue = false;
                                                         local_1b0._1_3_ = 0;
                                                         local_1b0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1b0,
                                                                    19.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar6->fields).fontSize.fields = local_1b0;
                                                         local_1b8.hasValue = false;
                                                         local_1b8._1_3_ = 0;
                                                         local_1b8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1b8,
                                                                    12.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar6->fields).padding.fields = local_1b8;
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 280.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).width = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).width);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar7 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar7,(MethodInfo *)0x0);
                                                       if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar7->fields).value = 42.0;
                                                         (pGVar7->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar7->fields).unit);
                                                         (pGVar6->fields).height = pGVar7;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).height);
                                                         local_278[0].hasValue = false;
                                                         local_278[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_278,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).textured.fields = local_278[0];
                                                         local_280[0].hasValue = false;
                                                         local_280[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_280,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar6->fields).worn.fields = local_280[0];
                                                         local_1c0.hasValue = false;
                                                         local_1c0._1_3_ = 0;
                                                         local_1c0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1c0,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar6->fields).wornStainScale.fields = local_1c0;
                                                         local_1c8.hasValue = false;
                                                         local_1c8._1_3_ = 0;
                                                         local_1c8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1c8,
                                                                    -1.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar6->fields).relief.fields = local_1c8;
                                                         if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"inputField"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       pGVar6 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("inputPlaceholder","inputPlaceholder",
                                                                  "text",400,19.0,in_R8);
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"inputPlaceholder"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar6 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonPrimary"
                                                                  ,(MethodInfo_4AAD450 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"primaryButton"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar4 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar2;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar6 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar4,(Il2CppObject *)"buttonSecondary"
                                                                  ,(MethodInfo_4AAD450 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       method_03 = (MethodInfo *)"secondaryButton";
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar4,(Il2CppObject *)"secondaryButton"
                                                                  ,(Il2CppObject *)pGVar6,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar5 = local_1d0;
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddSettingsDefaults
                                                                 (local_1d0,method_03);
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddAtomDefaults
                                                                 (pGVar5,method_03);
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
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
// 0x5340320

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *suffix,
               System_String_o *background,System_String_o *textColor,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542898 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogTitleCloseButton");
    Il2CppMethodInitialized_07542898 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pSVar2 = System_String__Concat_52f0320("dialogTitleBar",suffix,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_52f0320("dialogTitleBar",suffix,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    method_00 = extraout_RDX_00;
  }
  pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__DialogTitleBar(pSVar3,background,method_00);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar4,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    pSVar2 = System_String__Concat_52f0320("dialogTitleCloseButton",suffix,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_52f0320("dialogTitleCloseButton",suffix,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                       (pSVar3,background,"header",400,22.0,34.0,method);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar4,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      pSVar2 = System_String__Concat_52f0320("dialogTitleCloseButton",suffix,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pGVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)pSVar2,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                           );
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          (pGVar4->fields).textColor = textColor;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textColor);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$DialogTitleBar
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__DialogTitleBar (System_String_o* name, System_String_o* background, const MethodInfo* method);
// 0x5340600

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__DialogTitleBar
          (System_String_o *name,System_String_o *background,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  System_Nullable_bool__Fields local_50 [4];
  System_Nullable_bool__Fields local_48 [4];
  System_Nullable_bool__Fields local_40 [4];
  System_Nullable_float__Fields local_38;
  System_Nullable_float__Fields local_30;
  System_Nullable_float__Fields local_28;
  System_Nullable_float__Fields local_20;
  
  if (Il2CppMethodInitialized_07542899 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_07542899 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).name);
  (__this->fields).background = background;
  Il2CppCodeGenWriteBarrier(&(__this->fields).background);
  local_20.hasValue = false;
  local_20._1_3_ = 0;
  local_20.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_20,18.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  (__this->fields).paddingX.fields = local_20;
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_28,8.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  (__this->fields).paddingY.fields = local_28;
  local_30.hasValue = false;
  local_30._1_3_ = 0;
  local_30.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_30,8.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  (__this->fields).gap.fields = local_30;
  local_40[0].hasValue = false;
  local_40[0].value = false;
  System_Nullable_bool____ctor
            ((System_Nullable_bool__o *)local_40,true,
             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
  (__this->fields).textured.fields = local_40[0];
  local_48[0].hasValue = false;
  local_48[0].value = false;
  System_Nullable_bool____ctor
            ((System_Nullable_bool__o *)local_48,true,
             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
  (__this->fields).worn.fields = local_48[0];
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_38,1.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  (__this->fields).relief.fields = local_38;
  local_50[0].hasValue = false;
  local_50[0].value = false;
  System_Nullable_bool____ctor
            ((System_Nullable_bool__o *)local_50,true,
             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
  (__this->fields).reliefGradient.fields = local_50[0];
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ButtonStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle (System_String_o* name, System_String_o* background, System_String_o* fontFamily, int32_t fontWeight, float fontSize, float height, const MethodInfo* method);
// 0x53371f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5337350: cmp byte ptr [rip + 0x220b545], 0
// asm:   0x5337357: jne 0x5337378
// asm:   0x5337493: jmp 0x5337378

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
          (System_String_o *name,System_String_o *background,System_String_o *fontFamily,int32_t fontWeight,
          float fontSize,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  System_Nullable_bool__Fields local_58 [4];
  System_Nullable_bool__Fields local_50 [4];
  float local_48;
  float local_44;
  System_Nullable_float__Fields local_40;
  System_Nullable_float__Fields local_38;
  System_Nullable_int__Fields local_30;
  
  local_48 = height;
  local_44 = fontSize;
  if (Il2CppMethodInitialized_0754289a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"slide");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    Il2CppMethodInitialized_0754289a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name);
    (__this->fields).background = background;
    Il2CppCodeGenWriteBarrier(&(__this->fields).background);
    (__this->fields).textColor = "buttonText";
    Il2CppCodeGenWriteBarrier(&(__this->fields).textColor);
    (__this->fields).fontFamily = fontFamily;
    Il2CppCodeGenWriteBarrier(&(__this->fields).fontFamily);
    local_30.hasValue = false;
    local_30._1_3_ = 0;
    local_30.value = 0;
    System_Nullable_int____ctor
              ((System_Nullable_int__o *)&local_30,fontWeight,
               (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
    (__this->fields).fontWeight.fields = local_30;
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_38,local_44,
               (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
    (__this->fields).fontSize.fields = local_38;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    if (Il2CppMethodInitialized_0754289c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_0754289c = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = local_48;
      (__this_00->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
      (__this->fields).height = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).height);
      (__this->fields).motion = "slide";
      Il2CppCodeGenWriteBarrier(&(__this->fields).motion);
      local_50[0].hasValue = false;
      local_50[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_50,true,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      (__this->fields).textured.fields = local_50[0];
      local_58[0].hasValue = false;
      local_58[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_58,true,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      (__this->fields).worn.fields = local_58[0];
      local_40.hasValue = false;
      local_40._1_3_ = 0;
      local_40.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_40,1.0,
                 (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      (__this->fields).relief.fields = local_40;
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$TextStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle (System_String_o* name, System_String_o* textColor, System_String_o* fontFamily, int32_t fontWeight, float fontSize, const MethodInfo* method);
// 0x5336d70

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
          (System_String_o *name,System_String_o *textColor,System_String_o *fontFamily,int32_t fontWeight,
          float fontSize,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  System_Nullable_float__Fields local_38;
  System_Nullable_int__Fields local_30;
  
  if (Il2CppMethodInitialized_0754289b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_0754289b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).name);
  (__this->fields).textColor = textColor;
  Il2CppCodeGenWriteBarrier(&(__this->fields).textColor);
  (__this->fields).fontFamily = fontFamily;
  Il2CppCodeGenWriteBarrier(&(__this->fields).fontFamily);
  local_30.hasValue = false;
  local_30._1_3_ = 0;
  local_30.value = 0;
  System_Nullable_int____ctor
            ((System_Nullable_int__o *)&local_30,fontWeight,
             (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
  (__this->fields).fontWeight.fields = local_30;
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_38,fontSize,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  (__this->fields).fontSize.fields = local_38;
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$Points
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Styling_GisketchTheme__Points (float value, const MethodInfo* method);
// 0x5336a90

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__Points(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_0754289c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_0754289c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).value = value;
  (__this->fields).unit = "point";
  Il2CppCodeGenWriteBarrier(&(__this->fields).unit);
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddRoomIconStyle
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddRoomIconStyle (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, UnityEngine_Color_o color, const MethodInfo* method);
// 0x53407c0

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddRoomIconStyle
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,
               UnityEngine_Color_o color,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754289d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_0754289d = '\x01';
  }
  __this_00 = (__this->fields)._colors;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
    System_Collections_Generic_Dictionary_object__Color___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name,color,
               (MethodInfo_4A8D130 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    method_00 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
      method_00 = extraout_RDX_00;
    }
    value = Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle(name,name,24.0,method_00);
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)name,(Il2CppObject *)value,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddMainMenuDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddMainMenuDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x5337bf0

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddMainMenuDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o **ppSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_c *pGVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_R8;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  System_Nullable_bool__Fields local_450 [4];
  System_Nullable_bool__Fields local_448 [4];
  System_Nullable_bool__Fields local_440 [4];
  System_Nullable_bool__Fields local_438 [4];
  System_Nullable_bool__Fields local_430 [4];
  System_Nullable_bool__Fields local_428 [4];
  System_Nullable_bool__Fields local_420 [4];
  System_Nullable_bool__Fields local_418 [4];
  System_Nullable_bool__Fields local_410 [4];
  System_Nullable_bool__Fields local_408 [4];
  System_Nullable_bool__Fields local_400 [4];
  System_Nullable_bool__Fields local_3f8 [4];
  System_Nullable_bool__Fields local_3f0 [4];
  System_Nullable_bool__Fields local_3e8 [4];
  System_Nullable_bool__Fields local_3e0 [4];
  System_Nullable_bool__Fields local_3d8 [4];
  System_Nullable_bool__Fields local_3d0 [4];
  System_Nullable_bool__Fields local_3c8 [4];
  System_Nullable_bool__Fields local_3c0 [4];
  System_Nullable_bool__Fields local_3b8 [4];
  System_Nullable_bool__Fields local_3b0 [4];
  System_Nullable_bool__Fields local_3a8 [4];
  System_Nullable_bool__Fields local_3a0 [4];
  System_Nullable_bool__Fields local_398 [4];
  System_Nullable_bool__Fields local_390 [4];
  System_Nullable_bool__Fields local_388 [4];
  System_Nullable_bool__Fields local_380 [4];
  System_Nullable_bool__Fields local_378 [4];
  System_Nullable_bool__Fields local_370 [4];
  System_Nullable_bool__Fields local_368 [4];
  System_Nullable_bool__Fields local_360 [4];
  System_Nullable_bool__Fields local_358 [4];
  System_Nullable_bool__Fields local_350 [4];
  System_Nullable_bool__Fields local_348 [4];
  System_Nullable_bool__Fields local_340 [4];
  System_Nullable_bool__Fields local_338 [4];
  System_Nullable_bool__Fields local_330 [4];
  System_Nullable_bool__Fields local_328 [4];
  System_Nullable_bool__Fields local_320 [4];
  System_Nullable_bool__Fields local_318 [4];
  System_Nullable_bool__Fields local_310 [4];
  System_Nullable_bool__Fields local_308 [4];
  System_Nullable_bool__Fields local_300 [4];
  System_Nullable_bool__Fields local_2f8 [4];
  System_Nullable_bool__Fields local_2f0 [4];
  System_Nullable_bool__Fields local_2e8 [4];
  System_Nullable_bool__Fields local_2e0 [4];
  System_Nullable_bool__Fields local_2d8 [4];
  System_Nullable_bool__Fields local_2d0 [4];
  System_Nullable_bool__Fields local_2c8 [4];
  System_Nullable_bool__Fields local_2c0 [4];
  System_Nullable_bool__Fields local_2b8 [4];
  System_Nullable_bool__Fields local_2b0 [4];
  System_Nullable_bool__Fields local_2a8 [4];
  System_Nullable_bool__Fields local_2a0 [4];
  System_Nullable_bool__Fields local_298 [4];
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *local_290;
  System_Nullable_float__Fields local_288;
  System_Nullable_float__Fields local_280;
  System_Nullable_float__Fields local_278;
  System_Nullable_float__Fields local_270;
  System_Nullable_float__Fields local_268;
  System_Nullable_int__Fields local_260;
  System_Nullable_float__Fields local_258;
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
  System_Nullable_int__Fields local_1e8;
  System_Nullable_float__Fields local_1e0;
  System_Nullable_float__Fields local_1d8;
  System_Nullable_float__Fields local_1d0;
  System_Nullable_float__Fields local_1c8;
  System_Nullable_int__Fields local_1c0;
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
  System_Nullable_float__Fields local_148;
  System_Nullable_float__Fields local_140;
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
  System_Nullable_int__Fields local_d0;
  System_Nullable_float__Fields local_c8;
  System_Nullable_float__Fields local_c0;
  System_Nullable_int__Fields local_b8;
  System_Nullable_float__Fields local_b0;
  System_Nullable_float__Fields local_a8;
  System_Nullable_float__Fields local_a0;
  System_Nullable_float__Fields local_98;
  System_Nullable_float__Fields local_90;
  System_Nullable_float__Fields local_88;
  System_Nullable_float__Fields local_80;
  System_Nullable_float__Fields local_78;
  System_Nullable_float__Fields local_70;
  System_Nullable_float__Fields local_68;
  System_Nullable_float__Fields local_60;
  System_Nullable_float__Fields local_58;
  System_Nullable_float__Fields local_50;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40;
  System_Nullable_float__Fields local_38;
  
  if (Il2CppMethodInitialized_0754289e == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"roomAccountIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"gridPickerItem");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewAvatar");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBody");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteSlotText");
    il2cpp_codegen_initialize_runtime_metadata(&"balloon");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreateChoiceTitle");
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
    il2cpp_codegen_initialize_runtime_metadata(&"roomPasswordIcon");
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
    il2cpp_codegen_initialize_runtime_metadata(&"roomSandboxIcon");
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
    Il2CppMethodInitialized_0754289e = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pGVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar5->fields).name = "mainMenuOverlay";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
    (pGVar5->fields).background = "clear";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)"mainMenuOverlay",(Il2CppObject *)pGVar5,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
      color.fields.b = 0.16;
      color.fields.a = 1.0;
      color.fields.r = 0.83;
      color.fields.g = 0.7;
      Gisketch_Aottg2UI_Styling_GisketchTheme__AddRoomIconStyle(__this,"roomPasswordIcon",color,method_00);
      color_00.fields.b = 0.36;
      color_00.fields.a = 1.0;
      color_00.fields.r = 0.16;
      color_00.fields.g = 0.83;
      Gisketch_Aottg2UI_Styling_GisketchTheme__AddRoomIconStyle
                (__this,"roomAccountIcon",color_00,method_01);
      color_01.fields.b = 0.94;
      color_01.fields.a = 1.0;
      color_01.fields.r = 0.16;
      color_01.fields.g = 0.66;
      Gisketch_Aottg2UI_Styling_GisketchTheme__AddRoomIconStyle
                (__this,"roomSandboxIcon",color_01,method_02);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      pGVar5 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
      Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        (pGVar5->fields).name = "gameCreateFavoritesCard";
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
        (pGVar5->fields).background = "primary";
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ppSVar1 = &(__this->fields)._styles;
          local_290 = __this;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar2,(Il2CppObject *)"gameCreateFavoritesCard",(Il2CppObject *)pGVar5,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item)
          ;
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme)
            ;
          }
          pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                             ("gameCreateFavoritesTitle","buttonText","header",400,44.0,in_R8
                             );
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar2,(Il2CppObject *)"gameCreateFavoritesTitle",(Il2CppObject *)pGVar5,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                      );
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
            pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                               ("gameCreateChoiceTitle","text","header",400,44.0,
                                in_R8);
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar2,(Il2CppObject *)"gameCreateChoiceTitle",(Il2CppObject *)pGVar5,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                        );
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
              pGVar5 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
              Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar5,(MethodInfo *)0x0);
              if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                (pGVar5->fields).name = "mainMenuOverlayBody";
                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                (pGVar5->fields).background = "clear";
                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
                local_38.hasValue = false;
                local_38._1_3_ = 0;
                local_38.value = 0.0;
                System_Nullable_float____ctor
                          ((System_Nullable_float__o *)&local_38,0.0,
                           (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
                (pGVar5->fields).padding.fields = local_38;
                local_40.hasValue = false;
                local_40._1_3_ = 0;
                local_40.value = 0.0;
                System_Nullable_float____ctor
                          ((System_Nullable_float__o *)&local_40,0.0,
                           (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
                (pGVar5->fields).gap.fields = local_40;
                if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar2,(Il2CppObject *)"mainMenuOverlayBody",(Il2CppObject *)pGVar5,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                            );
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                  pGVar5 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar5,(MethodInfo *)0x0);
                  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                    (pGVar5->fields).name = "inGamePauseDimOverlay";
                    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                    (pGVar5->fields).background = "shadow";
                    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
                    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__object___set_Item
                                (pSVar2,(Il2CppObject *)"inGamePauseDimOverlay",(Il2CppObject *)pGVar5,
                                 (MethodInfo_4AAD4C0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                );
                      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                      pGVar5 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)
                                          TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
                      Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar5,(MethodInfo *)0x0);
                      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                        (pGVar5->fields).name = "mainMenuLogoSlot";
                        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                        (pGVar5->fields).background = "clear";
                        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
                        local_48.hasValue = false;
                        local_48._1_3_ = 0;
                        local_48.value = 0.0;
                        System_Nullable_float____ctor
                                  ((System_Nullable_float__o *)&local_48,0.0,
                                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
                        (pGVar5->fields).padding.fields = local_48;
                        local_50.hasValue = false;
                        local_50._1_3_ = 0;
                        local_50.value = 0.0;
                        System_Nullable_float____ctor
                                  ((System_Nullable_float__o *)&local_50,0.0,
                                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
                        (pGVar5->fields).gap.fields = local_50;
                        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          System_Collections_Generic_Dictionary_object__object___set_Item
                                    (pSVar2,(Il2CppObject *)"mainMenuLogoSlot",(Il2CppObject *)pGVar5,
                                     (MethodInfo_4AAD4C0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                    );
                          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                          pGVar5 = il2cpp_codegen_object_new
                                             ((Il2CppClass *)
                                              TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
                          Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar5,(MethodInfo *)0x0);
                          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                            (pGVar5->fields).name = "mainMenuPanel";
                            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                            pGVar6 = il2cpp_codegen_object_new
                                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength)
                            ;
                            Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
                            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                              (pGVar6->fields).value = 100.0;
                              (pGVar6->fields).unit = "percent";
                              Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                              (pGVar5->fields).height = pGVar6;
                              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                              local_58.hasValue = false;
                              local_58._1_3_ = 0;
                              local_58.value = 0.0;
                              System_Nullable_float____ctor
                                        ((System_Nullable_float__o *)&local_58,0.9064815,
                                         (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
                              (pGVar5->fields).aspectRatio.fields = local_58;
                              local_298[0].hasValue = false;
                              local_298[0].value = false;
                              System_Nullable_bool____ctor
                                        ((System_Nullable_bool__o *)local_298,true,
                                         (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
                              (pGVar5->fields).shadow.fields = local_298[0];
                              if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                                System_Collections_Generic_Dictionary_object__object___set_Item
                                          (pSVar2,(Il2CppObject *)"mainMenuPanel",(Il2CppObject *)pGVar5
                                           ,(MethodInfo_4AAD4C0 *)
                                            MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                          );
                                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                                pGVar5 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)
                                                    TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
                                Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                          (pGVar5,(MethodInfo *)0x0);
                                if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                  (pGVar5->fields).name = "brushSidePanel";
                                  Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                  (pGVar5->fields).background = "surface";
                                  Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
                                  local_2a0[0].hasValue = false;
                                  local_2a0[0].value = false;
                                  System_Nullable_bool____ctor
                                            ((System_Nullable_bool__o *)local_2a0,true,
                                             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
                                  (pGVar5->fields).textured.fields = local_2a0[0];
                                  local_2a8[0].hasValue = false;
                                  local_2a8[0].value = false;
                                  System_Nullable_bool____ctor
                                            ((System_Nullable_bool__o *)local_2a8,true,
                                             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
                                  (pGVar5->fields).worn.fields = local_2a8[0];
                                  local_60.hasValue = false;
                                  local_60._1_3_ = 0;
                                  local_60.value = 0.0;
                                  System_Nullable_float____ctor
                                            ((System_Nullable_float__o *)&local_60,4.0,
                                             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
                                  (pGVar5->fields).wornStainScale.fields = local_60;
                                  local_2b0[0].hasValue = false;
                                  local_2b0[0].value = false;
                                  System_Nullable_bool____ctor
                                            ((System_Nullable_bool__o *)local_2b0,true,
                                             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
                                  (pGVar5->fields).shadow.fields = local_2b0[0];
                                  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0
                                     ) {
                                    System_Collections_Generic_Dictionary_object__object___set_Item
                                              (pSVar2,(Il2CppObject *)"brushSidePanel",
                                               (Il2CppObject *)pGVar5,
                                               (MethodInfo_4AAD4C0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                              );
                                    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                             *ppSVar1;
                                    pGVar5 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)
                                                                                                                
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                    Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                              (pGVar5,(MethodInfo *)0x0);
                                    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                      (pGVar5->fields).name = "brushSidePanelShell";
                                      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                      (pGVar5->fields).background = "clear";
                                      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
                                      pGVar6 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)
                                                          TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
                                      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                        (pGVar6->fields).value = 100.0;
                                        (pGVar6->fields).unit = "percent";
                                        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                        (pGVar5->fields).height = pGVar6;
                                        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                                        local_68.hasValue = false;
                                        local_68._1_3_ = 0;
                                        local_68.value = 0.0;
                                        System_Nullable_float____ctor
                                                  ((System_Nullable_float__o *)&local_68,0.38333333,
                                                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor
                                                  );
                                        (pGVar5->fields).aspectRatio.fields = local_68;
                                        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                          System_Collections_Generic_Dictionary_object__object___set_Item
                                                    (pSVar2,(Il2CppObject *)"brushSidePanelShell",
                                                     (Il2CppObject *)pGVar5,
                                                     (MethodInfo_4AAD4C0 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                    );
                                          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                   *ppSVar1;
                                          pGVar5 = il2cpp_codegen_object_new
                                                             ((Il2CppClass *)
                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                          Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                    (pGVar5,(MethodInfo *)0x0);
                                          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                                                        0x0) {
                                            (pGVar5->fields).name = "brushSidePanelScreenContent";
                                            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                            (pGVar5->fields).background = "surface";
                                            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
                                            local_2b8[0].hasValue = false;
                                            local_2b8[0].value = false;
                                            System_Nullable_bool____ctor
                                                      ((System_Nullable_bool__o *)local_2b8,true,
                                                       (MethodInfo_3CCFD20 *)
                                                       MethodInfo_System_Nullable_bool_ctor);
                                            (pGVar5->fields).textured.fields = local_2b8[0];
                                            local_2c0[0].hasValue = false;
                                            local_2c0[0].value = false;
                                            System_Nullable_bool____ctor
                                                      ((System_Nullable_bool__o *)local_2c0,true,
                                                       (MethodInfo_3CCFD20 *)
                                                       MethodInfo_System_Nullable_bool_ctor);
                                            (pGVar5->fields).worn.fields = local_2c0[0];
                                            local_70.hasValue = false;
                                            local_70._1_3_ = 0;
                                            local_70.value = 0.0;
                                            System_Nullable_float____ctor
                                                      ((System_Nullable_float__o *)&local_70,4.0,
                                                       (MethodInfo_3CDA2B0 *)
                                                       MethodInfo_System_Nullable_float_ctor);
                                            (pGVar5->fields).wornStainScale.fields = local_70;
                                            if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                              System_Collections_Generic_Dictionary_object__object___set_Item
                                                        (pSVar2,(Il2CppObject *)"brushSidePanelScreenContent",
                                                         (Il2CppObject *)pGVar5,
                                                         (MethodInfo_4AAD4C0 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                              pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                              pGVar5 = il2cpp_codegen_object_new
                                                                 ((Il2CppClass *)
                                                                                                                                    
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                              Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                        (pGVar5,(MethodInfo *)0x0);
                                              if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o
                                                             *)0x0) {
                                                (pGVar5->fields).name = "brushSidePanelContentFooter";
                                                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                (pGVar5->fields).background = "surface";
                                                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
                                                local_2c8[0].hasValue = false;
                                                local_2c8[0].value = false;
                                                System_Nullable_bool____ctor
                                                          ((System_Nullable_bool__o *)local_2c8,true,
                                                           (MethodInfo_3CCFD20 *)
                                                           MethodInfo_System_Nullable_bool_ctor);
                                                (pGVar5->fields).textured.fields = local_2c8[0];
                                                local_2d0[0].hasValue = false;
                                                local_2d0[0].value = false;
                                                System_Nullable_bool____ctor
                                                          ((System_Nullable_bool__o *)local_2d0,true,
                                                           (MethodInfo_3CCFD20 *)
                                                           MethodInfo_System_Nullable_bool_ctor);
                                                (pGVar5->fields).worn.fields = local_2d0[0];
                                                local_78.hasValue = false;
                                                local_78._1_3_ = 0;
                                                local_78.value = 0.0;
                                                System_Nullable_float____ctor
                                                          ((System_Nullable_float__o *)&local_78,4.0,
                                                           (MethodInfo_3CDA2B0 *)
                                                           MethodInfo_System_Nullable_float_ctor);
                                                (pGVar5->fields).wornStainScale.fields = local_78;
                                                if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                  System_Collections_Generic_Dictionary_object__object___set_Item
                                                            (pSVar2,(Il2CppObject *)"brushSidePanelContentFooter",
                                                             (Il2CppObject *)pGVar5,
                                                             (MethodInfo_4AAD4C0 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                  pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                  pGVar5 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                  {
                                                    (pGVar5->fields).name = "brushSidePanelContentFooterTexture";
                                                    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                    (pGVar5->fields).background = "clear";
                                                    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).background);
                                                    local_2d8[0].hasValue = false;
                                                    local_2d8[0].value = false;
                                                    System_Nullable_bool____ctor
                                                              ((System_Nullable_bool__o *)local_2d8,true,
                                                               (MethodInfo_3CCFD20 *)
                                                               MethodInfo_System_Nullable_bool_ctor);
                                                    (pGVar5->fields).textured.fields = local_2d8[0];
                                                    local_2e0[0].hasValue = false;
                                                    local_2e0[0].value = false;
                                                    System_Nullable_bool____ctor
                                                              ((System_Nullable_bool__o *)local_2e0,true,
                                                               (MethodInfo_3CCFD20 *)
                                                               MethodInfo_System_Nullable_bool_ctor);
                                                    (pGVar5->fields).worn.fields = local_2e0[0];
                                                    local_80.hasValue = false;
                                                    local_80._1_3_ = 0;
                                                    local_80.value = 0.0;
                                                    System_Nullable_float____ctor
                                                              ((System_Nullable_float__o *)&local_80,4.0,
                                                               (MethodInfo_3CDA2B0 *)
                                                               MethodInfo_System_Nullable_float_ctor);
                                                    (pGVar5->fields).wornStainScale.fields = local_80;
                                                    if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                      System_Collections_Generic_Dictionary_object__object___set_Item
                                                                (pSVar2,(Il2CppObject *)"brushSidePanelContentFooterTexture",
                                                                 (Il2CppObject *)pGVar5,
                                                                 (MethodInfo_4AAD4C0 *)
                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                      pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                      pGVar5 = il2cpp_codegen_object_new
                                                                         ((Il2CppClass *)
                                                                                                                                                    
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                      Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                (pGVar5,(MethodInfo *)0x0);
                                                      if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                      {
                                                        (pGVar5->fields).name = "brushSidePanelContentFooterTopShadow";
                                                        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                        (pGVar5->fields).background = "clear";
                                                        Il2CppCodeGenWriteBarrier
                                                                  (&(pGVar5->fields).background);
                                                        local_2e8[0].hasValue = false;
                                                        local_2e8[0].value = false;
                                                        System_Nullable_bool____ctor
                                                                  ((System_Nullable_bool__o *)local_2e8,true,
                                                                   (MethodInfo_3CCFD20 *)
                                                                   MethodInfo_System_Nullable_bool_ctor);
                                                        (pGVar5->fields).shadow.fields = local_2e8[0];
                                                        if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"brushSidePanelContentFooterTopShadow"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "brushSidePanelScreenScroll";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_88.hasValue = false;
                                                         local_88._1_3_ = 0;
                                                         local_88.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_88,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).padding.fields = local_88;
                                                         local_90.hasValue = false;
                                                         local_90._1_3_ = 0;
                                                         local_90.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_90,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_90;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"brushSidePanelScreenScroll"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "brushSidePanelOutline";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "brushSidePanelOutline";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"brushSidePanelOutline"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "brushSidePanelTexture";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_2f0[0].hasValue = false;
                                                         local_2f0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_2f0,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_2f0[0];
                                                         local_2f8[0].hasValue = false;
                                                         local_2f8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_2f8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_2f8[0];
                                                         local_98.hasValue = false;
                                                         local_98._1_3_ = 0;
                                                         local_98.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_98,4.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_98;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"brushSidePanelTexture"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "brushSidePanelHeader";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_a0.hasValue = false;
                                                         local_a0._1_3_ = 0;
                                                         local_a0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_a0,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).padding.fields = local_a0;
                                                         local_a8.hasValue = false;
                                                         local_a8._1_3_ = 0;
                                                         local_a8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_a8,0.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_a8;
                                                         local_300[0].hasValue = false;
                                                         local_300[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_300,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_300[0];
                                                         local_308[0].hasValue = false;
                                                         local_308[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_308,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_308[0];
                                                         local_b0.hasValue = false;
                                                         local_b0._1_3_ = 0;
                                                         local_b0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_b0,4.0,
                                                                    (MethodInfo_3CDA2B0 *)
                                                                    MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_b0;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"brushSidePanelHeader"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "brushSidePanelHeaderText";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         (pGVar5->fields).textColor = "buttonText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor);
                                                         (pGVar5->fields).fontFamily = "header";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).fontFamily);
                                                         local_b8.hasValue = false;
                                                         local_b8._1_3_ = 0;
                                                         local_b8.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Nullable_int__o *)&local_b8,400,
                                                                    (MethodInfo_3CD4BA0 *)
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar5->fields).fontWeight.fields = local_b8;
                                                         local_c0.hasValue = false;
                                                         local_c0._1_3_ = 0;
                                                         local_c0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_c0,
                                                                    104.0,(MethodInfo_3CDA2B0 *)
                                                                                                                                                    
                                                       MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).fontSize.fields = local_c0;
                                                       (pGVar5->fields).textAlignment = "right";
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).textAlignment);
                                                       local_c8.hasValue = false;
                                                       local_c8._1_3_ = 0;
                                                       local_c8.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_c8,80.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).paddingX.fields = local_c8;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"brushSidePanelHeaderText"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "brushSidePanelBrushButton";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         (pGVar5->fields).textColor = "void";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor);
                                                         (pGVar5->fields).fontFamily = "menuText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).fontFamily);
                                                         local_d0.hasValue = false;
                                                         local_d0._1_3_ = 0;
                                                         local_d0.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Nullable_int__o *)&local_d0,400,
                                                                    (MethodInfo_3CD4BA0 *)
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar5->fields).fontWeight.fields = local_d0;
                                                         local_d8.hasValue = false;
                                                         local_d8._1_3_ = 0;
                                                         local_d8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_d8,
                                                                    112.0,(MethodInfo_3CDA2B0 *)
                                                                                                                                                    
                                                       MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).fontSize.fields = local_d8;
                                                       (pGVar5->fields).textAlignment = "left";
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pGVar5->fields).textAlignment);
                                                       local_e0.hasValue = false;
                                                       local_e0._1_3_ = 0;
                                                       local_e0.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_e0,104.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).iconSize.fields = local_e0;
                                                       if (Il2CppMethodInitialized_0754289c == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 236.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).height = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                                                         local_e8.hasValue = false;
                                                         local_e8._1_3_ = 0;
                                                         local_e8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_e8,
                                                                    224.0,(MethodInfo_3CDA2B0 *)
                                                                                                                                                    
                                                       MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).paddingX.fields = local_e8;
                                                       local_f0.hasValue = false;
                                                       local_f0._1_3_ = 0;
                                                       local_f0.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_f0,36.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).gap.fields = local_f0;
                                                       local_310[0].hasValue = false;
                                                       local_310[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Nullable_bool__o *)local_310,true,
                                                                  (MethodInfo_3CCFD20 *)
                                                                  MethodInfo_System_Nullable_bool_ctor);
                                                       (pGVar5->fields).textured.fields = local_310[0];
                                                       local_318[0].hasValue = false;
                                                       local_318[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Nullable_bool__o *)local_318,true,
                                                                  (MethodInfo_3CCFD20 *)
                                                                  MethodInfo_System_Nullable_bool_ctor);
                                                       (pGVar5->fields).worn.fields = local_318[0];
                                                       local_f8.hasValue = false;
                                                       local_f8._1_3_ = 0;
                                                       local_f8.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_f8,4.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).wornStainScale.fields = local_f8;
                                                       (pGVar5->fields).motion = "slide";
                                                       Il2CppCodeGenWriteBarrier(&(pGVar5->fields).motion);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"brushSidePanelBrushButton"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("brushSidePanelFooterPrimaryButton","primary",
                                                                  "header",400,26.0,63.0,in_R8);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"brushSidePanelFooterPrimaryButton"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"brushSidePanelFooterPrimaryButton",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_100.hasValue = false;
                                                       local_100._1_3_ = 0;
                                                       local_100.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_100,26.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).iconSize.fields = local_100;
                                                         if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"brushSidePanelFooterPrimaryButton",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_108.hasValue = false;
                                                       local_108._1_3_ = 0;
                                                       local_108.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_108,24.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).paddingX.fields = local_108;
                                                         if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"brushSidePanelFooterPrimaryButton",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_110.hasValue = false;
                                                       local_110._1_3_ = 0;
                                                       local_110.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_110,9.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).gap.fields = local_110;
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileCard";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_118.hasValue = false;
                                                         local_118._1_3_ = 0;
                                                         local_118.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_118,0.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_118;
                                                         local_320[0].hasValue = false;
                                                         local_320[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_320,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).shadow.fields = local_320[0];
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCard"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileCardBanner";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "profileCardBannerBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_328[0].hasValue = false;
                                                         local_328[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_328,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_328[0];
                                                         local_330[0].hasValue = false;
                                                         local_330[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_330,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_330[0];
                                                         local_120.hasValue = false;
                                                         local_120._1_3_ = 0;
                                                         local_120.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_120,3.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_120;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardBanner"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileCardBannerImage";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardBannerImage"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileCardBody";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_338[0].hasValue = false;
                                                         local_338[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_338,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_338[0];
                                                         local_340[0].hasValue = false;
                                                         local_340[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_340,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_340[0];
                                                         local_128.hasValue = false;
                                                         local_128._1_3_ = 0;
                                                         local_128.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_128,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_128;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardBody"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileCardAvatarFrame";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "profileCardAvatarBorder";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_130.hasValue = false;
                                                         local_130._1_3_ = 0;
                                                         local_130.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_130,8.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).padding.fields = local_130;
                                                         local_348[0].hasValue = false;
                                                         local_348[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_348,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_348[0];
                                                         local_350[0].hasValue = false;
                                                         local_350[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_350,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_350[0];
                                                         local_138.hasValue = false;
                                                         local_138._1_3_ = 0;
                                                         local_138.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_138,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_138;
                                                         local_358[0].hasValue = false;
                                                         local_358[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_358,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).shadow.fields = local_358[0];
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardAvatarFrame"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileCardAvatarBg";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "profileCardAvatarBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardAvatarBg"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileCardAvatarImage";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardAvatarImage"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileCardName","text",
                                                                  "header",400,42.0,in_R8);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardName"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileCardHandle","textMuted",
                                                                  "text",400,20.0,in_R8);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardHandle"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileCardBodyText","textMuted",
                                                                  "text",400,22.0,in_R8);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardBodyText"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileCardSocialText","textMuted",
                                                                  "text",400,22.0,in_R8);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardSocialText"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"profileCardSocialText",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 100.0;
                                                         (pGVar6->fields).unit = "percent";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).width = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).width);
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileInfoStatus","textMuted",
                                                                  "text",400,20.0,in_R8);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileInfoStatus"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"profileInfoStatus",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textAlignment =
                                                              "right";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment);
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileCardSocialIcon";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "textMuted";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileCardSocialIcon"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "creditsCategoryHeader";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_140.hasValue = false;
                                                         local_140._1_3_ = 0;
                                                         local_140.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_140,0.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_140;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"creditsCategoryHeader"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "creditsCategoryBrush";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_360[0].hasValue = false;
                                                         local_360[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_360,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_360[0];
                                                         local_368[0].hasValue = false;
                                                         local_368[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_368,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_368[0];
                                                         local_148.hasValue = false;
                                                         local_148._1_3_ = 0;
                                                         local_148.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_148,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_148;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"creditsCategoryBrush"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("creditsCategoryHeaderText","text",
                                                                  "header",400,40.0,in_R8);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"creditsCategoryHeaderText"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1 !=
                                                       (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1,(Il2CppObject *)"creditsCategoryHeaderText",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment);
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("creditsSubcategoryHeader","text",
                                                                  "menuText",400,28.0,in_R8);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                         method_03 = (MethodInfo *)"creditsSubcategoryHeader";
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"creditsSubcategoryHeader"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar4 = local_290;
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__AddChangelogDefaults
                                                                 (local_290,method_03);
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(pGVar4->fields)._styles;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "creditsInfoIcon";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 18.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).width = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).width);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 18.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).height = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"creditsInfoIcon"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "creditsContributorCell";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_150.hasValue = false;
                                                         local_150._1_3_ = 0;
                                                         local_150.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_150,
                                                                    10.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).paddingX.fields = local_150;
                                                         local_158.hasValue = false;
                                                         local_158._1_3_ = 0;
                                                         local_158.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_158,8.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_158;
                                                         local_370[0].hasValue = false;
                                                         local_370[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_370,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_370[0];
                                                         local_378[0].hasValue = false;
                                                         local_378[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_378,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_378[0];
                                                         local_160.hasValue = false;
                                                         local_160._1_3_ = 0;
                                                         local_160.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_160,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_160;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"creditsContributorCell"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profilePreviewCard";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_168.hasValue = false;
                                                         local_168._1_3_ = 0;
                                                         local_168.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_168,0.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_168;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profilePreviewCard"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profilePreviewDialog";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_380[0].hasValue = false;
                                                         local_380[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_380,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_380[0];
                                                         local_388[0].hasValue = false;
                                                         local_388[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_388,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_388[0];
                                                         local_170.hasValue = false;
                                                         local_170._1_3_ = 0;
                                                         local_170.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_170,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_170;
                                                         local_390[0].hasValue = false;
                                                         local_390[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_390,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).shadow.fields = local_390[0];
                                                         local_178.hasValue = false;
                                                         local_178._1_3_ = 0;
                                                         local_178.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_178,0.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_178;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profilePreviewDialog"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileHoverDialog";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "surfaceSoft";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_398[0].hasValue = false;
                                                         local_398[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_398,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_398[0];
                                                         local_3a0[0].hasValue = false;
                                                         local_3a0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3a0,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_3a0[0];
                                                         local_180.hasValue = false;
                                                         local_180._1_3_ = 0;
                                                         local_180.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_180,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_180;
                                                         local_3a8[0].hasValue = false;
                                                         local_3a8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3a8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).shadow.fields = local_3a8[0];
                                                         local_188.hasValue = false;
                                                         local_188._1_3_ = 0;
                                                         local_188.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_188,0.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).gap.fields = local_188;
                                                         (pGVar5->fields).motion = "balloon";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).motion);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profileHoverDialog"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profilePreviewTitleBar";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "secondary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_190.hasValue = false;
                                                         local_190._1_3_ = 0;
                                                         local_190.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_190,
                                                                    16.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).paddingX.fields = local_190;
                                                         local_198.hasValue = false;
                                                         local_198._1_3_ = 0;
                                                         local_198.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_198,7.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).paddingY.fields = local_198;
                                                         local_3b0[0].hasValue = false;
                                                         local_3b0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3b0,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_3b0[0];
                                                         local_3b8[0].hasValue = false;
                                                         local_3b8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3b8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_3b8[0];
                                                         local_1a0.hasValue = false;
                                                         local_1a0._1_3_ = 0;
                                                         local_1a0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1a0,1.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).relief.fields = local_1a0;
                                                         local_3c0[0].hasValue = false;
                                                         local_3c0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3c0,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).reliefGradient.fields = local_3c0[0]
                                                         ;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profilePreviewTitleBar"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profilePreviewTitle","buttonText",
                                                                  "header",400,23.0,in_R8);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profilePreviewTitle"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profilePreviewBannerFrame";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "profileCardBannerBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profilePreviewBannerFrame"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profilePreviewBanner";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "profileCardBannerBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_3c8[0].hasValue = false;
                                                         local_3c8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3c8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_3c8[0];
                                                         local_3d0[0].hasValue = false;
                                                         local_3d0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3d0,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_3d0[0];
                                                         local_1a8.hasValue = false;
                                                         local_1a8._1_3_ = 0;
                                                         local_1a8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1a8,3.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_1a8;
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profilePreviewBanner"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profilePreviewBody";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profilePreviewBody"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profilePreviewAvatarFrame";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "profileCardAvatarBorder";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_1b0.hasValue = false;
                                                         local_1b0._1_3_ = 0;
                                                         local_1b0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1b0,6.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).padding.fields = local_1b0;
                                                         local_3d8[0].hasValue = false;
                                                         local_3d8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3d8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_3d8[0];
                                                         local_3e0[0].hasValue = false;
                                                         local_3e0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3e0,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_3e0[0];
                                                         local_1b8.hasValue = false;
                                                         local_1b8._1_3_ = 0;
                                                         local_1b8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1b8,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_1b8;
                                                         local_3e8[0].hasValue = false;
                                                         local_3e8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3e8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).shadow.fields = local_3e8[0];
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profilePreviewAvatarFrame"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)*ppSVar1;
                                                       local_290 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o
                                                                    *)ppSVar1;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profilePreviewAvatar";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"profilePreviewAvatar"
                                                                  ,(Il2CppObject *)pGVar5,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar4 = local_290;
                                                       pGVar3 = local_290->klass;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profilePreviewName","text",
                                                                  "header",400,30.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profilePreviewName",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profilePreviewHandle","textMuted",
                                                                  "text",400,17.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profilePreviewHandle",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profilePreviewSelection","textMuted",
                                                                  "text",500,16.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profilePreviewSelection",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileHoverBio","textMuted",
                                                                  "text",400,18.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profileHoverBio",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "characterTextInput";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "characterNamePreviewBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         (pGVar5->fields).textColor = "buttonText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor);
                                                         (pGVar5->fields).fontFamily = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).fontFamily);
                                                         local_1c0.hasValue = false;
                                                         local_1c0._1_3_ = 0;
                                                         local_1c0.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Nullable_int__o *)&local_1c0,400,
                                                                    (MethodInfo_3CD4BA0 *)
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar5->fields).fontWeight.fields = local_1c0;
                                                         local_1c8.hasValue = false;
                                                         local_1c8._1_3_ = 0;
                                                         local_1c8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1c8,
                                                                    19.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).fontSize.fields = local_1c8;
                                                         local_1d0.hasValue = false;
                                                         local_1d0._1_3_ = 0;
                                                         local_1d0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1d0,
                                                                    12.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).padding.fields = local_1d0;
                                                         pGVar6 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 42.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).height = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                                                         local_3f0[0].hasValue = false;
                                                         local_3f0[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3f0,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_3f0[0];
                                                         local_3f8[0].hasValue = false;
                                                         local_3f8[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_3f8,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_3f8[0];
                                                         local_1d8.hasValue = false;
                                                         local_1d8._1_3_ = 0;
                                                         local_1d8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1d8,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_1d8;
                                                         local_1e0.hasValue = false;
                                                         local_1e0._1_3_ = 0;
                                                         local_1e0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1e0,
                                                                    -1.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         pGVar4 = local_290;
                                                         (pGVar5->fields).relief.fields = local_1e0;
                                                         if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"characterTextInput",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "characterTextColorInput";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "characterNamePreviewBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         (pGVar5->fields).textColor = "buttonText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor);
                                                         (pGVar5->fields).fontFamily = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).fontFamily);
                                                         local_1e8.hasValue = false;
                                                         local_1e8._1_3_ = 0;
                                                         local_1e8.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Nullable_int__o *)&local_1e8,400,
                                                                    (MethodInfo_3CD4BA0 *)
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar5->fields).fontWeight.fields = local_1e8;
                                                         local_1f0.hasValue = false;
                                                         local_1f0._1_3_ = 0;
                                                         local_1f0.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1f0,
                                                                    36.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).fontSize.fields = local_1f0;
                                                         local_1f8.hasValue = false;
                                                         local_1f8._1_3_ = 0;
                                                         local_1f8.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_1f8,
                                                                    18.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).padding.fields = local_1f8;
                                                         pGVar6 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 112.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).height = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                                                         local_400[0].hasValue = false;
                                                         local_400[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_400,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_400[0];
                                                         local_408[0].hasValue = false;
                                                         local_408[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_408,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_408[0];
                                                         local_200.hasValue = false;
                                                         local_200._1_3_ = 0;
                                                         local_200.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_200,4.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_200;
                                                         local_208.hasValue = false;
                                                         local_208._1_3_ = 0;
                                                         local_208.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_208,
                                                                    -1.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).relief.fields = local_208;
                                                         if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"characterTextColorInput",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("gridPickerItem","surfaceSoft",
                                                                  "text",500,16.0,144.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"gridPickerItem",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if (pGVar4->klass !=
                                                           (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"gridPickerItem",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_210.hasValue = false;
                                                       local_210._1_3_ = 0;
                                                       local_210.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_210,10.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).padding.fields = local_210;
                                                         if (pGVar4->klass !=
                                                             (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0)
                                                         {
                                                           pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"gridPickerItem",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_218.hasValue = false;
                                                       local_218._1_3_ = 0;
                                                       local_218.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_218,7.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).gap.fields = local_218;
                                                         if (pGVar4->klass !=
                                                             (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0)
                                                         {
                                                           pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"gridPickerItem",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor);
                                                         if (pGVar4->klass !=
                                                             (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0)
                                                         {
                                                           pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"gridPickerItem",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_220.hasValue = false;
                                                       local_220._1_3_ = 0;
                                                       local_220.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_220,0.045
                                                                  ,(MethodInfo_3CDA2B0 *)
                                                                   MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).pressDepth.fields = local_220;
                                                         pGVar3 = pGVar4->klass;
                                                         pGVar5 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "gridPickerThumbnail";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_410[0].hasValue = false;
                                                         local_410[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_410,false
                                                                    ,(MethodInfo_3CCFD20 *)
                                                                     MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_410[0];
                                                         local_418[0].hasValue = false;
                                                         local_418[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_418,false
                                                                    ,(MethodInfo_3CCFD20 *)
                                                                     MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_418[0];
                                                         if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"gridPickerThumbnail",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("gridPickerLabel","textMuted",
                                                                  "text",500,15.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"gridPickerLabel",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if (pGVar4->klass !=
                                                           (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"gridPickerLabel",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment);
                                                         pGVar3 = pGVar4->klass;
                                                         pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                                 ("profileGridItem","surfaceSoft",
                                                                  "text",500,16.0,144.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profileGridItem",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if (pGVar4->klass !=
                                                           (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"profileGridItem",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_228.hasValue = false;
                                                       local_228._1_3_ = 0;
                                                       local_228.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_228,10.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).padding.fields = local_228;
                                                         if (pGVar4->klass !=
                                                             (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0)
                                                         {
                                                           pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"profileGridItem",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_230.hasValue = false;
                                                       local_230._1_3_ = 0;
                                                       local_230.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_230,7.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).gap.fields = local_230;
                                                         if (pGVar4->klass !=
                                                             (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0)
                                                         {
                                                           pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"profileGridItem",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textColor = "text";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor);
                                                         if (pGVar4->klass !=
                                                             (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0)
                                                         {
                                                           pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"profileGridItem",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       local_238.hasValue = false;
                                                       local_238._1_3_ = 0;
                                                       local_238.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_238,0.045
                                                                  ,(MethodInfo_3CDA2B0 *)
                                                                   MethodInfo_System_Nullable_float_ctor);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).pressDepth.fields = local_238;
                                                         pGVar3 = pGVar4->klass;
                                                         pGVar5 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileGridItemThumbnail";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "engravedBg";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_420[0].hasValue = false;
                                                         local_420[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_420,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_420[0];
                                                         local_428[0].hasValue = false;
                                                         local_428[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_428,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_428[0];
                                                         local_240.hasValue = false;
                                                         local_240._1_3_ = 0;
                                                         local_240.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_240,3.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_240;
                                                         local_248.hasValue = false;
                                                         local_248._1_3_ = 0;
                                                         local_248.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_248,
                                                                    -1.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).relief.fields = local_248;
                                                         if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profileGridItemThumbnail",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileGridItemLabel","textMuted",
                                                                  "text",500,15.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profileGridItemLabel",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if (pGVar4->klass !=
                                                           (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"profileGridItemLabel",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment);
                                                         pGVar3 = pGVar4->klass;
                                                         pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileEmoteSlotText","textMuted",
                                                                  "text",500,20.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profileEmoteSlotText",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if (pGVar4->klass !=
                                                           (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"profileEmoteSlotText",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment);
                                                         pGVar3 = pGVar4->klass;
                                                         pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileEmoteWheelTitle","text",
                                                                  "jek5",400,36.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profileEmoteWheelTitle",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if (pGVar4->klass !=
                                                           (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"profileEmoteWheelTitle",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment);
                                                         pGVar3 = pGVar4->klass;
                                                         pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("profileEmoteWheelSubtext","textMuted",
                                                                  "text",400,18.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profileEmoteWheelSubtext",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if (pGVar4->klass !=
                                                           (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"profileEmoteWheelSubtext",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textAlignment =
                                                              "center";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment);
                                                         pGVar3 = pGVar4->klass;
                                                         pGVar5 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "profileColorSwatch";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "surface";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         local_430[0].hasValue = false;
                                                         local_430[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_430,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).textured.fields = local_430[0];
                                                         local_438[0].hasValue = false;
                                                         local_438[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_438,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).worn.fields = local_438[0];
                                                         local_250.hasValue = false;
                                                         local_250._1_3_ = 0;
                                                         local_250.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_250,2.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).wornStainScale.fields = local_250;
                                                         local_258.hasValue = false;
                                                         local_258._1_3_ = 0;
                                                         local_258.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_258,1.0
                                                                    ,(MethodInfo_3CDA2B0 *)
                                                                     MethodInfo_System_Nullable_float_ctor);
                                                         (pGVar5->fields).relief.fields = local_258;
                                                         local_440[0].hasValue = false;
                                                         local_440[0].value = false;
                                                         System_Nullable_bool____ctor
                                                                   ((System_Nullable_bool__o *)local_440,true,
                                                                    (MethodInfo_3CCFD20 *)
                                                                    MethodInfo_System_Nullable_bool_ctor);
                                                         (pGVar5->fields).reliefGradient.fields = local_440[0]
                                                         ;
                                                         pGVar6 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 42.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).width = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).width);
                                                         pGVar6 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 42.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).height = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                                                         if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"profileColorSwatch",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "mainMenuLogo";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 640.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).width = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).width);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 450.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).height = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                                                         if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"mainMenuLogo",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "mainMenuBrushButton";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         (pGVar5->fields).textColor = "void";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textColor);
                                                         (pGVar5->fields).fontFamily = "menuText";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).fontFamily);
                                                         local_260.hasValue = false;
                                                         local_260._1_3_ = 0;
                                                         local_260.value = 0;
                                                         System_Nullable_int____ctor
                                                                   ((System_Nullable_int__o *)&local_260,400,
                                                                    (MethodInfo_3CD4BA0 *)
                                                                    MethodInfo_System_Nullable_int_ctor);
                                                         (pGVar5->fields).fontWeight.fields = local_260;
                                                         local_268.hasValue = false;
                                                         local_268._1_3_ = 0;
                                                         local_268.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_268,
                                                                    56.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).fontSize.fields = local_268;
                                                         (pGVar5->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment);
                                                         local_270.hasValue = false;
                                                         local_270._1_3_ = 0;
                                                         local_270.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_270,
                                                                    52.0,(MethodInfo_3CDA2B0 *)
                                                                         MethodInfo_System_Nullable_float_ctor
                                                                   );
                                                         (pGVar5->fields).iconSize.fields = local_270;
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 118.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).height = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                                                         local_278.hasValue = false;
                                                         local_278._1_3_ = 0;
                                                         local_278.value = 0.0;
                                                         System_Nullable_float____ctor
                                                                   ((System_Nullable_float__o *)&local_278,
                                                                    112.0,(MethodInfo_3CDA2B0 *)
                                                                                                                                                    
                                                       MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).paddingX.fields = local_278;
                                                       local_280.hasValue = false;
                                                       local_280._1_3_ = 0;
                                                       local_280.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_280,18.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).gap.fields = local_280;
                                                       local_448[0].hasValue = false;
                                                       local_448[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Nullable_bool__o *)local_448,true,
                                                                  (MethodInfo_3CCFD20 *)
                                                                  MethodInfo_System_Nullable_bool_ctor);
                                                       (pGVar5->fields).textured.fields = local_448[0];
                                                       local_450[0].hasValue = false;
                                                       local_450[0].value = false;
                                                       System_Nullable_bool____ctor
                                                                 ((System_Nullable_bool__o *)local_450,true,
                                                                  (MethodInfo_3CCFD20 *)
                                                                  MethodInfo_System_Nullable_bool_ctor);
                                                       (pGVar5->fields).worn.fields = local_450[0];
                                                       local_288.hasValue = false;
                                                       local_288._1_3_ = 0;
                                                       local_288.value = 0.0;
                                                       System_Nullable_float____ctor
                                                                 ((System_Nullable_float__o *)&local_288,4.0,
                                                                  (MethodInfo_3CDA2B0 *)
                                                                  MethodInfo_System_Nullable_float_ctor);
                                                       (pGVar5->fields).wornStainScale.fields = local_288;
                                                       (pGVar5->fields).motion = "slide";
                                                       Il2CppCodeGenWriteBarrier(&(pGVar5->fields).motion);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"mainMenuBrushButton",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "mainMenuTipPanel";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"mainMenuTipPanel",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "mainMenuTipBackground";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "primary";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"mainMenuTipBackground",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       pGVar3 = pGVar4->klass;
                                                       pGVar5 = 
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                                 ("mainMenuTipText","buttonText",
                                                                  "jek5",400,30.0,in_R8);
                                                       if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"mainMenuTipText",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item
                                                       );
                                                       if (pGVar4->klass !=
                                                           (Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                         pGVar5 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar4->klass,(Il2CppObject *)"mainMenuTipText",
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                                                       );
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).textAlignment =
                                                              "left";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).textAlignment);
                                                         pGVar3 = pGVar4->klass;
                                                         pGVar5 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition
                                                       );
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                                 (pGVar5,(MethodInfo *)0x0);
                                                       if (pGVar5 != (
                                                       Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                                                       {
                                                         (pGVar5->fields).name = "mainMenuFooterSpriteButton";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).name);
                                                         (pGVar5->fields).background = "clear";
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pGVar5->fields).background);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 48.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).width = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).width);
                                                         if (Il2CppMethodInitialized_0754289c == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"point");
                                                       Il2CppMethodInitialized_0754289c = '\x01';
                                                       }
                                                       pGVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                                                       Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                                 (pGVar6,(MethodInfo *)0x0);
                                                       if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                                      *)0x0) {
                                                         (pGVar6->fields).value = 48.0;
                                                         (pGVar6->fields).unit = "point";
                                                         Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
                                                         (pGVar5->fields).height = pGVar6;
                                                         Il2CppCodeGenWriteBarrier(&(pGVar5->fields).height);
                                                         if (pGVar3 != (
                                                       Gisketch_Aottg2UI_Styling_GisketchTheme_c *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pGVar3,(Il2CppObject *)"mainMenuFooterSpriteButton",
                                                       (Il2CppObject *)pGVar5,
                                                       (MethodInfo_4AAD4C0 *)
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
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
// 0x5340890

void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,
               Gisketch_Aottg2UI_Data_GisketchColorToken_array *colors,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchColorToken_o *pGVar2;
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  UnityEngine_Color_o value;
  UnityEngine_Color_o color;
  bool bVar3;
  ulong uVar4;
  MethodInfo *method_00;
  ulong uVar5;
  UnityEngine_Color_Fields local_48;
  
  if (Il2CppMethodInitialized_0754289f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
    Il2CppMethodInitialized_0754289f = '\x01';
  }
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  if ((colors != (Gisketch_Aottg2UI_Data_GisketchColorToken_array *)0x0) && (0 < (int)colors->max_length)) {
    uVar4 = colors->max_length & 0xffffffff;
    uVar5 = 0;
    do {
      if (uVar4 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      pGVar2 = colors->m_Items[uVar5];
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchColorToken_o *)0x0) {
        bVar3 = System_String__IsNullOrEmpty((pGVar2->fields).name,(MethodInfo *)0x0);
        if (!bVar3) {
          bVar3 = System_String__IsNullOrEmpty((pGVar2->fields).value,(MethodInfo *)0x0);
          if (!bVar3) {
            bVar3 = UnityEngine_ColorUtility__TryParseHtmlString
                              ((pGVar2->fields).value,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
            if (bVar3) {
              __this_00 = (__this->fields)._colors;
              if (__this_00 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                ThrowNullReferenceException();
              }
              value.fields.b = local_48.b;
              value.fields.a = local_48.a;
              value.fields.r = local_48.r;
              value.fields.g = local_48.g;
              System_Collections_Generic_Dictionary_object__Color___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)(pGVar2->fields).name,value,
                         (MethodInfo_4A8D130 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
              color.fields.b = local_48.b;
              color.fields.a = local_48.a;
              color.fields.r = local_48.r;
              color.fields.g = local_48.g;
              Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyAlias
                        (__this,(pGVar2->fields).name,color,method_00);
            }
          }
        }
      }
      uVar5 = uVar5 + 1;
      uVar1 = (uint)colors->max_length;
      uVar4 = (ulong)uVar1;
    } while ((long)uVar5 < (long)(int)uVar1);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ApplyAlias
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyAlias (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* token, UnityEngine_Color_o color, const MethodInfo* method);
// 0x53409a0

void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyAlias
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *token,
               UnityEngine_Color_o color,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  System_Collections_Generic_Dictionary_string__Color__o *pSVar3;
  
  if (Il2CppMethodInitialized_075428a0 == '\0') {
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
    Il2CppMethodInitialized_075428a0 = '\x01';
  }
  bVar1 = System_String__op_Equality(token,"primary",(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (__this->fields)._colors;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      ppSVar2 = &"accent";
      goto label_05340bb4;
    }
  }
  else {
    bVar1 = System_String__op_Equality(token,"secondary",(MethodInfo *)0x0);
    if (bVar1) {
      pSVar3 = (__this->fields)._colors;
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
        ppSVar2 = &"accent2";
        goto label_05340bb4;
      }
    }
    else {
      bVar1 = System_String__op_Equality(token,"surface",(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (__this->fields)._colors;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          System_Collections_Generic_Dictionary_object__Color___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     (Il2CppObject *)"paper",color,
                     (MethodInfo_4A8D130 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
          pSVar3 = (__this->fields)._colors;
          if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
            ppSVar2 = &"panel";
            goto label_05340bb4;
          }
        }
      }
      else {
        bVar1 = System_String__op_Equality(token,"surfaceSoft",(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__op_Equality(token,"text",(MethodInfo *)0x0);
          if (bVar1) {
            pSVar3 = (__this->fields)._colors;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) goto label_05340bde;
            ppSVar2 = &"ink";
          }
          else {
            bVar1 = System_String__op_Equality(token,"textMuted",(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pSVar3 = (__this->fields)._colors;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) goto label_05340bde;
            ppSVar2 = &"muted";
          }
label_05340bb4:
          System_Collections_Generic_Dictionary_object__Color___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)*ppSVar2,
                     color,(MethodInfo_4A8D130 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Color_set_Item);
          return;
        }
        pSVar3 = (__this->fields)._colors;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          ppSVar2 = &"panelSoft";
          goto label_05340bb4;
        }
      }
    }
  }
label_05340bde:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$FindPalette
// il2cpp: Gisketch_Aottg2UI_Data_GisketchThemePalette_o* Gisketch_Aottg2UI_Styling_GisketchTheme__FindPalette (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* definition, const MethodInfo* method);
// 0x5340bf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5340ce7: jmp 0x5340c83

Gisketch_Aottg2UI_Data_GisketchThemePalette_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__FindPalette
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,
          Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_array *pGVar2;
  System_String_o *b;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar3;
  bool bVar4;
  System_String_o **ppSVar5;
  ulong uVar6;
  ulong uVar7;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar8;
  
  if (Il2CppMethodInitialized_075428a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"light");
    Il2CppMethodInitialized_075428a1 = '\x01';
  }
  if (definition == (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
label_05340d08:
    ThrowNullReferenceException();
  }
  pGVar2 = (definition->fields).palettes;
  if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_array *)0x0) && (pGVar2->max_length != 0)) {
    bVar4 = System_String__IsNullOrEmpty((definition->fields).mode,(MethodInfo *)0x0);
    if (bVar4) {
      ppSVar5 = &"light";
    }
    else {
      ppSVar5 = &(definition->fields).mode;
    }
    pGVar2 = (definition->fields).palettes;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchThemePalette_array *)0x0) goto label_05340d08;
    if (0 < (int)pGVar2->max_length) {
      b = *ppSVar5;
      uVar6 = pGVar2->max_length & 0xffffffff;
      uVar7 = 0;
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0;
      do {
        if (uVar6 <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        pGVar3 = pGVar2->m_Items[uVar7];
        if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) &&
           (bVar4 = System_String__IsNullOrEmpty((pGVar3->fields).name,(MethodInfo *)0x0), !bVar4)) {
          bVar4 = System_String__Equals_52ffe30((pGVar3->fields).name,b,5,(MethodInfo *)0x0);
          if (bVar4) {
            return pGVar3;
          }
          if ((pGVar8 == (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) ||
             (bVar4 = System_String__Equals_52ffe30
                                ((pGVar3->fields).name,"light",5,(MethodInfo *)0x0), bVar4)) {
            pGVar8 = pGVar3;
          }
        }
        uVar7 = uVar7 + 1;
        uVar1 = (uint)pGVar2->max_length;
        uVar6 = (ulong)uVar1;
      } while ((long)uVar7 < (long)(int)uVar1);
      return pGVar8;
    }
  }
  return (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$MergeStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__MergeStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* baseStyle, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* patch, const MethodInfo* method);
// 0x5340d10
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5340da9: lea rax, [rbx + 0x10]
// asm:   0x5340dad: jmp 0x5340dbc
// asm:   0x5340daf: test rbx, rbx
// asm:   0x5340db8: lea rax, [r14 + 0x10]
// asm:   0x5340f0e: cmp byte ptr [rip + 0x220198f], 0
// asm:   0x5340f15: jne 0x5340f2a
// asm:   0x5340fa1: cmp byte ptr [rip + 0x22018fc], 0
// asm:   0x5340fa8: jne 0x5340fbd
// asm:   0x5341188: jmp 0x5340f2a
// asm:   0x534119f: jmp 0x5340fbd

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__MergeStyle
          (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *baseStyle,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *patch,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  System_Nullable_int__Fields *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  System_Nullable_float__Fields *pSVar7;
  System_Nullable_bool__Fields *pSVar8;
  System_String_o *pSVar9;
  System_Nullable_bool__Fields local_48 [4];
  System_Nullable_float__Fields local_40;
  System_Nullable_int__Fields local_38;
  
  pGVar4 = patch;
  if (Il2CppMethodInitialized_075428a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    Il2CppMethodInitialized_075428a2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__CopyStyle(baseStyle,(MethodInfo *)pGVar4);
  if (patch != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((patch->fields).name,(MethodInfo *)0x0);
    pGVar2 = patch;
    if (bVar3) {
      pGVar2 = pGVar4;
    }
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
label_053411a4:
      ThrowNullReferenceException();
    }
    (pGVar4->fields).name = (pGVar2->fields).name;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).name);
    pSVar9 = (patch->fields).background;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).background;
    }
    (pGVar4->fields).background = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).background);
    pSVar9 = (patch->fields).textColor;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).textColor;
    }
    (pGVar4->fields).textColor = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textColor);
    pSVar9 = (patch->fields).fontFamily;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).fontFamily;
    }
    (pGVar4->fields).fontFamily = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).fontFamily);
    local_38 = (patch->fields).fontWeight.fields;
    pSVar5 = &local_38;
    if (local_38.hasValue == false) {
      pSVar5 = &(pGVar4->fields).fontWeight.fields;
    }
    (pGVar4->fields).fontWeight.fields = *pSVar5;
    local_40 = (patch->fields).fontSize.fields;
    pSVar7 = &(pGVar4->fields).fontSize.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).fontSize.fields = *pSVar7;
    pSVar9 = (patch->fields).textAlignment;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).textAlignment;
    }
    (pGVar4->fields).textAlignment = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textAlignment);
    local_40 = (patch->fields).iconSize.fields;
    pSVar7 = &(pGVar4->fields).iconSize.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).iconSize.fields = *pSVar7;
    local_40 = (patch->fields).padding.fields;
    pSVar7 = &(pGVar4->fields).padding.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).padding.fields = *pSVar7;
    local_40 = (patch->fields).paddingX.fields;
    pSVar7 = &(pGVar4->fields).paddingX.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).paddingX.fields = *pSVar7;
    local_40 = (patch->fields).paddingY.fields;
    pSVar7 = &(pGVar4->fields).paddingY.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).paddingY.fields = *pSVar7;
    local_40 = (patch->fields).gap.fields;
    pSVar7 = &(pGVar4->fields).gap.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).gap.fields = *pSVar7;
    pGVar1 = (patch->fields).width;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pGVar6 = (pGVar4->fields).width;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
      }
      if (Il2CppMethodInitialized_075428a4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        Il2CppMethodInitialized_075428a4 = '\x01';
      }
      pGVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_053411a4;
      (pGVar6->fields).value = (pGVar1->fields).value;
      (pGVar6->fields).unit = (pGVar1->fields).unit;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
    }
    (pGVar4->fields).width = pGVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).width);
    pGVar1 = (patch->fields).height;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pGVar6 = (pGVar4->fields).height;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
      }
      if (Il2CppMethodInitialized_075428a4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        Il2CppMethodInitialized_075428a4 = '\x01';
      }
      pGVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_053411a4;
      (pGVar6->fields).value = (pGVar1->fields).value;
      (pGVar6->fields).unit = (pGVar1->fields).unit;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).unit);
    }
    (pGVar4->fields).height = pGVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).height);
    local_40 = (patch->fields).aspectRatio.fields;
    pSVar7 = &(pGVar4->fields).aspectRatio.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).aspectRatio.fields = *pSVar7;
    pSVar9 = (patch->fields).motion;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).motion;
    }
    (pGVar4->fields).motion = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).motion);
    local_48[0] = (patch->fields).textured.fields;
    pSVar8 = &(pGVar4->fields).textured.fields;
    if (local_48[0].hasValue != false) {
      pSVar8 = local_48;
    }
    (pGVar4->fields).textured.fields = *pSVar8;
    local_48[0] = (patch->fields).worn.fields;
    pSVar8 = &(pGVar4->fields).worn.fields;
    if (local_48[0].hasValue != false) {
      pSVar8 = local_48;
    }
    (pGVar4->fields).worn.fields = *pSVar8;
    local_40 = (patch->fields).wornStainScale.fields;
    pSVar7 = &(pGVar4->fields).wornStainScale.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).wornStainScale.fields = *pSVar7;
    local_40 = (patch->fields).relief.fields;
    pSVar7 = &(pGVar4->fields).relief.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).relief.fields = *pSVar7;
    local_48[0] = (patch->fields).reliefGradient.fields;
    pSVar8 = &(pGVar4->fields).reliefGradient.fields;
    if (local_48[0].hasValue != false) {
      pSVar8 = local_48;
    }
    (pGVar4->fields).reliefGradient.fields = *pSVar8;
    local_40 = (patch->fields).pressDepth.fields;
    pSVar7 = &(pGVar4->fields).pressDepth.fields;
    if (local_40.hasValue != false) {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).pressDepth.fields = *pSVar7;
    local_48[0] = (patch->fields).shadow.fields;
    pSVar8 = &(pGVar4->fields).shadow.fields;
    if (local_48[0].hasValue != false) {
      pSVar8 = local_48;
    }
    (pGVar4->fields).shadow.fields = *pSVar8;
  }
  return pGVar4;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__CopyStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x53411b0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__CopyStyle
          (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  
  if (Il2CppMethodInitialized_075428a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_075428a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return __this;
  }
  if (__this == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0534146f;
  (__this->fields).name = (style->fields).name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).name);
  (__this->fields).background = (style->fields).background;
  Il2CppCodeGenWriteBarrier(&(__this->fields).background);
  (__this->fields).textColor = (style->fields).textColor;
  Il2CppCodeGenWriteBarrier(&(__this->fields).textColor);
  (__this->fields).fontFamily = (style->fields).fontFamily;
  Il2CppCodeGenWriteBarrier(&(__this->fields).fontFamily);
  (__this->fields).fontWeight.fields = (style->fields).fontWeight.fields;
  (__this->fields).fontSize.fields = (style->fields).fontSize.fields;
  (__this->fields).textAlignment = (style->fields).textAlignment;
  Il2CppCodeGenWriteBarrier(&(__this->fields).textAlignment);
  (__this->fields).iconSize.fields = (style->fields).iconSize.fields;
  (__this->fields).padding.fields = (style->fields).padding.fields;
  (__this->fields).paddingX.fields = (style->fields).paddingX.fields;
  (__this->fields).paddingY.fields = (style->fields).paddingY.fields;
  (__this->fields).gap.fields = (style->fields).gap.fields;
  pGVar1 = (style->fields).width;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    if (Il2CppMethodInitialized_075428a4 != '\0') goto label_053412be;
label_0534131a:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Il2CppMethodInitialized_075428a4 = '\x01';
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_053412c3;
label_05341332:
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    if (Il2CppMethodInitialized_075428a4 == '\0') goto label_0534131a;
label_053412be:
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_05341332;
label_053412c3:
    pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_0534146f;
    (pGVar2->fields).value = (pGVar1->fields).value;
    (pGVar2->fields).unit = (pGVar1->fields).unit;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).unit);
  }
  (__this->fields).width = pGVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).width);
  pGVar1 = (style->fields).height;
  if (Il2CppMethodInitialized_075428a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Il2CppMethodInitialized_075428a4 = '\x01';
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_0534146f:
      ThrowNullReferenceException();
    }
    (pGVar2->fields).value = (pGVar1->fields).value;
    (pGVar2->fields).unit = (pGVar1->fields).unit;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).unit);
  }
  (__this->fields).height = pGVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).height);
  (__this->fields).aspectRatio.fields = (style->fields).aspectRatio.fields;
  (__this->fields).motion = (style->fields).motion;
  Il2CppCodeGenWriteBarrier(&(__this->fields).motion);
  (__this->fields).textured.fields = (style->fields).textured.fields;
  (__this->fields).worn.fields = (style->fields).worn.fields;
  (__this->fields).wornStainScale.fields = (style->fields).wornStainScale.fields;
  (__this->fields).relief.fields = (style->fields).relief.fields;
  (__this->fields).reliefGradient.fields = (style->fields).reliefGradient.fields;
  (__this->fields).pressDepth.fields = (style->fields).pressDepth.fields;
  (__this->fields).shadow.fields = (style->fields).shadow.fields;
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyLength
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Styling_GisketchTheme__CopyLength (Gisketch_Aottg2UI_Data_GisketchLength_o* length, const MethodInfo* method);
// 0x5341480

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__CopyLength
          (Gisketch_Aottg2UI_Data_GisketchLength_o *length,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (Il2CppMethodInitialized_075428a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Il2CppMethodInitialized_075428a4 = '\x01';
  }
  if (length == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    __this = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).value = (length->fields).value;
    (__this->fields).unit = (length->fields).unit;
    Il2CppCodeGenWriteBarrier(&(__this->fields).unit);
  }
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddSettingsDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddSettingsDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x53404e0

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddSettingsDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075428a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&"settingsCategoryTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsSubtabStrip");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_075428a5 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  }
  pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                     ("settingsCategoryTitle","text","header",400,56.0,in_R8);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)"settingsCategoryTitle",(Il2CppObject *)pGVar2,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                       ("settingsSubtabStrip","text","header",400,30.0,in_R8);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)"settingsSubtabStrip",(Il2CppObject *)pGVar2,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$get_ReliefIntensity
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchTheme__get_ReliefIntensity (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x5341500

float Gisketch_Aottg2UI_Styling_GisketchTheme__get_ReliefIntensity
                (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  return (__this->fields)._ReliefIntensity_k__BackingField;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$set_ReliefIntensity
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__set_ReliefIntensity (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, float value, const MethodInfo* method);
// 0x5341510

void Gisketch_Aottg2UI_Styling_GisketchTheme__set_ReliefIntensity
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._ReliefIntensity_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$get_IsDarkMode
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTheme__get_IsDarkMode (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x5341520

bool Gisketch_Aottg2UI_Styling_GisketchTheme__get_IsDarkMode
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsDarkMode_k__BackingField;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$set_IsDarkMode
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__set_IsDarkMode (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, bool value, const MethodInfo* method);
// 0x5341530

void Gisketch_Aottg2UI_Styling_GisketchTheme__set_IsDarkMode
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._IsDarkMode_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$FromJson
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson (System_String_o* json, const MethodInfo* method);
// 0x5341540

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(System_String_o *json,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075428a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_075428a6 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,method_00);
    return pGVar1;
  }
  pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$FromDefinition
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* definition, const MethodInfo* method);
// 0x53415a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53417bd: jmp 0x534176d

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition
          (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition,MethodInfo *method)

{
  uint uVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Data_GisketchColorToken_array *colors;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *pGVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *value;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_Data_GisketchMotionToken_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionToken_o *value_00;
  bool bVar6;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar7;
  ulong uVar8;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar9;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar10;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  ulong uVar11;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *baseStyle;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_40;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *local_38;
  
  if (Il2CppMethodInitialized_075428a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&"dark");
    Il2CppMethodInitialized_075428a7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
  Gisketch_Aottg2UI_Styling_GisketchTheme___ctor(__this_00,method);
  if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
label_05341851:
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Styling_GisketchTheme__AddDefaults(__this_00,method);
  if (definition != (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    __this_01 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)(definition->fields).mode;
    bVar6 = System_String__Equals_52ffe30
                      ((System_String_o *)__this_01,"dark",5,(MethodInfo *)0x0);
    if (bVar6) {
      (__this_00->fields)._IsDarkMode_k__BackingField = true;
      (__this_00->fields)._ReliefIntensity_k__BackingField = 0.5;
    }
    colors = (definition->fields).colors;
    pMVar10 = method_00;
    if (colors != (Gisketch_Aottg2UI_Data_GisketchColorToken_array *)0x0) {
      __this_01 = __this_00;
      Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors(__this_00,colors,method_00);
      pMVar10 = extraout_RDX;
    }
    pGVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__FindPalette(__this_01,definition,pMVar10);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors(__this_00,(pGVar7->fields).colors,method_01);
    }
    pGVar3 = (definition->fields).styles;
    local_38 = definition;
    if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *)0x0) &&
       (0 < (int)pGVar3->max_length)) {
      uVar8 = pGVar3->max_length & 0xffffffff;
      uVar11 = 0;
      do {
        if (uVar8 <= uVar11) goto label_0534184c;
        pGVar9 = pGVar3->m_Items[uVar11];
        if ((pGVar9 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
           (bVar6 = System_String__IsNullOrEmpty((pGVar9->fields).name,(MethodInfo *)0x0), !bVar6)) {
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields)._styles;
          value = (pGVar9->fields).name;
          if (Il2CppMethodInitialized_075428ad == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue
                      );
            Il2CppMethodInitialized_075428ad = '\x01';
          }
          local_40 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
          bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          pMVar10 = extraout_RDX_00;
          baseStyle = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
          if (bVar6) {
label_0534175a:
            uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor;
          }
          else {
            __this = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields)._styles;
            if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05341851;
            bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                              (__this,(Il2CppObject *)value,(Il2CppObject **)&local_40,
                               (MethodInfo_4AAF440 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue
                              );
            pMVar10 = extraout_RDX_01;
            if (bVar6) {
              baseStyle = local_40;
              goto label_0534175a;
            }
            baseStyle = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
            uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor;
          }
          if (uVar2 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme)
            ;
            pMVar10 = extraout_RDX_02;
          }
          pGVar9 = Gisketch_Aottg2UI_Styling_GisketchTheme__MergeStyle(baseStyle,pGVar9,pMVar10);
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05341851;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar4,(Il2CppObject *)value,(Il2CppObject *)pGVar9,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_set_Item)
          ;
        }
        uVar11 = uVar11 + 1;
        uVar1 = (uint)pGVar3->max_length;
        uVar8 = (ulong)uVar1;
      } while ((long)uVar11 < (long)(int)uVar1);
    }
    pGVar5 = (local_38->fields).motions;
    if ((pGVar5 != (Gisketch_Aottg2UI_Data_GisketchMotionToken_array *)0x0) && (0 < (int)pGVar5->max_length))
    {
      uVar8 = pGVar5->max_length & 0xffffffff;
      uVar11 = 0;
      do {
        if (uVar8 <= uVar11) {
label_0534184c:
          ThrowIndexOutOfRangeException();
        }
        value_00 = pGVar5->m_Items[uVar11];
        if ((value_00 != (Gisketch_Aottg2UI_Data_GisketchMotionToken_o *)0x0) &&
           (bVar6 = System_String__IsNullOrEmpty((value_00->fields).name,(MethodInfo *)0x0), !bVar6)) {
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields)._motions;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05341851;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar4,(Il2CppObject *)(value_00->fields).name,(Il2CppObject *)value_00,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_set_Item);
        }
        uVar11 = uVar11 + 1;
        uVar1 = (uint)pGVar5->max_length;
        uVar8 = (ulong)uVar1;
      } while ((long)uVar11 < (long)(int)uVar1);
    }
  }
  return __this_00;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5341a10

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_18;
  
  if (Il2CppMethodInitialized_075428a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_075428a8 = '\x01';
  }
  local_18 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05341abc;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)name,(Il2CppObject **)&local_18,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue
                      );
    if (bVar2) {
      return local_18;
    }
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pGVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)"default",
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_get_Item
                       );
    return pGVar3;
  }
label_05341abc:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$TryGetStyle
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o** style, const MethodInfo* method);
// 0x5341ad0

bool Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **style,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075428a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue);
    Il2CppMethodInitialized_075428a9 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)name,(Il2CppObject **)style,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue
                      );
    if (bVar1) {
      return true;
    }
  }
  *style = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  Il2CppCodeGenWriteBarrier(style);
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* token, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x5341b50

UnityEngine_Color_o
Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *token,
          UnityEngine_Color_o fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  UnityEngine_Color_Fields UVar1;
  bool bVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_Fields local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_28._8_4_ = in_XMM1_Dc;
  local_28._0_8_ = fallback.fields._8_8_;
  local_28._12_4_ = in_XMM1_Dd;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = fallback.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_075428aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Color_TryGetValue);
    Il2CppMethodInitialized_075428aa = '\x01';
  }
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  bVar2 = System_String__IsNullOrEmpty(token,(MethodInfo *)0x0);
  if (bVar2) {
  }
  else {
    __this_00 = (__this->fields)._colors;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_Dictionary_object__Color___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)token,(UnityEngine_Color_o *)&local_48,
                       (MethodInfo_4A8F0E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Color_TryGetValue);
    if (bVar2) {
      UVar1.b = local_48.b;
      UVar1.a = local_48.a;
      UVar1.r = local_48.r;
      UVar1.g = local_48.g;
      return (UnityEngine_Color_o)UVar1;
    }
  }
  UVar3.fields.g = (float)local_38._4_4_;
  UVar3.fields.r = (float)local_38._0_4_;
  UVar3.fields.a = (float)local_28._4_4_;
  UVar3.fields.b = (float)local_28._0_4_;
  return (UnityEngine_Color_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetMotionPreset
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionPreset (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* tokenOrPreset, const MethodInfo* method);
// 0x5341bf0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionPreset
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *tokenOrPreset,MethodInfo *method
          )

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_075428ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_TryGetValue);
    Il2CppMethodInitialized_075428ab = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(tokenOrPreset,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._motions;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05341c66:
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)tokenOrPreset,&local_18,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_TryGetValue
                      );
    if (bVar1) {
      if (local_18 == (Il2CppObject *)0x0) goto label_05341c66;
      tokenOrPreset = local_18[1].monitor;
    }
  }
  return tokenOrPreset;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetMotionDuration
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionDuration (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* tokenOrPreset, float fallback, const MethodInfo* method);
// 0x5341c70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5341cb6: movss xmm0, dword ptr [rsp + 0xc]

float Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionDuration
                (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *tokenOrPreset,
                float fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_075428ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_TryGetValue);
    Il2CppMethodInitialized_075428ac = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(tokenOrPreset,(MethodInfo *)0x0);
  if (bVar1) {
    return fallback;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._motions;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)tokenOrPreset,&local_18,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_TryGetValue
                      );
    if (!bVar1) {
      return fallback;
    }
    if (local_18 != (Il2CppObject *)0x0) {
      if (*(float *)&local_18[2].klass <= 0.0) {
        return fallback;
      }
      return *(float *)&local_18[2].klass;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$StyleOrNull
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__StyleOrNull (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5341980

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__StyleOrNull
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGStack_20;
  
  if (Il2CppMethodInitialized_075428ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue);
    Il2CppMethodInitialized_075428ad = '\x01';
  }
  pGStack_20 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)name,(Il2CppObject **)&pGStack_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_TryGetValue
                      );
    if (bVar1) {
      pGVar2 = pGStack_20;
    }
    else {
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
    }
  }
  return pGVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme___ctor (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x5341860

void Gisketch_Aottg2UI_Styling_GisketchTheme___ctor
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *__this_01;
  System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *__this_02;
  
  if (Il2CppMethodInitialized_075428ae == '\0') {
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
    Il2CppMethodInitialized_075428ae = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Color);
  System_Collections_Generic_Dictionary_object__Color____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4A8C550 *)MethodInfo_System_Collections_Generic_Dictionary_string_Color_ctor);
  (__this->fields)._colors = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colors);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchStyleDefinition_ctor);
  (__this->fields)._styles = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._styles);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchMotionToken_ctor);
  (__this->fields)._motions = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._motions);
  (__this->fields)._ReliefIntensity_k__BackingField = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme___cctor (const MethodInfo* method);
// 0x5341d30

void Gisketch_Aottg2UI_Styling_GisketchTheme___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075428af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchThemeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_075428af = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchThemeDefinition);
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor(__this,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(__this,method_00);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default = pGVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default);
  return;
}


