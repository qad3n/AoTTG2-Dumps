// Type: Gisketch.Aottg2UI.Code.AottgScreen
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgScreen__get_RootStyle (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x1818c6830

System_String_o *
Gisketch_Aottg2UI_Code_AottgScreen__get_RootStyle
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342070 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    Il2CppMethodInitialized_184342070 = '\x01';
  }
  return "screen";
}


// Gisketch.Aottg2UI.Code.AottgScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgScreen__get_RootLayout (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x1818c6720

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgScreen__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342071 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    Il2CppMethodInitialized_184342071 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgScreen$$BuildDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, System_String_o* id, System_String_o* title, System_String_o* titleKey, System_String_o* searchTitle, System_String_o* searchTitleKey, System_String_o* searchGroup, System_String_o* backScreenId, System_String_o* backActionId, int32_t lifecycle, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x1818c6430

Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *
Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,System_String_o *id,System_String_o *title,
          System_String_o *titleKey,System_String_o *searchTitle,System_String_o *searchTitleKey,
          System_String_o *searchGroup,System_String_o *backScreenId,System_String_o *backActionId,
          int32_t lifecycle,Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this_02;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value_00;
  
  if (Il2CppMethodInitialized_184342072 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchScreenDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_184342072 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,id,actions,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._6_Build.methodPtr)(__this,__this_01,(__this->klass->vtable)._6_Build.method);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchScreenDefinition);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    (__this_02->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).id,id);
    pSVar2 = Gisketch_Aottg2UI_Code_AottgScreen__Localized(titleKey,title,(MethodInfo *)0x0);
    (__this_02->fields).title = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).title,pSVar2);
    pSVar2 = Gisketch_Aottg2UI_Code_AottgScreen__Localized(searchTitleKey,searchTitle,(MethodInfo *)0x0);
    (__this_02->fields).searchTitle = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).searchTitle,pSVar2);
    bVar1 = System_String__IsNullOrEmpty(searchGroup,(MethodInfo *)0x0);
    pSVar2 = id;
    if (!bVar1) {
      pSVar2 = searchGroup;
    }
    (__this_02->fields).searchGroup = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).searchGroup,pSVar2);
    (__this_02->fields).backScreenId = backScreenId;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).backScreenId,backScreenId);
    (__this_02->fields).backActionId = backActionId;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).backActionId,backActionId);
    (__this_02->fields).lifecycle = lifecycle;
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    (__this_03->fields).active = true;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_03,(MethodInfo *)0x0);
    (__this_03->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).type,"Panel");
    (__this_03->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).id,id);
    pSVar2 = (*(__this->klass->vtable)._4_get_RootStyle.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_RootStyle.method);
    (__this_03->fields).style = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).style,pSVar2);
    value = (*(__this->klass->vtable)._5_get_RootLayout.methodPtr)
                      (__this,(__this->klass->vtable)._5_get_RootLayout.method);
    (__this_03->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).layout,value);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_18434209a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        Il2CppMethodInitialized_18434209a = '\x01';
      }
      __this_00 = (__this_01->fields)._children;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        value_00 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                             ((System_Collections_Generic_List_T__o *)__this_00,
                              (MethodInfo_929FE0 *)
                              MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        (__this_03->fields).children = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)value_00;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).children,value_00);
        (__this_02->fields).root = __this_03;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).root,__this_03);
        return __this_02;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgScreen$$Localized
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgScreen__Localized (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x1818c66a0

System_String_o *
Gisketch_Aottg2UI_Code_AottgScreen__Localized
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184342073 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184342073 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1) {
    return fallback;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Code.AottgScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgScreen___ctor (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Code_AottgScreen___ctor(Gisketch_Aottg2UI_Code_AottgScreen_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


