// Type: Interpolate
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Interpolate.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Interpolate.cs
// --------------------------------

// Interpolate.ToVector3<object>$$.ctor
// il2cpp: void Interpolate_ToVector3_object____ctor (Interpolate_ToVector3_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_2924C00* method);
// 0x2a24c00

void Interpolate_ToVector3_object____ctor(void)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long in_RDX;
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_helper_022b4080(in_RDI + 0x20);
  cVar2 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar1 = il2cpp_runtime_helper_022b2a80();
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if (*(char *)(in_RDI + 0x70) == '\0') {
        *(undefined1 **)(in_RDI + 0x18) = &label_01f85e10;
      }
      else {
        cVar2 = il2cpp_runtime_helper_02324e10();
        cVar1 = il2cpp_runtime_helper_022b3050();
        if (cVar2 == '\0') {
          if (cVar1 == '\0') {
            *(undefined1 **)(in_RDI + 0x18) = &label_01f85e40;
          }
          else {
            *(undefined1 **)(in_RDI + 0x18) = &label_01f85e70;
          }
        }
        else if (cVar1 == '\0') {
          *(undefined1 **)(in_RDI + 0x18) = &label_01f85f00;
        }
        else {
          *(undefined1 **)(in_RDI + 0x18) = &label_01f85f40;
        }
      }
      goto label_02a24c6e;
    }
    if (in_RSI == 0) {
      lVar3 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_runtime_helper_022b2b10(lVar3,0);
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      return;
    }
  }
  else if (cVar2 == '\x01') {
    *(undefined1 **)(in_RDI + 0x18) = &label_01f85e30;
    goto label_02a24c6e;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
label_02a24c6e:
  *(code **)(in_RDI + 0x38) = il2cpp_runtime_helper_01f85dc0;
  return;
}


// Interpolate.ToVector3<Vector3>$$.ctor
// il2cpp: void Interpolate_ToVector3_Vector3____ctor (Interpolate_ToVector3_Vector3__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_2924D80* method);
// 0x2a24d80

void Interpolate_ToVector3_Vector3____ctor(void)

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
    *(undefined1 **)(in_RDI + 0x18) = &label_01f86050;
    goto label_02a24de5;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
label_02a24de5:
  *(code **)(in_RDI + 0x38) = il2cpp_runtime_helper_01f85fe0;
  return;
}


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Interpolate_ToVector3___Il2CppFullySharedGenericType____ctor (Interpolate_ToVector3_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_2924EF0* method);
// 0x2a24ef0

void Interpolate_ToVector3___Il2CppFullySharedGenericType____ctor(void)

{
  char cVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long in_RDX;
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_helper_022b4080(in_RDI + 0x20);
  cVar2 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar1 = il2cpp_runtime_helper_022b2a80();
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if (*(char *)(in_RDI + 0x70) == '\0') {
        pcVar4 = il2cpp_runtime_helper_01f86160;
      }
      else {
        cVar2 = il2cpp_runtime_helper_02324e10();
        cVar1 = il2cpp_runtime_helper_022b3050();
        if (cVar2 == '\0') {
          if (cVar1 == '\0') {
            pcVar4 = il2cpp_runtime_helper_01f861a0;
          }
          else {
            pcVar4 = (code *)&label_01f861f0;
          }
        }
        else if (cVar1 == '\0') {
          pcVar4 = (code *)&g_data_01f86290;
        }
        else {
          pcVar4 = il2cpp_runtime_helper_01f862e0;
        }
      }
    }
    else {
      if (in_RSI == 0) {
        lVar3 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
        il2cpp_runtime_helper_022b2b10(lVar3,0);
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
        return;
      }
      pcVar4 = il2cpp_runtime_helper_01f86120;
    }
    *(code **)(in_RDI + 0x18) = pcVar4;
  }
  else {
    pcVar4 = il2cpp_runtime_helper_01f860e0;
    if (cVar2 == '\x01') {
      pcVar4 = il2cpp_runtime_helper_01f860b0;
    }
    *(code **)(in_RDI + 0x18) = pcVar4;
  }
  *(code **)(in_RDI + 0x38) = il2cpp_runtime_helper_01f86060;
  return;
}


// Interpolate.ToVector3<object>$$Invoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_object___Invoke (Interpolate_ToVector3_T__o* __this, Il2CppObject* v, const MethodInfo_2924D10* method);
// 0x2a24d10

UnityEngine_Vector3_o
Interpolate_ToVector3_object___Invoke
          (Interpolate_ToVector3_T__o *__this,Il2CppObject *v,MethodInfo_2924D10 *method)

{
  code *vtableDispatch;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar1;
  
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  UVar1.fields._0_8_ =
       (*vtableDispatch)((__this->fields).method_code,v,(__this->fields).method,vtableDispatch);
  UVar1.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Interpolate.ToVector3<Vector3>$$Invoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_Vector3___Invoke (Interpolate_ToVector3_Vector3__o* __this, UnityEngine_Vector3_o v, const MethodInfo_2924E20* method);
// 0x2a24e20

UnityEngine_Vector3_o
Interpolate_ToVector3_Vector3___Invoke
          (Interpolate_ToVector3_Vector3__o *__this,UnityEngine_Vector3_o v,MethodInfo_2924E20 *method)

{
  code *vtableDispatch;
  undefined8 in_RDX;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  
  fVar1 = v.fields.z;
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  UVar2.fields._0_8_ =
       (*vtableDispatch)
                 (v.fields._0_8_,(__this->fields).method_code,(__this->fields).method,in_RDX,
                  vtableDispatch);
  UVar2.fields.z = fVar1;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$Invoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3___Il2CppFullySharedGenericType___Invoke (Interpolate_ToVector3_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v, const MethodInfo_2924FE0* method);
// 0x2a24fe0

UnityEngine_Vector3_o
Interpolate_ToVector3___Il2CppFullySharedGenericType___Invoke
          (Interpolate_ToVector3_T__o *__this,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v,
          MethodInfo_2924FE0 *method)

{
  code *vtableDispatch;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar1;
  
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  UVar1.fields._0_8_ =
       (*vtableDispatch)
                 ((__this->fields).method_code,v.klass,(__this->fields).method,vtableDispatch);
  UVar1.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Interpolate.ToVector3<object>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_ToVector3_object___BeginInvoke (Interpolate_ToVector3_T__o* __this, Il2CppObject* v, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_2924D30* method);
// 0x2a24d30

System_IAsyncResult_o *
Interpolate_ToVector3_object___BeginInvoke
          (Interpolate_ToVector3_T__o *__this,Il2CppObject *v,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo_2924D30 *method)

{
  System_IAsyncResult_o *pSVar1;
  Il2CppObject *pIStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  pIStack_18 = v;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&pIStack_18);
  return pSVar1;
}


// Interpolate.ToVector3<Vector3>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_ToVector3_Vector3___BeginInvoke (Interpolate_ToVector3_Vector3__o* __this, UnityEngine_Vector3_o v, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_2924E40* method);
// 0x2a24e40

System_IAsyncResult_o *
Interpolate_ToVector3_Vector3___BeginInvoke
          (Interpolate_ToVector3_Vector3__o *__this,UnityEngine_Vector3_o v,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo_2924E40 *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_30 = v.fields.z;
  local_38 = v.fields._0_8_;
  if (g_data_057a71d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a71d3 = '\x01';
  }
  local_28 = 0;
  uStack_20 = 0;
  local_28 = il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_38);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&local_28,callback,object);
  return pSVar1;
}


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_ToVector3___Il2CppFullySharedGenericType___BeginInvoke (Interpolate_ToVector3_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_2925000* method);
// 0x2a25000

System_IAsyncResult_o *
Interpolate_ToVector3___Il2CppFullySharedGenericType___BeginInvoke
          (Interpolate_ToVector3_T__o *__this,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v,
          System_AsyncCallback_o *callback,Il2CppObject *object,MethodInfo_2925000 *method)

{
  long lVar1;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar2;
  System_IAsyncResult_o *pSVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_38;
  undefined8 uStack_30;
  
  pUVar2 = v.klass;
  local_38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
  uStack_30 = 0;
  lVar1 = il2cpp_runtime_helper_022b3090(**(undefined8 **)((__this->fields).method + 0x30));
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = il2cpp_runtime_helper_023009c0(lVar1);
  }
  if (*(int *)(lVar1 + 0x28) < 0) {
    pUVar2 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)il2cpp_runtime_helper_02304f30(lVar1,pUVar2);
  }
  local_38 = pUVar2;
  pSVar3 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&local_38,v.monitor,callback);
  return pSVar3;
}


// Interpolate.ToVector3<object>$$EndInvoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_object___EndInvoke (Interpolate_ToVector3_T__o* __this, System_IAsyncResult_o* result, const MethodInfo_2924D50* method);
// 0x2a24d50

UnityEngine_Vector3_o
Interpolate_ToVector3_object___EndInvoke
          (Interpolate_ToVector3_T__o *__this,System_IAsyncResult_o *result,MethodInfo_2924D50 *method)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  UnityEngine_Vector3_Fields *pUVar5;
  void *extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar6;
  undefined8 extraout_XMM0_Qa;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  
  lVar6 = 0;
  lVar4 = il2cpp_runtime_helper_0233bb60();
  if (lVar4 != 0) {
    pUVar5 = (UnityEngine_Vector3_Fields *)il2cpp_runtime_helper_02305440(lVar4);
    return (UnityEngine_Vector3_o)*pUVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  result[1].klass = (System_IAsyncResult_c *)*(undefined8 *)((long)extraout_RDX + 8);
  result[2].monitor = extraout_RDX;
  result[2].klass = (System_IAsyncResult_c *)lVar6;
  il2cpp_runtime_helper_022b4080(result + 2);
  cVar1 = *(char *)((long)extraout_RDX + 0x52);
  result[4].klass = (System_IAsyncResult_c *)result;
  cVar3 = il2cpp_runtime_helper_022b2a80(extraout_RDX);
  if (cVar3 == '\0') {
    if (lVar6 == 0) {
      lVar4 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_runtime_helper_022b2b10(lVar4,0);
      UVar8.fields._0_8_ =
           (**(code **)(lVar4 + 0x18))
                     (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28),extraout_RDX_00,
                      *(code **)(lVar4 + 0x18));
      UVar8.fields.z = in_XMM1_Da;
      return (UnityEngine_Vector3_o)UVar8.fields;
    }
  }
  else if (cVar1 == '\x01') {
    result[1].monitor = &label_01f86050;
    goto label_02a24de5;
  }
  uVar2 = result[2].klass;
  result[1].monitor = result[1].klass;
  result[4].klass = (System_IAsyncResult_c *)uVar2;
label_02a24de5:
  result[3].monitor = il2cpp_runtime_helper_01f85fe0;
  UVar7.fields.z = in_XMM1_Da;
  UVar7.fields.x = (float)(int)extraout_XMM0_Qa;
  UVar7.fields.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
  return (UnityEngine_Vector3_o)UVar7.fields;
}


// Interpolate.ToVector3<Vector3>$$EndInvoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_Vector3___EndInvoke (Interpolate_ToVector3_Vector3__o* __this, System_IAsyncResult_o* result, const MethodInfo_2924EC0* method);
// 0x2a24ec0

UnityEngine_Vector3_o
Interpolate_ToVector3_Vector3___EndInvoke
          (Interpolate_ToVector3_Vector3__o *__this,System_IAsyncResult_o *result,MethodInfo_2924EC0 *method)

{
  char cVar1;
  char cVar2;
  long lVar3;
  UnityEngine_Vector3_Fields *pUVar4;
  code *pcVar5;
  void *extraout_RDX;
  long lVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_00;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  
  lVar6 = 0;
  lVar3 = il2cpp_runtime_helper_0233bb60();
  if (lVar3 != 0) {
    pUVar4 = (UnityEngine_Vector3_Fields *)il2cpp_runtime_helper_02305440(lVar3);
    return (UnityEngine_Vector3_o)*pUVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  result[1].klass = (System_IAsyncResult_c *)*(undefined8 *)((long)extraout_RDX + 8);
  result[2].monitor = extraout_RDX;
  result[2].klass = (System_IAsyncResult_c *)lVar6;
  il2cpp_runtime_helper_022b4080(result + 2);
  cVar2 = *(char *)((long)extraout_RDX + 0x52);
  result[4].klass = (System_IAsyncResult_c *)result;
  cVar1 = il2cpp_runtime_helper_022b2a80(extraout_RDX);
  uVar7 = extraout_XMM0_Qa;
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if (*(char *)&result[7].klass == '\0') {
        pcVar5 = il2cpp_runtime_helper_01f86160;
      }
      else {
        cVar2 = il2cpp_runtime_helper_02324e10(extraout_RDX);
        cVar1 = il2cpp_runtime_helper_022b3050(extraout_RDX);
        uVar7 = extraout_XMM0_Qa_00;
        if (cVar2 == '\0') {
          if (cVar1 == '\0') {
            pcVar5 = il2cpp_runtime_helper_01f861a0;
          }
          else {
            pcVar5 = (code *)&label_01f861f0;
          }
        }
        else if (cVar1 == '\0') {
          pcVar5 = (code *)&g_data_01f86290;
        }
        else {
          pcVar5 = il2cpp_runtime_helper_01f862e0;
        }
      }
    }
    else {
      if (lVar6 == 0) {
        lVar3 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
        il2cpp_runtime_helper_022b2b10(lVar3,0);
        UVar9.fields._0_8_ = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
        UVar9.fields.z = in_XMM1_Da;
        return (UnityEngine_Vector3_o)UVar9.fields;
      }
      pcVar5 = il2cpp_runtime_helper_01f86120;
    }
    result[1].monitor = pcVar5;
  }
  else {
    pcVar5 = il2cpp_runtime_helper_01f860e0;
    if (cVar2 == '\x01') {
      pcVar5 = il2cpp_runtime_helper_01f860b0;
    }
    result[1].monitor = pcVar5;
  }
  result[3].monitor = il2cpp_runtime_helper_01f86060;
  UVar8.fields.z = in_XMM1_Da;
  UVar8.fields.x = (float)(int)uVar7;
  UVar8.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
  return (UnityEngine_Vector3_o)UVar8.fields;
}


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$EndInvoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3___Il2CppFullySharedGenericType___EndInvoke (Interpolate_ToVector3_T__o* __this, System_IAsyncResult_o* result, const MethodInfo_2925080* method);
// 0x2a25080
// <decompile failed>

// Interpolate.Function$$.ctor
// il2cpp: void Interpolate_Function___ctor (Interpolate_Function_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x4060300

void Interpolate_Function___ctor(void)

{
  byte bVar1;
  char cVar2;
  MethodInfo_2F63D60 *method;
  code *vtableDispatch;
  MethodInfo_2F65260 *method_00;
  MethodInfo_2F65BB0 *method_01;
  System_RuntimeTypeHandle_o SVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  System_Object_array *args;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  undefined4 uVar9;
  long lVar10;
  System_Collections_IList_c *__this;
  undefined8 uVar11;
  System_Collections_IList_o *pSVar12;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  System_String_c *__this_01;
  System_String_o *pSVar13;
  System_RuntimeTypeHandle_Fields *pSVar14;
  System_Type_o *pSVar15;
  long lVar16;
  System_String_Fields SVar17;
  System_String_o *pSVar18;
  System_ArgumentException_o *__this_02;
  Interpolate_Function_o *pIVar19;
  Il2CppObject *pIVar20;
  Interpolate_ToVector3_T__o *pIVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *pIVar23;
  ulong uVar24;
  uint uVar25;
  Il2CppClass *pIVar26;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  System_Collections_IList_c *extraout_RDX;
  long in_RDX;
  ulong extraout_RDX_00;
  float *pfVar27;
  Il2CppObject **ppIVar28;
  undefined8 unaff_RBP;
  ulong uVar29;
  System_Collections_IList_c *pSVar30;
  long *plVar31;
  long lVar32;
  long in_RSI;
  System_Collections_IList_o *pSVar33;
  void *pvVar34;
  void *pvVar35;
  System_Collections_IList_c *pSVar36;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar37;
  System_String_c *pSVar38;
  System_ArgumentException_o *pSVar39;
  long in_RDI;
  Interpolate_Function_o *pIVar40;
  System_Collections_IList_o *pSVar41;
  int iVar42;
  undefined8 unaff_R13;
  ulong uVar43;
  undefined4 extraout_XMM0_Da;
  float fVar44;
  undefined4 extraout_XMM0_Da_00;
  undefined4 in_XMM1_Da;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uStack_a0;
  Il2CppObject *pIStack_98;
  ulong uStack_90;
  System_Collections_IList_o *pSStack_88;
  Interpolate_Function_o *pIStack_80;
  Il2CppObject *pIStack_78;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_helper_022b4080(in_RDI + 0x20);
  cVar2 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar6 = il2cpp_runtime_helper_022b2a80();
  if (cVar6 == '\0') {
    if (in_RSI == 0) {
      pIVar19 = (Interpolate_Function_o *)il2cpp_runtime_helper_0231a840(0);
      pSVar33 = (System_Collections_IList_o *)0x0;
      fVar44 = (float)il2cpp_runtime_helper_022b2b10();
      if (g_data_057ac29e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
        g_data_057ac29e = '\x01';
      }
      if (g_data_057ac29a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
        g_data_057ac29a = '\x01';
      }
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
      pSVar12 = (System_Collections_IList_o *)0x0;
      System_Object___ctor(pIVar20,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar20[1].klass = 0xfffffffe;
      pIVar40 = (Interpolate_Function_o *)0x0;
      iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      *(int32_t *)&pIVar20[1].monitor = iVar8;
      if (pIVar20 != (Il2CppObject *)0x0) {
        *(float *)&pIVar20[2].klass = fVar44;
        pIVar21 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
        Interpolate_ToVector3_object____ctor();
        Interpolate__NewBezier_object_
                  (pIVar19,pSVar33,pIVar21,fVar44,(System_Collections_Generic_IEnumerable_float__o *)pIVar20,
                   MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      uVar24 = extraout_RDX_00 & 0xffffffff;
      pIStack_78 = pIVar20;
      if (g_data_057ac29f == '\0') {
        pIStack_80 = (Interpolate_Function_o *)0x40604c6;
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        pIStack_80 = (Interpolate_Function_o *)0x40604d2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
        pIStack_80 = (Interpolate_Function_o *)0x40604de;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
        g_data_057ac29f = '\x01';
      }
      if (g_data_057ac29b == '\0') {
        pIStack_80 = (Interpolate_Function_o *)0x40604fa;
        il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
        g_data_057ac29b = '\x01';
      }
      pIStack_80 = (Interpolate_Function_o *)0x4060510;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
      pSVar33 = (System_Collections_IList_o *)0x0;
      pIStack_80 = (Interpolate_Function_o *)0x406051d;
      System_Object___ctor(pIVar20,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar20[1].klass = 0xfffffffe;
      pIVar19 = (Interpolate_Function_o *)0x0;
      pIStack_80 = (Interpolate_Function_o *)0x406052b;
      iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      *(int32_t *)&pIVar20[1].monitor = iVar8;
      if (pIVar20 != (Il2CppObject *)0x0) {
        iVar42 = (int)extraout_RDX_00 + 1;
        *(undefined4 *)&pIVar20[2].klass = 0;
        *(int *)&pIVar20[3].klass = iVar42;
        *(undefined4 *)&pIVar20[2].monitor = 1;
        pIStack_80 = (Interpolate_Function_o *)0x4060558;
        pIVar21 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
        pIStack_80 = (Interpolate_Function_o *)0x4060571;
        Interpolate_ToVector3_object____ctor();
        Interpolate__NewBezier_object_
                  (pIVar40,pSVar12,pIVar21,(float)iVar42,
                   (System_Collections_Generic_IEnumerable_float__o *)pIVar20,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        return;
      }
      pIStack_80 = (Interpolate_Function_o *)0x406059e;
      uVar9 = il2cpp_runtime_helper_022b2c90();
      uStack_a0 = CONCAT44(extraout_XMM0_Da_00,uVar9);
      pIStack_98 = pIVar20;
      uStack_90 = uVar24;
      pSStack_88 = pSVar12;
      pIStack_80 = pIVar40;
      if (g_data_057ac2a0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
        g_data_057ac2a0 = '\x01';
      }
      if (g_data_057ac29a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
        g_data_057ac29a = '\x01';
      }
      pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
      pSVar12 = (System_Collections_IList_o *)0x0;
      System_Object___ctor((Il2CppObject *)pIVar22,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar22->_1).name = 0xfffffffe;
      pIVar40 = (Interpolate_Function_o *)0x0;
      iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      *(int32_t *)&(pIVar22->_1).namespaze = iVar8;
      if (pIVar22 == (Il2CppClass *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac2a1 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
          il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
          g_data_057ac2a1 = '\x01';
        }
        if (g_data_057ac29b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
          g_data_057ac29b = '\x01';
        }
        pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
        pvVar34 = (void *)0x0;
        System_Object___ctor((Il2CppObject *)pIVar22,(MethodInfo *)0x0);
        *(undefined4 *)&(pIVar22->_1).name = 0xfffffffe;
        pSVar41 = (System_Collections_IList_o *)0x0;
        iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&(pIVar22->_1).namespaze = iVar8;
        if (pIVar22 == (Il2CppClass *)0x0) {
          uVar9 = il2cpp_runtime_helper_022b2c90();
          pvVar35 = pvVar34;
          pSVar33 = pSVar41;
          if (pvVar34 != (void *)0x0) {
            uVar25 = (uint)*(ulong *)((long)pvVar34 + 0x18);
            uVar24 = *(ulong *)((long)pvVar34 + 0x18) & 0xffffffff;
            if (0 < (int)(uVar25 - 1)) {
              uVar43 = (ulong)(uVar25 - 1);
              do {
                if (pSVar41 == (System_Collections_IList_o *)0x0) {
                  if (((int)uVar24 == 0) || ((int)uVar24 == 1)) goto label_0406090f;
                  goto label_04060914;
                }
                uVar29 = 0;
                pfVar27 = (float *)((long)pvVar34 + 0x20);
                do {
                  if ((uVar24 <= uVar29) || (uVar24 <= uVar29 + 1)) goto label_0406090f;
                  pvVar35 = pSVar41[2].monitor;
                  pSVar33 = (System_Collections_IList_o *)pSVar41[4].klass;
                  fVar44 = (float)(*pSVar41[1].monitor)(*pfVar27,pfVar27[3] - *pfVar27,uVar9,in_XMM1_Da);
                  uVar25 = *(uint *)((long)pvVar34 + 0x18);
                  if ((uVar25 <= uVar29) || (*pfVar27 = fVar44, (ulong)uVar25 <= uVar29 + 1))
                  goto label_0406090f;
                  pvVar35 = pSVar41[2].monitor;
                  pSVar33 = (System_Collections_IList_o *)pSVar41[4].klass;
                  fVar44 = (float)(*pSVar41[1].monitor)(pfVar27[1],pfVar27[4] - pfVar27[1],uVar9,in_XMM1_Da);
                  uVar25 = *(uint *)((long)pvVar34 + 0x18);
                  if ((uVar25 <= uVar29) || (pfVar27[1] = fVar44, (ulong)uVar25 <= uVar29 + 1))
                  goto label_0406090f;
                  pvVar35 = pSVar41[2].monitor;
                  pSVar33 = (System_Collections_IList_o *)pSVar41[4].klass;
                  fVar44 = (float)(*pSVar41[1].monitor)(pfVar27[2],pfVar27[5] - pfVar27[2],uVar9,in_XMM1_Da);
                  uVar25 = *(uint *)((long)pvVar34 + 0x18);
                  uVar24 = (ulong)uVar25;
                  if (uVar24 <= uVar29) goto label_0406090f;
                  pfVar27[2] = fVar44;
                  pfVar27 = pfVar27 + 3;
                  uVar29 = uVar29 + 1;
                } while (uVar29 != uVar43);
                uVar43 = uVar43 - 1;
              } while (0 < (int)uVar43);
            }
            if (uVar25 != 0) {
              return;
            }
label_0406090f:
            il2cpp_runtime_helper_022b2ca0();
          }
label_04060914:
          iVar8 = (int32_t)pvVar35;
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac2a2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
            g_data_057ac2a2 = '\x01';
          }
          pIVar21 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
          Interpolate_ToVector3_object____ctor();
          Interpolate__NewCatmullRom_object_(pSVar33,pIVar21,iVar8,extraout_EDX_01 & 0xff,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
          return;
        }
        *(undefined4 *)&(pIVar22->_1).byval_arg.data = 0;
        *(int *)&(pIVar22->_1).this_arg.data = extraout_EDX_00 + 1;
        (pIVar22->_1).byval_arg.bits = 1;
        pIVar23 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3_Vector3____ctor();
        fVar44 = (float)(extraout_EDX_00 + 1);
        ppIVar28 = (Il2CppObject **)&uStack_a0;
        pIVar20 = (Il2CppObject *)0x0;
      }
      else {
        *(float *)&(pIVar22->_1).byval_arg.data = uStack_a0._4_4_;
        pIVar23 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3_Vector3____ctor();
        ppIVar28 = &pIStack_78;
        pIVar20 = pIStack_98;
        pSVar12 = pSVar33;
        pIVar40 = pIVar19;
        uVar24 = uStack_90;
        pSVar33 = pSStack_88;
        pIVar19 = pIStack_80;
        fVar44 = uStack_a0._4_4_;
      }
      lVar16 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
      *(ulong *)((long)ppIVar28 + -8) = CONCAT71((int7)((ulong)unaff_RBP >> 8),cVar2);
      *(Interpolate_Function_o **)((long)ppIVar28 + -0x10) = pIVar19;
      *(System_Collections_IList_o **)((long)ppIVar28 + -0x18) = pSVar33;
      *(undefined8 *)((long)ppIVar28 + -0x20) = unaff_R13;
      *(ulong *)((long)ppIVar28 + -0x28) = uVar24;
      *(Il2CppObject **)((long)ppIVar28 + -0x30) = pIVar20;
      *(long **)((long)ppIVar28 + -0x38) = &MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
      *(float *)((long)ppIVar28 + -0x34) = fVar44;
      pIVar26 = pIVar22;
      lVar32 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
      if (*(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b7f;
        il2cpp_runtime_helper_02300a20(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
        lVar10 = **(long **)(lVar16 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664aee;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664af6;
      __this = (System_Collections_IList_c *)il2cpp_runtime_helper_023052d0(lVar10);
      method = *(MethodInfo_2F63D60 **)(*(long *)(lVar16 + 0x38) + 8);
      pSVar30 = (System_Collections_IList_c *)0xfffffffe;
      *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b0e;
      pSVar36 = __this;
      Interpolate__NewBezier_d__16_Vector3____ctor((Interpolate__NewBezier_d__16_T__o *)__this,-2,method);
      if (__this != (System_Collections_IList_c *)0x0) {
        (__this->_1).generic_class = pIVar40;
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b27;
        il2cpp_runtime_helper_022b4080(&(__this->_1).generic_class,pIVar40);
        (__this->_1).this_arg.data = pSVar12;
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b37;
        il2cpp_runtime_helper_022b4080(&(__this->_1).this_arg,pSVar12);
        (__this->_1).declaringType = pIVar23;
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b47;
        il2cpp_runtime_helper_022b4080(&(__this->_1).declaringType,pIVar23);
        *(float *)((long)&(__this->_1).typeMetadataHandle + 4) = *(float *)((long)ppIVar28 + -0x34);
        (__this->_1).element_class = pIVar22;
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b65;
        il2cpp_runtime_helper_022b4080(&(__this->_1).element_class,pIVar22);
        return;
      }
      *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b9d;
      uVar11 = il2cpp_runtime_helper_022b2c90();
      *(long *)((long)ppIVar28 + -0x40) = lVar16;
      *(Il2CppClass **)((long)ppIVar28 + -0x48) = pIVar23;
      *(Il2CppClass **)((long)ppIVar28 + -0x50) = pIVar22;
      *(Interpolate_Function_o **)((long)ppIVar28 + -0x58) = pIVar40;
      *(System_Collections_IList_o **)((long)ppIVar28 + -0x60) = pSVar12;
      *(undefined8 *)((long)ppIVar28 + -0x68) = 0;
      *(undefined8 *)((long)ppIVar28 + -0x70) = uVar11;
      *(undefined4 *)((long)ppIVar28 + -0x6c) = extraout_XMM0_Da;
      pIVar22 = pIVar26;
      lVar16 = lVar32;
      if (*(long **)(lVar32 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c6c;
        il2cpp_runtime_helper_02300a20(lVar32);
        lVar10 = **(long **)(lVar32 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(lVar32 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664bde;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664be6;
      pSVar12 = (System_Collections_IList_o *)il2cpp_runtime_helper_023052d0(lVar10);
      pIVar21 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
      vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar32 + 0x38) + 8);
      *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664bfb;
      pSVar33 = pSVar12;
      (*vtableDispatch)();
      if (pSVar12 != (System_Collections_IList_o *)0x0) {
        pSVar12[6].klass = pSVar36;
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c14;
        il2cpp_runtime_helper_022b4080(pSVar12 + 6,pSVar36);
        pSVar12[3].klass = pSVar30;
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c24;
        il2cpp_runtime_helper_022b4080(pSVar12 + 3,pSVar30);
        pSVar12[5].klass = extraout_RDX;
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c34;
        il2cpp_runtime_helper_022b4080(pSVar12 + 5,extraout_RDX);
        *(undefined4 *)((long)&pSVar12[6].monitor + 4) = *(undefined4 *)((long)ppIVar28 + -0x6c);
        pSVar12[4].klass = (System_Collections_IList_c *)pIVar26;
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c52;
        il2cpp_runtime_helper_022b4080(pSVar12 + 4,pIVar26);
        return;
      }
      *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c8a;
      auVar45 = il2cpp_runtime_helper_022b2c90();
      *(long *)((long)ppIVar28 + -0x78) = lVar32;
      *(System_Collections_IList_c **)((long)ppIVar28 + -0x80) = extraout_RDX;
      *(Il2CppClass **)((long)ppIVar28 + -0x88) = pIVar26;
      *(System_Collections_IList_c **)((long)ppIVar28 + -0x90) = pSVar36;
      *(System_Collections_IList_c **)((long)ppIVar28 + -0x98) = pSVar30;
      *(undefined8 *)((long)ppIVar28 + -0xa0) = 0;
      *(long *)((long)ppIVar28 + -0xa8) = auVar45._0_8_;
      uVar24 = (ulong)pIVar22 & 0xffffffff;
      lVar32 = lVar16;
      if (*(long **)(lVar16 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664d2e;
        il2cpp_runtime_helper_02300a20(lVar16);
        lVar10 = **(long **)(lVar16 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(lVar16 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664cc4;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664ccc;
      __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(lVar10);
      method_00 = *(MethodInfo_2F65260 **)(*(long *)(lVar16 + 0x38) + 8);
      pIVar23 = (Il2CppClass *)&g_data_fffffffe;
      *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664ce4;
      pIVar37 = __this_00;
      Interpolate__NewCatmullRom_d__20_object____ctor(__this_00,-2,method_00);
      if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
        (__this_00->fields).__3__nodes = pSVar33;
        *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664cf9;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).__3__nodes,pSVar33);
        (__this_00->fields).__3__toVector3 = pIVar21;
        *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664d0c;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).__3__toVector3,pIVar21);
        (__this_00->fields).slices = auVar45._8_4_;
        *(char *)((long)&(__this_00->fields).loop + 1) = (char)uVar24;
        return;
      }
      *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664d45;
      auVar46 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppIVar28 + -0xb0) = 0;
      *(ulong *)((long)ppIVar28 + -0xb8) = auVar45._8_8_ & 0xffffffff;
      *(ulong *)((long)ppIVar28 + -0xc0) = uVar24;
      *(System_Collections_IList_o **)((long)ppIVar28 + -200) = pSVar33;
      *(Interpolate_ToVector3_T__o **)((long)ppIVar28 + -0xd0) = pIVar21;
      *(long *)((long)ppIVar28 + -0xd8) = lVar16;
      *(long *)((long)ppIVar28 + -0xe0) = auVar46._0_8_;
      uVar24 = (ulong)pIVar22 & 0xffffffff;
      lVar16 = lVar32;
      if (*(long **)(lVar32 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664dee;
        il2cpp_runtime_helper_02300a20(lVar32);
        lVar10 = **(long **)(lVar32 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(lVar32 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664d84;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664d8c;
      __this_01 = (System_String_c *)il2cpp_runtime_helper_023052d0(lVar10);
      method_01 = *(MethodInfo_2F65BB0 **)(*(long *)(lVar32 + 0x38) + 8);
      SVar17._stringLength = -2;
      SVar17._firstChar = 0;
      SVar17._6_2_ = 0;
      *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664da4;
      pSVar38 = __this_01;
      Interpolate__NewCatmullRom_d__20_Vector3____ctor
                ((Interpolate__NewCatmullRom_d__20_T__o *)__this_01,-2,method_01);
      if (__this_01 != (System_String_c *)0x0) {
        (__this_01->_1).this_arg.data = pIVar37;
        *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664db9;
        il2cpp_runtime_helper_022b4080(&(__this_01->_1).this_arg,pIVar37);
        (__this_01->_1).element_class = pIVar23;
        *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664dcc;
        il2cpp_runtime_helper_022b4080(&(__this_01->_1).element_class,pIVar23);
        *(int32_t *)&(__this_01->_1).declaringType = auVar46._8_4_;
        *(char *)((long)&(__this_01->_1).castClass + 1) = (char)uVar24;
        return;
      }
      *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664e05;
      auVar45 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppIVar28 + -0xe8) = 0;
      *(ulong *)((long)ppIVar28 + -0xf0) = auVar46._8_8_ & 0xffffffff;
      *(ulong *)((long)ppIVar28 + -0xf8) = uVar24;
      *(Interpolate__NewCatmullRom_d__20_T__o **)((long)ppIVar28 + -0x100) = pIVar37;
      *(Il2CppClass **)((long)ppIVar28 + -0x108) = pIVar23;
      *(long *)((long)ppIVar28 + -0x110) = lVar32;
      *(long *)((long)ppIVar28 + -0x118) = auVar45._0_8_;
      uVar24 = (ulong)pIVar22 & 0xffffffff;
      lVar32 = lVar16;
      if (*(long **)(lVar16 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664eab;
        il2cpp_runtime_helper_02300a20(lVar16);
        lVar10 = **(long **)(lVar16 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(lVar16 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e44;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e4c;
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar10);
      plVar31 = (long *)&g_data_fffffffe;
      vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 8);
      *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e61;
      pSVar18 = pSVar13;
      (*vtableDispatch)();
      if (pSVar13 != (System_String_o *)0x0) {
        pSVar13[2].klass = pSVar38;
        *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e76;
        il2cpp_runtime_helper_022b4080(pSVar13 + 2,pSVar38);
        pSVar13[2].fields = SVar17;
        *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e89;
        il2cpp_runtime_helper_022b4080(&pSVar13[2].fields,SVar17);
        *(int *)&pSVar13[3].monitor = auVar45._8_4_;
        *(char *)((long)&pSVar13[3].klass + 1) = (char)uVar24;
        return;
      }
      *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664ec2;
      il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppIVar28 + -0x120) = 0;
      *(ulong *)((long)ppIVar28 + -0x128) = auVar45._8_8_ & 0xffffffff;
      *(ulong *)((long)ppIVar28 + -0x130) = uVar24;
      *(System_String_c **)((long)ppIVar28 + -0x138) = pSVar38;
      *(System_String_Fields *)((long)ppIVar28 + -0x140) = SVar17;
      *(long *)((long)ppIVar28 + -0x148) = lVar16;
      *(undefined4 *)((long)ppIVar28 + -0x14c) = extraout_EDX;
      pSVar14 = *(System_RuntimeTypeHandle_Fields **)(lVar32 + 0x38);
      if (pSVar14 == (System_RuntimeTypeHandle_Fields *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f03;
        il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
        pSVar14 = *(System_RuntimeTypeHandle_Fields **)(lVar32 + 0x38);
        if (pSVar14 == (System_RuntimeTypeHandle_Fields *)0x0) {
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f14;
          il2cpp_runtime_helper_02300a20(lVar32);
          pSVar14 = *(System_RuntimeTypeHandle_Fields **)(lVar32 + 0x38);
        }
      }
      SVar3.fields.value = (System_RuntimeTypeHandle_Fields)pSVar14->value;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f37;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f41;
      pSVar15 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f5c;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f69;
      bVar7 = Unity_VisualScripting_TypeUtility__IsAssignableFrom
                        (pSVar15,(Il2CppObject *)pIVar22,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f88;
      uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f95;
      lVar16 = il2cpp_runtime_helper_022b2a40(uVar11,4);
      *(long *)((long)ppIVar28 + -0x158) = lVar16;
      if (lVar16 != 0) goto label_02664fa4;
label_02664f9f:
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fa4;
      il2cpp_runtime_helper_022b2c90();
label_02664fa4:
      SVar17 = pSVar18->fields;
      if (SVar17 == (System_String_Fields)0x0) goto label_02664fd6;
      uVar11 = *(undefined8 *)(**(long **)((long)ppIVar28 + -0x158) + 0x40);
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fc2;
      lVar16 = il2cpp_runtime_helper_023051f0(SVar17,uVar11);
      if (lVar16 != 0) goto label_02664fd6;
label_02664fc7:
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fcc;
      uVar11 = il2cpp_runtime_helper_0231b270();
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fd6;
      il2cpp_runtime_helper_022b2b10(uVar11,0);
label_02664fd6:
      if (*(int *)(*(long *)((long)ppIVar28 + -0x158) + 0x18) != 0) goto label_02664fe6;
      do {
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fe6;
        il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
        lVar16 = *(long *)((long)ppIVar28 + -0x158);
        *(System_String_Fields *)(lVar16 + 0x20) = SVar17;
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664ffb;
        il2cpp_runtime_helper_022b4080(lVar16 + 0x20,SVar17);
        if (plVar31 == (long *)0x0) goto label_02664f9f;
        uVar11 = *(undefined8 *)(*plVar31 + 0x1c0);
        vtableDispatch = *(code **)(*plVar31 + 0x1b8);
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665013;
        SVar17 = (System_String_Fields)(*vtableDispatch)(plVar31,uVar11);
        if (SVar17 != (System_String_Fields)0x0) {
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266502f;
          lVar16 = il2cpp_runtime_helper_023051f0(SVar17);
          if (lVar16 == 0) goto label_02664fc7;
        }
        if (1 < *(uint *)(*(long *)((long)ppIVar28 + -0x158) + 0x18)) {
          lVar16 = *(long *)((long)ppIVar28 + -0x158);
          *(System_String_Fields *)(lVar16 + 0x28) = SVar17;
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665057;
          il2cpp_runtime_helper_022b4080(lVar16 + 0x28);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665063;
          pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
          if (pIVar22 != (Il2CppClass *)0x0) {
            *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665075;
            pSVar15 = System_Object__GetType((Il2CppObject *)pIVar22,(MethodInfo *)0x0);
            if (pSVar15 == (System_Type_o *)0x0) goto label_02664f9f;
            pMVar4 = (pSVar15->klass->vtable)._3_ToString.method;
            pIVar5 = (pSVar15->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665091;
            lVar16 = (*pIVar5)(pSVar15,pMVar4);
            if (lVar16 != 0) goto label_026650a8;
          }
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650a5;
          lVar16 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
          args = *(System_Object_array **)((long)ppIVar28 + -0x158);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650b5;
          il2cpp_runtime_helper_01f681a0(args);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650c0;
          il2cpp_runtime_helper_01f6def0(args,lVar16);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650d0;
          il2cpp_runtime_helper_01f6df20(args,2,lVar16);
          SVar3.fields.value =
               (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar32 + 0x38))->value;
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650e3;
          il2cpp_runtime_helper_01f68090(g_data_057b9c50);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650ed;
          pSVar15 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650f8;
          il2cpp_runtime_helper_01f681a0(args);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665103;
          il2cpp_runtime_helper_01f6def0(args,pSVar15);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665113;
          il2cpp_runtime_helper_01f6df20(args,3,pSVar15);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665120;
          pSVar18 = System_String__Format_3af7980(pSVar18,args,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266512b;
          il2cpp_runtime_helper_01f681a0(plVar31);
          uVar11 = *(undefined8 *)(*plVar31 + 0x240);
          vtableDispatch = *(code **)(*plVar31 + 0x238);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266513e;
          uVar11 = (*vtableDispatch)(plVar31,uVar11);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665149;
          il2cpp_runtime_helper_01f681a0(uVar11);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665156;
          plVar31 = (long *)il2cpp_runtime_helper_01f6e290(uVar11,(long)*(int *)((long)ppIVar28 + -0x14c));
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665161;
          il2cpp_runtime_helper_01f681a0(plVar31);
          uVar11 = *(undefined8 *)(*plVar31 + 0x1e0);
          vtableDispatch = *(code **)(*plVar31 + 0x1d8);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665175;
          pSVar13 = (System_String_o *)(*vtableDispatch)(plVar31,uVar11);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665184;
          uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266518c;
          __this_02 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar11);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266519f;
          System_ArgumentException___ctor_3c0adc0(__this_02,pSVar18,pSVar13,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26651aa;
          pSVar39 = __this_02;
          uVar11 = il2cpp_runtime_helper_022b2b10();
          *(undefined8 **)((long)ppIVar28 + -0x168) = &g_data_057b9b70;
          *(System_ArgumentException_o **)((long)ppIVar28 + -0x170) = __this_02;
          *(undefined8 *)((long)ppIVar28 + -0x178) = uVar11;
          if (*(long *)(lVar32 + 0x38) == 0) {
            *(undefined8 *)((long)ppIVar28 + -0x180) = 0x26651c9;
            il2cpp_runtime_helper_02300a20(lVar32);
          }
          pMVar4 = pSVar39->klass[2].vtable._10_get_Source.method;
          pIVar5 = pSVar39->klass[2].vtable._10_get_Source.methodPtr;
          *(undefined8 *)((long)ppIVar28 + -0x180) = 0x26651dc;
          auVar45 = (*pIVar5)(pSVar39,pMVar4);
          vtableDispatch = *(code **)**(undefined8 **)(lVar32 + 0x38);
          (*vtableDispatch)
                    (auVar45._0_8_,(undefined8 *)**(undefined8 **)(lVar32 + 0x38),auVar45._8_8_,
                     vtableDispatch);
          return;
        }
      } while( true );
    }
  }
  else if (cVar2 == '\x04') {
    *(undefined1 **)(in_RDI + 0x18) = &label_02233fb0;
    goto label_04060365;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
label_04060365:
  *(code **)(in_RDI + 0x38) = il2cpp_runtime_helper_02233f20;
  return;
}


// Interpolate.Function$$Invoke
// il2cpp: float Interpolate_Function__Invoke (Interpolate_Function_o* __this, float a, float b, float c, float d, const MethodInfo* method);
// 0x4061300

float Interpolate_Function__Invoke
                (Interpolate_Function_o *__this,float a,float b,float c,float d,MethodInfo *method)

{
  code *vtableDispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  fVar1 = (float)(*vtableDispatch)
                           ((__this->fields).method_code,(__this->fields).method,in_RDX,vtableDispatch)
  ;
  return fVar1;
}


// Interpolate.Function$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_Function__BeginInvoke (Interpolate_Function_o* __this, float a, float b, float c, float d, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x4061320

System_IAsyncResult_o *
Interpolate_Function__BeginInvoke
          (Interpolate_Function_o *__this,float a,float b,float c,float d,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_58 = d;
  local_54 = c;
  local_50 = b;
  local_4c = a;
  local_48 = il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_4c);
  local_40 = il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_50);
  local_38 = il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_54);
  local_30 = il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_58);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&local_48,callback,object);
  return pSVar1;
}


// Interpolate.Function$$EndInvoke
// il2cpp: float Interpolate_Function__EndInvoke (Interpolate_Function_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x40613d0

float Interpolate_Function__EndInvoke
                (Interpolate_Function_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  
  lVar1 = il2cpp_runtime_helper_0233bb60(result,0);
  if (lVar1 != 0) {
    pfVar2 = (float *)il2cpp_runtime_helper_02305440(lVar1);
    return *pfVar2;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  return fVar3;
}


// Interpolate.<NewBezier>d__16<object>$$.ctor
// il2cpp: void Interpolate__NewBezier_d__16_object____ctor (Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, const MethodInfo_2F63230* method);
// 0x3063230

void Interpolate__NewBezier_d__16_object____ctor
               (Interpolate__NewBezier_d__16_T__o *__this,int32_t __1__state,MethodInfo_2F63230 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$.ctor
// il2cpp: void Interpolate__NewBezier_d__16_Vector3____ctor (Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, const MethodInfo_2F63D60* method);
// 0x3063d60

void Interpolate__NewBezier_d__16_Vector3____ctor
               (Interpolate__NewBezier_d__16_T__o *__this,int32_t __1__state,MethodInfo_2F63D60 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType____ctor (Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, const MethodInfo_2F64890* method);
// 0x3064890

void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType____ctor
               (Interpolate__NewBezier_d__16_T__o *__this,int32_t __1__state,MethodInfo_2F64890 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewBezier>d__16<object>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewBezier_d__16_object___System_IDisposable_Dispose (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63260* method);
// 0x3063260

void Interpolate__NewBezier_d__16_object___System_IDisposable_Dispose
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63260 *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEnumerator_float__o *pSVar3;
  System_Collections_Generic_IEnumerator_float__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtableDispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (g_data_057a84bd == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a84bd = '\x01';
    }
    (__this->fields).__1__state = -1;
    pSVar3 = (__this->fields).__7__wrap2;
    if (pSVar3 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      pSVar4 = pSVar3->klass;
      uVar1._0_1_ = (pSVar4->_2).rank;
      uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar5;
            auVar7._0_8_ = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar6);
            goto label_030632ff;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pSVar3,TypeInfo_IDisposable,0);
label_030632ff:
      vtableDispatch = (code *)*auVar7._0_8_;
      (*vtableDispatch)(pSVar3,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewBezier_d__16_Vector3___System_IDisposable_Dispose (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63D90* method);
// 0x3063d90

void Interpolate__NewBezier_d__16_Vector3___System_IDisposable_Dispose
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63D90 *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEnumerator_float__o *pSVar3;
  System_Collections_Generic_IEnumerator_float__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtableDispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (g_data_057a84c0 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a84c0 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pSVar3 = (__this->fields).__7__wrap2;
    if (pSVar3 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      pSVar4 = pSVar3->klass;
      uVar1._0_1_ = (pSVar4->_2).rank;
      uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar5;
            auVar7._0_8_ = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar6);
            goto label_03063e2f;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pSVar3,TypeInfo_IDisposable,0);
label_03063e2f:
      vtableDispatch = (code *)*auVar7._0_8_;
      (*vtableDispatch)(pSVar3,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_IDisposable_Dispose (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F648C0* method);
// 0x30648c0

void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_IDisposable_Dispose
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F648C0 *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  (*method->klass->rgctx_data->_1_Interpolate__NewBezier_d__16_T____m__Finally1->methodPointer)();
  return;
}


// Interpolate.<NewBezier>d__16<object>$$MoveNext
// il2cpp: bool Interpolate__NewBezier_d__16_object___MoveNext (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63310* method);
// 0x3063310

bool_conflict
Interpolate__NewBezier_d__16_object___MoveNext
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63310 *method)

{
  System_Collections_Generic_IEnumerator_float__o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  System_Collections_IList_c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  System_Collections_Generic_IEnumerable_float__o *pSVar12;
  System_Collections_Generic_IEnumerable_float__c *pSVar13;
  System_Collections_Generic_IEnumerator_float__c *pSVar14;
  Interpolate_ToVector3_T__o *pIVar15;
  void *pvVar16;
  char cVar17;
  int iVar18;
  undefined4 uVar19;
  Il2CppMethodPointer *ppIVar20;
  UnityEngine_Vector3_array *pUVar21;
  System_Collections_Generic_IEnumerator_float__o *pSVar22;
  undefined8 *puVar23;
  Il2CppClass *pIVar24;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  System_Collections_IList_o *pSVar28;
  long lVar29;
  ulong uVar30;
  long unaff_R13;
  float elapsedTime;
  float in_XMM1_Da;
  UnityEngine_Vector3_Fields UVar31;
  undefined1 auVar32 [12];
  
  if (g_data_057a84bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    il2cpp_runtime_helper_023445d0();
    g_data_057a84bc = '\x01';
  }
  iVar18 = (__this->fields).__1__state;
  if (iVar18 == 1) {
label_0306353a:
    (__this->fields).__1__state = -3;
    pSVar22 = (__this->fields).__7__wrap2;
    if (pSVar22 == (System_Collections_Generic_IEnumerator_float__o *)0x0) {
label_03063931:
      il2cpp_runtime_helper_022b2c90();
label_03063936:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar14 = pSVar22->klass;
      uVar5._0_1_ = (pSVar14->_2).rank;
      uVar5._1_1_ = (pSVar14->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar11 = (pSVar14->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar29) == TypeInfo_IEnumerator) {
            ppIVar20 = &pSVar14->vtable[*(int *)((long)&pIVar11->offset + lVar29)].methodPtr;
            goto label_030635b1;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar29);
      }
      ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IEnumerator,0);
label_030635b1:
      cVar17 = (**ppIVar20)(pSVar22,(MethodInfo *)ppIVar20[1]);
      ppSVar1 = &(__this->fields).__7__wrap2;
      if (cVar17 == '\0') {
        if (g_data_057a84bd == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057a84bd = '\x01';
        }
        (__this->fields).__1__state = -1;
        pSVar22 = (__this->fields).__7__wrap2;
        if (pSVar22 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
          pSVar14 = pSVar22->klass;
          uVar7._0_1_ = (pSVar14->_2).rank;
          uVar7._1_1_ = (pSVar14->_2).minimumAlignment;
          if ((ulong)uVar7 != 0) {
            pIVar11 = (pSVar14->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar11->interfaceType + lVar29) == TypeInfo_IDisposable) {
                ppIVar20 = &pSVar14->vtable[*(int *)((long)&pIVar11->offset + lVar29)].methodPtr;
                goto label_030638d1;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar7 << 4 != lVar29);
          }
          ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IDisposable,0);
label_030638d1:
          (**ppIVar20)(pSVar22,(MethodInfo *)ppIVar20[1]);
        }
        *ppSVar1 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
        il2cpp_runtime_helper_022b4080(ppSVar1,0);
        (__this->fields)._points_5__2 = (UnityEngine_Vector3_array *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._points_5__2,0);
        return 0;
      }
      pSVar22 = *ppSVar1;
      if (pSVar22 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
        pSVar14 = pSVar22->klass;
        uVar6._0_1_ = (pSVar14->_2).rank;
        uVar6._1_1_ = (pSVar14->_2).minimumAlignment;
        if ((ulong)uVar6 != 0) {
          pIVar11 = (pSVar14->_1).interfaceOffsets;
          lVar29 = 0;
          do {
            if (*(long *)((long)&pIVar11->interfaceType + lVar29) == TypeInfo_IEnumerator_float) {
              ppIVar20 = &pSVar14->vtable[*(int *)((long)&pIVar11->offset + lVar29)].methodPtr;
              goto label_030636b4;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)uVar6 << 4 != lVar29);
        }
        ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IEnumerator_float,0);
label_030636b4:
        elapsedTime = (float)(**ppIVar20)(pSVar22,(MethodInfo *)ppIVar20[1]);
        pSVar28 = (__this->fields).nodes;
        if (pSVar28 != (System_Collections_IList_o *)0x0) {
          uVar30 = 0;
          do {
            pSVar10 = pSVar28->klass;
            uVar8._0_1_ = (pSVar10->_2).rank;
            uVar8._1_1_ = (pSVar10->_2).minimumAlignment;
            if ((ulong)uVar8 != 0) {
              pIVar11 = (pSVar10->_1).interfaceOffsets;
              lVar29 = 0;
              do {
                if (*(long *)((long)&pIVar11->interfaceType + lVar29) == TypeInfo_ICollection) {
                  ppIVar20 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar29) + 1].methodPtr;
                  goto label_03063758;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)uVar8 << 4 != lVar29);
            }
            ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar28,TypeInfo_ICollection,1);
label_03063758:
            iVar18 = (**ppIVar20)(pSVar28,(MethodInfo *)ppIVar20[1]);
            if ((long)iVar18 <= (long)uVar30) goto label_0306388d;
            pIVar24 = (Il2CppClass *)(__this->fields).nodes;
            if (pIVar24 == (Il2CppClass *)0x0) {
              il2cpp_runtime_helper_022b2c90();
label_03063917:
              il2cpp_runtime_helper_022b2c90();
label_0306391c:
              il2cpp_runtime_helper_022b2c90();
label_03063921:
              il2cpp_runtime_helper_022b2ca0();
              lVar29 = unaff_R13;
label_03063926:
              il2cpp_runtime_helper_022b2fd0(lVar29,pIVar24);
              goto label_03063931;
            }
            pUVar21 = (__this->fields)._points_5__2;
            pIVar15 = (__this->fields).toVector3;
            pvVar16 = (pIVar24->_1).image;
            if ((ulong)*(ushort *)((long)pvVar16 + 0x12e) != 0) {
              lVar29 = 0;
              do {
                if (*(long *)(*(long *)((long)pvVar16 + 0xb0) + lVar29) == TypeInfo_IList) {
                  puVar23 = (undefined8 *)
                            ((long)pvVar16 +
                            (long)*(int *)(*(long *)((long)pvVar16 + 0xb0) + 8 + lVar29) * 0x10 + 0x138);
                  goto label_030637e3;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)*(ushort *)((long)pvVar16 + 0x12e) << 4 != lVar29);
            }
            puVar23 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar24,TypeInfo_IList,0);
label_030637e3:
            lVar29 = (*(code *)*puVar23)(pIVar24,uVar30 & 0xffffffff,puVar23[1]);
            if (pIVar15 == (Interpolate_ToVector3_T__o *)0x0) goto label_03063917;
            pIVar24 = method->klass->rgctx_data->_3_T;
            if (((pIVar24->_2).field_0x6d & 1) == 0) {
              pIVar24 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar24);
            }
            if (lVar29 != 0) {
              lVar25 = il2cpp_runtime_helper_023051f0(lVar29,pIVar24);
              if (lVar25 != 0) goto label_03063842;
              goto label_03063926;
            }
            lVar25 = 0;
label_03063842:
            uVar27 = (*(code *)(pIVar15->fields).invoke_impl)
                               ((pIVar15->fields).method_code,lVar25,(pIVar15->fields).method);
            unaff_R13 = lVar29;
            if (pUVar21 == (UnityEngine_Vector3_array *)0x0) goto label_0306391c;
            if ((uint)pUVar21->max_length <= uVar30) goto label_03063921;
            pUVar21->m_Items[uVar30].fields.x = (float)(int)uVar27;
            pUVar21->m_Items[uVar30].fields.y = (float)(int)((ulong)uVar27 >> 0x20);
            pUVar21->m_Items[uVar30].fields.z = in_XMM1_Da;
            uVar30 = uVar30 + 1;
            pSVar28 = (__this->fields).nodes;
          } while (pSVar28 != (System_Collections_IList_o *)0x0);
        }
        il2cpp_runtime_helper_022b2c90();
label_0306388d:
        UVar31 = (UnityEngine_Vector3_Fields)
                 Interpolate__Bezier((__this->fields).ease,(__this->fields)._points_5__2,elapsedTime,
                                     (__this->fields).maxStep,(MethodInfo *)0x0);
        (__this->fields).__2__current.fields = UVar31;
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar28 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (iVar18 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pSVar28 = (__this->fields).nodes;
    if (pSVar28 == (System_Collections_IList_o *)0x0) goto label_03063936;
    pSVar10 = pSVar28->klass;
    uVar2._0_1_ = (pSVar10->_2).rank;
    uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar29) == TypeInfo_ICollection) {
          ppIVar20 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar29) + 1].methodPtr;
          goto label_03063409;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar29);
    }
    ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar28,TypeInfo_ICollection,1);
label_03063409:
    iVar18 = (**ppIVar20)(pSVar28,(MethodInfo *)ppIVar20[1]);
    if (iVar18 < 2) {
      return 0;
    }
    pSVar28 = (__this->fields).nodes;
    if (pSVar28 != (System_Collections_IList_o *)0x0) {
      pSVar10 = pSVar28->klass;
      uVar3._0_1_ = (pSVar10->_2).rank;
      uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar29) == TypeInfo_ICollection) {
            ppIVar20 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar29) + 1].methodPtr;
            goto label_03063489;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar29);
      }
      ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar28,TypeInfo_ICollection,1);
label_03063489:
      uVar19 = (**ppIVar20)(pSVar28,(MethodInfo *)ppIVar20[1]);
      pUVar21 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,uVar19);
      (__this->fields)._points_5__2 = pUVar21;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._points_5__2,pUVar21);
      pSVar12 = (__this->fields).steps;
      if (pSVar12 == (System_Collections_Generic_IEnumerable_float__o *)0x0) goto label_03063945;
      pSVar13 = pSVar12->klass;
      uVar4._0_1_ = (pSVar13->_2).rank;
      uVar4._1_1_ = (pSVar13->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar11 = (pSVar13->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar29) == TypeInfo_IEnumerable_float) {
            ppIVar20 = &pSVar13->vtable[*(int *)((long)&pIVar11->offset + lVar29)].methodPtr;
            goto label_03063521;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar29);
      }
      ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IEnumerable_float,0);
label_03063521:
      pSVar22 = (System_Collections_Generic_IEnumerator_float__o *)
                (**ppIVar20)(pSVar12,(MethodInfo *)ppIVar20[1]);
      (__this->fields).__7__wrap2 = pSVar22;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap2,pSVar22);
      goto label_0306353a;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03063945:
  auVar32 = il2cpp_runtime_helper_022b2c90();
  uVar27 = auVar32._0_8_;
  if (auVar32._8_4_ == 1) {
    plVar26 = (long *)__cxa_begin_catch(uVar27);
    lVar29 = *plVar26;
    __cxa_end_catch();
    if (lVar29 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_01fd0320(__this,method->klass->rgctx_data);
    uVar27 = il2cpp_runtime_helper_022fefe0();
    if (lVar29 != 0) {
      iVar18 = (__this->fields).__1__state;
      if ((iVar18 == 1) || (iVar18 == -3)) {
        if (g_data_057a84bd == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057a84bd = '\x01';
        }
        (__this->fields).__1__state = -1;
        pSVar22 = (__this->fields).__7__wrap2;
        if (pSVar22 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
          pSVar14 = pSVar22->klass;
          uVar9._0_1_ = (pSVar14->_2).rank;
          uVar9._1_1_ = (pSVar14->_2).minimumAlignment;
          if ((ulong)uVar9 != 0) {
            pIVar11 = (pSVar14->_1).interfaceOffsets;
            lVar25 = 0;
            do {
              if (*(long *)((long)&pIVar11->interfaceType + lVar25) == TypeInfo_IDisposable) {
                ppIVar20 = &pSVar14->vtable[*(int *)((long)&pIVar11->offset + lVar25)].methodPtr;
                goto label_03063b0f;
              }
              lVar25 = lVar25 + 0x10;
            } while ((ulong)uVar9 << 4 != lVar25);
          }
          ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IDisposable,0);
label_03063b0f:
          (**ppIVar20)(pSVar22,(MethodInfo *)ppIVar20[1]);
        }
      }
      uVar27 = il2cpp_runtime_helper_022fefe0(lVar29);
    }
  }
  _Unwind_Resume(uVar27);
}


// Interpolate.<NewBezier>d__16<Vector3>$$MoveNext
// il2cpp: bool Interpolate__NewBezier_d__16_Vector3___MoveNext (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63E40* method);
// 0x3063e40

bool_conflict
Interpolate__NewBezier_d__16_Vector3___MoveNext
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63E40 *method)

{
  System_Collections_Generic_IEnumerator_float__o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  System_Collections_IList_c *pSVar11;
  Il2CppRuntimeInterfaceOffsetPair *pIVar12;
  System_Collections_Generic_IEnumerable_float__o *pSVar13;
  System_Collections_Generic_IEnumerable_float__c *pSVar14;
  System_Collections_Generic_IEnumerator_float__c *pSVar15;
  Interpolate_ToVector3_T__o *pIVar16;
  char cVar17;
  int iVar18;
  undefined4 uVar19;
  Il2CppMethodPointer *ppIVar20;
  UnityEngine_Vector3_array *pUVar21;
  System_Collections_Generic_IEnumerator_float__o *pSVar22;
  System_Collections_IList_o *pSVar23;
  Il2CppClass *pIVar24;
  undefined8 *puVar25;
  long *plVar26;
  System_Collections_IList_o *pSVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  float elapsedTime;
  undefined8 uVar31;
  float fVar32;
  UnityEngine_Vector3_Fields UVar33;
  undefined1 auVar34 [12];
  
  if (g_data_057a84bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    il2cpp_runtime_helper_023445d0();
    g_data_057a84bf = '\x01';
  }
  iVar18 = (__this->fields).__1__state;
  if (iVar18 == 1) {
label_0306406a:
    (__this->fields).__1__state = -3;
    pSVar22 = (__this->fields).__7__wrap2;
    if (pSVar22 == (System_Collections_Generic_IEnumerator_float__o *)0x0) {
label_0306445c:
      il2cpp_runtime_helper_022b2c90();
label_03064461:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar15 = pSVar22->klass;
      uVar5._0_1_ = (pSVar15->_2).rank;
      uVar5._1_1_ = (pSVar15->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar12 = (pSVar15->_1).interfaceOffsets;
        lVar28 = 0;
        do {
          if (*(long *)((long)&pIVar12->interfaceType + lVar28) == TypeInfo_IEnumerator) {
            ppIVar20 = &pSVar15->vtable[*(int *)((long)&pIVar12->offset + lVar28)].methodPtr;
            goto label_030640e1;
          }
          lVar28 = lVar28 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar28);
      }
      ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IEnumerator,0);
label_030640e1:
      cVar17 = (**ppIVar20)(pSVar22,(MethodInfo *)ppIVar20[1]);
      ppSVar1 = &(__this->fields).__7__wrap2;
      if (cVar17 == '\0') {
        if (g_data_057a84c0 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057a84c0 = '\x01';
        }
        (__this->fields).__1__state = -1;
        pSVar22 = (__this->fields).__7__wrap2;
        if (pSVar22 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
          pSVar15 = pSVar22->klass;
          uVar7._0_1_ = (pSVar15->_2).rank;
          uVar7._1_1_ = (pSVar15->_2).minimumAlignment;
          if ((ulong)uVar7 != 0) {
            pIVar12 = (pSVar15->_1).interfaceOffsets;
            lVar28 = 0;
            do {
              if (*(long *)((long)&pIVar12->interfaceType + lVar28) == TypeInfo_IDisposable) {
                ppIVar20 = &pSVar15->vtable[*(int *)((long)&pIVar12->offset + lVar28)].methodPtr;
                goto label_030643f7;
              }
              lVar28 = lVar28 + 0x10;
            } while ((ulong)uVar7 << 4 != lVar28);
          }
          ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IDisposable,0);
label_030643f7:
          (**ppIVar20)(pSVar22,(MethodInfo *)ppIVar20[1]);
        }
        *ppSVar1 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
        il2cpp_runtime_helper_022b4080(ppSVar1,0);
        (__this->fields)._points_5__2 = (UnityEngine_Vector3_array *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._points_5__2,0);
        return 0;
      }
      pSVar22 = *ppSVar1;
      if (pSVar22 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
        pSVar15 = pSVar22->klass;
        uVar6._0_1_ = (pSVar15->_2).rank;
        uVar6._1_1_ = (pSVar15->_2).minimumAlignment;
        if ((ulong)uVar6 != 0) {
          pIVar12 = (pSVar15->_1).interfaceOffsets;
          lVar28 = 0;
          do {
            if (*(long *)((long)&pIVar12->interfaceType + lVar28) == TypeInfo_IEnumerator_float) {
              ppIVar20 = &pSVar15->vtable[*(int *)((long)&pIVar12->offset + lVar28)].methodPtr;
              goto label_030641e4;
            }
            lVar28 = lVar28 + 0x10;
          } while ((ulong)uVar6 << 4 != lVar28);
        }
        ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IEnumerator_float,0);
label_030641e4:
        elapsedTime = (float)(**ppIVar20)(pSVar22,(MethodInfo *)ppIVar20[1]);
        pSVar27 = (__this->fields).nodes;
        if (pSVar27 != (System_Collections_IList_o *)0x0) {
          uVar30 = 0;
          do {
            pSVar11 = pSVar27->klass;
            uVar8._0_1_ = (pSVar11->_2).rank;
            uVar8._1_1_ = (pSVar11->_2).minimumAlignment;
            if ((ulong)uVar8 != 0) {
              pIVar12 = (pSVar11->_1).interfaceOffsets;
              lVar28 = 0;
              do {
                if (*(long *)((long)&pIVar12->interfaceType + lVar28) == TypeInfo_ICollection) {
                  ppIVar20 = &pSVar11->vtable[*(int *)((long)&pIVar12->offset + lVar28) + 1].methodPtr;
                  goto label_03064278;
                }
                lVar28 = lVar28 + 0x10;
              } while ((ulong)uVar8 << 4 != lVar28);
            }
            ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_ICollection,1);
label_03064278:
            iVar18 = (**ppIVar20)(pSVar27,(MethodInfo *)ppIVar20[1]);
            if ((long)iVar18 <= (long)uVar30) goto label_030643b3;
            pSVar27 = (__this->fields).nodes;
            pSVar23 = pSVar27;
            if (pSVar27 == (System_Collections_IList_o *)0x0) {
label_0306443d:
              il2cpp_runtime_helper_022b2c90();
              pSVar27 = pSVar23;
label_03064442:
              pSVar23 = pSVar27;
              il2cpp_runtime_helper_022b2c90();
label_03064447:
              il2cpp_runtime_helper_022b2c90();
label_0306444c:
              pIVar24 = (Il2CppClass *)il2cpp_runtime_helper_022b2ca0();
label_03064451:
              il2cpp_runtime_helper_022b2fd0(pSVar23,pIVar24);
              goto label_0306445c;
            }
            pUVar21 = (__this->fields)._points_5__2;
            pIVar16 = (__this->fields).toVector3;
            pSVar11 = pSVar27->klass;
            uVar9._0_1_ = (pSVar11->_2).rank;
            uVar9._1_1_ = (pSVar11->_2).minimumAlignment;
            if ((ulong)uVar9 != 0) {
              pIVar12 = (pSVar11->_1).interfaceOffsets;
              lVar28 = 0;
              do {
                if (*(long *)((long)&pIVar12->interfaceType + lVar28) == TypeInfo_IList) {
                  ppIVar20 = &pSVar11->vtable[*(int *)((long)&pIVar12->offset + lVar28)].methodPtr;
                  goto label_03064303;
                }
                lVar28 = lVar28 + 0x10;
              } while ((ulong)uVar9 << 4 != lVar28);
            }
            ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_IList,0);
label_03064303:
            pSVar23 = (System_Collections_IList_o *)
                      (**ppIVar20)(pSVar27,uVar30 & 0xffffffff,(MethodInfo *)ppIVar20[1]);
            if (pIVar16 == (Interpolate_ToVector3_T__o *)0x0) goto label_03064442;
            pIVar24 = method->klass->rgctx_data->_3_T;
            if (((pIVar24->_2).field_0x6d & 1) == 0) {
              pIVar24 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar24);
            }
            if (pSVar23 == (System_Collections_IList_o *)0x0) goto label_03064447;
            if ((pSVar23->klass->_1).element_class != (pIVar24->_1).element_class) goto label_03064451;
            puVar25 = (undefined8 *)il2cpp_runtime_helper_02305440(pSVar23);
            fVar32 = *(float *)(puVar25 + 1);
            uVar31 = (*(code *)(pIVar16->fields).invoke_impl)
                               (*puVar25,(pIVar16->fields).method_code,(pIVar16->fields).method);
            if (pUVar21 == (UnityEngine_Vector3_array *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0306443d;
            }
            if ((uint)pUVar21->max_length <= uVar30) goto label_0306444c;
            pUVar21->m_Items[uVar30].fields.x = (float)(int)uVar31;
            pUVar21->m_Items[uVar30].fields.y = (float)(int)((ulong)uVar31 >> 0x20);
            pUVar21->m_Items[uVar30].fields.z = fVar32;
            uVar30 = uVar30 + 1;
            pSVar27 = (__this->fields).nodes;
          } while (pSVar27 != (System_Collections_IList_o *)0x0);
        }
        il2cpp_runtime_helper_022b2c90();
label_030643b3:
        UVar33 = (UnityEngine_Vector3_Fields)
                 Interpolate__Bezier((__this->fields).ease,(__this->fields)._points_5__2,elapsedTime,
                                     (__this->fields).maxStep,(MethodInfo *)0x0);
        (__this->fields).__2__current.fields = UVar33;
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar27 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (iVar18 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pSVar27 = (__this->fields).nodes;
    if (pSVar27 == (System_Collections_IList_o *)0x0) goto label_03064461;
    pSVar11 = pSVar27->klass;
    uVar2._0_1_ = (pSVar11->_2).rank;
    uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar12 = (pSVar11->_1).interfaceOffsets;
      lVar28 = 0;
      do {
        if (*(long *)((long)&pIVar12->interfaceType + lVar28) == TypeInfo_ICollection) {
          ppIVar20 = &pSVar11->vtable[*(int *)((long)&pIVar12->offset + lVar28) + 1].methodPtr;
          goto label_03063f39;
        }
        lVar28 = lVar28 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar28);
    }
    ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_ICollection,1);
label_03063f39:
    iVar18 = (**ppIVar20)(pSVar27,(MethodInfo *)ppIVar20[1]);
    if (iVar18 < 2) {
      return 0;
    }
    pSVar27 = (__this->fields).nodes;
    if (pSVar27 != (System_Collections_IList_o *)0x0) {
      pSVar11 = pSVar27->klass;
      uVar3._0_1_ = (pSVar11->_2).rank;
      uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar12 = (pSVar11->_1).interfaceOffsets;
        lVar28 = 0;
        do {
          if (*(long *)((long)&pIVar12->interfaceType + lVar28) == TypeInfo_ICollection) {
            ppIVar20 = &pSVar11->vtable[*(int *)((long)&pIVar12->offset + lVar28) + 1].methodPtr;
            goto label_03063fb9;
          }
          lVar28 = lVar28 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar28);
      }
      ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_ICollection,1);
label_03063fb9:
      uVar19 = (**ppIVar20)(pSVar27,(MethodInfo *)ppIVar20[1]);
      pUVar21 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,uVar19);
      (__this->fields)._points_5__2 = pUVar21;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._points_5__2,pUVar21);
      pSVar13 = (__this->fields).steps;
      if (pSVar13 == (System_Collections_Generic_IEnumerable_float__o *)0x0) goto label_03064470;
      pSVar14 = pSVar13->klass;
      uVar4._0_1_ = (pSVar14->_2).rank;
      uVar4._1_1_ = (pSVar14->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar12 = (pSVar14->_1).interfaceOffsets;
        lVar28 = 0;
        do {
          if (*(long *)((long)&pIVar12->interfaceType + lVar28) == TypeInfo_IEnumerable_float) {
            ppIVar20 = &pSVar14->vtable[*(int *)((long)&pIVar12->offset + lVar28)].methodPtr;
            goto label_03064051;
          }
          lVar28 = lVar28 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar28);
      }
      ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IEnumerable_float,0);
label_03064051:
      pSVar22 = (System_Collections_Generic_IEnumerator_float__o *)
                (**ppIVar20)(pSVar13,(MethodInfo *)ppIVar20[1]);
      (__this->fields).__7__wrap2 = pSVar22;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap2,pSVar22);
      goto label_0306406a;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03064470:
  auVar34 = il2cpp_runtime_helper_022b2c90();
  uVar31 = auVar34._0_8_;
  if (auVar34._8_4_ == 1) {
    plVar26 = (long *)__cxa_begin_catch(uVar31);
    lVar28 = *plVar26;
    __cxa_end_catch();
    if (lVar28 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_01fd03d0(__this,method->klass->rgctx_data);
    uVar31 = il2cpp_runtime_helper_022fefe0();
    if (lVar28 != 0) {
      iVar18 = (__this->fields).__1__state;
      if ((iVar18 == 1) || (iVar18 == -3)) {
        if (g_data_057a84c0 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057a84c0 = '\x01';
        }
        (__this->fields).__1__state = -1;
        pSVar22 = (__this->fields).__7__wrap2;
        if (pSVar22 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
          pSVar15 = pSVar22->klass;
          uVar10._0_1_ = (pSVar15->_2).rank;
          uVar10._1_1_ = (pSVar15->_2).minimumAlignment;
          if ((ulong)uVar10 != 0) {
            pIVar12 = (pSVar15->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar12->interfaceType + lVar29) == TypeInfo_IDisposable) {
                ppIVar20 = &pSVar15->vtable[*(int *)((long)&pIVar12->offset + lVar29)].methodPtr;
                goto label_0306463a;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar10 << 4 != lVar29);
          }
          ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IDisposable,0);
label_0306463a:
          (**ppIVar20)(pSVar22,(MethodInfo *)ppIVar20[1]);
        }
      }
      uVar31 = il2cpp_runtime_helper_022fefe0(lVar28);
    }
  }
  _Unwind_Resume(uVar31);
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$MoveNext
// il2cpp: bool Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___MoveNext (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F648F0* method);
// 0x30648f0

bool_conflict
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___MoveNext
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F648F0 *method)

{
  System_Collections_Generic_IEnumerator_float__o **ppSVar1;
  float duration;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  System_Collections_IList_c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  MethodInfo *pMVar11;
  Il2CppMethodPointer pIVar12;
  System_Collections_Generic_IEnumerable_float__o *pSVar13;
  System_Collections_Generic_IEnumerable_float__c *pSVar14;
  System_Collections_Generic_IEnumerator_float__c *pSVar15;
  Interpolate_ToVector3_T__o *pIVar16;
  Interpolate__NewBezier_d__16_T__RGCTXs *pIVar17;
  InvokerMethod pIVar18;
  Interpolate_Function_o *ease;
  code *vtableDispatch;
  long lVar19;
  undefined1 *puVar20;
  float elapsedTime;
  char cVar21;
  int iVar22;
  undefined4 uVar23;
  bool_conflict bVar24;
  Il2CppMethodPointer *ppIVar25;
  UnityEngine_Vector3_array *pUVar26;
  System_Collections_Generic_IEnumerator_float__o *pSVar27;
  undefined8 uVar28;
  Il2CppClass *pIVar29;
  undefined8 *puVar30;
  long *plVar31;
  long lVar32;
  System_Collections_IList_o *pSVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  UnityEngine_Vector3_Fields UVar38;
  undefined1 auVar39 [12];
  long alStack_78 [2];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  float local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  float local_3c;
  MethodInfo_2F648F0 *local_38;
  
  local_38 = method;
  if (g_data_057a84c2 == '\0') {
    alStack_78[1] = 0x306491d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection);
    alStack_78[1] = 0x3064929;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_float);
    alStack_78[1] = 0x3064935;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_float);
    alStack_78[1] = 0x3064941;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    alStack_78[1] = 0x306494d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList);
    alStack_78[1] = 0x3064959;
    il2cpp_runtime_helper_023445d0();
    g_data_057a84c2 = '\x01';
  }
  lVar19 = -((ulong)(local_38->klass->rgctx_data->_3_T->_2).actualSize + 0xf & 0xfffffffffffffff0);
  local_48 = auStack_68 + lVar19;
  iVar22 = (__this->fields).__1__state;
  if (iVar22 == 1) {
label_03064b5c:
    (__this->fields).__1__state = -3;
    pSVar27 = (__this->fields).__7__wrap2;
    if (pSVar27 == (System_Collections_Generic_IEnumerator_float__o *)0x0) {
label_03064edb:
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ee0;
      il2cpp_runtime_helper_022b2c90();
label_03064ee0:
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ee5;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar15 = pSVar27->klass;
      uVar5._0_1_ = (pSVar15->_2).rank;
      uVar5._1_1_ = (pSVar15->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar10 = (pSVar15->_1).interfaceOffsets;
        lVar34 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar34) == TypeInfo_IEnumerator) {
            ppIVar25 = &pSVar15->vtable[*(int *)((long)&pIVar10->offset + lVar34)].methodPtr;
            goto label_03064bd1;
          }
          lVar34 = lVar34 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar34);
      }
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064bb9;
      ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_IEnumerator,0);
label_03064bd1:
      pMVar11 = (MethodInfo *)ppIVar25[1];
      pIVar12 = *ppIVar25;
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064bda;
      cVar21 = (*pIVar12)(pSVar27,pMVar11);
      ppSVar1 = &(__this->fields).__7__wrap2;
      if (cVar21 == '\0') {
        pIVar12 = local_38->klass->rgctx_data->_1_Interpolate__NewBezier_d__16_T____m__Finally1->methodPointer
        ;
        *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064c53;
        (*pIVar12)(__this);
        *ppSVar1 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
        *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064c64;
        il2cpp_runtime_helper_022b4080(ppSVar1,0);
        (__this->fields)._points_5__2 = (UnityEngine_Vector3_array *)0x0;
        *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064c7b;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._points_5__2,0);
        return 0;
      }
      pSVar27 = *ppSVar1;
      if (pSVar27 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
        pSVar15 = pSVar27->klass;
        uVar6._0_1_ = (pSVar15->_2).rank;
        uVar6._1_1_ = (pSVar15->_2).minimumAlignment;
        if ((ulong)uVar6 != 0) {
          pIVar10 = (pSVar15->_1).interfaceOffsets;
          lVar34 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar34) == TypeInfo_IEnumerator_float) {
              ppIVar25 = &pSVar15->vtable[*(int *)((long)&pIVar10->offset + lVar34)].methodPtr;
              goto label_03064c92;
            }
            lVar34 = lVar34 + 0x10;
          } while ((ulong)uVar6 << 4 != lVar34);
        }
        *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064c39;
        ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_IEnumerator_float,0);
label_03064c92:
        pMVar11 = (MethodInfo *)ppIVar25[1];
        pIVar12 = *ppIVar25;
        *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064c9b;
        local_3c = (float)(*pIVar12)(pSVar27,pMVar11);
        pSVar33 = (__this->fields).nodes;
        if (pSVar33 != (System_Collections_IList_o *)0x0) {
          uVar36 = 0;
          do {
            pSVar9 = pSVar33->klass;
            uVar7._0_1_ = (pSVar9->_2).rank;
            uVar7._1_1_ = (pSVar9->_2).minimumAlignment;
            if ((ulong)uVar7 != 0) {
              pIVar10 = (pSVar9->_1).interfaceOffsets;
              lVar34 = 0;
              do {
                if (*(long *)((long)&pIVar10->interfaceType + lVar34) == TypeInfo_ICollection) {
                  ppIVar25 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar34) + 1].methodPtr;
                  goto label_03064d38;
                }
                lVar34 = lVar34 + 0x10;
              } while ((ulong)uVar7 << 4 != lVar34);
            }
            *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064d0c;
            ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar33,TypeInfo_ICollection,1);
label_03064d38:
            pMVar11 = (MethodInfo *)ppIVar25[1];
            pIVar12 = *ppIVar25;
            *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064d41;
            iVar22 = (*pIVar12)(pSVar33,pMVar11);
            if ((long)iVar22 <= (long)uVar36) goto label_03064e81;
            pSVar33 = (__this->fields).nodes;
            if (pSVar33 == (System_Collections_IList_o *)0x0) {
label_03064ed1:
              *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ed6;
              il2cpp_runtime_helper_022b2c90();
label_03064ed6:
              *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064edb;
              il2cpp_runtime_helper_022b2c90();
              goto label_03064edb;
            }
            pUVar26 = (__this->fields)._points_5__2;
            pIVar16 = (__this->fields).toVector3;
            pSVar9 = pSVar33->klass;
            uVar8._0_1_ = (pSVar9->_2).rank;
            uVar8._1_1_ = (pSVar9->_2).minimumAlignment;
            if ((ulong)uVar8 != 0) {
              pIVar10 = (pSVar9->_1).interfaceOffsets;
              lVar34 = 0;
              do {
                if (*(long *)((long)&pIVar10->interfaceType + lVar34) == TypeInfo_IList) {
                  ppIVar25 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar34)].methodPtr;
                  goto label_03064dc3;
                }
                lVar34 = lVar34 + 0x10;
              } while ((ulong)uVar8 << 4 != lVar34);
            }
            *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064da9;
            ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar33,TypeInfo_IList,0);
label_03064dc3:
            pMVar11 = (MethodInfo *)ppIVar25[1];
            pIVar12 = *ppIVar25;
            *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064dcf;
            uVar28 = (*pIVar12)(pSVar33,uVar36 & 0xffffffff,pMVar11);
            pIVar29 = local_38->klass->rgctx_data->_3_T;
            if (((pIVar29->_2).field_0x6d & 1) == 0) {
              *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064df6;
              pIVar29 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar29);
            }
            puVar20 = local_48;
            *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064e05;
            puVar30 = (undefined8 *)il2cpp_runtime_helper_022b2b80(uVar28,pIVar29,puVar20);
            if (pIVar16 == (Interpolate_ToVector3_T__o *)0x0) {
              *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ecc;
              il2cpp_runtime_helper_022b2c90();
label_03064ecc:
              *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ed1;
              il2cpp_runtime_helper_022b2ca0();
              goto label_03064ed1;
            }
            pIVar17 = local_38->klass->rgctx_data;
            pMVar11 = pIVar17->_4_Interpolate_ToVector3_T__Invoke;
            pIVar12 = pMVar11->methodPointer;
            if (-1 < (int)(pIVar17->_3_T->_1).byval_arg.bits) {
              puVar30 = (undefined8 *)*puVar30;
            }
            pIVar18 = pMVar11->invoker_method;
            local_50 = puVar30;
            *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064e43;
            (*pIVar18)(pIVar12,pMVar11,pIVar16,&local_50,&local_60);
            if (pUVar26 == (UnityEngine_Vector3_array *)0x0) goto label_03064ed6;
            if ((uint)pUVar26->max_length <= uVar36) goto label_03064ecc;
            pUVar26->m_Items[uVar36].fields.x = (float)(undefined4)local_60;
            pUVar26->m_Items[uVar36].fields.y = (float)local_60._4_4_;
            pUVar26->m_Items[uVar36].fields.z = local_58;
            uVar36 = uVar36 + 1;
            pSVar33 = (__this->fields).nodes;
          } while (pSVar33 != (System_Collections_IList_o *)0x0);
        }
        *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064e81;
        il2cpp_runtime_helper_022b2c90();
label_03064e81:
        elapsedTime = local_3c;
        ease = (__this->fields).ease;
        pUVar26 = (__this->fields)._points_5__2;
        duration = (__this->fields).maxStep;
        *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064e9e;
        UVar38 = (UnityEngine_Vector3_Fields)
                 Interpolate__Bezier(ease,pUVar26,elapsedTime,duration,(MethodInfo *)0x0);
        (__this->fields).__2__current.fields = UVar38;
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar33 >> 8),1);
      }
    }
    *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064eea;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (iVar22 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pSVar33 = (__this->fields).nodes;
    if (pSVar33 == (System_Collections_IList_o *)0x0) goto label_03064ee0;
    pSVar9 = pSVar33->klass;
    uVar2._0_1_ = (pSVar9->_2).rank;
    uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar34 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar34) == TypeInfo_ICollection) {
          ppIVar25 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar34) + 1].methodPtr;
          goto label_03064a29;
        }
        lVar34 = lVar34 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar34);
    }
    *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064a0c;
    ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar33,TypeInfo_ICollection,1);
label_03064a29:
    pMVar11 = (MethodInfo *)ppIVar25[1];
    pIVar12 = *ppIVar25;
    *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064a32;
    iVar22 = (*pIVar12)(pSVar33,pMVar11);
    if (iVar22 < 2) {
      return 0;
    }
    pSVar33 = (__this->fields).nodes;
    if (pSVar33 != (System_Collections_IList_o *)0x0) {
      pSVar9 = pSVar33->klass;
      uVar3._0_1_ = (pSVar9->_2).rank;
      uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar34 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar34) == TypeInfo_ICollection) {
            ppIVar25 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar34) + 1].methodPtr;
            goto label_03064aa9;
          }
          lVar34 = lVar34 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar34);
      }
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064a8c;
      ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar33,TypeInfo_ICollection,1);
label_03064aa9:
      pMVar11 = (MethodInfo *)ppIVar25[1];
      pIVar12 = *ppIVar25;
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ab2;
      uVar23 = (*pIVar12)(pSVar33,pMVar11);
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ac3;
      pUVar26 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,uVar23);
      (__this->fields)._points_5__2 = pUVar26;
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ad5;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._points_5__2,pUVar26);
      pSVar13 = (__this->fields).steps;
      if (pSVar13 == (System_Collections_Generic_IEnumerable_float__o *)0x0) goto label_03064eef;
      pSVar14 = pSVar13->klass;
      uVar4._0_1_ = (pSVar14->_2).rank;
      uVar4._1_1_ = (pSVar14->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar10 = (pSVar14->_1).interfaceOffsets;
        lVar34 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar34) == TypeInfo_IEnumerable_float) {
            ppIVar25 = &pSVar14->vtable[*(int *)((long)&pIVar10->offset + lVar34)].methodPtr;
            goto label_03064b41;
          }
          lVar34 = lVar34 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar34);
      }
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064b29;
      ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IEnumerable_float,0);
label_03064b41:
      pMVar11 = (MethodInfo *)ppIVar25[1];
      pIVar12 = *ppIVar25;
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064b4a;
      pSVar27 = (System_Collections_Generic_IEnumerator_float__o *)(*pIVar12)(pSVar13,pMVar11);
      (__this->fields).__7__wrap2 = pSVar27;
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064b5c;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap2,pSVar27);
      goto label_03064b5c;
    }
  }
  *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064eef;
  il2cpp_runtime_helper_022b2c90();
label_03064eef:
  *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ef4;
  auVar39 = il2cpp_runtime_helper_022b2c90();
  uVar28 = auVar39._0_8_;
  if (auVar39._8_4_ == 1) {
    *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064fc2;
    plVar31 = (long *)__cxa_begin_catch(uVar28);
    lVar34 = *plVar31;
    *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064fca;
    __cxa_end_catch();
    if (lVar34 == 0) {
      return 0;
    }
    pIVar12 = local_38->klass->rgctx_data->_5_Interpolate__NewBezier_d__16_T__System_IDisposable_Dispose->
              methodPointer;
    *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064feb;
    (*pIVar12)(__this);
    *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3064ff3;
    uVar28 = il2cpp_runtime_helper_022fefe0(lVar34);
    if (lVar34 != 0) {
      pIVar12 = local_38->klass->rgctx_data->_5_Interpolate__NewBezier_d__16_T__System_IDisposable_Dispose->
                methodPointer;
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3065018;
      (*pIVar12)(__this);
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3065020;
      lVar32 = il2cpp_runtime_helper_022fefe0(lVar34);
      *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3065028;
      bVar24 = il2cpp_runtime_helper_01f66400();
      *(long *)(auStack_68 + lVar19 + -8) = lVar34;
      if (g_data_057a84c3 == '\0') {
        *(undefined8 *)((long)alStack_78 + lVar19) = 0x3065049;
        bVar24 = il2cpp_runtime_helper_023445d0();
        g_data_057a84c3 = '\x01';
      }
      *(undefined4 *)(lVar32 + 0x10) = 0xffffffff;
      plVar31 = *(long **)(lVar32 + 0x78);
      if (plVar31 == (long *)0x0) {
        return bVar24;
      }
      lVar34 = *plVar31;
      if ((ulong)*(ushort *)(lVar34 + 0x12e) != 0) {
        lVar32 = *(long *)(lVar34 + 0xb0);
        lVar35 = 0;
        do {
          if (*(long *)(lVar32 + lVar35) == TypeInfo_IDisposable) {
            auVar37._8_8_ = lVar32;
            auVar37._0_8_ = lVar34 + (long)*(int *)(lVar32 + 8 + lVar35) * 0x10 + 0x138;
            goto label_030650bf;
          }
          lVar35 = lVar35 + 0x10;
        } while ((ulong)*(ushort *)(lVar34 + 0x12e) << 4 != lVar35);
      }
      *(undefined8 *)((long)alStack_78 + lVar19) = 0x30650a9;
      auVar37 = il2cpp_runtime_helper_02300d20(plVar31,TypeInfo_IDisposable,0);
label_030650bf:
      vtableDispatch = (code *)*auVar37._0_8_;
      bVar24 = (*vtableDispatch)(plVar31,auVar37._0_8_[1],auVar37._8_8_,vtableDispatch);
      return bVar24;
    }
  }
  *(undefined8 *)(auStack_68 + lVar19 + -8) = 0x3065000;
  _Unwind_Resume(uVar28);
}


// Interpolate.<NewBezier>d__16<object>$$<>m__Finally1
// il2cpp: void Interpolate__NewBezier_d__16_object_____m__Finally1 (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63B30* method);
// 0x3063b30

void Interpolate__NewBezier_d__16_object_____m__Finally1
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63B30 *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_float__o *pSVar2;
  System_Collections_Generic_IEnumerator_float__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057a84bd == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a84bd = '\x01';
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).__7__wrap2;
  if (pSVar2 == (System_Collections_Generic_IEnumerator_float__o *)0x0) {
    return;
  }
  pSVar3 = pSVar2->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_03063bbf;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pSVar2,TypeInfo_IDisposable,0);
label_03063bbf:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$<>m__Finally1
// il2cpp: void Interpolate__NewBezier_d__16_Vector3_____m__Finally1 (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F64660* method);
// 0x3064660

void Interpolate__NewBezier_d__16_Vector3_____m__Finally1
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F64660 *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_float__o *pSVar2;
  System_Collections_Generic_IEnumerator_float__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057a84c0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a84c0 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).__7__wrap2;
  if (pSVar2 == (System_Collections_Generic_IEnumerator_float__o *)0x0) {
    return;
  }
  pSVar3 = pSVar2->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_030646ef;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pSVar2,TypeInfo_IDisposable,0);
label_030646ef:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$<>m__Finally1
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType_____m__Finally1 (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F65030* method);
// 0x3065030

void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType_____m__Finally1
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F65030 *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_float__o *pSVar2;
  System_Collections_Generic_IEnumerator_float__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057a84c3 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a84c3 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).__7__wrap2;
  if (pSVar2 == (System_Collections_Generic_IEnumerator_float__o *)0x0) {
    return;
  }
  pSVar3 = pSVar2->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_030650bf;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pSVar2,TypeInfo_IDisposable,0);
label_030650bf:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63BD0* method);
// 0x3063bd0

UnityEngine_Vector3_o
Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63BD0 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F64700* method);
// 0x3064700

UnityEngine_Vector3_o
Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F64700 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F650D0* method);
// 0x30650d0

UnityEngine_Vector3_o
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F650D0 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_Reset (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63BE0* method);
// 0x3063be0

void Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_Reset
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63BE0 *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  System_NotSupportedException_o *pSVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  System_NotSupportedException_o *pSStack_20;
  
  pSStack_20 = (System_NotSupportedException_o *)0x3063bf3;
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  pSStack_20 = (System_NotSupportedException_o *)0x3063bfb;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  pSStack_20 = (System_NotSupportedException_o *)0x3063c08;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  pSStack_20 = (System_NotSupportedException_o *)0x3063c13;
  pSVar2 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,method);
  pSStack_20 = __this_00;
  if (g_data_057a84be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84be = '\x01';
  }
  uStack_28 = *(undefined4 *)((long)&(pSVar2->fields)._message + 4);
  uStack_30 = *(undefined8 *)((long)&(pSVar2->fields)._className + 4);
  il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_30);
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_Reset (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F64710* method);
// 0x3064710

void Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_Reset
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F64710 *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  System_NotSupportedException_o *pSVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  System_NotSupportedException_o *pSStack_20;
  
  pSStack_20 = (System_NotSupportedException_o *)0x3064723;
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  pSStack_20 = (System_NotSupportedException_o *)0x306472b;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  pSStack_20 = (System_NotSupportedException_o *)0x3064738;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  pSStack_20 = (System_NotSupportedException_o *)0x3064743;
  pSVar2 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,method);
  pSStack_20 = __this_00;
  if (g_data_057a84c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84c1 = '\x01';
  }
  uStack_28 = *(undefined4 *)((long)&(pSVar2->fields)._message + 4);
  uStack_30 = *(undefined8 *)((long)&(pSVar2->fields)._className + 4);
  il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_30);
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F650E0* method);
// 0x30650e0

void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F650E0 *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  System_NotSupportedException_o *pSVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  System_NotSupportedException_o *pSStack_20;
  
  pSStack_20 = (System_NotSupportedException_o *)0x30650f3;
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  pSStack_20 = (System_NotSupportedException_o *)0x30650fb;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  pSStack_20 = (System_NotSupportedException_o *)0x3065108;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  pSStack_20 = (System_NotSupportedException_o *)0x3065113;
  pSVar2 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,method);
  pSStack_20 = __this_00;
  if (g_data_057a84c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84c4 = '\x01';
  }
  uStack_28 = *(undefined4 *)((long)&(pSVar2->fields)._message + 4);
  uStack_30 = *(undefined8 *)((long)&(pSVar2->fields)._className + 4);
  il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_30);
  return;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63C20* method);
// 0x3063c20

Il2CppObject *
Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63C20 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (g_data_057a84be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84be = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F64750* method);
// 0x3064750

Il2CppObject *
Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F64750 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (g_data_057a84c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84c1 = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F65120* method);
// 0x3065120

Il2CppObject *
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F65120 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (g_data_057a84c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84c4 = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63C70* method);
// 0x3063c70

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63C70 *method)

{
  uint uVar1;
  uint uVar2;
  int32_t iVar3;
  Il2CppClass *pIVar4;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  undefined8 unaff_RBX;
  ulong unaff_RBP;
  long lVar5;
  Interpolate__NewBezier_d__16_T__o *pIVar6;
  Interpolate__NewBezier_d__16_T__o *unaff_R14;
  
  do {
    pIVar6 = __this;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Interpolate__NewBezier_d__16_T__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    if ((pIVar6->fields).__1__state == -2) {
      uVar1 = (pIVar6->fields).__l__initialThreadId;
      unaff_RBP = (ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063c8b;
      uVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (uVar1 == uVar2) {
        (pIVar6->fields).__1__state = 0;
        __this_00 = pIVar6;
label_03063ce3:
        (__this_00->fields).ease = (pIVar6->fields).__3__ease;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063cf4;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).ease);
        (__this_00->fields).nodes = (pIVar6->fields).__3__nodes;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063d05;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).nodes);
        (__this_00->fields).toVector3 = (pIVar6->fields).__3__toVector3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063d16;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).toVector3);
        (__this_00->fields).maxStep = (pIVar6->fields).__3__maxStep;
        (__this_00->fields).steps = (pIVar6->fields).__3__steps;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063d2e;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).steps);
        return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
      }
    }
    pIVar4 = method->klass->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063cb8;
      pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063cc0;
    __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_runtime_helper_023052d0(pIVar4);
    lVar5 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063ccd;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewBezier_d__16_T__o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063cdb;
    iVar3 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar3;
    if (__this_00 != (Interpolate__NewBezier_d__16_T__o *)0x0) goto label_03063ce3;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063d3b;
    il2cpp_runtime_helper_022b2c90();
    method = *(MethodInfo_2F63C70 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x38);
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar6;
  } while( true );
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F647A0* method);
// 0x30647a0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F647A0 *method)

{
  uint uVar1;
  uint uVar2;
  int32_t iVar3;
  Il2CppClass *pIVar4;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  undefined8 unaff_RBX;
  ulong unaff_RBP;
  long lVar5;
  Interpolate__NewBezier_d__16_T__o *pIVar6;
  Interpolate__NewBezier_d__16_T__o *unaff_R14;
  
  do {
    pIVar6 = __this;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Interpolate__NewBezier_d__16_T__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    if ((pIVar6->fields).__1__state == -2) {
      uVar1 = (pIVar6->fields).__l__initialThreadId;
      unaff_RBP = (ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30647bb;
      uVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (uVar1 == uVar2) {
        (pIVar6->fields).__1__state = 0;
        __this_00 = pIVar6;
label_03064813:
        (__this_00->fields).ease = (pIVar6->fields).__3__ease;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3064824;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).ease);
        (__this_00->fields).nodes = (pIVar6->fields).__3__nodes;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3064835;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).nodes);
        (__this_00->fields).toVector3 = (pIVar6->fields).__3__toVector3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3064846;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).toVector3);
        (__this_00->fields).maxStep = (pIVar6->fields).__3__maxStep;
        (__this_00->fields).steps = (pIVar6->fields).__3__steps;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306485e;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).steps);
        return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
      }
    }
    pIVar4 = method->klass->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30647e8;
      pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30647f0;
    __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_runtime_helper_023052d0(pIVar4);
    lVar5 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30647fd;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewBezier_d__16_T__o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306480b;
    iVar3 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar3;
    if (__this_00 != (Interpolate__NewBezier_d__16_T__o *)0x0) goto label_03064813;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306486b;
    il2cpp_runtime_helper_022b2c90();
    method = *(MethodInfo_2F647A0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x38);
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar6;
  } while( true );
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F65170* method);
// 0x3065170

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F65170 *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppClass *pIVar3;
  Interpolate__NewBezier_d__16_T__o *pIVar4;
  System_Collections_Generic_IEnumerator_Vector3__o *pSVar5;
  long lVar6;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      pIVar4 = __this;
      goto label_030651df;
    }
  }
  pIVar3 = method->klass->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pIVar4 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_runtime_helper_023052d0(pIVar3);
  lVar6 = 0;
  (*method->klass->rgctx_data->_6_Interpolate__NewBezier_d__16_T___ctor->methodPointer)(pIVar4);
  if (pIVar4 == (Interpolate__NewBezier_d__16_T__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar5 = (System_Collections_Generic_IEnumerator_Vector3__o *)
             (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x38))();
    return pSVar5;
  }
label_030651df:
  (pIVar4->fields).ease = (__this->fields).__3__ease;
  il2cpp_runtime_helper_022b4080(&(pIVar4->fields).ease);
  (pIVar4->fields).nodes = (__this->fields).__3__nodes;
  il2cpp_runtime_helper_022b4080(&(pIVar4->fields).nodes);
  (pIVar4->fields).toVector3 = (__this->fields).__3__toVector3;
  il2cpp_runtime_helper_022b4080(&(pIVar4->fields).toVector3);
  (pIVar4->fields).maxStep = (__this->fields).__3__maxStep;
  (pIVar4->fields).steps = (__this->fields).__3__steps;
  il2cpp_runtime_helper_022b4080(&(pIVar4->fields).steps);
  return (System_Collections_Generic_IEnumerator_Vector3__o *)pIVar4;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewBezier_d__16_object___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F63D40* method);
// 0x3063d40

System_Collections_IEnumerator_o *
Interpolate__NewBezier_d__16_object___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F63D40 *method)

{
  uint uVar1;
  MethodInfo *pMVar2;
  uint uVar3;
  int32_t iVar4;
  Il2CppClass *pIVar5;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  undefined8 unaff_RBX;
  ulong unaff_RBP;
  Interpolate__NewBezier_d__16_T__o *pIVar6;
  Interpolate__NewBezier_d__16_T__o *unaff_R14;
  
  do {
    pIVar6 = __this;
    pMVar2 = method->klass->rgctx_data->
             _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
    ;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Interpolate__NewBezier_d__16_T__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    if ((pIVar6->fields).__1__state == -2) {
      uVar1 = (pIVar6->fields).__l__initialThreadId;
      unaff_RBP = (ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063c8b;
      uVar3 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (uVar1 == uVar3) {
        (pIVar6->fields).__1__state = 0;
        __this_00 = pIVar6;
label_03063ce3:
        (__this_00->fields).ease = (pIVar6->fields).__3__ease;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063cf4;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).ease);
        (__this_00->fields).nodes = (pIVar6->fields).__3__nodes;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063d05;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).nodes);
        (__this_00->fields).toVector3 = (pIVar6->fields).__3__toVector3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063d16;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).toVector3);
        (__this_00->fields).maxStep = (pIVar6->fields).__3__maxStep;
        (__this_00->fields).steps = (pIVar6->fields).__3__steps;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063d2e;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).steps);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    pIVar5 = pMVar2->klass->rgctx_data->klass;
    if (((pIVar5->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063cb8;
      pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063cc0;
    __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_runtime_helper_023052d0(pIVar5);
    method = (MethodInfo_2F63D40 *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063ccd;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewBezier_d__16_T__o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063cdb;
    iVar4 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar4;
    if (__this_00 != (Interpolate__NewBezier_d__16_T__o *)0x0) goto label_03063ce3;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3063d3b;
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar6;
  } while( true );
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F64870* method);
// 0x3064870

System_Collections_IEnumerator_o *
Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F64870 *method)

{
  uint uVar1;
  MethodInfo *pMVar2;
  uint uVar3;
  int32_t iVar4;
  Il2CppClass *pIVar5;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  undefined8 unaff_RBX;
  ulong unaff_RBP;
  Interpolate__NewBezier_d__16_T__o *pIVar6;
  Interpolate__NewBezier_d__16_T__o *unaff_R14;
  
  do {
    pIVar6 = __this;
    pMVar2 = method->klass->rgctx_data->
             _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
    ;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Interpolate__NewBezier_d__16_T__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    if ((pIVar6->fields).__1__state == -2) {
      uVar1 = (pIVar6->fields).__l__initialThreadId;
      unaff_RBP = (ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30647bb;
      uVar3 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (uVar1 == uVar3) {
        (pIVar6->fields).__1__state = 0;
        __this_00 = pIVar6;
label_03064813:
        (__this_00->fields).ease = (pIVar6->fields).__3__ease;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3064824;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).ease);
        (__this_00->fields).nodes = (pIVar6->fields).__3__nodes;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3064835;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).nodes);
        (__this_00->fields).toVector3 = (pIVar6->fields).__3__toVector3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3064846;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).toVector3);
        (__this_00->fields).maxStep = (pIVar6->fields).__3__maxStep;
        (__this_00->fields).steps = (pIVar6->fields).__3__steps;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306485e;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).steps);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    pIVar5 = pMVar2->klass->rgctx_data->klass;
    if (((pIVar5->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30647e8;
      pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30647f0;
    __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_runtime_helper_023052d0(pIVar5);
    method = (MethodInfo_2F64870 *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30647fd;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewBezier_d__16_T__o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306480b;
    iVar4 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar4;
    if (__this_00 != (Interpolate__NewBezier_d__16_T__o *)0x0) goto label_03064813;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306486b;
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar6;
  } while( true );
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_2F65240* method);
// 0x3065240

System_Collections_IEnumerator_o *
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_2F65240 *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = (System_Collections_IEnumerator_o *)
           (*method->klass->rgctx_data->
             _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
             ->methodPointer)();
  return pSVar1;
}


// Interpolate.<NewCatmullRom>d__20<object>$$.ctor
// il2cpp: void Interpolate__NewCatmullRom_d__20_object____ctor (Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, const MethodInfo_2F65260* method);
// 0x3065260

void Interpolate__NewCatmullRom_d__20_object____ctor
               (Interpolate__NewCatmullRom_d__20_T__o *__this,int32_t __1__state,MethodInfo_2F65260 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$.ctor
// il2cpp: void Interpolate__NewCatmullRom_d__20_Vector3____ctor (Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, const MethodInfo_2F65BB0* method);
// 0x3065bb0

void Interpolate__NewCatmullRom_d__20_Vector3____ctor
               (Interpolate__NewCatmullRom_d__20_T__o *__this,int32_t __1__state,MethodInfo_2F65BB0 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType____ctor (Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, const MethodInfo_30A3860* method);
// 0x31a3860

void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType____ctor
               (Interpolate__NewCatmullRom_d__20_T__o *__this,int32_t __1__state,MethodInfo_30A3860 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCatmullRom_d__20_object___System_IDisposable_Dispose (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F65290* method);
// 0x3065290

void Interpolate__NewCatmullRom_d__20_object___System_IDisposable_Dispose
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F65290 *method)

{
  return;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCatmullRom_d__20_Vector3___System_IDisposable_Dispose (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F65BE0* method);
// 0x3065be0

void Interpolate__NewCatmullRom_d__20_Vector3___System_IDisposable_Dispose
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F65BE0 *method)

{
  return;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_IDisposable_Dispose (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_30A3890* method);
// 0x31a3890

void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_IDisposable_Dispose
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_30A3890 *method)

{
  return;
}


// Interpolate.<NewCatmullRom>d__20<object>$$MoveNext
// il2cpp: bool Interpolate__NewCatmullRom_d__20_object___MoveNext (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F652A0* method);
// 0x30652a0

bool_conflict
Interpolate__NewCatmullRom_d__20_object___MoveNext
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F652A0 *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_Collections_IList_o *pSVar8;
  System_Collections_IList_c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  Interpolate_ToVector3_T__o *pIVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  Il2CppMethodPointer *ppIVar15;
  undefined8 extraout_RAX;
  Il2CppClass *pIVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  ulong extraout_RDX;
  char unaff_BL;
  MethodInfo *pMVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  float in_XMM1_Da;
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector3_o UVar29;
  UnityEngine_Vector3_o end;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o next;
  MethodInfo *pMVar21;
  
  pMVar22 = (MethodInfo *)method;
  if (g_data_057a84c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection);
    il2cpp_runtime_helper_023445d0();
    g_data_057a84c5 = '\x01';
  }
  iVar14 = (__this->fields).__1__state;
  if (iVar14 == 2) {
    (__this->fields).__1__state = -1;
    uVar19 = (__this->fields)._stepCount_5__8 + 1;
    pMVar22 = (MethodInfo *)(ulong)uVar19;
    (__this->fields)._stepCount_5__8 = uVar19;
    if ((__this->fields)._next_5__7 < (int)uVar19) goto label_03065a04;
    goto label_030653fb;
  }
  if (iVar14 == 1) {
    (__this->fields).__1__state = -1;
    pSVar8 = (__this->fields).nodes;
    if (pSVar8 != (System_Collections_IList_o *)0x0) {
      pSVar9 = pSVar8->klass;
      uVar2._0_1_ = (pSVar9->_2).rank;
      uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar24 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_ICollection) {
            ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar24) + 1].methodPtr;
            goto label_030657f0;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar24);
      }
      ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_ICollection,1);
label_030657f0:
      iVar14 = (**ppIVar15)(pSVar8,(MethodInfo *)ppIVar15[1]);
      (__this->fields).__3__slices = iVar14 + -1;
      (__this->fields)._last_5__2 = 0;
      uVar20 = 0;
      unaff_BL = (char)(__this->fields).loop;
      uVar19 = (__this->fields).__3__slices;
      goto joined_r0x03065818;
    }
label_030659c9:
    il2cpp_runtime_helper_022b2c90();
    uVar20 = extraout_RDX;
label_030659ce:
    uVar19 = (int)uVar20 + 1;
    pMVar21 = (MethodInfo *)(ulong)uVar19;
    (__this->fields)._start_5__5 = uVar19;
    if (uVar19 == (uint)pMVar22) goto label_030659bd;
label_030659dd:
    uVar20 = (ulong)((int)pMVar21 + 1);
    do {
      (__this->fields)._end_5__6 = (int32_t)uVar20;
      iVar14 = (__this->fields).__3__loop + 1;
      (__this->fields)._next_5__7 = iVar14;
      (__this->fields)._stepCount_5__8 = 1;
      pMVar22 = (MethodInfo *)0x1;
      if (0 < iVar14) goto label_030653fb;
label_03065a04:
      uVar19 = (__this->fields)._last_5__2 + 1;
      uVar20 = (ulong)uVar19;
      (__this->fields)._last_5__2 = uVar19;
      unaff_BL = (char)(__this->fields).loop;
      uVar19 = (__this->fields).__3__slices;
joined_r0x03065818:
      pMVar22 = (MethodInfo *)(ulong)uVar19;
      iVar14 = (int)uVar20;
      uVar23 = uVar19;
      if (unaff_BL == '\0') {
        if ((int)uVar19 <= iVar14) {
          return 0;
        }
label_03065976:
        if (iVar14 == 0) {
          if (unaff_BL == '\0') {
            uVar23 = 0;
          }
          uVar20 = 0;
        }
        else {
          uVar23 = iVar14 - 1;
        }
      }
      else {
        if (iVar14 <= (int)uVar19) goto label_03065976;
        (__this->fields)._last_5__2 = 0;
        uVar20 = 0;
      }
      if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_030659c9;
      (__this->fields)._current_5__3 = uVar23;
      (__this->fields)._previous_5__4 = (uint)uVar20;
      if ((uint)uVar20 != uVar19) goto label_030659ce;
      pMVar21 = (MethodInfo *)0x0;
      if (unaff_BL == '\0') {
        pMVar21 = pMVar22;
      }
      if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_030659c9;
      (__this->fields)._start_5__5 = (uint)pMVar21;
      if ((uint)pMVar21 != uVar19) goto label_030659dd;
label_030659bd:
      uVar20 = 0;
      if (unaff_BL == '\0') {
        uVar20 = (ulong)pMVar22 & 0xffffffff;
      }
      if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_030659c9;
    } while( true );
  }
  if (iVar14 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  pSVar8 = (__this->fields).nodes;
  if (pSVar8 == (System_Collections_IList_o *)0x0) goto label_030659c9;
  pSVar9 = pSVar8->klass;
  uVar1._0_1_ = (pSVar9->_2).rank;
  uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar10 = (pSVar9->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_ICollection) {
        ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar24) + 1].methodPtr;
        goto label_03065843;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar24);
  }
  ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_ICollection,1);
label_03065843:
  pMVar22 = (MethodInfo *)ppIVar15[1];
  iVar14 = (**ppIVar15)();
  if (iVar14 < 2) {
    return 0;
  }
  pSVar8 = (__this->fields).nodes;
  if (pSVar8 == (System_Collections_IList_o *)0x0) goto label_030659c9;
  plVar25 = (long *)(__this->fields).toVector3;
  pSVar9 = pSVar8->klass;
  uVar7._0_1_ = (pSVar9->_2).rank;
  uVar7._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar7 != 0) {
    pIVar10 = (pSVar9->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IList) {
        ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
        goto label_030658c8;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar7 << 4 != lVar24);
  }
  ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_IList,0);
label_030658c8:
  pMVar22 = (MethodInfo *)0x0;
  lVar24 = (**ppIVar15)(pSVar8,0,(MethodInfo *)ppIVar15[1]);
  if ((Interpolate_ToVector3_T__o *)plVar25 == (Interpolate_ToVector3_T__o *)0x0) goto label_030659c9;
  pIVar16 = method->klass->rgctx_data->_2_T;
  if (((pIVar16->_2).field_0x6d & 1) == 0) {
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar16);
  }
  if (lVar24 == 0) goto label_0306592a;
  lVar17 = il2cpp_runtime_helper_023051f0(lVar24,pIVar16);
  if (lVar17 == 0) goto label_0306591f;
label_0306592c:
  uVar18 = (*(code *)(((Interpolate_ToVector3_T__o *)plVar25)->fields).invoke_impl)
                     ((((Interpolate_ToVector3_T__o *)plVar25)->fields).method_code,lVar17,
                      (((Interpolate_ToVector3_T__o *)plVar25)->fields).method);
  (__this->fields).__2__current.fields.x = (float)extraout_XMM0_Da;
  (__this->fields).__2__current.fields.y = (float)extraout_XMM0_Db;
  (__this->fields).__2__current.fields.z = in_XMM1_Da;
  (__this->fields).__1__state = 1;
label_0306594e:
  return (bool_conflict)CONCAT71((int7)((ulong)uVar18 >> 8),1);
label_030653fb:
  pSVar8 = (__this->fields).nodes;
  if (pSVar8 == (System_Collections_IList_o *)0x0) goto label_030659c9;
  pIVar11 = (__this->fields).toVector3;
  uVar19 = (__this->fields)._current_5__3;
  plVar25 = &TypeInfo_IList;
  pSVar9 = pSVar8->klass;
  uVar3._0_1_ = (pSVar9->_2).rank;
  uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar10 = (pSVar9->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IList) {
        ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
        goto label_03065471;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar24);
  }
  ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_IList,0);
label_03065471:
  pMVar22 = (MethodInfo *)(ulong)uVar19;
  lVar24 = (**ppIVar15)(pSVar8,pMVar22,(MethodInfo *)ppIVar15[1]);
  if (pIVar11 == (Interpolate_ToVector3_T__o *)0x0) goto label_030659c9;
  pIVar16 = method->klass->rgctx_data->_2_T;
  if (((pIVar16->_2).field_0x6d & 1) == 0) {
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar16);
  }
  if (lVar24 == 0) {
    pMVar22 = (MethodInfo *)0x0;
    fVar26 = in_XMM1_Da;
  }
  else {
    pMVar22 = (MethodInfo *)il2cpp_runtime_helper_023051f0(lVar24,pIVar16);
    fVar26 = in_XMM1_Da;
    if (pMVar22 == (MethodInfo *)0x0) goto label_0306591f;
  }
  uVar18 = (*(code *)(pIVar11->fields).invoke_impl)
                     ((pIVar11->fields).method_code,pMVar22,(pIVar11->fields).method);
  pSVar8 = (__this->fields).nodes;
  in_XMM1_Da = fVar26;
  if (pSVar8 == (System_Collections_IList_o *)0x0) goto label_030659c9;
  pIVar11 = (__this->fields).toVector3;
  uVar19 = (__this->fields)._previous_5__4;
  pSVar9 = pSVar8->klass;
  uVar4._0_1_ = (pSVar9->_2).rank;
  uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar4 != 0) {
    pIVar10 = (pSVar9->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IList) {
        ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
        goto label_03065551;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar4 << 4 != lVar24);
  }
  ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_IList,0);
label_03065551:
  pMVar22 = (MethodInfo *)(ulong)uVar19;
  lVar24 = (**ppIVar15)(pSVar8,pMVar22,(MethodInfo *)ppIVar15[1]);
  if (pIVar11 == (Interpolate_ToVector3_T__o *)0x0) goto label_030659c9;
  pIVar16 = method->klass->rgctx_data->_2_T;
  if (((pIVar16->_2).field_0x6d & 1) == 0) {
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar16);
  }
  if (lVar24 == 0) {
    pMVar22 = (MethodInfo *)0x0;
    fVar27 = in_XMM1_Da;
  }
  else {
    pMVar22 = (MethodInfo *)il2cpp_runtime_helper_023051f0(lVar24,pIVar16);
    fVar27 = in_XMM1_Da;
    if (pMVar22 == (MethodInfo *)0x0) goto label_0306591f;
  }
  uVar13 = (*(code *)(pIVar11->fields).invoke_impl)
                     ((pIVar11->fields).method_code,pMVar22,(pIVar11->fields).method);
  pSVar8 = (__this->fields).nodes;
  in_XMM1_Da = fVar27;
  if (pSVar8 == (System_Collections_IList_o *)0x0) goto label_030659c9;
  pIVar11 = (__this->fields).toVector3;
  uVar19 = (__this->fields)._start_5__5;
  pSVar9 = pSVar8->klass;
  uVar5._0_1_ = (pSVar9->_2).rank;
  uVar5._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar5 != 0) {
    pIVar10 = (pSVar9->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IList) {
        ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
        goto label_03065631;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar5 << 4 != lVar24);
  }
  ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_IList,0);
label_03065631:
  pMVar22 = (MethodInfo *)(ulong)uVar19;
  lVar24 = (**ppIVar15)(pSVar8,pMVar22,(MethodInfo *)ppIVar15[1]);
  if (pIVar11 == (Interpolate_ToVector3_T__o *)0x0) goto label_030659c9;
  pIVar16 = method->klass->rgctx_data->_2_T;
  if (((pIVar16->_2).field_0x6d & 1) == 0) {
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar16);
  }
  if (lVar24 == 0) {
    pMVar22 = (MethodInfo *)0x0;
    fVar28 = in_XMM1_Da;
  }
  else {
    pMVar22 = (MethodInfo *)il2cpp_runtime_helper_023051f0(lVar24,pIVar16);
    fVar28 = in_XMM1_Da;
    if (pMVar22 == (MethodInfo *)0x0) goto label_0306591f;
  }
  uVar12 = (*(code *)(pIVar11->fields).invoke_impl)
                     ((pIVar11->fields).method_code,pMVar22,(pIVar11->fields).method);
  pSVar8 = (__this->fields).nodes;
  in_XMM1_Da = fVar28;
  if (pSVar8 == (System_Collections_IList_o *)0x0) goto label_030659c9;
  pIVar11 = (__this->fields).toVector3;
  uVar19 = (__this->fields)._end_5__6;
  pSVar9 = pSVar8->klass;
  uVar6._0_1_ = (pSVar9->_2).rank;
  uVar6._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar6 != 0) {
    pIVar10 = (pSVar9->_1).interfaceOffsets;
    lVar24 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IList) {
        ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar24)].methodPtr;
        goto label_03065711;
      }
      lVar24 = lVar24 + 0x10;
    } while ((ulong)uVar6 << 4 != lVar24);
  }
  ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_IList,0);
label_03065711:
  pMVar22 = (MethodInfo *)(ulong)uVar19;
  lVar24 = (**ppIVar15)(pSVar8,pMVar22,(MethodInfo *)ppIVar15[1]);
  if (pIVar11 != (Interpolate_ToVector3_T__o *)0x0) goto code_r0x03065725;
  goto label_030659c9;
code_r0x03065725:
  pIVar16 = method->klass->rgctx_data->_2_T;
  if (((pIVar16->_2).field_0x6d & 1) == 0) {
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar16);
  }
  if (lVar24 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = il2cpp_runtime_helper_023051f0(lVar24,pIVar16);
    if (lVar17 == 0) {
label_0306591f:
      il2cpp_runtime_helper_022b2fd0(lVar24,pIVar16);
label_0306592a:
      lVar17 = 0;
      goto label_0306592c;
    }
  }
  next.fields._0_8_ =
       (*(code *)(pIVar11->fields).invoke_impl)((pIVar11->fields).method_code,lVar17,(pIVar11->fields).method)
  ;
  UVar29.fields.z = fVar26;
  UVar29.fields.x = (float)(int)uVar18;
  UVar29.fields.y = (float)(int)((ulong)uVar18 >> 0x20);
  end.fields.z = fVar28;
  end.fields.x = (float)(int)uVar12;
  end.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
  start.fields.z = fVar27;
  start.fields.x = (float)(int)uVar13;
  start.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
  next.fields.z = in_XMM1_Da;
  UVar29 = Interpolate__CatmullRom
                     (UVar29,start,end,next,(float)(__this->fields)._stepCount_5__8,
                      (float)(__this->fields)._next_5__7,(MethodInfo *)0x0);
  (__this->fields).__2__current.fields.x = (float)(int)UVar29.fields._0_8_;
  (__this->fields).__2__current.fields.y = (float)(int)((ulong)UVar29.fields._0_8_ >> 0x20);
  (__this->fields).__2__current.fields.z = UVar29.fields.z;
  (__this->fields).__1__state = 2;
  uVar18 = extraout_RAX;
  goto label_0306594e;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$MoveNext
// il2cpp: bool Interpolate__NewCatmullRom_d__20_Vector3___MoveNext (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F65BF0* method);
// 0x3065bf0

bool_conflict
Interpolate__NewCatmullRom_d__20_Vector3___MoveNext
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F65BF0 *method)

{
  byte bVar1;
  ushort uVar2;
  int32_t iVar3;
  void *pvVar4;
  System_Collections_IList_o *pSVar5;
  System_Collections_IList_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Interpolate_ToVector3_T__o *pIVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  Il2CppMethodPointer *ppIVar14;
  undefined8 extraout_RAX;
  ulong uVar15;
  Il2CppClass *pIVar16;
  Il2CppClass *pIVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  Il2CppClass *pIVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  UnityEngine_Vector3_o UVar29;
  UnityEngine_Vector3_o end;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o next;
  
  plVar21 = (long *)__this;
  if (g_data_057a84c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection);
    plVar21 = &TypeInfo_IList;
    il2cpp_runtime_helper_023445d0();
    g_data_057a84c7 = '\x01';
  }
  iVar12 = (__this->fields).__1__state;
  if (iVar12 == 2) {
    (__this->fields).__1__state = -1;
    iVar12 = (__this->fields)._stepCount_5__8 + 1;
    (__this->fields)._stepCount_5__8 = iVar12;
    if ((__this->fields)._next_5__7 < iVar12) goto label_0306633e;
    goto label_03065d37;
  }
  if (iVar12 == 1) {
    (__this->fields).__1__state = -1;
    pSVar5 = (__this->fields).nodes;
    if (pSVar5 == (System_Collections_IList_o *)0x0) goto label_03066308;
    pSVar6 = pSVar5->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar22) == TypeInfo_ICollection) {
          ppIVar14 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar22) + 1].methodPtr;
          goto label_03066133;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar22);
    }
    ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_ICollection,1);
label_03066133:
    iVar12 = (**ppIVar14)(pSVar5);
    (__this->fields).__3__slices = iVar12 + -1;
    (__this->fields)._last_5__2 = 0;
    uVar20 = 0;
    bVar1 = (byte)(__this->fields).loop;
    uVar15 = CONCAT71(0,bVar1);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar15;
    uVar19 = (__this->fields).__3__slices;
    goto joined_r0x03066157;
  }
  if (iVar12 == 0) {
    (__this->fields).__1__state = -1;
    pIVar16 = (Il2CppClass *)(__this->fields).nodes;
    if (pIVar16 == (Il2CppClass *)0x0) goto label_03066308;
    pvVar4 = (pIVar16->_1).image;
    if ((ulong)*(ushort *)((long)pvVar4 + 0x12e) != 0) {
      lVar22 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar4 + 0xb0) + lVar22) == TypeInfo_ICollection) {
          puVar13 = (undefined8 *)
                    ((long)pvVar4 +
                    (long)(*(int *)(*(long *)((long)pvVar4 + 0xb0) + 8 + lVar22) + 1) * 0x10 + 0x138);
          goto label_03066182;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar4 + 0x12e) << 4 != lVar22);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar16,TypeInfo_ICollection,1);
label_03066182:
    iVar12 = (*(code *)*puVar13)();
    if (1 < iVar12) {
      pIVar23 = (Il2CppClass *)(__this->fields).nodes;
      plVar21 = (long *)pIVar16;
      if (pIVar23 == (Il2CppClass *)0x0) goto label_03066308;
      pIVar8 = (__this->fields).toVector3;
      pvVar4 = (pIVar23->_1).image;
      if ((ulong)*(ushort *)((long)pvVar4 + 0x12e) != 0) {
        lVar22 = 0;
        do {
          if (*(long *)(*(long *)((long)pvVar4 + 0xb0) + lVar22) == TypeInfo_IList) {
            puVar13 = (undefined8 *)
                      ((long)pvVar4 +
                      (long)*(int *)(*(long *)((long)pvVar4 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
            goto label_03066208;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar4 + 0x12e) << 4 != lVar22);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar23,TypeInfo_IList,0);
label_03066208:
      pIVar16 = (Il2CppClass *)(*(code *)*puVar13)(pIVar23,0,puVar13[1]);
      plVar21 = (long *)pIVar23;
      if (pIVar8 == (Interpolate_ToVector3_T__o *)0x0) goto label_03066308;
      pIVar17 = method->klass->rgctx_data->_2_T;
      if (((pIVar17->_2).field_0x6d & 1) == 0) {
        pIVar23 = pIVar17;
        pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      }
      plVar21 = (long *)pIVar23;
      if (pIVar16 == (Il2CppClass *)0x0) goto label_03066308;
      if (*(Il2CppClass **)((long)(pIVar16->_1).image + 0x40) == (pIVar17->_1).element_class) {
        puVar13 = (undefined8 *)il2cpp_runtime_helper_02305440(pIVar16);
        fVar24 = *(float *)(puVar13 + 1);
        uVar18 = (*(code *)(pIVar8->fields).invoke_impl)
                           ((int)*puVar13,(pIVar8->fields).method_code,(pIVar8->fields).method);
        (__this->fields).__2__current.fields.x = (float)extraout_XMM0_Da;
        (__this->fields).__2__current.fields.y = (float)extraout_XMM0_Db;
        (__this->fields).__2__current.fields.z = fVar24;
        (__this->fields).__1__state = 1;
label_03066286:
        return (bool_conflict)CONCAT71((int7)((ulong)uVar18 >> 8),1);
      }
label_03066297:
      auVar28 = il2cpp_runtime_helper_022b2fd0();
      plVar21 = (long *)pIVar16;
label_030662a2:
      uVar15 = auVar28._0_8_;
      iVar12 = (int)plVar21;
      if (auVar28._8_4_ <= iVar12) goto label_030662b8;
      (__this->fields)._last_5__2 = 0;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar15;
      if (__this != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_030662d7;
label_03066308:
      auVar28 = il2cpp_runtime_helper_022b2c90();
label_0306630d:
      cVar11 = auVar28[0];
      uVar19 = auVar28._8_4_ + 1;
      uVar15 = (ulong)uVar19;
      (__this->fields)._start_5__5 = uVar19;
      if (uVar19 == (uint)plVar21) goto label_030662fc;
      do {
        uVar15 = (ulong)((int)uVar15 + 1);
        while( true ) {
          (__this->fields)._end_5__6 = (int32_t)uVar15;
          iVar12 = (__this->fields).__3__loop + 1;
          (__this->fields)._next_5__7 = iVar12;
          (__this->fields)._stepCount_5__8 = 1;
          if (0 < iVar12) goto label_03065d37;
label_0306633e:
          uVar19 = (__this->fields)._last_5__2 + 1;
          uVar20 = (ulong)uVar19;
          (__this->fields)._last_5__2 = uVar19;
          bVar1 = (byte)(__this->fields).loop;
          uVar15 = CONCAT71(0,bVar1);
          auVar28._8_4_ = uVar19;
          auVar28._0_8_ = uVar15;
          auVar28._12_4_ = 0;
          uVar19 = (__this->fields).__3__slices;
joined_r0x03066157:
          plVar21 = (long *)(ulong)uVar19;
          if (bVar1 != 0) goto label_030662a2;
          auVar28._8_8_ = uVar20;
          auVar28._0_8_ = uVar15;
          if ((int)uVar19 <= (int)uVar20) {
            return 0;
          }
label_030662b8:
          uVar15 = auVar28._0_8_;
          if (auVar28._8_4_ == 0) {
            if (auVar28[0] == '\0') {
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar15;
              iVar12 = 0;
            }
            else {
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar15;
              iVar12 = (int)plVar21;
            }
          }
          else {
            iVar12 = auVar28._8_4_ + -1;
          }
          if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_03066308;
label_030662d7:
          cVar11 = auVar28[0];
          (__this->fields)._current_5__3 = iVar12;
          (__this->fields)._previous_5__4 = auVar28._8_4_;
          if (auVar28._8_4_ != (int)plVar21) goto label_0306630d;
          uVar15 = 0;
          if (cVar11 == '\0') {
            uVar15 = (ulong)plVar21 & 0xffffffff;
          }
          if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_03066308;
          (__this->fields)._start_5__5 = (int)uVar15;
          if ((int)uVar15 != (int)plVar21) break;
label_030662fc:
          uVar15 = 0;
          if (cVar11 == '\0') {
            uVar15 = (ulong)plVar21 & 0xffffffff;
          }
          if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_03066308;
        }
      } while( true );
    }
  }
  return 0;
label_03065d37:
  pIVar23 = (Il2CppClass *)(__this->fields).nodes;
  if (pIVar23 != (Il2CppClass *)0x0) {
    pIVar8 = (__this->fields).toVector3;
    iVar3 = (__this->fields)._current_5__3;
    pvVar4 = (pIVar23->_1).image;
    if ((ulong)*(ushort *)((long)pvVar4 + 0x12e) != 0) {
      lVar22 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar4 + 0xb0) + lVar22) == TypeInfo_IList) {
          puVar13 = (undefined8 *)
                    ((long)pvVar4 + (long)*(int *)(*(long *)((long)pvVar4 + 0xb0) + 8 + lVar22) * 0x10 + 0x138
                    );
          goto label_03065db1;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar4 + 0x12e) << 4 != lVar22);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar23,TypeInfo_IList,0);
label_03065db1:
    pIVar16 = (Il2CppClass *)(*(code *)*puVar13)(pIVar23,iVar3,puVar13[1]);
    plVar21 = (long *)pIVar23;
    if (pIVar8 != (Interpolate_ToVector3_T__o *)0x0) {
      pIVar17 = method->klass->rgctx_data->_2_T;
      if (((pIVar17->_2).field_0x6d & 1) == 0) {
        pIVar23 = pIVar17;
        pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      }
      plVar21 = (long *)pIVar23;
      if (pIVar16 != (Il2CppClass *)0x0) {
        if (*(Il2CppClass **)((long)(pIVar16->_1).image + 0x40) != (pIVar17->_1).element_class)
        goto label_03066297;
        puVar13 = (undefined8 *)il2cpp_runtime_helper_02305440(pIVar16);
        fVar24 = *(float *)(puVar13 + 1);
        plVar21 = (long *)(pIVar8->fields).method_code;
        uVar18 = (*(code *)(pIVar8->fields).invoke_impl)((int)*puVar13);
        pIVar23 = (Il2CppClass *)(__this->fields).nodes;
        if (pIVar23 != (Il2CppClass *)0x0) {
          pIVar8 = (__this->fields).toVector3;
          iVar3 = (__this->fields)._previous_5__4;
          pvVar4 = (pIVar23->_1).image;
          if ((ulong)*(ushort *)((long)pvVar4 + 0x12e) != 0) {
            lVar22 = 0;
            do {
              if (*(long *)(*(long *)((long)pvVar4 + 0xb0) + lVar22) == TypeInfo_IList) {
                puVar13 = (undefined8 *)
                          ((long)pvVar4 +
                          (long)*(int *)(*(long *)((long)pvVar4 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
                goto label_03065e91;
              }
              lVar22 = lVar22 + 0x10;
            } while ((ulong)*(ushort *)((long)pvVar4 + 0x12e) << 4 != lVar22);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar23,TypeInfo_IList,0);
label_03065e91:
          pIVar16 = (Il2CppClass *)(*(code *)*puVar13)(pIVar23,iVar3,puVar13[1]);
          plVar21 = (long *)pIVar23;
          if (pIVar8 != (Interpolate_ToVector3_T__o *)0x0) {
            pIVar17 = method->klass->rgctx_data->_2_T;
            if (((pIVar17->_2).field_0x6d & 1) == 0) {
              pIVar23 = pIVar17;
              pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
            }
            plVar21 = (long *)pIVar23;
            if (pIVar16 != (Il2CppClass *)0x0) {
              if (*(Il2CppClass **)((long)(pIVar16->_1).image + 0x40) != (pIVar17->_1).element_class)
              goto label_03066297;
              puVar13 = (undefined8 *)il2cpp_runtime_helper_02305440(pIVar16);
              fVar25 = *(float *)(puVar13 + 1);
              plVar21 = (long *)(pIVar8->fields).method_code;
              uVar10 = (*(code *)(pIVar8->fields).invoke_impl)((int)*puVar13);
              pIVar23 = (Il2CppClass *)(__this->fields).nodes;
              if (pIVar23 != (Il2CppClass *)0x0) {
                pIVar8 = (__this->fields).toVector3;
                iVar3 = (__this->fields)._start_5__5;
                pvVar4 = (pIVar23->_1).image;
                if ((ulong)*(ushort *)((long)pvVar4 + 0x12e) != 0) {
                  lVar22 = 0;
                  do {
                    if (*(long *)(*(long *)((long)pvVar4 + 0xb0) + lVar22) == TypeInfo_IList) {
                      puVar13 = (undefined8 *)
                                ((long)pvVar4 +
                                (long)*(int *)(*(long *)((long)pvVar4 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
                      goto label_03065f71;
                    }
                    lVar22 = lVar22 + 0x10;
                  } while ((ulong)*(ushort *)((long)pvVar4 + 0x12e) << 4 != lVar22);
                }
                puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar23,TypeInfo_IList,0);
label_03065f71:
                pIVar16 = (Il2CppClass *)(*(code *)*puVar13)(pIVar23,iVar3,puVar13[1]);
                plVar21 = (long *)pIVar23;
                if (pIVar8 != (Interpolate_ToVector3_T__o *)0x0) {
                  pIVar17 = method->klass->rgctx_data->_2_T;
                  if (((pIVar17->_2).field_0x6d & 1) == 0) {
                    pIVar23 = pIVar17;
                    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
                  }
                  plVar21 = (long *)pIVar23;
                  if (pIVar16 != (Il2CppClass *)0x0) {
                    if (*(Il2CppClass **)((long)(pIVar16->_1).image + 0x40) != (pIVar17->_1).element_class)
                    goto label_03066297;
                    puVar13 = (undefined8 *)il2cpp_runtime_helper_02305440(pIVar16);
                    fVar26 = *(float *)(puVar13 + 1);
                    plVar21 = (long *)(pIVar8->fields).method_code;
                    uVar9 = (*(code *)(pIVar8->fields).invoke_impl)((int)*puVar13);
                    pIVar23 = (Il2CppClass *)(__this->fields).nodes;
                    if (pIVar23 != (Il2CppClass *)0x0) {
                      pIVar8 = (__this->fields).toVector3;
                      iVar3 = (__this->fields)._end_5__6;
                      pvVar4 = (pIVar23->_1).image;
                      if ((ulong)*(ushort *)((long)pvVar4 + 0x12e) != 0) {
                        lVar22 = 0;
                        do {
                          if (*(long *)(*(long *)((long)pvVar4 + 0xb0) + lVar22) == TypeInfo_IList) {
                            puVar13 = (undefined8 *)
                                      ((long)pvVar4 +
                                      (long)*(int *)(*(long *)((long)pvVar4 + 0xb0) + 8 + lVar22) * 0x10 +
                                      0x138);
                            goto label_03066051;
                          }
                          lVar22 = lVar22 + 0x10;
                        } while ((ulong)*(ushort *)((long)pvVar4 + 0x12e) << 4 != lVar22);
                      }
                      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar23,TypeInfo_IList,0);
label_03066051:
                      pIVar16 = (Il2CppClass *)(*(code *)*puVar13)(pIVar23,iVar3,puVar13[1]);
                      plVar21 = (long *)pIVar23;
                      if (pIVar8 != (Interpolate_ToVector3_T__o *)0x0) {
                        pIVar17 = method->klass->rgctx_data->_2_T;
                        if (((pIVar17->_2).field_0x6d & 1) == 0) {
                          pIVar23 = pIVar17;
                          pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
                        }
                        plVar21 = (long *)pIVar23;
                        if (pIVar16 != (Il2CppClass *)0x0) {
                          if (*(Il2CppClass **)((long)(pIVar16->_1).image + 0x40) !=
                              (pIVar17->_1).element_class) goto label_03066297;
                          puVar13 = (undefined8 *)il2cpp_runtime_helper_02305440(pIVar16);
                          fVar27 = *(float *)(puVar13 + 1);
                          next.fields._0_8_ =
                               (*(code *)(pIVar8->fields).invoke_impl)
                                         ((int)*puVar13,(pIVar8->fields).method_code,(pIVar8->fields).method);
                          UVar29.fields.z = fVar24;
                          UVar29.fields.x = (float)(int)uVar18;
                          UVar29.fields.y = (float)(int)((ulong)uVar18 >> 0x20);
                          end.fields.z = fVar26;
                          end.fields.x = (float)(int)uVar9;
                          end.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
                          start.fields.z = fVar25;
                          start.fields.x = (float)(int)uVar10;
                          start.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
                          next.fields.z = fVar27;
                          UVar29 = Interpolate__CatmullRom
                                             (UVar29,start,end,next,(float)(__this->fields)._stepCount_5__8,
                                              (float)(__this->fields)._next_5__7,(MethodInfo *)0x0);
                          (__this->fields).__2__current.fields.x = (float)(int)UVar29.fields._0_8_;
                          (__this->fields).__2__current.fields.y =
                               (float)(int)((ulong)UVar29.fields._0_8_ >> 0x20);
                          (__this->fields).__2__current.fields.z = UVar29.fields.z;
                          (__this->fields).__1__state = 2;
                          uVar18 = extraout_RAX;
                          goto label_03066286;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto label_03066308;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$MoveNext
// il2cpp: bool Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___MoveNext (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_30A38A0* method);
// 0x31a38a0

bool_conflict
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___MoveNext
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_30A38A0 *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  System_Collections_IList_o *pSVar9;
  System_Collections_IList_c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  MethodInfo *pMVar12;
  Il2CppMethodPointer pIVar13;
  Interpolate_ToVector3_T__o *pIVar14;
  Interpolate__NewCatmullRom_d__20_T__RGCTXs *pIVar15;
  InvokerMethod pIVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  MethodInfo_30A38A0 *pMVar22;
  int iVar23;
  bool_conflict bVar24;
  ulong uVar25;
  VirtualInvokeData *pVVar26;
  long extraout_RAX;
  undefined8 uVar27;
  Il2CppClass *pIVar28;
  undefined8 *puVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  char cVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  UnityEngine_Vector3_o UVar38;
  UnityEngine_Vector3_o end;
  UnityEngine_Vector3_o start;
  undefined8 uStack_c0;
  float afStack_b8 [2];
  undefined8 uStack_b0;
  long local_a8 [3];
  long local_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  float local_5c;
  float local_58;
  float local_54;
  MethodInfo_30A38A0 *local_50;
  long local_48;
  float local_40;
  undefined8 *local_38;
  UnityEngine_Vector3_o previous;
  
  if (g_data_057a884d == '\0') {
    uStack_b0 = 0x31a38cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection);
    uStack_b0 = 0x31a38d8;
    il2cpp_runtime_helper_023445d0();
    g_data_057a884d = '\x01';
  }
  uVar25 = (ulong)(method->klass->rgctx_data->_2_T->_2).actualSize + 0xf & 0xfffffffffffffff0;
  lVar37 = (long)local_a8 - uVar25;
  lVar32 = lVar37 - uVar25;
  lVar30 = lVar32 - uVar25;
  lVar36 = lVar30 - uVar25;
  iVar23 = (__this->fields).__1__state;
  local_50 = method;
  if (iVar23 == 2) {
    (__this->fields).__1__state = -1;
    iVar23 = (__this->fields)._stepCount_5__8 + 1;
    (__this->fields)._stepCount_5__8 = iVar23;
    local_88 = lVar30;
    local_78 = lVar32;
    if ((__this->fields)._next_5__7 < iVar23) goto label_031a40f8;
label_031a39d3:
    pSVar9 = (__this->fields).nodes;
    local_90 = lVar36;
    if (pSVar9 == (System_Collections_IList_o *)0x0) {
label_031a4125:
      *(undefined8 *)(lVar36 + -8) = 0x31a412a;
      bVar24 = il2cpp_runtime_helper_022b2c90();
      return bVar24;
    }
    pIVar14 = (__this->fields).toVector3;
    uVar8 = (__this->fields)._current_5__3;
    pSVar10 = pSVar9->klass;
    uVar2._0_1_ = (pSVar10->_2).rank;
    uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar30 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar30) == TypeInfo_IList) {
          pVVar26 = pSVar10->vtable + *(int *)((long)&pIVar11->offset + lVar30);
          goto label_031a3acb;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar30);
    }
    *(undefined8 *)(lVar36 + -8) = 0x31a3a3d;
    pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IList,0);
label_031a3acb:
    pMVar12 = pVVar26->method;
    pIVar13 = pVVar26->methodPtr;
    *(undefined8 *)(lVar36 + -8) = 0x31a3ad7;
    uVar27 = (*pIVar13)(pSVar9,(ulong)uVar8,pMVar12);
    pIVar28 = local_50->klass->rgctx_data->_2_T;
    if (((pIVar28->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)(lVar36 + -8) = 0x31a3afe;
      pIVar28 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar28);
    }
    *(undefined8 *)(lVar36 + -8) = 0x31a3b0c;
    puVar29 = (undefined8 *)il2cpp_runtime_helper_022b2b80(uVar27,pIVar28,lVar37);
    if (pIVar14 == (Interpolate_ToVector3_T__o *)0x0) goto label_031a4125;
    pIVar15 = local_50->klass->rgctx_data;
    pMVar12 = pIVar15->_3_Interpolate_ToVector3_T__Invoke;
    pIVar13 = pMVar12->methodPointer;
    if (-1 < (int)(pIVar15->_2_T->_1).byval_arg.bits) {
      puVar29 = (undefined8 *)*puVar29;
    }
    pIVar16 = pMVar12->invoker_method;
    local_38 = puVar29;
    *(undefined8 *)(lVar36 + -8) = 0x31a3b4a;
    (*pIVar16)(pIVar13,pMVar12,pIVar14,&local_38,&local_48);
    pSVar9 = (__this->fields).nodes;
    if (pSVar9 == (System_Collections_IList_o *)0x0) goto label_031a4125;
    pIVar14 = (__this->fields).toVector3;
    uVar8 = (__this->fields)._previous_5__4;
    pSVar10 = pSVar9->klass;
    uVar4._0_1_ = (pSVar10->_2).rank;
    uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
    local_a8[0] = local_48;
    local_a8[1] = 0;
    local_5c = local_40;
    if ((ulong)uVar4 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar30 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar30) == TypeInfo_IList) {
          pVVar26 = pSVar10->vtable + *(int *)((long)&pIVar11->offset + lVar30);
          goto label_031a3bd1;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar30);
    }
    *(undefined8 *)(lVar36 + -8) = 0x31a3bb9;
    pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IList,0);
label_031a3bd1:
    pMVar12 = pVVar26->method;
    pIVar13 = pVVar26->methodPtr;
    *(undefined8 *)(lVar36 + -8) = 0x31a3bdd;
    uVar27 = (*pIVar13)(pSVar9,(ulong)uVar8,pMVar12);
    pMVar22 = local_50;
    pIVar28 = local_50->klass->rgctx_data->_2_T;
    if (((pIVar28->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)(lVar36 + -8) = 0x31a3c04;
      pIVar28 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar28);
    }
    lVar30 = local_78;
    *(undefined8 *)(lVar36 + -8) = 0x31a3c13;
    puVar29 = (undefined8 *)il2cpp_runtime_helper_022b2b80(uVar27,pIVar28,lVar30);
    if (pIVar14 == (Interpolate_ToVector3_T__o *)0x0) goto label_031a4125;
    pIVar15 = pMVar22->klass->rgctx_data;
    pMVar12 = pIVar15->_3_Interpolate_ToVector3_T__Invoke;
    pIVar13 = pMVar12->methodPointer;
    if (-1 < (int)(pIVar15->_2_T->_1).byval_arg.bits) {
      puVar29 = (undefined8 *)*puVar29;
    }
    pIVar16 = pMVar12->invoker_method;
    local_38 = puVar29;
    *(undefined8 *)(lVar36 + -8) = 0x31a3c4d;
    (*pIVar16)(pIVar13,pMVar12,pIVar14,&local_38,&local_48);
    pSVar9 = (__this->fields).nodes;
    if (pSVar9 == (System_Collections_IList_o *)0x0) goto label_031a4125;
    pIVar14 = (__this->fields).toVector3;
    uVar8 = (__this->fields)._start_5__5;
    pSVar10 = pSVar9->klass;
    uVar5._0_1_ = (pSVar10->_2).rank;
    uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
    local_78 = local_48;
    uStack_70 = 0;
    local_58 = local_40;
    if ((ulong)uVar5 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar30 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar30) == TypeInfo_IList) {
          pVVar26 = pSVar10->vtable + *(int *)((long)&pIVar11->offset + lVar30);
          goto label_031a3cd1;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar30);
    }
    *(undefined8 *)(lVar36 + -8) = 0x31a3cb9;
    pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IList,0);
label_031a3cd1:
    pMVar12 = pVVar26->method;
    pIVar13 = pVVar26->methodPtr;
    *(undefined8 *)(lVar36 + -8) = 0x31a3cdd;
    uVar27 = (*pIVar13)(pSVar9,(ulong)uVar8,pMVar12);
    pIVar28 = pMVar22->klass->rgctx_data->_2_T;
    if (((pIVar28->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)(lVar36 + -8) = 0x31a3d00;
      pIVar28 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar28);
    }
    lVar30 = local_88;
    *(undefined8 *)(lVar36 + -8) = 0x31a3d0f;
    puVar29 = (undefined8 *)il2cpp_runtime_helper_022b2b80(uVar27,pIVar28,lVar30);
    if (pIVar14 == (Interpolate_ToVector3_T__o *)0x0) goto label_031a4125;
    pIVar15 = pMVar22->klass->rgctx_data;
    pMVar12 = pIVar15->_3_Interpolate_ToVector3_T__Invoke;
    pIVar13 = pMVar12->methodPointer;
    if (-1 < (int)(pIVar15->_2_T->_1).byval_arg.bits) {
      puVar29 = (undefined8 *)*puVar29;
    }
    pIVar16 = pMVar12->invoker_method;
    local_38 = puVar29;
    *(undefined8 *)(lVar36 + -8) = 0x31a3d49;
    (*pIVar16)(pIVar13,pMVar12,pIVar14,&local_38,&local_48);
    pSVar9 = (__this->fields).nodes;
    if (pSVar9 == (System_Collections_IList_o *)0x0) goto label_031a4125;
    pIVar14 = (__this->fields).toVector3;
    uVar8 = (__this->fields)._end_5__6;
    pSVar10 = pSVar9->klass;
    uVar6._0_1_ = (pSVar10->_2).rank;
    uVar6._1_1_ = (pSVar10->_2).minimumAlignment;
    local_88 = local_48;
    uStack_80 = 0;
    local_54 = local_40;
    if ((ulong)uVar6 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar30 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar30) == TypeInfo_IList) {
          pVVar26 = pSVar10->vtable + *(int *)((long)&pIVar11->offset + lVar30);
          goto label_031a3dd1;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar30);
    }
    *(undefined8 *)(lVar36 + -8) = 0x31a3db9;
    pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IList,0);
label_031a3dd1:
    pMVar12 = pVVar26->method;
    pIVar13 = pVVar26->methodPtr;
    *(undefined8 *)(lVar36 + -8) = 0x31a3ddd;
    uVar27 = (*pIVar13)(pSVar9,(ulong)uVar8,pMVar12);
    pIVar28 = pMVar22->klass->rgctx_data->_2_T;
    if (((pIVar28->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)(lVar36 + -8) = 0x31a3e00;
      pIVar28 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar28);
    }
    lVar30 = local_90;
    *(undefined8 *)(lVar36 + -8) = 0x31a3e12;
    puVar29 = (undefined8 *)il2cpp_runtime_helper_022b2b80(uVar27,pIVar28,lVar30);
    if (pIVar14 == (Interpolate_ToVector3_T__o *)0x0) goto label_031a4125;
    pIVar15 = pMVar22->klass->rgctx_data;
    pMVar12 = pIVar15->_3_Interpolate_ToVector3_T__Invoke;
    pIVar13 = pMVar12->methodPointer;
    if (-1 < (int)(pIVar15->_2_T->_1).byval_arg.bits) {
      puVar29 = (undefined8 *)*puVar29;
    }
    pIVar16 = pMVar12->invoker_method;
    local_38 = puVar29;
    *(undefined8 *)(lVar36 + -8) = 0x31a3e4c;
    (*pIVar16)(pIVar13,pMVar12,pIVar14,&local_38,&local_48);
    iVar23 = (__this->fields)._stepCount_5__8;
    UVar38.fields.z = local_40;
    UVar38.fields.x = (float)(undefined4)local_48;
    UVar38.fields.y = (float)local_48._4_4_;
    *(float *)(lVar36 + -8) = (float)(__this->fields)._next_5__7;
    *(float *)(lVar36 + -0x10) = (float)iVar23;
    fVar21 = local_54;
    fVar20 = local_58;
    fVar19 = local_5c;
    lVar17 = local_78;
    lVar37 = local_88;
    lVar30 = local_a8[0];
    *(undefined8 *)(lVar36 + -0x18) = 0x31a3e9c;
    lVar18 = local_78;
    lVar35 = local_88;
    lVar32 = local_a8[0];
    previous.fields.z = fVar19;
    local_a8[0]._0_4_ = (undefined4)lVar30;
    local_a8[0]._4_4_ = SUB84(lVar30,4);
    previous.fields.x = (float)(undefined4)local_a8[0];
    previous.fields.y = (float)local_a8[0]._4_4_;
    end.fields.z = fVar21;
    local_88._0_4_ = (undefined4)lVar37;
    local_88._4_4_ = SUB84(lVar37,4);
    end.fields.x = (float)(undefined4)local_88;
    end.fields.y = (float)local_88._4_4_;
    start.fields.z = fVar20;
    local_78._0_4_ = (undefined4)lVar17;
    local_78._4_4_ = SUB84(lVar17,4);
    start.fields.x = (float)(undefined4)local_78;
    start.fields.y = (float)local_78._4_4_;
    local_a8[0] = lVar32;
    local_88 = lVar35;
    local_78 = lVar18;
    UVar38 = Interpolate__CatmullRom
                       (previous,start,end,UVar38,*(float *)(lVar36 + -0x10),*(float *)(lVar36 + -8),
                        (MethodInfo *)0x0);
    (__this->fields).__2__current.fields.x = (float)(int)UVar38.fields._0_8_;
    (__this->fields).__2__current.fields.y = (float)(int)((ulong)UVar38.fields._0_8_ >> 0x20);
    (__this->fields).__2__current.fields.z = UVar38.fields.z;
    (__this->fields).__1__state = 2;
    local_48 = extraout_RAX;
label_031a403b:
    bVar24 = (bool_conflict)CONCAT71((int7)((ulong)local_48 >> 8),1);
  }
  else {
    if (iVar23 == 1) {
      (__this->fields).__1__state = -1;
      pSVar9 = (__this->fields).nodes;
      local_88 = lVar30;
      local_78 = lVar32;
      if (pSVar9 == (System_Collections_IList_o *)0x0) goto label_031a4125;
      pSVar10 = pSVar9->klass;
      uVar3._0_1_ = (pSVar10->_2).rank;
      uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar35 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar35) == TypeInfo_ICollection) {
            pVVar26 = pSVar10->vtable + (*(int *)((long)&pIVar11->offset + lVar35) + 1);
            goto label_031a3f56;
          }
          lVar35 = lVar35 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar35);
      }
      *(undefined8 *)(lVar36 + -8) = 0x31a3ab0;
      pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_ICollection,1);
label_031a3f56:
      pMVar12 = pVVar26->method;
      pIVar13 = pVVar26->methodPtr;
      *(undefined8 *)(lVar36 + -8) = 0x31a3f5f;
      iVar23 = (*pIVar13)(pSVar9,pMVar12);
      (__this->fields).__3__slices = iVar23 + -1;
      (__this->fields)._last_5__2 = 0;
      iVar31 = 0;
      cVar33 = (char)(__this->fields).loop;
      iVar23 = (__this->fields).__3__slices;
      if (cVar33 != '\0') goto label_031a404c;
label_031a3f84:
      if (iVar31 < iVar23) {
label_031a4066:
        if (iVar31 == 0) {
          iVar34 = iVar23;
          if (cVar33 == '\0') {
            iVar34 = 0;
          }
          iVar31 = 0;
        }
        else {
          iVar34 = iVar31 + -1;
        }
        if (__this != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
          do {
            (__this->fields)._current_5__3 = iVar34;
            (__this->fields)._previous_5__4 = iVar31;
            if (iVar31 == iVar23) {
              iVar31 = 0;
              if (cVar33 == '\0') {
                iVar31 = iVar23;
              }
              if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) break;
              (__this->fields)._start_5__5 = iVar31;
              if (iVar31 != iVar23) goto label_031a40d1;
label_031a40b4:
              iVar31 = 0;
              if (cVar33 == '\0') {
                iVar31 = iVar23;
              }
              if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) break;
            }
            else {
              iVar31 = iVar31 + 1;
              (__this->fields)._start_5__5 = iVar31;
              if (iVar31 == iVar23) goto label_031a40b4;
label_031a40d1:
              iVar31 = iVar31 + 1;
            }
            (__this->fields)._end_5__6 = iVar31;
            iVar23 = (__this->fields).__3__loop + 1;
            (__this->fields)._next_5__7 = iVar23;
            (__this->fields)._stepCount_5__8 = 1;
            if (0 < iVar23) goto label_031a39d3;
label_031a40f8:
            iVar31 = (__this->fields)._last_5__2 + 1;
            (__this->fields)._last_5__2 = iVar31;
            cVar33 = (char)(__this->fields).loop;
            iVar23 = (__this->fields).__3__slices;
            if (cVar33 == '\0') goto label_031a3f84;
label_031a404c:
            if (iVar31 <= iVar23) goto label_031a4066;
            (__this->fields)._last_5__2 = 0;
            iVar31 = 0;
            iVar34 = iVar23;
            if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) break;
          } while( true );
        }
        goto label_031a4125;
      }
    }
    else if (iVar23 == 0) {
      (__this->fields).__1__state = -1;
      pSVar9 = (__this->fields).nodes;
      if (pSVar9 == (System_Collections_IList_o *)0x0) goto label_031a4125;
      pSVar10 = pSVar9->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar30 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar30) == TypeInfo_ICollection) {
            pVVar26 = pSVar10->vtable + (*(int *)((long)&pIVar11->offset + lVar30) + 1);
            goto label_031a3ed0;
          }
          lVar30 = lVar30 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar30);
      }
      *(undefined8 *)(lVar36 + -8) = 0x31a39a0;
      pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_ICollection,1);
label_031a3ed0:
      pMVar12 = pVVar26->method;
      pIVar13 = pVVar26->methodPtr;
      *(undefined8 *)(lVar36 + -8) = 0x31a3ed9;
      iVar23 = (*pIVar13)(pSVar9,pMVar12);
      if (1 < iVar23) {
        pSVar9 = (__this->fields).nodes;
        if (pSVar9 == (System_Collections_IList_o *)0x0) goto label_031a4125;
        pIVar14 = (__this->fields).toVector3;
        pSVar10 = pSVar9->klass;
        uVar7._0_1_ = (pSVar10->_2).rank;
        uVar7._1_1_ = (pSVar10->_2).minimumAlignment;
        if ((ulong)uVar7 != 0) {
          pIVar11 = (pSVar10->_1).interfaceOffsets;
          lVar30 = 0;
          do {
            if (*(long *)((long)&pIVar11->interfaceType + lVar30) == TypeInfo_IList) {
              pVVar26 = pSVar10->vtable + *(int *)((long)&pIVar11->offset + lVar30);
              goto label_031a3fa6;
            }
            lVar30 = lVar30 + 0x10;
          } while ((ulong)uVar7 << 4 != lVar30);
        }
        *(undefined8 *)(lVar36 + -8) = 0x31a3f39;
        pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IList,0);
label_031a3fa6:
        pMVar12 = pVVar26->method;
        pIVar13 = pVVar26->methodPtr;
        *(undefined8 *)(lVar36 + -8) = 0x31a3fb1;
        uVar27 = (*pIVar13)(pSVar9,0,pMVar12);
        pIVar28 = local_50->klass->rgctx_data->_2_T;
        if (((pIVar28->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)(lVar36 + -8) = 0x31a3fd8;
          pIVar28 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar28);
        }
        *(undefined8 *)(lVar36 + -8) = 0x31a3fe6;
        puVar29 = (undefined8 *)il2cpp_runtime_helper_022b2b80(uVar27,pIVar28,lVar37);
        if (pIVar14 == (Interpolate_ToVector3_T__o *)0x0) goto label_031a4125;
        pIVar15 = local_50->klass->rgctx_data;
        pMVar12 = pIVar15->_3_Interpolate_ToVector3_T__Invoke;
        pIVar13 = pMVar12->methodPointer;
        if (-1 < (int)(pIVar15->_2_T->_1).byval_arg.bits) {
          puVar29 = (undefined8 *)*puVar29;
        }
        pIVar16 = pMVar12->invoker_method;
        local_38 = puVar29;
        *(undefined8 *)(lVar36 + -8) = 0x31a4024;
        (*pIVar16)(pIVar13,pMVar12,pIVar14,&local_38,&local_48);
        (__this->fields).__2__current.fields.x = (float)(undefined4)local_48;
        (__this->fields).__2__current.fields.y = (float)local_48._4_4_;
        (__this->fields).__2__current.fields.z = local_40;
        (__this->fields).__1__state = 1;
        goto label_031a403b;
      }
    }
    bVar24 = 0;
  }
  return bVar24;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F65A40* method);
// 0x3065a40

UnityEngine_Vector3_o
Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F65A40 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F66370* method);
// 0x3066370

UnityEngine_Vector3_o
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F66370 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_30A4130* method);
// 0x31a4130

UnityEngine_Vector3_o
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_30A4130 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_Reset (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F65A50* method);
// 0x3065a50

void Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_Reset
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F65A50 *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  System_NotSupportedException_o *pSVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  System_NotSupportedException_o *pSStack_20;
  
  pSStack_20 = (System_NotSupportedException_o *)0x3065a63;
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  pSStack_20 = (System_NotSupportedException_o *)0x3065a6b;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  pSStack_20 = (System_NotSupportedException_o *)0x3065a78;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  pSStack_20 = (System_NotSupportedException_o *)0x3065a83;
  pSVar2 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,method);
  pSStack_20 = __this_00;
  if (g_data_057a84c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84c6 = '\x01';
  }
  uStack_28 = *(undefined4 *)((long)&(pSVar2->fields)._message + 4);
  uStack_30 = *(undefined8 *)((long)&(pSVar2->fields)._className + 4);
  il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_30);
  return;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_Reset (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F66380* method);
// 0x3066380

void Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_Reset
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F66380 *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  System_NotSupportedException_o *pSVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  System_NotSupportedException_o *pSStack_20;
  
  pSStack_20 = (System_NotSupportedException_o *)0x3066393;
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  pSStack_20 = (System_NotSupportedException_o *)0x306639b;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  pSStack_20 = (System_NotSupportedException_o *)0x30663a8;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  pSStack_20 = (System_NotSupportedException_o *)0x30663b3;
  pSVar2 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,method);
  pSStack_20 = __this_00;
  if (g_data_057a84c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84c8 = '\x01';
  }
  uStack_28 = *(undefined4 *)((long)&(pSVar2->fields)._message + 4);
  uStack_30 = *(undefined8 *)((long)&(pSVar2->fields)._className + 4);
  il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_30);
  return;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_30A4140* method);
// 0x31a4140

void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_30A4140 *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  System_NotSupportedException_o *pSVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  System_NotSupportedException_o *pSStack_20;
  
  pSStack_20 = (System_NotSupportedException_o *)0x31a4153;
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  pSStack_20 = (System_NotSupportedException_o *)0x31a415b;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  pSStack_20 = (System_NotSupportedException_o *)0x31a4168;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  pSStack_20 = (System_NotSupportedException_o *)0x31a4173;
  pSVar2 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,method);
  pSStack_20 = __this_00;
  if (g_data_057a884e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a884e = '\x01';
  }
  uStack_28 = *(undefined4 *)((long)&(pSVar2->fields)._message + 4);
  uStack_30 = *(undefined8 *)((long)&(pSVar2->fields)._className + 4);
  il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_30);
  return;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F65A90* method);
// 0x3065a90

Il2CppObject *
Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F65A90 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (g_data_057a84c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84c6 = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F663C0* method);
// 0x30663c0

Il2CppObject *
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F663C0 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (g_data_057a84c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a84c8 = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_30A4180* method);
// 0x31a4180

Il2CppObject *
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_30A4180 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (g_data_057a884e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a884e = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F65AE0* method);
// 0x3065ae0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F65AE0 *method)

{
  uint uVar1;
  uint uVar2;
  int32_t iVar3;
  Il2CppClass *pIVar4;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  undefined8 unaff_RBX;
  ulong unaff_RBP;
  long lVar5;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar6;
  Interpolate__NewCatmullRom_d__20_T__o *unaff_R14;
  
  do {
    pIVar6 = __this;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Interpolate__NewCatmullRom_d__20_T__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    if ((pIVar6->fields).__1__state == -2) {
      uVar1 = (pIVar6->fields).__l__initialThreadId;
      unaff_RBP = (ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065afb;
      uVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (uVar1 == uVar2) {
        (pIVar6->fields).__1__state = 0;
        __this_00 = pIVar6;
label_03065b53:
        (__this_00->fields).nodes = (pIVar6->fields).__3__nodes;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b64;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).nodes);
        (__this_00->fields).toVector3 = (pIVar6->fields).__3__toVector3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b75;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).toVector3);
        (__this_00->fields).__3__loop = (pIVar6->fields).slices;
        *(undefined1 *)&(__this_00->fields).loop = *(undefined1 *)((long)&(pIVar6->fields).loop + 1);
        return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
      }
    }
    pIVar4 = method->klass->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b28;
      pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b30;
    __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(pIVar4);
    lVar5 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b3d;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewCatmullRom_d__20_T__o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b4b;
    iVar3 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar3;
    if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_03065b53;
    *(code **)((long)register0x00000020 + -0x20) =
         Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerable_GetEnumerator;
    il2cpp_runtime_helper_022b2c90();
    method = *(MethodInfo_2F65AE0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x28);
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar6;
  } while( true );
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F66410* method);
// 0x3066410

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F66410 *method)

{
  uint uVar1;
  uint uVar2;
  int32_t iVar3;
  Il2CppClass *pIVar4;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  undefined8 unaff_RBX;
  ulong unaff_RBP;
  long lVar5;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar6;
  Interpolate__NewCatmullRom_d__20_T__o *unaff_R14;
  
  do {
    pIVar6 = __this;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Interpolate__NewCatmullRom_d__20_T__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    if ((pIVar6->fields).__1__state == -2) {
      uVar1 = (pIVar6->fields).__l__initialThreadId;
      unaff_RBP = (ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306642b;
      uVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (uVar1 == uVar2) {
        (pIVar6->fields).__1__state = 0;
        __this_00 = pIVar6;
label_03066483:
        (__this_00->fields).nodes = (pIVar6->fields).__3__nodes;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3066494;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).nodes);
        (__this_00->fields).toVector3 = (pIVar6->fields).__3__toVector3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30664a5;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).toVector3);
        (__this_00->fields).__3__loop = (pIVar6->fields).slices;
        *(undefined1 *)&(__this_00->fields).loop = *(undefined1 *)((long)&(pIVar6->fields).loop + 1);
        return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
      }
    }
    pIVar4 = method->klass->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3066458;
      pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3066460;
    __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(pIVar4);
    lVar5 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306646d;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewCatmullRom_d__20_T__o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306647b;
    iVar3 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar3;
    if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_03066483;
    *(code **)((long)register0x00000020 + -0x20) =
         Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerable_GetEnumerator;
    il2cpp_runtime_helper_022b2c90();
    method = *(MethodInfo_2F66410 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x28);
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar6;
  } while( true );
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_30A41D0* method);
// 0x31a41d0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_30A41D0 *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppClass *pIVar3;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar4;
  System_Collections_Generic_IEnumerator_Vector3__o *pSVar5;
  long lVar6;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      pIVar4 = __this;
      goto label_031a423f;
    }
  }
  pIVar3 = method->klass->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pIVar4 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(pIVar3);
  lVar6 = 0;
  (*method->klass->rgctx_data->_4_Interpolate__NewCatmullRom_d__20_T___ctor->methodPointer)(pIVar4);
  if (pIVar4 == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar5 = (System_Collections_Generic_IEnumerator_Vector3__o *)
             (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x28))();
    return pSVar5;
  }
label_031a423f:
  (pIVar4->fields).nodes = (__this->fields).__3__nodes;
  il2cpp_runtime_helper_022b4080(&(pIVar4->fields).nodes);
  (pIVar4->fields).toVector3 = (__this->fields).__3__toVector3;
  il2cpp_runtime_helper_022b4080(&(pIVar4->fields).toVector3);
  (pIVar4->fields).__3__loop = (__this->fields).slices;
  *(undefined1 *)&(pIVar4->fields).loop = *(undefined1 *)((long)&(__this->fields).loop + 1);
  return (System_Collections_Generic_IEnumerator_Vector3__o *)pIVar4;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F65B90* method);
// 0x3065b90

System_Collections_IEnumerator_o *
Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F65B90 *method)

{
  uint uVar1;
  MethodInfo *pMVar2;
  uint uVar3;
  int32_t iVar4;
  Il2CppClass *pIVar5;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  undefined8 unaff_RBX;
  ulong unaff_RBP;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar6;
  Interpolate__NewCatmullRom_d__20_T__o *unaff_R14;
  
  do {
    pIVar6 = __this;
    pMVar2 = method->klass->rgctx_data->
             _5_Interpolate__NewCatmullRom_d__20_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
    ;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Interpolate__NewCatmullRom_d__20_T__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    if ((pIVar6->fields).__1__state == -2) {
      uVar1 = (pIVar6->fields).__l__initialThreadId;
      unaff_RBP = (ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065afb;
      uVar3 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (uVar1 == uVar3) {
        (pIVar6->fields).__1__state = 0;
        __this_00 = pIVar6;
label_03065b53:
        (__this_00->fields).nodes = (pIVar6->fields).__3__nodes;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b64;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).nodes);
        (__this_00->fields).toVector3 = (pIVar6->fields).__3__toVector3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b75;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).toVector3);
        (__this_00->fields).__3__loop = (pIVar6->fields).slices;
        *(undefined1 *)&(__this_00->fields).loop = *(undefined1 *)((long)&(pIVar6->fields).loop + 1);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    pIVar5 = pMVar2->klass->rgctx_data->klass;
    if (((pIVar5->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b28;
      pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b30;
    __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(pIVar5);
    method = (MethodInfo_2F65B90 *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b3d;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewCatmullRom_d__20_T__o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3065b4b;
    iVar4 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar4;
    if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_03065b53;
    *(code **)((long)register0x00000020 + -0x20) =
         Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerable_GetEnumerator;
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar6;
  } while( true );
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_2F664C0* method);
// 0x30664c0

System_Collections_IEnumerator_o *
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_2F664C0 *method)

{
  uint uVar1;
  MethodInfo *pMVar2;
  uint uVar3;
  int32_t iVar4;
  Il2CppClass *pIVar5;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  undefined8 unaff_RBX;
  ulong unaff_RBP;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar6;
  Interpolate__NewCatmullRom_d__20_T__o *unaff_R14;
  
  do {
    pIVar6 = __this;
    pMVar2 = method->klass->rgctx_data->
             _5_Interpolate__NewCatmullRom_d__20_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
    ;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Interpolate__NewCatmullRom_d__20_T__o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    if ((pIVar6->fields).__1__state == -2) {
      uVar1 = (pIVar6->fields).__l__initialThreadId;
      unaff_RBP = (ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306642b;
      uVar3 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (uVar1 == uVar3) {
        (pIVar6->fields).__1__state = 0;
        __this_00 = pIVar6;
label_03066483:
        (__this_00->fields).nodes = (pIVar6->fields).__3__nodes;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3066494;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).nodes);
        (__this_00->fields).toVector3 = (pIVar6->fields).__3__toVector3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x30664a5;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).toVector3);
        (__this_00->fields).__3__loop = (pIVar6->fields).slices;
        *(undefined1 *)&(__this_00->fields).loop = *(undefined1 *)((long)&(pIVar6->fields).loop + 1);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    pIVar5 = pMVar2->klass->rgctx_data->klass;
    if (((pIVar5->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3066458;
      pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3066460;
    __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(pIVar5);
    method = (MethodInfo_2F664C0 *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306646d;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewCatmullRom_d__20_T__o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x306647b;
    iVar4 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar4;
    if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_03066483;
    *(code **)((long)register0x00000020 + -0x20) =
         Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerable_GetEnumerator;
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar6;
  } while( true );
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_30A4280* method);
// 0x31a4280

System_Collections_IEnumerator_o *
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_30A4280 *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = (System_Collections_IEnumerator_o *)
           (*method->klass->rgctx_data->
             _5_Interpolate__NewCatmullRom_d__20_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
             ->methodPointer)();
  return pSVar1;
}


// Interpolate.<NewCounter>d__6$$.ctor
// il2cpp: void Interpolate__NewCounter_d__6___ctor (Interpolate__NewCounter_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x405fa20

void Interpolate__NewCounter_d__6___ctor
               (Interpolate__NewCounter_d__6_o *__this,int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCounter>d__6$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCounter_d__6__System_IDisposable_Dispose (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x4061400

void Interpolate__NewCounter_d__6__System_IDisposable_Dispose
               (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  return;
}


// Interpolate.<NewCounter>d__6$$MoveNext
// il2cpp: bool Interpolate__NewCounter_d__6__MoveNext (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x4061410

bool_conflict
Interpolate__NewCounter_d__6__MoveNext(Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields).step + (__this->fields)._i_5__2;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 <= (__this->fields).end) {
label_0406142e:
      (__this->fields).__2__current = (float)iVar1;
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields).start;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 <= (__this->fields).end) goto label_0406142e;
  }
  return 0;
}


// Interpolate.<NewCounter>d__6$$System.Collections.Generic.IEnumerator<System.Single>.get_Current
// il2cpp: float Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerator_System_Single__get_Current (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x4061460

float Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerator_System_Single__get_Current
                (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewCounter>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCounter_d__6__System_Collections_IEnumerator_Reset (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x4061470

void Interpolate__NewCounter_d__6__System_Collections_IEnumerator_Reset
               (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  System_NotSupportedException_o *__this_00;
  undefined8 uStack_10;
  
  uStack_10 = 0x406147d;
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  uStack_10 = 0x4061485;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar2);
  uStack_10 = 0x4061492;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uStack_10 = 0x406149e;
  uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  uStack_10 = 0x40614a9;
  uVar1 = il2cpp_runtime_helper_022b2b10(__this_00,uVar2);
  uStack_10 = CONCAT44(*(undefined4 *)((long)&(__this_00->fields)._className + 4),uVar1);
  il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_10 + 4);
  return;
}


// Interpolate.<NewCounter>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCounter_d__6__System_Collections_IEnumerator_get_Current (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x40614b0

Il2CppObject *
Interpolate__NewCounter_d__6__System_Collections_IEnumerator_get_Current
          (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
  return pIVar1;
}


// Interpolate.<NewCounter>d__6$$System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_float__o* Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x40614d0

System_Collections_IEnumerator_o *
Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator
          (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  Interpolate__NewCounter_d__6_o *__this_00;
  undefined8 unaff_RBX;
  Interpolate__NewCounter_d__6_o *pIVar3;
  Interpolate__NewCounter_d__6_o *unaff_R14;
  
  do {
    pIVar3 = __this;
    *(Interpolate__NewCounter_d__6_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac2a4 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40614ec;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac2a4 = '\x01';
    }
    if ((pIVar3->fields).__1__state == -2) {
      iVar1 = (pIVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061505;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pIVar3->fields).__1__state = 0;
        __this_00 = pIVar3;
label_04061548:
        (__this_00->fields).start = (pIVar3->fields).__3__start;
        (__this_00->fields).end = (pIVar3->fields).__3__end;
        (__this_00->fields).step = (pIVar3->fields).__3__step;
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061525;
    __this_00 = (Interpolate__NewCounter_d__6_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061532;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewCounter_d__6_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061540;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (Interpolate__NewCounter_d__6_o *)0x0) goto label_04061548;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x406156d;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar3;
  } while( true );
}


// Interpolate.<NewCounter>d__6$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCounter_d__6__System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x4061570

System_Collections_IEnumerator_o *
Interpolate__NewCounter_d__6__System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewCounter_d__6_o *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  Interpolate__NewCounter_d__6_o *pIVar3;
  Interpolate__NewCounter_d__6_o *unaff_R14;
  
  do {
    pIVar3 = __this;
    *(Interpolate__NewCounter_d__6_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac2a4 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40614ec;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac2a4 = '\x01';
    }
    if ((pIVar3->fields).__1__state == -2) {
      iVar1 = (pIVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061505;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pIVar3->fields).__1__state = 0;
        __this_00 = pIVar3;
label_04061548:
        (__this_00->fields).start = (pIVar3->fields).__3__start;
        (__this_00->fields).end = (pIVar3->fields).__3__end;
        (__this_00->fields).step = (pIVar3->fields).__3__step;
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061525;
    __this_00 = (Interpolate__NewCounter_d__6_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061532;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewCounter_d__6_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061540;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (Interpolate__NewCounter_d__6_o *)0x0) goto label_04061548;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x406156d;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar3;
  } while( true );
}


// Interpolate.<NewEase>d__9$$.ctor
// il2cpp: void Interpolate__NewEase_d__9___ctor (Interpolate__NewEase_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x405fdc0

void Interpolate__NewEase_d__9___ctor
               (Interpolate__NewEase_d__9_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Interpolate.<NewEase>d__9$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewEase_d__9__System_IDisposable_Dispose (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x4061580

void Interpolate__NewEase_d__9__System_IDisposable_Dispose
               (Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEnumerator_float__o *pSVar3;
  System_Collections_Generic_IEnumerator_float__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtableDispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (g_data_057ac2a6 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac2a6 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pSVar3 = (__this->fields).__7__wrap2;
    if (pSVar3 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      pSVar4 = pSVar3->klass;
      uVar1._0_1_ = (pSVar4->_2).rank;
      uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar5;
            auVar7._0_8_ = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar6);
            goto label_0406161f;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pSVar3,TypeInfo_IDisposable,0);
label_0406161f:
      vtableDispatch = (code *)*auVar7._0_8_;
      (*vtableDispatch)(pSVar3,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// Interpolate.<NewEase>d__9$$MoveNext
// il2cpp: bool Interpolate__NewEase_d__9__MoveNext (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x4061630

bool_conflict Interpolate__NewEase_d__9__MoveNext(Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerator_float__o **ppSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  int iVar16;
  System_Collections_Generic_IEnumerable_float__o *pSVar17;
  System_Collections_Generic_IEnumerable_float__c *pSVar18;
  Il2CppRuntimeInterfaceOffsetPair *pIVar19;
  System_Collections_Generic_IEnumerator_float__c *pSVar20;
  Interpolate_Function_o *pIVar21;
  char cVar22;
  Il2CppMethodPointer *ppIVar23;
  System_Collections_Generic_IEnumerator_float__o *pSVar24;
  Il2CppObject *pIVar25;
  long *plVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auVar32 [12];
  undefined4 uStack_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (g_data_057ac2a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2a5 = '\x01';
  }
  iVar16 = (__this->fields).__1__state;
  if (iVar16 == 1) {
label_0406174a:
    (__this->fields).__1__state = -3;
    pSVar24 = (__this->fields).__7__wrap2;
    if (pSVar24 == (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_040619fe;
    }
    pSVar20 = pSVar24->klass;
    uVar12._0_1_ = (pSVar20->_2).rank;
    uVar12._1_1_ = (pSVar20->_2).minimumAlignment;
    if ((ulong)uVar12 != 0) {
      pIVar19 = (pSVar20->_1).interfaceOffsets;
      lVar28 = 0;
      do {
        if (*(long *)((long)&pIVar19->interfaceType + lVar28) == TypeInfo_IEnumerator) {
          ppIVar23 = &pSVar20->vtable[*(int *)((long)&pIVar19->offset + lVar28)].methodPtr;
          goto label_040617c1;
        }
        lVar28 = lVar28 + 0x10;
      } while ((ulong)uVar12 << 4 != lVar28);
    }
    ppIVar23 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar24,TypeInfo_IEnumerator,0);
label_040617c1:
    cVar22 = (**ppIVar23)(pSVar24,(MethodInfo *)ppIVar23[1]);
    ppSVar1 = &(__this->fields).__7__wrap2;
    if (cVar22 == '\0') {
      if (g_data_057ac2a6 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057ac2a6 = '\x01';
      }
      (__this->fields).__1__state = -1;
      pSVar24 = (__this->fields).__7__wrap2;
      if (pSVar24 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
        pSVar20 = pSVar24->klass;
        uVar14._0_1_ = (pSVar20->_2).rank;
        uVar14._1_1_ = (pSVar20->_2).minimumAlignment;
        if ((ulong)uVar14 != 0) {
          pIVar19 = (pSVar20->_1).interfaceOffsets;
          lVar28 = 0;
          do {
            if (*(long *)((long)&pIVar19->interfaceType + lVar28) == TypeInfo_IDisposable) {
              ppIVar23 = &pSVar20->vtable[*(int *)((long)&pIVar19->offset + lVar28)].methodPtr;
              goto label_040619d8;
            }
            lVar28 = lVar28 + 0x10;
          } while ((ulong)uVar14 << 4 != lVar28);
        }
        ppIVar23 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar24,TypeInfo_IDisposable,0);
label_040619d8:
        (**ppIVar23)(pSVar24,(MethodInfo *)ppIVar23[1]);
      }
      *ppSVar1 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
      il2cpp_runtime_helper_022b4080(ppSVar1,0);
      return 0;
    }
    pSVar24 = *ppSVar1;
    if (pSVar24 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      pSVar20 = pSVar24->klass;
      uVar13._0_1_ = (pSVar20->_2).rank;
      uVar13._1_1_ = (pSVar20->_2).minimumAlignment;
      if ((ulong)uVar13 != 0) {
        pIVar19 = (pSVar20->_1).interfaceOffsets;
        lVar28 = 0;
        do {
          if (*(long *)((long)&pIVar19->interfaceType + lVar28) == TypeInfo_IEnumerator_float) {
            ppIVar23 = &pSVar20->vtable[*(int *)((long)&pIVar19->offset + lVar28)].methodPtr;
            goto label_040618c4;
          }
          lVar28 = lVar28 + 0x10;
        } while ((ulong)uVar13 << 4 != lVar28);
      }
      ppIVar23 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar24,TypeInfo_IEnumerator_float,0);
label_040618c4:
      uVar30 = (**ppIVar23)(pSVar24,(MethodInfo *)ppIVar23[1]);
      pIVar21 = (__this->fields).ease;
      if (pIVar21 != (Interpolate_Function_o *)0x0) {
        uVar7 = (__this->fields).start.fields.x;
        uVar10 = (__this->fields).start.fields.y;
        fVar2 = (__this->fields).start.fields.z;
        local_28._0_4_ = (__this->fields)._distance_5__2.fields.x;
        local_28._4_4_ = (__this->fields)._distance_5__2.fields.y;
        fVar3 = (__this->fields)._distance_5__2.fields.z;
        fVar4 = (__this->fields).total;
        uStack_20 = 0;
        local_38 = (*(code *)(pIVar21->fields).invoke_impl)
                             (uVar7,(pIVar21->fields).method_code,(pIVar21->fields).method);
        uVar31 = (*(code *)(pIVar21->fields).invoke_impl)
                           (uVar10,local_28._4_4_,uVar30,fVar4,(pIVar21->fields).method_code,
                            (pIVar21->fields).method);
        local_40 = (*(code *)(pIVar21->fields).invoke_impl)
                             (fVar2,fVar3,uVar30,fVar4,(pIVar21->fields).method_code,(pIVar21->fields).method)
        ;
        local_48 = CONCAT44(uVar31,(undefined4)local_38);
        pIVar25 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_48);
        (__this->fields).__2__current = pIVar25;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar25);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar21 >> 8),1);
      }
      goto label_04061a08;
    }
  }
  else {
    if (iVar16 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    uVar5 = (__this->fields).end.fields.x;
    uVar8 = (__this->fields).end.fields.y;
    fVar2 = (__this->fields).end.fields.z;
    uVar6 = (__this->fields).start.fields.x;
    uVar9 = (__this->fields).start.fields.y;
    fVar3 = (__this->fields).start.fields.z;
    (__this->fields)._distance_5__2.fields.x = (float)uVar5 - (float)uVar6;
    (__this->fields)._distance_5__2.fields.y = (float)uVar8 - (float)uVar9;
    (__this->fields)._distance_5__2.fields.z = fVar2 - fVar3;
    pSVar17 = (__this->fields).driver;
    if (pSVar17 != (System_Collections_Generic_IEnumerable_float__o *)0x0) {
      pSVar18 = pSVar17->klass;
      uVar11._0_1_ = (pSVar18->_2).rank;
      uVar11._1_1_ = (pSVar18->_2).minimumAlignment;
      if ((ulong)uVar11 != 0) {
        pIVar19 = (pSVar18->_1).interfaceOffsets;
        lVar28 = 0;
        do {
          if (*(long *)((long)&pIVar19->interfaceType + lVar28) == TypeInfo_IEnumerable_float) {
            ppIVar23 = &pSVar18->vtable[*(int *)((long)&pIVar19->offset + lVar28)].methodPtr;
            goto label_04061731;
          }
          lVar28 = lVar28 + 0x10;
        } while ((ulong)uVar11 << 4 != lVar28);
      }
      ppIVar23 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IEnumerable_float,0);
label_04061731:
      pSVar24 = (System_Collections_Generic_IEnumerator_float__o *)
                (**ppIVar23)(pSVar17,(MethodInfo *)ppIVar23[1]);
      (__this->fields).__7__wrap2 = pSVar24;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap2,pSVar24);
      goto label_0406174a;
    }
label_040619fe:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_04061a08:
  auVar32 = il2cpp_runtime_helper_022b2c90();
  uVar27 = auVar32._0_8_;
  if (auVar32._8_4_ == 1) {
    plVar26 = (long *)__cxa_begin_catch(uVar27);
    lVar28 = *plVar26;
    __cxa_end_catch();
    if (lVar28 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02234100(__this);
    uVar27 = il2cpp_runtime_helper_022fefe0();
    if (lVar28 != 0) {
      iVar16 = (__this->fields).__1__state;
      if ((iVar16 == 1) || (iVar16 == -3)) {
        if (g_data_057ac2a6 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057ac2a6 = '\x01';
        }
        (__this->fields).__1__state = -1;
        pSVar24 = (__this->fields).__7__wrap2;
        if (pSVar24 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
          pSVar20 = pSVar24->klass;
          uVar15._0_1_ = (pSVar20->_2).rank;
          uVar15._1_1_ = (pSVar20->_2).minimumAlignment;
          if ((ulong)uVar15 != 0) {
            pIVar19 = (pSVar20->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar19->interfaceType + lVar29) == TypeInfo_IDisposable) {
                ppIVar23 = &pSVar20->vtable[*(int *)((long)&pIVar19->offset + lVar29)].methodPtr;
                goto label_04061b34;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar15 << 4 != lVar29);
          }
          ppIVar23 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar24,TypeInfo_IDisposable,0);
label_04061b34:
          (**ppIVar23)(pSVar24,(MethodInfo *)ppIVar23[1]);
        }
      }
      uVar27 = il2cpp_runtime_helper_022fefe0(lVar28);
    }
  }
  _Unwind_Resume(uVar27);
}


// Interpolate.<NewEase>d__9$$<>m__Finally1
// il2cpp: void Interpolate__NewEase_d__9____m__Finally1 (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x4061b60

void Interpolate__NewEase_d__9____m__Finally1(Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_float__o *pSVar2;
  System_Collections_Generic_IEnumerator_float__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ac2a6 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2a6 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).__7__wrap2;
  if (pSVar2 == (System_Collections_Generic_IEnumerator_float__o *)0x0) {
    return;
  }
  pSVar3 = pSVar2->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_04061bef;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pSVar2,TypeInfo_IDisposable,0);
label_04061bef:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// Interpolate.<NewEase>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Interpolate__NewEase_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x4061c00

Il2CppObject *
Interpolate__NewEase_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewEase>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewEase_d__9__System_Collections_IEnumerator_Reset (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x4061c10

void Interpolate__NewEase_d__9__System_Collections_IEnumerator_Reset
               (Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Interpolate.<NewEase>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewEase_d__9__System_Collections_IEnumerator_get_Current (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x4061c50

Il2CppObject *
Interpolate__NewEase_d__9__System_Collections_IEnumerator_get_Current
          (Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewTimer>d__3$$.ctor
// il2cpp: void Interpolate__NewTimer_d__3___ctor (Interpolate__NewTimer_d__3_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x405f970

void Interpolate__NewTimer_d__3___ctor
               (Interpolate__NewTimer_d__3_o *__this,int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewTimer>d__3$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewTimer_d__3__System_IDisposable_Dispose (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x4061c60

void Interpolate__NewTimer_d__3__System_IDisposable_Dispose
               (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  return;
}


// Interpolate.<NewTimer>d__3$$MoveNext
// il2cpp: bool Interpolate__NewTimer_d__3__MoveNext (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x4061c70

bool_conflict Interpolate__NewTimer_d__3__MoveNext(Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_RAX;
  float fVar4;
  
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    fVar1 = (__this->fields)._elapsedTime_5__2;
    uVar3 = (ulong)(uint)fVar1;
    if (fVar1 < (__this->fields).duration) {
label_04061ca6:
      (__this->fields).__2__current = (float)uVar3;
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  else if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    fVar1 = (__this->fields)._elapsedTime_5__2;
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 + fVar1;
    (__this->fields)._elapsedTime_5__2 = fVar4;
    if ((__this->fields).duration <= fVar4) {
      (__this->fields).__2__current = fVar4;
      (__this->fields).__1__state = 2;
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
    uVar3 = (ulong)(uint)fVar4;
    if (fVar4 < (__this->fields).duration) goto label_04061ca6;
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._elapsedTime_5__2 = 0.0;
    uVar3 = 0;
    if (0.0 < (__this->fields).duration) goto label_04061ca6;
  }
  return 0;
}


// Interpolate.<NewTimer>d__3$$System.Collections.Generic.IEnumerator<System.Single>.get_Current
// il2cpp: float Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerator_System_Single__get_Current (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x4061d30

float Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerator_System_Single__get_Current
                (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewTimer>d__3$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewTimer_d__3__System_Collections_IEnumerator_Reset (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x4061d40

void Interpolate__NewTimer_d__3__System_Collections_IEnumerator_Reset
               (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  System_NotSupportedException_o *__this_00;
  undefined8 uStack_10;
  
  uStack_10 = 0x4061d4d;
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  uStack_10 = 0x4061d55;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar2);
  uStack_10 = 0x4061d62;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uStack_10 = 0x4061d6e;
  uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  uStack_10 = 0x4061d79;
  uVar1 = il2cpp_runtime_helper_022b2b10(__this_00,uVar2);
  uStack_10 = CONCAT44(*(undefined4 *)((long)&(__this_00->fields)._className + 4),uVar1);
  il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_10 + 4);
  return;
}


// Interpolate.<NewTimer>d__3$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewTimer_d__3__System_Collections_IEnumerator_get_Current (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x4061d80

Il2CppObject *
Interpolate__NewTimer_d__3__System_Collections_IEnumerator_get_Current
          (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
  return pIVar1;
}


// Interpolate.<NewTimer>d__3$$System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_float__o* Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x4061da0

System_Collections_IEnumerator_o *
Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator
          (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  Interpolate__NewTimer_d__3_o *__this_00;
  undefined8 unaff_RBX;
  Interpolate__NewTimer_d__3_o *pIVar3;
  Interpolate__NewTimer_d__3_o *unaff_R14;
  
  do {
    pIVar3 = __this;
    *(Interpolate__NewTimer_d__3_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac2a7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061dbc;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac2a7 = '\x01';
    }
    if ((pIVar3->fields).__1__state == -2) {
      iVar1 = (pIVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061dd5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pIVar3->fields).__1__state = 0;
        __this_00 = pIVar3;
label_04061e18:
        (__this_00->fields).duration = (pIVar3->fields).__3__duration;
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061df5;
    __this_00 = (Interpolate__NewTimer_d__3_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061e02;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewTimer_d__3_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061e10;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (Interpolate__NewTimer_d__3_o *)0x0) goto label_04061e18;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061e2f;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar3;
  } while( true );
}


// Interpolate.<NewTimer>d__3$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewTimer_d__3__System_Collections_IEnumerable_GetEnumerator (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x4061e30

System_Collections_IEnumerator_o *
Interpolate__NewTimer_d__3__System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewTimer_d__3_o *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  Interpolate__NewTimer_d__3_o *pIVar3;
  Interpolate__NewTimer_d__3_o *unaff_R14;
  
  do {
    pIVar3 = __this;
    *(Interpolate__NewTimer_d__3_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ac2a7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061dbc;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac2a7 = '\x01';
    }
    if ((pIVar3->fields).__1__state == -2) {
      iVar1 = (pIVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061dd5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pIVar3->fields).__1__state = 0;
        __this_00 = pIVar3;
label_04061e18:
        (__this_00->fields).duration = (pIVar3->fields).__3__duration;
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061df5;
    __this_00 = (Interpolate__NewTimer_d__3_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061e02;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Interpolate__NewTimer_d__3_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061e10;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (Interpolate__NewTimer_d__3_o *)0x0) goto label_04061e18;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4061e2f;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar3;
  } while( true );
}


// Interpolate$$Identity
// il2cpp: UnityEngine_Vector3_o Interpolate__Identity (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x405f8c0

UnityEngine_Vector3_o Interpolate__Identity(UnityEngine_Vector3_o v,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)v.fields;
}


// Interpolate$$TransformDotPosition
// il2cpp: UnityEngine_Vector3_o Interpolate__TransformDotPosition (UnityEngine_Transform_o* t, const MethodInfo* method);
// 0x405f8d0

UnityEngine_Vector3_o Interpolate__TransformDotPosition(UnityEngine_Transform_o *t,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this;
  undefined4 uVar2;
  Il2CppObject *__this_00;
  undefined8 extraout_XMM0_Qa;
  float in_XMM1_Da;
  UnityEngine_Vector3_Fields UVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o UVar5;
  
  if (t != (UnityEngine_Transform_o *)0x0) {
    UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(t,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar3;
  }
  UVar4.fields.x = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac29a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
    g_data_057ac29a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
  uVar2 = 0;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0xfffffffe;
  __this_00 = (Il2CppObject *)0x0;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this[1].monitor = iVar1;
  if (__this != (Il2CppObject *)0x0) {
    UVar4.fields.y = 0.0;
    *(uint *)&__this[2].klass = UVar4.fields.x;
    UVar4.fields.z = in_XMM1_Da;
    return (UnityEngine_Vector3_o)UVar4.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[1].monitor = iVar1;
  UVar5.fields.z = in_XMM1_Da;
  UVar5.fields.x = (float)(int)extraout_XMM0_Qa;
  UVar5.fields.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
  return (UnityEngine_Vector3_o)UVar5.fields;
}


// Interpolate$$NewTimer
// il2cpp: System_Collections_Generic_IEnumerable_float__o* Interpolate__NewTimer (float duration, const MethodInfo* method);
// 0x405f8f0

System_Collections_Generic_IEnumerable_float__o * Interpolate__NewTimer(float duration,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this;
  undefined4 extraout_var;
  undefined4 uVar2;
  Il2CppObject *__this_00;
  
  if (g_data_057ac29a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
    g_data_057ac29a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
  uVar2 = 0;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0xfffffffe;
  __this_00 = (Il2CppObject *)0x0;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this[1].monitor = iVar1;
  if (__this != (Il2CppObject *)0x0) {
    *(float *)&__this[2].klass = duration;
    return (System_Collections_Generic_IEnumerable_float__o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[1].monitor = iVar1;
  return (System_Collections_Generic_IEnumerable_float__o *)CONCAT44(extraout_var,iVar1);
}


// Interpolate$$NewCounter
// il2cpp: System_Collections_Generic_IEnumerable_float__o* Interpolate__NewCounter (int32_t start, int32_t end, int32_t step, const MethodInfo* method);
// 0x405f9a0

System_Collections_Generic_IEnumerable_float__o *
Interpolate__NewCounter(int32_t start,int32_t end,int32_t step,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this;
  undefined4 extraout_var;
  undefined4 uVar2;
  Il2CppObject *__this_00;
  
  if (g_data_057ac29b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
    g_data_057ac29b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
  uVar2 = 0;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0xfffffffe;
  __this_00 = (Il2CppObject *)0x0;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this[1].monitor = iVar1;
  if (__this != (Il2CppObject *)0x0) {
    *(int32_t *)&__this[2].klass = start;
    *(int32_t *)&__this[3].klass = end;
    *(int32_t *)&__this[2].monitor = step;
    return (System_Collections_Generic_IEnumerable_float__o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[1].monitor = iVar1;
  return (System_Collections_Generic_IEnumerable_float__o *)CONCAT44(extraout_var,iVar1);
}


// Interpolate$$NewEase
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewEase (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, float duration, const MethodInfo* method);
// 0x405fa50

System_Collections_IEnumerator_o *
Interpolate__NewEase
          (Interpolate_Function_o *ease,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,float duration,
          MethodInfo *method)

{
  undefined8 uVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppClass *__this;
  Il2CppObject *__this_00;
  Il2CppObject *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  Il2CppClass *pIVar8;
  float fVar9;
  float fVar10;
  Il2CppClass *pIVar11;
  Il2CppClass *pIVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar13 = end.fields.z;
  pIVar11 = end.fields._0_8_;
  fVar9 = start.fields.z;
  fVar10 = fVar9;
  pIVar12 = pIVar11;
  fVar14 = fVar13;
  fVar15 = duration;
  if (g_data_057ac29a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
    g_data_057ac29a = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
  uVar7 = 0;
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar3[1].klass = 0xfffffffe;
  pIVar8 = (Il2CppClass *)0x0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar3[1].monitor = iVar2;
  if (pIVar3 != (Il2CppObject *)0x0) {
    *(float *)&pIVar3[2].klass = duration;
    if (g_data_057ac29c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NewEase_d__9);
      g_data_057ac29c = '\x01';
    }
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewEase_d__9);
    uVar7 = 0;
    pIVar8 = pIVar4;
    System_Object___ctor((Il2CppObject *)pIVar4,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar4->_1).name = 0;
    if (pIVar4 != (Il2CppClass *)0x0) {
      (pIVar4->_1).element_class = (Il2CppClass *)ease;
      il2cpp_runtime_helper_022b4080(&(pIVar4->_1).element_class,ease);
      *(long *)&(pIVar4->_1).byval_arg.field_0xc = start.fields._0_8_;
      *(float *)((long)&(pIVar4->_1).this_arg.data + 4) = fVar9;
      (pIVar4->_1).byval_arg.data = pIVar11;
      (pIVar4->_1).byval_arg.bits = (uint)fVar13;
      *(float *)&(pIVar4->_1).castClass = duration;
      *(Il2CppObject **)&(pIVar4->_1).this_arg.bits = pIVar3;
      il2cpp_runtime_helper_022b4080(&(pIVar4->_1).this_arg.bits,pIVar3);
      return (System_Collections_IEnumerator_o *)pIVar4;
    }
  }
  uVar1 = il2cpp_runtime_helper_022b2c90();
  fVar9 = fVar10;
  pIVar11 = pIVar12;
  fVar13 = fVar14;
  if (g_data_057ac29c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewEase_d__9);
    g_data_057ac29c = '\x01';
  }
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewEase_d__9);
  iVar5 = 0;
  pIVar4 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(undefined4 *)&(__this->_1).name = 0;
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).element_class = pIVar8;
    il2cpp_runtime_helper_022b4080(&(__this->_1).element_class,pIVar8);
    *(undefined8 *)&(__this->_1).byval_arg.field_0xc = uVar1;
    *(float *)((long)&(__this->_1).this_arg.data + 4) = fVar10;
    (__this->_1).byval_arg.data = pIVar12;
    (__this->_1).byval_arg.bits = (uint)fVar14;
    *(float *)&(__this->_1).castClass = fVar15;
    *(undefined8 *)&(__this->_1).this_arg.bits = uVar7;
    il2cpp_runtime_helper_022b4080(&(__this->_1).this_arg.bits,uVar7);
    return (System_Collections_IEnumerator_o *)__this;
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac29b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
    g_data_057ac29b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
  uVar6 = 0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  pIVar3 = (Il2CppObject *)0x0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[1].monitor = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    *(undefined4 *)&__this_00[2].klass = 0;
    *(int *)&__this_00[3].klass = iVar5 + 1;
    *(undefined4 *)&__this_00[2].monitor = 1;
    if (g_data_057ac29c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NewEase_d__9);
      g_data_057ac29c = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewEase_d__9);
    uVar6 = 0;
    pIVar3 = __this_01;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[4].klass = pIVar4;
      il2cpp_runtime_helper_022b4080(__this_01 + 4,pIVar4);
      *(undefined8 *)((long)&__this_01[2].monitor + 4) = uVar7;
      *(float *)((long)&__this_01[3].klass + 4) = fVar9;
      __this_01[2].klass = pIVar11;
      *(float *)&__this_01[2].monitor = fVar13;
      *(float *)&__this_01[4].monitor = (float)(iVar5 + 1);
      __this_01[3].monitor = __this_00;
      il2cpp_runtime_helper_022b4080(&__this_01[3].monitor,__this_00);
      return (System_Collections_IEnumerator_o *)__this_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar3[1].klass = uVar6;
  return extraout_RAX;
}


// Interpolate$$NewEase
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewEase (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t slices, const MethodInfo* method);
// 0x405fc70

System_Collections_IEnumerator_o *
Interpolate__NewEase_3f5fc70
          (Interpolate_Function_o *ease,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,int32_t slices,
          MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this;
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar2;
  Il2CppObject *__this_01;
  
  if (g_data_057ac29b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
    g_data_057ac29b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
  uVar2 = 0;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0xfffffffe;
  __this_01 = (Il2CppObject *)0x0;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this[1].monitor = iVar1;
  if (__this != (Il2CppObject *)0x0) {
    *(undefined4 *)&__this[2].klass = 0;
    *(int32_t *)&__this[3].klass = slices + 1;
    *(undefined4 *)&__this[2].monitor = 1;
    if (g_data_057ac29c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NewEase_d__9);
      g_data_057ac29c = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewEase_d__9);
    uVar2 = 0;
    __this_01 = __this_00;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[4].klass = (Il2CppClass *)ease;
      il2cpp_runtime_helper_022b4080(__this_00 + 4,ease);
      *(long *)((long)&__this_00[2].monitor + 4) = start.fields._0_8_;
      *(float *)((long)&__this_00[3].klass + 4) = start.fields.z;
      __this_00[2].klass = end.fields._0_8_;
      *(float *)&__this_00[2].monitor = end.fields.z;
      *(float *)&__this_00[4].monitor = (float)(slices + 1);
      __this_00[3].monitor = __this;
      il2cpp_runtime_helper_022b4080(&__this_00[3].monitor,__this);
      return (System_Collections_IEnumerator_o *)__this_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar2;
  return extraout_RAX;
}


// Interpolate$$NewEase
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewEase (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, float total, System_Collections_Generic_IEnumerable_float__o* driver, const MethodInfo* method);
// 0x405fb90

System_Collections_IEnumerator_o *
Interpolate__NewEase_3f5fb90
          (Interpolate_Function_o *ease,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,float total,
          System_Collections_Generic_IEnumerable_float__o *driver,MethodInfo *method)

{
  undefined8 uVar1;
  int32_t iVar2;
  Il2CppClass *__this;
  Il2CppObject *__this_00;
  Il2CppObject *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  int iVar3;
  undefined4 uVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *__this_02;
  float fVar6;
  float fVar7;
  Il2CppClass *pIVar8;
  Il2CppClass *pIVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = end.fields.z;
  pIVar8 = end.fields._0_8_;
  fVar6 = start.fields.z;
  fVar7 = fVar6;
  pIVar9 = pIVar8;
  fVar11 = fVar10;
  if (g_data_057ac29c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewEase_d__9);
    g_data_057ac29c = '\x01';
  }
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewEase_d__9);
  iVar3 = 0;
  pIVar5 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(undefined4 *)&(__this->_1).name = 0;
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).element_class = (Il2CppClass *)ease;
    il2cpp_runtime_helper_022b4080(&(__this->_1).element_class,ease);
    *(long *)&(__this->_1).byval_arg.field_0xc = start.fields._0_8_;
    *(float *)((long)&(__this->_1).this_arg.data + 4) = fVar6;
    (__this->_1).byval_arg.data = pIVar8;
    (__this->_1).byval_arg.bits = (uint)fVar10;
    *(float *)&(__this->_1).castClass = total;
    *(System_Collections_Generic_IEnumerable_float__o **)&(__this->_1).this_arg.bits = driver;
    il2cpp_runtime_helper_022b4080(&(__this->_1).this_arg.bits,driver);
    return (System_Collections_IEnumerator_o *)__this;
  }
  uVar1 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac29b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
    g_data_057ac29b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
  uVar4 = 0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  __this_02 = (Il2CppObject *)0x0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[1].monitor = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    *(undefined4 *)&__this_00[2].klass = 0;
    *(int *)&__this_00[3].klass = iVar3 + 1;
    *(undefined4 *)&__this_00[2].monitor = 1;
    if (g_data_057ac29c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NewEase_d__9);
      g_data_057ac29c = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewEase_d__9);
    uVar4 = 0;
    __this_02 = __this_01;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[4].klass = pIVar5;
      il2cpp_runtime_helper_022b4080(__this_01 + 4,pIVar5);
      *(undefined8 *)((long)&__this_01[2].monitor + 4) = uVar1;
      *(float *)((long)&__this_01[3].klass + 4) = fVar7;
      __this_01[2].klass = pIVar9;
      *(float *)&__this_01[2].monitor = fVar11;
      *(float *)&__this_01[4].monitor = (float)(iVar3 + 1);
      __this_01[3].monitor = __this_00;
      il2cpp_runtime_helper_022b4080(&__this_01[3].monitor,__this_00);
      return (System_Collections_IEnumerator_o *)__this_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar4;
  return extraout_RAX;
}


// Interpolate$$Ease
// il2cpp: UnityEngine_Vector3_o Interpolate__Ease (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x405fde0

UnityEngine_Vector3_o
Interpolate__Ease(Interpolate_Function_o *ease,UnityEngine_Vector3_o start,UnityEngine_Vector3_o distance,
                 float elapsedTime,float duration,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  MethodInfo_2F63D60 *method_00;
  code *vtableDispatch;
  MethodInfo_2F65260 *method_01;
  MethodInfo_2F65BB0 *method_02;
  System_RuntimeTypeHandle_o SVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  System_Object_array *args;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  long lVar9;
  System_Collections_IList_c *__this;
  System_Collections_IList_o *pSVar10;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  System_String_c *__this_01;
  System_String_o *pSVar11;
  System_RuntimeTypeHandle_Fields *pSVar12;
  System_Type_o *pSVar13;
  long lVar14;
  System_String_Fields SVar15;
  System_String_o *pSVar16;
  System_ArgumentException_o *__this_02;
  long lVar17;
  long *plVar18;
  Interpolate_Function_o *pIVar19;
  Il2CppObject *pIVar20;
  Interpolate_ToVector3_T__o *pIVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *pIVar23;
  ulong uVar24;
  uint uVar25;
  Il2CppClass *pIVar26;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  System_Collections_IList_c *extraout_RDX;
  long extraout_RDX_00;
  ulong extraout_RDX_01;
  float *pfVar27;
  Il2CppObject **ppIVar28;
  undefined8 unaff_RBP;
  ulong uVar29;
  System_Collections_IList_c *pSVar30;
  System_Collections_IList_o *pSVar31;
  void *pvVar32;
  void *pvVar33;
  System_Collections_IList_c *pSVar34;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar35;
  System_String_c *pSVar36;
  System_ArgumentException_o *pSVar37;
  Interpolate_Function_o *pIVar38;
  System_Collections_IList_o *pSVar39;
  int iVar40;
  undefined8 unaff_R13;
  ulong uVar41;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar44;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  float fVar45;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar42;
  float fVar43;
  undefined8 uVar46;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_o UVar51;
  UnityEngine_Vector3_o UVar52;
  UnityEngine_Vector3_o UVar53;
  UnityEngine_Vector3_o UVar54;
  UnityEngine_Vector3_o UVar55;
  UnityEngine_Vector3_o UVar56;
  UnityEngine_Vector3_o UVar57;
  UnityEngine_Vector3_o UVar58;
  UnityEngine_Vector3_o UVar59;
  UnityEngine_Vector3_o UVar60;
  UnityEngine_Vector3_o UVar61;
  undefined8 uStack_100;
  Il2CppObject *pIStack_f8;
  ulong uStack_f0;
  System_Collections_IList_o *pSStack_e8;
  Interpolate_Function_o *pIStack_e0;
  Il2CppObject *pIStack_d8;
  float fStack_34;
  float fStack_24;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  
  fVar43 = start.fields.z;
  if (ease != (Interpolate_Function_o *)0x0) {
    UVar56.fields.x =
         (*(code *)(ease->fields).invoke_impl)
                   (start.fields.x,distance.fields.x,elapsedTime,duration,(ease->fields).method_code,
                    (ease->fields).method);
    fStack_24 = start.fields.y;
    fStack_34 = distance.fields.y;
    uVar42 = (*(code *)(ease->fields).invoke_impl)
                       (fStack_24,fStack_34,elapsedTime,duration,(ease->fields).method_code,
                        (ease->fields).method);
    fVar43 = (float)(*(code *)(ease->fields).invoke_impl)
                              (fVar43,distance.fields.z,elapsedTime,duration,(ease->fields).method_code,
                               (ease->fields).method);
    UVar56.fields.y = (float)uVar42;
    UVar56.fields.z = fVar43;
    return (UnityEngine_Vector3_o)UVar56.fields;
  }
  uVar46 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac29d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Function);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInCirc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInCubic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInExpo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutCirc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutCubic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutExpo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutQuad);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutQuart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutQuint);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutSine);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInQuad);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInQuart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInQuint);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInSine);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutCirc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutCubic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutExpo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutQuad);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutQuart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutQuint);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutSine);
    uVar46 = il2cpp_runtime_helper_023445d0(&MethodInfo_Single_Linear);
    g_data_057ac29d = '\x01';
  }
  switch((ulong)ease & 0xffffffff) {
  case 0:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_Linear;
    break;
  case 1:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInQuad;
    break;
  case 2:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseOutQuad;
    break;
  case 3:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInOutQuad;
    break;
  case 4:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInCubic;
    break;
  case 5:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseOutCubic;
    break;
  case 6:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInOutCubic;
    break;
  case 7:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInQuart;
    break;
  case 8:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseOutQuart;
    break;
  case 9:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInOutQuart;
    break;
  case 10:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInQuint;
    break;
  case 0xb:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseOutQuint;
    break;
  case 0xc:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInOutQuint;
    break;
  case 0xd:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInSine;
    break;
  case 0xe:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseOutSine;
    break;
  case 0xf:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInOutSine;
    break;
  case 0x10:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInExpo;
    break;
  case 0x11:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseOutExpo;
    break;
  case 0x12:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInOutExpo;
    break;
  case 0x13:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInCirc;
    break;
  case 0x14:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseOutCirc;
    break;
  case 0x15:
    lVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar18 = &MethodInfo_Single_EaseInOutCirc;
    break;
  default:
    goto label_040602d4;
  }
  lVar14 = *plVar18;
  *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar14 + 8);
  *(long *)(lVar17 + 0x28) = lVar14;
  *(undefined8 *)(lVar17 + 0x20) = 0;
  il2cpp_runtime_helper_022b4080(lVar17 + 0x20,0);
  cVar2 = *(char *)(lVar14 + 0x52);
  *(long *)(lVar17 + 0x40) = lVar17;
  cVar6 = il2cpp_runtime_helper_022b2a80(lVar14);
  uVar46 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_01);
  if (cVar6 != '\0') {
    if (cVar2 == '\x04') {
      *(undefined1 **)(lVar17 + 0x18) = &label_02233fb0;
    }
    else {
      *(undefined8 *)(lVar17 + 0x18) = *(undefined8 *)(lVar17 + 0x10);
      *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)(lVar17 + 0x20);
    }
    *(code **)(lVar17 + 0x38) = il2cpp_runtime_helper_02233f20;
label_040602d4:
    UVar57.fields.z = fVar43;
    UVar57.fields.x = (float)(int)uVar46;
    UVar57.fields.y = (float)(int)((ulong)uVar46 >> 0x20);
    return (UnityEngine_Vector3_o)UVar57.fields;
  }
  lVar17 = il2cpp_runtime_helper_0231a840(0);
  lVar14 = 0;
  il2cpp_runtime_helper_022b2b10();
  *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(extraout_RDX_00 + 8);
  *(long *)(lVar17 + 0x28) = extraout_RDX_00;
  *(long *)(lVar17 + 0x20) = lVar14;
  il2cpp_runtime_helper_022b4080(lVar17 + 0x20);
  cVar2 = *(char *)(extraout_RDX_00 + 0x52);
  *(long *)(lVar17 + 0x40) = lVar17;
  cVar6 = il2cpp_runtime_helper_022b2a80(extraout_RDX_00);
  if (cVar6 == '\0') {
    if (lVar14 == 0) {
      pIVar19 = (Interpolate_Function_o *)il2cpp_runtime_helper_0231a840(0);
      pSVar31 = (System_Collections_IList_o *)0x0;
      fVar44 = (float)il2cpp_runtime_helper_022b2b10();
      if (g_data_057ac29e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
        g_data_057ac29e = '\x01';
      }
      if (g_data_057ac29a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
        g_data_057ac29a = '\x01';
      }
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
      pSVar10 = (System_Collections_IList_o *)0x0;
      System_Object___ctor(pIVar20,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar20[1].klass = 0xfffffffe;
      pIVar38 = (Interpolate_Function_o *)0x0;
      iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      *(int32_t *)&pIVar20[1].monitor = iVar8;
      if (pIVar20 != (Il2CppObject *)0x0) {
        *(float *)&pIVar20[2].klass = fVar44;
        pIVar21 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
        Interpolate_ToVector3_object____ctor();
        Interpolate__NewBezier_object_
                  (pIVar19,pSVar31,pIVar21,fVar44,(System_Collections_Generic_IEnumerable_float__o *)pIVar20,
                   MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        UVar59.fields.y = (float)extraout_XMM0_Db_02;
        UVar59.fields.x = (float)extraout_XMM0_Da_03;
        UVar59.fields.z = fVar43;
        return (UnityEngine_Vector3_o)UVar59.fields;
      }
      il2cpp_runtime_helper_022b2c90();
      uVar24 = extraout_RDX_01 & 0xffffffff;
      pIStack_d8 = pIVar20;
      if (g_data_057ac29f == '\0') {
        pIStack_e0 = (Interpolate_Function_o *)0x40604c6;
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        pIStack_e0 = (Interpolate_Function_o *)0x40604d2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
        pIStack_e0 = (Interpolate_Function_o *)0x40604de;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
        g_data_057ac29f = '\x01';
      }
      if (g_data_057ac29b == '\0') {
        pIStack_e0 = (Interpolate_Function_o *)0x40604fa;
        il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
        g_data_057ac29b = '\x01';
      }
      pIStack_e0 = (Interpolate_Function_o *)0x4060510;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
      pSVar31 = (System_Collections_IList_o *)0x0;
      pIStack_e0 = (Interpolate_Function_o *)0x406051d;
      System_Object___ctor(pIVar20,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar20[1].klass = 0xfffffffe;
      pIVar19 = (Interpolate_Function_o *)0x0;
      pIStack_e0 = (Interpolate_Function_o *)0x406052b;
      iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      *(int32_t *)&pIVar20[1].monitor = iVar8;
      if (pIVar20 != (Il2CppObject *)0x0) {
        iVar40 = (int)extraout_RDX_01 + 1;
        *(undefined4 *)&pIVar20[2].klass = 0;
        *(int *)&pIVar20[3].klass = iVar40;
        *(undefined4 *)&pIVar20[2].monitor = 1;
        pIStack_e0 = (Interpolate_Function_o *)0x4060558;
        pIVar21 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
        pIStack_e0 = (Interpolate_Function_o *)0x4060571;
        Interpolate_ToVector3_object____ctor();
        Interpolate__NewBezier_object_
                  (pIVar38,pSVar10,pIVar21,(float)iVar40,
                   (System_Collections_Generic_IEnumerable_float__o *)pIVar20,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        UVar60.fields.y = (float)extraout_XMM0_Db_03;
        UVar60.fields.x = (float)extraout_XMM0_Da_04;
        UVar60.fields.z = fVar43;
        return (UnityEngine_Vector3_o)UVar60.fields;
      }
      pIStack_e0 = (Interpolate_Function_o *)0x406059e;
      uVar42 = il2cpp_runtime_helper_022b2c90();
      uStack_100 = CONCAT44(extraout_XMM0_Da_05,uVar42);
      pIStack_f8 = pIVar20;
      uStack_f0 = uVar24;
      pSStack_e8 = pSVar10;
      pIStack_e0 = pIVar38;
      if (g_data_057ac2a0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
        g_data_057ac2a0 = '\x01';
      }
      if (g_data_057ac29a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
        g_data_057ac29a = '\x01';
      }
      pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
      pSVar10 = (System_Collections_IList_o *)0x0;
      System_Object___ctor((Il2CppObject *)pIVar22,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar22->_1).name = 0xfffffffe;
      pIVar38 = (Interpolate_Function_o *)0x0;
      iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      *(int32_t *)&(pIVar22->_1).namespaze = iVar8;
      if (pIVar22 == (Il2CppClass *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac2a1 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
          il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
          g_data_057ac2a1 = '\x01';
        }
        if (g_data_057ac29b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
          g_data_057ac29b = '\x01';
        }
        pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
        pvVar32 = (void *)0x0;
        System_Object___ctor((Il2CppObject *)pIVar22,(MethodInfo *)0x0);
        *(undefined4 *)&(pIVar22->_1).name = 0xfffffffe;
        pSVar39 = (System_Collections_IList_o *)0x0;
        iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&(pIVar22->_1).namespaze = iVar8;
        if (pIVar22 == (Il2CppClass *)0x0) {
          uVar42 = il2cpp_runtime_helper_022b2c90();
          pvVar33 = pvVar32;
          pSVar31 = pSVar39;
          fVar44 = fVar43;
          if (pvVar32 != (void *)0x0) {
            uVar25 = (uint)*(ulong *)((long)pvVar32 + 0x18);
            uVar24 = *(ulong *)((long)pvVar32 + 0x18) & 0xffffffff;
            if (0 < (int)(uVar25 - 1)) {
              uVar41 = (ulong)(uVar25 - 1);
              do {
                if (pSVar39 == (System_Collections_IList_o *)0x0) {
                  if (((int)uVar24 == 0) || ((int)uVar24 == 1)) goto label_0406090f;
                  goto label_04060914;
                }
                uVar29 = 0;
                pfVar27 = (float *)((long)pvVar32 + 0x20);
                do {
                  if ((uVar24 <= uVar29) || (uVar24 <= uVar29 + 1)) goto label_0406090f;
                  fVar44 = pfVar27[3] - *pfVar27;
                  pvVar33 = pSVar39[2].monitor;
                  pSVar31 = (System_Collections_IList_o *)pSVar39[4].klass;
                  fVar45 = (float)(*pSVar39[1].monitor)(*pfVar27,fVar44,uVar42,fVar43);
                  uVar25 = *(uint *)((long)pvVar32 + 0x18);
                  if ((uVar25 <= uVar29) || (*pfVar27 = fVar45, (ulong)uVar25 <= uVar29 + 1))
                  goto label_0406090f;
                  fVar44 = pfVar27[4] - pfVar27[1];
                  pvVar33 = pSVar39[2].monitor;
                  pSVar31 = (System_Collections_IList_o *)pSVar39[4].klass;
                  fVar45 = (float)(*pSVar39[1].monitor)(pfVar27[1],fVar44,uVar42,fVar43);
                  uVar25 = *(uint *)((long)pvVar32 + 0x18);
                  if ((uVar25 <= uVar29) || (pfVar27[1] = fVar45, (ulong)uVar25 <= uVar29 + 1))
                  goto label_0406090f;
                  fVar44 = pfVar27[5] - pfVar27[2];
                  pvVar33 = pSVar39[2].monitor;
                  pSVar31 = (System_Collections_IList_o *)pSVar39[4].klass;
                  fVar45 = (float)(*pSVar39[1].monitor)(pfVar27[2],fVar44,uVar42,fVar43);
                  uVar25 = *(uint *)((long)pvVar32 + 0x18);
                  uVar24 = (ulong)uVar25;
                  if (uVar24 <= uVar29) goto label_0406090f;
                  pfVar27[2] = fVar45;
                  pfVar27 = pfVar27 + 3;
                  uVar29 = uVar29 + 1;
                } while (uVar29 != uVar41);
                uVar41 = uVar41 - 1;
              } while (0 < (int)uVar41);
            }
            if (uVar25 != 0) {
              return (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)pvVar32 + 0x20);
            }
label_0406090f:
            il2cpp_runtime_helper_022b2ca0();
          }
label_04060914:
          iVar8 = (int32_t)pvVar33;
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac2a2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
            g_data_057ac2a2 = '\x01';
          }
          pIVar21 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
          Interpolate_ToVector3_object____ctor();
          Interpolate__NewCatmullRom_object_(pSVar31,pIVar21,iVar8,extraout_EDX_01 & 0xff,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
          UVar61.fields.y = (float)extraout_XMM0_Db_04;
          UVar61.fields.x = (float)extraout_XMM0_Da_06;
          UVar61.fields.z = fVar44;
          return (UnityEngine_Vector3_o)UVar61.fields;
        }
        *(undefined4 *)&(pIVar22->_1).byval_arg.data = 0;
        *(int *)&(pIVar22->_1).this_arg.data = extraout_EDX_00 + 1;
        (pIVar22->_1).byval_arg.bits = 1;
        pIVar23 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3_Vector3____ctor();
        fVar44 = (float)(extraout_EDX_00 + 1);
        ppIVar28 = (Il2CppObject **)&uStack_100;
        pIVar20 = (Il2CppObject *)0x0;
      }
      else {
        *(float *)&(pIVar22->_1).byval_arg.data = uStack_100._4_4_;
        pIVar23 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3_Vector3____ctor();
        ppIVar28 = &pIStack_d8;
        pIVar20 = pIStack_f8;
        pSVar10 = pSVar31;
        pIVar38 = pIVar19;
        uVar24 = uStack_f0;
        pSVar31 = pSStack_e8;
        pIVar19 = pIStack_e0;
        fVar44 = uStack_100._4_4_;
      }
      lVar14 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
      *(ulong *)((long)ppIVar28 + -8) = CONCAT71((int7)((ulong)unaff_RBP >> 8),cVar2);
      *(Interpolate_Function_o **)((long)ppIVar28 + -0x10) = pIVar19;
      *(System_Collections_IList_o **)((long)ppIVar28 + -0x18) = pSVar31;
      *(undefined8 *)((long)ppIVar28 + -0x20) = unaff_R13;
      *(ulong *)((long)ppIVar28 + -0x28) = uVar24;
      *(Il2CppObject **)((long)ppIVar28 + -0x30) = pIVar20;
      *(long **)((long)ppIVar28 + -0x38) = &MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
      *(float *)((long)ppIVar28 + -0x34) = fVar44;
      pIVar26 = pIVar22;
      lVar17 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
      if (*(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b7f;
        il2cpp_runtime_helper_02300a20(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
        lVar9 = **(long **)(lVar14 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      else {
        lVar9 = **(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664aee;
        lVar9 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664af6;
      __this = (System_Collections_IList_c *)il2cpp_runtime_helper_023052d0(lVar9);
      method_00 = *(MethodInfo_2F63D60 **)(*(long *)(lVar14 + 0x38) + 8);
      pSVar30 = (System_Collections_IList_c *)0xfffffffe;
      *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b0e;
      pSVar34 = __this;
      Interpolate__NewBezier_d__16_Vector3____ctor((Interpolate__NewBezier_d__16_T__o *)__this,-2,method_00);
      if (__this != (System_Collections_IList_c *)0x0) {
        (__this->_1).generic_class = pIVar38;
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b27;
        il2cpp_runtime_helper_022b4080(&(__this->_1).generic_class,pIVar38);
        (__this->_1).this_arg.data = pSVar10;
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b37;
        il2cpp_runtime_helper_022b4080(&(__this->_1).this_arg,pSVar10);
        (__this->_1).declaringType = pIVar23;
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b47;
        il2cpp_runtime_helper_022b4080(&(__this->_1).declaringType,pIVar23);
        *(float *)((long)&(__this->_1).typeMetadataHandle + 4) = *(float *)((long)ppIVar28 + -0x34);
        (__this->_1).element_class = pIVar22;
        *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b65;
        uVar46 = il2cpp_runtime_helper_022b4080(&(__this->_1).element_class,pIVar22);
        UVar49.fields.z = fVar43;
        UVar49.fields.x = (float)(int)uVar46;
        UVar49.fields.y = (float)(int)((ulong)uVar46 >> 0x20);
        return (UnityEngine_Vector3_o)UVar49.fields;
      }
      *(undefined8 *)((long)ppIVar28 + -0x40) = 0x2664b9d;
      uVar46 = il2cpp_runtime_helper_022b2c90();
      *(long *)((long)ppIVar28 + -0x40) = lVar14;
      *(Il2CppClass **)((long)ppIVar28 + -0x48) = pIVar23;
      *(Il2CppClass **)((long)ppIVar28 + -0x50) = pIVar22;
      *(Interpolate_Function_o **)((long)ppIVar28 + -0x58) = pIVar38;
      *(System_Collections_IList_o **)((long)ppIVar28 + -0x60) = pSVar10;
      *(undefined8 *)((long)ppIVar28 + -0x68) = 0;
      *(undefined8 *)((long)ppIVar28 + -0x70) = uVar46;
      *(undefined4 *)((long)ppIVar28 + -0x6c) = extraout_XMM0_Da;
      pIVar22 = pIVar26;
      lVar14 = lVar17;
      if (*(long **)(lVar17 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c6c;
        il2cpp_runtime_helper_02300a20(lVar17);
        lVar9 = **(long **)(lVar17 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      else {
        lVar9 = **(long **)(lVar17 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664bde;
        lVar9 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664be6;
      pSVar10 = (System_Collections_IList_o *)il2cpp_runtime_helper_023052d0(lVar9);
      pIVar21 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
      vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x38) + 8);
      *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664bfb;
      pSVar31 = pSVar10;
      (*vtableDispatch)();
      if (pSVar10 != (System_Collections_IList_o *)0x0) {
        pSVar10[6].klass = pSVar34;
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c14;
        il2cpp_runtime_helper_022b4080(pSVar10 + 6,pSVar34);
        pSVar10[3].klass = pSVar30;
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c24;
        il2cpp_runtime_helper_022b4080(pSVar10 + 3,pSVar30);
        pSVar10[5].klass = extraout_RDX;
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c34;
        il2cpp_runtime_helper_022b4080(pSVar10 + 5,extraout_RDX);
        *(undefined4 *)((long)&pSVar10[6].monitor + 4) = *(undefined4 *)((long)ppIVar28 + -0x6c);
        pSVar10[4].klass = (System_Collections_IList_c *)pIVar26;
        *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c52;
        uVar46 = il2cpp_runtime_helper_022b4080(pSVar10 + 4,pIVar26);
        UVar50.fields.z = fVar43;
        UVar50.fields.x = (float)(int)uVar46;
        UVar50.fields.y = (float)(int)((ulong)uVar46 >> 0x20);
        return (UnityEngine_Vector3_o)UVar50.fields;
      }
      *(undefined8 *)((long)ppIVar28 + -0x78) = 0x2664c8a;
      auVar47 = il2cpp_runtime_helper_022b2c90();
      *(long *)((long)ppIVar28 + -0x78) = lVar17;
      *(System_Collections_IList_c **)((long)ppIVar28 + -0x80) = extraout_RDX;
      *(Il2CppClass **)((long)ppIVar28 + -0x88) = pIVar26;
      *(System_Collections_IList_c **)((long)ppIVar28 + -0x90) = pSVar34;
      *(System_Collections_IList_c **)((long)ppIVar28 + -0x98) = pSVar30;
      *(undefined8 *)((long)ppIVar28 + -0xa0) = 0;
      *(long *)((long)ppIVar28 + -0xa8) = auVar47._0_8_;
      uVar24 = (ulong)pIVar22 & 0xffffffff;
      lVar17 = lVar14;
      if (*(long **)(lVar14 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664d2e;
        il2cpp_runtime_helper_02300a20(lVar14);
        lVar9 = **(long **)(lVar14 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      else {
        lVar9 = **(long **)(lVar14 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664cc4;
        lVar9 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664ccc;
      __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(lVar9);
      method_01 = *(MethodInfo_2F65260 **)(*(long *)(lVar14 + 0x38) + 8);
      pIVar23 = (Il2CppClass *)&g_data_fffffffe;
      *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664ce4;
      pIVar35 = __this_00;
      Interpolate__NewCatmullRom_d__20_object____ctor(__this_00,-2,method_01);
      if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
        (__this_00->fields).__3__nodes = pSVar31;
        *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664cf9;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).__3__nodes,pSVar31);
        (__this_00->fields).__3__toVector3 = pIVar21;
        *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664d0c;
        uVar46 = il2cpp_runtime_helper_022b4080(&(__this_00->fields).__3__toVector3,pIVar21);
        (__this_00->fields).slices = auVar47._8_4_;
        *(char *)((long)&(__this_00->fields).loop + 1) = (char)uVar24;
        UVar51.fields.z = fVar43;
        UVar51.fields.x = (float)(int)uVar46;
        UVar51.fields.y = (float)(int)((ulong)uVar46 >> 0x20);
        return (UnityEngine_Vector3_o)UVar51.fields;
      }
      *(undefined8 *)((long)ppIVar28 + -0xb0) = 0x2664d45;
      auVar48 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppIVar28 + -0xb0) = 0;
      *(ulong *)((long)ppIVar28 + -0xb8) = auVar47._8_8_ & 0xffffffff;
      *(ulong *)((long)ppIVar28 + -0xc0) = uVar24;
      *(System_Collections_IList_o **)((long)ppIVar28 + -200) = pSVar31;
      *(Interpolate_ToVector3_T__o **)((long)ppIVar28 + -0xd0) = pIVar21;
      *(long *)((long)ppIVar28 + -0xd8) = lVar14;
      *(long *)((long)ppIVar28 + -0xe0) = auVar48._0_8_;
      uVar24 = (ulong)pIVar22 & 0xffffffff;
      lVar14 = lVar17;
      if (*(long **)(lVar17 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664dee;
        il2cpp_runtime_helper_02300a20(lVar17);
        lVar9 = **(long **)(lVar17 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      else {
        lVar9 = **(long **)(lVar17 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664d84;
        lVar9 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664d8c;
      __this_01 = (System_String_c *)il2cpp_runtime_helper_023052d0(lVar9);
      method_02 = *(MethodInfo_2F65BB0 **)(*(long *)(lVar17 + 0x38) + 8);
      SVar15._stringLength = -2;
      SVar15._firstChar = 0;
      SVar15._6_2_ = 0;
      *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664da4;
      pSVar36 = __this_01;
      Interpolate__NewCatmullRom_d__20_Vector3____ctor
                ((Interpolate__NewCatmullRom_d__20_T__o *)__this_01,-2,method_02);
      if (__this_01 != (System_String_c *)0x0) {
        (__this_01->_1).this_arg.data = pIVar35;
        *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664db9;
        il2cpp_runtime_helper_022b4080(&(__this_01->_1).this_arg,pIVar35);
        (__this_01->_1).element_class = pIVar23;
        *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664dcc;
        uVar46 = il2cpp_runtime_helper_022b4080(&(__this_01->_1).element_class,pIVar23);
        *(int32_t *)&(__this_01->_1).declaringType = auVar48._8_4_;
        *(char *)((long)&(__this_01->_1).castClass + 1) = (char)uVar24;
        UVar52.fields.z = fVar43;
        UVar52.fields.x = (float)(int)uVar46;
        UVar52.fields.y = (float)(int)((ulong)uVar46 >> 0x20);
        return (UnityEngine_Vector3_o)UVar52.fields;
      }
      *(undefined8 *)((long)ppIVar28 + -0xe8) = 0x2664e05;
      auVar47 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppIVar28 + -0xe8) = 0;
      *(ulong *)((long)ppIVar28 + -0xf0) = auVar48._8_8_ & 0xffffffff;
      *(ulong *)((long)ppIVar28 + -0xf8) = uVar24;
      *(Interpolate__NewCatmullRom_d__20_T__o **)((long)ppIVar28 + -0x100) = pIVar35;
      *(Il2CppClass **)((long)ppIVar28 + -0x108) = pIVar23;
      *(long *)((long)ppIVar28 + -0x110) = lVar17;
      *(long *)((long)ppIVar28 + -0x118) = auVar47._0_8_;
      uVar24 = (ulong)pIVar22 & 0xffffffff;
      lVar17 = lVar14;
      if (*(long **)(lVar14 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664eab;
        il2cpp_runtime_helper_02300a20(lVar14);
        lVar9 = **(long **)(lVar14 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      else {
        lVar9 = **(long **)(lVar14 + 0x38);
        bVar1 = *(byte *)(lVar9 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e44;
        lVar9 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e4c;
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar9);
      plVar18 = (long *)&g_data_fffffffe;
      vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 8);
      *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e61;
      pSVar16 = pSVar11;
      (*vtableDispatch)();
      if (pSVar11 != (System_String_o *)0x0) {
        pSVar11[2].klass = pSVar36;
        *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e76;
        il2cpp_runtime_helper_022b4080(pSVar11 + 2,pSVar36);
        pSVar11[2].fields = SVar15;
        *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664e89;
        uVar46 = il2cpp_runtime_helper_022b4080(&pSVar11[2].fields,SVar15);
        *(int *)&pSVar11[3].monitor = auVar47._8_4_;
        *(char *)((long)&pSVar11[3].klass + 1) = (char)uVar24;
        UVar53.fields.z = fVar43;
        UVar53.fields.x = (float)(int)uVar46;
        UVar53.fields.y = (float)(int)((ulong)uVar46 >> 0x20);
        return (UnityEngine_Vector3_o)UVar53.fields;
      }
      *(undefined8 *)((long)ppIVar28 + -0x120) = 0x2664ec2;
      il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppIVar28 + -0x120) = 0;
      *(ulong *)((long)ppIVar28 + -0x128) = auVar47._8_8_ & 0xffffffff;
      *(ulong *)((long)ppIVar28 + -0x130) = uVar24;
      *(System_String_c **)((long)ppIVar28 + -0x138) = pSVar36;
      *(System_String_Fields *)((long)ppIVar28 + -0x140) = SVar15;
      *(long *)((long)ppIVar28 + -0x148) = lVar14;
      *(undefined4 *)((long)ppIVar28 + -0x14c) = extraout_EDX;
      pSVar12 = *(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38);
      if (pSVar12 == (System_RuntimeTypeHandle_Fields *)0x0) {
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f03;
        il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
        pSVar12 = *(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38);
        if (pSVar12 == (System_RuntimeTypeHandle_Fields *)0x0) {
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f14;
          il2cpp_runtime_helper_02300a20(lVar17);
          pSVar12 = *(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38);
        }
      }
      SVar3.fields.value = (System_RuntimeTypeHandle_Fields)pSVar12->value;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f37;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f41;
      pSVar13 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f5c;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f69;
      bVar7 = Unity_VisualScripting_TypeUtility__IsAssignableFrom
                        (pSVar13,(Il2CppObject *)pIVar22,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        UVar54.fields.y = (float)extraout_XMM0_Db;
        UVar54.fields.x = (float)extraout_XMM0_Da_00;
        UVar54.fields.z = fVar43;
        return (UnityEngine_Vector3_o)UVar54.fields;
      }
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f88;
      uVar46 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664f95;
      lVar14 = il2cpp_runtime_helper_022b2a40(uVar46,4);
      *(long *)((long)ppIVar28 + -0x158) = lVar14;
      if (lVar14 != 0) goto label_02664fa4;
label_02664f9f:
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fa4;
      il2cpp_runtime_helper_022b2c90();
label_02664fa4:
      SVar15 = pSVar16->fields;
      if (SVar15 == (System_String_Fields)0x0) goto label_02664fd6;
      uVar46 = *(undefined8 *)(**(long **)((long)ppIVar28 + -0x158) + 0x40);
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fc2;
      lVar14 = il2cpp_runtime_helper_023051f0(SVar15,uVar46);
      if (lVar14 != 0) goto label_02664fd6;
label_02664fc7:
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fcc;
      uVar46 = il2cpp_runtime_helper_0231b270();
      *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fd6;
      il2cpp_runtime_helper_022b2b10(uVar46,0);
label_02664fd6:
      if (*(int *)(*(long *)((long)ppIVar28 + -0x158) + 0x18) != 0) goto label_02664fe6;
      do {
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664fe6;
        il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
        lVar14 = *(long *)((long)ppIVar28 + -0x158);
        *(System_String_Fields *)(lVar14 + 0x20) = SVar15;
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2664ffb;
        il2cpp_runtime_helper_022b4080(lVar14 + 0x20,SVar15);
        if (plVar18 == (long *)0x0) goto label_02664f9f;
        uVar46 = *(undefined8 *)(*plVar18 + 0x1c0);
        vtableDispatch = *(code **)(*plVar18 + 0x1b8);
        *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665013;
        SVar15 = (System_String_Fields)(*vtableDispatch)(plVar18,uVar46);
        if (SVar15 != (System_String_Fields)0x0) {
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266502f;
          lVar14 = il2cpp_runtime_helper_023051f0(SVar15);
          if (lVar14 == 0) goto label_02664fc7;
        }
        if (1 < *(uint *)(*(long *)((long)ppIVar28 + -0x158) + 0x18)) {
          lVar14 = *(long *)((long)ppIVar28 + -0x158);
          *(System_String_Fields *)(lVar14 + 0x28) = SVar15;
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665057;
          il2cpp_runtime_helper_022b4080(lVar14 + 0x28);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665063;
          pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
          if (pIVar22 != (Il2CppClass *)0x0) {
            *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665075;
            pSVar13 = System_Object__GetType((Il2CppObject *)pIVar22,(MethodInfo *)0x0);
            if (pSVar13 == (System_Type_o *)0x0) goto label_02664f9f;
            pMVar4 = (pSVar13->klass->vtable)._3_ToString.method;
            pIVar5 = (pSVar13->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665091;
            lVar14 = (*pIVar5)(pSVar13,pMVar4);
            if (lVar14 != 0) goto label_026650a8;
          }
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650a5;
          lVar14 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
          args = *(System_Object_array **)((long)ppIVar28 + -0x158);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650b5;
          il2cpp_runtime_helper_01f681a0(args);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650c0;
          il2cpp_runtime_helper_01f6def0(args,lVar14);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650d0;
          il2cpp_runtime_helper_01f6df20(args,2,lVar14);
          SVar3.fields.value =
               (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38))->value;
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650e3;
          il2cpp_runtime_helper_01f68090(g_data_057b9c50);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650ed;
          pSVar13 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26650f8;
          il2cpp_runtime_helper_01f681a0(args);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665103;
          il2cpp_runtime_helper_01f6def0(args,pSVar13);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665113;
          il2cpp_runtime_helper_01f6df20(args,3,pSVar13);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665120;
          pSVar16 = System_String__Format_3af7980(pSVar16,args,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266512b;
          il2cpp_runtime_helper_01f681a0(plVar18);
          uVar46 = *(undefined8 *)(*plVar18 + 0x240);
          vtableDispatch = *(code **)(*plVar18 + 0x238);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266513e;
          uVar46 = (*vtableDispatch)(plVar18,uVar46);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665149;
          il2cpp_runtime_helper_01f681a0(uVar46);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665156;
          plVar18 = (long *)il2cpp_runtime_helper_01f6e290(uVar46,(long)*(int *)((long)ppIVar28 + -0x14c));
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665161;
          il2cpp_runtime_helper_01f681a0(plVar18);
          uVar46 = *(undefined8 *)(*plVar18 + 0x1e0);
          vtableDispatch = *(code **)(*plVar18 + 0x1d8);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665175;
          pSVar11 = (System_String_o *)(*vtableDispatch)(plVar18,uVar46);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x2665184;
          uVar46 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266518c;
          __this_02 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar46);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x266519f;
          System_ArgumentException___ctor_3c0adc0(__this_02,pSVar16,pSVar11,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppIVar28 + -0x168) = 0x26651aa;
          pSVar37 = __this_02;
          uVar46 = il2cpp_runtime_helper_022b2b10();
          *(undefined8 **)((long)ppIVar28 + -0x168) = &g_data_057b9b70;
          *(System_ArgumentException_o **)((long)ppIVar28 + -0x170) = __this_02;
          *(undefined8 *)((long)ppIVar28 + -0x178) = uVar46;
          if (*(long *)(lVar17 + 0x38) == 0) {
            *(undefined8 *)((long)ppIVar28 + -0x180) = 0x26651c9;
            il2cpp_runtime_helper_02300a20(lVar17);
          }
          pMVar4 = pSVar37->klass[2].vtable._10_get_Source.method;
          pIVar5 = pSVar37->klass[2].vtable._10_get_Source.methodPtr;
          *(undefined8 *)((long)ppIVar28 + -0x180) = 0x26651dc;
          auVar47 = (*pIVar5)(pSVar37,pMVar4);
          vtableDispatch = *(code **)**(undefined8 **)(lVar17 + 0x38);
          uVar46 = (*vtableDispatch)
                             (auVar47._0_8_,(undefined8 *)**(undefined8 **)(lVar17 + 0x38),auVar47._8_8_,
                              vtableDispatch);
          UVar55.fields.z = fVar43;
          UVar55.fields.x = (float)(int)uVar46;
          UVar55.fields.y = (float)(int)((ulong)uVar46 >> 0x20);
          return (UnityEngine_Vector3_o)UVar55.fields;
        }
      } while( true );
    }
  }
  else if (cVar2 == '\x04') {
    *(undefined1 **)(lVar17 + 0x18) = &label_02233fb0;
    goto label_04060365;
  }
  *(undefined8 *)(lVar17 + 0x18) = *(undefined8 *)(lVar17 + 0x10);
  *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)(lVar17 + 0x20);
label_04060365:
  *(code **)(lVar17 + 0x38) = il2cpp_runtime_helper_02233f20;
  UVar58.fields.y = (float)extraout_XMM0_Db_01;
  UVar58.fields.x = (float)extraout_XMM0_Da_02;
  UVar58.fields.z = fVar43;
  return (UnityEngine_Vector3_o)UVar58.fields;
}


// Interpolate$$Ease
// il2cpp: Interpolate_Function_o* Interpolate__Ease (int32_t type, const MethodInfo* method);
// 0x405fea0

Interpolate_Function_o * Interpolate__Ease_3f5fea0(int32_t type,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  MethodInfo_2F63D60 *method_00;
  code *vtableDispatch;
  MethodInfo_2F65260 *method_01;
  MethodInfo_2F65BB0 *method_02;
  System_RuntimeTypeHandle_o SVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  System_Object_array *args;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  undefined4 uVar9;
  long lVar10;
  Interpolate_Function_o *pIVar11;
  undefined8 uVar12;
  System_RuntimeTypeHandle_Fields *pSVar13;
  System_Type_o *pSVar14;
  undefined4 extraout_var;
  long lVar15;
  System_String_o *message;
  System_String_o *paramName;
  System_ArgumentException_o *__this;
  Interpolate_Function_o *pIVar16;
  long *plVar17;
  long lVar18;
  Il2CppObject *pIVar19;
  Interpolate_ToVector3_T__o *pIVar20;
  uint uVar21;
  Il2CppObject *pIVar22;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  intptr_t extraout_RDX;
  long extraout_RDX_00;
  ulong extraout_RDX_01;
  float *pfVar23;
  Il2CppObject **ppIVar24;
  undefined8 unaff_RBP;
  intptr_t iVar25;
  Interpolate_ToVector3_T__o *pIVar26;
  System_Collections_IList_o *pSVar27;
  System_Collections_IList_o *pSVar28;
  void *pvVar29;
  void *pvVar30;
  System_ArgumentException_o *pSVar31;
  Interpolate_Function_o *pIVar32;
  System_Collections_IList_o *pSVar33;
  int iVar34;
  ulong uVar35;
  undefined8 unaff_R13;
  undefined4 extraout_XMM0_Da;
  float fVar36;
  undefined4 extraout_XMM0_Da_00;
  undefined4 in_XMM1_Da;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_b8;
  Il2CppObject *pIStack_b0;
  ulong uStack_a8;
  System_Collections_IList_o *pSStack_a0;
  Interpolate_Function_o *pIStack_98;
  Il2CppObject *pIStack_90;
  
  if (g_data_057ac29d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Function);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInCirc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInCubic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInExpo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutCirc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutCubic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutExpo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutQuad);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutQuart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutQuint);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInOutSine);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInQuad);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInQuart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInQuint);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseInSine);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutCirc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutCubic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutExpo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutQuad);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutQuart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutQuint);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_EaseOutSine);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_Linear);
    g_data_057ac29d = '\x01';
  }
  switch(type) {
  case 0:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_Linear;
    break;
  case 1:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInQuad;
    break;
  case 2:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseOutQuad;
    break;
  case 3:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInOutQuad;
    break;
  case 4:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInCubic;
    break;
  case 5:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseOutCubic;
    break;
  case 6:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInOutCubic;
    break;
  case 7:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInQuart;
    break;
  case 8:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseOutQuart;
    break;
  case 9:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInOutQuart;
    break;
  case 10:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInQuint;
    break;
  case 0xb:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseOutQuint;
    break;
  case 0xc:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInOutQuint;
    break;
  case 0xd:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInSine;
    break;
  case 0xe:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseOutSine;
    break;
  case 0xf:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInOutSine;
    break;
  case 0x10:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInExpo;
    break;
  case 0x11:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseOutExpo;
    break;
  case 0x12:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInOutExpo;
    break;
  case 0x13:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInCirc;
    break;
  case 0x14:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseOutCirc;
    break;
  case 0x15:
    pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Function);
    plVar17 = &MethodInfo_Single_EaseInOutCirc;
    break;
  default:
    return (Interpolate_Function_o *)0x0;
  }
  lVar18 = *plVar17;
  (pIVar16->fields).method_ptr = *(intptr_t *)(lVar18 + 8);
  (pIVar16->fields).method = lVar18;
  (pIVar16->fields).m_target = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b4080(&(pIVar16->fields).m_target,0);
  cVar2 = *(char *)(lVar18 + 0x52);
  (pIVar16->fields).method_code = (intptr_t)pIVar16;
  cVar6 = il2cpp_runtime_helper_022b2a80(lVar18);
  if (cVar6 != '\0') {
    if (cVar2 == '\x04') {
      (pIVar16->fields).invoke_impl = (intptr_t)&label_02233fb0;
    }
    else {
      (pIVar16->fields).invoke_impl = (pIVar16->fields).method_ptr;
      (pIVar16->fields).method_code = (intptr_t)(pIVar16->fields).m_target;
    }
    (pIVar16->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02233f20;
    return pIVar16;
  }
  lVar18 = il2cpp_runtime_helper_0231a840(0);
  lVar15 = 0;
  il2cpp_runtime_helper_022b2b10();
  *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(extraout_RDX_00 + 8);
  *(long *)(lVar18 + 0x28) = extraout_RDX_00;
  *(long *)(lVar18 + 0x20) = lVar15;
  il2cpp_runtime_helper_022b4080(lVar18 + 0x20);
  cVar2 = *(char *)(extraout_RDX_00 + 0x52);
  *(long *)(lVar18 + 0x40) = lVar18;
  cVar6 = il2cpp_runtime_helper_022b2a80(extraout_RDX_00);
  if (cVar6 == '\0') {
    if (lVar15 == 0) {
      pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_0231a840(0);
      pSVar27 = (System_Collections_IList_o *)0x0;
      fVar36 = (float)il2cpp_runtime_helper_022b2b10();
      if (g_data_057ac29e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
        g_data_057ac29e = '\x01';
      }
      if (g_data_057ac29a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
        g_data_057ac29a = '\x01';
      }
      pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
      pSVar28 = (System_Collections_IList_o *)0x0;
      System_Object___ctor(pIVar19,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar19[1].klass = 0xfffffffe;
      pIVar32 = (Interpolate_Function_o *)0x0;
      iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      *(int32_t *)&pIVar19[1].monitor = iVar8;
      if (pIVar19 != (Il2CppObject *)0x0) {
        *(float *)&pIVar19[2].klass = fVar36;
        pIVar20 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
        Interpolate_ToVector3_object____ctor();
        pIVar16 = (Interpolate_Function_o *)
                  Interpolate__NewBezier_object_
                            (pIVar16,pSVar27,pIVar20,fVar36,
                             (System_Collections_Generic_IEnumerable_float__o *)pIVar19,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        return pIVar16;
      }
      il2cpp_runtime_helper_022b2c90();
      uVar35 = extraout_RDX_01 & 0xffffffff;
      pIStack_90 = pIVar19;
      if (g_data_057ac29f == '\0') {
        pIStack_98 = (Interpolate_Function_o *)0x40604c6;
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        pIStack_98 = (Interpolate_Function_o *)0x40604d2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
        pIStack_98 = (Interpolate_Function_o *)0x40604de;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
        g_data_057ac29f = '\x01';
      }
      if (g_data_057ac29b == '\0') {
        pIStack_98 = (Interpolate_Function_o *)0x40604fa;
        il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
        g_data_057ac29b = '\x01';
      }
      pIStack_98 = (Interpolate_Function_o *)0x4060510;
      pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
      pSVar27 = (System_Collections_IList_o *)0x0;
      pIStack_98 = (Interpolate_Function_o *)0x406051d;
      System_Object___ctor(pIVar19,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar19[1].klass = 0xfffffffe;
      pIVar16 = (Interpolate_Function_o *)0x0;
      pIStack_98 = (Interpolate_Function_o *)0x406052b;
      iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      *(int32_t *)&pIVar19[1].monitor = iVar8;
      if (pIVar19 != (Il2CppObject *)0x0) {
        iVar34 = (int)extraout_RDX_01 + 1;
        *(undefined4 *)&pIVar19[2].klass = 0;
        *(int *)&pIVar19[3].klass = iVar34;
        *(undefined4 *)&pIVar19[2].monitor = 1;
        pIStack_98 = (Interpolate_Function_o *)0x4060558;
        pIVar20 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
        pIStack_98 = (Interpolate_Function_o *)0x4060571;
        Interpolate_ToVector3_object____ctor();
        pIVar16 = (Interpolate_Function_o *)
                  Interpolate__NewBezier_object_
                            (pIVar32,pSVar28,pIVar20,(float)iVar34,
                             (System_Collections_Generic_IEnumerable_float__o *)pIVar19,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
        return pIVar16;
      }
      pIStack_98 = (Interpolate_Function_o *)0x406059e;
      uVar9 = il2cpp_runtime_helper_022b2c90();
      uStack_b8 = CONCAT44(extraout_XMM0_Da_00,uVar9);
      pIStack_b0 = pIVar19;
      uStack_a8 = uVar35;
      pSStack_a0 = pSVar28;
      pIStack_98 = pIVar32;
      if (g_data_057ac2a0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
        g_data_057ac2a0 = '\x01';
      }
      if (g_data_057ac29a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
        g_data_057ac29a = '\x01';
      }
      pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
      pSVar28 = (System_Collections_IList_o *)0x0;
      System_Object___ctor(pIVar19,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar19[1].klass = 0xfffffffe;
      pIVar32 = (Interpolate_Function_o *)0x0;
      iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      *(int32_t *)&pIVar19[1].monitor = iVar8;
      if (pIVar19 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac2a1 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
          il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
          g_data_057ac2a1 = '\x01';
        }
        if (g_data_057ac29b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
          g_data_057ac29b = '\x01';
        }
        pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
        pvVar29 = (void *)0x0;
        System_Object___ctor(pIVar19,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar19[1].klass = 0xfffffffe;
        pSVar33 = (System_Collections_IList_o *)0x0;
        iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&pIVar19[1].monitor = iVar8;
        if (pIVar19 == (Il2CppObject *)0x0) {
          uVar9 = il2cpp_runtime_helper_022b2c90();
          pvVar30 = pvVar29;
          pSVar27 = pSVar33;
          if (pvVar29 != (void *)0x0) {
            pIVar16 = (Interpolate_Function_o *)(*(ulong *)((long)pvVar29 + 0x18) & 0xffffffff);
            uVar21 = (int)*(ulong *)((long)pvVar29 + 0x18) - 1;
            if (0 < (int)uVar21) {
              pIVar32 = (Interpolate_Function_o *)(ulong)uVar21;
              do {
                if (pSVar33 == (System_Collections_IList_o *)0x0) {
                  if (((int)pIVar16 == 0) || ((int)pIVar16 == 1)) goto label_0406090f;
                  goto label_04060914;
                }
                pIVar11 = (Interpolate_Function_o *)0x0;
                pfVar23 = (float *)((long)pvVar29 + 0x20);
                do {
                  if ((pIVar16 <= pIVar11) ||
                     (pIVar16 <= (Interpolate_Function_o *)((long)&pIVar11->klass + 1))) goto label_0406090f;
                  pvVar30 = pSVar33[2].monitor;
                  pSVar27 = (System_Collections_IList_o *)pSVar33[4].klass;
                  fVar36 = (float)(*pSVar33[1].monitor)(*pfVar23,pfVar23[3] - *pfVar23,uVar9,in_XMM1_Da);
                  uVar21 = *(uint *)((long)pvVar29 + 0x18);
                  if (((Interpolate_Function_o *)(ulong)uVar21 <= pIVar11) ||
                     (*pfVar23 = fVar36,
                     (Interpolate_Function_o *)(ulong)uVar21 <=
                     (Interpolate_Function_o *)((long)&pIVar11->klass + 1))) goto label_0406090f;
                  pvVar30 = pSVar33[2].monitor;
                  pSVar27 = (System_Collections_IList_o *)pSVar33[4].klass;
                  fVar36 = (float)(*pSVar33[1].monitor)(pfVar23[1],pfVar23[4] - pfVar23[1],uVar9,in_XMM1_Da);
                  uVar21 = *(uint *)((long)pvVar29 + 0x18);
                  if (((Interpolate_Function_o *)(ulong)uVar21 <= pIVar11) ||
                     (pfVar23[1] = fVar36,
                     (Interpolate_Function_o *)(ulong)uVar21 <=
                     (Interpolate_Function_o *)((long)&pIVar11->klass + 1))) goto label_0406090f;
                  pvVar30 = pSVar33[2].monitor;
                  pSVar27 = (System_Collections_IList_o *)pSVar33[4].klass;
                  fVar36 = (float)(*pSVar33[1].monitor)(pfVar23[2],pfVar23[5] - pfVar23[2],uVar9,in_XMM1_Da);
                  pIVar16 = (Interpolate_Function_o *)(ulong)*(uint *)((long)pvVar29 + 0x18);
                  if (pIVar16 <= pIVar11) goto label_0406090f;
                  pfVar23[2] = fVar36;
                  pfVar23 = pfVar23 + 3;
                  pIVar11 = (Interpolate_Function_o *)((long)&pIVar11->klass + 1);
                } while (pIVar11 != pIVar32);
                pIVar32 = (Interpolate_Function_o *)((long)&pIVar32[-1].fields.delegates + 7);
              } while (0 < (int)pIVar32);
            }
            if ((int)pIVar16 != 0) {
              return pIVar16;
            }
label_0406090f:
            il2cpp_runtime_helper_022b2ca0();
          }
label_04060914:
          iVar8 = (int32_t)pvVar30;
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac2a2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
            g_data_057ac2a2 = '\x01';
          }
          pIVar20 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
          Interpolate_ToVector3_object____ctor();
          pIVar16 = (Interpolate_Function_o *)
                    Interpolate__NewCatmullRom_object_
                              (pSVar27,pIVar20,iVar8,extraout_EDX_01 & 0xff,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
          return pIVar16;
        }
        *(undefined4 *)&pIVar19[2].klass = 0;
        *(int *)&pIVar19[3].klass = extraout_EDX_00 + 1;
        *(undefined4 *)&pIVar19[2].monitor = 1;
        pIVar20 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3_Vector3____ctor();
        fVar36 = (float)(extraout_EDX_00 + 1);
        ppIVar24 = (Il2CppObject **)&uStack_b8;
        pIVar22 = (Il2CppObject *)0x0;
      }
      else {
        *(float *)&pIVar19[2].klass = uStack_b8._4_4_;
        pIVar20 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3_Vector3____ctor();
        ppIVar24 = &pIStack_90;
        pIVar22 = pIStack_b0;
        pSVar28 = pSVar27;
        pIVar32 = pIVar16;
        uVar35 = uStack_a8;
        pSVar27 = pSStack_a0;
        pIVar16 = pIStack_98;
        fVar36 = uStack_b8._4_4_;
      }
      lVar15 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
      *(ulong *)((long)ppIVar24 + -8) = CONCAT71((int7)((ulong)unaff_RBP >> 8),cVar2);
      *(Interpolate_Function_o **)((long)ppIVar24 + -0x10) = pIVar16;
      *(System_Collections_IList_o **)((long)ppIVar24 + -0x18) = pSVar27;
      *(undefined8 *)((long)ppIVar24 + -0x20) = unaff_R13;
      *(ulong *)((long)ppIVar24 + -0x28) = uVar35;
      *(Il2CppObject **)((long)ppIVar24 + -0x30) = pIVar22;
      *(long **)((long)ppIVar24 + -0x38) = &MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
      *(float *)((long)ppIVar24 + -0x34) = fVar36;
      pIVar22 = pIVar19;
      lVar18 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
      if (*(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar24 + -0x40) = 0x2664b7f;
        il2cpp_runtime_helper_02300a20(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
        lVar10 = **(long **)(lVar15 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar24 + -0x40) = 0x2664aee;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar24 + -0x40) = 0x2664af6;
      pIVar11 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(lVar10);
      method_00 = *(MethodInfo_2F63D60 **)(*(long *)(lVar15 + 0x38) + 8);
      iVar25 = 0xfffffffe;
      *(undefined8 *)((long)ppIVar24 + -0x40) = 0x2664b0e;
      pIVar16 = pIVar11;
      Interpolate__NewBezier_d__16_Vector3____ctor((Interpolate__NewBezier_d__16_T__o *)pIVar11,-2,method_00);
      if (pIVar11 != (Interpolate_Function_o *)0x0) {
        ((Interpolate__NewBezier_d__16_T__Fields *)&pIVar11->fields)->__3__ease = pIVar32;
        *(undefined8 *)((long)ppIVar24 + -0x40) = 0x2664b27;
        il2cpp_runtime_helper_022b4080(&((Interpolate__NewBezier_d__16_T__Fields *)&pIVar11->fields)->__3__ease,pIVar32);
        ((Interpolate__NewBezier_d__16_T__Fields *)&pIVar11->fields)->__3__nodes = pSVar28;
        *(undefined8 *)((long)ppIVar24 + -0x40) = 0x2664b37;
        il2cpp_runtime_helper_022b4080(&((Interpolate__NewBezier_d__16_T__Fields *)&pIVar11->fields)->__3__nodes,pSVar28);
        ((Interpolate__NewBezier_d__16_T__Fields *)&pIVar11->fields)->__3__toVector3 = pIVar20;
        *(undefined8 *)((long)ppIVar24 + -0x40) = 0x2664b47;
        il2cpp_runtime_helper_022b4080(&((Interpolate__NewBezier_d__16_T__Fields *)&pIVar11->fields)->__3__toVector3,
                           pIVar20);
        ((Interpolate__NewBezier_d__16_T__Fields *)&pIVar11->fields)->__3__maxStep =
             *(float *)((long)ppIVar24 + -0x34);
        ((Interpolate__NewBezier_d__16_T__Fields *)&pIVar11->fields)->__3__steps =
             (System_Collections_Generic_IEnumerable_float__o *)pIVar19;
        *(undefined8 *)((long)ppIVar24 + -0x40) = 0x2664b65;
        il2cpp_runtime_helper_022b4080(&((Interpolate__NewBezier_d__16_T__Fields *)&pIVar11->fields)->__3__steps,pIVar19);
        return pIVar11;
      }
      *(undefined8 *)((long)ppIVar24 + -0x40) = 0x2664b9d;
      uVar12 = il2cpp_runtime_helper_022b2c90();
      *(long *)((long)ppIVar24 + -0x40) = lVar15;
      *(Interpolate_ToVector3_T__o **)((long)ppIVar24 + -0x48) = pIVar20;
      *(Il2CppObject **)((long)ppIVar24 + -0x50) = pIVar19;
      *(Interpolate_Function_o **)((long)ppIVar24 + -0x58) = pIVar32;
      *(System_Collections_IList_o **)((long)ppIVar24 + -0x60) = pSVar28;
      *(undefined8 *)((long)ppIVar24 + -0x68) = 0;
      *(undefined8 *)((long)ppIVar24 + -0x70) = uVar12;
      *(undefined4 *)((long)ppIVar24 + -0x6c) = extraout_XMM0_Da;
      pIVar19 = pIVar22;
      lVar15 = lVar18;
      if (*(long **)(lVar18 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar24 + -0x78) = 0x2664c6c;
        il2cpp_runtime_helper_02300a20(lVar18);
        lVar10 = **(long **)(lVar18 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(lVar18 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar24 + -0x78) = 0x2664bde;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar24 + -0x78) = 0x2664be6;
      pIVar11 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(lVar10);
      pIVar20 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
      vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8);
      *(undefined8 *)((long)ppIVar24 + -0x78) = 0x2664bfb;
      pIVar32 = pIVar11;
      (*vtableDispatch)();
      if (pIVar11 != (Interpolate_Function_o *)0x0) {
        (pIVar11->fields).original_method_info = (System_Reflection_MethodInfo_o *)pIVar16;
        *(undefined8 *)((long)ppIVar24 + -0x78) = 0x2664c14;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).original_method_info,pIVar16);
        (pIVar11->fields).delegate_trampoline = iVar25;
        *(undefined8 *)((long)ppIVar24 + -0x78) = 0x2664c24;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).delegate_trampoline,iVar25);
        (pIVar11->fields).interp_invoke_impl = extraout_RDX;
        *(undefined8 *)((long)ppIVar24 + -0x78) = 0x2664c34;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).interp_invoke_impl,extraout_RDX);
        *(undefined4 *)((long)&(pIVar11->fields).data + 4) = *(undefined4 *)((long)ppIVar24 + -0x6c);
        (pIVar11->fields).method_code = (intptr_t)pIVar22;
        *(undefined8 *)((long)ppIVar24 + -0x78) = 0x2664c52;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).method_code,pIVar22);
        return pIVar11;
      }
      *(undefined8 *)((long)ppIVar24 + -0x78) = 0x2664c8a;
      auVar37 = il2cpp_runtime_helper_022b2c90();
      *(long *)((long)ppIVar24 + -0x78) = lVar18;
      *(intptr_t *)((long)ppIVar24 + -0x80) = extraout_RDX;
      *(Il2CppObject **)((long)ppIVar24 + -0x88) = pIVar22;
      *(Interpolate_Function_o **)((long)ppIVar24 + -0x90) = pIVar16;
      *(intptr_t *)((long)ppIVar24 + -0x98) = iVar25;
      *(undefined8 *)((long)ppIVar24 + -0xa0) = 0;
      *(long *)((long)ppIVar24 + -0xa8) = auVar37._0_8_;
      uVar35 = (ulong)pIVar19 & 0xffffffff;
      lVar18 = lVar15;
      if (*(long **)(lVar15 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar24 + -0xb0) = 0x2664d2e;
        il2cpp_runtime_helper_02300a20(lVar15);
        lVar10 = **(long **)(lVar15 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(lVar15 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar24 + -0xb0) = 0x2664cc4;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar24 + -0xb0) = 0x2664ccc;
      pIVar11 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(lVar10);
      method_01 = *(MethodInfo_2F65260 **)(*(long *)(lVar15 + 0x38) + 8);
      pIVar26 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
      *(undefined8 *)((long)ppIVar24 + -0xb0) = 0x2664ce4;
      pIVar16 = pIVar11;
      Interpolate__NewCatmullRom_d__20_object____ctor
                ((Interpolate__NewCatmullRom_d__20_T__o *)pIVar11,-2,method_01);
      if (pIVar11 != (Interpolate_Function_o *)0x0) {
        (pIVar11->fields).delegate_trampoline = (intptr_t)pIVar32;
        *(undefined8 *)((long)ppIVar24 + -0xb0) = 0x2664cf9;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).delegate_trampoline,pIVar32);
        (pIVar11->fields).method_code = (intptr_t)pIVar20;
        *(undefined8 *)((long)ppIVar24 + -0xb0) = 0x2664d0c;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).method_code,pIVar20);
        *(int32_t *)&(pIVar11->fields).interp_invoke_impl = auVar37._8_4_;
        *(char *)((long)&(pIVar11->fields).interp_method + 1) = (char)uVar35;
        return pIVar11;
      }
      *(undefined8 *)((long)ppIVar24 + -0xb0) = 0x2664d45;
      auVar38 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppIVar24 + -0xb0) = 0;
      *(ulong *)((long)ppIVar24 + -0xb8) = auVar37._8_8_ & 0xffffffff;
      *(ulong *)((long)ppIVar24 + -0xc0) = uVar35;
      *(Interpolate_Function_o **)((long)ppIVar24 + -200) = pIVar32;
      *(Interpolate_ToVector3_T__o **)((long)ppIVar24 + -0xd0) = pIVar20;
      *(long *)((long)ppIVar24 + -0xd8) = lVar15;
      *(long *)((long)ppIVar24 + -0xe0) = auVar38._0_8_;
      uVar35 = (ulong)pIVar19 & 0xffffffff;
      lVar15 = lVar18;
      if (*(long **)(lVar18 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar24 + -0xe8) = 0x2664dee;
        il2cpp_runtime_helper_02300a20(lVar18);
        lVar10 = **(long **)(lVar18 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(lVar18 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar24 + -0xe8) = 0x2664d84;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar24 + -0xe8) = 0x2664d8c;
      pIVar11 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(lVar10);
      method_02 = *(MethodInfo_2F65BB0 **)(*(long *)(lVar18 + 0x38) + 8);
      iVar25 = 0xfffffffe;
      *(undefined8 *)((long)ppIVar24 + -0xe8) = 0x2664da4;
      pIVar32 = pIVar11;
      Interpolate__NewCatmullRom_d__20_Vector3____ctor
                ((Interpolate__NewCatmullRom_d__20_T__o *)pIVar11,-2,method_02);
      if (pIVar11 != (Interpolate_Function_o *)0x0) {
        (pIVar11->fields).delegate_trampoline = (intptr_t)pIVar16;
        *(undefined8 *)((long)ppIVar24 + -0xe8) = 0x2664db9;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).delegate_trampoline,pIVar16);
        (pIVar11->fields).method_code = (intptr_t)pIVar26;
        *(undefined8 *)((long)ppIVar24 + -0xe8) = 0x2664dcc;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).method_code,pIVar26);
        *(int32_t *)&(pIVar11->fields).interp_invoke_impl = auVar38._8_4_;
        *(char *)((long)&(pIVar11->fields).interp_method + 1) = (char)uVar35;
        return pIVar11;
      }
      *(undefined8 *)((long)ppIVar24 + -0xe8) = 0x2664e05;
      auVar37 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppIVar24 + -0xe8) = 0;
      *(ulong *)((long)ppIVar24 + -0xf0) = auVar38._8_8_ & 0xffffffff;
      *(ulong *)((long)ppIVar24 + -0xf8) = uVar35;
      *(Interpolate_Function_o **)((long)ppIVar24 + -0x100) = pIVar16;
      *(Interpolate_ToVector3_T__o **)((long)ppIVar24 + -0x108) = pIVar26;
      *(long *)((long)ppIVar24 + -0x110) = lVar18;
      *(long *)((long)ppIVar24 + -0x118) = auVar37._0_8_;
      uVar35 = (ulong)pIVar19 & 0xffffffff;
      lVar18 = lVar15;
      if (*(long **)(lVar15 + 0x38) == (long *)0x0) {
        *(undefined8 *)((long)ppIVar24 + -0x120) = 0x2664eab;
        il2cpp_runtime_helper_02300a20(lVar15);
        lVar10 = **(long **)(lVar15 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = **(long **)(lVar15 + 0x38);
        bVar1 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)ppIVar24 + -0x120) = 0x2664e44;
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppIVar24 + -0x120) = 0x2664e4c;
      pIVar11 = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(lVar10);
      plVar17 = (long *)&g_data_fffffffe;
      vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 8);
      *(undefined8 *)((long)ppIVar24 + -0x120) = 0x2664e61;
      pIVar16 = pIVar11;
      (*vtableDispatch)();
      if (pIVar11 != (Interpolate_Function_o *)0x0) {
        (pIVar11->fields).delegate_trampoline = (intptr_t)pIVar32;
        *(undefined8 *)((long)ppIVar24 + -0x120) = 0x2664e76;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).delegate_trampoline,pIVar32);
        (pIVar11->fields).method_code = iVar25;
        *(undefined8 *)((long)ppIVar24 + -0x120) = 0x2664e89;
        il2cpp_runtime_helper_022b4080(&(pIVar11->fields).method_code,iVar25);
        *(int *)&(pIVar11->fields).interp_invoke_impl = auVar37._8_4_;
        *(char *)((long)&(pIVar11->fields).interp_method + 1) = (char)uVar35;
        return pIVar11;
      }
      *(undefined8 *)((long)ppIVar24 + -0x120) = 0x2664ec2;
      il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppIVar24 + -0x120) = 0;
      *(ulong *)((long)ppIVar24 + -0x128) = auVar37._8_8_ & 0xffffffff;
      *(ulong *)((long)ppIVar24 + -0x130) = uVar35;
      *(Interpolate_Function_o **)((long)ppIVar24 + -0x138) = pIVar32;
      *(intptr_t *)((long)ppIVar24 + -0x140) = iVar25;
      *(long *)((long)ppIVar24 + -0x148) = lVar15;
      *(undefined4 *)((long)ppIVar24 + -0x14c) = extraout_EDX;
      pSVar13 = *(System_RuntimeTypeHandle_Fields **)(lVar18 + 0x38);
      if (pSVar13 == (System_RuntimeTypeHandle_Fields *)0x0) {
        *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664f03;
        il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
        pSVar13 = *(System_RuntimeTypeHandle_Fields **)(lVar18 + 0x38);
        if (pSVar13 == (System_RuntimeTypeHandle_Fields *)0x0) {
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664f14;
          il2cpp_runtime_helper_02300a20(lVar18);
          pSVar13 = *(System_RuntimeTypeHandle_Fields **)(lVar18 + 0x38);
        }
      }
      SVar3.fields.value = (System_RuntimeTypeHandle_Fields)pSVar13->value;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664f37;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664f41;
      pSVar14 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
        *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664f5c;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664f69;
      bVar7 = Unity_VisualScripting_TypeUtility__IsAssignableFrom(pSVar14,pIVar19,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return (Interpolate_Function_o *)CONCAT44(extraout_var,bVar7);
      }
      *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664f88;
      uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664f95;
      lVar15 = il2cpp_runtime_helper_022b2a40(uVar12,4);
      *(long *)((long)ppIVar24 + -0x158) = lVar15;
      if (lVar15 != 0) goto label_02664fa4;
label_02664f9f:
      *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664fa4;
      il2cpp_runtime_helper_022b2c90();
label_02664fa4:
      lVar15 = (pIVar16->fields).method_ptr;
      if (lVar15 == 0) goto label_02664fd6;
      uVar12 = *(undefined8 *)(**(long **)((long)ppIVar24 + -0x158) + 0x40);
      *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664fc2;
      lVar10 = il2cpp_runtime_helper_023051f0(lVar15,uVar12);
      if (lVar10 != 0) goto label_02664fd6;
label_02664fc7:
      *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664fcc;
      uVar12 = il2cpp_runtime_helper_0231b270();
      *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664fd6;
      il2cpp_runtime_helper_022b2b10(uVar12,0);
label_02664fd6:
      if (*(int *)(*(long *)((long)ppIVar24 + -0x158) + 0x18) != 0) goto label_02664fe6;
      do {
        *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664fe6;
        il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
        lVar10 = *(long *)((long)ppIVar24 + -0x158);
        *(long *)(lVar10 + 0x20) = lVar15;
        *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2664ffb;
        il2cpp_runtime_helper_022b4080(lVar10 + 0x20,lVar15);
        if (plVar17 == (long *)0x0) goto label_02664f9f;
        uVar12 = *(undefined8 *)(*plVar17 + 0x1c0);
        vtableDispatch = *(code **)(*plVar17 + 0x1b8);
        *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665013;
        lVar15 = (*vtableDispatch)(plVar17,uVar12);
        if (lVar15 != 0) {
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x266502f;
          lVar10 = il2cpp_runtime_helper_023051f0(lVar15);
          if (lVar10 == 0) goto label_02664fc7;
        }
        if (1 < *(uint *)(*(long *)((long)ppIVar24 + -0x158) + 0x18)) {
          lVar10 = *(long *)((long)ppIVar24 + -0x158);
          *(long *)(lVar10 + 0x28) = lVar15;
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665057;
          il2cpp_runtime_helper_022b4080(lVar10 + 0x28);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665063;
          pIVar16 = (Interpolate_Function_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
          if (pIVar19 != (Il2CppObject *)0x0) {
            *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665075;
            pSVar14 = System_Object__GetType(pIVar19,(MethodInfo *)0x0);
            if (pSVar14 == (System_Type_o *)0x0) goto label_02664f9f;
            pMVar4 = (pSVar14->klass->vtable)._3_ToString.method;
            pIVar5 = (pSVar14->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665091;
            lVar15 = (*pIVar5)(pSVar14,pMVar4);
            if (lVar15 != 0) goto label_026650a8;
          }
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x26650a5;
          lVar15 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
          args = *(System_Object_array **)((long)ppIVar24 + -0x158);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x26650b5;
          il2cpp_runtime_helper_01f681a0(args);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x26650c0;
          il2cpp_runtime_helper_01f6def0(args,lVar15);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x26650d0;
          il2cpp_runtime_helper_01f6df20(args,2,lVar15);
          SVar3.fields.value =
               (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar18 + 0x38))->value;
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x26650e3;
          il2cpp_runtime_helper_01f68090(g_data_057b9c50);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x26650ed;
          pSVar14 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x26650f8;
          il2cpp_runtime_helper_01f681a0(args);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665103;
          il2cpp_runtime_helper_01f6def0(args,pSVar14);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665113;
          il2cpp_runtime_helper_01f6df20(args,3,pSVar14);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665120;
          message = System_String__Format_3af7980((System_String_o *)pIVar16,args,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x266512b;
          il2cpp_runtime_helper_01f681a0(plVar17);
          uVar12 = *(undefined8 *)(*plVar17 + 0x240);
          vtableDispatch = *(code **)(*plVar17 + 0x238);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x266513e;
          uVar12 = (*vtableDispatch)(plVar17,uVar12);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665149;
          il2cpp_runtime_helper_01f681a0(uVar12);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665156;
          plVar17 = (long *)il2cpp_runtime_helper_01f6e290(uVar12,(long)*(int *)((long)ppIVar24 + -0x14c));
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665161;
          il2cpp_runtime_helper_01f681a0(plVar17);
          uVar12 = *(undefined8 *)(*plVar17 + 0x1e0);
          vtableDispatch = *(code **)(*plVar17 + 0x1d8);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665175;
          paramName = (System_String_o *)(*vtableDispatch)(plVar17,uVar12);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x2665184;
          uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x266518c;
          __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar12);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x266519f;
          System_ArgumentException___ctor_3c0adc0(__this,message,paramName,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppIVar24 + -0x168) = 0x26651aa;
          pSVar31 = __this;
          uVar12 = il2cpp_runtime_helper_022b2b10();
          *(undefined8 **)((long)ppIVar24 + -0x168) = &g_data_057b9b70;
          *(System_ArgumentException_o **)((long)ppIVar24 + -0x170) = __this;
          *(undefined8 *)((long)ppIVar24 + -0x178) = uVar12;
          if (*(long *)(lVar18 + 0x38) == 0) {
            *(undefined8 *)((long)ppIVar24 + -0x180) = 0x26651c9;
            il2cpp_runtime_helper_02300a20(lVar18);
          }
          pMVar4 = pSVar31->klass[2].vtable._10_get_Source.method;
          pIVar5 = pSVar31->klass[2].vtable._10_get_Source.methodPtr;
          *(undefined8 *)((long)ppIVar24 + -0x180) = 0x26651dc;
          auVar37 = (*pIVar5)(pSVar31,pMVar4);
          vtableDispatch = *(code **)**(undefined8 **)(lVar18 + 0x38);
          pIVar16 = (Interpolate_Function_o *)
                    (*vtableDispatch)
                              (auVar37._0_8_,(undefined8 *)**(undefined8 **)(lVar18 + 0x38),auVar37._8_8_,
                               vtableDispatch);
          return pIVar16;
        }
      } while( true );
    }
  }
  else if (cVar2 == '\x04') {
    *(undefined1 **)(lVar18 + 0x18) = &label_02233fb0;
    goto label_04060365;
  }
  *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)(lVar18 + 0x10);
  *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)(lVar18 + 0x20);
label_04060365:
  *(code **)(lVar18 + 0x38) = il2cpp_runtime_helper_02233f20;
  return (Interpolate_Function_o *)il2cpp_runtime_helper_02233f20;
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Transform_array* nodes, float duration, const MethodInfo* method);
// 0x40603a0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier
          (Interpolate_Function_o *ease,UnityEngine_Transform_array *nodes,float duration,MethodInfo *method)

{
  byte bVar1;
  MethodInfo_2F63D60 *method_00;
  code *vtableDispatch;
  MethodInfo_2F65260 *method_01;
  MethodInfo_2F65BB0 *method_02;
  System_RuntimeTypeHandle_o SVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  System_Object_array *args;
  bool_conflict bVar5;
  int32_t iVar6;
  undefined4 uVar7;
  long lVar8;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar9;
  undefined8 uVar10;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar11;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  System_String_o *pSVar12;
  System_RuntimeTypeHandle_Fields *pSVar13;
  System_Type_o *pSVar14;
  undefined4 extraout_var;
  long lVar15;
  System_String_o *pSVar16;
  System_ArgumentException_o *__this_00;
  Il2CppObject *pIVar17;
  Interpolate_ToVector3_T__o *pIVar18;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar19;
  Il2CppClass *pIVar20;
  Il2CppClass *pIVar21;
  uint uVar22;
  Il2CppClass *pIVar23;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  System_Collections_Generic_IEnumerable_Vector3__c *extraout_RDX;
  ulong extraout_RDX_00;
  float *pfVar24;
  Il2CppObject **ppIVar25;
  undefined8 unaff_RBP;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar26;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar27;
  long *plVar28;
  long lVar29;
  System_Collections_IList_o *pSVar30;
  System_Collections_IList_o *pSVar31;
  void *pvVar32;
  void *pvVar33;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar34;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar35;
  System_ArgumentException_o *pSVar36;
  Interpolate_Function_o *pIVar37;
  Interpolate_Function_o *pIVar38;
  System_Collections_IList_o *pSVar39;
  int iVar40;
  ulong uVar41;
  undefined8 unaff_R13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar42;
  undefined4 in_XMM1_Da;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uStack_78;
  Il2CppObject *pIStack_70;
  ulong uStack_68;
  System_Collections_IList_o *pSStack_60;
  Interpolate_Function_o *pIStack_58;
  Il2CppObject *pIStack_50;
  
  if (g_data_057ac29e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
    g_data_057ac29e = '\x01';
  }
  if (g_data_057ac29a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
    g_data_057ac29a = '\x01';
  }
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
  pSVar30 = (System_Collections_IList_o *)0x0;
  System_Object___ctor(pIVar17,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar17[1].klass = 0xfffffffe;
  pIVar37 = (Interpolate_Function_o *)0x0;
  iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar17[1].monitor = iVar6;
  if (pIVar17 != (Il2CppObject *)0x0) {
    *(float *)&pIVar17[2].klass = duration;
    pIVar18 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
    Interpolate_ToVector3_object____ctor();
    pSVar19 = Interpolate__NewBezier_object_
                        (ease,(System_Collections_IList_o *)nodes,pIVar18,duration,
                         (System_Collections_Generic_IEnumerable_float__o *)pIVar17,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
    return pSVar19;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar41 = extraout_RDX_00 & 0xffffffff;
  pIStack_50 = pIVar17;
  if (g_data_057ac29f == '\0') {
    pIStack_58 = (Interpolate_Function_o *)0x40604c6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
    pIStack_58 = (Interpolate_Function_o *)0x40604d2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
    pIStack_58 = (Interpolate_Function_o *)0x40604de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
    g_data_057ac29f = '\x01';
  }
  if (g_data_057ac29b == '\0') {
    pIStack_58 = (Interpolate_Function_o *)0x40604fa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
    g_data_057ac29b = '\x01';
  }
  pIStack_58 = (Interpolate_Function_o *)0x4060510;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
  pSVar31 = (System_Collections_IList_o *)0x0;
  pIStack_58 = (Interpolate_Function_o *)0x406051d;
  System_Object___ctor(pIVar17,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar17[1].klass = 0xfffffffe;
  pIVar38 = (Interpolate_Function_o *)0x0;
  pIStack_58 = (Interpolate_Function_o *)0x406052b;
  iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar17[1].monitor = iVar6;
  if (pIVar17 != (Il2CppObject *)0x0) {
    iVar40 = (int)extraout_RDX_00 + 1;
    *(undefined4 *)&pIVar17[2].klass = 0;
    *(int *)&pIVar17[3].klass = iVar40;
    *(undefined4 *)&pIVar17[2].monitor = 1;
    pIStack_58 = (Interpolate_Function_o *)0x4060558;
    pIVar18 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
    pIStack_58 = (Interpolate_Function_o *)0x4060571;
    Interpolate_ToVector3_object____ctor();
    pSVar19 = Interpolate__NewBezier_object_
                        (pIVar37,pSVar30,pIVar18,(float)iVar40,
                         (System_Collections_Generic_IEnumerable_float__o *)pIVar17,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
    return pSVar19;
  }
  pIStack_58 = (Interpolate_Function_o *)0x406059e;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  uStack_78 = CONCAT44(extraout_XMM0_Da_00,uVar7);
  pIStack_70 = pIVar17;
  uStack_68 = uVar41;
  pSStack_60 = pSVar30;
  pIStack_58 = pIVar37;
  if (g_data_057ac2a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
    g_data_057ac2a0 = '\x01';
  }
  if (g_data_057ac29a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
    g_data_057ac29a = '\x01';
  }
  pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
  pSVar30 = (System_Collections_IList_o *)0x0;
  System_Object___ctor((Il2CppObject *)pIVar20,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar20->_1).name = 0xfffffffe;
  pIVar37 = (Interpolate_Function_o *)0x0;
  iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&(pIVar20->_1).namespaze = iVar6;
  if (pIVar20 == (Il2CppClass *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac2a1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
      il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
      g_data_057ac2a1 = '\x01';
    }
    if (g_data_057ac29b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
      g_data_057ac29b = '\x01';
    }
    pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
    pvVar32 = (void *)0x0;
    System_Object___ctor((Il2CppObject *)pIVar20,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar20->_1).name = 0xfffffffe;
    pSVar39 = (System_Collections_IList_o *)0x0;
    iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&(pIVar20->_1).namespaze = iVar6;
    if (pIVar20 == (Il2CppClass *)0x0) {
      uVar7 = il2cpp_runtime_helper_022b2c90();
      pvVar33 = pvVar32;
      pSVar30 = pSVar39;
      if (pvVar32 != (void *)0x0) {
        pSVar19 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*(ulong *)((long)pvVar32 + 0x18) & 0xffffffff);
        uVar22 = (int)*(ulong *)((long)pvVar32 + 0x18) - 1;
        if (0 < (int)uVar22) {
          pSVar11 = (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22;
          do {
            if (pSVar39 == (System_Collections_IList_o *)0x0) {
              if (((int)pSVar19 == 0) || ((int)pSVar19 == 1)) goto label_0406090f;
              goto label_04060914;
            }
            pSVar26 = (System_Collections_Generic_IEnumerable_Vector3__o *)0x0;
            pfVar24 = (float *)((long)pvVar32 + 0x20);
            do {
              if ((pSVar19 <= pSVar26) ||
                 (pSVar19 <= (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar26->klass + 1))
                 ) goto label_0406090f;
              pvVar33 = pSVar39[2].monitor;
              pSVar30 = (System_Collections_IList_o *)pSVar39[4].klass;
              fVar42 = (float)(*pSVar39[1].monitor)(*pfVar24,pfVar24[3] - *pfVar24,uVar7,in_XMM1_Da);
              uVar22 = *(uint *)((long)pvVar32 + 0x18);
              if (((System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22 <= pSVar26) ||
                 (*pfVar24 = fVar42,
                 (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22 <=
                 (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar26->klass + 1)))
              goto label_0406090f;
              pvVar33 = pSVar39[2].monitor;
              pSVar30 = (System_Collections_IList_o *)pSVar39[4].klass;
              fVar42 = (float)(*pSVar39[1].monitor)(pfVar24[1],pfVar24[4] - pfVar24[1],uVar7,in_XMM1_Da);
              uVar22 = *(uint *)((long)pvVar32 + 0x18);
              if (((System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22 <= pSVar26) ||
                 (pfVar24[1] = fVar42,
                 (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22 <=
                 (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar26->klass + 1)))
              goto label_0406090f;
              pvVar33 = pSVar39[2].monitor;
              pSVar30 = (System_Collections_IList_o *)pSVar39[4].klass;
              fVar42 = (float)(*pSVar39[1].monitor)(pfVar24[2],pfVar24[5] - pfVar24[2],uVar7,in_XMM1_Da);
              pSVar19 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                        (ulong)*(uint *)((long)pvVar32 + 0x18);
              if (pSVar19 <= pSVar26) goto label_0406090f;
              pfVar24[2] = fVar42;
              pfVar24 = pfVar24 + 3;
              pSVar26 = (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar26->klass + 1);
            } while (pSVar26 != pSVar11);
            pSVar11 = (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar11[-1].monitor + 7);
          } while (0 < (int)pSVar11);
        }
        if ((int)pSVar19 != 0) {
          return pSVar19;
        }
label_0406090f:
        il2cpp_runtime_helper_022b2ca0();
      }
label_04060914:
      iVar6 = (int32_t)pvVar33;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2a2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
        g_data_057ac2a2 = '\x01';
      }
      pIVar18 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
      Interpolate_ToVector3_object____ctor();
      pSVar19 = Interpolate__NewCatmullRom_object_(pSVar30,pIVar18,iVar6,extraout_EDX_01 & 0xff,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
      return pSVar19;
    }
    *(undefined4 *)&(pIVar20->_1).byval_arg.data = 0;
    *(int *)&(pIVar20->_1).this_arg.data = extraout_EDX_00 + 1;
    (pIVar20->_1).byval_arg.bits = 1;
    pIVar21 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
    Interpolate_ToVector3_Vector3____ctor();
    fVar42 = (float)(extraout_EDX_00 + 1);
    ppIVar25 = (Il2CppObject **)&uStack_78;
    pIVar17 = (Il2CppObject *)0x0;
  }
  else {
    *(float *)&(pIVar20->_1).byval_arg.data = uStack_78._4_4_;
    pIVar21 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
    Interpolate_ToVector3_Vector3____ctor();
    ppIVar25 = &pIStack_50;
    pIVar17 = pIStack_70;
    pSVar30 = pSVar31;
    pIVar37 = pIVar38;
    uVar41 = uStack_68;
    pSVar31 = pSStack_60;
    pIVar38 = pIStack_58;
    fVar42 = uStack_78._4_4_;
  }
  lVar15 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
  *(undefined8 *)((long)ppIVar25 + -8) = unaff_RBP;
  *(Interpolate_Function_o **)((long)ppIVar25 + -0x10) = pIVar38;
  *(System_Collections_IList_o **)((long)ppIVar25 + -0x18) = pSVar31;
  *(undefined8 *)((long)ppIVar25 + -0x20) = unaff_R13;
  *(ulong *)((long)ppIVar25 + -0x28) = uVar41;
  *(Il2CppObject **)((long)ppIVar25 + -0x30) = pIVar17;
  *(long **)((long)ppIVar25 + -0x38) = &MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
  *(float *)((long)ppIVar25 + -0x34) = fVar42;
  pIVar23 = pIVar20;
  lVar29 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
  if (*(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)ppIVar25 + -0x40) = 0x2664b7f;
    il2cpp_runtime_helper_02300a20(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)ppIVar25 + -0x40) = 0x2664aee;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)ppIVar25 + -0x40) = 0x2664af6;
  pSVar9 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(lVar8);
  method_00 = *(MethodInfo_2F63D60 **)(*(long *)(lVar15 + 0x38) + 8);
  pSVar27 = (System_Collections_Generic_IEnumerable_Vector3__c *)0xfffffffe;
  *(undefined8 *)((long)ppIVar25 + -0x40) = 0x2664b0e;
  pSVar34 = pSVar9;
  Interpolate__NewBezier_d__16_Vector3____ctor((Interpolate__NewBezier_d__16_T__o *)pSVar9,-2,method_00);
  if (pSVar9 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar9->_1).generic_class = pIVar37;
    *(undefined8 *)((long)ppIVar25 + -0x40) = 0x2664b27;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).generic_class,pIVar37);
    (pSVar9->_1).this_arg.data = pSVar30;
    *(undefined8 *)((long)ppIVar25 + -0x40) = 0x2664b37;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).this_arg,pSVar30);
    (pSVar9->_1).declaringType = pIVar21;
    *(undefined8 *)((long)ppIVar25 + -0x40) = 0x2664b47;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).declaringType,pIVar21);
    *(float *)((long)&(pSVar9->_1).typeMetadataHandle + 4) = *(float *)((long)ppIVar25 + -0x34);
    (pSVar9->_1).element_class = pIVar20;
    *(undefined8 *)((long)ppIVar25 + -0x40) = 0x2664b65;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).element_class,pIVar20);
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar9;
  }
  *(undefined8 *)((long)ppIVar25 + -0x40) = 0x2664b9d;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppIVar25 + -0x40) = lVar15;
  *(Il2CppClass **)((long)ppIVar25 + -0x48) = pIVar21;
  *(Il2CppClass **)((long)ppIVar25 + -0x50) = pIVar20;
  *(Interpolate_Function_o **)((long)ppIVar25 + -0x58) = pIVar37;
  *(System_Collections_IList_o **)((long)ppIVar25 + -0x60) = pSVar30;
  *(undefined8 *)((long)ppIVar25 + -0x68) = 0;
  *(undefined8 *)((long)ppIVar25 + -0x70) = uVar10;
  *(undefined4 *)((long)ppIVar25 + -0x6c) = extraout_XMM0_Da;
  pIVar20 = pIVar23;
  lVar15 = lVar29;
  if (*(long **)(lVar29 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)ppIVar25 + -0x78) = 0x2664c6c;
    il2cpp_runtime_helper_02300a20(lVar29);
    lVar8 = **(long **)(lVar29 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(lVar29 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)ppIVar25 + -0x78) = 0x2664bde;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)ppIVar25 + -0x78) = 0x2664be6;
  pSVar11 = (System_Collections_Generic_IEnumerable_Vector3__o *)il2cpp_runtime_helper_023052d0(lVar8);
  pIVar18 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
  vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar29 + 0x38) + 8);
  *(undefined8 *)((long)ppIVar25 + -0x78) = 0x2664bfb;
  pSVar19 = pSVar11;
  (*vtableDispatch)();
  if (pSVar11 != (System_Collections_Generic_IEnumerable_Vector3__o *)0x0) {
    pSVar11[6].klass = pSVar34;
    *(undefined8 *)((long)ppIVar25 + -0x78) = 0x2664c14;
    il2cpp_runtime_helper_022b4080(pSVar11 + 6,pSVar34);
    pSVar11[3].klass = pSVar27;
    *(undefined8 *)((long)ppIVar25 + -0x78) = 0x2664c24;
    il2cpp_runtime_helper_022b4080(pSVar11 + 3,pSVar27);
    pSVar11[5].klass = extraout_RDX;
    *(undefined8 *)((long)ppIVar25 + -0x78) = 0x2664c34;
    il2cpp_runtime_helper_022b4080(pSVar11 + 5,extraout_RDX);
    *(undefined4 *)((long)&pSVar11[6].monitor + 4) = *(undefined4 *)((long)ppIVar25 + -0x6c);
    pSVar11[4].klass = (System_Collections_Generic_IEnumerable_Vector3__c *)pIVar23;
    *(undefined8 *)((long)ppIVar25 + -0x78) = 0x2664c52;
    il2cpp_runtime_helper_022b4080(pSVar11 + 4,pIVar23);
    return pSVar11;
  }
  *(undefined8 *)((long)ppIVar25 + -0x78) = 0x2664c8a;
  auVar43 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppIVar25 + -0x78) = lVar29;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)ppIVar25 + -0x80) = extraout_RDX;
  *(Il2CppClass **)((long)ppIVar25 + -0x88) = pIVar23;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)ppIVar25 + -0x90) = pSVar34;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)ppIVar25 + -0x98) = pSVar27;
  *(undefined8 *)((long)ppIVar25 + -0xa0) = 0;
  *(long *)((long)ppIVar25 + -0xa8) = auVar43._0_8_;
  uVar41 = (ulong)pIVar20 & 0xffffffff;
  lVar29 = lVar15;
  if (*(long **)(lVar15 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)ppIVar25 + -0xb0) = 0x2664d2e;
    il2cpp_runtime_helper_02300a20(lVar15);
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)ppIVar25 + -0xb0) = 0x2664cc4;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)ppIVar25 + -0xb0) = 0x2664ccc;
  __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(lVar8);
  method_01 = *(MethodInfo_2F65260 **)(*(long *)(lVar15 + 0x38) + 8);
  pIVar21 = (Il2CppClass *)&g_data_fffffffe;
  *(undefined8 *)((long)ppIVar25 + -0xb0) = 0x2664ce4;
  pIVar35 = __this;
  Interpolate__NewCatmullRom_d__20_object____ctor(__this,-2,method_01);
  if (__this != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    (__this->fields).__3__nodes = (System_Collections_IList_o *)pSVar19;
    *(undefined8 *)((long)ppIVar25 + -0xb0) = 0x2664cf9;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__nodes,pSVar19);
    (__this->fields).__3__toVector3 = pIVar18;
    *(undefined8 *)((long)ppIVar25 + -0xb0) = 0x2664d0c;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__toVector3,pIVar18);
    (__this->fields).slices = auVar43._8_4_;
    *(char *)((long)&(__this->fields).loop + 1) = (char)uVar41;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  *(undefined8 *)((long)ppIVar25 + -0xb0) = 0x2664d45;
  auVar44 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppIVar25 + -0xb0) = 0;
  *(ulong *)((long)ppIVar25 + -0xb8) = auVar43._8_8_ & 0xffffffff;
  *(ulong *)((long)ppIVar25 + -0xc0) = uVar41;
  *(System_Collections_Generic_IEnumerable_Vector3__o **)((long)ppIVar25 + -200) = pSVar19;
  *(Interpolate_ToVector3_T__o **)((long)ppIVar25 + -0xd0) = pIVar18;
  *(long *)((long)ppIVar25 + -0xd8) = lVar15;
  *(long *)((long)ppIVar25 + -0xe0) = auVar44._0_8_;
  uVar41 = (ulong)pIVar20 & 0xffffffff;
  lVar15 = lVar29;
  if (*(long **)(lVar29 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)ppIVar25 + -0xe8) = 0x2664dee;
    il2cpp_runtime_helper_02300a20(lVar29);
    lVar8 = **(long **)(lVar29 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(lVar29 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)ppIVar25 + -0xe8) = 0x2664d84;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)ppIVar25 + -0xe8) = 0x2664d8c;
  pSVar9 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(lVar8);
  method_02 = *(MethodInfo_2F65BB0 **)(*(long *)(lVar29 + 0x38) + 8);
  uVar10 = 0xfffffffe;
  *(undefined8 *)((long)ppIVar25 + -0xe8) = 0x2664da4;
  pSVar34 = pSVar9;
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            ((Interpolate__NewCatmullRom_d__20_T__o *)pSVar9,-2,method_02);
  if (pSVar9 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar9->_1).this_arg.data = pIVar35;
    *(undefined8 *)((long)ppIVar25 + -0xe8) = 0x2664db9;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).this_arg,pIVar35);
    (pSVar9->_1).element_class = pIVar21;
    *(undefined8 *)((long)ppIVar25 + -0xe8) = 0x2664dcc;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).element_class,pIVar21);
    *(int32_t *)&(pSVar9->_1).declaringType = auVar44._8_4_;
    *(char *)((long)&(pSVar9->_1).castClass + 1) = (char)uVar41;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar9;
  }
  *(undefined8 *)((long)ppIVar25 + -0xe8) = 0x2664e05;
  auVar43 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppIVar25 + -0xe8) = 0;
  *(ulong *)((long)ppIVar25 + -0xf0) = auVar44._8_8_ & 0xffffffff;
  *(ulong *)((long)ppIVar25 + -0xf8) = uVar41;
  *(Interpolate__NewCatmullRom_d__20_T__o **)((long)ppIVar25 + -0x100) = pIVar35;
  *(Il2CppClass **)((long)ppIVar25 + -0x108) = pIVar21;
  *(long *)((long)ppIVar25 + -0x110) = lVar29;
  *(long *)((long)ppIVar25 + -0x118) = auVar43._0_8_;
  uVar41 = (ulong)pIVar20 & 0xffffffff;
  lVar29 = lVar15;
  if (*(long **)(lVar15 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)ppIVar25 + -0x120) = 0x2664eab;
    il2cpp_runtime_helper_02300a20(lVar15);
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)ppIVar25 + -0x120) = 0x2664e44;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)ppIVar25 + -0x120) = 0x2664e4c;
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar8);
  plVar28 = (long *)&g_data_fffffffe;
  vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 8);
  *(undefined8 *)((long)ppIVar25 + -0x120) = 0x2664e61;
  pSVar16 = pSVar12;
  (*vtableDispatch)();
  if (pSVar12 != (System_String_o *)0x0) {
    pSVar12[2].klass = (System_String_c *)pSVar34;
    *(undefined8 *)((long)ppIVar25 + -0x120) = 0x2664e76;
    il2cpp_runtime_helper_022b4080(pSVar12 + 2,pSVar34);
    pSVar12[2].fields._stringLength = (int)uVar10;
    pSVar12[2].fields._firstChar = (short)((ulong)uVar10 >> 0x20);
    *(short *)&pSVar12[2].fields.field_0x6 = (short)((ulong)uVar10 >> 0x30);
    *(undefined8 *)((long)ppIVar25 + -0x120) = 0x2664e89;
    il2cpp_runtime_helper_022b4080(&pSVar12[2].fields,uVar10);
    *(int *)&pSVar12[3].monitor = auVar43._8_4_;
    *(char *)((long)&pSVar12[3].klass + 1) = (char)uVar41;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar12;
  }
  *(undefined8 *)((long)ppIVar25 + -0x120) = 0x2664ec2;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppIVar25 + -0x120) = 0;
  *(ulong *)((long)ppIVar25 + -0x128) = auVar43._8_8_ & 0xffffffff;
  *(ulong *)((long)ppIVar25 + -0x130) = uVar41;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)ppIVar25 + -0x138) = pSVar34;
  *(undefined8 *)((long)ppIVar25 + -0x140) = uVar10;
  *(long *)((long)ppIVar25 + -0x148) = lVar15;
  *(undefined4 *)((long)ppIVar25 + -0x14c) = extraout_EDX;
  pSVar13 = *(System_RuntimeTypeHandle_Fields **)(lVar29 + 0x38);
  if (pSVar13 == (System_RuntimeTypeHandle_Fields *)0x0) {
    *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664f03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pSVar13 = *(System_RuntimeTypeHandle_Fields **)(lVar29 + 0x38);
    if (pSVar13 == (System_RuntimeTypeHandle_Fields *)0x0) {
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664f14;
      il2cpp_runtime_helper_02300a20(lVar29);
      pSVar13 = *(System_RuntimeTypeHandle_Fields **)(lVar29 + 0x38);
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pSVar13->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664f37;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664f41;
  pSVar14 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664f5c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664f69;
  bVar5 = Unity_VisualScripting_TypeUtility__IsAssignableFrom
                    (pSVar14,(Il2CppObject *)pIVar20,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar5);
  }
  *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664f88;
  uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664f95;
  lVar15 = il2cpp_runtime_helper_022b2a40(uVar10,4);
  *(long *)((long)ppIVar25 + -0x158) = lVar15;
  if (lVar15 != 0) goto label_02664fa4;
label_02664f9f:
  *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664fa4;
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  lVar15._0_4_ = (pSVar16->fields)._stringLength;
  lVar15._4_2_ = (pSVar16->fields)._firstChar;
  lVar15._6_2_ = *(undefined2 *)&(pSVar16->fields).field_0x6;
  if (lVar15 == 0) goto label_02664fd6;
  uVar10 = *(undefined8 *)(**(long **)((long)ppIVar25 + -0x158) + 0x40);
  *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664fc2;
  lVar8 = il2cpp_runtime_helper_023051f0(lVar15,uVar10);
  if (lVar8 != 0) goto label_02664fd6;
label_02664fc7:
  *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664fcc;
  uVar10 = il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664fd6;
  il2cpp_runtime_helper_022b2b10(uVar10,0);
label_02664fd6:
  if (*(int *)(*(long *)((long)ppIVar25 + -0x158) + 0x18) != 0) goto label_02664fe6;
  do {
    *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664fe6;
    il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
    lVar8 = *(long *)((long)ppIVar25 + -0x158);
    *(long *)(lVar8 + 0x20) = lVar15;
    *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2664ffb;
    il2cpp_runtime_helper_022b4080(lVar8 + 0x20,lVar15);
    if (plVar28 == (long *)0x0) goto label_02664f9f;
    uVar10 = *(undefined8 *)(*plVar28 + 0x1c0);
    vtableDispatch = *(code **)(*plVar28 + 0x1b8);
    *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665013;
    lVar15 = (*vtableDispatch)(plVar28,uVar10);
    if (lVar15 != 0) {
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x266502f;
      lVar8 = il2cpp_runtime_helper_023051f0(lVar15);
      if (lVar8 == 0) goto label_02664fc7;
    }
    if (1 < *(uint *)(*(long *)((long)ppIVar25 + -0x158) + 0x18)) {
      lVar8 = *(long *)((long)ppIVar25 + -0x158);
      *(long *)(lVar8 + 0x28) = lVar15;
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665057;
      il2cpp_runtime_helper_022b4080(lVar8 + 0x28);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665063;
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
      if (pIVar20 != (Il2CppClass *)0x0) {
        *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665075;
        pSVar14 = System_Object__GetType((Il2CppObject *)pIVar20,(MethodInfo *)0x0);
        if (pSVar14 == (System_Type_o *)0x0) goto label_02664f9f;
        pMVar3 = (pSVar14->klass->vtable)._3_ToString.method;
        pIVar4 = (pSVar14->klass->vtable)._3_ToString.methodPtr;
        *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665091;
        lVar15 = (*pIVar4)(pSVar14,pMVar3);
        if (lVar15 != 0) goto label_026650a8;
      }
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x26650a5;
      lVar15 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
      args = *(System_Object_array **)((long)ppIVar25 + -0x158);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x26650b5;
      il2cpp_runtime_helper_01f681a0(args);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x26650c0;
      il2cpp_runtime_helper_01f6def0(args,lVar15);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x26650d0;
      il2cpp_runtime_helper_01f6df20(args,2,lVar15);
      SVar2.fields.value =
           (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar29 + 0x38))->value;
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x26650e3;
      il2cpp_runtime_helper_01f68090(g_data_057b9c50);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x26650ed;
      pSVar14 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x26650f8;
      il2cpp_runtime_helper_01f681a0(args);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665103;
      il2cpp_runtime_helper_01f6def0(args,pSVar14);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665113;
      il2cpp_runtime_helper_01f6df20(args,3,pSVar14);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665120;
      pSVar16 = System_String__Format_3af7980(pSVar16,args,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x266512b;
      il2cpp_runtime_helper_01f681a0(plVar28);
      uVar10 = *(undefined8 *)(*plVar28 + 0x240);
      vtableDispatch = *(code **)(*plVar28 + 0x238);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x266513e;
      uVar10 = (*vtableDispatch)(plVar28,uVar10);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665149;
      il2cpp_runtime_helper_01f681a0(uVar10);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665156;
      plVar28 = (long *)il2cpp_runtime_helper_01f6e290(uVar10,(long)*(int *)((long)ppIVar25 + -0x14c));
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665161;
      il2cpp_runtime_helper_01f681a0(plVar28);
      uVar10 = *(undefined8 *)(*plVar28 + 0x1e0);
      vtableDispatch = *(code **)(*plVar28 + 0x1d8);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665175;
      pSVar12 = (System_String_o *)(*vtableDispatch)(plVar28,uVar10);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x2665184;
      uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x266518c;
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x266519f;
      System_ArgumentException___ctor_3c0adc0(__this_00,pSVar16,pSVar12,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppIVar25 + -0x168) = 0x26651aa;
      pSVar36 = __this_00;
      uVar10 = il2cpp_runtime_helper_022b2b10();
      *(undefined8 **)((long)ppIVar25 + -0x168) = &g_data_057b9b70;
      *(System_ArgumentException_o **)((long)ppIVar25 + -0x170) = __this_00;
      *(undefined8 *)((long)ppIVar25 + -0x178) = uVar10;
      if (*(long *)(lVar29 + 0x38) == 0) {
        *(undefined8 *)((long)ppIVar25 + -0x180) = 0x26651c9;
        il2cpp_runtime_helper_02300a20(lVar29);
      }
      pMVar3 = pSVar36->klass[2].vtable._10_get_Source.method;
      pIVar4 = pSVar36->klass[2].vtable._10_get_Source.methodPtr;
      *(undefined8 *)((long)ppIVar25 + -0x180) = 0x26651dc;
      auVar43 = (*pIVar4)(pSVar36,pMVar3);
      vtableDispatch = *(code **)**(undefined8 **)(lVar29 + 0x38);
      pSVar19 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                (*vtableDispatch)
                          (auVar43._0_8_,(undefined8 *)**(undefined8 **)(lVar29 + 0x38),auVar43._8_8_,
                           vtableDispatch);
      return pSVar19;
    }
  } while( true );
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Transform_array* nodes, int32_t slices, const MethodInfo* method);
// 0x40604a0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_3f604a0
          (Interpolate_Function_o *ease,UnityEngine_Transform_array *nodes,int32_t slices,MethodInfo *method)

{
  byte bVar1;
  MethodInfo_2F63D60 *method_00;
  code *vtableDispatch;
  MethodInfo_2F65260 *method_01;
  MethodInfo_2F65BB0 *method_02;
  System_RuntimeTypeHandle_o SVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  System_Object_array *args;
  bool_conflict bVar5;
  int32_t iVar6;
  undefined4 uVar7;
  long lVar8;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar9;
  undefined8 uVar10;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar11;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  System_String_o *pSVar12;
  System_RuntimeTypeHandle_Fields *pSVar13;
  System_Type_o *pSVar14;
  undefined4 extraout_var;
  long lVar15;
  System_String_o *pSVar16;
  System_ArgumentException_o *__this_00;
  Il2CppObject *pIVar17;
  Interpolate_ToVector3_T__o *pIVar18;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar19;
  Il2CppClass *pIVar20;
  Il2CppClass *pIVar21;
  uint uVar22;
  Il2CppClass *pIVar23;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  System_Collections_Generic_IEnumerable_Vector3__c *extraout_RDX;
  float *pfVar24;
  undefined8 *puVar25;
  undefined8 unaff_RBP;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar26;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar27;
  long *plVar28;
  long lVar29;
  UnityEngine_Transform_array *pUVar30;
  UnityEngine_Transform_array *pUVar31;
  void *pvVar32;
  void *pvVar33;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar34;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar35;
  System_ArgumentException_o *pSVar36;
  Interpolate_Function_o *pIVar37;
  Interpolate_Function_o *pIVar38;
  System_Collections_IList_o *pSVar39;
  System_Collections_IList_o *nodes_00;
  ulong uVar40;
  undefined8 unaff_R13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar41;
  undefined4 in_XMM1_Da;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uStack_50;
  Il2CppObject *pIStack_48;
  ulong uStack_40;
  UnityEngine_Transform_array *pUStack_38;
  Interpolate_Function_o *pIStack_30;
  
  uVar40 = (ulong)(uint)slices;
  if (g_data_057ac29f == '\0') {
    pIStack_30 = (Interpolate_Function_o *)0x40604c6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
    pIStack_30 = (Interpolate_Function_o *)0x40604d2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
    pIStack_30 = (Interpolate_Function_o *)0x40604de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
    g_data_057ac29f = '\x01';
  }
  if (g_data_057ac29b == '\0') {
    pIStack_30 = (Interpolate_Function_o *)0x40604fa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
    g_data_057ac29b = '\x01';
  }
  pIStack_30 = (Interpolate_Function_o *)0x4060510;
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
  pUVar30 = (UnityEngine_Transform_array *)0x0;
  pIStack_30 = (Interpolate_Function_o *)0x406051d;
  System_Object___ctor(pIVar17,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar17[1].klass = 0xfffffffe;
  pIVar37 = (Interpolate_Function_o *)0x0;
  pIStack_30 = (Interpolate_Function_o *)0x406052b;
  iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar17[1].monitor = iVar6;
  if (pIVar17 != (Il2CppObject *)0x0) {
    *(undefined4 *)&pIVar17[2].klass = 0;
    *(int32_t *)&pIVar17[3].klass = slices + 1;
    *(undefined4 *)&pIVar17[2].monitor = 1;
    pIStack_30 = (Interpolate_Function_o *)0x4060558;
    pIVar18 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
    pIStack_30 = (Interpolate_Function_o *)0x4060571;
    Interpolate_ToVector3_object____ctor();
    pSVar19 = Interpolate__NewBezier_object_
                        (ease,(System_Collections_IList_o *)nodes,pIVar18,(float)(slices + 1),
                         (System_Collections_Generic_IEnumerable_float__o *)pIVar17,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Transform);
    return pSVar19;
  }
  pIStack_30 = (Interpolate_Function_o *)0x406059e;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  uStack_50 = CONCAT44(extraout_XMM0_Da_00,uVar7);
  pIStack_48 = pIVar17;
  uStack_40 = uVar40;
  pUStack_38 = nodes;
  pIStack_30 = ease;
  if (g_data_057ac2a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
    g_data_057ac2a0 = '\x01';
  }
  if (g_data_057ac29a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
    g_data_057ac29a = '\x01';
  }
  pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
  pUVar31 = (UnityEngine_Transform_array *)0x0;
  System_Object___ctor((Il2CppObject *)pIVar20,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar20->_1).name = 0xfffffffe;
  pIVar38 = (Interpolate_Function_o *)0x0;
  iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&(pIVar20->_1).namespaze = iVar6;
  if (pIVar20 == (Il2CppClass *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac2a1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
      il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
      g_data_057ac2a1 = '\x01';
    }
    if (g_data_057ac29b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
      g_data_057ac29b = '\x01';
    }
    pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
    pvVar32 = (void *)0x0;
    System_Object___ctor((Il2CppObject *)pIVar20,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar20->_1).name = 0xfffffffe;
    pSVar39 = (System_Collections_IList_o *)0x0;
    iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&(pIVar20->_1).namespaze = iVar6;
    if (pIVar20 == (Il2CppClass *)0x0) {
      uVar7 = il2cpp_runtime_helper_022b2c90();
      pvVar33 = pvVar32;
      nodes_00 = pSVar39;
      if (pvVar32 != (void *)0x0) {
        pSVar19 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*(ulong *)((long)pvVar32 + 0x18) & 0xffffffff);
        uVar22 = (int)*(ulong *)((long)pvVar32 + 0x18) - 1;
        if (0 < (int)uVar22) {
          pSVar11 = (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22;
          do {
            if (pSVar39 == (System_Collections_IList_o *)0x0) {
              if (((int)pSVar19 == 0) || ((int)pSVar19 == 1)) goto label_0406090f;
              goto label_04060914;
            }
            pSVar26 = (System_Collections_Generic_IEnumerable_Vector3__o *)0x0;
            pfVar24 = (float *)((long)pvVar32 + 0x20);
            do {
              if ((pSVar19 <= pSVar26) ||
                 (pSVar19 <= (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar26->klass + 1))
                 ) goto label_0406090f;
              pvVar33 = pSVar39[2].monitor;
              nodes_00 = (System_Collections_IList_o *)pSVar39[4].klass;
              fVar41 = (float)(*pSVar39[1].monitor)(*pfVar24,pfVar24[3] - *pfVar24,uVar7,in_XMM1_Da);
              uVar22 = *(uint *)((long)pvVar32 + 0x18);
              if (((System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22 <= pSVar26) ||
                 (*pfVar24 = fVar41,
                 (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22 <=
                 (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar26->klass + 1)))
              goto label_0406090f;
              pvVar33 = pSVar39[2].monitor;
              nodes_00 = (System_Collections_IList_o *)pSVar39[4].klass;
              fVar41 = (float)(*pSVar39[1].monitor)(pfVar24[1],pfVar24[4] - pfVar24[1],uVar7,in_XMM1_Da);
              uVar22 = *(uint *)((long)pvVar32 + 0x18);
              if (((System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22 <= pSVar26) ||
                 (pfVar24[1] = fVar41,
                 (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar22 <=
                 (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar26->klass + 1)))
              goto label_0406090f;
              pvVar33 = pSVar39[2].monitor;
              nodes_00 = (System_Collections_IList_o *)pSVar39[4].klass;
              fVar41 = (float)(*pSVar39[1].monitor)(pfVar24[2],pfVar24[5] - pfVar24[2],uVar7,in_XMM1_Da);
              pSVar19 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                        (ulong)*(uint *)((long)pvVar32 + 0x18);
              if (pSVar19 <= pSVar26) goto label_0406090f;
              pfVar24[2] = fVar41;
              pfVar24 = pfVar24 + 3;
              pSVar26 = (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar26->klass + 1);
            } while (pSVar26 != pSVar11);
            pSVar11 = (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar11[-1].monitor + 7);
          } while (0 < (int)pSVar11);
        }
        if ((int)pSVar19 != 0) {
          return pSVar19;
        }
label_0406090f:
        il2cpp_runtime_helper_022b2ca0();
      }
label_04060914:
      iVar6 = (int32_t)pvVar33;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2a2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
        g_data_057ac2a2 = '\x01';
      }
      pIVar18 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
      Interpolate_ToVector3_object____ctor();
      pSVar19 = Interpolate__NewCatmullRom_object_(nodes_00,pIVar18,iVar6,extraout_EDX_01 & 0xff,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor)
      ;
      return pSVar19;
    }
    *(undefined4 *)&(pIVar20->_1).byval_arg.data = 0;
    *(int *)&(pIVar20->_1).this_arg.data = extraout_EDX_00 + 1;
    (pIVar20->_1).byval_arg.bits = 1;
    pIVar21 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
    Interpolate_ToVector3_Vector3____ctor();
    fVar41 = (float)(extraout_EDX_00 + 1);
    puVar25 = &uStack_50;
    pIVar17 = (Il2CppObject *)0x0;
  }
  else {
    *(float *)&(pIVar20->_1).byval_arg.data = uStack_50._4_4_;
    pIVar21 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
    Interpolate_ToVector3_Vector3____ctor();
    puVar25 = (undefined8 *)&stack0xffffffffffffffd8;
    pIVar17 = pIStack_48;
    pUVar31 = pUVar30;
    pIVar38 = pIVar37;
    uVar40 = uStack_40;
    pUVar30 = pUStack_38;
    pIVar37 = pIStack_30;
    fVar41 = uStack_50._4_4_;
  }
  lVar15 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
  *(undefined8 *)((long)puVar25 + -8) = unaff_RBP;
  *(Interpolate_Function_o **)((long)puVar25 + -0x10) = pIVar37;
  *(UnityEngine_Transform_array **)((long)puVar25 + -0x18) = pUVar30;
  *(undefined8 *)((long)puVar25 + -0x20) = unaff_R13;
  *(ulong *)((long)puVar25 + -0x28) = uVar40;
  *(Il2CppObject **)((long)puVar25 + -0x30) = pIVar17;
  *(long **)((long)puVar25 + -0x38) = &MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
  *(float *)((long)puVar25 + -0x34) = fVar41;
  pIVar23 = pIVar20;
  lVar29 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
  if (*(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)puVar25 + -0x40) = 0x2664b7f;
    il2cpp_runtime_helper_02300a20(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)puVar25 + -0x40) = 0x2664aee;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)puVar25 + -0x40) = 0x2664af6;
  pSVar9 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(lVar8);
  method_00 = *(MethodInfo_2F63D60 **)(*(long *)(lVar15 + 0x38) + 8);
  pSVar27 = (System_Collections_Generic_IEnumerable_Vector3__c *)0xfffffffe;
  *(undefined8 *)((long)puVar25 + -0x40) = 0x2664b0e;
  pSVar34 = pSVar9;
  Interpolate__NewBezier_d__16_Vector3____ctor((Interpolate__NewBezier_d__16_T__o *)pSVar9,-2,method_00);
  if (pSVar9 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar9->_1).generic_class = pIVar38;
    *(undefined8 *)((long)puVar25 + -0x40) = 0x2664b27;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).generic_class,pIVar38);
    (pSVar9->_1).this_arg.data = pUVar31;
    *(undefined8 *)((long)puVar25 + -0x40) = 0x2664b37;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).this_arg,pUVar31);
    (pSVar9->_1).declaringType = pIVar21;
    *(undefined8 *)((long)puVar25 + -0x40) = 0x2664b47;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).declaringType,pIVar21);
    *(float *)((long)&(pSVar9->_1).typeMetadataHandle + 4) = *(float *)((long)puVar25 + -0x34);
    (pSVar9->_1).element_class = pIVar20;
    *(undefined8 *)((long)puVar25 + -0x40) = 0x2664b65;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).element_class,pIVar20);
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar9;
  }
  *(undefined8 *)((long)puVar25 + -0x40) = 0x2664b9d;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)puVar25 + -0x40) = lVar15;
  *(Il2CppClass **)((long)puVar25 + -0x48) = pIVar21;
  *(Il2CppClass **)((long)puVar25 + -0x50) = pIVar20;
  *(Interpolate_Function_o **)((long)puVar25 + -0x58) = pIVar38;
  *(UnityEngine_Transform_array **)((long)puVar25 + -0x60) = pUVar31;
  *(undefined8 *)((long)puVar25 + -0x68) = 0;
  *(undefined8 *)((long)puVar25 + -0x70) = uVar10;
  *(undefined4 *)((long)puVar25 + -0x6c) = extraout_XMM0_Da;
  pIVar20 = pIVar23;
  lVar15 = lVar29;
  if (*(long **)(lVar29 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)puVar25 + -0x78) = 0x2664c6c;
    il2cpp_runtime_helper_02300a20(lVar29);
    lVar8 = **(long **)(lVar29 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(lVar29 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)puVar25 + -0x78) = 0x2664bde;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)puVar25 + -0x78) = 0x2664be6;
  pSVar11 = (System_Collections_Generic_IEnumerable_Vector3__o *)il2cpp_runtime_helper_023052d0(lVar8);
  pIVar18 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
  vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar29 + 0x38) + 8);
  *(undefined8 *)((long)puVar25 + -0x78) = 0x2664bfb;
  pSVar19 = pSVar11;
  (*vtableDispatch)();
  if (pSVar11 != (System_Collections_Generic_IEnumerable_Vector3__o *)0x0) {
    pSVar11[6].klass = pSVar34;
    *(undefined8 *)((long)puVar25 + -0x78) = 0x2664c14;
    il2cpp_runtime_helper_022b4080(pSVar11 + 6,pSVar34);
    pSVar11[3].klass = pSVar27;
    *(undefined8 *)((long)puVar25 + -0x78) = 0x2664c24;
    il2cpp_runtime_helper_022b4080(pSVar11 + 3,pSVar27);
    pSVar11[5].klass = extraout_RDX;
    *(undefined8 *)((long)puVar25 + -0x78) = 0x2664c34;
    il2cpp_runtime_helper_022b4080(pSVar11 + 5,extraout_RDX);
    *(undefined4 *)((long)&pSVar11[6].monitor + 4) = *(undefined4 *)((long)puVar25 + -0x6c);
    pSVar11[4].klass = (System_Collections_Generic_IEnumerable_Vector3__c *)pIVar23;
    *(undefined8 *)((long)puVar25 + -0x78) = 0x2664c52;
    il2cpp_runtime_helper_022b4080(pSVar11 + 4,pIVar23);
    return pSVar11;
  }
  *(undefined8 *)((long)puVar25 + -0x78) = 0x2664c8a;
  auVar42 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)puVar25 + -0x78) = lVar29;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)puVar25 + -0x80) = extraout_RDX;
  *(Il2CppClass **)((long)puVar25 + -0x88) = pIVar23;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)puVar25 + -0x90) = pSVar34;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)puVar25 + -0x98) = pSVar27;
  *(undefined8 *)((long)puVar25 + -0xa0) = 0;
  *(long *)((long)puVar25 + -0xa8) = auVar42._0_8_;
  uVar40 = (ulong)pIVar20 & 0xffffffff;
  lVar29 = lVar15;
  if (*(long **)(lVar15 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)puVar25 + -0xb0) = 0x2664d2e;
    il2cpp_runtime_helper_02300a20(lVar15);
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)puVar25 + -0xb0) = 0x2664cc4;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)puVar25 + -0xb0) = 0x2664ccc;
  __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(lVar8);
  method_01 = *(MethodInfo_2F65260 **)(*(long *)(lVar15 + 0x38) + 8);
  pIVar21 = (Il2CppClass *)&g_data_fffffffe;
  *(undefined8 *)((long)puVar25 + -0xb0) = 0x2664ce4;
  pIVar35 = __this;
  Interpolate__NewCatmullRom_d__20_object____ctor(__this,-2,method_01);
  if (__this != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    (__this->fields).__3__nodes = (System_Collections_IList_o *)pSVar19;
    *(undefined8 *)((long)puVar25 + -0xb0) = 0x2664cf9;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__nodes,pSVar19);
    (__this->fields).__3__toVector3 = pIVar18;
    *(undefined8 *)((long)puVar25 + -0xb0) = 0x2664d0c;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__toVector3,pIVar18);
    (__this->fields).slices = auVar42._8_4_;
    *(char *)((long)&(__this->fields).loop + 1) = (char)uVar40;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  *(undefined8 *)((long)puVar25 + -0xb0) = 0x2664d45;
  auVar43 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar25 + -0xb0) = 0;
  *(ulong *)((long)puVar25 + -0xb8) = auVar42._8_8_ & 0xffffffff;
  *(ulong *)((long)puVar25 + -0xc0) = uVar40;
  *(System_Collections_Generic_IEnumerable_Vector3__o **)((long)puVar25 + -200) = pSVar19;
  *(Interpolate_ToVector3_T__o **)((long)puVar25 + -0xd0) = pIVar18;
  *(long *)((long)puVar25 + -0xd8) = lVar15;
  *(long *)((long)puVar25 + -0xe0) = auVar43._0_8_;
  uVar40 = (ulong)pIVar20 & 0xffffffff;
  lVar15 = lVar29;
  if (*(long **)(lVar29 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)puVar25 + -0xe8) = 0x2664dee;
    il2cpp_runtime_helper_02300a20(lVar29);
    lVar8 = **(long **)(lVar29 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(lVar29 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)puVar25 + -0xe8) = 0x2664d84;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)puVar25 + -0xe8) = 0x2664d8c;
  pSVar9 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(lVar8);
  method_02 = *(MethodInfo_2F65BB0 **)(*(long *)(lVar29 + 0x38) + 8);
  uVar10 = 0xfffffffe;
  *(undefined8 *)((long)puVar25 + -0xe8) = 0x2664da4;
  pSVar34 = pSVar9;
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            ((Interpolate__NewCatmullRom_d__20_T__o *)pSVar9,-2,method_02);
  if (pSVar9 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar9->_1).this_arg.data = pIVar35;
    *(undefined8 *)((long)puVar25 + -0xe8) = 0x2664db9;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).this_arg,pIVar35);
    (pSVar9->_1).element_class = pIVar21;
    *(undefined8 *)((long)puVar25 + -0xe8) = 0x2664dcc;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).element_class,pIVar21);
    *(int32_t *)&(pSVar9->_1).declaringType = auVar43._8_4_;
    *(char *)((long)&(pSVar9->_1).castClass + 1) = (char)uVar40;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar9;
  }
  *(undefined8 *)((long)puVar25 + -0xe8) = 0x2664e05;
  auVar42 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar25 + -0xe8) = 0;
  *(ulong *)((long)puVar25 + -0xf0) = auVar43._8_8_ & 0xffffffff;
  *(ulong *)((long)puVar25 + -0xf8) = uVar40;
  *(Interpolate__NewCatmullRom_d__20_T__o **)((long)puVar25 + -0x100) = pIVar35;
  *(Il2CppClass **)((long)puVar25 + -0x108) = pIVar21;
  *(long *)((long)puVar25 + -0x110) = lVar29;
  *(long *)((long)puVar25 + -0x118) = auVar42._0_8_;
  uVar40 = (ulong)pIVar20 & 0xffffffff;
  lVar29 = lVar15;
  if (*(long **)(lVar15 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)puVar25 + -0x120) = 0x2664eab;
    il2cpp_runtime_helper_02300a20(lVar15);
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(lVar15 + 0x38);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)puVar25 + -0x120) = 0x2664e44;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)puVar25 + -0x120) = 0x2664e4c;
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar8);
  plVar28 = (long *)&g_data_fffffffe;
  vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 8);
  *(undefined8 *)((long)puVar25 + -0x120) = 0x2664e61;
  pSVar16 = pSVar12;
  (*vtableDispatch)();
  if (pSVar12 != (System_String_o *)0x0) {
    pSVar12[2].klass = (System_String_c *)pSVar34;
    *(undefined8 *)((long)puVar25 + -0x120) = 0x2664e76;
    il2cpp_runtime_helper_022b4080(pSVar12 + 2,pSVar34);
    pSVar12[2].fields._stringLength = (int)uVar10;
    pSVar12[2].fields._firstChar = (short)((ulong)uVar10 >> 0x20);
    *(short *)&pSVar12[2].fields.field_0x6 = (short)((ulong)uVar10 >> 0x30);
    *(undefined8 *)((long)puVar25 + -0x120) = 0x2664e89;
    il2cpp_runtime_helper_022b4080(&pSVar12[2].fields,uVar10);
    *(int *)&pSVar12[3].monitor = auVar42._8_4_;
    *(char *)((long)&pSVar12[3].klass + 1) = (char)uVar40;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar12;
  }
  *(undefined8 *)((long)puVar25 + -0x120) = 0x2664ec2;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar25 + -0x120) = 0;
  *(ulong *)((long)puVar25 + -0x128) = auVar42._8_8_ & 0xffffffff;
  *(ulong *)((long)puVar25 + -0x130) = uVar40;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)puVar25 + -0x138) = pSVar34;
  *(undefined8 *)((long)puVar25 + -0x140) = uVar10;
  *(long *)((long)puVar25 + -0x148) = lVar15;
  *(undefined4 *)((long)puVar25 + -0x14c) = extraout_EDX;
  pSVar13 = *(System_RuntimeTypeHandle_Fields **)(lVar29 + 0x38);
  if (pSVar13 == (System_RuntimeTypeHandle_Fields *)0x0) {
    *(undefined8 *)((long)puVar25 + -0x168) = 0x2664f03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pSVar13 = *(System_RuntimeTypeHandle_Fields **)(lVar29 + 0x38);
    if (pSVar13 == (System_RuntimeTypeHandle_Fields *)0x0) {
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2664f14;
      il2cpp_runtime_helper_02300a20(lVar29);
      pSVar13 = *(System_RuntimeTypeHandle_Fields **)(lVar29 + 0x38);
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pSVar13->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)puVar25 + -0x168) = 0x2664f37;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)puVar25 + -0x168) = 0x2664f41;
  pSVar14 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    *(undefined8 *)((long)puVar25 + -0x168) = 0x2664f5c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)puVar25 + -0x168) = 0x2664f69;
  bVar5 = Unity_VisualScripting_TypeUtility__IsAssignableFrom
                    (pSVar14,(Il2CppObject *)pIVar20,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar5);
  }
  *(undefined8 *)((long)puVar25 + -0x168) = 0x2664f88;
  uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  *(undefined8 *)((long)puVar25 + -0x168) = 0x2664f95;
  lVar15 = il2cpp_runtime_helper_022b2a40(uVar10,4);
  *(long *)((long)puVar25 + -0x158) = lVar15;
  if (lVar15 != 0) goto label_02664fa4;
label_02664f9f:
  *(undefined8 *)((long)puVar25 + -0x168) = 0x2664fa4;
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  lVar15._0_4_ = (pSVar16->fields)._stringLength;
  lVar15._4_2_ = (pSVar16->fields)._firstChar;
  lVar15._6_2_ = *(undefined2 *)&(pSVar16->fields).field_0x6;
  if (lVar15 == 0) goto label_02664fd6;
  uVar10 = *(undefined8 *)(**(long **)((long)puVar25 + -0x158) + 0x40);
  *(undefined8 *)((long)puVar25 + -0x168) = 0x2664fc2;
  lVar8 = il2cpp_runtime_helper_023051f0(lVar15,uVar10);
  if (lVar8 != 0) goto label_02664fd6;
label_02664fc7:
  *(undefined8 *)((long)puVar25 + -0x168) = 0x2664fcc;
  uVar10 = il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)puVar25 + -0x168) = 0x2664fd6;
  il2cpp_runtime_helper_022b2b10(uVar10,0);
label_02664fd6:
  if (*(int *)(*(long *)((long)puVar25 + -0x158) + 0x18) != 0) goto label_02664fe6;
  do {
    *(undefined8 *)((long)puVar25 + -0x168) = 0x2664fe6;
    il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
    lVar8 = *(long *)((long)puVar25 + -0x158);
    *(long *)(lVar8 + 0x20) = lVar15;
    *(undefined8 *)((long)puVar25 + -0x168) = 0x2664ffb;
    il2cpp_runtime_helper_022b4080(lVar8 + 0x20,lVar15);
    if (plVar28 == (long *)0x0) goto label_02664f9f;
    uVar10 = *(undefined8 *)(*plVar28 + 0x1c0);
    vtableDispatch = *(code **)(*plVar28 + 0x1b8);
    *(undefined8 *)((long)puVar25 + -0x168) = 0x2665013;
    lVar15 = (*vtableDispatch)(plVar28,uVar10);
    if (lVar15 != 0) {
      *(undefined8 *)((long)puVar25 + -0x168) = 0x266502f;
      lVar8 = il2cpp_runtime_helper_023051f0(lVar15);
      if (lVar8 == 0) goto label_02664fc7;
    }
    if (1 < *(uint *)(*(long *)((long)puVar25 + -0x158) + 0x18)) {
      lVar8 = *(long *)((long)puVar25 + -0x158);
      *(long *)(lVar8 + 0x28) = lVar15;
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665057;
      il2cpp_runtime_helper_022b4080(lVar8 + 0x28);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665063;
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
      if (pIVar20 != (Il2CppClass *)0x0) {
        *(undefined8 *)((long)puVar25 + -0x168) = 0x2665075;
        pSVar14 = System_Object__GetType((Il2CppObject *)pIVar20,(MethodInfo *)0x0);
        if (pSVar14 == (System_Type_o *)0x0) goto label_02664f9f;
        pMVar3 = (pSVar14->klass->vtable)._3_ToString.method;
        pIVar4 = (pSVar14->klass->vtable)._3_ToString.methodPtr;
        *(undefined8 *)((long)puVar25 + -0x168) = 0x2665091;
        lVar15 = (*pIVar4)(pSVar14,pMVar3);
        if (lVar15 != 0) goto label_026650a8;
      }
      *(undefined8 *)((long)puVar25 + -0x168) = 0x26650a5;
      lVar15 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
      args = *(System_Object_array **)((long)puVar25 + -0x158);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x26650b5;
      il2cpp_runtime_helper_01f681a0(args);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x26650c0;
      il2cpp_runtime_helper_01f6def0(args,lVar15);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x26650d0;
      il2cpp_runtime_helper_01f6df20(args,2,lVar15);
      SVar2.fields.value =
           (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar29 + 0x38))->value;
      *(undefined8 *)((long)puVar25 + -0x168) = 0x26650e3;
      il2cpp_runtime_helper_01f68090(g_data_057b9c50);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x26650ed;
      pSVar14 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x26650f8;
      il2cpp_runtime_helper_01f681a0(args);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665103;
      il2cpp_runtime_helper_01f6def0(args,pSVar14);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665113;
      il2cpp_runtime_helper_01f6df20(args,3,pSVar14);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665120;
      pSVar16 = System_String__Format_3af7980(pSVar16,args,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x266512b;
      il2cpp_runtime_helper_01f681a0(plVar28);
      uVar10 = *(undefined8 *)(*plVar28 + 0x240);
      vtableDispatch = *(code **)(*plVar28 + 0x238);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x266513e;
      uVar10 = (*vtableDispatch)(plVar28,uVar10);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665149;
      il2cpp_runtime_helper_01f681a0(uVar10);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665156;
      plVar28 = (long *)il2cpp_runtime_helper_01f6e290(uVar10,(long)*(int *)((long)puVar25 + -0x14c));
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665161;
      il2cpp_runtime_helper_01f681a0(plVar28);
      uVar10 = *(undefined8 *)(*plVar28 + 0x1e0);
      vtableDispatch = *(code **)(*plVar28 + 0x1d8);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665175;
      pSVar12 = (System_String_o *)(*vtableDispatch)(plVar28,uVar10);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x2665184;
      uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x266518c;
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x266519f;
      System_ArgumentException___ctor_3c0adc0(__this_00,pSVar16,pSVar12,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar25 + -0x168) = 0x26651aa;
      pSVar36 = __this_00;
      uVar10 = il2cpp_runtime_helper_022b2b10();
      *(undefined8 **)((long)puVar25 + -0x168) = &g_data_057b9b70;
      *(System_ArgumentException_o **)((long)puVar25 + -0x170) = __this_00;
      *(undefined8 *)((long)puVar25 + -0x178) = uVar10;
      if (*(long *)(lVar29 + 0x38) == 0) {
        *(undefined8 *)((long)puVar25 + -0x180) = 0x26651c9;
        il2cpp_runtime_helper_02300a20(lVar29);
      }
      pMVar3 = pSVar36->klass[2].vtable._10_get_Source.method;
      pIVar4 = pSVar36->klass[2].vtable._10_get_Source.methodPtr;
      *(undefined8 *)((long)puVar25 + -0x180) = 0x26651dc;
      auVar42 = (*pIVar4)(pSVar36,pMVar3);
      vtableDispatch = *(code **)**(undefined8 **)(lVar29 + 0x38);
      pSVar19 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                (*vtableDispatch)
                          (auVar42._0_8_,(undefined8 *)**(undefined8 **)(lVar29 + 0x38),auVar42._8_8_,
                           vtableDispatch);
      return pSVar19;
    }
  } while( true );
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Vector3_array* points, float duration, const MethodInfo* method);
// 0x40605a0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_3f605a0
          (Interpolate_Function_o *ease,UnityEngine_Vector3_array *points,float duration,MethodInfo *method)

{
  byte bVar1;
  MethodInfo_2F63D60 *method_00;
  code *vtableDispatch;
  MethodInfo_2F65260 *method_01;
  MethodInfo_2F65BB0 *method_02;
  System_RuntimeTypeHandle_o SVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  System_Object_array *args;
  undefined4 in_EAX;
  bool_conflict bVar5;
  int32_t iVar6;
  long lVar7;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar8;
  undefined8 uVar9;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar10;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  System_String_o *pSVar11;
  System_RuntimeTypeHandle_Fields *pSVar12;
  System_Type_o *pSVar13;
  undefined4 extraout_var;
  long lVar14;
  System_String_o *pSVar15;
  System_ArgumentException_o *__this_00;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar16;
  Il2CppClass *pIVar17;
  Il2CppClass *pIVar18;
  uint uVar19;
  Il2CppClass *pIVar20;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  System_Collections_Generic_IEnumerable_Vector3__c *extraout_RDX;
  undefined8 unaff_RBX;
  float *pfVar21;
  undefined8 unaff_RBP;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar22;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar23;
  Interpolate_ToVector3_T__o *pIVar24;
  long *plVar25;
  long lVar26;
  UnityEngine_Vector3_array *pUVar27;
  void *pvVar28;
  void *pvVar29;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar30;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar31;
  System_ArgumentException_o *pSVar32;
  Interpolate_Function_o *pIVar33;
  System_Collections_IList_o *pSVar34;
  System_Collections_IList_o *nodes;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulong uVar35;
  UnityEngine_Vector3_array *unaff_R14;
  Interpolate_Function_o *unaff_R15;
  undefined4 extraout_XMM0_Da;
  float fVar36;
  undefined4 uVar37;
  undefined4 in_XMM1_Da;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uStack_28;
  
  uStack_28 = CONCAT44(duration,in_EAX);
  if (g_data_057ac2a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
    g_data_057ac2a0 = '\x01';
  }
  if (g_data_057ac29a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewTimer_d__3);
    g_data_057ac29a = '\x01';
  }
  pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewTimer_d__3);
  pUVar27 = (UnityEngine_Vector3_array *)0x0;
  System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar17->_1).name = 0xfffffffe;
  pIVar33 = (Interpolate_Function_o *)0x0;
  iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&(pIVar17->_1).namespaze = iVar6;
  if (pIVar17 == (Il2CppClass *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac2a1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
      il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
      g_data_057ac2a1 = '\x01';
    }
    if (g_data_057ac29b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
      g_data_057ac29b = '\x01';
    }
    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
    pvVar28 = (void *)0x0;
    System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar17->_1).name = 0xfffffffe;
    pSVar34 = (System_Collections_IList_o *)0x0;
    iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&(pIVar17->_1).namespaze = iVar6;
    if (pIVar17 == (Il2CppClass *)0x0) {
      uVar37 = il2cpp_runtime_helper_022b2c90();
      pvVar29 = pvVar28;
      nodes = pSVar34;
      if (pvVar28 != (void *)0x0) {
        pSVar16 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*(ulong *)((long)pvVar28 + 0x18) & 0xffffffff);
        uVar19 = (int)*(ulong *)((long)pvVar28 + 0x18) - 1;
        if (0 < (int)uVar19) {
          pSVar10 = (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar19;
          do {
            if (pSVar34 == (System_Collections_IList_o *)0x0) {
              if (((int)pSVar16 == 0) || ((int)pSVar16 == 1)) goto label_0406090f;
              goto label_04060914;
            }
            pSVar22 = (System_Collections_Generic_IEnumerable_Vector3__o *)0x0;
            pfVar21 = (float *)((long)pvVar28 + 0x20);
            do {
              if ((pSVar16 <= pSVar22) ||
                 (pSVar16 <= (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar22->klass + 1))
                 ) goto label_0406090f;
              pvVar29 = pSVar34[2].monitor;
              nodes = (System_Collections_IList_o *)pSVar34[4].klass;
              fVar36 = (float)(*pSVar34[1].monitor)(*pfVar21,pfVar21[3] - *pfVar21,uVar37,in_XMM1_Da);
              uVar19 = *(uint *)((long)pvVar28 + 0x18);
              if (((System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar19 <= pSVar22) ||
                 (*pfVar21 = fVar36,
                 (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar19 <=
                 (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar22->klass + 1)))
              goto label_0406090f;
              pvVar29 = pSVar34[2].monitor;
              nodes = (System_Collections_IList_o *)pSVar34[4].klass;
              fVar36 = (float)(*pSVar34[1].monitor)(pfVar21[1],pfVar21[4] - pfVar21[1],uVar37,in_XMM1_Da);
              uVar19 = *(uint *)((long)pvVar28 + 0x18);
              if (((System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar19 <= pSVar22) ||
                 (pfVar21[1] = fVar36,
                 (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar19 <=
                 (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar22->klass + 1)))
              goto label_0406090f;
              pvVar29 = pSVar34[2].monitor;
              nodes = (System_Collections_IList_o *)pSVar34[4].klass;
              fVar36 = (float)(*pSVar34[1].monitor)(pfVar21[2],pfVar21[5] - pfVar21[2],uVar37,in_XMM1_Da);
              pSVar16 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                        (ulong)*(uint *)((long)pvVar28 + 0x18);
              if (pSVar16 <= pSVar22) goto label_0406090f;
              pfVar21[2] = fVar36;
              pfVar21 = pfVar21 + 3;
              pSVar22 = (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar22->klass + 1);
            } while (pSVar22 != pSVar10);
            pSVar10 = (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar10[-1].monitor + 7);
          } while (0 < (int)pSVar10);
        }
        if ((int)pSVar16 != 0) {
          return pSVar16;
        }
label_0406090f:
        il2cpp_runtime_helper_022b2ca0();
      }
label_04060914:
      iVar6 = (int32_t)pvVar29;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2a2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
        g_data_057ac2a2 = '\x01';
      }
      pIVar24 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
      Interpolate_ToVector3_object____ctor();
      pSVar16 = Interpolate__NewCatmullRom_object_(nodes,pIVar24,iVar6,extraout_EDX_01 & 0xff,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
      return pSVar16;
    }
    *(undefined4 *)&(pIVar17->_1).byval_arg.data = 0;
    *(int *)&(pIVar17->_1).this_arg.data = extraout_EDX_00 + 1;
    (pIVar17->_1).byval_arg.bits = 1;
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
    Interpolate_ToVector3_Vector3____ctor();
    fVar36 = (float)(extraout_EDX_00 + 1);
    register0x00000020 = (BADSPACEBASE *)&uStack_28;
    unaff_RBX = 0;
  }
  else {
    *(float *)&(pIVar17->_1).byval_arg.data = uStack_28._4_4_;
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
    Interpolate_ToVector3_Vector3____ctor();
    pUVar27 = points;
    pIVar33 = ease;
    points = unaff_R14;
    ease = unaff_R15;
    fVar36 = uStack_28._4_4_;
  }
  lVar14 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(Interpolate_Function_o **)((long)register0x00000020 + -0x10) = ease;
  *(UnityEngine_Vector3_array **)((long)register0x00000020 + -0x18) = points;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
  *(long **)((long)register0x00000020 + -0x38) = &MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
  *(float *)((long)register0x00000020 + -0x34) = fVar36;
  pIVar20 = pIVar17;
  lVar26 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
  if (*(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x2664b7f;
    il2cpp_runtime_helper_02300a20(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
    lVar7 = **(long **)(lVar14 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = **(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x2664aee;
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x2664af6;
  pSVar8 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(lVar7);
  method_00 = *(MethodInfo_2F63D60 **)(*(long *)(lVar14 + 0x38) + 8);
  pSVar23 = (System_Collections_Generic_IEnumerable_Vector3__c *)0xfffffffe;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x2664b0e;
  pSVar30 = pSVar8;
  Interpolate__NewBezier_d__16_Vector3____ctor((Interpolate__NewBezier_d__16_T__o *)pSVar8,-2,method_00);
  if (pSVar8 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar8->_1).generic_class = pIVar33;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x2664b27;
    il2cpp_runtime_helper_022b4080(&(pSVar8->_1).generic_class,pIVar33);
    (pSVar8->_1).this_arg.data = pUVar27;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x2664b37;
    il2cpp_runtime_helper_022b4080(&(pSVar8->_1).this_arg,pUVar27);
    (pSVar8->_1).declaringType = pIVar18;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x2664b47;
    il2cpp_runtime_helper_022b4080(&(pSVar8->_1).declaringType,pIVar18);
    *(float *)((long)&(pSVar8->_1).typeMetadataHandle + 4) = *(float *)((long)register0x00000020 + -0x34);
    (pSVar8->_1).element_class = pIVar17;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x2664b65;
    il2cpp_runtime_helper_022b4080(&(pSVar8->_1).element_class,pIVar17);
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar8;
  }
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x2664b9d;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)register0x00000020 + -0x40) = lVar14;
  *(Il2CppClass **)((long)register0x00000020 + -0x48) = pIVar18;
  *(Il2CppClass **)((long)register0x00000020 + -0x50) = pIVar17;
  *(Interpolate_Function_o **)((long)register0x00000020 + -0x58) = pIVar33;
  *(UnityEngine_Vector3_array **)((long)register0x00000020 + -0x60) = pUVar27;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = uVar9;
  *(undefined4 *)((long)register0x00000020 + -0x6c) = extraout_XMM0_Da;
  pIVar17 = pIVar20;
  lVar14 = lVar26;
  if (*(long **)(lVar26 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x2664c6c;
    il2cpp_runtime_helper_02300a20(lVar26);
    lVar7 = **(long **)(lVar26 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = **(long **)(lVar26 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x2664bde;
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x2664be6;
  pSVar10 = (System_Collections_Generic_IEnumerable_Vector3__o *)il2cpp_runtime_helper_023052d0(lVar7);
  pIVar24 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
  vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar26 + 0x38) + 8);
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x2664bfb;
  pSVar16 = pSVar10;
  (*vtableDispatch)();
  if (pSVar10 != (System_Collections_Generic_IEnumerable_Vector3__o *)0x0) {
    pSVar10[6].klass = pSVar30;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x2664c14;
    il2cpp_runtime_helper_022b4080(pSVar10 + 6,pSVar30);
    pSVar10[3].klass = pSVar23;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x2664c24;
    il2cpp_runtime_helper_022b4080(pSVar10 + 3,pSVar23);
    pSVar10[5].klass = extraout_RDX;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x2664c34;
    il2cpp_runtime_helper_022b4080(pSVar10 + 5,extraout_RDX);
    *(undefined4 *)((long)&pSVar10[6].monitor + 4) = *(undefined4 *)((long)register0x00000020 + -0x6c);
    pSVar10[4].klass = (System_Collections_Generic_IEnumerable_Vector3__c *)pIVar20;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x2664c52;
    il2cpp_runtime_helper_022b4080(pSVar10 + 4,pIVar20);
    return pSVar10;
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x2664c8a;
  auVar38 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)register0x00000020 + -0x78) = lVar26;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)register0x00000020 + -0x80) = extraout_RDX;
  *(Il2CppClass **)((long)register0x00000020 + -0x88) = pIVar20;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)register0x00000020 + -0x90) = pSVar30;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)register0x00000020 + -0x98) = pSVar23;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
  *(long *)((long)register0x00000020 + -0xa8) = auVar38._0_8_;
  uVar35 = (ulong)pIVar17 & 0xffffffff;
  lVar26 = lVar14;
  if (*(long **)(lVar14 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2664d2e;
    il2cpp_runtime_helper_02300a20(lVar14);
    lVar7 = **(long **)(lVar14 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = **(long **)(lVar14 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2664cc4;
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2664ccc;
  __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(lVar7);
  method_01 = *(MethodInfo_2F65260 **)(*(long *)(lVar14 + 0x38) + 8);
  pIVar18 = (Il2CppClass *)&g_data_fffffffe;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2664ce4;
  pIVar31 = __this;
  Interpolate__NewCatmullRom_d__20_object____ctor(__this,-2,method_01);
  if (__this != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    (__this->fields).__3__nodes = (System_Collections_IList_o *)pSVar16;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2664cf9;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__nodes,pSVar16);
    (__this->fields).__3__toVector3 = pIVar24;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2664d0c;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__toVector3,pIVar24);
    (__this->fields).slices = auVar38._8_4_;
    *(char *)((long)&(__this->fields).loop + 1) = (char)uVar35;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x2664d45;
  auVar39 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
  *(ulong *)((long)register0x00000020 + -0xb8) = auVar38._8_8_ & 0xffffffff;
  *(ulong *)((long)register0x00000020 + -0xc0) = uVar35;
  *(System_Collections_Generic_IEnumerable_Vector3__o **)((long)register0x00000020 + -200) = pSVar16;
  *(Interpolate_ToVector3_T__o **)((long)register0x00000020 + -0xd0) = pIVar24;
  *(long *)((long)register0x00000020 + -0xd8) = lVar14;
  *(long *)((long)register0x00000020 + -0xe0) = auVar39._0_8_;
  uVar35 = (ulong)pIVar17 & 0xffffffff;
  lVar14 = lVar26;
  if (*(long **)(lVar26 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x2664dee;
    il2cpp_runtime_helper_02300a20(lVar26);
    lVar7 = **(long **)(lVar26 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = **(long **)(lVar26 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x2664d84;
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x2664d8c;
  pSVar8 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(lVar7);
  method_02 = *(MethodInfo_2F65BB0 **)(*(long *)(lVar26 + 0x38) + 8);
  uVar9 = 0xfffffffe;
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x2664da4;
  pSVar30 = pSVar8;
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            ((Interpolate__NewCatmullRom_d__20_T__o *)pSVar8,-2,method_02);
  if (pSVar8 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar8->_1).this_arg.data = pIVar31;
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x2664db9;
    il2cpp_runtime_helper_022b4080(&(pSVar8->_1).this_arg,pIVar31);
    (pSVar8->_1).element_class = pIVar18;
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x2664dcc;
    il2cpp_runtime_helper_022b4080(&(pSVar8->_1).element_class,pIVar18);
    *(int32_t *)&(pSVar8->_1).declaringType = auVar39._8_4_;
    *(char *)((long)&(pSVar8->_1).castClass + 1) = (char)uVar35;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar8;
  }
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x2664e05;
  auVar38 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
  *(ulong *)((long)register0x00000020 + -0xf0) = auVar39._8_8_ & 0xffffffff;
  *(ulong *)((long)register0x00000020 + -0xf8) = uVar35;
  *(Interpolate__NewCatmullRom_d__20_T__o **)((long)register0x00000020 + -0x100) = pIVar31;
  *(Il2CppClass **)((long)register0x00000020 + -0x108) = pIVar18;
  *(long *)((long)register0x00000020 + -0x110) = lVar26;
  *(long *)((long)register0x00000020 + -0x118) = auVar38._0_8_;
  uVar35 = (ulong)pIVar17 & 0xffffffff;
  lVar26 = lVar14;
  if (*(long **)(lVar14 + 0x38) == (long *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x2664eab;
    il2cpp_runtime_helper_02300a20(lVar14);
    lVar7 = **(long **)(lVar14 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = **(long **)(lVar14 + 0x38);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x2664e44;
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x2664e4c;
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar7);
  plVar25 = (long *)&g_data_fffffffe;
  vtableDispatch = (code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 8);
  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x2664e61;
  pSVar15 = pSVar11;
  (*vtableDispatch)();
  if (pSVar11 != (System_String_o *)0x0) {
    pSVar11[2].klass = (System_String_c *)pSVar30;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x2664e76;
    il2cpp_runtime_helper_022b4080(pSVar11 + 2,pSVar30);
    pSVar11[2].fields._stringLength = (int)uVar9;
    pSVar11[2].fields._firstChar = (short)((ulong)uVar9 >> 0x20);
    *(short *)&pSVar11[2].fields.field_0x6 = (short)((ulong)uVar9 >> 0x30);
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x2664e89;
    il2cpp_runtime_helper_022b4080(&pSVar11[2].fields,uVar9);
    *(int *)&pSVar11[3].monitor = auVar38._8_4_;
    *(char *)((long)&pSVar11[3].klass + 1) = (char)uVar35;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar11;
  }
  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x2664ec2;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
  *(ulong *)((long)register0x00000020 + -0x128) = auVar38._8_8_ & 0xffffffff;
  *(ulong *)((long)register0x00000020 + -0x130) = uVar35;
  *(System_Collections_Generic_IEnumerable_Vector3__c **)((long)register0x00000020 + -0x138) = pSVar30;
  *(undefined8 *)((long)register0x00000020 + -0x140) = uVar9;
  *(long *)((long)register0x00000020 + -0x148) = lVar14;
  *(undefined4 *)((long)register0x00000020 + -0x14c) = extraout_EDX;
  pSVar12 = *(System_RuntimeTypeHandle_Fields **)(lVar26 + 0x38);
  if (pSVar12 == (System_RuntimeTypeHandle_Fields *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664f03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pSVar12 = *(System_RuntimeTypeHandle_Fields **)(lVar26 + 0x38);
    if (pSVar12 == (System_RuntimeTypeHandle_Fields *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664f14;
      il2cpp_runtime_helper_02300a20(lVar26);
      pSVar12 = *(System_RuntimeTypeHandle_Fields **)(lVar26 + 0x38);
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pSVar12->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664f37;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664f41;
  pSVar13 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664f5c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664f69;
  bVar5 = Unity_VisualScripting_TypeUtility__IsAssignableFrom
                    (pSVar13,(Il2CppObject *)pIVar17,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar5);
  }
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664f88;
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664f95;
  lVar14 = il2cpp_runtime_helper_022b2a40(uVar9,4);
  *(long *)((long)register0x00000020 + -0x158) = lVar14;
  if (lVar14 != 0) goto label_02664fa4;
label_02664f9f:
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664fa4;
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  lVar14._0_4_ = (pSVar15->fields)._stringLength;
  lVar14._4_2_ = (pSVar15->fields)._firstChar;
  lVar14._6_2_ = *(undefined2 *)&(pSVar15->fields).field_0x6;
  if (lVar14 == 0) goto label_02664fd6;
  uVar9 = *(undefined8 *)(**(long **)((long)register0x00000020 + -0x158) + 0x40);
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664fc2;
  lVar7 = il2cpp_runtime_helper_023051f0(lVar14,uVar9);
  if (lVar7 != 0) goto label_02664fd6;
label_02664fc7:
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664fcc;
  uVar9 = il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664fd6;
  il2cpp_runtime_helper_022b2b10(uVar9,0);
label_02664fd6:
  if (*(int *)(*(long *)((long)register0x00000020 + -0x158) + 0x18) != 0) goto label_02664fe6;
  do {
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664fe6;
    il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
    lVar7 = *(long *)((long)register0x00000020 + -0x158);
    *(long *)(lVar7 + 0x20) = lVar14;
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2664ffb;
    il2cpp_runtime_helper_022b4080(lVar7 + 0x20,lVar14);
    if (plVar25 == (long *)0x0) goto label_02664f9f;
    uVar9 = *(undefined8 *)(*plVar25 + 0x1c0);
    vtableDispatch = *(code **)(*plVar25 + 0x1b8);
    *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665013;
    lVar14 = (*vtableDispatch)(plVar25,uVar9);
    if (lVar14 != 0) {
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x266502f;
      lVar7 = il2cpp_runtime_helper_023051f0(lVar14);
      if (lVar7 == 0) goto label_02664fc7;
    }
    if (1 < *(uint *)(*(long *)((long)register0x00000020 + -0x158) + 0x18)) {
      lVar7 = *(long *)((long)register0x00000020 + -0x158);
      *(long *)(lVar7 + 0x28) = lVar14;
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665057;
      il2cpp_runtime_helper_022b4080(lVar7 + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665063;
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
      if (pIVar17 != (Il2CppClass *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665075;
        pSVar13 = System_Object__GetType((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
        if (pSVar13 == (System_Type_o *)0x0) goto label_02664f9f;
        pMVar3 = (pSVar13->klass->vtable)._3_ToString.method;
        pIVar4 = (pSVar13->klass->vtable)._3_ToString.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665091;
        lVar14 = (*pIVar4)(pSVar13,pMVar3);
        if (lVar14 != 0) goto label_026650a8;
      }
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x26650a5;
      lVar14 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
      args = *(System_Object_array **)((long)register0x00000020 + -0x158);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x26650b5;
      il2cpp_runtime_helper_01f681a0(args);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x26650c0;
      il2cpp_runtime_helper_01f6def0(args,lVar14);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x26650d0;
      il2cpp_runtime_helper_01f6df20(args,2,lVar14);
      SVar2.fields.value =
           (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar26 + 0x38))->value;
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x26650e3;
      il2cpp_runtime_helper_01f68090(g_data_057b9c50);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x26650ed;
      pSVar13 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x26650f8;
      il2cpp_runtime_helper_01f681a0(args);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665103;
      il2cpp_runtime_helper_01f6def0(args,pSVar13);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665113;
      il2cpp_runtime_helper_01f6df20(args,3,pSVar13);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665120;
      pSVar15 = System_String__Format_3af7980(pSVar15,args,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x266512b;
      il2cpp_runtime_helper_01f681a0(plVar25);
      uVar9 = *(undefined8 *)(*plVar25 + 0x240);
      vtableDispatch = *(code **)(*plVar25 + 0x238);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x266513e;
      uVar9 = (*vtableDispatch)(plVar25,uVar9);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665149;
      il2cpp_runtime_helper_01f681a0(uVar9);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665156;
      plVar25 = (long *)il2cpp_runtime_helper_01f6e290(uVar9,(long)*(int *)((long)register0x00000020 + -0x14c));
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665161;
      il2cpp_runtime_helper_01f681a0(plVar25);
      uVar9 = *(undefined8 *)(*plVar25 + 0x1e0);
      vtableDispatch = *(code **)(*plVar25 + 0x1d8);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665175;
      pSVar11 = (System_String_o *)(*vtableDispatch)(plVar25,uVar9);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x2665184;
      uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x266518c;
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x266519f;
      System_ArgumentException___ctor_3c0adc0(__this_00,pSVar15,pSVar11,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x168) = 0x26651aa;
      pSVar32 = __this_00;
      uVar9 = il2cpp_runtime_helper_022b2b10();
      *(undefined8 **)((long)register0x00000020 + -0x168) = &g_data_057b9b70;
      *(System_ArgumentException_o **)((long)register0x00000020 + -0x170) = __this_00;
      *(undefined8 *)((long)register0x00000020 + -0x178) = uVar9;
      if (*(long *)(lVar26 + 0x38) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x180) = 0x26651c9;
        il2cpp_runtime_helper_02300a20(lVar26);
      }
      pMVar3 = pSVar32->klass[2].vtable._10_get_Source.method;
      pIVar4 = pSVar32->klass[2].vtable._10_get_Source.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x180) = 0x26651dc;
      auVar38 = (*pIVar4)(pSVar32,pMVar3);
      vtableDispatch = *(code **)**(undefined8 **)(lVar26 + 0x38);
      pSVar16 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                (*vtableDispatch)
                          (auVar38._0_8_,(undefined8 *)**(undefined8 **)(lVar26 + 0x38),auVar38._8_8_,
                           vtableDispatch);
      return pSVar16;
    }
  } while( true );
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Vector3_array* points, int32_t slices, const MethodInfo* method);
// 0x40606a0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_3f606a0
          (Interpolate_Function_o *ease,UnityEngine_Vector3_array *points,int32_t slices,MethodInfo *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  code *vtableDispatch;
  undefined1 uVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  long lVar6;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar7;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar8;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  System_String_o *pSVar9;
  System_RuntimeTypeHandle_Fields *pSVar10;
  System_Type_o *pSVar11;
  undefined4 extraout_var;
  System_Object_array *args;
  long lVar12;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  System_ArgumentException_o *__this_00;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar15;
  Il2CppClass *pIVar16;
  Il2CppClass *pIVar17;
  uint uVar18;
  int32_t extraout_EDX;
  int32_t extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int extraout_EDX_02;
  uint extraout_EDX_03;
  System_Collections_Generic_IEnumerable_Vector3__c *extraout_RDX;
  float *pfVar19;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar20;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar21;
  Interpolate_ToVector3_T__o *pIVar22;
  Il2CppClass *pIVar23;
  undefined8 uVar24;
  long *plVar25;
  long lVar26;
  void *pvVar27;
  void *pvVar28;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar29;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar30;
  System_Collections_IList_o *pSVar31;
  System_Collections_IList_o *nodes;
  undefined4 uVar32;
  float fVar33;
  undefined4 in_XMM1_Da;
  undefined1 auVar34 [16];
  
  if (g_data_057ac2a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
    g_data_057ac2a1 = '\x01';
  }
  if (g_data_057ac29b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NewCounter_d__6);
    g_data_057ac29b = '\x01';
  }
  pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NewCounter_d__6);
  pvVar27 = (void *)0x0;
  System_Object___ctor((Il2CppObject *)pIVar16,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar16->_1).name = 0xfffffffe;
  pSVar31 = (System_Collections_IList_o *)0x0;
  iVar5 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&(pIVar16->_1).namespaze = iVar5;
  if (pIVar16 != (Il2CppClass *)0x0) {
    *(undefined4 *)&(pIVar16->_1).byval_arg.data = 0;
    *(int32_t *)&(pIVar16->_1).this_arg.data = slices + 1;
    (pIVar16->_1).byval_arg.bits = 1;
    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
    Interpolate_ToVector3_Vector3____ctor();
    lVar12 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
    pIVar23 = pIVar16;
    lVar26 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3;
    if (*(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38) == (long *)0x0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3);
      lVar6 = **(long **)(lVar12 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = **(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewBezier_Vector3 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0();
    }
    pSVar7 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(lVar6);
    pSVar21 = (System_Collections_Generic_IEnumerable_Vector3__c *)0xfffffffe;
    pSVar29 = pSVar7;
    Interpolate__NewBezier_d__16_Vector3____ctor
              ((Interpolate__NewBezier_d__16_T__o *)pSVar7,-2,
               *(MethodInfo_2F63D60 **)(*(long *)(lVar12 + 0x38) + 8));
    if (pSVar7 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
      (pSVar7->_1).generic_class = ease;
      il2cpp_runtime_helper_022b4080(&(pSVar7->_1).generic_class,ease);
      (pSVar7->_1).this_arg.data = points;
      il2cpp_runtime_helper_022b4080(&(pSVar7->_1).this_arg,points);
      (pSVar7->_1).declaringType = pIVar17;
      il2cpp_runtime_helper_022b4080(&(pSVar7->_1).declaringType,pIVar17);
      *(float *)((long)&(pSVar7->_1).typeMetadataHandle + 4) = (float)(slices + 1);
      (pSVar7->_1).element_class = pIVar16;
      il2cpp_runtime_helper_022b4080(&(pSVar7->_1).element_class,pIVar16);
      return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar7;
    }
    uVar32 = il2cpp_runtime_helper_022b2c90();
    pIVar16 = pIVar23;
    lVar12 = lVar26;
    if (*(long **)(lVar26 + 0x38) == (long *)0x0) {
      il2cpp_runtime_helper_02300a20(lVar26);
      lVar6 = **(long **)(lVar26 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = **(long **)(lVar26 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0();
    }
    pSVar8 = (System_Collections_Generic_IEnumerable_Vector3__o *)il2cpp_runtime_helper_023052d0(lVar6);
    pIVar22 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
    pSVar15 = pSVar8;
    (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x38) + 8))();
    if (pSVar8 != (System_Collections_Generic_IEnumerable_Vector3__o *)0x0) {
      pSVar8[6].klass = pSVar29;
      il2cpp_runtime_helper_022b4080(pSVar8 + 6,pSVar29);
      pSVar8[3].klass = pSVar21;
      il2cpp_runtime_helper_022b4080(pSVar8 + 3,pSVar21);
      pSVar8[5].klass = extraout_RDX;
      il2cpp_runtime_helper_022b4080(pSVar8 + 5,extraout_RDX);
      *(undefined4 *)((long)&pSVar8[6].monitor + 4) = uVar32;
      pSVar8[4].klass = (System_Collections_Generic_IEnumerable_Vector3__c *)pIVar23;
      il2cpp_runtime_helper_022b4080(pSVar8 + 4,pIVar23);
      return pSVar8;
    }
    il2cpp_runtime_helper_022b2c90();
    uVar3 = SUB81(pIVar16,0);
    lVar26 = lVar12;
    if (*(long **)(lVar12 + 0x38) == (long *)0x0) {
      il2cpp_runtime_helper_02300a20(lVar12);
      lVar6 = **(long **)(lVar12 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = **(long **)(lVar12 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0();
    }
    __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(lVar6);
    pIVar23 = (Il2CppClass *)&g_data_fffffffe;
    pIVar30 = __this;
    Interpolate__NewCatmullRom_d__20_object____ctor
              (__this,-2,*(MethodInfo_2F65260 **)(*(long *)(lVar12 + 0x38) + 8));
    if (__this != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
      (__this->fields).__3__nodes = (System_Collections_IList_o *)pSVar15;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__3__nodes,pSVar15);
      (__this->fields).__3__toVector3 = pIVar22;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__3__toVector3,pIVar22);
      (__this->fields).slices = extraout_EDX;
      *(undefined1 *)((long)&(__this->fields).loop + 1) = uVar3;
      return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
    }
    il2cpp_runtime_helper_022b2c90();
    uVar3 = SUB81(pIVar16,0);
    lVar12 = lVar26;
    if (*(long **)(lVar26 + 0x38) == (long *)0x0) {
      il2cpp_runtime_helper_02300a20(lVar26);
      lVar6 = **(long **)(lVar26 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = **(long **)(lVar26 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0();
    }
    pSVar7 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(lVar6);
    uVar24 = 0xfffffffe;
    pSVar29 = pSVar7;
    Interpolate__NewCatmullRom_d__20_Vector3____ctor
              ((Interpolate__NewCatmullRom_d__20_T__o *)pSVar7,-2,
               *(MethodInfo_2F65BB0 **)(*(long *)(lVar26 + 0x38) + 8));
    if (pSVar7 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
      (pSVar7->_1).this_arg.data = pIVar30;
      il2cpp_runtime_helper_022b4080(&(pSVar7->_1).this_arg,pIVar30);
      (pSVar7->_1).element_class = pIVar23;
      il2cpp_runtime_helper_022b4080(&(pSVar7->_1).element_class,pIVar23);
      *(int32_t *)&(pSVar7->_1).declaringType = extraout_EDX_00;
      *(undefined1 *)((long)&(pSVar7->_1).castClass + 1) = uVar3;
      return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar7;
    }
    il2cpp_runtime_helper_022b2c90();
    uVar3 = SUB81(pIVar16,0);
    lVar26 = lVar12;
    if (*(long **)(lVar12 + 0x38) == (long *)0x0) {
      il2cpp_runtime_helper_02300a20(lVar12);
      lVar6 = **(long **)(lVar12 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = **(long **)(lVar12 + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0();
    }
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar6);
    plVar25 = (long *)&g_data_fffffffe;
    pSVar14 = pSVar9;
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 8))();
    if (pSVar9 != (System_String_o *)0x0) {
      pSVar9[2].klass = (System_String_c *)pSVar29;
      il2cpp_runtime_helper_022b4080(pSVar9 + 2,pSVar29);
      pSVar9[2].fields._stringLength = (int)uVar24;
      pSVar9[2].fields._firstChar = (short)((ulong)uVar24 >> 0x20);
      *(short *)&pSVar9[2].fields.field_0x6 = (short)((ulong)uVar24 >> 0x30);
      il2cpp_runtime_helper_022b4080(&pSVar9[2].fields,uVar24);
      *(undefined4 *)&pSVar9[3].monitor = extraout_EDX_01;
      *(undefined1 *)((long)&pSVar9[3].klass + 1) = uVar3;
      return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    pSVar10 = *(System_RuntimeTypeHandle_Fields **)(lVar26 + 0x38);
    if (pSVar10 == (System_RuntimeTypeHandle_Fields *)0x0) {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
      pSVar10 = *(System_RuntimeTypeHandle_Fields **)(lVar26 + 0x38);
      if (pSVar10 == (System_RuntimeTypeHandle_Fields *)0x0) {
        il2cpp_runtime_helper_02300a20(lVar26);
        pSVar10 = *(System_RuntimeTypeHandle_Fields **)(lVar26 + 0x38);
      }
    }
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pSVar10->value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = Unity_VisualScripting_TypeUtility__IsAssignableFrom
                      (pSVar11,(Il2CppObject *)pIVar16,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar4);
    }
    uVar24 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(uVar24,4);
    if (args != (System_Object_array *)0x0) goto label_02664fa4;
label_02664f9f:
    il2cpp_runtime_helper_022b2c90();
label_02664fa4:
    pIVar13 = *(Il2CppObject **)&(pSVar14->fields)._stringLength;
    if (pIVar13 == (Il2CppObject *)0x0) goto label_02664fd6;
    lVar12 = il2cpp_runtime_helper_023051f0(pIVar13,(((args->obj).klass)->_1).element_class);
    if (lVar12 != 0) goto label_02664fd6;
    do {
      uVar24 = il2cpp_runtime_helper_0231b270();
      il2cpp_runtime_helper_022b2b10(uVar24,0);
label_02664fd6:
      if ((int)args->max_length != 0) goto label_02664fe6;
      while( true ) {
        il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
        args->m_Items[0] = pIVar13;
        il2cpp_runtime_helper_022b4080(args->m_Items,pIVar13);
        if (plVar25 == (long *)0x0) goto label_02664f9f;
        pIVar13 = (Il2CppObject *)(**(code **)(*plVar25 + 0x1b8))(plVar25,*(undefined8 *)(*plVar25 + 0x1c0));
        if ((pIVar13 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar13), lVar12 == 0)) break;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar13;
          il2cpp_runtime_helper_022b4080(args->m_Items + 1);
          pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
          if (pIVar16 != (Il2CppClass *)0x0) {
            pSVar11 = System_Object__GetType((Il2CppObject *)pIVar16,(MethodInfo *)0x0);
            if (pSVar11 == (System_Type_o *)0x0) goto label_02664f9f;
            lVar12 = (*(pSVar11->klass->vtable)._3_ToString.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._3_ToString.method);
            if (lVar12 != 0) goto label_026650a8;
          }
          lVar12 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
          il2cpp_runtime_helper_01f681a0(args);
          il2cpp_runtime_helper_01f6def0(args,lVar12);
          il2cpp_runtime_helper_01f6df20(args,2,lVar12);
          SVar2.fields.value =
               (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar26 + 0x38))->value;
          il2cpp_runtime_helper_01f68090(g_data_057b9c50);
          pSVar11 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
          il2cpp_runtime_helper_01f681a0(args);
          il2cpp_runtime_helper_01f6def0(args,pSVar11);
          il2cpp_runtime_helper_01f6df20(args,3,pSVar11);
          pSVar14 = System_String__Format_3af7980(pSVar14,args,(MethodInfo *)0x0);
          il2cpp_runtime_helper_01f681a0(plVar25);
          uVar24 = (**(code **)(*plVar25 + 0x238))(plVar25,*(undefined8 *)(*plVar25 + 0x240));
          il2cpp_runtime_helper_01f681a0(uVar24);
          plVar25 = (long *)il2cpp_runtime_helper_01f6e290(uVar24,(long)extraout_EDX_02);
          il2cpp_runtime_helper_01f681a0(plVar25);
          pSVar9 = (System_String_o *)
                   (**(code **)(*plVar25 + 0x1d8))(plVar25,*(undefined8 *)(*plVar25 + 0x1e0));
          uVar24 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar24);
          System_ArgumentException___ctor_3c0adc0(__this_00,pSVar14,pSVar9,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2b10();
          if (*(long *)(lVar26 + 0x38) == 0) {
            il2cpp_runtime_helper_02300a20(lVar26);
          }
          auVar34 = (*__this_00->klass[2].vtable._10_get_Source.methodPtr)
                              (__this_00,__this_00->klass[2].vtable._10_get_Source.method);
          vtableDispatch = *(code **)**(undefined8 **)(lVar26 + 0x38);
          pSVar15 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                    (*vtableDispatch)
                              (auVar34._0_8_,(undefined8 *)**(undefined8 **)(lVar26 + 0x38),auVar34._8_8_,
                               vtableDispatch);
          return pSVar15;
        }
      }
    } while( true );
  }
  uVar32 = il2cpp_runtime_helper_022b2c90();
  pvVar28 = pvVar27;
  nodes = pSVar31;
  if (pvVar27 != (void *)0x0) {
    pSVar15 = (System_Collections_Generic_IEnumerable_Vector3__o *)
              (*(ulong *)((long)pvVar27 + 0x18) & 0xffffffff);
    uVar18 = (int)*(ulong *)((long)pvVar27 + 0x18) - 1;
    if (0 < (int)uVar18) {
      pSVar8 = (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar18;
      do {
        if (pSVar31 == (System_Collections_IList_o *)0x0) {
          if (((int)pSVar15 == 0) || ((int)pSVar15 == 1)) goto label_0406090f;
          goto label_04060914;
        }
        pSVar20 = (System_Collections_Generic_IEnumerable_Vector3__o *)0x0;
        pfVar19 = (float *)((long)pvVar27 + 0x20);
        do {
          if ((pSVar15 <= pSVar20) ||
             (pSVar15 <= (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar20->klass + 1)))
          goto label_0406090f;
          pvVar28 = pSVar31[2].monitor;
          nodes = (System_Collections_IList_o *)pSVar31[4].klass;
          fVar33 = (float)(*pSVar31[1].monitor)(*pfVar19,pfVar19[3] - *pfVar19,uVar32,in_XMM1_Da);
          uVar18 = *(uint *)((long)pvVar27 + 0x18);
          if (((System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar18 <= pSVar20) ||
             (*pfVar19 = fVar33,
             (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar18 <=
             (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar20->klass + 1)))
          goto label_0406090f;
          pvVar28 = pSVar31[2].monitor;
          nodes = (System_Collections_IList_o *)pSVar31[4].klass;
          fVar33 = (float)(*pSVar31[1].monitor)(pfVar19[1],pfVar19[4] - pfVar19[1],uVar32,in_XMM1_Da);
          uVar18 = *(uint *)((long)pvVar27 + 0x18);
          if (((System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar18 <= pSVar20) ||
             (pfVar19[1] = fVar33,
             (System_Collections_Generic_IEnumerable_Vector3__o *)(ulong)uVar18 <=
             (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar20->klass + 1)))
          goto label_0406090f;
          pvVar28 = pSVar31[2].monitor;
          nodes = (System_Collections_IList_o *)pSVar31[4].klass;
          fVar33 = (float)(*pSVar31[1].monitor)(pfVar19[2],pfVar19[5] - pfVar19[2],uVar32,in_XMM1_Da);
          pSVar15 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                    (ulong)*(uint *)((long)pvVar27 + 0x18);
          if (pSVar15 <= pSVar20) goto label_0406090f;
          pfVar19[2] = fVar33;
          pfVar19 = pfVar19 + 3;
          pSVar20 = (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar20->klass + 1);
        } while (pSVar20 != pSVar8);
        pSVar8 = (System_Collections_Generic_IEnumerable_Vector3__o *)((long)&pSVar8[-1].monitor + 7);
      } while (0 < (int)pSVar8);
    }
    if ((int)pSVar15 != 0) {
      return pSVar15;
    }
label_0406090f:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04060914:
  iVar5 = (int32_t)pvVar28;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
    g_data_057ac2a2 = '\x01';
  }
  pIVar22 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
  Interpolate_ToVector3_object____ctor();
  pSVar15 = Interpolate__NewCatmullRom_object_(nodes,pIVar22,iVar5,extraout_EDX_03 & 0xff,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
  return pSVar15;
}


// Interpolate$$NewBezier<object>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier_object_ (Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, const MethodInfo_25649C0* method);
// 0x26649c0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_object_
          (Interpolate_Function_o *ease,System_Collections_IList_o *nodes,
          Interpolate_ToVector3_T__o *toVector3,float maxStep,
          System_Collections_Generic_IEnumerable_float__o *steps,MethodInfo_25649C0 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  code *vtableDispatch;
  undefined1 uVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  Interpolate_Function_o *__this;
  Il2CppClass *pIVar6;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar7;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar8;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  System_String_o *pSVar9;
  MethodInfo_25649C0_RGCTXs *pMVar10;
  System_Type_o *pSVar11;
  undefined4 extraout_var;
  System_Object_array *args;
  long lVar12;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  System_ArgumentException_o *__this_01;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar15;
  Il2CppClass *pIVar16;
  int32_t extraout_EDX;
  int32_t extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int extraout_EDX_02;
  Il2CppClass *extraout_RDX;
  System_Collections_Generic_IEnumerable_Vector3__c *extraout_RDX_00;
  System_Collections_IList_o *pSVar17;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar18;
  Interpolate_ToVector3_T__o *pIVar19;
  undefined8 uVar20;
  long *plVar21;
  MethodInfo_25649C0 *pMVar22;
  Interpolate_Function_o *pIVar23;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar24;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar25;
  MethodInfo_25649C0 *pMVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  
  pIVar16 = (Il2CppClass *)steps;
  pMVar26 = method;
  if (method->rgctx_data == (MethodInfo_25649C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pIVar5 = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (Interpolate_Function_o *)il2cpp_runtime_helper_023052d0(pIVar5);
  pSVar17 = (System_Collections_IList_o *)&g_data_fffffffe;
  pIVar23 = __this;
  Interpolate__NewBezier_d__16_object____ctor
            ((Interpolate__NewBezier_d__16_T__o *)__this,-2,
             (MethodInfo_2F63230 *)method->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (__this != (Interpolate_Function_o *)0x0) {
    ((Interpolate__NewBezier_d__16_T__Fields *)&__this->fields)->__3__ease = ease;
    il2cpp_runtime_helper_022b4080(&((Interpolate__NewBezier_d__16_T__Fields *)&__this->fields)->__3__ease,ease);
    ((Interpolate__NewBezier_d__16_T__Fields *)&__this->fields)->__3__nodes = nodes;
    il2cpp_runtime_helper_022b4080(&((Interpolate__NewBezier_d__16_T__Fields *)&__this->fields)->__3__nodes,nodes);
    ((Interpolate__NewBezier_d__16_T__Fields *)&__this->fields)->__3__toVector3 = toVector3;
    il2cpp_runtime_helper_022b4080(&((Interpolate__NewBezier_d__16_T__Fields *)&__this->fields)->__3__toVector3,toVector3)
    ;
    ((Interpolate__NewBezier_d__16_T__Fields *)&__this->fields)->__3__maxStep = maxStep;
    ((Interpolate__NewBezier_d__16_T__Fields *)&__this->fields)->__3__steps = steps;
    il2cpp_runtime_helper_022b4080(&((Interpolate__NewBezier_d__16_T__Fields *)&__this->fields)->__3__steps,steps);
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  fVar27 = (float)il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar16;
  pMVar22 = pMVar26;
  if (pMVar26->rgctx_data == (MethodInfo_25649C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar26);
    pIVar6 = pMVar26->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar6->_2).field_0x6d;
  }
  else {
    pIVar6 = pMVar26->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar6->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar7 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(pIVar6);
  pSVar18 = (System_Collections_Generic_IEnumerable_Vector3__c *)0xfffffffe;
  pSVar24 = pSVar7;
  Interpolate__NewBezier_d__16_Vector3____ctor
            ((Interpolate__NewBezier_d__16_T__o *)pSVar7,-2,
             (MethodInfo_2F63D60 *)pMVar26->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (pSVar7 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar7->_1).generic_class = pIVar23;
    il2cpp_runtime_helper_022b4080(&(pSVar7->_1).generic_class,pIVar23);
    (pSVar7->_1).this_arg.data = pSVar17;
    il2cpp_runtime_helper_022b4080(&(pSVar7->_1).this_arg,pSVar17);
    (pSVar7->_1).declaringType = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pSVar7->_1).declaringType,extraout_RDX);
    *(float *)((long)&(pSVar7->_1).typeMetadataHandle + 4) = fVar27;
    (pSVar7->_1).element_class = pIVar16;
    il2cpp_runtime_helper_022b4080(&(pSVar7->_1).element_class,pIVar16);
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar7;
  }
  uVar28 = il2cpp_runtime_helper_022b2c90();
  pIVar16 = pIVar5;
  pMVar26 = pMVar22;
  if (pMVar22->rgctx_data == (MethodInfo_25649C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar22);
    pIVar6 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar6->_2).field_0x6d;
  }
  else {
    pIVar6 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar6->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar8 = (System_Collections_Generic_IEnumerable_Vector3__o *)il2cpp_runtime_helper_023052d0(pIVar6);
  pIVar19 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
  pSVar15 = pSVar8;
  (*pMVar22->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor->methodPointer)();
  if (pSVar8 != (System_Collections_Generic_IEnumerable_Vector3__o *)0x0) {
    pSVar8[6].klass = pSVar24;
    il2cpp_runtime_helper_022b4080(pSVar8 + 6,pSVar24);
    pSVar8[3].klass = pSVar18;
    il2cpp_runtime_helper_022b4080(pSVar8 + 3,pSVar18);
    pSVar8[5].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pSVar8 + 5,extraout_RDX_00);
    *(undefined4 *)((long)&pSVar8[6].monitor + 4) = uVar28;
    pSVar8[4].klass = (System_Collections_Generic_IEnumerable_Vector3__c *)pIVar5;
    il2cpp_runtime_helper_022b4080(pSVar8 + 4,pIVar5);
    return pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(pIVar16,0);
  pMVar22 = pMVar26;
  if (pMVar26->rgctx_data == (MethodInfo_25649C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar26);
    pIVar5 = pMVar26->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pMVar26->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  pIVar5 = (Il2CppClass *)&g_data_fffffffe;
  pIVar25 = __this_00;
  Interpolate__NewCatmullRom_d__20_object____ctor
            (__this_00,-2,(MethodInfo_2F65260 *)pMVar26->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor)
  ;
  if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    (__this_00->fields).__3__nodes = (System_Collections_IList_o *)pSVar15;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__3__nodes,pSVar15);
    (__this_00->fields).__3__toVector3 = pIVar19;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__3__toVector3,pIVar19);
    (__this_00->fields).slices = extraout_EDX;
    *(undefined1 *)((long)&(__this_00->fields).loop + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(pIVar16,0);
  pMVar26 = pMVar22;
  if (pMVar22->rgctx_data == (MethodInfo_25649C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar22);
    pIVar6 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar6->_2).field_0x6d;
  }
  else {
    pIVar6 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar6->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar7 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(pIVar6);
  uVar20 = 0xfffffffe;
  pSVar24 = pSVar7;
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            ((Interpolate__NewCatmullRom_d__20_T__o *)pSVar7,-2,
             (MethodInfo_2F65BB0 *)pMVar22->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (pSVar7 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar7->_1).this_arg.data = pIVar25;
    il2cpp_runtime_helper_022b4080(&(pSVar7->_1).this_arg,pIVar25);
    (pSVar7->_1).element_class = pIVar5;
    il2cpp_runtime_helper_022b4080(&(pSVar7->_1).element_class,pIVar5);
    *(int32_t *)&(pSVar7->_1).declaringType = extraout_EDX_00;
    *(undefined1 *)((long)&(pSVar7->_1).castClass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(pIVar16,0);
  pMVar22 = pMVar26;
  if (pMVar26->rgctx_data == (MethodInfo_25649C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar26);
    pIVar5 = pMVar26->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pMVar26->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(pIVar5);
  plVar21 = (long *)&g_data_fffffffe;
  pSVar14 = pSVar9;
  (*pMVar26->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor->methodPointer)();
  if (pSVar9 != (System_String_o *)0x0) {
    pSVar9[2].klass = (System_String_c *)pSVar24;
    il2cpp_runtime_helper_022b4080(pSVar9 + 2,pSVar24);
    pSVar9[2].fields._stringLength = (int)uVar20;
    pSVar9[2].fields._firstChar = (short)((ulong)uVar20 >> 0x20);
    *(short *)&pSVar9[2].fields.field_0x6 = (short)((ulong)uVar20 >> 0x30);
    il2cpp_runtime_helper_022b4080(&pSVar9[2].fields,uVar20);
    *(undefined4 *)&pSVar9[3].monitor = extraout_EDX_01;
    *(undefined1 *)((long)&pSVar9[3].klass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar22->rgctx_data;
  if (pMVar10 == (MethodInfo_25649C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pMVar10 = pMVar22->rgctx_data;
    if (pMVar10 == (MethodInfo_25649C0_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(pMVar22);
      pMVar10 = pMVar22->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar10->_0_Interpolate__NewBezier_d__16_T_;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = Unity_VisualScripting_TypeUtility__IsAssignableFrom
                    (pSVar11,(Il2CppObject *)pIVar16,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar4);
  }
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(uVar20,4);
  if (args != (System_Object_array *)0x0) goto label_02664fa4;
label_02664f9f:
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  pIVar13 = *(Il2CppObject **)&(pSVar14->fields)._stringLength;
  if (pIVar13 == (Il2CppObject *)0x0) goto label_02664fd6;
  lVar12 = il2cpp_runtime_helper_023051f0(pIVar13,(((args->obj).klass)->_1).element_class);
  if (lVar12 != 0) goto label_02664fd6;
  do {
    uVar20 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar20,0);
label_02664fd6:
    if ((int)args->max_length != 0) goto label_02664fe6;
    while( true ) {
      il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
      args->m_Items[0] = pIVar13;
      il2cpp_runtime_helper_022b4080(args->m_Items,pIVar13);
      if (plVar21 == (long *)0x0) goto label_02664f9f;
      pIVar13 = (Il2CppObject *)(**(code **)(*plVar21 + 0x1b8))(plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
      if ((pIVar13 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar13), lVar12 == 0)) break;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar13;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
        if (pIVar16 != (Il2CppClass *)0x0) {
          pSVar11 = System_Object__GetType((Il2CppObject *)pIVar16,(MethodInfo *)0x0);
          if (pSVar11 == (System_Type_o *)0x0) goto label_02664f9f;
          lVar12 = (*(pSVar11->klass->vtable)._3_ToString.methodPtr)
                             (pSVar11,(pSVar11->klass->vtable)._3_ToString.method);
          if (lVar12 != 0) goto label_026650a8;
        }
        lVar12 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,lVar12);
        il2cpp_runtime_helper_01f6df20(args,2,lVar12);
        SVar2.fields.value =
             (System_RuntimeTypeHandle_Fields)pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
        il2cpp_runtime_helper_01f68090(g_data_057b9c50);
        pSVar11 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,pSVar11);
        il2cpp_runtime_helper_01f6df20(args,3,pSVar11);
        pSVar14 = System_String__Format_3af7980(pSVar14,args,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(plVar21);
        uVar20 = (**(code **)(*plVar21 + 0x238))(plVar21,*(undefined8 *)(*plVar21 + 0x240));
        il2cpp_runtime_helper_01f681a0(uVar20);
        plVar21 = (long *)il2cpp_runtime_helper_01f6e290(uVar20,(long)extraout_EDX_02);
        il2cpp_runtime_helper_01f681a0(plVar21);
        pSVar9 = (System_String_o *)(**(code **)(*plVar21 + 0x1d8))(plVar21,*(undefined8 *)(*plVar21 + 0x1e0))
        ;
        uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
        __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar20);
        System_ArgumentException___ctor_3c0adc0(__this_01,pSVar14,pSVar9,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2b10();
        if (pMVar22->rgctx_data == (MethodInfo_25649C0_RGCTXs *)0x0) {
          il2cpp_runtime_helper_02300a20(pMVar22);
        }
        auVar29 = (*__this_01->klass[2].vtable._10_get_Source.methodPtr)
                            (__this_01,__this_01->klass[2].vtable._10_get_Source.method);
        pIVar16 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
        vtableDispatch = (pIVar16->_1).image;
        pSVar15 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*vtableDispatch)(auVar29._0_8_,pIVar16,auVar29._8_8_,vtableDispatch);
        return pSVar15;
      }
    }
  } while( true );
}


// Interpolate$$NewBezier<Vector3>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier_Vector3_ (Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, const MethodInfo_2564AB0* method);
// 0x2664ab0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_Vector3_
          (Interpolate_Function_o *ease,System_Collections_IList_o *nodes,
          Interpolate_ToVector3_T__o *toVector3,float maxStep,
          System_Collections_Generic_IEnumerable_float__o *steps,MethodInfo_2564AB0 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  code *vtableDispatch;
  undefined1 uVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar6;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar7;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  Il2CppClass *pIVar8;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar9;
  System_String_o *pSVar10;
  MethodInfo_2564AB0_RGCTXs *pMVar11;
  System_Type_o *pSVar12;
  undefined4 extraout_var;
  System_Object_array *args;
  long lVar13;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  System_ArgumentException_o *__this_00;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar16;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar17;
  int32_t extraout_EDX;
  int32_t extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int extraout_EDX_02;
  System_Collections_Generic_IEnumerable_Vector3__c *extraout_RDX;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar18;
  Interpolate_ToVector3_T__o *pIVar19;
  undefined8 uVar20;
  long *plVar21;
  MethodInfo_2564AB0 *pMVar22;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar23;
  MethodInfo_2564AB0 *pMVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  
  pSVar17 = (System_Collections_Generic_IEnumerable_Vector3__c *)steps;
  pMVar22 = method;
  if (method->rgctx_data == (MethodInfo_2564AB0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pIVar5 = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar6 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(pIVar5);
  pSVar18 = (System_Collections_Generic_IEnumerable_Vector3__c *)0xfffffffe;
  pSVar9 = pSVar6;
  Interpolate__NewBezier_d__16_Vector3____ctor
            ((Interpolate__NewBezier_d__16_T__o *)pSVar6,-2,
             (MethodInfo_2F63D60 *)method->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (pSVar6 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar6->_1).generic_class = ease;
    il2cpp_runtime_helper_022b4080(&(pSVar6->_1).generic_class,ease);
    (pSVar6->_1).this_arg.data = nodes;
    il2cpp_runtime_helper_022b4080(&(pSVar6->_1).this_arg,nodes);
    (pSVar6->_1).declaringType = (Il2CppClass *)toVector3;
    il2cpp_runtime_helper_022b4080(&(pSVar6->_1).declaringType,toVector3);
    *(float *)((long)&(pSVar6->_1).typeMetadataHandle + 4) = maxStep;
    (pSVar6->_1).element_class = (Il2CppClass *)steps;
    il2cpp_runtime_helper_022b4080(&(pSVar6->_1).element_class,steps);
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar6;
  }
  uVar25 = il2cpp_runtime_helper_022b2c90();
  pSVar6 = pSVar17;
  pMVar24 = pMVar22;
  if (pMVar22->rgctx_data == (MethodInfo_2564AB0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar22);
    pIVar5 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar7 = (System_Collections_Generic_IEnumerable_Vector3__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  pIVar19 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
  pSVar16 = pSVar7;
  (*pMVar22->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor->methodPointer)();
  if (pSVar7 != (System_Collections_Generic_IEnumerable_Vector3__o *)0x0) {
    pSVar7[6].klass = pSVar9;
    il2cpp_runtime_helper_022b4080(pSVar7 + 6,pSVar9);
    pSVar7[3].klass = pSVar18;
    il2cpp_runtime_helper_022b4080(pSVar7 + 3,pSVar18);
    pSVar7[5].klass = extraout_RDX;
    il2cpp_runtime_helper_022b4080(pSVar7 + 5,extraout_RDX);
    *(undefined4 *)((long)&pSVar7[6].monitor + 4) = uVar25;
    pSVar7[4].klass = pSVar17;
    il2cpp_runtime_helper_022b4080(pSVar7 + 4,pSVar17);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(pSVar6,0);
  pMVar22 = pMVar24;
  if (pMVar24->rgctx_data == (MethodInfo_2564AB0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar24);
    pIVar5 = pMVar24->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pMVar24->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  pIVar5 = (Il2CppClass *)&g_data_fffffffe;
  pIVar23 = __this;
  Interpolate__NewCatmullRom_d__20_object____ctor
            (__this,-2,(MethodInfo_2F65260 *)pMVar24->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (__this != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    (__this->fields).__3__nodes = (System_Collections_IList_o *)pSVar16;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__nodes,pSVar16);
    (__this->fields).__3__toVector3 = pIVar19;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__toVector3,pIVar19);
    (__this->fields).slices = extraout_EDX;
    *(undefined1 *)((long)&(__this->fields).loop + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(pSVar6,0);
  pMVar24 = pMVar22;
  if (pMVar22->rgctx_data == (MethodInfo_2564AB0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar22);
    pIVar8 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar8->_2).field_0x6d;
  }
  else {
    pIVar8 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar8->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar9 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(pIVar8);
  uVar20 = 0xfffffffe;
  pSVar17 = pSVar9;
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            ((Interpolate__NewCatmullRom_d__20_T__o *)pSVar9,-2,
             (MethodInfo_2F65BB0 *)pMVar22->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (pSVar9 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (pSVar9->_1).this_arg.data = pIVar23;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).this_arg,pIVar23);
    (pSVar9->_1).element_class = pIVar5;
    il2cpp_runtime_helper_022b4080(&(pSVar9->_1).element_class,pIVar5);
    *(int32_t *)&(pSVar9->_1).declaringType = extraout_EDX_00;
    *(undefined1 *)((long)&(pSVar9->_1).castClass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(pSVar6,0);
  pMVar22 = pMVar24;
  if (pMVar24->rgctx_data == (MethodInfo_2564AB0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar24);
    pIVar5 = pMVar24->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pMVar24->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_023052d0(pIVar5);
  plVar21 = (long *)&g_data_fffffffe;
  pSVar15 = pSVar10;
  (*pMVar24->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor->methodPointer)();
  if (pSVar10 != (System_String_o *)0x0) {
    pSVar10[2].klass = (System_String_c *)pSVar17;
    il2cpp_runtime_helper_022b4080(pSVar10 + 2,pSVar17);
    pSVar10[2].fields._stringLength = (int)uVar20;
    pSVar10[2].fields._firstChar = (short)((ulong)uVar20 >> 0x20);
    *(short *)&pSVar10[2].fields.field_0x6 = (short)((ulong)uVar20 >> 0x30);
    il2cpp_runtime_helper_022b4080(&pSVar10[2].fields,uVar20);
    *(undefined4 *)&pSVar10[3].monitor = extraout_EDX_01;
    *(undefined1 *)((long)&pSVar10[3].klass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar22->rgctx_data;
  if (pMVar11 == (MethodInfo_2564AB0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pMVar11 = pMVar22->rgctx_data;
    if (pMVar11 == (MethodInfo_2564AB0_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(pMVar22);
      pMVar11 = pMVar22->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar11->_0_Interpolate__NewBezier_d__16_T_;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = Unity_VisualScripting_TypeUtility__IsAssignableFrom
                    (pSVar12,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar4);
  }
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(uVar20,4);
  if (args != (System_Object_array *)0x0) goto label_02664fa4;
label_02664f9f:
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  pIVar14 = *(Il2CppObject **)&(pSVar15->fields)._stringLength;
  if (pIVar14 == (Il2CppObject *)0x0) goto label_02664fd6;
  lVar13 = il2cpp_runtime_helper_023051f0(pIVar14,(((args->obj).klass)->_1).element_class);
  if (lVar13 != 0) goto label_02664fd6;
  do {
    uVar20 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar20,0);
label_02664fd6:
    if ((int)args->max_length != 0) goto label_02664fe6;
    while( true ) {
      il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
      args->m_Items[0] = pIVar14;
      il2cpp_runtime_helper_022b4080(args->m_Items,pIVar14);
      if (plVar21 == (long *)0x0) goto label_02664f9f;
      pIVar14 = (Il2CppObject *)(**(code **)(*plVar21 + 0x1b8))(plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
      if ((pIVar14 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar14), lVar13 == 0)) break;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar14;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
        if (pSVar6 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
          pSVar12 = System_Object__GetType((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          if (pSVar12 == (System_Type_o *)0x0) goto label_02664f9f;
          lVar13 = (*(pSVar12->klass->vtable)._3_ToString.methodPtr)
                             (pSVar12,(pSVar12->klass->vtable)._3_ToString.method);
          if (lVar13 != 0) goto label_026650a8;
        }
        lVar13 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,lVar13);
        il2cpp_runtime_helper_01f6df20(args,2,lVar13);
        SVar2.fields.value =
             (System_RuntimeTypeHandle_Fields)pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
        il2cpp_runtime_helper_01f68090(g_data_057b9c50);
        pSVar12 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,pSVar12);
        il2cpp_runtime_helper_01f6df20(args,3,pSVar12);
        pSVar15 = System_String__Format_3af7980(pSVar15,args,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(plVar21);
        uVar20 = (**(code **)(*plVar21 + 0x238))(plVar21,*(undefined8 *)(*plVar21 + 0x240));
        il2cpp_runtime_helper_01f681a0(uVar20);
        plVar21 = (long *)il2cpp_runtime_helper_01f6e290(uVar20,(long)extraout_EDX_02);
        il2cpp_runtime_helper_01f681a0(plVar21);
        pSVar10 = (System_String_o *)
                  (**(code **)(*plVar21 + 0x1d8))(plVar21,*(undefined8 *)(*plVar21 + 0x1e0));
        uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar20);
        System_ArgumentException___ctor_3c0adc0(__this_00,pSVar15,pSVar10,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2b10();
        if (pMVar22->rgctx_data == (MethodInfo_2564AB0_RGCTXs *)0x0) {
          il2cpp_runtime_helper_02300a20(pMVar22);
        }
        auVar26 = (*__this_00->klass[2].vtable._10_get_Source.methodPtr)
                            (__this_00,__this_00->klass[2].vtable._10_get_Source.method);
        pIVar5 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
        vtableDispatch = (pIVar5->_1).image;
        pSVar16 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*vtableDispatch)(auVar26._0_8_,pIVar5,auVar26._8_8_,vtableDispatch);
        return pSVar16;
      }
    }
  } while( true );
}


// Interpolate$$NewBezier<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier___Il2CppFullySharedGenericType_ (Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, const MethodInfo_2564BA0* method);
// 0x2664ba0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier___Il2CppFullySharedGenericType_
          (Interpolate_Function_o *ease,System_Collections_IList_o *nodes,
          Interpolate_ToVector3_T__o *toVector3,float maxStep,
          System_Collections_Generic_IEnumerable_float__o *steps,MethodInfo_2564BA0 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  code *vtableDispatch;
  undefined1 uVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar6;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  Il2CppClass *pIVar7;
  System_Collections_Generic_IEnumerable_Vector3__c *__this_00;
  System_String_o *pSVar8;
  MethodInfo_2564BA0_RGCTXs *pMVar9;
  System_Type_o *pSVar10;
  undefined4 extraout_var;
  System_Object_array *args;
  long lVar11;
  Il2CppObject *pIVar12;
  System_String_o *pSVar13;
  System_ArgumentException_o *__this_01;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar14;
  Il2CppObject *pIVar15;
  int32_t extraout_EDX;
  int32_t extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int extraout_EDX_02;
  Interpolate_ToVector3_T__o *pIVar16;
  undefined8 uVar17;
  long *plVar18;
  MethodInfo_2564BA0 *pMVar19;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar20;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar21;
  MethodInfo_2564BA0 *pMVar22;
  undefined1 auVar23 [16];
  
  pIVar15 = (Il2CppObject *)steps;
  pMVar22 = method;
  if (method->rgctx_data == (MethodInfo_2564BA0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pIVar5 = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar6 = (System_Collections_Generic_IEnumerable_Vector3__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  pIVar16 = (Interpolate_ToVector3_T__o *)&g_data_fffffffe;
  pSVar14 = pSVar6;
  (*method->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor->methodPointer)();
  if (pSVar6 != (System_Collections_Generic_IEnumerable_Vector3__o *)0x0) {
    pSVar6[6].klass = (System_Collections_Generic_IEnumerable_Vector3__c *)ease;
    il2cpp_runtime_helper_022b4080(pSVar6 + 6,ease);
    pSVar6[3].klass = (System_Collections_Generic_IEnumerable_Vector3__c *)nodes;
    il2cpp_runtime_helper_022b4080(pSVar6 + 3,nodes);
    pSVar6[5].klass = (System_Collections_Generic_IEnumerable_Vector3__c *)toVector3;
    il2cpp_runtime_helper_022b4080(pSVar6 + 5,toVector3);
    *(float *)((long)&pSVar6[6].monitor + 4) = maxStep;
    pSVar6[4].klass = (System_Collections_Generic_IEnumerable_Vector3__c *)steps;
    il2cpp_runtime_helper_022b4080(pSVar6 + 4,steps);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(pIVar15,0);
  pMVar19 = pMVar22;
  if (pMVar22->rgctx_data == (MethodInfo_2564BA0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar22);
    pIVar5 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  pIVar5 = (Il2CppClass *)&g_data_fffffffe;
  pIVar20 = __this;
  Interpolate__NewCatmullRom_d__20_object____ctor
            (__this,-2,(MethodInfo_2F65260 *)pMVar22->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (__this != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    (__this->fields).__3__nodes = (System_Collections_IList_o *)pSVar14;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__nodes,pSVar14);
    (__this->fields).__3__toVector3 = pIVar16;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__toVector3,pIVar16);
    (__this->fields).slices = extraout_EDX;
    *(undefined1 *)((long)&(__this->fields).loop + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(pIVar15,0);
  pMVar22 = pMVar19;
  if (pMVar19->rgctx_data == (MethodInfo_2564BA0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar19);
    pIVar7 = pMVar19->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar7->_2).field_0x6d;
  }
  else {
    pIVar7 = pMVar19->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar7->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_00 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(pIVar7);
  uVar17 = 0xfffffffe;
  pSVar21 = __this_00;
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            ((Interpolate__NewCatmullRom_d__20_T__o *)__this_00,-2,
             (MethodInfo_2F65BB0 *)pMVar19->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (__this_00 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (__this_00->_1).this_arg.data = pIVar20;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).this_arg,pIVar20);
    (__this_00->_1).element_class = pIVar5;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).element_class,pIVar5);
    *(int32_t *)&(__this_00->_1).declaringType = extraout_EDX_00;
    *(undefined1 *)((long)&(__this_00->_1).castClass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(pIVar15,0);
  pMVar19 = pMVar22;
  if (pMVar22->rgctx_data == (MethodInfo_2564BA0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar22);
    pIVar5 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pMVar22->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023052d0(pIVar5);
  plVar18 = (long *)&g_data_fffffffe;
  pSVar13 = pSVar8;
  (*pMVar22->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor->methodPointer)();
  if (pSVar8 != (System_String_o *)0x0) {
    pSVar8[2].klass = (System_String_c *)pSVar21;
    il2cpp_runtime_helper_022b4080(pSVar8 + 2,pSVar21);
    pSVar8[2].fields._stringLength = (int)uVar17;
    pSVar8[2].fields._firstChar = (short)((ulong)uVar17 >> 0x20);
    *(short *)&pSVar8[2].fields.field_0x6 = (short)((ulong)uVar17 >> 0x30);
    il2cpp_runtime_helper_022b4080(&pSVar8[2].fields,uVar17);
    *(undefined4 *)&pSVar8[3].monitor = extraout_EDX_01;
    *(undefined1 *)((long)&pSVar8[3].klass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar19->rgctx_data;
  if (pMVar9 == (MethodInfo_2564BA0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pMVar9 = pMVar19->rgctx_data;
    if (pMVar9 == (MethodInfo_2564BA0_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(pMVar19);
      pMVar9 = pMVar19->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar9->_0_Interpolate__NewBezier_d__16_T_;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = Unity_VisualScripting_TypeUtility__IsAssignableFrom(pSVar10,pIVar15,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar4);
  }
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(uVar17,4);
  if (args != (System_Object_array *)0x0) goto label_02664fa4;
label_02664f9f:
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  pIVar12 = *(Il2CppObject **)&(pSVar13->fields)._stringLength;
  if (pIVar12 == (Il2CppObject *)0x0) goto label_02664fd6;
  lVar11 = il2cpp_runtime_helper_023051f0(pIVar12,(((args->obj).klass)->_1).element_class);
  if (lVar11 != 0) goto label_02664fd6;
  do {
    uVar17 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar17,0);
label_02664fd6:
    if ((int)args->max_length != 0) goto label_02664fe6;
    while( true ) {
      il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
      args->m_Items[0] = pIVar12;
      il2cpp_runtime_helper_022b4080(args->m_Items,pIVar12);
      if (plVar18 == (long *)0x0) goto label_02664f9f;
      pIVar12 = (Il2CppObject *)(**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
      if ((pIVar12 != (Il2CppObject *)0x0) && (lVar11 = il2cpp_runtime_helper_023051f0(pIVar12), lVar11 == 0)) break;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar12;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
        if (pIVar15 != (Il2CppObject *)0x0) {
          pSVar10 = System_Object__GetType(pIVar15,(MethodInfo *)0x0);
          if (pSVar10 == (System_Type_o *)0x0) goto label_02664f9f;
          lVar11 = (*(pSVar10->klass->vtable)._3_ToString.methodPtr)
                             (pSVar10,(pSVar10->klass->vtable)._3_ToString.method);
          if (lVar11 != 0) goto label_026650a8;
        }
        lVar11 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,lVar11);
        il2cpp_runtime_helper_01f6df20(args,2,lVar11);
        SVar2.fields.value =
             (System_RuntimeTypeHandle_Fields)pMVar19->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
        il2cpp_runtime_helper_01f68090(g_data_057b9c50);
        pSVar10 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,pSVar10);
        il2cpp_runtime_helper_01f6df20(args,3,pSVar10);
        pSVar13 = System_String__Format_3af7980(pSVar13,args,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(plVar18);
        uVar17 = (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
        il2cpp_runtime_helper_01f681a0(uVar17);
        plVar18 = (long *)il2cpp_runtime_helper_01f6e290(uVar17,(long)extraout_EDX_02);
        il2cpp_runtime_helper_01f681a0(plVar18);
        pSVar8 = (System_String_o *)(**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0))
        ;
        uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
        __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar17);
        System_ArgumentException___ctor_3c0adc0(__this_01,pSVar13,pSVar8,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2b10();
        if (pMVar19->rgctx_data == (MethodInfo_2564BA0_RGCTXs *)0x0) {
          il2cpp_runtime_helper_02300a20(pMVar19);
        }
        auVar23 = (*__this_01->klass[2].vtable._10_get_Source.methodPtr)
                            (__this_01,__this_01->klass[2].vtable._10_get_Source.method);
        pIVar5 = pMVar19->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
        vtableDispatch = (pIVar5->_1).image;
        pSVar14 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*vtableDispatch)(auVar23._0_8_,pIVar5,auVar23._8_8_,vtableDispatch);
        return pSVar14;
      }
    }
  } while( true );
}


// Interpolate$$Bezier
// il2cpp: UnityEngine_Vector3_o Interpolate__Bezier (Interpolate_Function_o* ease, UnityEngine_Vector3_array* points, float elapsedTime, float duration, const MethodInfo* method);
// 0x40607a0

UnityEngine_Vector3_o
Interpolate__Bezier(Interpolate_Function_o *ease,UnityEngine_Vector3_array *points,float elapsedTime,
                   float duration,MethodInfo *method)

{
  ulong uVar1;
  Interpolate_ToVector3_T__o *toVector3;
  uint uVar2;
  uint extraout_EDX;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector3_o *pUVar3;
  ulong uVar4;
  int32_t slices;
  UnityEngine_Vector3_array *pUVar5;
  Interpolate_Function_o *nodes;
  ulong uVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  undefined8 extraout_XMM0_Qa;
  
  pUVar5 = points;
  nodes = ease;
  fVar8 = duration;
  if (points != (UnityEngine_Vector3_array *)0x0) {
    uVar2 = (uint)points->max_length;
    uVar1 = points->max_length & 0xffffffff;
    if (0 < (int)(uVar2 - 1)) {
      uVar6 = (ulong)(uVar2 - 1);
      do {
        if (ease == (Interpolate_Function_o *)0x0) {
          if (((int)uVar1 == 0) || ((int)uVar1 == 1)) goto label_0406090f;
          goto label_04060914;
        }
        uVar4 = 0;
        pUVar3 = points->m_Items;
        do {
          if ((uVar1 <= uVar4) || (uVar1 <= uVar4 + 1)) goto label_0406090f;
          fVar7 = (pUVar3->fields).x;
          fVar8 = pUVar3[1].fields.x - fVar7;
          pUVar5 = (UnityEngine_Vector3_array *)(ease->fields).method;
          nodes = (Interpolate_Function_o *)(ease->fields).method_code;
          fVar7 = (float)(*(code *)(ease->fields).invoke_impl)
                                   (fVar7,fVar8,elapsedTime,duration,nodes,pUVar5,method);
          uVar1 = (ulong)(uint)points->max_length;
          if (uVar1 <= uVar4) goto label_0406090f;
          (pUVar3->fields).x = fVar7;
          if (uVar1 <= uVar4 + 1) goto label_0406090f;
          fVar7 = (pUVar3->fields).y;
          fVar8 = pUVar3[1].fields.y - fVar7;
          pUVar5 = (UnityEngine_Vector3_array *)(ease->fields).method;
          nodes = (Interpolate_Function_o *)(ease->fields).method_code;
          fVar7 = (float)(*(code *)(ease->fields).invoke_impl)(fVar7,fVar8,elapsedTime,duration);
          uVar1 = (ulong)(uint)points->max_length;
          if (uVar1 <= uVar4) goto label_0406090f;
          (pUVar3->fields).y = fVar7;
          if (uVar1 <= uVar4 + 1) goto label_0406090f;
          fVar7 = (pUVar3->fields).z;
          fVar8 = pUVar3[1].fields.z - fVar7;
          pUVar5 = (UnityEngine_Vector3_array *)(ease->fields).method;
          nodes = (Interpolate_Function_o *)(ease->fields).method_code;
          fVar7 = (float)(*(code *)(ease->fields).invoke_impl)(fVar7,fVar8,elapsedTime,duration);
          uVar2 = (uint)points->max_length;
          uVar1 = (ulong)uVar2;
          if (uVar1 <= uVar4) goto label_0406090f;
          (pUVar3->fields).z = fVar7;
          pUVar3 = pUVar3 + 1;
          uVar4 = uVar4 + 1;
          method = extraout_RDX;
        } while (uVar4 != uVar6);
        uVar6 = uVar6 - 1;
      } while (0 < (int)uVar6);
    }
    if (uVar2 != 0) {
      return (UnityEngine_Vector3_o)points->m_Items[0].fields;
    }
label_0406090f:
    il2cpp_runtime_helper_022b2ca0();
  }
label_04060914:
  slices = (int32_t)pUVar5;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
    g_data_057ac2a2 = '\x01';
  }
  toVector3 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
  Interpolate_ToVector3_object____ctor();
  Interpolate__NewCatmullRom_object_
            ((System_Collections_IList_o *)nodes,toVector3,slices,extraout_EDX & 0xff,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
  UVar9.fields.z = fVar8;
  UVar9.fields.x = (float)(int)extraout_XMM0_Qa;
  UVar9.fields.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
  return (UnityEngine_Vector3_o)UVar9.fields;
}


// Interpolate$$NewCatmullRom
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom (UnityEngine_Transform_array* nodes, int32_t slices, bool loop, const MethodInfo* method);
// 0x4060920

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom
          (UnityEngine_Transform_array *nodes,int32_t slices,bool_conflict loop,MethodInfo *method)

{
  Interpolate_ToVector3_T__o *toVector3;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar1;
  
  if (g_data_057ac2a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_TransformDotPosition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Transform);
    g_data_057ac2a2 = '\x01';
  }
  toVector3 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Transform);
  Interpolate_ToVector3_object____ctor();
  pSVar1 = Interpolate__NewCatmullRom_object_
                     ((System_Collections_IList_o *)nodes,toVector3,slices,loop & 0xff,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Transfor);
  return pSVar1;
}


// Interpolate$$NewCatmullRom
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom (UnityEngine_Vector3_array* points, int32_t slices, bool loop, const MethodInfo* method);
// 0x40609c0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom_3f609c0
          (UnityEngine_Vector3_array *points,int32_t slices,bool_conflict loop,MethodInfo *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  code *vtableDispatch;
  undefined1 uVar3;
  bool_conflict bVar4;
  long lVar5;
  System_Collections_Generic_IEnumerable_Vector3__c *__this;
  System_String_o *pSVar6;
  System_RuntimeTypeHandle_Fields *pSVar7;
  System_Type_o *pSVar8;
  undefined4 extraout_var;
  System_Object_array *args;
  long lVar9;
  Il2CppObject *pIVar10;
  System_String_o *pSVar11;
  System_ArgumentException_o *__this_00;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar12;
  Il2CppClass *pIVar13;
  Il2CppObject *value;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar17;
  undefined1 auVar18 [16];
  
  if (g_data_057ac2a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
    g_data_057ac2a3 = '\x01';
  }
  pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
  Interpolate_ToVector3_Vector3____ctor();
  lVar16 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3;
  value = (Il2CppObject *)(ulong)(loop & 0xff);
  lVar9 = MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3;
  if (*(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3 + 0x38) == (long *)0x0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
    lVar5 = **(long **)(lVar16 + 0x38);
    bVar1 = *(byte *)(lVar5 + 0x135);
  }
  else {
    lVar5 = **(long **)(MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3 + 0x38);
    bVar1 = *(byte *)(lVar5 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar5 = il2cpp_runtime_helper_023009c0();
  }
  __this = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(lVar5);
  uVar14 = 0xfffffffe;
  pSVar17 = __this;
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            ((Interpolate__NewCatmullRom_d__20_T__o *)__this,-2,
             *(MethodInfo_2F65BB0 **)(*(long *)(lVar16 + 0x38) + 8));
  if (__this != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (__this->_1).this_arg.data = points;
    il2cpp_runtime_helper_022b4080(&(__this->_1).this_arg,points);
    (__this->_1).element_class = pIVar13;
    il2cpp_runtime_helper_022b4080(&(__this->_1).element_class,pIVar13);
    *(int32_t *)&(__this->_1).declaringType = slices;
    *(char *)((long)&(__this->_1).castClass + 1) = (char)loop;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(value,0);
  lVar16 = lVar9;
  if (*(long **)(lVar9 + 0x38) == (long *)0x0) {
    il2cpp_runtime_helper_02300a20(lVar9);
    lVar5 = **(long **)(lVar9 + 0x38);
    bVar1 = *(byte *)(lVar5 + 0x135);
  }
  else {
    lVar5 = **(long **)(lVar9 + 0x38);
    bVar1 = *(byte *)(lVar5 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar5 = il2cpp_runtime_helper_023009c0();
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar5);
  plVar15 = (long *)&g_data_fffffffe;
  pSVar11 = pSVar6;
  (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 8))();
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar6[2].klass = (System_String_c *)pSVar17;
    il2cpp_runtime_helper_022b4080(pSVar6 + 2,pSVar17);
    pSVar6[2].fields._stringLength = (int)uVar14;
    pSVar6[2].fields._firstChar = (short)((ulong)uVar14 >> 0x20);
    *(short *)&pSVar6[2].fields.field_0x6 = (short)((ulong)uVar14 >> 0x30);
    il2cpp_runtime_helper_022b4080(&pSVar6[2].fields,uVar14);
    *(undefined4 *)&pSVar6[3].monitor = extraout_EDX;
    *(undefined1 *)((long)&pSVar6[3].klass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar7 = *(System_RuntimeTypeHandle_Fields **)(lVar16 + 0x38);
  if (pSVar7 == (System_RuntimeTypeHandle_Fields *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pSVar7 = *(System_RuntimeTypeHandle_Fields **)(lVar16 + 0x38);
    if (pSVar7 == (System_RuntimeTypeHandle_Fields *)0x0) {
      il2cpp_runtime_helper_02300a20(lVar16);
      pSVar7 = *(System_RuntimeTypeHandle_Fields **)(lVar16 + 0x38);
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pSVar7->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = Unity_VisualScripting_TypeUtility__IsAssignableFrom(pSVar8,value,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar4);
  }
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(uVar14,4);
  if (args != (System_Object_array *)0x0) goto label_02664fa4;
label_02664f9f:
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  pIVar10 = *(Il2CppObject **)&(pSVar11->fields)._stringLength;
  if (pIVar10 == (Il2CppObject *)0x0) goto label_02664fd6;
  lVar9 = il2cpp_runtime_helper_023051f0(pIVar10,(((args->obj).klass)->_1).element_class);
  if (lVar9 != 0) goto label_02664fd6;
  do {
    uVar14 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar14,0);
label_02664fd6:
    if ((int)args->max_length != 0) goto label_02664fe6;
    while( true ) {
      il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
      args->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(args->m_Items,pIVar10);
      if (plVar15 == (long *)0x0) goto label_02664f9f;
      pIVar10 = (Il2CppObject *)(**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
      if ((pIVar10 != (Il2CppObject *)0x0) && (lVar9 = il2cpp_runtime_helper_023051f0(pIVar10), lVar9 == 0)) break;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar10;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
        if (value != (Il2CppObject *)0x0) {
          pSVar8 = System_Object__GetType(value,(MethodInfo *)0x0);
          if (pSVar8 == (System_Type_o *)0x0) goto label_02664f9f;
          lVar9 = (*(pSVar8->klass->vtable)._3_ToString.methodPtr)
                            (pSVar8,(pSVar8->klass->vtable)._3_ToString.method);
          if (lVar9 != 0) goto label_026650a8;
        }
        lVar9 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,lVar9);
        il2cpp_runtime_helper_01f6df20(args,2,lVar9);
        SVar2.fields.value =
             (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar16 + 0x38))->value;
        il2cpp_runtime_helper_01f68090(g_data_057b9c50);
        pSVar8 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,pSVar8);
        il2cpp_runtime_helper_01f6df20(args,3,pSVar8);
        pSVar11 = System_String__Format_3af7980(pSVar11,args,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(plVar15);
        uVar14 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
        il2cpp_runtime_helper_01f681a0(uVar14);
        plVar15 = (long *)il2cpp_runtime_helper_01f6e290(uVar14,(long)extraout_EDX_00);
        il2cpp_runtime_helper_01f681a0(plVar15);
        pSVar6 = (System_String_o *)(**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0))
        ;
        uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
        System_ArgumentException___ctor_3c0adc0(__this_00,pSVar11,pSVar6,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2b10();
        if (*(long *)(lVar16 + 0x38) == 0) {
          il2cpp_runtime_helper_02300a20(lVar16);
        }
        auVar18 = (*__this_00->klass[2].vtable._10_get_Source.methodPtr)
                            (__this_00,__this_00->klass[2].vtable._10_get_Source.method);
        vtableDispatch = *(code **)**(undefined8 **)(lVar16 + 0x38);
        pSVar12 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*vtableDispatch)
                            (auVar18._0_8_,(undefined8 *)**(undefined8 **)(lVar16 + 0x38),auVar18._8_8_,
                             vtableDispatch);
        return pSVar12;
      }
    }
  } while( true );
}


// Interpolate$$NewCatmullRom<object>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom_object_ (System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, const MethodInfo_2564C90* method);
// 0x2664c90

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom_object_
          (System_Collections_IList_o *nodes,Interpolate_ToVector3_T__o *toVector3,int32_t slices,
          bool_conflict loop,MethodInfo_2564C90 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  code *vtableDispatch;
  undefined1 uVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  Il2CppClass *pIVar6;
  System_Collections_Generic_IEnumerable_Vector3__c *__this_00;
  System_String_o *pSVar7;
  MethodInfo_2564C90_RGCTXs *pMVar8;
  System_Type_o *pSVar9;
  undefined4 extraout_var;
  System_Object_array *args;
  long lVar10;
  Il2CppObject *pIVar11;
  System_String_o *pSVar12;
  System_ArgumentException_o *__this_01;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar13;
  undefined4 in_register_0000000c;
  Il2CppObject *value;
  int32_t extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  undefined8 uVar14;
  long *plVar15;
  MethodInfo_2564C90 *pMVar16;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar17;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar18;
  MethodInfo_2564C90 *pMVar19;
  undefined1 auVar20 [16];
  
  value = (Il2CppObject *)CONCAT44(in_register_0000000c,loop);
  pMVar16 = method;
  if (method->rgctx_data == (MethodInfo_2564C90_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pIVar5 = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  pIVar5 = (Il2CppClass *)&g_data_fffffffe;
  pIVar17 = __this;
  Interpolate__NewCatmullRom_d__20_object____ctor
            (__this,-2,(MethodInfo_2F65260 *)method->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor)
  ;
  if (__this != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    (__this->fields).__3__nodes = nodes;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__nodes,nodes);
    (__this->fields).__3__toVector3 = toVector3;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__3__toVector3,toVector3);
    (__this->fields).slices = slices;
    *(char *)((long)&(__this->fields).loop + 1) = (char)loop;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(value,0);
  pMVar19 = pMVar16;
  if (pMVar16->rgctx_data == (MethodInfo_2564C90_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar16);
    pIVar6 = pMVar16->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar6->_2).field_0x6d;
  }
  else {
    pIVar6 = pMVar16->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar6->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_00 = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(pIVar6);
  uVar14 = 0xfffffffe;
  pSVar18 = __this_00;
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            ((Interpolate__NewCatmullRom_d__20_T__o *)__this_00,-2,
             (MethodInfo_2F65BB0 *)pMVar16->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor);
  if (__this_00 != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (__this_00->_1).this_arg.data = pIVar17;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).this_arg,pIVar17);
    (__this_00->_1).element_class = pIVar5;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).element_class,pIVar5);
    *(int32_t *)&(__this_00->_1).declaringType = extraout_EDX;
    *(undefined1 *)((long)&(__this_00->_1).castClass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(value,0);
  pMVar16 = pMVar19;
  if (pMVar19->rgctx_data == (MethodInfo_2564C90_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar19);
    pIVar5 = pMVar19->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pMVar19->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023052d0(pIVar5);
  plVar15 = (long *)&g_data_fffffffe;
  pSVar12 = pSVar7;
  (*pMVar19->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor->methodPointer)();
  if (pSVar7 != (System_String_o *)0x0) {
    pSVar7[2].klass = (System_String_c *)pSVar18;
    il2cpp_runtime_helper_022b4080(pSVar7 + 2,pSVar18);
    pSVar7[2].fields._stringLength = (int)uVar14;
    pSVar7[2].fields._firstChar = (short)((ulong)uVar14 >> 0x20);
    *(short *)&pSVar7[2].fields.field_0x6 = (short)((ulong)uVar14 >> 0x30);
    il2cpp_runtime_helper_022b4080(&pSVar7[2].fields,uVar14);
    *(undefined4 *)&pSVar7[3].monitor = extraout_EDX_00;
    *(undefined1 *)((long)&pSVar7[3].klass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar16->rgctx_data;
  if (pMVar8 == (MethodInfo_2564C90_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pMVar8 = pMVar16->rgctx_data;
    if (pMVar8 == (MethodInfo_2564C90_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(pMVar16);
      pMVar8 = pMVar16->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar8->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = Unity_VisualScripting_TypeUtility__IsAssignableFrom(pSVar9,value,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar4);
  }
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(uVar14,4);
  if (args != (System_Object_array *)0x0) goto label_02664fa4;
label_02664f9f:
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  pIVar11 = *(Il2CppObject **)&(pSVar12->fields)._stringLength;
  if (pIVar11 == (Il2CppObject *)0x0) goto label_02664fd6;
  lVar10 = il2cpp_runtime_helper_023051f0(pIVar11,(((args->obj).klass)->_1).element_class);
  if (lVar10 != 0) goto label_02664fd6;
  do {
    uVar14 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar14,0);
label_02664fd6:
    if ((int)args->max_length != 0) goto label_02664fe6;
    while( true ) {
      il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
      args->m_Items[0] = pIVar11;
      il2cpp_runtime_helper_022b4080(args->m_Items,pIVar11);
      if (plVar15 == (long *)0x0) goto label_02664f9f;
      pIVar11 = (Il2CppObject *)(**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
      if ((pIVar11 != (Il2CppObject *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pIVar11), lVar10 == 0)) break;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar11;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
        if (value != (Il2CppObject *)0x0) {
          pSVar9 = System_Object__GetType(value,(MethodInfo *)0x0);
          if (pSVar9 == (System_Type_o *)0x0) goto label_02664f9f;
          lVar10 = (*(pSVar9->klass->vtable)._3_ToString.methodPtr)
                             (pSVar9,(pSVar9->klass->vtable)._3_ToString.method);
          if (lVar10 != 0) goto label_026650a8;
        }
        lVar10 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,lVar10);
        il2cpp_runtime_helper_01f6df20(args,2,lVar10);
        SVar2.fields.value =
             (System_RuntimeTypeHandle_Fields)pMVar16->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
        il2cpp_runtime_helper_01f68090(g_data_057b9c50);
        pSVar9 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,pSVar9);
        il2cpp_runtime_helper_01f6df20(args,3,pSVar9);
        pSVar12 = System_String__Format_3af7980(pSVar12,args,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(plVar15);
        uVar14 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
        il2cpp_runtime_helper_01f681a0(uVar14);
        plVar15 = (long *)il2cpp_runtime_helper_01f6e290(uVar14,(long)extraout_EDX_01);
        il2cpp_runtime_helper_01f681a0(plVar15);
        pSVar7 = (System_String_o *)(**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0))
        ;
        uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
        __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
        System_ArgumentException___ctor_3c0adc0(__this_01,pSVar12,pSVar7,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2b10();
        if (pMVar16->rgctx_data == (MethodInfo_2564C90_RGCTXs *)0x0) {
          il2cpp_runtime_helper_02300a20(pMVar16);
        }
        auVar20 = (*__this_01->klass[2].vtable._10_get_Source.methodPtr)
                            (__this_01,__this_01->klass[2].vtable._10_get_Source.method);
        pIVar5 = pMVar16->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
        vtableDispatch = (pIVar5->_1).image;
        pSVar13 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*vtableDispatch)(auVar20._0_8_,pIVar5,auVar20._8_8_,vtableDispatch);
        return pSVar13;
      }
    }
  } while( true );
}


// Interpolate$$NewCatmullRom<Vector3>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom_Vector3_ (System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, const MethodInfo_2564D50* method);
// 0x2664d50

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom_Vector3_
          (System_Collections_IList_o *nodes,Interpolate_ToVector3_T__o *toVector3,int32_t slices,
          bool_conflict loop,MethodInfo_2564D50 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  code *vtableDispatch;
  undefined1 uVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_IEnumerable_Vector3__c *__this;
  System_String_o *pSVar6;
  MethodInfo_2564D50_RGCTXs *pMVar7;
  System_Type_o *pSVar8;
  undefined4 extraout_var;
  System_Object_array *args;
  long lVar9;
  Il2CppObject *pIVar10;
  System_String_o *pSVar11;
  System_ArgumentException_o *__this_00;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar12;
  undefined4 in_register_0000000c;
  Il2CppObject *value;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined8 uVar13;
  long *plVar14;
  MethodInfo_2564D50 *pMVar15;
  System_Collections_Generic_IEnumerable_Vector3__c *pSVar16;
  MethodInfo_2564D50 *pMVar17;
  undefined1 auVar18 [16];
  
  value = (Il2CppObject *)CONCAT44(in_register_0000000c,loop);
  pMVar17 = method;
  if (method->rgctx_data == (MethodInfo_2564D50_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pIVar5 = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (System_Collections_Generic_IEnumerable_Vector3__c *)il2cpp_runtime_helper_023052d0(pIVar5);
  uVar13 = 0xfffffffe;
  pSVar16 = __this;
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            ((Interpolate__NewCatmullRom_d__20_T__o *)__this,-2,
             (MethodInfo_2F65BB0 *)method->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor);
  if (__this != (System_Collections_Generic_IEnumerable_Vector3__c *)0x0) {
    (__this->_1).this_arg.data = nodes;
    il2cpp_runtime_helper_022b4080(&(__this->_1).this_arg,nodes);
    (__this->_1).element_class = (Il2CppClass *)toVector3;
    il2cpp_runtime_helper_022b4080(&(__this->_1).element_class,toVector3);
    *(int32_t *)&(__this->_1).declaringType = slices;
    *(char *)((long)&(__this->_1).castClass + 1) = (char)loop;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(value,0);
  pMVar15 = pMVar17;
  if (pMVar17->rgctx_data == (MethodInfo_2564D50_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(pMVar17);
    pIVar5 = pMVar17->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pMVar17->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(pIVar5);
  plVar14 = (long *)&g_data_fffffffe;
  pSVar11 = pSVar6;
  (*pMVar17->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor->methodPointer)();
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar6[2].klass = (System_String_c *)pSVar16;
    il2cpp_runtime_helper_022b4080(pSVar6 + 2,pSVar16);
    pSVar6[2].fields._stringLength = (int)uVar13;
    pSVar6[2].fields._firstChar = (short)((ulong)uVar13 >> 0x20);
    *(short *)&pSVar6[2].fields.field_0x6 = (short)((ulong)uVar13 >> 0x30);
    il2cpp_runtime_helper_022b4080(&pSVar6[2].fields,uVar13);
    *(undefined4 *)&pSVar6[3].monitor = extraout_EDX;
    *(undefined1 *)((long)&pSVar6[3].klass + 1) = uVar3;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = pMVar15->rgctx_data;
  if (pMVar7 == (MethodInfo_2564D50_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pMVar7 = pMVar15->rgctx_data;
    if (pMVar7 == (MethodInfo_2564D50_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(pMVar15);
      pMVar7 = pMVar15->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar7->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = Unity_VisualScripting_TypeUtility__IsAssignableFrom(pSVar8,value,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar4);
  }
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(uVar13,4);
  if (args != (System_Object_array *)0x0) goto label_02664fa4;
label_02664f9f:
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  pIVar10 = *(Il2CppObject **)&(pSVar11->fields)._stringLength;
  if (pIVar10 == (Il2CppObject *)0x0) goto label_02664fd6;
  lVar9 = il2cpp_runtime_helper_023051f0(pIVar10,(((args->obj).klass)->_1).element_class);
  if (lVar9 != 0) goto label_02664fd6;
  do {
    uVar13 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar13,0);
label_02664fd6:
    if ((int)args->max_length != 0) goto label_02664fe6;
    while( true ) {
      il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
      args->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(args->m_Items,pIVar10);
      if (plVar14 == (long *)0x0) goto label_02664f9f;
      pIVar10 = (Il2CppObject *)(**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
      if ((pIVar10 != (Il2CppObject *)0x0) && (lVar9 = il2cpp_runtime_helper_023051f0(pIVar10), lVar9 == 0)) break;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar10;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
        if (value != (Il2CppObject *)0x0) {
          pSVar8 = System_Object__GetType(value,(MethodInfo *)0x0);
          if (pSVar8 == (System_Type_o *)0x0) goto label_02664f9f;
          lVar9 = (*(pSVar8->klass->vtable)._3_ToString.methodPtr)
                            (pSVar8,(pSVar8->klass->vtable)._3_ToString.method);
          if (lVar9 != 0) goto label_026650a8;
        }
        lVar9 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,lVar9);
        il2cpp_runtime_helper_01f6df20(args,2,lVar9);
        SVar2.fields.value =
             (System_RuntimeTypeHandle_Fields)pMVar15->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
        il2cpp_runtime_helper_01f68090(g_data_057b9c50);
        pSVar8 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,pSVar8);
        il2cpp_runtime_helper_01f6df20(args,3,pSVar8);
        pSVar11 = System_String__Format_3af7980(pSVar11,args,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(plVar14);
        uVar13 = (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
        il2cpp_runtime_helper_01f681a0(uVar13);
        plVar14 = (long *)il2cpp_runtime_helper_01f6e290(uVar13,(long)extraout_EDX_00);
        il2cpp_runtime_helper_01f681a0(plVar14);
        pSVar6 = (System_String_o *)(**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0))
        ;
        uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
        System_ArgumentException___ctor_3c0adc0(__this_00,pSVar11,pSVar6,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2b10();
        if (pMVar15->rgctx_data == (MethodInfo_2564D50_RGCTXs *)0x0) {
          il2cpp_runtime_helper_02300a20(pMVar15);
        }
        auVar18 = (*__this_00->klass[2].vtable._10_get_Source.methodPtr)
                            (__this_00,__this_00->klass[2].vtable._10_get_Source.method);
        pIVar5 = pMVar15->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
        vtableDispatch = (pIVar5->_1).image;
        pSVar12 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*vtableDispatch)(auVar18._0_8_,pIVar5,auVar18._8_8_,vtableDispatch);
        return pSVar12;
      }
    }
  } while( true );
}


// Interpolate$$NewCatmullRom<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom___Il2CppFullySharedGenericType_ (System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, const MethodInfo_2564E10* method);
// 0x2664e10

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom___Il2CppFullySharedGenericType_
          (System_Collections_IList_o *nodes,Interpolate_ToVector3_T__o *toVector3,int32_t slices,
          bool_conflict loop,MethodInfo_2564E10 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  System_String_o *pSVar5;
  MethodInfo_2564E10_RGCTXs *pMVar6;
  System_Type_o *pSVar7;
  undefined4 extraout_var;
  undefined8 uVar8;
  System_Object_array *args;
  long lVar9;
  Il2CppObject *pIVar10;
  System_String_o *pSVar11;
  System_ArgumentException_o *__this;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar12;
  undefined4 in_register_0000000c;
  Il2CppObject *value;
  int extraout_EDX;
  long *plVar13;
  MethodInfo_2564E10 *pMVar14;
  undefined1 auVar15 [16];
  
  value = (Il2CppObject *)CONCAT44(in_register_0000000c,loop);
  pMVar14 = method;
  if (method->rgctx_data == (MethodInfo_2564E10_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pIVar4 = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  else {
    pIVar4 = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(pIVar4);
  plVar13 = (long *)&g_data_fffffffe;
  pSVar11 = pSVar5;
  (*method->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor->methodPointer)();
  if (pSVar5 != (System_String_o *)0x0) {
    pSVar5[2].klass = (System_String_c *)nodes;
    il2cpp_runtime_helper_022b4080(pSVar5 + 2,nodes);
    *(Interpolate_ToVector3_T__o **)&pSVar5[2].fields._stringLength = toVector3;
    il2cpp_runtime_helper_022b4080(&pSVar5[2].fields,toVector3);
    *(int32_t *)&pSVar5[3].monitor = slices;
    *(char *)((long)&pSVar5[3].klass + 1) = (char)loop;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = pMVar14->rgctx_data;
  if (pMVar6 == (MethodInfo_2564E10_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TypeUtility);
    pMVar6 = pMVar14->rgctx_data;
    if (pMVar6 == (MethodInfo_2564E10_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(pMVar14);
      pMVar6 = pMVar14->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar6->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TypeUtility + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = Unity_VisualScripting_TypeUtility__IsAssignableFrom(pSVar7,value,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_Collections_Generic_IEnumerable_Vector3__o *)CONCAT44(extraout_var,bVar3);
  }
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_object);
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(uVar8,4);
  if (args != (System_Object_array *)0x0) goto label_02664fa4;
label_02664f9f:
  il2cpp_runtime_helper_022b2c90();
label_02664fa4:
  pIVar10 = *(Il2CppObject **)&(pSVar11->fields)._stringLength;
  if (pIVar10 == (Il2CppObject *)0x0) goto label_02664fd6;
  lVar9 = il2cpp_runtime_helper_023051f0(pIVar10,(((args->obj).klass)->_1).element_class);
  if (lVar9 != 0) goto label_02664fd6;
  do {
    uVar8 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar8,0);
label_02664fd6:
    if ((int)args->max_length != 0) goto label_02664fe6;
    while( true ) {
      il2cpp_runtime_helper_022b2ca0();
label_02664fe6:
      args->m_Items[0] = pIVar10;
      il2cpp_runtime_helper_022b4080(args->m_Items,pIVar10);
      if (plVar13 == (long *)0x0) goto label_02664f9f;
      pIVar10 = (Il2CppObject *)(**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
      if ((pIVar10 != (Il2CppObject *)0x0) && (lVar9 = il2cpp_runtime_helper_023051f0(pIVar10), lVar9 == 0)) break;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar10;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"The provided argument value for '{0}.{1}' does not match the parameter type.\nProvided: {2}\nExpected: {3}");
        if (value != (Il2CppObject *)0x0) {
          pSVar7 = System_Object__GetType(value,(MethodInfo *)0x0);
          if (pSVar7 == (System_Type_o *)0x0) goto label_02664f9f;
          lVar9 = (*(pSVar7->klass->vtable)._3_ToString.methodPtr)
                            (pSVar7,(pSVar7->klass->vtable)._3_ToString.method);
          if (lVar9 != 0) goto label_026650a8;
        }
        lVar9 = il2cpp_runtime_helper_023445d0(&"null");
label_026650a8:
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,lVar9);
        il2cpp_runtime_helper_01f6df20(args,2,lVar9);
        SVar2.fields.value =
             (System_RuntimeTypeHandle_Fields)pMVar14->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
        il2cpp_runtime_helper_01f68090(g_data_057b9c50);
        pSVar7 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(args);
        il2cpp_runtime_helper_01f6def0(args,pSVar7);
        il2cpp_runtime_helper_01f6df20(args,3,pSVar7);
        pSVar11 = System_String__Format_3af7980(pSVar11,args,(MethodInfo *)0x0);
        il2cpp_runtime_helper_01f681a0(plVar13);
        uVar8 = (**(code **)(*plVar13 + 0x238))(plVar13,*(undefined8 *)(*plVar13 + 0x240));
        il2cpp_runtime_helper_01f681a0(uVar8);
        plVar13 = (long *)il2cpp_runtime_helper_01f6e290(uVar8,(long)extraout_EDX);
        il2cpp_runtime_helper_01f681a0(plVar13);
        pSVar5 = (System_String_o *)(**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0))
        ;
        uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
        __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
        System_ArgumentException___ctor_3c0adc0(__this,pSVar11,pSVar5,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2b10();
        if (pMVar14->rgctx_data == (MethodInfo_2564E10_RGCTXs *)0x0) {
          il2cpp_runtime_helper_02300a20(pMVar14);
        }
        auVar15 = (*__this->klass[2].vtable._10_get_Source.methodPtr)
                            (__this,__this->klass[2].vtable._10_get_Source.method);
        pIVar4 = pMVar14->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
        vtableDispatch = (pIVar4->_1).image;
        pSVar12 = (System_Collections_Generic_IEnumerable_Vector3__o *)
                  (*vtableDispatch)(auVar15._0_8_,pIVar4,auVar15._8_8_,vtableDispatch);
        return pSVar12;
      }
    }
  } while( true );
}


// Interpolate$$CatmullRom
// il2cpp: UnityEngine_Vector3_o Interpolate__CatmullRom (UnityEngine_Vector3_o previous, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Vector3_o next, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060a60

UnityEngine_Vector3_o
Interpolate__CatmullRom
          (UnityEngine_Vector3_o previous,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
          UnityEngine_Vector3_o next,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  
  fVar4 = elapsedTime / duration;
  fVar2 = fVar4 * fVar4;
  fVar1 = fVar4 * fVar2 * 0.5;
  fVar3 = (fVar2 - fVar1) - fVar4 * 0.5;
  fVar5 = fVar4 * fVar2 * 1.5;
  fVar4 = fVar4 * 0.5 + (fVar2 * 2.0 - fVar5);
  fVar5 = (fVar5 - fVar2 * 2.5) + 1.0;
  fVar1 = fVar1 - fVar2 * 0.5;
  UVar6.fields.x =
       fVar1 * next.fields.x + fVar4 * end.fields.x + fVar5 * start.fields.x + fVar3 * previous.fields.x;
  UVar6.fields.y =
       fVar1 * next.fields.y + end.fields.y * fVar4 + start.fields.y * fVar5 + fVar3 * previous.fields.y;
  UVar6.fields.z =
       fVar1 * next.fields.z + start.fields.z * fVar5 + fVar3 * previous.fields.z + end.fields.z * fVar4;
  return (UnityEngine_Vector3_o)UVar6.fields;
}


// Interpolate$$Linear
// il2cpp: float Interpolate__Linear (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060b60

float Interpolate__Linear(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  return start + (fVar1 / duration) * distance;
}


// Interpolate$$EaseInQuad
// il2cpp: float Interpolate__EaseInQuad (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060b80

float Interpolate__EaseInQuad(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  return distance * fVar1 * fVar1 + start;
}


// Interpolate$$EaseOutQuad
// il2cpp: float Interpolate__EaseOutQuad (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060bb0

float Interpolate__EaseOutQuad(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  return start - (fVar1 + -2.0) * distance * fVar1;
}


// Interpolate$$EaseInOutQuad
// il2cpp: float Interpolate__EaseInOutQuad (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060be0

float Interpolate__EaseInOutQuad
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / (duration * 0.5);
    if (fVar1 < 1.0) {
      return distance * 0.5 * fVar1 * fVar1 + start;
    }
  }
  else {
    fVar1 = 2.0;
  }
  return ((fVar1 + -1.0 + -2.0) * (fVar1 + -1.0) + -1.0) * distance * -0.5 + start;
}


// Interpolate$$EaseInCubic
// il2cpp: float Interpolate__EaseInCubic (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060c60

float Interpolate__EaseInCubic(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  return distance * fVar1 * fVar1 * fVar1 + start;
}


// Interpolate$$EaseOutCubic
// il2cpp: float Interpolate__EaseOutCubic (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060c90

float Interpolate__EaseOutCubic
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
  return start + (fVar1 * fVar1 * fVar1 + 1.0) * distance;
}


// Interpolate$$EaseInOutCubic
// il2cpp: float Interpolate__EaseInOutCubic (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060cd0

float Interpolate__EaseInOutCubic
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / (duration * 0.5);
    if (fVar1 < 1.0) {
      return distance * 0.5 * fVar1 * fVar1 * fVar1 + start;
    }
  }
  else {
    fVar1 = 2.0;
  }
  fVar1 = fVar1 + -2.0;
  return (fVar1 * fVar1 * fVar1 + 2.0) * distance * 0.5 + start;
}


// Interpolate$$EaseInQuart
// il2cpp: float Interpolate__EaseInQuart (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060d50

float Interpolate__EaseInQuart(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  return distance * fVar1 * fVar1 * fVar1 * fVar1 + start;
}


// Interpolate$$EaseOutQuart
// il2cpp: float Interpolate__EaseOutQuart (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060d80

float Interpolate__EaseOutQuart
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
  return start - (fVar1 * fVar1 * fVar1 * fVar1 + -1.0) * distance;
}


// Interpolate$$EaseInOutQuart
// il2cpp: float Interpolate__EaseInOutQuart (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060dc0

float Interpolate__EaseInOutQuart
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / (duration * 0.5);
    if (fVar1 < 1.0) {
      return distance * 0.5 * fVar1 * fVar1 * fVar1 * fVar1 + start;
    }
  }
  else {
    fVar1 = 2.0;
  }
  fVar1 = fVar1 + -2.0;
  return (fVar1 * fVar1 * fVar1 * fVar1 + -2.0) * distance * -0.5 + start;
}


// Interpolate$$EaseInQuint
// il2cpp: float Interpolate__EaseInQuint (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060e40

float Interpolate__EaseInQuint(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  return distance * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + start;
}


// Interpolate$$EaseOutQuint
// il2cpp: float Interpolate__EaseOutQuint (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060e70

float Interpolate__EaseOutQuint
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
  return start + (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 1.0) * distance;
}


// Interpolate$$EaseInOutQuint
// il2cpp: float Interpolate__EaseInOutQuint (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060eb0

float Interpolate__EaseInOutQuint
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / (duration * 0.5);
    if (fVar1 < 1.0) {
      return distance * 0.5 * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + start;
    }
  }
  else {
    fVar1 = 2.0;
  }
  fVar1 = fVar1 + -2.0;
  return (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 2.0) * distance * 0.5 + start;
}


// Interpolate$$EaseInSine
// il2cpp: float Interpolate__EaseInSine (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060f40

float Interpolate__EaseInSine(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = cosf((fVar1 / duration) * 1.5707964);
  return start + (distance - fVar1 * distance);
}


// Interpolate$$EaseOutSine
// il2cpp: float Interpolate__EaseOutSine (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060f80

float Interpolate__EaseOutSine(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = sinf((fVar1 / duration) * 1.5707964);
  return fVar1 * distance + start;
}


// Interpolate$$EaseInOutSine
// il2cpp: float Interpolate__EaseInOutSine (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4060fc0

float Interpolate__EaseInOutSine
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = cosf((fVar1 * 3.1415927) / duration);
  return (fVar1 + -1.0) * distance * -0.5 + start;
}


// Interpolate$$EaseInExpo
// il2cpp: float Interpolate__EaseInExpo (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4061010

float Interpolate__EaseInExpo(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = exp2f((fVar1 / duration + -1.0) * 10.0);
  return fVar1 * distance + start;
}


// Interpolate$$EaseOutExpo
// il2cpp: float Interpolate__EaseOutExpo (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4061050

float Interpolate__EaseOutExpo(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = exp2f((fVar1 * -10.0) / duration);
  return start + (1.0 - fVar1) * distance;
}


// Interpolate$$EaseInOutExpo
// il2cpp: float Interpolate__EaseInOutExpo (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x40610a0

float Interpolate__EaseInOutExpo
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / (duration * 0.5);
    fVar2 = fVar1 + -1.0;
    if (fVar1 < 1.0) {
      fVar1 = exp2f(fVar2 * 10.0);
      return distance * 0.5 * fVar1 + start;
    }
  }
  else {
    fVar2 = 1.0;
  }
  fVar1 = exp2f(fVar2 * -10.0);
  return (2.0 - fVar1) * distance * 0.5 + start;
}


// Interpolate$$EaseInCirc
// il2cpp: float Interpolate__EaseInCirc (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4061140

float Interpolate__EaseInCirc(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  fVar1 = 1.0 - fVar1 * fVar1;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  return start - (fVar1 + -1.0) * distance;
}


// Interpolate$$EaseOutCirc
// il2cpp: float Interpolate__EaseOutCirc (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x40611b0

float Interpolate__EaseOutCirc(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
  fVar1 = 1.0 - fVar1 * fVar1;
  if (0.0 <= fVar1) {
    return SQRT(fVar1) * distance + start;
  }
  fVar1 = sqrtf(fVar1);
  return fVar1 * distance + start;
}


// Interpolate$$EaseInOutCirc
// il2cpp: float Interpolate__EaseInOutCirc (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x4061220

float Interpolate__EaseInOutCirc
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / (duration * 0.5);
    if (fVar1 < 1.0) {
      fVar1 = fVar1 * fVar1;
      fVar3 = -1.0;
      fVar2 = -0.5;
      goto label_04061281;
    }
  }
  else {
    fVar1 = 2.0;
  }
  fVar1 = (fVar1 + -2.0) * (fVar1 + -2.0);
  fVar3 = 1.0;
  fVar2 = 0.5;
label_04061281:
  fVar1 = 1.0 - fVar1;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  return fVar2 * distance * (fVar1 + fVar3) + start;
}


// Interpolate$$.ctor
// il2cpp: void Interpolate___ctor (Interpolate_o* __this, const MethodInfo* method);
// 0x40612f0

void Interpolate___ctor(Interpolate_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


