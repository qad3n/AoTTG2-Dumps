// Type: ReflectionExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ReflectionExtensions.cs
// Prior real C# source: none
// --------------------------------

// ReflectionExtensions$$HasAttribute<object>
// il2cpp: bool ReflectionExtensions__HasAttribute_object_ (System_Type_o* member, const MethodInfo_36619F0* method);
// 0x37619f0

bool ReflectionExtensions__HasAttribute_object_(System_Type_o *member,MethodInfo_36619F0 *method)

{
  MethodInfo_36619F0_RGCTXs *pMVar1;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_36619F0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar1 = method->rgctx_data;
  }
  pIVar2 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute_object__34bd5a0
                     ((System_Reflection_MemberInfo_o *)member,
                      (MethodInfo_34BD5A0 *)
                      pMVar1->_0_System_Reflection_CustomAttributeExtensions_GetCustomAttribute_T_);
  return pIVar2 != (Il2CppObject *)0x0;
}


// ReflectionExtensions$$HasAttribute<object>
// il2cpp: bool ReflectionExtensions__HasAttribute_object_ (System_Reflection_MemberInfo_o* member, const MethodInfo_36619B0* method);
// 0x37619b0

bool ReflectionExtensions__HasAttribute_object__36619b0
               (System_Reflection_MemberInfo_o *member,MethodInfo_36619B0 *method)

{
  MethodInfo_36619B0_RGCTXs *pMVar1;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_36619B0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar1 = method->rgctx_data;
  }
  pIVar2 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute_object__34bd5a0
                     (member,(MethodInfo_34BD5A0 *)
                             pMVar1->_0_System_Reflection_CustomAttributeExtensions_GetCustomAttribute_T_);
  return pIVar2 != (Il2CppObject *)0x0;
}


// ReflectionExtensions$$.cctor
// il2cpp: void ReflectionExtensions___cctor (const MethodInfo* method);
// 0x5852010

void ReflectionExtensions___cctor(MethodInfo *method)

{
  ReflectionExtensions_StaticFields *pRVar1;
  long lVar2;
  System_Type_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545056 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    Il2CppMethodInitialized_07545056 = '\x01';
  }
  lVar2 = g_data_07556710;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(lVar2 + 0x20),(MethodInfo *)0x0);
  TypeInfo_ReflectionExtensions->static_fields->IntType = pSVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ReflectionExtensions->static_fields->IntType);
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(g_data_07556740 + 0x20),(MethodInfo *)0x0)
  ;
  pRVar1 = TypeInfo_ReflectionExtensions->static_fields;
  pRVar1->FloatType = pSVar3;
  Il2CppCodeGenWriteBarrier(&pRVar1->FloatType);
  return;
}


