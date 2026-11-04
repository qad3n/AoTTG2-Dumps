// Type: EZhex1991.EZSoftBone.CustomForce
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/CustomForce.cs
// Prior real C# source: none
// --------------------------------

// EZhex1991.EZSoftBone.CustomForce$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_CustomForce___ctor (EZhex1991_EZSoftBone_CustomForce_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x180583be0

void EZhex1991_EZSoftBone_CustomForce___ctor
               (EZhex1991_EZSoftBone_CustomForce_o *__this,Il2CppObject *object,intptr_t method,
               MethodInfo *methodInfo)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target,object);
  cVar1 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar2 = il2cpp_runtime_helper_1804161b0();
  if (cVar2 == '\0') {
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar1 == '\x01') {
    pcVar3 = il2cpp_runtime_helper_1800135b0;
    goto label_180583c3f;
  }
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
  pcVar3 = (code *)(__this->fields).method_ptr;
label_180583c3f:
  (__this->fields).invoke_impl = (intptr_t)pcVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_180013540;
  return;
}


// EZhex1991.EZSoftBone.CustomForce$$Invoke
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_CustomForce__Invoke (EZhex1991_EZSoftBone_CustomForce_o* __this, float normalizedLength, const MethodInfo* method);
// 0x180583ba0

UnityEngine_Vector3_o *
EZhex1991_EZSoftBone_CustomForce__Invoke
          (UnityEngine_Vector3_o *__return_storage_ptr__,EZhex1991_EZSoftBone_CustomForce_o *__this,
          float normalizedLength,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  puVar3 = (undefined8 *)
           (*(code *)(__this->fields).invoke_impl)
                     (local_18,(__this->fields).method_code,normalizedLength,(__this->fields).method);
  uVar1 = *puVar3;
  fVar2 = *(float *)(puVar3 + 1);
  (__return_storage_ptr__->fields).x = (float)(int)uVar1;
  (__return_storage_ptr__->fields).y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->fields).z = fVar2;
  return __return_storage_ptr__;
}


// EZhex1991.EZSoftBone.CustomForce$$BeginInvoke
// il2cpp: System_IAsyncResult_o* EZhex1991_EZSoftBone_CustomForce__BeginInvoke (EZhex1991_EZSoftBone_CustomForce_o* __this, float normalizedLength, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x180583b00

System_IAsyncResult_o *
EZhex1991_EZSoftBone_CustomForce__BeginInvoke
          (EZhex1991_EZSoftBone_CustomForce_o *__this,float normalizedLength,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  float local_res10 [2];
  Il2CppObject *local_18;
  undefined8 uStack_10;
  
  local_18 = (Il2CppObject *)0x0;
  uStack_10 = 0;
  local_res10[0] = normalizedLength;
  local_18 = il2cpp_value_box(g_data_184354e38,local_res10);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,&local_18,callback,object);
  return pSVar1;
}


// EZhex1991.EZSoftBone.CustomForce$$EndInvoke
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_CustomForce__EndInvoke (EZhex1991_EZSoftBone_CustomForce_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x180583b60

UnityEngine_Vector3_o *
EZhex1991_EZSoftBone_CustomForce__EndInvoke
          (UnityEngine_Vector3_o *__return_storage_ptr__,EZhex1991_EZSoftBone_CustomForce_o *__this,
          System_IAsyncResult_o *result,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Il2CppObject *obj;
  undefined8 *puVar3;
  
  obj = (Il2CppObject *)il2cpp_runtime_helper_18042b2c0(result,0);
  if (obj != (Il2CppObject *)0x0) {
    puVar3 = il2cpp_object_unbox(obj);
    uVar1 = *puVar3;
    fVar2 = *(float *)(puVar3 + 1);
    (__return_storage_ptr__->fields).x = (float)(int)uVar1;
    (__return_storage_ptr__->fields).y = (float)(int)((ulonglong)uVar1 >> 0x20);
    (__return_storage_ptr__->fields).z = fVar2;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


