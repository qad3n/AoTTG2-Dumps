// Type: Utility.SingletonFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/SingletonFactory.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SingletonFactory.cs  [prior source available (delta unverified)]
// --------------------------------

// Utility.SingletonFactory$$CreateSingleton<object>
// il2cpp: Il2CppObject* Utility_SingletonFactory__CreateSingleton_object_ (Il2CppObject* instance, const MethodInfo_25870C0* method);
// 0x26870c0

Il2CppObject *
Utility_SingletonFactory__CreateSingleton<object>(Il2CppObject *instance,MethodInfo_25870C0 *method)

{
  int iVar1;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_Type_o *pSVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_Exception_o *__this;
  
  if (method->rgctx_data == (MethodInfo_25870C0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    if (method->rgctx_data == (MethodInfo_25870C0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      goto joined_r0x02687102;
    }
  }
  iVar1 = *(int *)(TypeInfo_Object + 0xe4);
joined_r0x02687102:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)instance,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = Utility_Util__CreateDontDestroyObj<object>
                       ((MethodInfo_260BBB0 *)
                        method->rgctx_data->_2_Utility_Util_CreateDontDestroyObj_T_);
    return pIVar3;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_1_T;
  il2cpp_glue_01f2f090(DAT_05711100);
  pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  il2cpp_glue_01f2f1a0(pSVar4);
  pIVar3 = (Il2CppObject *)
           (*(pSVar4->klass->vtable)._8_unknown.methodPtr)
                     (pSVar4,(pSVar4->klass->vtable)._8_unknown.method);
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Attempting to create duplicate singleton of {0}");
  pSVar5 = System_String__Format(pSVar5,pIVar3,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,method);
}


// Utility.SingletonFactory$$.ctor
// il2cpp: void Utility_SingletonFactory___ctor (Utility_SingletonFactory_o* __this, const MethodInfo* method);
// 0x417c060

void Utility_SingletonFactory___ctor(Utility_SingletonFactory_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


