// Type: EZhex1991.EZSoftBone.CustomForce
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/CustomForce.cs
// Prior source: NEW in this update
// --------------------------------

// EZhex1991.EZSoftBone.CustomForce$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_CustomForce___ctor (EZhex1991_EZSoftBone_CustomForce_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x2454140

void EZhex1991_EZSoftBone_CustomForce___ctor(void)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long in_RDX;
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_glue(in_RDI + 0x20);
  cVar1 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar2 = il2cpp_glue_02274970();
  if (cVar2 == '\0') {
    if (in_RSI == 0) {
      uVar3 = il2cpp_glue_022dc730(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined1 **)(in_RDI + 0x18) = &LAB_01f2dec0;
    goto LAB_024541a5;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
LAB_024541a5:
  *(code **)(in_RDI + 0x38) = il2cpp_glue_01f2de50;
  return;
}


// EZhex1991.EZSoftBone.CustomForce$$Invoke
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_CustomForce__Invoke (EZhex1991_EZSoftBone_CustomForce_o* __this, float normalizedLength, const MethodInfo* method);
// 0x24541e0

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_CustomForce__Invoke
          (EZhex1991_EZSoftBone_CustomForce_o *__this,float normalizedLength,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_RDX;
  undefined4 in_XMM0_Db;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar1;
  
  UNRECOVERED_JUMPTABLE = (code *)(__this->fields).invoke_impl;
                    /* WARNING: Could not recover jumptable at 0x024541ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1.fields._0_8_ =
       (*UNRECOVERED_JUMPTABLE)
                 (CONCAT44(in_XMM0_Db,normalizedLength),(__this->fields).method_code,
                  (__this->fields).method,in_RDX,UNRECOVERED_JUMPTABLE);
  UVar1.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// EZhex1991.EZSoftBone.CustomForce$$BeginInvoke
// il2cpp: System_IAsyncResult_o* EZhex1991_EZSoftBone_CustomForce__BeginInvoke (EZhex1991_EZSoftBone_CustomForce_o* __this, float normalizedLength, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x2454200

System_IAsyncResult_o *
EZhex1991_EZSoftBone_CustomForce__BeginInvoke
          (EZhex1991_EZSoftBone_CustomForce_o *__this,float normalizedLength,
          System_AsyncCallback_o *callback,Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  float local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  local_2c = normalizedLength;
  local_28 = il2cpp_runtime_glue(DAT_05711098,&local_2c);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_glue_022fd810(__this,&local_28,callback,object);
  return pSVar1;
}


// EZhex1991.EZSoftBone.CustomForce$$EndInvoke
// il2cpp: UnityEngine_Vector3_o EZhex1991_EZSoftBone_CustomForce__EndInvoke (EZhex1991_EZSoftBone_CustomForce_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x2454260

UnityEngine_Vector3_o
EZhex1991_EZSoftBone_CustomForce__EndInvoke
          (EZhex1991_EZSoftBone_CustomForce_o *__this,System_IAsyncResult_o *result,
          MethodInfo *method)

{
  long lVar1;
  UnityEngine_Vector3_Fields *pUVar2;
  
  lVar1 = il2cpp_glue_022fda50(result,0);
  if (lVar1 != 0) {
    pUVar2 = (UnityEngine_Vector3_Fields *)il2cpp_glue_022c7330(lVar1);
    return (UnityEngine_Vector3_o)*pUVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


