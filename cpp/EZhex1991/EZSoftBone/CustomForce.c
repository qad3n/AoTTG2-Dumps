// Type: EZhex1991.EZSoftBone.CustomForce
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/CustomForce.cs
// Prior real C# source: none
// --------------------------------

// EZhex1991.EZSoftBone.CustomForce$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_CustomForce___ctor (EZhex1991_EZSoftBone_CustomForce_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x32a2760

void EZhex1991_EZSoftBone_CustomForce___ctor
               (EZhex1991_EZSoftBone_CustomForce_o *__this,Il2CppObject *object,intptr_t method,
               MethodInfo *methodInfo)

{
  char cVar1;
  char cVar2;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target);
  cVar1 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar2 = il2cpp_runtime_helper_030d61c0();
  if (cVar2 == '\0') {
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar1 == '\x01') {
    (__this->fields).invoke_impl = (intptr_t)&label_02ab6ba0;
    goto label_032a27c6;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_032a27c6:
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02ab6b30;
  return;
}


// EZhex1991.EZSoftBone.CustomForce$$Invoke
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_CustomForce__Invoke (EZhex1991_EZSoftBone_CustomForce_o* __this, float normalizedLength, const MethodInfo* method);
// 0x32a2800

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_CustomForce__Invoke
          (EZhex1991_EZSoftBone_CustomForce_o *__this,float normalizedLength,MethodInfo *method)

{
  code *vtableDispatch;
  undefined8 in_RDX;
  undefined4 in_XMM0_Db;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar1;
  
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  UVar1.fields._0_8_ =
       (*vtableDispatch)
                 (CONCAT44(in_XMM0_Db,normalizedLength),(__this->fields).method_code,(__this->fields).method,
                  in_RDX,vtableDispatch);
  UVar1.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// EZhex1991.EZSoftBone.CustomForce$$BeginInvoke
// il2cpp: System_IAsyncResult_o* EZhex1991_EZSoftBone_CustomForce__BeginInvoke (EZhex1991_EZSoftBone_CustomForce_o* __this, float normalizedLength, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x32a2820

System_IAsyncResult_o *
EZhex1991_EZSoftBone_CustomForce__BeginInvoke
          (EZhex1991_EZSoftBone_CustomForce_o *__this,float normalizedLength,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  float local_2c;
  Il2CppObject *local_28;
  undefined8 uStack_20;
  
  local_28 = (Il2CppObject *)0x0;
  uStack_20 = 0;
  local_2c = normalizedLength;
  local_28 = il2cpp_vm_Object_Box(g_data_07556740,&local_2c);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&local_28,callback,object);
  return pSVar1;
}


// EZhex1991.EZSoftBone.CustomForce$$EndInvoke
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_CustomForce__EndInvoke (EZhex1991_EZSoftBone_CustomForce_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x32a2880

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_CustomForce__EndInvoke
          (EZhex1991_EZSoftBone_CustomForce_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Vector3_Fields *pUVar1;
  
  obj = (Il2CppObject *)il2cpp_runtime_helper_03159300(result,0);
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = il2cpp_vm_Object_Unbox(obj);
  return (UnityEngine_Vector3_o)*pUVar1;
}


