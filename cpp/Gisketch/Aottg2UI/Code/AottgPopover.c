// Type: Gisketch.Aottg2UI.Code.AottgPopover
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgPopover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgPopover$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgPopover__get_RootStyle (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, const MethodInfo* method);
// 0x1818c6320

System_String_o *
Gisketch_Aottg2UI_Code_AottgPopover__get_RootStyle
          (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434206d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_18434206d = '\x01';
  }
  return "popover";
}


// Gisketch.Aottg2UI.Code.AottgPopover$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgPopover__get_RootLayout (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, const MethodInfo* method);
// 0x1818c6220

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgPopover__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_18434206e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_18434206e = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(420.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgPopover$$BuildDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* attribute, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x1818c6030

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition
          (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *attribute,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  int32_t iVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value_01;
  
  if (Il2CppMethodInitialized_18434206f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_18434206f = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,id,actions,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._6_Build.methodPtr)(__this,__this_01,(__this->klass->vtable)._6_Build.method);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
  (__this_02->fields).modal = true;
  (__this_02->fields).dismissOnBackdrop = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    (__this_02->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).id,id);
    (__this_02->fields).modal = false;
    if (attribute == (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x0) {
      (__this_02->fields).dismissOnBackdrop = false;
      iVar1 = 0;
    }
    else {
      (__this_02->fields).dismissOnBackdrop = (attribute->fields)._DismissOnBackdrop_k__BackingField != false;
      iVar1 = (attribute->fields)._Lifecycle_k__BackingField;
    }
    (__this_02->fields).lifecycle = iVar1;
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    (__this_03->fields).active = true;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_03,(MethodInfo *)0x0);
    (__this_03->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).type,"Panel");
    (__this_03->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).id,id);
    value = (*(__this->klass->vtable)._4_get_RootStyle.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_RootStyle.method);
    (__this_03->fields).style = value;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).style,value);
    value_00 = (*(__this->klass->vtable)._5_get_RootLayout.methodPtr)
                         (__this,(__this->klass->vtable)._5_get_RootLayout.method);
    (__this_03->fields).layout = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).layout,value_00);
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (Il2CppMethodInitialized_18434209a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        Il2CppMethodInitialized_18434209a = '\x01';
      }
      __this_00 = (__this_01->fields)._children;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        value_01 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                             ((System_Collections_Generic_List_T__o *)__this_00,
                              (MethodInfo_929FE0 *)
                              MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        (__this_03->fields).children = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)value_01;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).children,value_01);
        (__this_02->fields).root = __this_03;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).root,__this_03);
        return __this_02;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgPopover___ctor (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Code_AottgPopover___ctor(Gisketch_Aottg2UI_Code_AottgPopover_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


