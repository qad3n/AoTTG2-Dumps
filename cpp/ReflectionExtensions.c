// Type: ReflectionExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ReflectionExtensions.cs
// Prior real C# source: none
// --------------------------------

// ReflectionExtensions$$HasAttribute<object>
// il2cpp: bool ReflectionExtensions__HasAttribute_object_ (System_Type_o* member, const MethodInfo_25B84C0* method);
// 0x26b84c0

bool_conflict ReflectionExtensions__HasAttribute_object_(System_Type_o *member,MethodInfo_25B84C0 *method)

{
  MethodInfo_25B84C0_RGCTXs *pMVar1;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_25B84C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar1 = method->rgctx_data;
  }
  pIVar2 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute_object__24ee2b0
                     ((System_Reflection_MemberInfo_o *)member,
                      (MethodInfo_24EE2B0 *)
                      pMVar1->_0_System_Reflection_CustomAttributeExtensions_GetCustomAttribute_T_);
  return (bool_conflict)CONCAT71((int7)((ulong)pIVar2 >> 8),pIVar2 != (Il2CppObject *)0x0);
}


// ReflectionExtensions$$HasAttribute<object>
// il2cpp: bool ReflectionExtensions__HasAttribute_object_ (System_Reflection_MemberInfo_o* member, const MethodInfo_25B8480* method);
// 0x26b8480

bool_conflict
ReflectionExtensions__HasAttribute_object__25b8480
          (System_Reflection_MemberInfo_o *member,MethodInfo_25B8480 *method)

{
  MethodInfo_25B8480_RGCTXs *pMVar1;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_25B8480_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar1 = method->rgctx_data;
  }
  pIVar2 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute_object__24ee2b0
                     (member,(MethodInfo_24EE2B0 *)
                             pMVar1->_0_System_Reflection_CustomAttributeExtensions_GetCustomAttribute_T_);
  return (bool_conflict)CONCAT71((int7)((ulong)pIVar2 >> 8),pIVar2 != (Il2CppObject *)0x0);
}


// ReflectionExtensions$$.cctor
// il2cpp: void ReflectionExtensions___cctor (const MethodInfo* method);
// 0x40682f0

void ReflectionExtensions___cctor(MethodInfo *method)

{
  long lVar1;
  System_Type_o *pSVar2;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ac2cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ReflectionExtensions);
    g_data_057ac2cd = '\x01';
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9bb8 + 0x20);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ReflectionExtensions + 0xb8));
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(g_data_057b9be8 + 0x20),(MethodInfo *)0x0)
  ;
  lVar1 = *(long *)(TypeInfo_ReflectionExtensions + 0xb8);
  *(System_Type_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  return;
}


