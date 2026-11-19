// Type: Utility.SingletonFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/SingletonFactory.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SingletonFactory.cs
// --------------------------------

// Utility.SingletonFactory$$CreateSingleton<object>
// il2cpp: Il2CppObject* Utility_SingletonFactory__CreateSingleton_object_ (Il2CppObject* instance, const MethodInfo_3680650* method);
// 0x3780650
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x37806ee: jmp 0x3780694

Il2CppObject *
Utility_SingletonFactory__CreateSingleton_object_(Il2CppObject *instance,MethodInfo_3680650 *method)

{
  uint32_t uVar1;
  System_RuntimeTypeHandle_o handle;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_Type_o *p;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_Exception_o *__this;
  
  if (method->rgctx_data == (MethodInfo_3680650_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    if (method->rgctx_data == (MethodInfo_3680650_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      goto joined_r0x03780692;
    }
  }
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
joined_r0x03780692:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)instance,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_1_T;
    il2cpp_codegen_runtime_class_init_inline(g_data_075567a8);
    p = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    NullCheck(p);
    pIVar3 = (Il2CppObject *)
             (*(p->klass->vtable)._8_unknown.methodPtr)(p,(p->klass->vtable)._8_unknown.method);
    pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Attempting to create duplicate singleton of {0}");
    pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,(MethodInfo *)method);
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pIVar3 = Utility_Util__CreateDontDestroyObj_object_
                     ((MethodInfo_377BE10 *)method->rgctx_data->_2_Utility_Util_CreateDontDestroyObj_T_);
  return pIVar3;
}


// Utility.SingletonFactory$$.ctor
// il2cpp: void Utility_SingletonFactory___ctor (Utility_SingletonFactory_o* __this, const MethodInfo* method);
// 0x5df10a0

void Utility_SingletonFactory___ctor(Utility_SingletonFactory_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


