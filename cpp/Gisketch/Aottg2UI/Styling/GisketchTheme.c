// Type: Gisketch.Aottg2UI.Styling.GisketchTheme
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTheme.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddAtomDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddAtomDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x3acdce0

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddAtomDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o **ppSVar1;
  System_Collections_Generic_Dictionary_string__Color__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Il2CppObject *pIVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
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
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *local_38;
  
  if (DAT_0570134e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchStyleDefinition_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Color_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"icon");
    il2cpp_init_method_metadata(&"separator");
    il2cpp_init_method_metadata(&"select");
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"controlMark");
    il2cpp_init_method_metadata(&"slider");
    il2cpp_init_method_metadata(&"checkBox");
    il2cpp_init_method_metadata(&"sliderTrack");
    il2cpp_init_method_metadata(&"primary");
    il2cpp_init_method_metadata(&"surface");
    il2cpp_init_method_metadata(&"dialog");
    il2cpp_init_method_metadata(&"calloutText");
    il2cpp_init_method_metadata(&"textArea");
    il2cpp_init_method_metadata(&"searchResultItem");
    il2cpp_init_method_metadata(&"callout");
    il2cpp_init_method_metadata(&"dropdown");
    il2cpp_init_method_metadata(&"success");
    il2cpp_init_method_metadata(&"sliderFill");
    il2cpp_init_method_metadata(&"sliderThumb");
    il2cpp_init_method_metadata(&"destructive");
    il2cpp_init_method_metadata(&"switch");
    il2cpp_init_method_metadata(&"calloutBorderSuccess");
    il2cpp_init_method_metadata(&"calloutBorderError");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"checkMark");
    il2cpp_init_method_metadata(&"surfaceSoft");
    il2cpp_init_method_metadata(&"tooltip");
    il2cpp_init_method_metadata(&"header");
    il2cpp_init_method_metadata(&"calloutBorderPrimary");
    il2cpp_init_method_metadata(&"sliderValue");
    il2cpp_init_method_metadata(&"switchThumb");
    il2cpp_init_method_metadata(&"radio");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"calloutBorderWarning");
    il2cpp_init_method_metadata(&"controlLabel");
    il2cpp_init_method_metadata(&"textMuted");
    il2cpp_init_method_metadata(&"popover");
    il2cpp_init_method_metadata(&"engravedBg");
    il2cpp_init_method_metadata(&"spriteButton");
    il2cpp_init_method_metadata(&"switchTrack");
    il2cpp_init_method_metadata(&"shadow");
    il2cpp_init_method_metadata(&"dropdownItem");
    il2cpp_init_method_metadata(&"italic");
    il2cpp_init_method_metadata(&"checkbox");
    DAT_0570134e = '\x01';
  }
  pSVar2 = (__this->fields)._colors;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
    System_Collections_Generic_Dictionary<object__Color>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,"shadow",
               (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),MethodInfo_Void_set_Item);
    pSVar2 = (__this->fields)._colors;
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      value = System_Collections_Generic_Dictionary<object__Color>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)"primary",MethodInfo_Color_get_Item);
      System_Collections_Generic_Dictionary<object__Color>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (Il2CppObject *)"controlMark",value,MethodInfo_Void_set_Item);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar3,"tooltip",MethodInfo_GisketchStyleDefinition_get_Item);
        local_62 = 0;
        System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_62,1,MethodInfo_Nullable_1_Boolean);
        if (pIVar4 != (Il2CppObject *)0x0) {
          ppSVar1 = &(__this->fields)._styles;
          *(undefined2 *)&pIVar4[0xb].monitor = local_62;
          if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,
                                "dialog",MethodInfo_GisketchStyleDefinition_get_Item);
            local_64 = 0;
            System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_64,1,MethodInfo_Nullable_1_Boolean);
            if (pIVar4 != (Il2CppObject *)0x0) {
              *(undefined2 *)&pIVar4[0xb].monitor = local_64;
              if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
                  (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)
                                    *ppSVar1,"popover",MethodInfo_GisketchStyleDefinition_get_Item);
                local_66 = 0;
                System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_66,1,MethodInfo_Nullable_1_Boolean);
                if (pIVar4 != (Il2CppObject *)0x0) {
                  *(undefined2 *)&pIVar4[0xb].monitor = local_66;
                  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                  pMVar7 = extraout_RDX;
                  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
                    il2cpp_init_class();
                    pMVar7 = extraout_RDX_00;
                  }
                  pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                     ("icon",(System_String_o *)"text",24.0,pMVar7);
                  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary<object__object>__set_Item
                              (pSVar3,(Il2CppObject *)"icon",(Il2CppObject *)pGVar5,
                               MethodInfo_Void_set_Item);
                    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
                    pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                       ("spriteButton","clear",48.0,method_00);
                    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      local_38 = __this;
                      System_Collections_Generic_Dictionary<object__object>__set_Item
                                (pSVar3,(Il2CppObject *)"spriteButton",(Il2CppObject *)pGVar5,
                                 MethodInfo_Void_set_Item);
                      if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
                          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                           ((System_Collections_Generic_Dictionary_object__object__o
                                             *)*ppSVar1,(Il2CppObject *)"spriteButton",MethodInfo_GisketchStyleDefinition_get_Item);
                        if (DAT_0570135b == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                          il2cpp_init_method_metadata(&"point");
                          DAT_0570135b = '\x01';
                        }
                        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                 il2cpp_runtime_glue(TypeInfo_GisketchLength);
                        Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
                        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                          (pGVar6->fields).value = 48.0;
                          (pGVar6->fields).unit = "point";
                          il2cpp_runtime_glue(&(pGVar6->fields).unit);
                          if (pIVar4 != (Il2CppObject *)0x0) {
                            pIVar4[7].monitor = pGVar6;
                            il2cpp_runtime_glue(&pIVar4[7].monitor,pGVar6);
                            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     *ppSVar1;
                            pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                               ("separator","primary",2.0,method_01);
                            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *
                                          )0x0) {
                              System_Collections_Generic_Dictionary<object__object>__set_Item
                                        (pSVar3,(Il2CppObject *)"separator",(Il2CppObject *)pGVar5,
                                         MethodInfo_Void_set_Item);
                              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       *ppSVar1;
                              pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                 ("dropdown","clear",42.0,method_02);
                              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o
                                             *)0x0) {
                                System_Collections_Generic_Dictionary<object__object>__set_Item
                                          (pSVar3,(Il2CppObject *)"dropdown",
                                           (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         *ppSVar1;
                                pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                   ("select","clear",42.0,method_03);
                                if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o
                                               *)0x0) {
                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                            (pSVar3,(Il2CppObject *)"select",
                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o
                                            *)*ppSVar1;
                                  pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle
                                                     ("dropdownItem",0,method_04);
                                  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o
                                                 *)0x0) {
                                    System_Collections_Generic_Dictionary<object__object>__set_Item
                                              (pSVar3,(Il2CppObject *)"dropdownItem",
                                               (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o
                                              *)*ppSVar1;
                                    pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle
                                                       ("searchResultItem",1,method_05);
                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                      System_Collections_Generic_Dictionary<object__object>__set_Item
                                                (pSVar3,(Il2CppObject *)"searchResultItem",
                                                 (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o
                                                *)*ppSVar1;
                                      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                                               il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                      Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                (pGVar5,(MethodInfo *)0x0);
                                      if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                        (pGVar5->fields).name = "callout";
                                        il2cpp_runtime_glue(&pGVar5->fields);
                                        (pGVar5->fields).background = "surface";
                                        il2cpp_runtime_glue(&(pGVar5->fields).background);
                                        local_40.hasValue = 0;
                                        local_40.value = 0.0;
                                        System_Nullable<float>___ctor
                                                  ((System_Nullable_float__o)&local_40,0.0,
                                                   MethodInfo_Nullable_1_Single);
                                        (pGVar5->fields).padding.fields = local_40;
                                        local_48.hasValue = 0;
                                        local_48.value = 0.0;
                                        System_Nullable<float>___ctor
                                                  ((System_Nullable_float__o)&local_48,12.0,
                                                   MethodInfo_Nullable_1_Single);
                                        (pGVar5->fields).gap.fields = local_48;
                                        local_68 = 0;
                                        System_Nullable<bool>___ctor
                                                  ((System_Nullable_bool__o)&local_68,1,MethodInfo_Nullable_1_Boolean
                                                  );
                                        *(undefined2 *)&(pGVar5->fields).textured.fields.hasValue =
                                             local_68;
                                        local_6a = 0;
                                        System_Nullable<bool>___ctor
                                                  ((System_Nullable_bool__o)&local_6a,1,MethodInfo_Nullable_1_Boolean
                                                  );
                                        *(undefined2 *)
                                         ((long)&(pGVar5->fields).textured.fields.hasValue + 2) =
                                             local_6a;
                                        local_50 = 0;
                                        System_Nullable<float>___ctor
                                                  ((System_Nullable_float__o)&local_50,4.0,
                                                   MethodInfo_Nullable_1_Single);
                                        *(undefined8 *)&(pGVar5->fields).textured.fields.value =
                                             local_50;
                                        local_58 = 0;
                                        System_Nullable<float>___ctor
                                                  ((System_Nullable_float__o)&local_58,0.0,
                                                   MethodInfo_Nullable_1_Single);
                                        *(undefined8 *)&(pGVar5->fields).worn.fields.value =
                                             local_58;
                                        if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                          System_Collections_Generic_Dictionary<object__object>__set_Item
                                                    (pSVar3,(Il2CppObject *)"callout",
                                                     (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                          pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                          pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("calloutText","textMuted",
                                                             (System_String_o *)"text",400,
                                                             18.0,in_R8);
                                          if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                            System_Collections_Generic_Dictionary<object__object>__set_Item
                                                      (pSVar3,(Il2CppObject *)"calloutText",
                                                       (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                            if ((System_Collections_Generic_Dictionary_object__object__o
                                                 *)*ppSVar1 !=
                                                (System_Collections_Generic_Dictionary_object__object__o
                                                 *)0x0) {
                                              pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1,(Il2CppObject *)"calloutText",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                              if (pIVar4 != (Il2CppObject *)0x0) {
                                                pIVar4[4].klass = "italic";
                                                il2cpp_runtime_glue(pIVar4 + 4);
                                                if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                  pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1,(Il2CppObject *)"calloutText",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_60 = (void *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_60,
                                                             12.0,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[5].monitor = local_60;
                                                    pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("calloutBorderPrimary","primary",42.0,
                                                             method_06);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"calloutBorderPrimary",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("calloutBorderSuccess","success",42.0,
                                                             method_07);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"calloutBorderSuccess",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("calloutBorderWarning","warning",42.0,
                                                             method_08);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"calloutBorderWarning",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ((System_String_o *)"calloutBorderError",
                                                             "destructive",42.0,method_09);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pMVar7 = "calloutBorderError";
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"calloutBorderError",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__CopyInputStyle
                                                            ("textArea",118.0,pMVar7);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"textArea",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("slider","clear",48.0,
                                                             method_10);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"slider",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("sliderTrack","engravedBg",18.0,
                                                             method_11);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"sliderTrack",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("sliderFill","primary","header",
                                                             400,1.0,18.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"sliderFill",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("sliderThumb","surfaceSoft","header",
                                                             400,1.0,24.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"sliderThumb",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1,(Il2CppObject *)"sliderThumb",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  if (DAT_0570135b == '\0') {
                                                    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                    il2cpp_init_method_metadata(&"point");
                                                    DAT_0570135b = '\x01';
                                                  }
                                                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                            *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 24.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    if (pIVar4 != (Il2CppObject *)0x0) {
                                                      pIVar4[7].monitor = pGVar6;
                                                      il2cpp_runtime_glue(&pIVar4[7].monitor,pGVar6);
                                                      if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1,(Il2CppObject *)"sliderThumb",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[2].klass = "text";
                                                    il2cpp_runtime_glue(pIVar4 + 2);
                                                    pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("sliderValue","textMuted",
                                                             (System_String_o *)"text",500,
                                                             18.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"sliderValue",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("checkbox","clear",42.0,
                                                             method_12);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"checkbox",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("radio","clear",42.0,
                                                             method_13);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"radio",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("checkBox","engravedBg",26.0,
                                                             method_14);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"checkBox",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("checkMark","controlMark",16.0,
                                                             method_15);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"checkMark",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("switch","clear",42.0,
                                                             method_16);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"switch",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1,(Il2CppObject *)"switch",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  if (DAT_0570135b == '\0') {
                                                    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                    il2cpp_init_method_metadata(&"point");
                                                    DAT_0570135b = '\x01';
                                                  }
                                                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                            *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 58.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    if (pIVar4 != (Il2CppObject *)0x0) {
                                                      pIVar4[7].monitor = pGVar6;
                                                      il2cpp_runtime_glue(&pIVar4[7].monitor,pGVar6);
                                                      pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
                                                            ("switchTrack","engravedBg",26.0,
                                                             method_17);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"switchTrack",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1,(Il2CppObject *)"switchTrack",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  if (DAT_0570135b == '\0') {
                                                    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                    il2cpp_init_method_metadata(&"point");
                                                    DAT_0570135b = '\x01';
                                                  }
                                                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                            *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 52.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    if (pIVar4 != (Il2CppObject *)0x0) {
                                                      pIVar4[7].monitor = pGVar6;
                                                      il2cpp_runtime_glue(&pIVar4[7].monitor,pGVar6);
                                                      pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("switchThumb","surfaceSoft","header",
                                                             400,1.0,22.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"switchThumb",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1,(Il2CppObject *)"switchThumb",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  if (DAT_0570135b == '\0') {
                                                    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                    il2cpp_init_method_metadata(&"point");
                                                    DAT_0570135b = '\x01';
                                                  }
                                                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                            *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 22.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    if (pIVar4 != (Il2CppObject *)0x0) {
                                                      pIVar4[7].monitor = pGVar6;
                                                      il2cpp_runtime_glue(&pIVar4[7].monitor,pGVar6);
                                                      pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar1;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ((System_String_o *)"controlLabel",
                                                             (System_String_o *)"text",
                                                             (System_String_o *)"text",400,
                                                             19.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pMVar7 = "controlLabel";
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"controlLabel",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  __this_00 = local_38;
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastDefaults
                                                            (local_38,pMVar7);
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__AddMainMenuDefaults
                                                            (__this_00,pMVar7);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddToastDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x3acfc20

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Il2CppObject *pIVar4;
  MethodInfo *in_R8;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  System_Nullable_float__Fields local_50;
  System_Nullable_float__Fields local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (DAT_0570134f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchStyleDefinition_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"toastTitle");
    il2cpp_init_method_metadata(&"primary");
    il2cpp_init_method_metadata(&"Workshop");
    il2cpp_init_method_metadata(&"surface");
    il2cpp_init_method_metadata(&"toastContent");
    il2cpp_init_method_metadata(&"Warning");
    il2cpp_init_method_metadata(&"balloon");
    il2cpp_init_method_metadata(&"success");
    il2cpp_init_method_metadata(&"Success");
    il2cpp_init_method_metadata(&"destructive");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"toastContentPanel");
    il2cpp_init_method_metadata(&"header");
    il2cpp_init_method_metadata(&"toastCloseButton");
    il2cpp_init_method_metadata(&"toast");
    il2cpp_init_method_metadata(&"negative");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"workshop");
    il2cpp_init_method_metadata(&"textMuted");
    il2cpp_init_method_metadata(&"Error");
    il2cpp_init_method_metadata(&"Information");
    DAT_0570134f = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar2->fields).name = "toast";
    il2cpp_runtime_glue(&pGVar2->fields);
    (pGVar2->fields).background = "surface";
    il2cpp_runtime_glue(&(pGVar2->fields).background);
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570135b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570135b = '\x01';
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar3->fields).value = 520.0;
      (pGVar3->fields).unit = "point";
      il2cpp_runtime_glue(&(pGVar3->fields).unit);
      (pGVar2->fields).width = pGVar3;
      il2cpp_runtime_glue(&(pGVar2->fields).width,pGVar3);
      (pGVar2->fields).motion = "balloon";
      il2cpp_runtime_glue(&(pGVar2->fields).motion);
      local_52 = 0;
      System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_52,1,MethodInfo_Nullable_1_Boolean);
      *(undefined2 *)&(pGVar2->fields).textured.fields.hasValue = local_52;
      local_54 = 0;
      System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_54,1,MethodInfo_Nullable_1_Boolean);
      *(undefined2 *)((long)&(pGVar2->fields).textured.fields.hasValue + 2) = local_54;
      local_38 = 0;
      System_Nullable<float>___ctor((System_Nullable_float__o)&local_38,4.0,MethodInfo_Nullable_1_Single);
      *(undefined8 *)&(pGVar2->fields).textured.fields.value = local_38;
      local_40 = 0;
      System_Nullable<float>___ctor((System_Nullable_float__o)&local_40,1.0,MethodInfo_Nullable_1_Single);
      *(undefined8 *)&(pGVar2->fields).worn.fields.value = local_40;
      local_56 = 0;
      System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_56,1,MethodInfo_Nullable_1_Boolean);
      *(undefined2 *)&(pGVar2->fields).reliefGradient.fields.hasValue = local_56;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)"toast",(Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles
        ;
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
        Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          (pGVar2->fields).name = "toastContentPanel";
          il2cpp_runtime_glue(&pGVar2->fields);
          (pGVar2->fields).background = "clear";
          il2cpp_runtime_glue(&(pGVar2->fields).background);
          local_48.hasValue = 0;
          local_48.value = 0.0;
          System_Nullable<float>___ctor((System_Nullable_float__o)&local_48,12.0,MethodInfo_Nullable_1_Single);
          (pGVar2->fields).padding.fields = local_48;
          local_50.hasValue = 0;
          local_50.value = 0.0;
          System_Nullable<float>___ctor((System_Nullable_float__o)&local_50,6.0,MethodInfo_Nullable_1_Single);
          (pGVar2->fields).gap.fields = local_50;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar1,(Il2CppObject *)"toastContentPanel",(Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._styles;
            pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                               ("toastTitle","text","header",400,22.0,in_R8);
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar1,(Il2CppObject *)"toastTitle",(Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._styles;
              pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                 ("toastContent","textMuted","text",400,18.0,in_R8);
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary<object__object>__set_Item
                          (pSVar1,(Il2CppObject *)"toastContent",(Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._styles;
                pGVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                   ("toastCloseButton","primary","header",400,1.0,34.0,in_R8);
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary<object__object>__set_Item
                            (pSVar1,(Il2CppObject *)"toastCloseButton",(Il2CppObject *)pGVar2,MethodInfo_Void_set_Item
                            );
                  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._styles;
                  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                       (pSVar1,(Il2CppObject *)"toastCloseButton",MethodInfo_GisketchStyleDefinition_get_Item);
                    if (DAT_0570135b == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                      il2cpp_init_method_metadata(&"point");
                      DAT_0570135b = '\x01';
                    }
                    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
                             il2cpp_runtime_glue(TypeInfo_GisketchLength);
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                      (pGVar3->fields).value = 34.0;
                      (pGVar3->fields).unit = "point";
                      il2cpp_runtime_glue(&(pGVar3->fields).unit);
                      if (pIVar4 != (Il2CppObject *)0x0) {
                        pIVar4[7].monitor = pGVar3;
                        il2cpp_runtime_glue(&pIVar4[7].monitor,pGVar3);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Error","destructive","destructive",in_R8);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Warning","warning","warning",in_R8);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Information","negative","negative",in_R8);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Workshop","workshop","workshop",in_R8);
                        Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant
                                  (__this,"Success","success","success",in_R8);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddToastVariant
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddToastVariant (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* suffix, System_String_o* border, System_String_o* icon, const MethodInfo* method);
// 0x3ad4930

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
  
  if (DAT_05701350 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&"toastIcon");
    il2cpp_init_method_metadata(&"toastBorder");
    DAT_05701350 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pSVar2 = System_String__Concat("toastBorder",suffix,(MethodInfo *)0x0);
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat("toastBorder",suffix,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar3->fields).name = pSVar4;
    il2cpp_runtime_glue(&pGVar3->fields,pSVar4);
    (pGVar3->fields).background = border;
    il2cpp_runtime_glue(&(pGVar3->fields).background);
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570135b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570135b = '\x01';
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar5->fields).value = 6.0;
      (pGVar5->fields).unit = "point";
      il2cpp_runtime_glue(&(pGVar5->fields).unit);
      (pGVar3->fields).width = pGVar5;
      il2cpp_runtime_glue(&(pGVar3->fields).width);
      if (DAT_05701355 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
        il2cpp_init_method_metadata(&"percent");
        DAT_05701355 = '\x01';
      }
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar5->fields).value = 100.0;
        (pGVar5->fields).unit = "percent";
        il2cpp_runtime_glue(&(pGVar5->fields).unit);
        (pGVar3->fields).height = pGVar5;
        il2cpp_runtime_glue(&(pGVar3->fields).height,pGVar5);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar3,MethodInfo_Void_set_Item);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._styles;
          pSVar2 = System_String__Concat("toastIcon",suffix,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat("toastIcon",suffix,(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle(pSVar4,icon,24.0,method_00);
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar3,MethodInfo_Void_set_Item);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyInputStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__CopyInputStyle (System_String_o* name, float height, const MethodInfo* method);
// 0x3acf610

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__CopyInputStyle
          (System_String_o *name,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  undefined2 local_58;
  undefined2 local_56;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  System_Nullable_float__Fields local_40;
  System_Nullable_float__Fields local_38;
  System_Nullable_int__Fields local_30;
  
  local_54 = height;
  if (DAT_05701351 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"engravedBg");
    DAT_05701351 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    il2cpp_runtime_glue(&__this->fields,name);
    (__this->fields).background = "engravedBg";
    il2cpp_runtime_glue(&(__this->fields).background);
    (__this->fields).textColor = "text";
    il2cpp_runtime_glue(&(__this->fields).textColor);
    (__this->fields).fontFamily = "text";
    il2cpp_runtime_glue(&(__this->fields).fontFamily);
    local_30.hasValue = 0;
    local_30.value = 0;
    System_Nullable<int>___ctor((System_Nullable_int__o)&local_30,400,MethodInfo_Nullable_1_Int32);
    (__this->fields).fontWeight.fields = local_30;
    local_38.hasValue = 0;
    local_38.value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_38,19.0,MethodInfo_Nullable_1_Single);
    (__this->fields).fontSize.fields = local_38;
    local_40.hasValue = 0;
    local_40.value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_40,12.0,MethodInfo_Nullable_1_Single);
    (__this->fields).padding.fields = local_40;
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570135b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570135b = '\x01';
    }
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar1->fields).value = 280.0;
      (pGVar1->fields).unit = "point";
      il2cpp_runtime_glue(&(pGVar1->fields).unit);
      (__this->fields).width = pGVar1;
      il2cpp_runtime_glue(&(__this->fields).width);
      if (DAT_0570135b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
        il2cpp_init_method_metadata(&"point");
        DAT_0570135b = '\x01';
      }
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar1->fields).value = local_54;
        (pGVar1->fields).unit = "point";
        il2cpp_runtime_glue(&(pGVar1->fields).unit);
        (__this->fields).height = pGVar1;
        il2cpp_runtime_glue(&(__this->fields).height,pGVar1);
        local_56 = 0;
        System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_56,1,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)&(__this->fields).textured.fields.hasValue = local_56;
        local_58 = 0;
        System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_58,1,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)((long)&(__this->fields).textured.fields.hasValue + 2) = local_58;
        local_48 = 0;
        System_Nullable<float>___ctor((System_Nullable_float__o)&local_48,4.0,MethodInfo_Nullable_1_Single);
        *(undefined8 *)&(__this->fields).textured.fields.value = local_48;
        local_50 = 0;
        System_Nullable<float>___ctor((System_Nullable_float__o)&local_50,-1.0,MethodInfo_Nullable_1_Single);
        *(undefined8 *)&(__this->fields).worn.fields.value = local_50;
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ControlStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle (System_String_o* name, System_String_o* background, float height, const MethodInfo* method);
// 0x3acef70

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__ControlStyle
          (System_String_o *name,System_String_o *background,float height,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  float value;
  undefined2 local_34;
  undefined2 local_32;
  undefined8 local_30;
  float local_24;
  
  local_24 = height;
  if (DAT_05701352 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"inputBg");
    il2cpp_init_method_metadata(&"engravedBg");
    DAT_05701352 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
LAB_03acf1f1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (__this->fields).name = name;
  il2cpp_runtime_glue(&__this->fields,name);
  (__this->fields).background = background;
  il2cpp_runtime_glue(&(__this->fields).background);
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570135b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"point");
    DAT_0570135b = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto LAB_03acf1f1;
  (__this_00->fields).value = local_24;
  (__this_00->fields).unit = "point";
  il2cpp_runtime_glue(&(__this_00->fields).unit);
  (__this->fields).height = __this_00;
  il2cpp_runtime_glue(&(__this->fields).height,__this_00);
  uVar1 = System_String__op_Inequality(background,"clear",(MethodInfo *)0x0);
  local_32 = 0;
  System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_32,uVar1 & 0xff,MethodInfo_Nullable_1_Boolean);
  *(undefined2 *)&(__this->fields).textured.fields.hasValue = local_32;
  local_34 = 0;
  System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_34,1,MethodInfo_Nullable_1_Boolean);
  *(undefined2 *)((long)&(__this->fields).textured.fields.hasValue + 2) = local_34;
  local_30 = 0;
  System_Nullable<float>___ctor((System_Nullable_float__o)&local_30,4.0,MethodInfo_Nullable_1_Single);
  *(undefined8 *)&(__this->fields).textured.fields.value = local_30;
  bVar2 = System_String__op_Equality(background,"inputBg",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(background,"engravedBg",(MethodInfo *)0x0);
    value = 0.0;
    if ((char)bVar2 == '\0') goto LAB_03acf1a8;
  }
  value = -1.0;
LAB_03acf1a8:
  local_30 = 0;
  System_Nullable<float>___ctor((System_Nullable_float__o)&local_30,value,MethodInfo_Nullable_1_Single);
  *(undefined8 *)&(__this->fields).worn.fields.value = local_30;
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$IconStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle (System_String_o* name, System_String_o* color, float size, const MethodInfo* method);
// 0x3aceda0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
          (System_String_o *name,System_String_o *color,float size,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  
  if (DAT_05701353 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    DAT_05701353 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    il2cpp_runtime_glue(&__this->fields,name);
    (__this->fields).textColor = color;
    il2cpp_runtime_glue(&(__this->fields).textColor);
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570135b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570135b = '\x01';
    }
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar1->fields).value = size;
      (pGVar1->fields).unit = "point";
      il2cpp_runtime_glue(&(pGVar1->fields).unit);
      (__this->fields).width = pGVar1;
      il2cpp_runtime_glue(&(__this->fields).width);
      if (DAT_0570135b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
        il2cpp_init_method_metadata(&"point");
        DAT_0570135b = '\x01';
      }
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar1->fields).value = size;
        (pGVar1->fields).unit = "point";
        il2cpp_runtime_glue(&(pGVar1->fields).unit);
        (__this->fields).height = pGVar1;
        il2cpp_runtime_glue(&(__this->fields).height,pGVar1);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$DropdownItemStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle (System_String_o* name, bool leftAligned, const MethodInfo* method);
// 0x3acf290

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__DropdownItemStyle
          (System_String_o *name,bool_conflict leftAligned,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  System_String_o *pSVar1;
  System_Nullable_float__Fields local_38;
  System_Nullable_float__Fields local_30;
  System_Nullable_int__Fields local_28;
  
  if (DAT_05701354 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"left");
    il2cpp_init_method_metadata(&"header");
    il2cpp_init_method_metadata(&"text");
    DAT_05701354 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    il2cpp_runtime_glue(&__this->fields,name);
    (__this->fields).background = "clear";
    il2cpp_runtime_glue(&(__this->fields).background);
    (__this->fields).textColor = "text";
    il2cpp_runtime_glue(&(__this->fields).textColor);
    (__this->fields).fontFamily = "header";
    il2cpp_runtime_glue(&(__this->fields).fontFamily);
    local_28.hasValue = 0;
    local_28.value = 0;
    System_Nullable<int>___ctor((System_Nullable_int__o)&local_28,400,MethodInfo_Nullable_1_Int32);
    (__this->fields).fontWeight.fields = local_28;
    local_30.hasValue = 0;
    local_30.value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_30,20.0,MethodInfo_Nullable_1_Single);
    (__this->fields).fontSize.fields = local_30;
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570135b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570135b = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 38.0;
      (__this_00->fields).unit = "point";
      il2cpp_runtime_glue(&(__this_00->fields).unit);
      (__this->fields).height = __this_00;
      il2cpp_runtime_glue(&(__this->fields).height,__this_00);
      local_38.hasValue = 0;
      local_38.value = 0.0;
      System_Nullable<float>___ctor((System_Nullable_float__o)&local_38,12.0,MethodInfo_Nullable_1_Single);
      (__this->fields).paddingX.fields = local_38;
      pSVar1 = "left";
      if ((char)leftAligned == '\0') {
        pSVar1 = (System_String_o *)0x0;
      }
      (__this->fields).textAlignment = pSVar1;
      il2cpp_runtime_glue(&(__this->fields).textAlignment);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$Percent
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Styling_GisketchTheme__Percent (float value, const MethodInfo* method);
// 0x3ad4bc0

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__Percent(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (DAT_05701355 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"percent");
    DAT_05701355 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "percent";
    il2cpp_runtime_glue(&(__this->fields).unit);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x3ad4c50

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_Fields *pGVar1;
  System_Collections_Generic_Dictionary_string__Color__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionToken_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_R8;
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o **ppSVar8;
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
  UnityEngine_Color_o value_09;
  UnityEngine_Color_o value_10;
  UnityEngine_Color_o value_11;
  UnityEngine_Color_o value_12;
  UnityEngine_Color_o UVar9;
  UnityEngine_Color_o value_13;
  UnityEngine_Color_o value_14;
  UnityEngine_Color_o value_15;
  UnityEngine_Color_o value_16;
  undefined2 local_1b0;
  undefined2 local_1ae;
  undefined2 local_1ac;
  undefined2 local_1aa;
  undefined2 local_1a8;
  undefined2 local_1a6;
  undefined2 local_1a4;
  undefined2 local_1a2;
  undefined2 local_1a0;
  undefined2 local_19e;
  undefined2 local_19c;
  undefined2 local_19a;
  undefined2 local_198;
  undefined2 local_196;
  undefined2 local_194;
  undefined2 local_192;
  undefined2 local_190;
  undefined2 local_18e;
  undefined2 local_18c;
  undefined2 local_18a;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *local_188;
  undefined8 local_180;
  undefined8 local_178;
  System_Nullable_float__Fields local_170;
  System_Nullable_float__Fields local_168;
  System_Nullable_int__Fields local_160;
  undefined8 local_158;
  undefined8 local_150;
  System_Nullable_float__Fields local_148;
  System_Nullable_float__Fields local_140;
  undefined8 local_138;
  System_Nullable_float__Fields local_130;
  System_Nullable_float__Fields local_128;
  undefined8 local_120;
  System_Nullable_float__Fields local_118;
  System_Nullable_float__Fields local_110;
  System_Nullable_float__Fields local_108;
  System_Nullable_float__Fields local_100;
  System_Nullable_float__Fields local_f8;
  System_Nullable_float__Fields local_f0;
  System_Nullable_float__Fields local_e8;
  System_Nullable_float__Fields local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  System_Nullable_float__Fields local_c8;
  System_Nullable_float__Fields local_c0;
  undefined8 local_b8;
  System_Nullable_float__Fields local_b0;
  System_Nullable_float__Fields local_a8;
  undefined8 local_a0;
  System_Nullable_float__Fields local_98;
  System_Nullable_float__Fields local_90;
  undefined8 local_88;
  undefined8 local_80;
  System_Nullable_float__Fields local_78;
  System_Nullable_float__Fields local_70;
  System_Nullable_float__Fields local_68;
  System_Nullable_float__Fields local_60;
  System_Nullable_float__Fields local_58;
  System_Nullable_float__Fields local_50;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40;
  System_Nullable_int__Fields local_38;
  
  if (DAT_05701356 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchStyleDefinition_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Color_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionToken);
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"dialogTitleIconNegative");
    il2cpp_init_method_metadata(&"profileCardBannerBg");
    il2cpp_init_method_metadata(&"dialogTitleBar");
    il2cpp_init_method_metadata(&"stepper");
    il2cpp_init_method_metadata(&"muted");
    il2cpp_init_method_metadata(&"primary");
    il2cpp_init_method_metadata(&"Workshop");
    il2cpp_init_method_metadata(&"buttonSecondary");
    il2cpp_init_method_metadata(&"surface");
    il2cpp_init_method_metadata(&"buttonPrimary");
    il2cpp_init_method_metadata(&"scrollbar");
    il2cpp_init_method_metadata(&"Quiet");
    il2cpp_init_method_metadata(&"skeletonPulse");
    il2cpp_init_method_metadata(&"dialogTitleIcon");
    il2cpp_init_method_metadata(&"subtext");
    il2cpp_init_method_metadata(&"screen");
    il2cpp_init_method_metadata(&"accent2");
    il2cpp_init_method_metadata(&"tooltipText");
    il2cpp_init_method_metadata(&"dialog");
    il2cpp_init_method_metadata(&"Negative");
    il2cpp_init_method_metadata(&"profileCardAvatarBg");
    il2cpp_init_method_metadata(&"secondaryButton");
    il2cpp_init_method_metadata(&"balloon");
    il2cpp_init_method_metadata(&"screenFlush");
    il2cpp_init_method_metadata(&"success");
    il2cpp_init_method_metadata(&"primaryButton");
    il2cpp_init_method_metadata(&"scrollbarThumb");
    il2cpp_init_method_metadata(&"accent");
    il2cpp_init_method_metadata(&"slide");
    il2cpp_init_method_metadata(&"inputPlaceholder");
    il2cpp_init_method_metadata(&"destructive");
    il2cpp_init_method_metadata(&"scrollView");
    il2cpp_init_method_metadata(&"buttonPlain");
    il2cpp_init_method_metadata(&"screenSlide");
    il2cpp_init_method_metadata(&"void");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"panelSoft");
    il2cpp_init_method_metadata(&"dialogTitleTextNegative");
    il2cpp_init_method_metadata(&"Secondary");
    il2cpp_init_method_metadata(&"card");
    il2cpp_init_method_metadata(&"pop");
    il2cpp_init_method_metadata(&"Danger");
    il2cpp_init_method_metadata(&"skeletonBase");
    il2cpp_init_method_metadata(&"dialogHeader");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"inputField");
    il2cpp_init_method_metadata(&"buttonWorkshop");
    il2cpp_init_method_metadata(&"surfaceSoft");
    il2cpp_init_method_metadata(&"tooltip");
    il2cpp_init_method_metadata(&"dialogFooter");
    il2cpp_init_method_metadata(&"header");
    il2cpp_init_method_metadata(&"buttonDanger");
    il2cpp_init_method_metadata(&"brushSidePanelOutline");
    il2cpp_init_method_metadata(&"negative");
    il2cpp_init_method_metadata(&"dialogTitleCloseButton");
    il2cpp_init_method_metadata(&"skeleton");
    il2cpp_init_method_metadata(&"paper");
    il2cpp_init_method_metadata(&"dialogTitleIconQuiet");
    il2cpp_init_method_metadata(&"inputBg");
    il2cpp_init_method_metadata(&"dialogBody");
    il2cpp_init_method_metadata(&"tooltipBg");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"buttonText");
    il2cpp_init_method_metadata(&"workshop");
    il2cpp_init_method_metadata(&"negativeText");
    il2cpp_init_method_metadata(&"buttonNegative");
    il2cpp_init_method_metadata(&"profileCardAvatarBorder");
    il2cpp_init_method_metadata(&"panel");
    il2cpp_init_method_metadata(&"focusRing");
    il2cpp_init_method_metadata(&"textMuted");
    il2cpp_init_method_metadata(&"secondary");
    il2cpp_init_method_metadata(&"dialogTitleTextQuiet");
    il2cpp_init_method_metadata(&"row");
    il2cpp_init_method_metadata(&"popover");
    il2cpp_init_method_metadata(&"engravedBg");
    il2cpp_init_method_metadata(&"buttonQuiet");
    il2cpp_init_method_metadata(&"dialogTitleText");
    il2cpp_init_method_metadata(&"ink");
    il2cpp_init_method_metadata(&"dialogTitle");
    DAT_05701356 = '\x01';
  }
  pSVar2 = (__this->fields)._colors;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
    pGVar1 = &__this->fields;
    System_Collections_Generic_Dictionary<object__Color>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               (Il2CppObject *)"clear",(UnityEngine_Color_o)ZEXT816(0),MethodInfo_Void_set_Item);
    if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      UVar9.fields.b = 0.2;
      UVar9.fields.a = 1.0;
      UVar9.fields.r = 0.71;
      UVar9.fields.g = 0.18;
      System_Collections_Generic_Dictionary<object__Color>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                 (Il2CppObject *)"primary",UVar9,MethodInfo_Void_set_Item);
      if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
        value.fields.b = 0.13;
        value.fields.a = 1.0;
        value.fields.r = 0.84;
        value.fields.g = 0.1;
        System_Collections_Generic_Dictionary<object__Color>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                   (Il2CppObject *)"destructive",value,MethodInfo_Void_set_Item);
        if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          value_00.fields.b = 0.65;
          value_00.fields.a = 1.0;
          value_00.fields.r = 0.44;
          value_00.fields.g = 0.29;
          System_Collections_Generic_Dictionary<object__Color>__set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                     (Il2CppObject *)"secondary",value_00,MethodInfo_Void_set_Item);
          if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
            value_01.fields.b = 0.82;
            value_01.fields.a = 1.0;
            value_01.fields.r = 0.0;
            value_01.fields.g = 0.68;
            System_Collections_Generic_Dictionary<object__Color>__set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                       (Il2CppObject *)"workshop",value_01,MethodInfo_Void_set_Item);
            if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
              value_02.fields.b = 0.08;
              value_02.fields.a = 1.0;
              value_02.fields.r = 0.92;
              value_02.fields.g = 0.64;
              System_Collections_Generic_Dictionary<object__Color>__set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                         "warning",value_02,MethodInfo_Void_set_Item);
              if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0)
              {
                value_03.fields.b = 0.32;
                value_03.fields.a = 1.0;
                value_03.fields.r = 0.12;
                value_03.fields.g = 0.62;
                System_Collections_Generic_Dictionary<object__Color>__set_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1->_colors,
                           "success",value_03,MethodInfo_Void_set_Item);
                if (pGVar1->_colors != (System_Collections_Generic_Dictionary_string__Color__o *)0x0
                   ) {
                  value_04.fields.b = 1.0;
                  value_04.fields.a = 1.0;
                  value_04.fields.r = 1.0;
                  value_04.fields.g = 1.0;
                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             pGVar1->_colors,(Il2CppObject *)"surface",value_04,MethodInfo_Void_set_Item);
                  if (pGVar1->_colors !=
                      (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                    value_05.fields.b = 0.95;
                    value_05.fields.a = 1.0;
                    value_05.fields._0_8_ = 0x3f7333333f733333;
                    System_Collections_Generic_Dictionary<object__Color>__set_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                               pGVar1->_colors,(Il2CppObject *)"surfaceSoft",value_05,MethodInfo_Void_set_Item);
                    if (pGVar1->_colors !=
                        (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                      value_06.fields.b = 0.02;
                      value_06.fields.a = 1.0;
                      value_06.fields.r = 0.02;
                      value_06.fields.g = 0.02;
                      System_Collections_Generic_Dictionary<object__Color>__set_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                 pGVar1->_colors,(Il2CppObject *)"text",value_06,MethodInfo_Void_set_Item)
                      ;
                      if (pGVar1->_colors !=
                          (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                        value_07.fields.b = 0.2;
                        value_07.fields.a = 1.0;
                        value_07.fields.r = 0.2;
                        value_07.fields.g = 0.2;
                        System_Collections_Generic_Dictionary<object__Color>__set_Item
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                   pGVar1->_colors,(Il2CppObject *)"textMuted",value_07,
                                   MethodInfo_Void_set_Item);
                        if (pGVar1->_colors !=
                            (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                          value_08.fields.b = 1.0;
                          value_08.fields.a = 1.0;
                          value_08.fields.r = 1.0;
                          value_08.fields.g = 1.0;
                          System_Collections_Generic_Dictionary<object__Color>__set_Item
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                     pGVar1->_colors,(Il2CppObject *)"buttonText",value_08,
                                     MethodInfo_Void_set_Item);
                          if (pGVar1->_colors !=
                              (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                            System_Collections_Generic_Dictionary<object__Color>__set_Item
                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                       pGVar1->_colors,(Il2CppObject *)"negative",
                                       (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                                       MethodInfo_Void_set_Item);
                            if (pGVar1->_colors !=
                                (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                              value_09.fields.b = 1.0;
                              value_09.fields.a = 1.0;
                              value_09.fields.r = 1.0;
                              value_09.fields.g = 1.0;
                              System_Collections_Generic_Dictionary<object__Color>__set_Item
                                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                         pGVar1->_colors,(Il2CppObject *)"negativeText",value_09,
                                         MethodInfo_Void_set_Item);
                              if (pGVar1->_colors !=
                                  (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                value_10.fields.b = 0.94;
                                value_10.fields.a = 1.0;
                                value_10.fields.r = 0.94;
                                value_10.fields.g = 0.94;
                                System_Collections_Generic_Dictionary<object__Color>__set_Item
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                           pGVar1->_colors,"inputBg",value_10,MethodInfo_Void_set_Item);
                                if (pGVar1->_colors !=
                                    (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                                  value_11.fields.b = 0.85;
                                  value_11.fields.a = 1.0;
                                  value_11.fields.r = 0.85;
                                  value_11.fields.g = 0.85;
                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o
                                              *)pGVar1->_colors,(Il2CppObject *)"engravedBg",
                                             value_11,MethodInfo_Void_set_Item);
                                  if (pGVar1->_colors !=
                                      (System_Collections_Generic_Dictionary_string__Color__o *)0x0)
                                  {
                                    value_12.fields.b = 0.42;
                                    value_12.fields.a = 1.0;
                                    value_12.fields.r = 0.42;
                                    value_12.fields.g = 0.42;
                                    System_Collections_Generic_Dictionary<object__Color>__set_Item
                                              ((System_Collections_Generic_Dictionary_TKey__TValue__o
                                                *)pGVar1->_colors,(Il2CppObject *)"inputPlaceholder",
                                               value_12,MethodInfo_Void_set_Item);
                                    pSVar2 = pGVar1->_colors;
                                    if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                      UVar9 = System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                        ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"primary",MethodInfo_Color_get_Item
                                                  );
                                      System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                ((System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"focusRing",UVar9,MethodInfo_Void_set_Item);
                                      if (pGVar1->_colors !=
                                          (System_Collections_Generic_Dictionary_string__Color__o *)
                                          0x0) {
                                        value_13.fields.b = 0.02;
                                        value_13.fields.a = 0.96;
                                        value_13.fields.r = 0.02;
                                        value_13.fields.g = 0.02;
                                        System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                  ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pGVar1->_colors,(Il2CppObject *)"tooltipBg",
                                                  value_13,MethodInfo_Void_set_Item);
                                        if (pGVar1->_colors !=
                                            (System_Collections_Generic_Dictionary_string__Color__o
                                             *)0x0) {
                                          value_14.fields.b = 1.0;
                                          value_14.fields.a = 1.0;
                                          value_14.fields.r = 1.0;
                                          value_14.fields.g = 1.0;
                                          System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                    ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pGVar1->_colors,(Il2CppObject *)"tooltipText",
                                                  value_14,MethodInfo_Void_set_Item);
                                          if (pGVar1->_colors !=
                                              (System_Collections_Generic_Dictionary_string__Color__o
                                               *)0x0) {
                                            local_188 = __this;
                                            System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                      ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pGVar1->_colors,"void",
                                                  (UnityEngine_Color_o)
                                                  (ZEXT816(0x3f80000000000000) << 0x40),MethodInfo_Void_set_Item
                                                  );
                                            if (pGVar1->_colors !=
                                                (System_Collections_Generic_Dictionary_string__Color__o
                                                 *)0x0) {
                                              System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                        ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pGVar1->_colors,"brushSidePanelOutline",
                                                  (UnityEngine_Color_o)
                                                  (ZEXT816(0x3f80000000000000) << 0x40),MethodInfo_Void_set_Item
                                                  );
                                              pSVar2 = pGVar1->_colors;
                                              if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"surface",MethodInfo_Color_get_Item
                                                  );
                                                System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                          ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"paper",UVar9,
                                                  MethodInfo_Void_set_Item);
                                                pSVar2 = pGVar1->_colors;
                                                if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                  UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"surface",MethodInfo_Color_get_Item
                                                  );
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"panel",UVar9,MethodInfo_Void_set_Item);
                                                  pSVar2 = pGVar1->_colors;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"surfaceSoft",MethodInfo_Color_get_Item
                                                  );
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"panelSoft",UVar9,MethodInfo_Void_set_Item);
                                                  pSVar2 = pGVar1->_colors;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"text",MethodInfo_Color_get_Item
                                                  );
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"ink",UVar9,MethodInfo_Void_set_Item);
                                                  pSVar2 = pGVar1->_colors;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"textMuted",MethodInfo_Color_get_Item
                                                  );
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"muted",UVar9,MethodInfo_Void_set_Item);
                                                  pGVar4 = local_188;
                                                  pSVar2 = pGVar1->_colors;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"engravedBg",MethodInfo_Color_get_Item
                                                  );
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"profileCardAvatarBg",UVar9,MethodInfo_Void_set_Item);
                                                  pSVar2 = pGVar1->_colors;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"surfaceSoft",MethodInfo_Color_get_Item
                                                  );
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"profileCardAvatarBorder",UVar9,MethodInfo_Void_set_Item);
                                                  pSVar2 = pGVar1->_colors;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"engravedBg",MethodInfo_Color_get_Item
                                                  );
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"profileCardBannerBg",UVar9,MethodInfo_Void_set_Item);
                                                  if (pGVar1->_colors !=
                                                      (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    value_15.fields.b = 0.72;
                                                    value_15.fields.a = 1.0;
                                                    value_15.fields.r = 0.72;
                                                    value_15.fields.g = 0.72;
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pGVar1->_colors,(Il2CppObject *)"skeletonBase",
                                                  value_15,MethodInfo_Void_set_Item);
                                                  if (pGVar1->_colors !=
                                                      (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    value_16.fields.b = 0.82;
                                                    value_16.fields.a = 1.0;
                                                    value_16.fields.r = 0.82;
                                                    value_16.fields.g = 0.82;
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pGVar1->_colors,(Il2CppObject *)"skeletonPulse",
                                                  value_16,MethodInfo_Void_set_Item);
                                                  pSVar2 = pGVar1->_colors;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"primary",MethodInfo_Color_get_Item
                                                  );
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"accent",UVar9,MethodInfo_Void_set_Item);
                                                  pSVar2 = pGVar1->_colors;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__Color__o
                                                  *)0x0) {
                                                    UVar9 = 
                                                  System_Collections_Generic_Dictionary<object__Color>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,(Il2CppObject *)"secondary",MethodInfo_Color_get_Item
                                                  );
                                                  System_Collections_Generic_Dictionary<object__Color>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,"accent2",UVar9,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(pGVar4->fields)._motions;
                                                  __this_00 = (
                                                  Gisketch_Aottg2UI_Data_GisketchMotionToken_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchMotionToken);
                                                  Gisketch_Aottg2UI_Data_GisketchMotionToken___ctor
                                                            (__this_00,(MethodInfo *)0x0);
                                                  if (__this_00 !=
                                                      (Gisketch_Aottg2UI_Data_GisketchMotionToken_o
                                                       *)0x0) {
                                                    (__this_00->fields).name = "screenSlide";
                                                    il2cpp_runtime_glue(&__this_00->fields);
                                                    (__this_00->fields).preset = "slide";
                                                    il2cpp_runtime_glue(&(__this_00->fields).preset);
                                                    (__this_00->fields).duration = 0.053;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"screenSlide",
                                                             (Il2CppObject *)__this_00,MethodInfo_Void_set_Item)
                                                  ;
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(pGVar4->fields)._styles;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "default";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    (pGVar5->fields).textColor =
                                                         (System_String_o *)"text";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).textColor);
                                                    (pGVar5->fields).fontFamily =
                                                         (System_String_o *)"text";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).fontFamily)
                                                    ;
                                                    local_38.hasValue = 0;
                                                    local_38.value = 0;
                                                    System_Nullable<int>___ctor
                                                              ((System_Nullable_int__o)&local_38,400
                                                               ,MethodInfo_Nullable_1_Int32);
                                                    (pGVar5->fields).fontWeight.fields = local_38;
                                                    local_40.hasValue = 0;
                                                    local_40.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_40,
                                                               24.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).fontSize.fields = local_40;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    ppSVar8 = &(pGVar4->fields)._styles;
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"default",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "tooltip";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "tooltipBg";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_48.hasValue = 0;
                                                    local_48.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_48,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_48;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"tooltip",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
                                                    il2cpp_init_class();
                                                  }
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("tooltipText","tooltipText",
                                                             (System_String_o *)"text",500,
                                                             16.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"tooltipText",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "screen";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "surface";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_50.hasValue = 0;
                                                    local_50.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_50,
                                                               44.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_50;
                                                    local_58.hasValue = 0;
                                                    local_58.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_58,
                                                               14.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_58;
                                                    (pGVar5->fields).motion = "screenSlide";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).motion);
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"screen",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "screenFlush";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "surface";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_60.hasValue = 0;
                                                    local_60.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_60,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_60;
                                                    local_68.hasValue = 0;
                                                    local_68.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_68,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_68;
                                                    (pGVar5->fields).motion = "screenSlide";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).motion);
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"screenFlush",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "scrollView";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_70.hasValue = 0;
                                                    local_70.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_70,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_70;
                                                    local_78.hasValue = 0;
                                                    local_78.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_78,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_78;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"scrollView",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "scrollbar";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "surfaceSoft";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar6 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 12.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    (pGVar5->fields).width = pGVar6;
                                                    il2cpp_runtime_glue(&(pGVar5->fields).width,
                                                                       pGVar6);
                                                    local_18a = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_18a,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).textured.fields.hasValue =
                                                         local_18a;
                                                    local_18c = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_18c,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar5->fields).textured.fields.
                                                             hasValue + 2) = local_18c;
                                                    local_80 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_80,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).textured.fields.value =
                                                         local_80;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"scrollbar",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "scrollbarThumb";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "primary";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_18e = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_18e,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).textured.fields.hasValue =
                                                         local_18e;
                                                    local_190 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_190,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar5->fields).textured.fields.
                                                             hasValue + 2) = local_190;
                                                    local_88 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_88,
                                                               1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).worn.fields.value = local_88;
                                                    local_192 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_192,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).wornStainScale.fields.value =
                                                         local_192;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"scrollbarThumb",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "card";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "surface";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_90.hasValue = 0;
                                                    local_90.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_90,
                                                               24.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_90;
                                                    local_98.hasValue = 0;
                                                    local_98.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_98,
                                                               12.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_98;
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar6 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 760.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    (pGVar5->fields).width = pGVar6;
                                                    il2cpp_runtime_glue(&(pGVar5->fields).width,
                                                                       pGVar6);
                                                    local_194 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_194,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).textured.fields.hasValue =
                                                         local_194;
                                                    local_196 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_196,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar5->fields).textured.fields.
                                                             hasValue + 2) = local_196;
                                                    local_a0 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_a0,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).textured.fields.value =
                                                         local_a0;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"card",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "row";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "surfaceSoft";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_a8.hasValue = 0;
                                                    local_a8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_a8,
                                                               10.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_a8;
                                                    local_b0.hasValue = 0;
                                                    local_b0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_b0,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_b0;
                                                    local_198 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_198,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).textured.fields.hasValue =
                                                         local_198;
                                                    local_19a = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_19a,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar5->fields).textured.fields.
                                                             hasValue + 2) = local_19a;
                                                    local_b8 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_b8,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).textured.fields.value =
                                                         local_b8;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"row",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "skeleton";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "skeletonBase";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    (pGVar5->fields).textColor = "skeletonPulse";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).textColor);
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"skeleton",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("header",
                                                             (System_String_o *)"text",
                                                             "header",400,44.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"header",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("subtext","textMuted","subtext",
                                                             400,24.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"subtext",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ((System_String_o *)"text",
                                                             "textMuted",
                                                             (System_String_o *)"text",400,
                                                             20.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"text",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "dialog";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "surface";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_c0.hasValue = 0;
                                                    local_c0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_c0,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_c0;
                                                    local_c8.hasValue = 0;
                                                    local_c8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_c8,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_c8;
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar6 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 620.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    (pGVar5->fields).width = pGVar6;
                                                    il2cpp_runtime_glue(&(pGVar5->fields).width,
                                                                       pGVar6);
                                                    (pGVar5->fields).motion = "pop";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).motion);
                                                    local_19c = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_19c,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).textured.fields.hasValue =
                                                         local_19c;
                                                    local_19e = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_19e,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar5->fields).textured.fields.
                                                             hasValue + 2) = local_19e;
                                                    local_d0 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_d0,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).textured.fields.value =
                                                         local_d0;
                                                    local_d8 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_d8,
                                                               1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).worn.fields.value = local_d8;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialog",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "dialogHeader";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_e0.hasValue = 0;
                                                    local_e0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_e0,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_e0;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogHeader",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "dialogBody";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_e8.hasValue = 0;
                                                    local_e8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_e8,
                                                               18.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_e8;
                                                    local_f0.hasValue = 0;
                                                    local_f0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_f0,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_f0;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogBody",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "dialogFooter";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_f8.hasValue = 0;
                                                    local_f8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_f8,
                                                               18.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_f8;
                                                    local_100.hasValue = 0;
                                                    local_100.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_100,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_100;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogFooter",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("dialogTitle",
                                                             (System_String_o *)"text",
                                                             "header",400,34.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogTitle",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "dialogTitleBar";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "primary";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_108.hasValue = 0;
                                                    local_108.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_108,
                                                               18.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).paddingX.fields = local_108;
                                                    local_110.hasValue = 0;
                                                    local_110.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_110,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).paddingY.fields = local_110;
                                                    local_118.hasValue = 0;
                                                    local_118.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_118,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_118;
                                                    local_1a0 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_1a0,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).textured.fields.hasValue =
                                                         local_1a0;
                                                    local_1a2 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_1a2,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar5->fields).textured.fields.
                                                             hasValue + 2) = local_1a2;
                                                    local_120 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_120,
                                                               1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).worn.fields.value = local_120
                                                    ;
                                                    local_1a4 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_1a4,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).wornStainScale.fields.value =
                                                         local_1a4;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogTitleBar",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("dialogTitleText","buttonText","header",
                                                             400,26.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogTitleText",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("dialogTitleTextQuiet",
                                                             (System_String_o *)"text",
                                                             "header",400,26.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogTitleTextQuiet",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("dialogTitleTextNegative",
                                                             (System_String_o *)"negativeText",
                                                             "header",400,26.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogTitleTextNegative",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                                            ("dialogTitleIcon","buttonText",24.0,
                                                             method_00);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogTitleIcon",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                                            ("dialogTitleIconQuiet",
                                                             (System_String_o *)"text",24.0,
                                                             method_01);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogTitleIconQuiet",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__IconStyle
                                                            ("dialogTitleIconNegative",
                                                             (System_String_o *)"negativeText",24.0,
                                                             method_02);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogTitleIconNegative",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("dialogTitleCloseButton","primary","header",
                                                             400,22.0,34.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"dialogTitleCloseButton",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pGVar4 = local_188;
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                            (local_188,"Secondary","secondary",
                                                             "buttonText",in_R8);
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                            (pGVar4,"Workshop","workshop",
                                                             "buttonText",in_R8);
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                            (pGVar4,"Quiet","surfaceSoft",
                                                             (System_String_o *)"text",in_R8);
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                            (pGVar4,"Danger","destructive",
                                                             "buttonText",in_R8);
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
                                                            (pGVar4,"Negative","negative",
                                                             (System_String_o *)"negativeText",in_R8);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(pGVar4->fields)._styles;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "stepper";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "surfaceSoft";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_128.hasValue = 0;
                                                    local_128.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_128,
                                                               10.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_128;
                                                    local_130.hasValue = 0;
                                                    local_130.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_130,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_130;
                                                    local_1a6 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_1a6,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).textured.fields.hasValue =
                                                         local_1a6;
                                                    local_1a8 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_1a8,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar5->fields).textured.fields.
                                                             hasValue + 2) = local_1a8;
                                                    local_138 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_138,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).textured.fields.value =
                                                         local_138;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"stepper",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "popover";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "surface";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    local_140.hasValue = 0;
                                                    local_140.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_140,
                                                               12.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_140;
                                                    local_148.hasValue = 0;
                                                    local_148.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_148,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).gap.fields = local_148;
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar6 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 420.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    (pGVar5->fields).width = pGVar6;
                                                    il2cpp_runtime_glue(&(pGVar5->fields).width,
                                                                       pGVar6);
                                                    (pGVar5->fields).motion = "balloon";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).motion);
                                                    local_1aa = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_1aa,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).textured.fields.hasValue =
                                                         local_1aa;
                                                    local_1ac = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_1ac,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar5->fields).textured.fields.
                                                             hasValue + 2) = local_1ac;
                                                    local_150 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_150,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).textured.fields.value =
                                                         local_150;
                                                    local_158 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_158,
                                                               1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).worn.fields.value = local_158
                                                    ;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"popover",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("buttonPrimary","primary","header",
                                                             400,21.0,42.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"buttonPrimary",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("buttonSecondary","secondary","header",
                                                             500,20.0,40.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"buttonSecondary",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("buttonWorkshop","workshop","header",
                                                             500,20.0,40.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"buttonWorkshop",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("buttonQuiet","surfaceSoft","header",
                                                             500,20.0,40.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"buttonQuiet",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar7 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8,(Il2CppObject *)"buttonQuiet",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  if (pIVar7 != (Il2CppObject *)0x0) {
                                                    pIVar7[2].klass = "text";
                                                    il2cpp_runtime_glue(pIVar7 + 2);
                                                    pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("buttonPlain","paper","header",
                                                             500,20.0,40.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"buttonPlain",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar7 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8,(Il2CppObject *)"buttonPlain",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  if (pIVar7 != (Il2CppObject *)0x0) {
                                                    pIVar7[2].klass = "text";
                                                    il2cpp_runtime_glue(pIVar7 + 2);
                                                    pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("buttonDanger","destructive","header",
                                                             700,20.0,40.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"buttonDanger",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("buttonNegative","negative","header",
                                                             500,20.0,40.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"buttonNegative",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar7 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8,(Il2CppObject *)"buttonNegative",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  if (pIVar7 != (Il2CppObject *)0x0) {
                                                    pIVar7[2].klass = "negativeText";
                                                    il2cpp_runtime_glue(pIVar7 + 2);
                                                    pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar5,(MethodInfo *)0x0);
                                                  if (pGVar5 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar5->fields).name = "inputField";
                                                    il2cpp_runtime_glue(&pGVar5->fields);
                                                    (pGVar5->fields).background = "engravedBg";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).background)
                                                    ;
                                                    (pGVar5->fields).textColor =
                                                         (System_String_o *)"text";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).textColor);
                                                    (pGVar5->fields).fontFamily =
                                                         (System_String_o *)"text";
                                                    il2cpp_runtime_glue(&(pGVar5->fields).fontFamily)
                                                    ;
                                                    local_160.hasValue = 0;
                                                    local_160.value = 0;
                                                    System_Nullable<int>___ctor
                                                              ((System_Nullable_int__o)&local_160,
                                                               400,MethodInfo_Nullable_1_Int32);
                                                    (pGVar5->fields).fontWeight.fields = local_160;
                                                    local_168.hasValue = 0;
                                                    local_168.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_168,
                                                               19.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).fontSize.fields = local_168;
                                                    local_170.hasValue = 0;
                                                    local_170.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_170,
                                                               12.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar5->fields).padding.fields = local_170;
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar6 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 280.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    (pGVar5->fields).width = pGVar6;
                                                    il2cpp_runtime_glue(&(pGVar5->fields).width);
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar6 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar6,(MethodInfo *)0x0);
                                                  if (pGVar6 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar6->fields).value = 42.0;
                                                    (pGVar6->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar6->fields).unit);
                                                    (pGVar5->fields).height = pGVar6;
                                                    il2cpp_runtime_glue(&(pGVar5->fields).height,
                                                                       pGVar6);
                                                    local_1ae = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_1ae,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar5->fields).textured.fields.hasValue =
                                                         local_1ae;
                                                    local_1b0 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_1b0,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar5->fields).textured.fields.
                                                             hasValue + 2) = local_1b0;
                                                    local_178 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_178,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).textured.fields.value =
                                                         local_178;
                                                    local_180 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_180,
                                                               -1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar5->fields).worn.fields.value = local_180
                                                    ;
                                                    if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"inputField",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  pGVar5 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("inputPlaceholder","inputPlaceholder",
                                                             (System_String_o *)"text",400,
                                                             19.0,in_R8);
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"inputPlaceholder",
                                                             (Il2CppObject *)pGVar5,MethodInfo_Void_set_Item);
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar7 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            (pSVar3,(Il2CppObject *)"buttonPrimary",
                                                             MethodInfo_GisketchStyleDefinition_get_Item);
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,"primaryButton",pIVar7,MethodInfo_Void_set_Item
                                                            );
                                                  pSVar3 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar8;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar7 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            (pSVar3,(Il2CppObject *)"buttonSecondary",
                                                             MethodInfo_GisketchStyleDefinition_get_Item);
                                                  method_03 = "secondaryButton";
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar3,(Il2CppObject *)"secondaryButton",
                                                             pIVar7,MethodInfo_Void_set_Item);
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__AddAtomDefaults
                                                            (local_188,method_03);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddDialogVariant
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* suffix, System_String_o* background, System_String_o* textColor, const MethodInfo* method);
// 0x3ad77c0

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddDialogVariant
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *suffix,
               System_String_o *background,System_String_o *textColor,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  Il2CppObject *pIVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05701357 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchStyleDefinition_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&"dialogTitleBar");
    il2cpp_init_method_metadata(&"header");
    il2cpp_init_method_metadata(&"dialogTitleCloseButton");
    DAT_05701357 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pSVar2 = System_String__Concat("dialogTitleBar",suffix,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat("dialogTitleBar",suffix,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__DialogTitleBar(pSVar3,background,method_00);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar4,MethodInfo_Void_set_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    pSVar2 = System_String__Concat("dialogTitleCloseButton",suffix,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat("dialogTitleCloseButton",suffix,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                       (pSVar3,background,"header",400,22.0,34.0,method);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar1,(Il2CppObject *)pSVar2,(Il2CppObject *)pGVar4,MethodInfo_Void_set_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
      pSVar2 = System_String__Concat("dialogTitleCloseButton",suffix,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar1,(Il2CppObject *)pSVar2,MethodInfo_GisketchStyleDefinition_get_Item);
        if (pIVar5 != (Il2CppObject *)0x0) {
          pIVar5[2].klass = (Il2CppClass *)textColor;
          il2cpp_runtime_glue(pIVar5 + 2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$DialogTitleBar
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__DialogTitleBar (System_String_o* name, System_String_o* background, const MethodInfo* method);
// 0x3ad7980

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__DialogTitleBar
          (System_String_o *name,System_String_o *background,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined8 local_38;
  System_Nullable_float__Fields local_30;
  System_Nullable_float__Fields local_28;
  System_Nullable_float__Fields local_20;
  
  if (DAT_05701358 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    DAT_05701358 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    il2cpp_runtime_glue(&__this->fields,name);
    (__this->fields).background = background;
    il2cpp_runtime_glue(&(__this->fields).background,background);
    local_20.hasValue = 0;
    local_20.value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_20,18.0,MethodInfo_Nullable_1_Single);
    (__this->fields).paddingX.fields = local_20;
    local_28.hasValue = 0;
    local_28.value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_28,8.0,MethodInfo_Nullable_1_Single);
    (__this->fields).paddingY.fields = local_28;
    local_30.hasValue = 0;
    local_30.value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_30,8.0,MethodInfo_Nullable_1_Single);
    (__this->fields).gap.fields = local_30;
    local_3a = 0;
    System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_3a,1,MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)&(__this->fields).textured.fields.hasValue = local_3a;
    local_3c = 0;
    System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_3c,1,MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)&(__this->fields).textured.fields.hasValue + 2) = local_3c;
    local_38 = 0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_38,1.0,MethodInfo_Nullable_1_Single);
    *(undefined8 *)&(__this->fields).worn.fields.value = local_38;
    local_3e = 0;
    System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_3e,1,MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)&(__this->fields).wornStainScale.fields.value = local_3e;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ButtonStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle (System_String_o* name, System_String_o* background, System_String_o* fontFamily, int32_t fontWeight, float fontSize, float height, const MethodInfo* method);
// 0x3acf960

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
          (System_String_o *name,System_String_o *background,System_String_o *fontFamily,
          int32_t fontWeight,float fontSize,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  undefined2 local_4c;
  undefined2 local_4a;
  float local_48;
  float local_44;
  undefined8 local_40;
  System_Nullable_float__Fields local_38;
  System_Nullable_int__Fields local_30;
  
  local_48 = fontSize;
  local_44 = height;
  if (DAT_05701359 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"slide");
    il2cpp_init_method_metadata(&"buttonText");
    DAT_05701359 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    il2cpp_runtime_glue(&__this->fields,name);
    (__this->fields).background = background;
    il2cpp_runtime_glue(&(__this->fields).background,background);
    (__this->fields).textColor = "buttonText";
    il2cpp_runtime_glue(&(__this->fields).textColor);
    (__this->fields).fontFamily = fontFamily;
    il2cpp_runtime_glue(&(__this->fields).fontFamily,fontFamily);
    local_30.hasValue = 0;
    local_30.value = 0;
    System_Nullable<int>___ctor((System_Nullable_int__o)&local_30,fontWeight,MethodInfo_Nullable_1_Int32);
    (__this->fields).fontWeight.fields = local_30;
    local_38.hasValue = 0;
    local_38.value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_38,local_48,MethodInfo_Nullable_1_Single);
    (__this->fields).fontSize.fields = local_38;
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570135b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570135b = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = local_44;
      (__this_00->fields).unit = "point";
      il2cpp_runtime_glue(&(__this_00->fields).unit);
      (__this->fields).height = __this_00;
      il2cpp_runtime_glue(&(__this->fields).height,__this_00);
      (__this->fields).motion = "slide";
      il2cpp_runtime_glue(&(__this->fields).motion);
      local_4a = 0;
      System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_4a,1,MethodInfo_Nullable_1_Boolean);
      *(undefined2 *)&(__this->fields).textured.fields.hasValue = local_4a;
      local_4c = 0;
      System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_4c,1,MethodInfo_Nullable_1_Boolean);
      *(undefined2 *)((long)&(__this->fields).textured.fields.hasValue + 2) = local_4c;
      local_40 = 0;
      System_Nullable<float>___ctor((System_Nullable_float__o)&local_40,1.0,MethodInfo_Nullable_1_Single);
      *(undefined8 *)&(__this->fields).worn.fields.value = local_40;
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$TextStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle (System_String_o* name, System_String_o* textColor, System_String_o* fontFamily, int32_t fontWeight, float fontSize, const MethodInfo* method);
// 0x3acf4f0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
          (System_String_o *name,System_String_o *textColor,System_String_o *fontFamily,
          int32_t fontWeight,float fontSize,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  System_Nullable_float__Fields local_38;
  System_Nullable_int__Fields local_30;
  
  if (DAT_0570135a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    DAT_0570135a = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (__this->fields).name = name;
    il2cpp_runtime_glue(&__this->fields,name);
    (__this->fields).textColor = textColor;
    il2cpp_runtime_glue(&(__this->fields).textColor,textColor);
    (__this->fields).fontFamily = fontFamily;
    il2cpp_runtime_glue(&(__this->fields).fontFamily,fontFamily);
    local_30.hasValue = 0;
    local_30.value = 0;
    System_Nullable<int>___ctor((System_Nullable_int__o)&local_30,fontWeight,MethodInfo_Nullable_1_Int32);
    (__this->fields).fontWeight.fields = local_30;
    local_38.hasValue = 0;
    local_38.value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_38,fontSize,MethodInfo_Nullable_1_Single);
    (__this->fields).fontSize.fields = local_38;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$Points
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Styling_GisketchTheme__Points (float value, const MethodInfo* method);
// 0x3acf200

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__Points(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (DAT_0570135b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"point");
    DAT_0570135b = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "point";
    il2cpp_runtime_glue(&(__this->fields).unit);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$AddMainMenuDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__AddMainMenuDefaults (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x3ad02e0

void Gisketch_Aottg2UI_Styling_GisketchTheme__AddMainMenuDefaults
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Il2CppObject *pIVar4;
  MethodInfo *in_R8;
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o **ppSVar5;
  undefined2 local_2f8;
  undefined2 local_2f6;
  undefined2 local_2f4;
  undefined2 local_2f2;
  undefined2 local_2f0;
  undefined2 local_2ee;
  undefined2 local_2ec;
  undefined2 local_2ea;
  undefined2 local_2e8;
  undefined2 local_2e6;
  undefined2 local_2e4;
  undefined2 local_2e2;
  undefined2 local_2e0;
  undefined2 local_2de;
  undefined2 local_2dc;
  undefined2 local_2da;
  undefined2 local_2d8;
  undefined2 local_2d6;
  undefined2 local_2d4;
  undefined2 local_2d2;
  undefined2 local_2d0;
  undefined2 local_2ce;
  undefined2 local_2cc;
  undefined2 local_2ca;
  undefined2 local_2c8;
  undefined2 local_2c6;
  undefined2 local_2c4;
  undefined2 local_2c2;
  undefined2 local_2c0;
  undefined2 local_2be;
  undefined2 local_2bc;
  undefined2 local_2ba;
  undefined2 local_2b8;
  undefined2 local_2b6;
  undefined2 local_2b4;
  undefined2 local_2b2;
  undefined2 local_2b0;
  undefined2 local_2ae;
  undefined2 local_2ac;
  undefined2 local_2aa;
  undefined2 local_2a8;
  undefined2 local_2a6;
  undefined2 local_2a4;
  undefined2 local_2a2;
  undefined2 local_2a0;
  undefined2 local_29e;
  undefined2 local_29c;
  undefined2 local_29a;
  undefined2 local_298;
  undefined2 local_296;
  undefined2 local_294;
  undefined2 local_292;
  undefined2 local_290;
  undefined2 local_28e;
  undefined2 local_28c;
  undefined2 local_28a;
  undefined8 local_288;
  System_Nullable_float__Fields local_280;
  System_Nullable_float__Fields local_278;
  System_Nullable_float__Fields local_270;
  System_Nullable_float__Fields local_268;
  System_Nullable_int__Fields local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  Il2CppClass *local_238;
  Il2CppClass *local_230;
  void *local_228;
  Il2CppClass *local_220;
  Il2CppClass *local_218;
  void *local_210;
  undefined8 local_208;
  undefined8 local_200;
  System_Nullable_float__Fields local_1f8;
  System_Nullable_float__Fields local_1f0;
  System_Nullable_int__Fields local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  System_Nullable_float__Fields local_1d0;
  System_Nullable_float__Fields local_1c8;
  System_Nullable_int__Fields local_1c0;
  undefined8 local_1b8;
  System_Nullable_float__Fields local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  System_Nullable_float__Fields local_198;
  System_Nullable_float__Fields local_190;
  System_Nullable_float__Fields local_188;
  undefined8 local_180;
  System_Nullable_float__Fields local_178;
  undefined8 local_170;
  System_Nullable_float__Fields local_168;
  undefined8 local_160;
  System_Nullable_float__Fields local_158;
  System_Nullable_float__Fields local_150;
  undefined8 local_148;
  System_Nullable_float__Fields local_140;
  undefined8 local_138;
  System_Nullable_float__Fields local_130;
  undefined8 local_128;
  undefined8 local_120;
  System_Nullable_float__Fields local_118;
  Il2CppClass *local_110;
  Il2CppClass *local_108;
  Il2CppClass *local_100;
  undefined8 local_f8;
  System_Nullable_float__Fields local_f0;
  System_Nullable_float__Fields local_e8;
  System_Nullable_float__Fields local_e0;
  System_Nullable_float__Fields local_d8;
  System_Nullable_int__Fields local_d0;
  System_Nullable_float__Fields local_c8;
  System_Nullable_float__Fields local_c0;
  System_Nullable_int__Fields local_b8;
  undefined8 local_b0;
  System_Nullable_float__Fields local_a8;
  System_Nullable_float__Fields local_a0;
  undefined8 local_98;
  System_Nullable_float__Fields local_90;
  System_Nullable_float__Fields local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  System_Nullable_float__Fields local_68;
  undefined8 local_60;
  System_Nullable_float__Fields local_58;
  System_Nullable_float__Fields local_50;
  System_Nullable_float__Fields local_48;
  System_Nullable_float__Fields local_40;
  System_Nullable_float__Fields local_38;
  
  if (DAT_0570135c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchStyleDefinition_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&"profileHoverDialog");
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"profileCardBannerBg");
    il2cpp_init_method_metadata(&"characterNamePreviewBg");
    il2cpp_init_method_metadata(&"primary");
    il2cpp_init_method_metadata(&"brushSidePanelTexture");
    il2cpp_init_method_metadata(&"profilePreviewTitleBar");
    il2cpp_init_method_metadata(&"creditsCategoryHeaderText");
    il2cpp_init_method_metadata(&"profilePreviewBannerFrame");
    il2cpp_init_method_metadata(&"profilePreviewSelection");
    il2cpp_init_method_metadata(&"gridPickerLabel");
    il2cpp_init_method_metadata(&"surface");
    il2cpp_init_method_metadata(&"profilePreviewBody");
    il2cpp_init_method_metadata(&"brushSidePanelHeader");
    il2cpp_init_method_metadata(&"percent");
    il2cpp_init_method_metadata(&"profileCardSocialText");
    il2cpp_init_method_metadata(&"profileCardBannerImage");
    il2cpp_init_method_metadata(&"profileCardBodyText");
    il2cpp_init_method_metadata(&"profileCardAvatarBg");
    il2cpp_init_method_metadata(&"profileCardHandle");
    il2cpp_init_method_metadata(&"gridPickerItem");
    il2cpp_init_method_metadata(&"profilePreviewAvatar");
    il2cpp_init_method_metadata(&"profileCardBody");
    il2cpp_init_method_metadata(&"profileEmoteSlotText");
    il2cpp_init_method_metadata(&"balloon");
    il2cpp_init_method_metadata(&"characterTextColorInput");
    il2cpp_init_method_metadata(&"brushSidePanelShell");
    il2cpp_init_method_metadata(&"brushSidePanel");
    il2cpp_init_method_metadata(&"slide");
    il2cpp_init_method_metadata(&"mainMenuOverlayBody");
    il2cpp_init_method_metadata(&"point");
    il2cpp_init_method_metadata(&"profileInfoStatus");
    il2cpp_init_method_metadata(&"mainMenuLogoSlot");
    il2cpp_init_method_metadata(&"void");
    il2cpp_init_method_metadata(&"creditsContributorCell");
    il2cpp_init_method_metadata(&"mainMenuOverlay");
    il2cpp_init_method_metadata(&"brushSidePanelBrushButton");
    il2cpp_init_method_metadata(&"mainMenuTipPanel");
    il2cpp_init_method_metadata(&"profileColorSwatch");
    il2cpp_init_method_metadata(&"gridPickerThumbnail");
    il2cpp_init_method_metadata(&"profileCardBanner");
    il2cpp_init_method_metadata(&"brushSidePanelContentFooterTopShadow");
    il2cpp_init_method_metadata(&"creditsCategoryHeader");
    il2cpp_init_method_metadata(&"profileCardSocialIcon");
    il2cpp_init_method_metadata(&"left");
    il2cpp_init_method_metadata(&"brushSidePanelScreenScroll");
    il2cpp_init_method_metadata(&"brushSidePanelContentFooter");
    il2cpp_init_method_metadata(&"mainMenuPanel");
    il2cpp_init_method_metadata(&"brushSidePanelScreenContent");
    il2cpp_init_method_metadata(&"characterTextInput");
    il2cpp_init_method_metadata(&"surfaceSoft");
    il2cpp_init_method_metadata(&"profilePreviewDialog");
    il2cpp_init_method_metadata(&"header");
    il2cpp_init_method_metadata(&"profileCardAvatarFrame");
    il2cpp_init_method_metadata(&"profilePreviewName");
    il2cpp_init_method_metadata(&"mainMenuTipBackground");
    il2cpp_init_method_metadata(&"brushSidePanelOutline");
    il2cpp_init_method_metadata(&"profilePreviewTitle");
    il2cpp_init_method_metadata(&"brushSidePanelHeaderText");
    il2cpp_init_method_metadata(&"profilePreviewBanner");
    il2cpp_init_method_metadata(&"right");
    il2cpp_init_method_metadata(&"creditsCategoryBrush");
    il2cpp_init_method_metadata(&"profileGridItem");
    il2cpp_init_method_metadata(&"profileGridItemThumbnail");
    il2cpp_init_method_metadata(&"creditsInfoIcon");
    il2cpp_init_method_metadata(&"mainMenuBrushButton");
    il2cpp_init_method_metadata(&"profileGridItemLabel");
    il2cpp_init_method_metadata(&"mainMenuTipText");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"profilePreviewAvatarFrame");
    il2cpp_init_method_metadata(&"buttonText");
    il2cpp_init_method_metadata(&"mainMenuLogo");
    il2cpp_init_method_metadata(&"profileCardAvatarBorder");
    il2cpp_init_method_metadata(&"textMuted");
    il2cpp_init_method_metadata(&"brushSidePanelContentFooterTexture");
    il2cpp_init_method_metadata(&"profileCardName");
    il2cpp_init_method_metadata(&"secondary");
    il2cpp_init_method_metadata(&"profileEmoteWheelSubtext");
    il2cpp_init_method_metadata(&"profileCard");
    il2cpp_init_method_metadata(&"mainMenuFooterSpriteButton");
    il2cpp_init_method_metadata(&"engravedBg");
    il2cpp_init_method_metadata(&"jek5");
    il2cpp_init_method_metadata(&"creditsSubcategoryHeader");
    il2cpp_init_method_metadata(&"profilePreviewHandle");
    il2cpp_init_method_metadata(&"brushSidePanelFooterPrimaryButton");
    il2cpp_init_method_metadata(&"profileCardAvatarImage");
    il2cpp_init_method_metadata(&"profileEmoteWheelTitle");
    il2cpp_init_method_metadata(&"center");
    il2cpp_init_method_metadata(&"profileHoverBio");
    il2cpp_init_method_metadata(&"menuText");
    il2cpp_init_method_metadata(&"profilePreviewCard");
    DAT_0570135c = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    (pGVar2->fields).name = "mainMenuOverlay";
    il2cpp_runtime_glue(&pGVar2->fields);
    (pGVar2->fields).background = "clear";
    il2cpp_runtime_glue(&(pGVar2->fields).background);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ppSVar5 = &(__this->fields)._styles;
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar1,(Il2CppObject *)"mainMenuOverlay",(Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar5;
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
      Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar2,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        (pGVar2->fields).name = "mainMenuOverlayBody";
        il2cpp_runtime_glue(&pGVar2->fields);
        (pGVar2->fields).background = "clear";
        il2cpp_runtime_glue(&(pGVar2->fields).background);
        local_38.hasValue = 0;
        local_38.value = 0.0;
        System_Nullable<float>___ctor((System_Nullable_float__o)&local_38,0.0,MethodInfo_Nullable_1_Single);
        (pGVar2->fields).padding.fields = local_38;
        local_40.hasValue = 0;
        local_40.value = 0.0;
        System_Nullable<float>___ctor((System_Nullable_float__o)&local_40,0.0,MethodInfo_Nullable_1_Single);
        (pGVar2->fields).gap.fields = local_40;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar1,(Il2CppObject *)"mainMenuOverlayBody",(Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar5;
          pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                   il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar2,(MethodInfo *)0x0);
          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            (pGVar2->fields).name = "mainMenuLogoSlot";
            il2cpp_runtime_glue(&pGVar2->fields);
            (pGVar2->fields).background = "clear";
            il2cpp_runtime_glue(&(pGVar2->fields).background);
            local_48.hasValue = 0;
            local_48.value = 0.0;
            System_Nullable<float>___ctor((System_Nullable_float__o)&local_48,0.0,MethodInfo_Nullable_1_Single);
            (pGVar2->fields).padding.fields = local_48;
            local_50.hasValue = 0;
            local_50.value = 0.0;
            System_Nullable<float>___ctor((System_Nullable_float__o)&local_50,0.0,MethodInfo_Nullable_1_Single);
            (pGVar2->fields).gap.fields = local_50;
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar1,(Il2CppObject *)"mainMenuLogoSlot",(Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar5;
              pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                       il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
              Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar2,(MethodInfo *)0x0);
              if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                (pGVar2->fields).name = "mainMenuPanel";
                il2cpp_runtime_glue(&pGVar2->fields);
                pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength)
                ;
                Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                  (pGVar3->fields).value = 100.0;
                  (pGVar3->fields).unit = "percent";
                  il2cpp_runtime_glue(&(pGVar3->fields).unit);
                  (pGVar2->fields).height = pGVar3;
                  il2cpp_runtime_glue(&(pGVar2->fields).height,pGVar3);
                  local_58.hasValue = 0;
                  local_58.value = 0.0;
                  System_Nullable<float>___ctor
                            ((System_Nullable_float__o)&local_58,0.9064815,MethodInfo_Nullable_1_Single);
                  (pGVar2->fields).aspectRatio.fields = local_58;
                  local_28a = 0;
                  System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_28a,1,MethodInfo_Nullable_1_Boolean);
                  *(undefined2 *)&(pGVar2->fields).reliefGradient.fields.hasValue = local_28a;
                  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary<object__object>__set_Item
                              (pSVar1,(Il2CppObject *)"mainMenuPanel",(Il2CppObject *)pGVar2,
                               MethodInfo_Void_set_Item);
                    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar5;
                    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                             il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                    Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(pGVar2,(MethodInfo *)0x0);
                    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                      (pGVar2->fields).name = "brushSidePanel";
                      il2cpp_runtime_glue(&pGVar2->fields);
                      (pGVar2->fields).background = "surface";
                      il2cpp_runtime_glue(&(pGVar2->fields).background);
                      local_28c = 0;
                      System_Nullable<bool>___ctor
                                ((System_Nullable_bool__o)&local_28c,1,MethodInfo_Nullable_1_Boolean);
                      *(undefined2 *)&(pGVar2->fields).textured.fields.hasValue = local_28c;
                      local_28e = 0;
                      System_Nullable<bool>___ctor
                                ((System_Nullable_bool__o)&local_28e,1,MethodInfo_Nullable_1_Boolean);
                      *(undefined2 *)((long)&(pGVar2->fields).textured.fields.hasValue + 2) =
                           local_28e;
                      local_60 = 0;
                      System_Nullable<float>___ctor
                                ((System_Nullable_float__o)&local_60,4.0,MethodInfo_Nullable_1_Single);
                      *(undefined8 *)&(pGVar2->fields).textured.fields.value = local_60;
                      local_290 = 0;
                      System_Nullable<bool>___ctor
                                ((System_Nullable_bool__o)&local_290,1,MethodInfo_Nullable_1_Boolean);
                      *(undefined2 *)&(pGVar2->fields).reliefGradient.fields.hasValue = local_290;
                      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                      {
                        System_Collections_Generic_Dictionary<object__object>__set_Item
                                  (pSVar1,(Il2CppObject *)"brushSidePanel",(Il2CppObject *)pGVar2,
                                   MethodInfo_Void_set_Item);
                        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar5
                        ;
                        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                                 il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                        Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                  (pGVar2,(MethodInfo *)0x0);
                        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                          (pGVar2->fields).name = "brushSidePanelShell";
                          il2cpp_runtime_glue(&pGVar2->fields);
                          (pGVar2->fields).background = "clear";
                          il2cpp_runtime_glue(&(pGVar2->fields).background);
                          pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                   il2cpp_runtime_glue(TypeInfo_GisketchLength);
                          Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar3,(MethodInfo *)0x0);
                          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                            (pGVar3->fields).value = 100.0;
                            (pGVar3->fields).unit = "percent";
                            il2cpp_runtime_glue(&(pGVar3->fields).unit);
                            (pGVar2->fields).height = pGVar3;
                            il2cpp_runtime_glue(&(pGVar2->fields).height,pGVar3);
                            local_68.hasValue = 0;
                            local_68.value = 0.0;
                            System_Nullable<float>___ctor
                                      ((System_Nullable_float__o)&local_68,0.38333333,MethodInfo_Nullable_1_Single);
                            (pGVar2->fields).aspectRatio.fields = local_68;
                            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *
                                          )0x0) {
                              System_Collections_Generic_Dictionary<object__object>__set_Item
                                        (pSVar1,(Il2CppObject *)"brushSidePanelShell",(Il2CppObject *)pGVar2,
                                         MethodInfo_Void_set_Item);
                              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       *ppSVar5;
                              pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                                       il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                              Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                        (pGVar2,(MethodInfo *)0x0);
                              if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)
                              {
                                (pGVar2->fields).name = "brushSidePanelScreenContent";
                                il2cpp_runtime_glue(&pGVar2->fields);
                                (pGVar2->fields).background = "surface";
                                il2cpp_runtime_glue(&(pGVar2->fields).background);
                                local_292 = 0;
                                System_Nullable<bool>___ctor
                                          ((System_Nullable_bool__o)&local_292,1,MethodInfo_Nullable_1_Boolean);
                                *(undefined2 *)&(pGVar2->fields).textured.fields.hasValue =
                                     local_292;
                                local_294 = 0;
                                System_Nullable<bool>___ctor
                                          ((System_Nullable_bool__o)&local_294,1,MethodInfo_Nullable_1_Boolean);
                                *(undefined2 *)
                                 ((long)&(pGVar2->fields).textured.fields.hasValue + 2) = local_294;
                                local_70 = 0;
                                System_Nullable<float>___ctor
                                          ((System_Nullable_float__o)&local_70,4.0,MethodInfo_Nullable_1_Single);
                                *(undefined8 *)&(pGVar2->fields).textured.fields.value = local_70;
                                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o
                                               *)0x0) {
                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                            (pSVar1,(Il2CppObject *)"brushSidePanelScreenContent",
                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o
                                            *)*ppSVar5;
                                  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                                           il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                            (pGVar2,(MethodInfo *)0x0);
                                  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                                                0x0) {
                                    (pGVar2->fields).name = "brushSidePanelContentFooter";
                                    il2cpp_runtime_glue(&pGVar2->fields);
                                    (pGVar2->fields).background = "surface";
                                    il2cpp_runtime_glue(&(pGVar2->fields).background);
                                    local_296 = 0;
                                    System_Nullable<bool>___ctor
                                              ((System_Nullable_bool__o)&local_296,1,MethodInfo_Nullable_1_Boolean);
                                    *(undefined2 *)&(pGVar2->fields).textured.fields.hasValue =
                                         local_296;
                                    local_298 = 0;
                                    System_Nullable<bool>___ctor
                                              ((System_Nullable_bool__o)&local_298,1,MethodInfo_Nullable_1_Boolean);
                                    *(undefined2 *)
                                     ((long)&(pGVar2->fields).textured.fields.hasValue + 2) =
                                         local_298;
                                    local_78 = 0;
                                    System_Nullable<float>___ctor
                                              ((System_Nullable_float__o)&local_78,4.0,MethodInfo_Nullable_1_Single)
                                    ;
                                    *(undefined8 *)&(pGVar2->fields).textured.fields.value =
                                         local_78;
                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                      System_Collections_Generic_Dictionary<object__object>__set_Item
                                                (pSVar1,(Il2CppObject *)"brushSidePanelContentFooter",
                                                 (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o
                                                *)*ppSVar5;
                                      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                                               il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                      Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                (pGVar2,(MethodInfo *)0x0);
                                      if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                        (pGVar2->fields).name = "brushSidePanelContentFooterTexture";
                                        il2cpp_runtime_glue(&pGVar2->fields);
                                        (pGVar2->fields).background = "clear";
                                        il2cpp_runtime_glue(&(pGVar2->fields).background);
                                        local_29a = 0;
                                        System_Nullable<bool>___ctor
                                                  ((System_Nullable_bool__o)&local_29a,1,
                                                   MethodInfo_Nullable_1_Boolean);
                                        *(undefined2 *)&(pGVar2->fields).textured.fields.hasValue =
                                             local_29a;
                                        local_29c = 0;
                                        System_Nullable<bool>___ctor
                                                  ((System_Nullable_bool__o)&local_29c,1,
                                                   MethodInfo_Nullable_1_Boolean);
                                        *(undefined2 *)
                                         ((long)&(pGVar2->fields).textured.fields.hasValue + 2) =
                                             local_29c;
                                        local_80 = 0;
                                        System_Nullable<float>___ctor
                                                  ((System_Nullable_float__o)&local_80,4.0,
                                                   MethodInfo_Nullable_1_Single);
                                        *(undefined8 *)&(pGVar2->fields).textured.fields.value =
                                             local_80;
                                        if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                          System_Collections_Generic_Dictionary<object__object>__set_Item
                                                    (pSVar1,(Il2CppObject *)"brushSidePanelContentFooterTexture",
                                                     (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                          pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                          pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o
                                                    *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                          Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                    (pGVar2,(MethodInfo *)0x0);
                                          if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                            (pGVar2->fields).name = "brushSidePanelContentFooterTopShadow";
                                            il2cpp_runtime_glue(&pGVar2->fields);
                                            (pGVar2->fields).background = "clear";
                                            il2cpp_runtime_glue(&(pGVar2->fields).background);
                                            local_29e = 0;
                                            System_Nullable<bool>___ctor
                                                      ((System_Nullable_bool__o)&local_29e,1,
                                                       MethodInfo_Nullable_1_Boolean);
                                            *(undefined2 *)
                                             &(pGVar2->fields).reliefGradient.fields.hasValue =
                                                 local_29e;
                                            if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                              System_Collections_Generic_Dictionary<object__object>__set_Item
                                                        (pSVar1,(Il2CppObject *)"brushSidePanelContentFooterTopShadow",
                                                         (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                              pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                              pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                              Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                        (pGVar2,(MethodInfo *)0x0);
                                              if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                (pGVar2->fields).name = "brushSidePanelScreenScroll";
                                                il2cpp_runtime_glue(&pGVar2->fields);
                                                (pGVar2->fields).background = "clear";
                                                il2cpp_runtime_glue(&(pGVar2->fields).background);
                                                local_88.hasValue = 0;
                                                local_88.value = 0.0;
                                                System_Nullable<float>___ctor
                                                          ((System_Nullable_float__o)&local_88,0.0,
                                                           MethodInfo_Nullable_1_Single);
                                                (pGVar2->fields).padding.fields = local_88;
                                                local_90.hasValue = 0;
                                                local_90.value = 0.0;
                                                System_Nullable<float>___ctor
                                                          ((System_Nullable_float__o)&local_90,0.0,
                                                           MethodInfo_Nullable_1_Single);
                                                (pGVar2->fields).gap.fields = local_90;
                                                if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"brushSidePanelScreenScroll",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "brushSidePanelOutline";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "brushSidePanelOutline";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"brushSidePanelOutline",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "brushSidePanelTexture";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2a0 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2a0,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2a0;
                                                    local_2a2 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2a2,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2a2;
                                                    local_98 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_98,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_98;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"brushSidePanelTexture",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "brushSidePanelHeader";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "primary";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_a0.hasValue = 0;
                                                    local_a0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_a0,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).padding.fields = local_a0;
                                                    local_a8.hasValue = 0;
                                                    local_a8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_a8,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).gap.fields = local_a8;
                                                    local_2a4 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2a4,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2a4;
                                                    local_2a6 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2a6,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2a6;
                                                    local_b0 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_b0,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_b0;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"brushSidePanelHeader",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "brushSidePanelHeaderText";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    (pGVar2->fields).textColor = "buttonText";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).textColor);
                                                    (pGVar2->fields).fontFamily = "header";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).fontFamily)
                                                    ;
                                                    local_b8.hasValue = 0;
                                                    local_b8.value = 0;
                                                    System_Nullable<int>___ctor
                                                              ((System_Nullable_int__o)&local_b8,400
                                                               ,MethodInfo_Nullable_1_Int32);
                                                    (pGVar2->fields).fontWeight.fields = local_b8;
                                                    local_c0.hasValue = 0;
                                                    local_c0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_c0,
                                                               104.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).fontSize.fields = local_c0;
                                                    (pGVar2->fields).textAlignment = "right";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).
                                                                        textAlignment);
                                                    local_c8.hasValue = 0;
                                                    local_c8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_c8,
                                                               80.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).paddingX.fields = local_c8;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"brushSidePanelHeaderText",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "brushSidePanelBrushButton";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "primary";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    (pGVar2->fields).textColor = "void";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).textColor);
                                                    (pGVar2->fields).fontFamily = "menuText";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).fontFamily)
                                                    ;
                                                    local_d0.hasValue = 0;
                                                    local_d0.value = 0;
                                                    System_Nullable<int>___ctor
                                                              ((System_Nullable_int__o)&local_d0,400
                                                               ,MethodInfo_Nullable_1_Int32);
                                                    (pGVar2->fields).fontWeight.fields = local_d0;
                                                    local_d8.hasValue = 0;
                                                    local_d8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_d8,
                                                               112.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).fontSize.fields = local_d8;
                                                    (pGVar2->fields).textAlignment = "left";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).
                                                                        textAlignment);
                                                    local_e0.hasValue = 0;
                                                    local_e0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_e0,
                                                               104.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).iconSize.fields = local_e0;
                                                    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
                                                      il2cpp_init_class();
                                                    }
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 236.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).height = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).height,
                                                                       pGVar3);
                                                    local_e8.hasValue = 0;
                                                    local_e8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_e8,
                                                               224.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).paddingX.fields = local_e8;
                                                    local_f0.hasValue = 0;
                                                    local_f0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_f0,
                                                               36.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).gap.fields = local_f0;
                                                    local_2a8 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2a8,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2a8;
                                                    local_2aa = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2aa,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2aa;
                                                    local_f8 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_f8,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_f8;
                                                    (pGVar2->fields).motion = "slide";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).motion);
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"brushSidePanelBrushButton",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("brushSidePanelFooterPrimaryButton","primary","header",
                                                             400,26.0,63.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"brushSidePanelFooterPrimaryButton",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"brushSidePanelFooterPrimaryButton",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_100 = (Il2CppClass *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_100,
                                                             26.0,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[5].klass = local_100;
                                                    if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"brushSidePanelFooterPrimaryButton",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_108 = (Il2CppClass *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_108,
                                                             24.0,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[6].klass = local_108;
                                                    if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"brushSidePanelFooterPrimaryButton",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_110 = (Il2CppClass *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_110,
                                                             9.0,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[7].klass = local_110;
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileCard";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_118.hasValue = 0;
                                                    local_118.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_118,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).gap.fields = local_118;
                                                    local_2ac = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2ac,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).reliefGradient.fields.
                                                      hasValue = local_2ac;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCard",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileCardBanner";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "profileCardBannerBg";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2ae = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2ae,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2ae;
                                                    local_2b0 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2b0,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2b0;
                                                    local_120 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_120,
                                                               3.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_120;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardBanner",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileCardBannerImage";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardBannerImage",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileCardBody";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "surfaceSoft";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2b2 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2b2,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2b2;
                                                    local_2b4 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2b4,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2b4;
                                                    local_128 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_128,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_128;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardBody",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileCardAvatarFrame";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "profileCardAvatarBorder";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_130.hasValue = 0;
                                                    local_130.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_130,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).padding.fields = local_130;
                                                    local_2b6 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2b6,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2b6;
                                                    local_2b8 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2b8,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2b8;
                                                    local_138 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_138,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_138;
                                                    local_2ba = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2ba,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).reliefGradient.fields.
                                                      hasValue = local_2ba;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardAvatarFrame",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileCardAvatarBg";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "profileCardAvatarBg";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardAvatarBg",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileCardAvatarImage";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardAvatarImage",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileCardName",
                                                             (System_String_o *)"text",
                                                             "header",400,42.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardName",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileCardHandle","textMuted",
                                                             (System_String_o *)"text",400,
                                                             20.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardHandle",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileCardBodyText","textMuted",
                                                             (System_String_o *)"text",400,
                                                             22.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardBodyText",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileCardSocialText","textMuted",
                                                             (System_String_o *)"text",400,
                                                             22.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardSocialText",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileCardSocialText",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLength_o
                                                            *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 100.0;
                                                    (pGVar3->fields).unit = "percent";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    if (pIVar4 != (Il2CppObject *)0x0) {
                                                      pIVar4[7].monitor = pGVar3;
                                                      il2cpp_runtime_glue(&pIVar4[7].monitor,pGVar3);
                                                      pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileInfoStatus","textMuted",
                                                             (System_String_o *)"text",400,
                                                             20.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileInfoStatus",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileInfoStatus",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[4].monitor = "right";
                                                    il2cpp_runtime_glue(&pIVar4[4].monitor);
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileCardSocialIcon";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "textMuted";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileCardSocialIcon",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "creditsCategoryHeader";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_140.hasValue = 0;
                                                    local_140.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_140,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).gap.fields = local_140;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"creditsCategoryHeader",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "creditsCategoryBrush";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "primary";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2bc = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2bc,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2bc;
                                                    local_2be = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2be,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2be;
                                                    local_148 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_148,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_148;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"creditsCategoryBrush",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("creditsCategoryHeaderText",
                                                             (System_String_o *)"text",
                                                             "header",400,40.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"creditsCategoryHeaderText",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"creditsCategoryHeaderText",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[4].monitor = "left";
                                                    il2cpp_runtime_glue(&pIVar4[4].monitor);
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("creditsSubcategoryHeader",
                                                             (System_String_o *)"text",
                                                             "menuText",400,28.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"creditsSubcategoryHeader",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "creditsInfoIcon";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background =
                                                         (System_String_o *)"text";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 18.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).width = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).width);
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 18.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).height = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).height,
                                                                       pGVar3);
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"creditsInfoIcon",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "creditsContributorCell";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "surfaceSoft";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_150.hasValue = 0;
                                                    local_150.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_150,
                                                               10.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).paddingX.fields = local_150;
                                                    local_158.hasValue = 0;
                                                    local_158.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_158,
                                                               8.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).gap.fields = local_158;
                                                    local_2c0 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2c0,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2c0;
                                                    local_2c2 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2c2,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2c2;
                                                    local_160 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_160,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_160;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"creditsContributorCell",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profilePreviewCard";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_168.hasValue = 0;
                                                    local_168.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_168,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).gap.fields = local_168;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewCard",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profilePreviewDialog";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "surfaceSoft";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2c4 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2c4,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2c4;
                                                    local_2c6 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2c6,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2c6;
                                                    local_170 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_170,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_170;
                                                    local_2c8 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2c8,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).reliefGradient.fields.
                                                      hasValue = local_2c8;
                                                    local_178.hasValue = 0;
                                                    local_178.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_178,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).gap.fields = local_178;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewDialog",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileHoverDialog";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "surfaceSoft";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2ca = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2ca,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2ca;
                                                    local_2cc = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2cc,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2cc;
                                                    local_180 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_180,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_180;
                                                    local_2ce = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2ce,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).reliefGradient.fields.
                                                      hasValue = local_2ce;
                                                    local_188.hasValue = 0;
                                                    local_188.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_188,
                                                               0.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).gap.fields = local_188;
                                                    (pGVar2->fields).motion = "balloon";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).motion);
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileHoverDialog",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profilePreviewTitleBar";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "secondary";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_190.hasValue = 0;
                                                    local_190.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_190,
                                                               16.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).paddingX.fields = local_190;
                                                    local_198.hasValue = 0;
                                                    local_198.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_198,
                                                               7.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).paddingY.fields = local_198;
                                                    local_2d0 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2d0,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2d0;
                                                    local_2d2 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2d2,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2d2;
                                                    local_1a0 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1a0,
                                                               1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).worn.fields.value = local_1a0
                                                    ;
                                                    local_2d4 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2d4,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).wornStainScale.fields.value =
                                                         local_2d4;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewTitleBar",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profilePreviewTitle","buttonText","header",
                                                             400,23.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewTitle",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profilePreviewBannerFrame";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "profileCardBannerBg";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewBannerFrame",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profilePreviewBanner";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "profileCardBannerBg";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2d6 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2d6,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2d6;
                                                    local_2d8 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2d8,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2d8;
                                                    local_1a8 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1a8,
                                                               3.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_1a8;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewBanner",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profilePreviewBody";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewBody",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profilePreviewAvatarFrame";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "profileCardAvatarBorder";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_1b0.hasValue = 0;
                                                    local_1b0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1b0,
                                                               6.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).padding.fields = local_1b0;
                                                    local_2da = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2da,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2da;
                                                    local_2dc = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2dc,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2dc;
                                                    local_1b8 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1b8,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_1b8;
                                                    local_2de = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2de,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).reliefGradient.fields.
                                                      hasValue = local_2de;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewAvatarFrame",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profilePreviewAvatar";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewAvatar",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profilePreviewName",
                                                             (System_String_o *)"text",
                                                             "header",400,30.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewName",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profilePreviewHandle","textMuted",
                                                             (System_String_o *)"text",400,
                                                             17.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewHandle",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profilePreviewSelection","textMuted",
                                                             (System_String_o *)"text",500,
                                                             16.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profilePreviewSelection",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileHoverBio","textMuted",
                                                             (System_String_o *)"text",400,
                                                             18.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileHoverBio",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "characterTextInput";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "characterNamePreviewBg";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    (pGVar2->fields).textColor = "buttonText";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).textColor);
                                                    (pGVar2->fields).fontFamily =
                                                         (System_String_o *)"text";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).fontFamily)
                                                    ;
                                                    local_1c0.hasValue = 0;
                                                    local_1c0.value = 0;
                                                    System_Nullable<int>___ctor
                                                              ((System_Nullable_int__o)&local_1c0,
                                                               400,MethodInfo_Nullable_1_Int32);
                                                    (pGVar2->fields).fontWeight.fields = local_1c0;
                                                    local_1c8.hasValue = 0;
                                                    local_1c8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1c8,
                                                               19.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).fontSize.fields = local_1c8;
                                                    local_1d0.hasValue = 0;
                                                    local_1d0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1d0,
                                                               12.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).padding.fields = local_1d0;
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 42.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).height = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).height,
                                                                       pGVar3);
                                                    local_2e0 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2e0,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2e0;
                                                    local_2e2 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2e2,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2e2;
                                                    local_1d8 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1d8,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_1d8;
                                                    local_1e0 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1e0,
                                                               -1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).worn.fields.value = local_1e0
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"characterTextInput",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "characterTextColorInput";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "characterNamePreviewBg";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    (pGVar2->fields).textColor = "buttonText";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).textColor);
                                                    (pGVar2->fields).fontFamily =
                                                         (System_String_o *)"text";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).fontFamily)
                                                    ;
                                                    local_1e8.hasValue = 0;
                                                    local_1e8.value = 0;
                                                    System_Nullable<int>___ctor
                                                              ((System_Nullable_int__o)&local_1e8,
                                                               400,MethodInfo_Nullable_1_Int32);
                                                    (pGVar2->fields).fontWeight.fields = local_1e8;
                                                    local_1f0.hasValue = 0;
                                                    local_1f0.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1f0,
                                                               36.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).fontSize.fields = local_1f0;
                                                    local_1f8.hasValue = 0;
                                                    local_1f8.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_1f8,
                                                               18.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).padding.fields = local_1f8;
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 112.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).height = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).height,
                                                                       pGVar3);
                                                    local_2e4 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2e4,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2e4;
                                                    local_2e6 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2e6,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2e6;
                                                    local_200 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_200,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_200;
                                                    local_208 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_208,
                                                               -1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).worn.fields.value = local_208
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"characterTextColorInput",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("gridPickerItem","surfaceSoft",
                                                             (System_String_o *)"text",500,
                                                             16.0,144.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"gridPickerItem",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"gridPickerItem",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_210 = (void *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_210,
                                                             10.0,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[5].monitor = local_210;
                                                    if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"gridPickerItem",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_218 = (Il2CppClass *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_218,
                                                             7.0,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[7].klass = local_218;
                                                    if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"gridPickerItem",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[2].klass = "text";
                                                    il2cpp_runtime_glue(pIVar4 + 2);
                                                    if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"gridPickerItem",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_220 = (Il2CppClass *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_220,
                                                             0.045,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[0xb].klass = local_220;
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "gridPickerThumbnail";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2e8 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2e8,0
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2e8;
                                                    local_2ea = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2ea,0
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2ea;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"gridPickerThumbnail",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("gridPickerLabel","textMuted",
                                                             (System_String_o *)"text",500,
                                                             15.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"gridPickerLabel",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"gridPickerLabel",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[4].monitor = "center";
                                                    il2cpp_runtime_glue(&pIVar4[4].monitor);
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__ButtonStyle
                                                            ("profileGridItem","surfaceSoft",
                                                             (System_String_o *)"text",500,
                                                             16.0,144.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileGridItem",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileGridItem",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_228 = (void *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_228,
                                                             10.0,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[5].monitor = local_228;
                                                    if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileGridItem",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_230 = (Il2CppClass *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_230,
                                                             7.0,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[7].klass = local_230;
                                                    if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileGridItem",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[2].klass = "text";
                                                    il2cpp_runtime_glue(pIVar4 + 2);
                                                    if ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                    pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileGridItem",
                                                  MethodInfo_GisketchStyleDefinition_get_Item);
                                                  local_238 = (Il2CppClass *)0x0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&local_238,
                                                             0.045,MethodInfo_Nullable_1_Single);
                                                  if (pIVar4 != (Il2CppObject *)0x0) {
                                                    pIVar4[0xb].klass = local_238;
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileGridItemThumbnail";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "engravedBg";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2ec = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2ec,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2ec;
                                                    local_2ee = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2ee,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2ee;
                                                    local_240 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_240,
                                                               3.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_240;
                                                    local_248 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_248,
                                                               -1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).worn.fields.value = local_248
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileGridItemThumbnail",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileGridItemLabel","textMuted",
                                                             (System_String_o *)"text",500,
                                                             15.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileGridItemLabel",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileGridItemLabel",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[4].monitor = "center";
                                                    il2cpp_runtime_glue(&pIVar4[4].monitor);
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileEmoteSlotText","textMuted",
                                                             (System_String_o *)"text",500,
                                                             20.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileEmoteSlotText",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileEmoteSlotText",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[4].monitor = "center";
                                                    il2cpp_runtime_glue(&pIVar4[4].monitor);
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileEmoteWheelTitle",
                                                             (System_String_o *)"text",
                                                             "jek5",400,36.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileEmoteWheelTitle",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileEmoteWheelTitle",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[4].monitor = "center";
                                                    il2cpp_runtime_glue(&pIVar4[4].monitor);
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("profileEmoteWheelSubtext","textMuted",
                                                             (System_String_o *)"text",400,
                                                             18.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileEmoteWheelSubtext",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"profileEmoteWheelSubtext",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[4].monitor = "center";
                                                    il2cpp_runtime_glue(&pIVar4[4].monitor);
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "profileColorSwatch";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "surface";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    local_2f0 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2f0,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2f0;
                                                    local_2f2 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2f2,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2f2;
                                                    local_250 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_250,
                                                               2.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_250;
                                                    local_258 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_258,
                                                               1.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).worn.fields.value = local_258
                                                    ;
                                                    local_2f4 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2f4,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).wornStainScale.fields.value =
                                                         local_2f4;
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 42.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).width = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).width);
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 42.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).height = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).height,
                                                                       pGVar3);
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"profileColorSwatch",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "mainMenuLogo";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 640.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).width = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).width);
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 450.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).height = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).height,
                                                                       pGVar3);
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"mainMenuLogo",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "mainMenuBrushButton";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "primary";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    (pGVar2->fields).textColor = "void";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).textColor);
                                                    (pGVar2->fields).fontFamily = "menuText";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).fontFamily)
                                                    ;
                                                    local_260.hasValue = 0;
                                                    local_260.value = 0;
                                                    System_Nullable<int>___ctor
                                                              ((System_Nullable_int__o)&local_260,
                                                               400,MethodInfo_Nullable_1_Int32);
                                                    (pGVar2->fields).fontWeight.fields = local_260;
                                                    local_268.hasValue = 0;
                                                    local_268.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_268,
                                                               56.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).fontSize.fields = local_268;
                                                    (pGVar2->fields).textAlignment = "left";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).
                                                                        textAlignment);
                                                    local_270.hasValue = 0;
                                                    local_270.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_270,
                                                               52.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).iconSize.fields = local_270;
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 118.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).height = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).height,
                                                                       pGVar3);
                                                    local_278.hasValue = 0;
                                                    local_278.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_278,
                                                               112.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).paddingX.fields = local_278;
                                                    local_280.hasValue = 0;
                                                    local_280.value = 0.0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_280,
                                                               18.0,MethodInfo_Nullable_1_Single);
                                                    (pGVar2->fields).gap.fields = local_280;
                                                    local_2f6 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2f6,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     &(pGVar2->fields).textured.fields.hasValue =
                                                         local_2f6;
                                                    local_2f8 = 0;
                                                    System_Nullable<bool>___ctor
                                                              ((System_Nullable_bool__o)&local_2f8,1
                                                               ,MethodInfo_Nullable_1_Boolean);
                                                    *(undefined2 *)
                                                     ((long)&(pGVar2->fields).textured.fields.
                                                             hasValue + 2) = local_2f8;
                                                    local_288 = 0;
                                                    System_Nullable<float>___ctor
                                                              ((System_Nullable_float__o)&local_288,
                                                               4.0,MethodInfo_Nullable_1_Single);
                                                    *(undefined8 *)
                                                     &(pGVar2->fields).textured.fields.value =
                                                         local_288;
                                                    (pGVar2->fields).motion = "slide";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).motion);
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"mainMenuBrushButton",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "mainMenuTipPanel";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"mainMenuTipPanel",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "mainMenuTipBackground";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "primary";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"mainMenuTipBackground",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = 
                                                  Gisketch_Aottg2UI_Styling_GisketchTheme__TextStyle
                                                            ("mainMenuTipText","buttonText","jek5",
                                                             400,30.0,in_R8);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"mainMenuTipText",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
                                                  if (((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5 !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) && (pIVar4 = 
                                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5,(Il2CppObject *)"mainMenuTipText",
                                                  MethodInfo_GisketchStyleDefinition_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
                                                    pIVar4[4].monitor = "left";
                                                    il2cpp_runtime_glue(&pIVar4[4].monitor);
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)*ppSVar5;
                                                  pGVar2 = (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor
                                                            (pGVar2,(MethodInfo *)0x0);
                                                  if (pGVar2 != (
                                                  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
                                                  )0x0) {
                                                    (pGVar2->fields).name = "mainMenuFooterSpriteButton";
                                                    il2cpp_runtime_glue(&pGVar2->fields);
                                                    (pGVar2->fields).background = "clear";
                                                    il2cpp_runtime_glue(&(pGVar2->fields).background)
                                                    ;
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 48.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).width = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).width);
                                                    if (DAT_0570135b == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
                                                      il2cpp_init_method_metadata(&"point");
                                                      DAT_0570135b = '\x01';
                                                    }
                                                    pGVar3 = (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GisketchLength);
                                                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                                                            (pGVar3,(MethodInfo *)0x0);
                                                  if (pGVar3 != (
                                                  Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                                                    (pGVar3->fields).value = 48.0;
                                                    (pGVar3->fields).unit = "point";
                                                    il2cpp_runtime_glue(&(pGVar3->fields).unit);
                                                    (pGVar2->fields).height = pGVar3;
                                                    il2cpp_runtime_glue(&(pGVar2->fields).height,
                                                                       pGVar3);
                                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,(Il2CppObject *)"mainMenuFooterSpriteButton",
                                                             (Il2CppObject *)pGVar2,MethodInfo_Void_set_Item);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ApplyColors
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, Gisketch_Aottg2UI_Data_GisketchColorToken_array* colors, const MethodInfo* method);
// 0x3ad7b40

void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,
               Gisketch_Aottg2UI_Data_GisketchColorToken_array *colors,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchColorToken_o *pGVar2;
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  UnityEngine_Color_o value;
  UnityEngine_Color_o color;
  bool_conflict bVar3;
  MethodInfo *method_00;
  ulong uVar4;
  UnityEngine_Color_Fields local_48;
  
  if (DAT_0570135d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_0570135d = '\x01';
  }
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  if ((colors == (Gisketch_Aottg2UI_Data_GisketchColorToken_array *)0x0) ||
     ((int)colors->max_length < 1)) {
    return;
  }
  uVar4 = 0;
  if ((colors->max_length & 0xffffffff) != 0) {
    do {
      pGVar2 = colors->m_Items[uVar4];
      if ((((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchColorToken_o *)0x0) &&
           (bVar3 = System_String__IsNullOrEmpty((pGVar2->fields).name,(MethodInfo *)0x0),
           (char)bVar3 == '\0')) &&
          (bVar3 = System_String__IsNullOrEmpty((pGVar2->fields).value,(MethodInfo *)0x0),
          (char)bVar3 == '\0')) &&
         (bVar3 = UnityEngine_ColorUtility__TryParseHtmlString
                            ((pGVar2->fields).value,(UnityEngine_Color_o *)&local_48,
                             (MethodInfo *)0x0), (char)bVar3 != '\0')) {
        __this_00 = (__this->fields)._colors;
        if (__this_00 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        value.fields.b = local_48.b;
        value.fields.a = local_48.a;
        value.fields.r = local_48.r;
        value.fields.g = local_48.g;
        System_Collections_Generic_Dictionary<object__Color>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (Il2CppObject *)(pGVar2->fields).name,value,MethodInfo_Void_set_Item);
        color.fields.b = local_48.b;
        color.fields.a = local_48.a;
        color.fields.r = local_48.r;
        color.fields.g = local_48.g;
        Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyAlias
                  (__this,(pGVar2->fields).name,color,method_00);
      }
      uVar4 = uVar4 + 1;
      uVar1 = (uint)colors->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
        return;
      }
    } while (uVar4 < uVar1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$ApplyAlias
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyAlias (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* token, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3ad7c60

void Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyAlias
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *token,
               UnityEngine_Color_o color,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_Collections_Generic_Dictionary_string__Color__o *pSVar3;
  
  if (DAT_0570135e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"muted");
    il2cpp_init_method_metadata(&"primary");
    il2cpp_init_method_metadata(&"surface");
    il2cpp_init_method_metadata(&"accent2");
    il2cpp_init_method_metadata(&"accent");
    il2cpp_init_method_metadata(&"panelSoft");
    il2cpp_init_method_metadata(&"surfaceSoft");
    il2cpp_init_method_metadata(&"paper");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"panel");
    il2cpp_init_method_metadata(&"textMuted");
    il2cpp_init_method_metadata(&"secondary");
    il2cpp_init_method_metadata(&"ink");
    DAT_0570135e = '\x01';
  }
  bVar1 = System_String__op_Equality(token,"primary",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(token,"secondary",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(token,"surface",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality(token,"surfaceSoft",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__op_Equality(token,"text",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__op_Equality(token,"textMuted",(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              return;
            }
            pSVar3 = (__this->fields)._colors;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0)
            goto LAB_03ad7e9e;
            puVar2 = &"muted";
          }
          else {
            pSVar3 = (__this->fields)._colors;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__Color__o *)0x0)
            goto LAB_03ad7e9e;
            puVar2 = &"ink";
          }
LAB_03ad7e74:
          System_Collections_Generic_Dictionary<object__Color>__set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     (Il2CppObject *)*puVar2,color,MethodInfo_Void_set_Item);
          return;
        }
        pSVar3 = (__this->fields)._colors;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          puVar2 = &"panelSoft";
          goto LAB_03ad7e74;
        }
      }
      else {
        pSVar3 = (__this->fields)._colors;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
          System_Collections_Generic_Dictionary<object__Color>__set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,"paper",
                     color,MethodInfo_Void_set_Item);
          pSVar3 = (__this->fields)._colors;
          if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
            puVar2 = &"panel";
            goto LAB_03ad7e74;
          }
        }
      }
    }
    else {
      pSVar3 = (__this->fields)._colors;
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
        puVar2 = &"accent2";
        goto LAB_03ad7e74;
      }
    }
  }
  else {
    pSVar3 = (__this->fields)._colors;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
      puVar2 = &"accent";
      goto LAB_03ad7e74;
    }
  }
LAB_03ad7e9e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$FindPalette
// il2cpp: Gisketch_Aottg2UI_Data_GisketchThemePalette_o* Gisketch_Aottg2UI_Styling_GisketchTheme__FindPalette (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* definition, const MethodInfo* method);
// 0x3ad7eb0

Gisketch_Aottg2UI_Data_GisketchThemePalette_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__FindPalette
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,
          Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_array *pGVar2;
  System_String_o *b;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar3;
  bool_conflict bVar4;
  System_String_o **ppSVar5;
  ulong uVar6;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar8;
  
  if (DAT_0570135f == '\0') {
    il2cpp_init_method_metadata(&"light");
    DAT_0570135f = '\x01';
  }
  if (definition != (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    pGVar2 = (definition->fields).palettes;
    if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_array *)0x0) &&
       (pGVar2->max_length != 0)) {
      bVar4 = System_String__IsNullOrEmpty((definition->fields).mode,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        ppSVar5 = &(definition->fields).mode;
        pGVar2 = (definition->fields).palettes;
      }
      else {
        ppSVar5 = &"light";
        pGVar2 = (definition->fields).palettes;
      }
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchThemePalette_array *)0x0) goto LAB_03ad7f16;
      if (0 < (int)pGVar2->max_length) {
        b = *ppSVar5;
        uVar6 = 0;
        pGVar8 = (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0;
        if ((pGVar2->max_length & 0xffffffff) != 0) {
          do {
            pGVar3 = pGVar2->m_Items[uVar6];
            pGVar7 = pGVar8;
            if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) &&
               (bVar4 = System_String__IsNullOrEmpty((pGVar3->fields).name,(MethodInfo *)0x0),
               (char)bVar4 == '\0')) {
              bVar4 = System_String__Equals((pGVar3->fields).name,b,5,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                return pGVar3;
              }
              pGVar7 = pGVar3;
              if ((pGVar8 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) &&
                 (bVar4 = System_String__Equals
                                    ((pGVar3->fields).name,"light",5,(MethodInfo *)0x0),
                 (char)bVar4 == '\0')) {
                pGVar7 = pGVar8;
              }
            }
            uVar6 = uVar6 + 1;
            uVar1 = (uint)pGVar2->max_length;
            if ((long)(int)uVar1 <= (long)uVar6) {
              return pGVar7;
            }
            pGVar8 = pGVar7;
          } while (uVar6 < uVar1);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    return (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0;
  }
LAB_03ad7f16:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$MergeStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__MergeStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* baseStyle, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* patch, const MethodInfo* method);
// 0x3ad7ff0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__MergeStyle
          (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *baseStyle,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *patch,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  System_Nullable_int__Fields *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  System_Nullable_float__Fields *pSVar7;
  System_Nullable_bool__o *pSVar8;
  System_String_o *pSVar9;
  undefined1 local_42 [2];
  System_Nullable_float__Fields local_40;
  System_Nullable_int__Fields local_38;
  
  pGVar4 = patch;
  if (DAT_05701360 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05701360 = '\x01';
  }
  local_38.hasValue = 0;
  local_38.value = 0;
  local_40.hasValue = 0;
  local_40.value = 0.0;
  local_42 = (undefined1  [2])0x0;
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__CopyStyle(baseStyle,(MethodInfo *)pGVar4);
  if (patch != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((patch->fields).name,(MethodInfo *)0x0);
    pGVar2 = patch;
    if ((char)bVar3 != '\0') {
      pGVar2 = pGVar4;
    }
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
LAB_03ad849b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (pGVar4->fields).name = (pGVar2->fields).name;
    il2cpp_runtime_glue(&pGVar4->fields);
    pSVar9 = (patch->fields).background;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).background;
    }
    (pGVar4->fields).background = pSVar9;
    il2cpp_runtime_glue(&(pGVar4->fields).background);
    pSVar9 = (patch->fields).textColor;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).textColor;
    }
    (pGVar4->fields).textColor = pSVar9;
    il2cpp_runtime_glue(&(pGVar4->fields).textColor);
    pSVar9 = (patch->fields).fontFamily;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).fontFamily;
    }
    (pGVar4->fields).fontFamily = pSVar9;
    il2cpp_runtime_glue(&(pGVar4->fields).fontFamily);
    local_38 = (patch->fields).fontWeight.fields;
    pSVar5 = &local_38;
    if ((char)local_38.hasValue == '\0') {
      pSVar5 = &(pGVar4->fields).fontWeight.fields;
    }
    (pGVar4->fields).fontWeight.fields = *pSVar5;
    local_40 = (patch->fields).fontSize.fields;
    pSVar7 = &(pGVar4->fields).fontSize.fields;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).fontSize.fields = *pSVar7;
    pSVar9 = (patch->fields).textAlignment;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).textAlignment;
    }
    (pGVar4->fields).textAlignment = pSVar9;
    il2cpp_runtime_glue(&(pGVar4->fields).textAlignment);
    local_40 = (patch->fields).iconSize.fields;
    pSVar7 = &(pGVar4->fields).iconSize.fields;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).iconSize.fields = *pSVar7;
    local_40 = (patch->fields).padding.fields;
    pSVar7 = &(pGVar4->fields).padding.fields;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).padding.fields = *pSVar7;
    local_40 = (patch->fields).paddingX.fields;
    pSVar7 = &(pGVar4->fields).paddingX.fields;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).paddingX.fields = *pSVar7;
    local_40 = (patch->fields).paddingY.fields;
    pSVar7 = &(pGVar4->fields).paddingY.fields;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).paddingY.fields = *pSVar7;
    local_40 = (patch->fields).gap.fields;
    pSVar7 = &(pGVar4->fields).gap.fields;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).gap.fields = *pSVar7;
    pGVar1 = (patch->fields).width;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pGVar6 = (pGVar4->fields).width;
    }
    else {
      if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05701362 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
        DAT_05701362 = '\x01';
      }
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto LAB_03ad849b;
      (pGVar6->fields).value = (pGVar1->fields).value;
      (pGVar6->fields).unit = (pGVar1->fields).unit;
      il2cpp_runtime_glue(&(pGVar6->fields).unit);
    }
    (pGVar4->fields).width = pGVar6;
    il2cpp_runtime_glue(&(pGVar4->fields).width);
    pGVar1 = (patch->fields).height;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pGVar6 = (pGVar4->fields).height;
    }
    else {
      if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05701362 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
        DAT_05701362 = '\x01';
      }
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar6,(MethodInfo *)0x0);
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto LAB_03ad849b;
      (pGVar6->fields).value = (pGVar1->fields).value;
      (pGVar6->fields).unit = (pGVar1->fields).unit;
      il2cpp_runtime_glue(&(pGVar6->fields).unit);
    }
    (pGVar4->fields).height = pGVar6;
    il2cpp_runtime_glue(&(pGVar4->fields).height,pGVar6);
    local_40 = (patch->fields).aspectRatio.fields;
    pSVar7 = &(pGVar4->fields).aspectRatio.fields;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).aspectRatio.fields = *pSVar7;
    pSVar9 = (patch->fields).motion;
    if (pSVar9 == (System_String_o *)0x0) {
      pSVar9 = (pGVar4->fields).motion;
    }
    (pGVar4->fields).motion = pSVar9;
    il2cpp_runtime_glue(&(pGVar4->fields).motion);
    local_42 = SUB42((patch->fields).textured.fields.hasValue,0);
    pSVar8 = &(pGVar4->fields).textured;
    if (SUB21(local_42,0) != '\0') {
      pSVar8 = (System_Nullable_bool__o *)local_42;
    }
    *(short *)&(pGVar4->fields).textured.fields.hasValue = (short)(pSVar8->fields).hasValue;
    local_42 = *(undefined1 (*) [2])((long)&(patch->fields).textured.fields.hasValue + 2);
    pSVar8 = (System_Nullable_bool__o *)((long)&(pGVar4->fields).textured.fields.hasValue + 2);
    if (SUB21(local_42,0) != '\0') {
      pSVar8 = (System_Nullable_bool__o *)local_42;
    }
    *(short *)((long)&(pGVar4->fields).textured.fields.hasValue + 2) =
         (short)(pSVar8->fields).hasValue;
    local_40 = *(System_Nullable_float__Fields *)&(patch->fields).textured.fields.value;
    pSVar7 = (System_Nullable_float__Fields *)&(pGVar4->fields).textured.fields.value;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    *(System_Nullable_float__Fields *)&(pGVar4->fields).textured.fields.value = *pSVar7;
    local_40 = *(System_Nullable_float__Fields *)&(patch->fields).worn.fields.value;
    pSVar7 = (System_Nullable_float__Fields *)&(pGVar4->fields).worn.fields.value;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    *(System_Nullable_float__Fields *)&(pGVar4->fields).worn.fields.value = *pSVar7;
    local_42 = *(undefined1 (*) [2])&(patch->fields).wornStainScale.fields.value;
    pSVar8 = (System_Nullable_bool__o *)&(pGVar4->fields).wornStainScale.fields.value;
    if (SUB21(local_42,0) != '\0') {
      pSVar8 = (System_Nullable_bool__o *)local_42;
    }
    *(short *)&(pGVar4->fields).wornStainScale.fields.value = (short)(pSVar8->fields).hasValue;
    local_40 = (patch->fields).relief.fields;
    pSVar7 = &(pGVar4->fields).relief.fields;
    if ((char)local_40.hasValue != '\0') {
      pSVar7 = &local_40;
    }
    (pGVar4->fields).relief.fields = *pSVar7;
    local_42 = SUB42((patch->fields).reliefGradient.fields.hasValue,0);
    pSVar8 = &(pGVar4->fields).reliefGradient;
    if (SUB21(local_42,0) != '\0') {
      pSVar8 = (System_Nullable_bool__o *)local_42;
    }
    *(short *)&(pGVar4->fields).reliefGradient.fields.hasValue = (short)(pSVar8->fields).hasValue;
  }
  return pGVar4;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__CopyStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x3ad84a0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__CopyStyle
          (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  
  if (DAT_05701361 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    DAT_05701361 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchStyleDefinition);
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition___ctor(__this,(MethodInfo *)0x0);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return __this;
  }
  if (__this == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto LAB_03ad8757;
  (__this->fields).name = (style->fields).name;
  il2cpp_runtime_glue(&__this->fields);
  (__this->fields).background = (style->fields).background;
  il2cpp_runtime_glue(&(__this->fields).background);
  (__this->fields).textColor = (style->fields).textColor;
  il2cpp_runtime_glue(&(__this->fields).textColor);
  (__this->fields).fontFamily = (style->fields).fontFamily;
  il2cpp_runtime_glue(&(__this->fields).fontFamily);
  (__this->fields).fontWeight.fields = (style->fields).fontWeight.fields;
  (__this->fields).fontSize.fields = (style->fields).fontSize.fields;
  (__this->fields).textAlignment = (style->fields).textAlignment;
  il2cpp_runtime_glue(&(__this->fields).textAlignment);
  (__this->fields).iconSize.fields = (style->fields).iconSize.fields;
  (__this->fields).padding.fields = (style->fields).padding.fields;
  (__this->fields).paddingX.fields = (style->fields).paddingX.fields;
  (__this->fields).paddingY.fields = (style->fields).paddingY.fields;
  (__this->fields).gap.fields = (style->fields).gap.fields;
  pGVar1 = (style->fields).width;
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05701362 != '\0') goto LAB_03ad85ae;
LAB_03ad8606:
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    DAT_05701362 = '\x01';
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto LAB_03ad85b3;
LAB_03ad861e:
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    if (DAT_05701362 == '\0') goto LAB_03ad8606;
LAB_03ad85ae:
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto LAB_03ad861e;
LAB_03ad85b3:
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto LAB_03ad8757;
    (pGVar2->fields).value = (pGVar1->fields).value;
    (pGVar2->fields).unit = (pGVar1->fields).unit;
    il2cpp_runtime_glue(&(pGVar2->fields).unit);
  }
  (__this->fields).width = pGVar2;
  il2cpp_runtime_glue(&(__this->fields).width);
  pGVar1 = (style->fields).height;
  if (DAT_05701362 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    DAT_05701362 = '\x01';
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
LAB_03ad8757:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (pGVar2->fields).value = (pGVar1->fields).value;
    (pGVar2->fields).unit = (pGVar1->fields).unit;
    il2cpp_runtime_glue(&(pGVar2->fields).unit);
  }
  (__this->fields).height = pGVar2;
  il2cpp_runtime_glue(&(__this->fields).height,pGVar2);
  (__this->fields).aspectRatio.fields = (style->fields).aspectRatio.fields;
  (__this->fields).motion = (style->fields).motion;
  il2cpp_runtime_glue(&(__this->fields).motion);
  *(short *)&(__this->fields).textured.fields.hasValue =
       (short)(style->fields).textured.fields.hasValue;
  *(undefined2 *)((long)&(__this->fields).textured.fields.hasValue + 2) =
       *(undefined2 *)((long)&(style->fields).textured.fields.hasValue + 2);
  *(undefined8 *)&(__this->fields).textured.fields.value =
       *(undefined8 *)&(style->fields).textured.fields.value;
  *(undefined8 *)&(__this->fields).worn.fields.value =
       *(undefined8 *)&(style->fields).worn.fields.value;
  *(undefined2 *)&(__this->fields).wornStainScale.fields.value =
       *(undefined2 *)&(style->fields).wornStainScale.fields.value;
  (__this->fields).relief.fields = (style->fields).relief.fields;
  *(short *)&(__this->fields).reliefGradient.fields.hasValue =
       (short)(style->fields).reliefGradient.fields.hasValue;
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyLength
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Styling_GisketchTheme__CopyLength (Gisketch_Aottg2UI_Data_GisketchLength_o* length, const MethodInfo* method);
// 0x3ad8760

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__CopyLength
          (Gisketch_Aottg2UI_Data_GisketchLength_o *length,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  
  if (DAT_05701362 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    DAT_05701362 = '\x01';
  }
  if (length == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    __this = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    __this = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields).value = (length->fields).value;
    (__this->fields).unit = (length->fields).unit;
    il2cpp_runtime_glue(&(__this->fields).unit);
  }
  return __this;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$get_ReliefIntensity
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchTheme__get_ReliefIntensity (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x3ad87e0

float Gisketch_Aottg2UI_Styling_GisketchTheme__get_ReliefIntensity
                (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  return (__this->fields)._ReliefIntensity_k__BackingField;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$set_ReliefIntensity
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__set_ReliefIntensity (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, float value, const MethodInfo* method);
// 0x3ad87f0

void Gisketch_Aottg2UI_Styling_GisketchTheme__set_ReliefIntensity
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._ReliefIntensity_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$get_IsDarkMode
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTheme__get_IsDarkMode (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x3ad8800

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchTheme__get_IsDarkMode
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsDarkMode_k__BackingField);
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$set_IsDarkMode
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme__set_IsDarkMode (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, bool value, const MethodInfo* method);
// 0x3ad8810

void Gisketch_Aottg2UI_Styling_GisketchTheme__set_IsDarkMode
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._IsDarkMode_k__BackingField = (char)value;
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$FromJson
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson (System_String_o* json, const MethodInfo* method);
// 0x3ac2dd0

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(System_String_o *json,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_05701363 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    DAT_05701363 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) != 0) {
    pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,method_00);
    return pGVar1;
  }
  il2cpp_init_class();
  pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$FromDefinition
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* definition, const MethodInfo* method);
// 0x3ac2e30

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition
          (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Data_GisketchColorToken_array *colors;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *pGVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *value;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_Data_GisketchMotionToken_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionToken_o *value_00;
  bool_conflict bVar6;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchThemePalette_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar8;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  ulong uVar10;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *baseStyle;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_40;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *local_38;
  
  if (DAT_05701364 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&"dark");
    DAT_05701364 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)il2cpp_runtime_glue(TypeInfo_GisketchTheme);
  Gisketch_Aottg2UI_Styling_GisketchTheme___ctor(__this_00,method);
  if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    Gisketch_Aottg2UI_Styling_GisketchTheme__AddDefaults(__this_00,method);
    if (definition == (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
      return __this_00;
    }
    __this_01 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)(definition->fields).mode;
    bVar6 = System_String__Equals((System_String_o *)__this_01,"dark",5,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      *(undefined1 *)&(__this_00->fields)._IsDarkMode_k__BackingField = 1;
      (__this_00->fields)._ReliefIntensity_k__BackingField = 0.5;
    }
    colors = (definition->fields).colors;
    pMVar9 = method_00;
    if (colors != (Gisketch_Aottg2UI_Data_GisketchColorToken_array *)0x0) {
      __this_01 = __this_00;
      Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors(__this_00,colors,method_00);
      pMVar9 = extraout_RDX;
    }
    pGVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__FindPalette(__this_01,definition,pMVar9);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchThemePalette_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchTheme__ApplyColors
                (__this_00,(pGVar7->fields).colors,method_01);
    }
    pGVar3 = (definition->fields).styles;
    local_38 = definition;
    if ((pGVar3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_array *)0x0) ||
       ((int)pGVar3->max_length < 1)) {
LAB_03ac3050:
      pGVar5 = (local_38->fields).motions;
      if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchMotionToken_array *)0x0) {
        return __this_00;
      }
      if ((int)pGVar5->max_length < 1) {
        return __this_00;
      }
      uVar10 = 0;
      if ((pGVar5->max_length & 0xffffffff) != 0) {
        do {
          value_00 = pGVar5->m_Items[uVar10];
          if ((value_00 != (Gisketch_Aottg2UI_Data_GisketchMotionToken_o *)0x0) &&
             (bVar6 = System_String__IsNullOrEmpty((value_00->fields).name,(MethodInfo *)0x0),
             (char)bVar6 == '\0')) {
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this_00->fields)._motions;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03ac30e2;
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar4,(Il2CppObject *)(value_00->fields).name,(Il2CppObject *)value_00,
                       MethodInfo_Void_set_Item);
          }
          uVar10 = uVar10 + 1;
          uVar1 = (uint)pGVar5->max_length;
          if ((long)(int)uVar1 <= (long)uVar10) {
            return __this_00;
          }
        } while (uVar10 < uVar1);
      }
    }
    else {
      uVar10 = 0;
      if ((pGVar3->max_length & 0xffffffff) != 0) {
        do {
          pGVar8 = pGVar3->m_Items[uVar10];
          if ((pGVar8 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
             (bVar6 = System_String__IsNullOrEmpty((pGVar8->fields).name,(MethodInfo *)0x0),
             (char)bVar6 == '\0')) {
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this_00->fields)._styles;
            value = (pGVar8->fields).name;
            if (DAT_0570136a == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
              DAT_0570136a = '\x01';
            }
            local_40 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
            bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            pMVar9 = extraout_RDX_00;
            baseStyle = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
            if ((char)bVar6 == '\0') {
              __this = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this_00->fields)._styles;
              if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_03ac30e2;
              bVar6 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                                (__this,(Il2CppObject *)value,(Il2CppObject **)&local_40,
                                 MethodInfo_Boolean_TryGetValue);
              pMVar9 = extraout_RDX_01;
              baseStyle = local_40;
              if ((char)bVar6 != '\0') goto LAB_03ac2feb;
              baseStyle = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
              iVar2 = *(int *)(TypeInfo_GisketchTheme + 0xe4);
            }
            else {
LAB_03ac2feb:
              iVar2 = *(int *)(TypeInfo_GisketchTheme + 0xe4);
            }
            if (iVar2 == 0) {
              il2cpp_init_class();
              pMVar9 = extraout_RDX_02;
            }
            pGVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__MergeStyle(baseStyle,pGVar8,pMVar9);
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03ac30e2;
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar4,(Il2CppObject *)value,(Il2CppObject *)pGVar8,MethodInfo_Void_set_Item);
          }
          uVar10 = uVar10 + 1;
          uVar1 = (uint)pGVar3->max_length;
          if ((long)(int)uVar1 <= (long)uVar10) goto LAB_03ac3050;
        } while (uVar10 < uVar1);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ac30e2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetStyle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3ad89d0

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_18;
  
  if (DAT_05701365 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_GisketchStyleDefinition_get_Item);
    il2cpp_init_method_metadata(&"default");
    DAT_05701365 = '\x01';
  }
  local_18 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03ad8a7c;
    bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (pSVar1,(Il2CppObject *)name,(Il2CppObject **)&local_18,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 != '\0') {
      return local_18;
    }
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar1,"default",MethodInfo_GisketchStyleDefinition_get_Item);
    return pGVar3;
  }
LAB_03ad8a7c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$TryGetStyle
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o** style, const MethodInfo* method);
// 0x3ad8a90

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **style,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05701366 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05701366 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)name,(Il2CppObject **)style,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 != '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)name >> 8),1);
    }
  }
  *style = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  il2cpp_runtime_glue(style,0);
  return 0;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* token, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x3ad8b10

UnityEngine_Color_o
Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *token,
          UnityEngine_Color_o fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  bool_conflict bVar1;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_Fields local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [24];
  
  local_28._8_4_ = in_XMM1_Dc;
  local_28._0_8_ = fallback.fields._8_8_;
  local_28._12_4_ = in_XMM1_Dd;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = fallback.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (DAT_05701367 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05701367 = '\x01';
  }
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  bVar1 = System_String__IsNullOrEmpty(token,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    UVar2.fields.b = (float)local_28._0_4_;
    UVar2.fields.a = (float)local_28._4_4_;
    UVar2.fields.r = (float)local_38._0_4_;
    UVar2.fields.g = (float)local_38._4_4_;
    return (UnityEngine_Color_o)UVar2.fields;
  }
  __this_00 = (__this->fields)._colors;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__Color__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__Color>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)token,(UnityEngine_Color_o *)&local_48,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 != '\0') {
      local_38._0_4_ = local_48.r;
      local_38._4_4_ = local_48.g;
      local_28._0_4_ = local_48.b;
      local_28._4_4_ = local_48.a;
    }
    UVar3.fields.g = (float)local_38._4_4_;
    UVar3.fields.r = (float)local_38._0_4_;
    UVar3.fields.a = (float)local_28._4_4_;
    UVar3.fields.b = (float)local_28._0_4_;
    return (UnityEngine_Color_o)UVar3.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetMotionPreset
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionPreset (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* tokenOrPreset, const MethodInfo* method);
// 0x3ad8bb0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionPreset
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *tokenOrPreset,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *local_18;
  
  if (DAT_05701368 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05701368 = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(tokenOrPreset,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._motions
    ;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03ad8c26:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)tokenOrPreset,&local_18,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 != '\0') {
      if (local_18 == (Il2CppObject *)0x0) goto LAB_03ad8c26;
      tokenOrPreset = local_18[1].monitor;
    }
  }
  return tokenOrPreset;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$GetMotionDuration
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionDuration (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* tokenOrPreset, float fallback, const MethodInfo* method);
// 0x3ad8c30

float Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionDuration
                (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *tokenOrPreset,
                float fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *local_18;
  
  if (DAT_05701369 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05701369 = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(tokenOrPreset,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return fallback;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._motions;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)tokenOrPreset,&local_18,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      return fallback;
    }
    if (local_18 != (Il2CppObject *)0x0) {
      if (0.0 < *(float *)&local_18[2].klass) {
        fallback = *(float *)&local_18[2].klass;
      }
      return fallback;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$StyleOrNull
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* Gisketch_Aottg2UI_Styling_GisketchTheme__StyleOrNull (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3ad8940

Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *
Gisketch_Aottg2UI_Styling_GisketchTheme__StyleOrNull
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,System_String_o *name,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_20;
  
  if (DAT_0570136a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_0570136a = '\x01';
  }
  local_20 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  if ((char)bVar1 == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._styles;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)name,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
    pGVar2 = local_20;
    if ((char)bVar1 == '\0') {
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
    }
  }
  return pGVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme___ctor (Gisketch_Aottg2UI_Styling_GisketchTheme_o* __this, const MethodInfo* method);
// 0x3ad8820

void Gisketch_Aottg2UI_Styling_GisketchTheme___ctor
               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Color__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if (DAT_0570136b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Dat);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Color);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Dat);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__GisketchStyleDefinition);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Color);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__GisketchMotionToken);
    DAT_0570136b = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__Color__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Color);
  System_Collections_Generic_Dictionary<object__Color>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Color);
  (__this->fields)._colors = __this_00;
  il2cpp_runtime_glue(&__this->fields,__this_00);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__GisketchStyleDefinition);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar1,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Dat);
  (__this->fields)._styles =
       (System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._styles,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__GisketchMotionToken);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar1,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Dat);
  (__this->fields)._motions =
       (System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._motions);
  (__this->fields)._ReliefIntensity_k__BackingField = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTheme$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTheme___cctor (const MethodInfo* method);
// 0x3ad8ce0

void Gisketch_Aottg2UI_Styling_GisketchTheme___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_0570136c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchThemeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    DAT_0570136c = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchThemeDefinition);
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor(__this,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(__this,method_00);
  **(undefined8 **)(TypeInfo_GisketchTheme + 0xb8) = pGVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchTheme + 0xb8),pGVar1);
  return;
}


