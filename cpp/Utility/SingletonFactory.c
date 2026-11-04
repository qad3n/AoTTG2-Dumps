// Type: Utility.SingletonFactory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/SingletonFactory.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SingletonFactory.cs
// --------------------------------

// Utility.SingletonFactory$$CreateSingleton<object>
// il2cpp: Il2CppObject* Utility_SingletonFactory__CreateSingleton_object_ (Il2CppObject* instance, const MethodInfo_798ED0* method);
// 0x180798ed0

Il2CppObject *
Utility_SingletonFactory__CreateSingleton_object_(Il2CppObject *instance,MethodInfo_798ED0 *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *p;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_Exception_o *__this;
  
  if (method->rgctx_data == (MethodInfo_798ED0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    if (method->rgctx_data == (MethodInfo_798ED0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)instance,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar2 = Utility_Util__CreateDontDestroyObj_object_
                       ((MethodInfo_869290 *)method->rgctx_data->_2_Utility_Util_CreateDontDestroyObj_T_);
    return pIVar2;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_180003e30(method->rgctx_data);
  il2cpp_codegen_runtime_class_init_inline(g_data_184354ea0);
  p = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  NullCheck(p);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_180003110(8,p);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Attempting to create duplicate singleton of {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this,pSVar3,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,(MethodInfo *)method);
}


// Utility.SingletonFactory$$.ctor
// il2cpp: void Utility_SingletonFactory___ctor (Utility_SingletonFactory_o* __this, const MethodInfo* method);
// 0x180528540

void
Utility_SingletonFactory___ctor(Utility_SingletonFactory_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


