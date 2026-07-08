// Type: ReflectionExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ReflectionExtensions.cs
// Prior source: NEW in this update
// --------------------------------

// ReflectionExtensions$$HasAttribute<object>
// il2cpp: bool ReflectionExtensions__HasAttribute_object_ (System_Type_o* member, const MethodInfo_25746A0* method);
// 0x26746a0

bool_conflict
ReflectionExtensions__HasAttribute<object>(System_Type_o *member,MethodInfo_25746A0 *method)

{
  MethodInfo_25746A0_RGCTXs *pMVar1;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_25746A0_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar1 = method->rgctx_data;
  }
  pIVar2 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute<object>
                     ((System_Reflection_MemberInfo_o *)member,
                      (MethodInfo_24AAF20 *)
                      pMVar1->_0_System_Reflection_CustomAttributeExtensions_GetCustomAttribute_T_);
  return (bool_conflict)CONCAT71((int7)((ulong)pIVar2 >> 8),pIVar2 != (Il2CppObject *)0x0);
}


// ReflectionExtensions$$HasAttribute<object>
// il2cpp: bool ReflectionExtensions__HasAttribute_object_ (System_Reflection_MemberInfo_o* member, const MethodInfo_2574660* method);
// 0x2674660

bool_conflict
ReflectionExtensions__HasAttribute<object>
          (System_Reflection_MemberInfo_o *member,MethodInfo_2574660 *method)

{
  MethodInfo_2574660_RGCTXs *pMVar1;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_2574660_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar1 = method->rgctx_data;
  }
  pIVar2 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute<object>
                     (member,(MethodInfo_24AAF20 *)
                             pMVar1->
                             _0_System_Reflection_CustomAttributeExtensions_GetCustomAttribute_T_);
  return (bool_conflict)CONCAT71((int7)((ulong)pIVar2 >> 8),pIVar2 != (Il2CppObject *)0x0);
}


// ReflectionExtensions$$.cctor
// il2cpp: void ReflectionExtensions___cctor (const MethodInfo* method);
// 0x3d729a0

void ReflectionExtensions___cctor(MethodInfo *method)

{
  long lVar1;
  System_Type_o *pSVar2;
  System_RuntimeTypeHandle_o handle;
  
  if (DAT_0570261d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ReflectionExtensions);
    DAT_0570261d = '\x01';
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)(DAT_05711068 + 0x20);
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_ReflectionExtensions + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ReflectionExtensions + 0xb8));
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)(DAT_05711098 + 0x20),(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_ReflectionExtensions + 0xb8);
  *(System_Type_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  return;
}


