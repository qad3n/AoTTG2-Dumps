// Type: Gisketch.Aottg2UI.Code.AottgPopover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgPopover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgPopover$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgPopover__get_RootStyle (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, const MethodInfo* method);
// 0x5366db0

System_String_o *
Gisketch_Aottg2UI_Code_AottgPopover__get_RootStyle
          (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075429eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_075429eb = '\x01';
  }
  return "popover";
}


// Gisketch.Aottg2UI.Code.AottgPopover$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgPopover__get_RootLayout (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, const MethodInfo* method);
// 0x5366de0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgPopover__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_fffffffffffffff0;
  
  if (Il2CppMethodInitialized_075429ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075429ec = '\x01';
  }
  if (Il2CppMethodInitialized_07542a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542a23 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).value = 420.0;
  (__this_00->fields).unit = "point";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,__this_00,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,in_stack_fffffffffffffff0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgPopover$$BuildDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* attribute, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x5366f90

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition
          (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *attribute,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  MethodInfo *method_00;
  int32_t iVar5;
  
  method_00 = (MethodInfo *)actions;
  if (Il2CppMethodInitialized_075429ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_075429ed = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,id,actions,method_00);
  (*(__this->klass->vtable)._6_Build.methodPtr)(__this,__this_01,(__this->klass->vtable)._6_Build.method);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
  iVar5 = 0;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    (__this_02->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).id);
    (__this_02->fields).modal = false;
    if (attribute == (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = (attribute->fields)._DismissOnBackdrop_k__BackingField;
      iVar5 = (attribute->fields)._Lifecycle_k__BackingField;
    }
    (__this_02->fields).dismissOnBackdrop = bVar1;
    (__this_02->fields).lifecycle = iVar5;
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_03->fields).type = "Panel";
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).type);
      (__this_03->fields).id = id;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).id);
      pSVar2 = (*(__this->klass->vtable)._4_get_RootStyle.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_RootStyle.method);
      (__this_03->fields).style = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).style);
      pGVar3 = (*(__this->klass->vtable)._5_get_RootLayout.methodPtr)
                         (__this,(__this->klass->vtable)._5_get_RootLayout.method);
      (__this_03->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).layout);
      if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        if (Il2CppMethodInitialized_07542a18 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
          Il2CppMethodInitialized_07542a18 = '\x01';
        }
        __this_00 = (__this_01->fields)._children;
        if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                   System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              (MethodInfo_395F5A0 *)
                              MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
          (__this_03->fields).children = pGVar4;
          Il2CppCodeGenWriteBarrier(&(__this_03->fields).children);
          (__this_02->fields).root = __this_03;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).root);
          return __this_02;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgPopover___ctor (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, const MethodInfo* method);
// 0x5367280

void Gisketch_Aottg2UI_Code_AottgPopover___ctor
               (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


