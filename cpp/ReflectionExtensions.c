// Type: ReflectionExtensions
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ReflectionExtensions.cs
// Prior real C# source: none
// --------------------------------

// ReflectionExtensions$$HasAttribute<object>
// il2cpp: bool ReflectionExtensions__HasAttribute_object_ (System_Type_o* member, const MethodInfo_792D20* method);
// 0x180792d20

bool ReflectionExtensions__HasAttribute_object_
               (System_Reflection_MemberInfo_o *member,MethodInfo_792D20 *method)

{
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_792D20_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  pIVar1 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute_object__66e140
                     (member,(MethodInfo_66E140 *)
                             method->rgctx_data->
                             _0_System_Reflection_CustomAttributeExtensions_GetCustomAttribute_T_);
  return pIVar1 != (Il2CppObject *)0x0;
}


// ReflectionExtensions$$HasAttribute<object>
// il2cpp: bool ReflectionExtensions__HasAttribute_object_ (System_Reflection_MemberInfo_o* member, const MethodInfo_792D20* method);
// 0x180792d20

bool ReflectionExtensions__HasAttribute_object_
               (System_Reflection_MemberInfo_o *member,MethodInfo_792D20 *method)

{
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_792D20_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  pIVar1 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute_object__66e140
                     (member,(MethodInfo_66E140 *)
                             method->rgctx_data->
                             _0_System_Reflection_CustomAttributeExtensions_GetCustomAttribute_T_);
  return pIVar1 != (Il2CppObject *)0x0;
}


// ReflectionExtensions$$.cctor
// il2cpp: void ReflectionExtensions___cctor (const MethodInfo* method);
// 0x181dae410

void ReflectionExtensions___cctor(MethodInfo *method)

{
  longlong lVar1;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843448fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    Il2CppMethodInitialized_1843448fe = '\x01';
  }
  lVar1 = g_data_184354e08;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(lVar1 + 0x20),(MethodInfo *)0x0);
  TypeInfo_ReflectionExtensions->static_fields->IntType = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ReflectionExtensions->static_fields->IntType,pSVar2);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)(g_data_184354e38 + 0x20),(MethodInfo *)0x0);
  TypeInfo_ReflectionExtensions->static_fields->FloatType = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ReflectionExtensions->static_fields->FloatType,pSVar2);
  return;
}


