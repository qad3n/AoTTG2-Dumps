// Type: EZhex1991.EZSoftBone.CustomForce
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/CustomForce.cs
// Prior real C# source: none
// --------------------------------

// EZhex1991.EZSoftBone.CustomForce$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_CustomForce___ctor (EZhex1991_EZSoftBone_CustomForce_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x2492250

void EZhex1991_EZSoftBone_CustomForce___ctor(void)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long in_RDX;
  undefined8 extraout_RDX;
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_helper_022b4080(in_RDI + 0x20);
  cVar1 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar2 = il2cpp_runtime_helper_022b2a80();
  if (cVar2 == '\0') {
    if (in_RSI == 0) {
      lVar3 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_runtime_helper_022b2b10(lVar3,0);
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28),extraout_RDX,
                 *(code **)(lVar3 + 0x18));
      return;
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined1 **)(in_RDI + 0x18) = &label_01f66ec0;
    goto label_024922b5;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
label_024922b5:
  *(code **)(in_RDI + 0x38) = il2cpp_runtime_helper_01f66e50;
  return;
}


// EZhex1991.EZSoftBone.CustomForce$$Invoke
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_CustomForce__Invoke (EZhex1991_EZSoftBone_CustomForce_o* __this, float normalizedLength, const MethodInfo* method);
// 0x24922f0

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
// 0x2492310

System_IAsyncResult_o *
EZhex1991_EZSoftBone_CustomForce__BeginInvoke
          (EZhex1991_EZSoftBone_CustomForce_o *__this,float normalizedLength,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  float local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  local_2c = normalizedLength;
  local_28 = il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_2c);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&local_28,callback,object);
  return pSVar1;
}


// EZhex1991.EZSoftBone.CustomForce$$EndInvoke
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_CustomForce__EndInvoke (EZhex1991_EZSoftBone_CustomForce_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x2492370

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_CustomForce__EndInvoke
          (EZhex1991_EZSoftBone_CustomForce_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Vector3_Fields *pUVar2;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar3;
  
  lVar1 = il2cpp_runtime_helper_0233bb60(result,0);
  if (lVar1 != 0) {
    pUVar2 = (UnityEngine_Vector3_Fields *)il2cpp_runtime_helper_02305440(lVar1);
    return (UnityEngine_Vector3_o)*pUVar2;
  }
  UVar3.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  UVar3.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar3.fields;
}


