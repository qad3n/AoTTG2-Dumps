// Type: Interpolate
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Interpolate.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Interpolate.cs
// --------------------------------

// Interpolate.ToVector3<object>$$.ctor
// il2cpp: void Interpolate_ToVector3_object____ctor (Interpolate_ToVector3_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_E41220* method);
// 0x180e41220
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180e412a1: jmp 0x180e412d8
// asm:   0x180e412bc: jmp 0x180e412d8

void
Interpolate_ToVector3_object____ctor(Interpolate_ToVector3_T__o* __this, Il2CppObject* object, intptr_t method, MethodInfo_E41220* method)

{
  char cVar1;
  char cVar2;
  Il2CppObject *ex;
  code *pcVar3;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target,object);
  cVar2 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar1 = il2cpp_runtime_helper_1804161b0();
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if ((__this->fields).method_is_virtual == false) {
        pcVar3 = il2cpp_runtime_helper_1800d6cf0;
      }
      else {
        cVar2 = il2cpp_runtime_helper_18041f060(method);
        if (cVar2 == '\0') {
          cVar2 = il2cpp_runtime_helper_180417090(method);
          pcVar3 = il2cpp_runtime_helper_1800d6e40;
          if (cVar2 != '\0') {
            pcVar3 = il2cpp_runtime_helper_1800d6d30;
          }
        }
        else {
          cVar2 = il2cpp_runtime_helper_180417090(method);
          pcVar3 = il2cpp_runtime_helper_1800d6bc0;
          if (cVar2 == '\0') {
            pcVar3 = il2cpp_runtime_helper_1800d6c90;
          }
        }
      }
      goto label_180e412d8;
    }
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar2 == '\x01') {
    pcVar3 = il2cpp_runtime_helper_1800d6e00;
    goto label_180e412d8;
  }
  pcVar3 = (code *)(__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_180e412d8:
  (__this->fields).invoke_impl = (intptr_t)pcVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_1800d6880;
  return;
}


// Interpolate.ToVector3<Vector3>$$.ctor
// il2cpp: void Interpolate_ToVector3_Vector3____ctor (Interpolate_ToVector3_Vector3__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_E41310* method);
// 0x180e41310

void
Interpolate_ToVector3_Vector3____ctor(Interpolate_ToVector3_Vector3__o* __this, Il2CppObject* object, intptr_t method, MethodInfo_E41310* method)

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
    pcVar3 = il2cpp_runtime_helper_1800d6f20;
    goto label_180e4136f;
  }
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
  pcVar3 = (code *)(__this->fields).method_ptr;
label_180e4136f:
  (__this->fields).invoke_impl = (intptr_t)pcVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_1800d6ea0;
  return;
}


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Interpolate_ToVector3___Il2CppFullySharedGenericType____ctor (Interpolate_ToVector3_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_E41130* method);
// 0x180e41130
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180e41185: jmp 0x180e411ec
// asm:   0x180e411ba: jmp 0x180e411ec
// asm:   0x180e411d5: jmp 0x180e411ec

void Interpolate_ToVector3___Il2CppFullySharedGenericType____ctor
               (Interpolate_ToVector3_T__o *__this,Il2CppObject *object,intptr_t method,
               MethodInfo_E41130 *methodInfo)

{
  char cVar1;
  char cVar2;
  Il2CppObject *ex;
  code *pcVar3;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target,object);
  cVar2 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar1 = il2cpp_runtime_helper_1804161b0();
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if ((__this->fields).method_is_virtual == false) {
        pcVar3 = il2cpp_runtime_helper_1800d6a20;
      }
      else {
        cVar2 = il2cpp_runtime_helper_18041f060(method);
        if (cVar2 == '\0') {
          cVar2 = il2cpp_runtime_helper_180417090(method);
          pcVar3 = il2cpp_runtime_helper_1800d6b70;
          if (cVar2 != '\0') {
            pcVar3 = il2cpp_runtime_helper_1800d6a60;
          }
        }
        else {
          cVar2 = il2cpp_runtime_helper_180417090(method);
          pcVar3 = il2cpp_runtime_helper_1800d68f0;
          if (cVar2 == '\0') {
            pcVar3 = il2cpp_runtime_helper_1800d69c0;
          }
        }
      }
    }
    else {
      if (object == (Il2CppObject *)0x0) {
        ex = il2cpp_codegen_get_argument_exception
                       ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
        il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
      }
      pcVar3 = il2cpp_runtime_helper_1800d6800;
    }
  }
  else {
    pcVar3 = il2cpp_runtime_helper_1800d6b30;
    if (cVar2 != '\x01') {
      pcVar3 = il2cpp_runtime_helper_1800d6840;
    }
  }
  (__this->fields).invoke_impl = (intptr_t)pcVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_1800d6880;
  return;
}


// Interpolate.ToVector3<object>$$Invoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_object___Invoke (Interpolate_ToVector3_T__o* __this, Il2CppObject* v, const MethodInfo_583BA0* method);
// 0x180583ba0

UnityEngine_Vector3_o
Interpolate_ToVector3_object___Invoke(Interpolate_ToVector3_T__o* __this, Il2CppObject* v, MethodInfo_583BA0* method)

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


// Interpolate.ToVector3<Vector3>$$Invoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_Vector3___Invoke (Interpolate_ToVector3_Vector3__o* __this, UnityEngine_Vector3_o v, const MethodInfo_E410E0* method);
// 0x180e410e0

UnityEngine_Vector3_o
Interpolate_ToVector3_Vector3___Invoke(Interpolate_ToVector3_Vector3__o* __this, UnityEngine_Vector3_o v, MethodInfo_E410E0* method)

{
  undefined8 uVar1;
  int32_t iVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  int32_t local_20;
  undefined1 local_18 [16];
  
  local_28._0_4_ = (arg->fields).m_X;
  local_28._4_4_ = (arg->fields).m_Y;
  local_20 = (arg->fields).m_Z;
  puVar3 = (undefined8 *)
           (*(code *)(__this->fields).invoke_impl)
                     (local_18,(__this->fields).method_code,&local_28,(__this->fields).method);
  uVar1 = *puVar3;
  iVar2 = *(int32_t *)(puVar3 + 1);
  (__return_storage_ptr__->fields).m_X = (int)uVar1;
  (__return_storage_ptr__->fields).m_Y = (int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->fields).m_Z = iVar2;
  return __return_storage_ptr__;
}


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$Invoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3___Il2CppFullySharedGenericType___Invoke (Interpolate_ToVector3_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v, const MethodInfo_583BA0* method);
// 0x180583ba0

UnityEngine_Vector3_o
Interpolate_ToVector3___Il2CppFullySharedGenericType___Invoke(Interpolate_ToVector3_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v, MethodInfo_583BA0* method)

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


// Interpolate.ToVector3<object>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_ToVector3_object___BeginInvoke (Interpolate_ToVector3_T__o* __this, Il2CppObject* v, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_528E30* method);
// 0x180528e30

System_IAsyncResult_o*
Interpolate_ToVector3_object___BeginInvoke(Interpolate_ToVector3_T__o* __this, Il2CppObject* v, System_AsyncCallback_o* callback, Il2CppObject* object, MethodInfo_528E30* method)

{
  System_IAsyncResult_o *pSVar1;
  System_String_o *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = routeData;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,&local_18);
  return pSVar1;
}


// Interpolate.ToVector3<Vector3>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_ToVector3_Vector3___BeginInvoke (Interpolate_ToVector3_Vector3__o* __this, UnityEngine_Vector3_o v, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_E41070* method);
// 0x180e41070

System_IAsyncResult_o *
Interpolate_ToVector3_Vector3___BeginInvoke
          (Interpolate_ToVector3_Vector3__o *__this,UnityEngine_Vector3_o *v,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo_E41070 *method)

{
  System_IAsyncResult_o *pSVar1;
  Il2CppObject *local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_18433fabd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433fabd = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  uStack_30 = 0;
  local_38 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,v);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,&local_38,callback,object);
  return pSVar1;
}


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_ToVector3___Il2CppFullySharedGenericType___BeginInvoke (Interpolate_ToVector3_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_E40FF0* method);
// 0x180e40ff0

System_IAsyncResult_o*
Interpolate_ToVector3___Il2CppFullySharedGenericType___BeginInvoke(Interpolate_ToVector3_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v, System_AsyncCallback_o* callback, Il2CppObject* object, MethodInfo_E40FF0* method)

{
  Il2CppClass *klass;
  System_IAsyncResult_o *pSVar1;
  Il2CppObject *local_38;
  undefined8 uStack_30;
  
  local_38 = (Il2CppObject *)0x0;
  uStack_30 = 0;
  klass = (Il2CppClass *)HlmOOlSuKQO(**(undefined8 **)((__this->fields).method + 0x30));
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if ((int)(klass->_1).byval_arg.bits < 0) {
    pNewValue = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)il2cpp_value_box(klass,pNewValue);
  }
  local_38 = (Il2CppObject *)pNewValue;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,&local_38,callback,object);
  return pSVar1;
}


// Interpolate.ToVector3<object>$$EndInvoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_object___EndInvoke (Interpolate_ToVector3_T__o* __this, System_IAsyncResult_o* result, const MethodInfo_583B60* method);
// 0x180583b60

UnityEngine_Vector3_o
Interpolate_ToVector3_object___EndInvoke(Interpolate_ToVector3_T__o* __this, System_IAsyncResult_o* result, MethodInfo_583B60* method)

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


// Interpolate.ToVector3<Vector3>$$EndInvoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_Vector3___EndInvoke (Interpolate_ToVector3_Vector3__o* __this, System_IAsyncResult_o* result, const MethodInfo_583B60* method);
// 0x180583b60

UnityEngine_Vector3_o
Interpolate_ToVector3_Vector3___EndInvoke(Interpolate_ToVector3_Vector3__o* __this, System_IAsyncResult_o* result, MethodInfo_583B60* method)

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


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$EndInvoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3___Il2CppFullySharedGenericType___EndInvoke (Interpolate_ToVector3_T__o* __this, System_IAsyncResult_o* result, const MethodInfo_583B60* method);
// 0x180583b60

UnityEngine_Vector3_o
Interpolate_ToVector3___Il2CppFullySharedGenericType___EndInvoke(Interpolate_ToVector3_T__o* __this, System_IAsyncResult_o* result, MethodInfo_583B60* method)

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


// Interpolate.Function$$.ctor
// il2cpp: void Interpolate_Function___ctor (Interpolate_Function_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x18054e560

void
Interpolate_Function___ctor(Interpolate_Function_o* __this, Il2CppObject* object, intptr_t method, MethodInfo* method)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
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
  else if (cVar1 == '\x04') {
    puVar3 = &label_1800127b0;
    goto label_18054e5bf;
  }
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
  puVar3 = (undefined1 *)(__this->fields).method_ptr;
label_18054e5bf:
  (__this->fields).invoke_impl = (intptr_t)puVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_180012700;
  return;
}


// Interpolate.Function$$Invoke
// il2cpp: float Interpolate_Function__Invoke (Interpolate_Function_o* __this, float a, float b, float c, float d, const MethodInfo* method);
// 0x18054e540

float
Interpolate_Function__Invoke(Interpolate_Function_o* __this, float a, float b, float c, float d, MethodInfo* method)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)(__this->fields).invoke_impl)((__this->fields).method_code);
  return fVar1;
}


// Interpolate.Function$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_Function__BeginInvoke (Interpolate_Function_o* __this, float a, float b, float c, float d, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x18054e460

System_IAsyncResult_o*
Interpolate_Function__BeginInvoke(Interpolate_Function_o* __this, float a, float b, float c, float d, System_AsyncCallback_o* callback, Il2CppObject* object, MethodInfo* method)

{
  System_IAsyncResult_o *pSVar1;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  Il2CppObject *local_38;
  Il2CppObject *pIStack_30;
  Il2CppObject *local_28;
  Il2CppObject *pIStack_20;
  undefined8 local_18;
  
  local_38 = (Il2CppObject *)0x0;
  pIStack_30 = (Il2CppObject *)0x0;
  local_18 = 0;
  local_28 = (Il2CppObject *)0x0;
  pIStack_20 = (Il2CppObject *)0x0;
  local_res10[0] = time;
  local_res18[0] = duration;
  local_res20[0] = overshootOrAmplitude;
  local_38 = il2cpp_value_box(g_data_184354e38,local_res10);
  pIStack_30 = il2cpp_value_box(g_data_184354e38,local_res18);
  local_28 = il2cpp_value_box(g_data_184354e38,local_res20);
  pIStack_20 = il2cpp_value_box(g_data_184354e38,&period);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,&local_38,callback,object);
  return pSVar1;
}


// Interpolate.Function$$EndInvoke
// il2cpp: float Interpolate_Function__EndInvoke (Interpolate_Function_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x18054e510

float
Interpolate_Function__EndInvoke(Interpolate_Function_o* __this, System_IAsyncResult_o* result, MethodInfo* method)

{
  Il2CppObject *obj;
  float *pfVar1;
  
  obj = (Il2CppObject *)il2cpp_runtime_helper_18042b2c0(result,0);
  if (obj != (Il2CppObject *)0x0) {
    pfVar1 = il2cpp_object_unbox(obj);
    return *pfVar1;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<object>$$.ctor
// il2cpp: void Interpolate__NewBezier_d__16_object____ctor (Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, const MethodInfo_8E2870* method);
// 0x1808e2870

void
Interpolate__NewBezier_d__16_object____ctor(Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, MethodInfo_8E2870* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$.ctor
// il2cpp: void Interpolate__NewBezier_d__16_Vector3____ctor (Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, const MethodInfo_8E2870* method);
// 0x1808e2870

void
Interpolate__NewBezier_d__16_Vector3____ctor(Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, MethodInfo_8E2870* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType____ctor (Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, const MethodInfo_8E2870* method);
// 0x1808e2870

void
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType____ctor(Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, MethodInfo_8E2870* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewBezier>d__16<object>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewBezier_d__16_object___System_IDisposable_Dispose (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11675B0* method);
// 0x1811675b0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18116762a: jmp 0x181167640
// asm:   0x18116762c: lea rcx, [rsp + 0x30]
// asm:   0x181167631: call 0x1811508c0  ; il2cpp_runtime_helper_1811508c0()
// asm:   0x181167636: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18116763b: test rcx, rcx
// asm:   0x18116763e: jne 0x181167646
// asm:   0x181167646: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Interpolate__NewBezier_d__16_object___System_IDisposable_Dispose
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_11675B0 *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_184340817 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184340817 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
    }
  }
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewBezier_d__16_Vector3___System_IDisposable_Dispose (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_1167650* method);
// 0x181167650
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1811676ca: jmp 0x1811676e0
// asm:   0x1811676cc: lea rcx, [rsp + 0x30]
// asm:   0x1811676d1: call 0x181150ad0  ; il2cpp_runtime_helper_181150ad0()
// asm:   0x1811676d6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1811676db: test rcx, rcx
// asm:   0x1811676de: jne 0x1811676e6
// asm:   0x1811676e6: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Interpolate__NewBezier_d__16_Vector3___System_IDisposable_Dispose
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_1167650 *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_18434081a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_18434081a = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
    }
  }
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_IDisposable_Dispose (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11643F0* method);
// 0x1811643f0
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181164428: mov rax, qword ptr [rsp + 0x58]
// asm:   0x18116442d: mov rcx, qword ptr [rax + 0x20]
// asm:   0x181164431: mov rax, qword ptr [rcx + 0xc0]
// asm:   0x181164438: mov r8, qword ptr [rax + 8]
// asm:   0x18116443c: mov rdx, r8
// asm:   0x18116443f: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181164444: call qword ptr [r8]
// asm:   0x181164447: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18116444c: test rcx, rcx
// asm:   0x18116444f: jne 0x181164456
// asm:   0x181164456: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_IDisposable_Dispose(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_11643F0* method)

{
  int iVar1;
  MethodInfo *pMVar2;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    pMVar2 = method->klass->rgctx_data->_1_Interpolate__NewBezier_d__16_T____m__Finally1;
    (*pMVar2->methodPointer)(__this,pMVar2);
  }
  return;
}


// Interpolate.<NewBezier>d__16<object>$$MoveNext
// il2cpp: bool Interpolate__NewBezier_d__16_object___MoveNext (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11668F0* method);
// 0x1811668f0
// eh: try 0x181166992..0x181166d3e -> pad 0x183315aa0 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181166b78: mov rax, r12
// asm:   0x181166b7b: jmp 0x181166b91
// asm:   0x181166cd3: mov rbx, qword ptr [rsp + 0x48]
// asm:   0x181166cd8: test rbx, rbx
// asm:   0x181166cdb: jne 0x181166d3e
// asm:   0x181166cdd: movzx eax, byte ptr [rsp + 0xb0]
// asm:   0x181166d3e: lea rcx, [rsp + 0x50]
// asm:   0x181166d43: call 0x1811506e0  ; il2cpp_runtime_helper_1811506e0()
// asm:   0x181166d48: mov rcx, rbx
// asm:   0x181166d4b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315aa0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315aa5: push rbp
// asm:   0x183315aa6: sub rsp, 0x30
// asm:   0x183315aaa: mov rbp, rdx
// asm:   0x183315aad: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315ab1: mov rcx, qword ptr [rax]
// asm:   0x183315ab4: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183315ab8: movabs rax, 0
// asm:   0x183315ac2: add rsp, 0x30
// asm:   0x183315ac6: pop rbp
// asm:   0x183315ac7: ret 

bool Interpolate__NewBezier_d__16_object___MoveNext
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_11668F0 *method)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  System_Collections_IList_o *pSVar4;
  Interpolate_ToVector3_T__o *pIVar5;
  float fVar6;
  Interpolate__NewBezier_d__16_T__o *pIVar7;
  void *pvVar8;
  UnityEngine_Vector3_array *pUVar9;
  System_Collections_Generic_IEnumerator_float__o *value;
  Il2CppObject *pIVar10;
  Il2CppClass *klass;
  Il2CppObject *pIVar11;
  undefined8 *puVar12;
  UnityEngine_Vector3_o *pUVar13;
  uint uVar14;
  float elapsedTime;
  Interpolate__NewBezier_d__16_T__o *local_res8;
  MethodInfo_11668F0 *local_res10;
  undefined1 local_res18;
  UnityEngine_Vector3_o local_60;
  undefined8 local_50;
  Interpolate__NewBezier_d__16_T__o **local_48;
  MethodInfo_11668F0 **local_40;
  
  local_res8 = __this;
  local_res10 = method;
  if (Il2CppMethodInitialized_184340816 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184340816 = '\x01';
  }
  local_res18 = 0;
  local_50 = 0;
  local_48 = &local_res8;
  local_40 = &local_res10;
  iVar2 = (local_res8->fields).__1__state;
  if (iVar2 == 0) {
    (local_res8->fields).__1__state = -1;
    pIVar10 = (Il2CppObject *)(local_res8->fields).nodes;
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar10);
    if ((int)pvVar8 < 2) {
      return false;
    }
    pIVar10 = (Il2CppObject *)(local_res8->fields).nodes;
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar10);
    pUVar9 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(uint32_t)pvVar8);
    (local_res8->fields)._points_5__2 = pUVar9;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields)._points_5__2,pUVar9);
    pIVar10 = (Il2CppObject *)(local_res8->fields).steps;
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    value = InterfaceInvoker0_Invoke
                      (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_float,pIVar10);
    (local_res8->fields).__7__wrap2 = value;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__7__wrap2,value);
  }
  else if (iVar2 != 1) {
    return false;
  }
  (local_res8->fields).__1__state = -3;
  pIVar10 = (Il2CppObject *)(local_res8->fields).__7__wrap2;
  if (pIVar10 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar10);
  pIVar7 = local_res8;
  if ((char)pvVar8 == '\0') {
    if (Il2CppMethodInitialized_184340817 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184340817 = '\x01';
    }
    (pIVar7->fields).__1__state = -1;
    if ((pIVar7->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(pIVar7->fields).__7__wrap2);
    }
    (local_res8->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__7__wrap2,(void *)0x0);
    (local_res8->fields)._points_5__2 = (UnityEngine_Vector3_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields)._points_5__2,(void *)0x0);
    return false;
  }
  pIVar10 = (Il2CppObject *)(local_res8->fields).__7__wrap2;
  if (pIVar10 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_float,pIVar10);
  pIVar10 = (Il2CppObject *)0x0;
  while( true ) {
    pIVar11 = (Il2CppObject *)(local_res8->fields).nodes;
    if (pIVar11 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar11);
    uVar14 = (uint)pIVar10;
    if ((int)pvVar8 <= (int)uVar14) {
      pUVar13 = Interpolate__Bezier(&local_60,(local_res8->fields).ease,(local_res8->fields)._points_5__2,
                                    elapsedTime,(local_res8->fields).maxStep,(MethodInfo *)0x0);
      fVar3 = (pUVar13->fields).z;
      fVar6 = (pUVar13->fields).y;
      (local_res8->fields).__2__current.fields.x = (pUVar13->fields).x;
      (local_res8->fields).__2__current.fields.y = fVar6;
      (local_res8->fields).__2__current.fields.z = fVar3;
      (local_res8->fields).__1__state = 1;
      return true;
    }
    pSVar4 = (local_res8->fields).nodes;
    if (pSVar4 == (System_Collections_IList_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = (local_res8->fields)._points_5__2;
    pIVar5 = (local_res8->fields).toVector3;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar4,pIVar10);
    if (pIVar5 == (Interpolate_ToVector3_T__o *)0x0) break;
    klass = local_res10->klass->rgctx_data->_3_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    pIVar11 = (Il2CppObject *)0x0;
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,klass), pIVar11 == (Il2CppObject *)0x0)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar10,klass);
    }
    puVar12 = (undefined8 *)
              (*(code *)(pIVar5->fields).invoke_impl)
                        (&local_60,(pIVar5->fields).method_code,pIVar11,(pIVar5->fields).method);
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pUVar9->max_length <= uVar14) {
      ThrowIndexOutOfRangeException();
    }
    fVar3 = *(float *)(puVar12 + 1);
    uVar1 = *puVar12;
    pUVar9->m_Items[(int)uVar14].fields.x = (float)(int)uVar1;
    pUVar9->m_Items[(int)uVar14].fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
    pUVar9->m_Items[(int)uVar14].fields.z = fVar3;
    pIVar10 = (Il2CppObject *)(ulonglong)(uVar14 + 1);
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<Vector3>$$MoveNext
// il2cpp: bool Interpolate__NewBezier_d__16_Vector3___MoveNext (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_1166470* method);
// 0x181166470
// eh: try 0x181166512..0x1811668d1 -> pad 0x183327470 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18116686a: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x18116686f: test rbx, rbx
// asm:   0x181166872: jne 0x1811668d1
// asm:   0x181166874: movzx eax, byte ptr [rsp + 0xd0]
// asm:   0x1811668d1: lea rcx, [rsp + 0x68]
// asm:   0x1811668d6: call 0x181150890  ; il2cpp_runtime_helper_181150890()
// asm:   0x1811668db: mov rcx, rbx
// asm:   0x1811668de: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183327470: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183327475: push rbp
// asm:   0x183327476: sub rsp, 0x30
// asm:   0x18332747a: mov rbp, rdx
// asm:   0x18332747d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183327481: mov rcx, qword ptr [rax]
// asm:   0x183327484: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183327488: movabs rax, 0
// asm:   0x183327492: add rsp, 0x30
// asm:   0x183327496: pop rbp
// asm:   0x183327497: ret 

bool Interpolate__NewBezier_d__16_Vector3___MoveNext
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_1166470 *method)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  System_Collections_IList_o *pSVar4;
  Interpolate_ToVector3_T__o *pIVar5;
  float fVar6;
  Interpolate__NewBezier_d__16_T__o *pIVar7;
  void *pvVar8;
  UnityEngine_Vector3_array *pUVar9;
  System_Collections_Generic_IEnumerator_float__o *value;
  Il2CppObject *pIVar10;
  Il2CppClass *klass;
  undefined8 *puVar11;
  UnityEngine_Vector3_o *pUVar12;
  uint uVar13;
  float elapsedTime;
  Interpolate__NewBezier_d__16_T__o *local_res8;
  MethodInfo_1166470 *local_res10;
  undefined1 local_res18;
  undefined8 local_78;
  undefined4 local_70;
  UnityEngine_Vector3_o local_68;
  undefined8 local_58;
  Interpolate__NewBezier_d__16_T__o **local_50;
  MethodInfo_1166470 **local_48;
  
  local_res8 = __this;
  local_res10 = method;
  if (Il2CppMethodInitialized_184340819 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184340819 = '\x01';
  }
  local_res18 = 0;
  uVar13 = 0;
  local_58 = 0;
  local_50 = &local_res8;
  local_48 = &local_res10;
  iVar2 = (local_res8->fields).__1__state;
  if (iVar2 == 0) {
    (local_res8->fields).__1__state = -1;
    pIVar10 = (Il2CppObject *)(local_res8->fields).nodes;
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar10);
    if ((int)pvVar8 < 2) {
      return false;
    }
    pIVar10 = (Il2CppObject *)(local_res8->fields).nodes;
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar10);
    pUVar9 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(uint32_t)pvVar8);
    (local_res8->fields)._points_5__2 = pUVar9;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields)._points_5__2,pUVar9);
    pIVar10 = (Il2CppObject *)(local_res8->fields).steps;
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    value = InterfaceInvoker0_Invoke
                      (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_float,pIVar10);
    (local_res8->fields).__7__wrap2 = value;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__7__wrap2,value);
  }
  else if (iVar2 != 1) {
    return false;
  }
  (local_res8->fields).__1__state = -3;
  pIVar10 = (Il2CppObject *)(local_res8->fields).__7__wrap2;
  if (pIVar10 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar10);
  pIVar7 = local_res8;
  if ((char)pvVar8 == '\0') {
    if (Il2CppMethodInitialized_18434081a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_18434081a = '\x01';
    }
    (pIVar7->fields).__1__state = -1;
    if ((pIVar7->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(pIVar7->fields).__7__wrap2);
    }
    (local_res8->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__7__wrap2,(void *)0x0);
    (local_res8->fields)._points_5__2 = (UnityEngine_Vector3_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields)._points_5__2,(void *)0x0);
    return false;
  }
  pIVar10 = (Il2CppObject *)(local_res8->fields).__7__wrap2;
  if (pIVar10 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_float,pIVar10);
  while( true ) {
    pIVar10 = (Il2CppObject *)(local_res8->fields).nodes;
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar10);
    if ((int)pvVar8 <= (int)uVar13) {
      pUVar12 = Interpolate__Bezier(&local_68,(local_res8->fields).ease,(local_res8->fields)._points_5__2,
                                    elapsedTime,(local_res8->fields).maxStep,(MethodInfo *)0x0);
      fVar3 = (pUVar12->fields).z;
      fVar6 = (pUVar12->fields).y;
      (local_res8->fields).__2__current.fields.x = (pUVar12->fields).x;
      (local_res8->fields).__2__current.fields.y = fVar6;
      (local_res8->fields).__2__current.fields.z = fVar3;
      (local_res8->fields).__1__state = 1;
      return true;
    }
    pSVar4 = (local_res8->fields).nodes;
    if (pSVar4 == (System_Collections_IList_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = (local_res8->fields)._points_5__2;
    pIVar5 = (local_res8->fields).toVector3;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar4,uVar13);
    if (pIVar5 == (Interpolate_ToVector3_T__o *)0x0) break;
    klass = local_res10->klass->rgctx_data->_3_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar10->klass->_1).element_class != (klass->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    puVar11 = il2cpp_object_unbox(pIVar10);
    local_78 = *puVar11;
    local_70 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)
              (*(code *)(pIVar5->fields).invoke_impl)
                        (&local_68,(pIVar5->fields).method_code,&local_78,(pIVar5->fields).method);
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pUVar9->max_length <= uVar13) {
      ThrowIndexOutOfRangeException();
    }
    fVar3 = *(float *)(puVar11 + 1);
    uVar1 = *puVar11;
    pUVar9->m_Items[(int)uVar13].fields.x = (float)(int)uVar1;
    pUVar9->m_Items[(int)uVar13].fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
    pUVar9->m_Items[(int)uVar13].fields.z = fVar3;
    uVar13 = uVar13 + 1;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$MoveNext
// il2cpp: bool Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___MoveNext (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_1166D60* method);
// 0x181166d60
// eh: try 0x181166e3d..0x1811671ca -> pad 0x183318620 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181167173: mov rbx, qword ptr [rbp + 0x18]
// asm:   0x181167177: test rbx, rbx
// asm:   0x18116717a: jne 0x1811671ca
// asm:   0x18116717c: movzx eax, byte ptr [rbp + 0x90]
// asm:   0x1811671ca: lea rcx, [rbp + 0x20]
// asm:   0x1811671ce: call 0x181150800  ; il2cpp_runtime_helper_181150800()
// asm:   0x1811671d3: mov rcx, rbx
// asm:   0x1811671d6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318620: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318625: push rbp
// asm:   0x183318626: sub rsp, 0x30
// asm:   0x18331862a: lea rbp, [rdx + 0x30]
// asm:   0x18331862e: mov rax, qword ptr [rbp]
// asm:   0x183318632: mov rcx, qword ptr [rax]
// asm:   0x183318635: mov qword ptr [rbp + 0x18], rcx
// asm:   0x183318639: movabs rax, 0
// asm:   0x183318643: add rsp, 0x30
// asm:   0x183318647: pop rbp
// asm:   0x183318648: ret 

bool Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___MoveNext
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_1166D60 *method)

{
  int iVar1;
  float fVar2;
  Il2CppObject *pIVar3;
  System_Collections_IList_o *pSVar4;
  Interpolate_ToVector3_T__o *pIVar5;
  MethodInfo *pMVar6;
  Il2CppMethodPointer pIVar7;
  InvokerMethod pIVar8;
  Interpolate_Function_o *ease;
  longlong lVar9;
  float fVar10;
  ulonglong uVar11;
  void *pvVar12;
  UnityEngine_Vector3_array *pUVar13;
  System_Collections_Generic_IEnumerator_float__o *value;
  undefined8 uVar14;
  Il2CppClass *klass;
  undefined8 *puVar15;
  UnityEngine_Vector3_o *pUVar16;
  ulonglong uVar17;
  uint uVar18;
  float elapsedTime;
  Interpolate__NewBezier_d__16_T__o *local_res8;
  MethodInfo_1166D60 *local_res10;
  undefined1 local_res18;
  undefined8 *local_res20;
  undefined8 auStack_b0 [5];
  float afStack_88 [2];
  undefined8 uStack_80;
  undefined1 local_78 [8];
  UnityEngine_Vector3_Fields local_70;
  undefined8 local_60;
  MethodInfo_1166D60 **local_58;
  Interpolate__NewBezier_d__16_T__o **local_50;
  
  local_res8 = __this;
  local_res10 = method;
  if (g_data_18434081c == '\0') {
    auStack_b0[0] = 0x181166d96;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    auStack_b0[0] = 0x181166da2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_float);
    auStack_b0[0] = 0x181166dae;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_float);
    auStack_b0[0] = 0x181166dba;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    auStack_b0[0] = 0x181166dc6;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    auStack_b0[0] = 0x181166dd2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    g_data_18434081c = '\x01';
  }
  uVar17 = (ulonglong)(local_res10->klass->rgctx_data->_3_T->_2).stack_slot_size;
  uVar11 = uVar17 + 0xf;
  if (uVar11 <= uVar17) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x181166e11;
  lVar9 = -(uVar11 & 0xfffffffffffffff0);
  local_res18 = 0;
  uVar18 = 0;
  local_60 = 0;
  local_58 = &local_res10;
  local_50 = &local_res8;
  iVar1 = (local_res8->fields).__1__state;
  if (iVar1 == 0) {
    (local_res8->fields).__1__state = -1;
    pIVar3 = (Il2CppObject *)(local_res8->fields).nodes;
    if (pIVar3 == (Il2CppObject *)0x0) {
      *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811671a6;
      ThrowNullReferenceException();
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166e7b;
    pvVar12 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar3);
    if ((int)pvVar12 < 2) {
      return false;
    }
    pIVar3 = (Il2CppObject *)(local_res8->fields).nodes;
    if (pIVar3 == (Il2CppObject *)0x0) {
      *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811671a1;
      ThrowNullReferenceException();
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166ea9;
    pvVar12 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar3);
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166eb7;
    pUVar13 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(uint32_t)pvVar12);
    (local_res8->fields)._points_5__2 = pUVar13;
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166ed5;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields)._points_5__2,pUVar13);
    pIVar3 = (Il2CppObject *)(local_res8->fields).steps;
    if (pIVar3 == (Il2CppObject *)0x0) {
      *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x18116719b;
      ThrowNullReferenceException();
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166ef7;
    value = InterfaceInvoker0_Invoke
                      (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_float,pIVar3);
    (local_res8->fields).__7__wrap2 = value;
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166f15;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__7__wrap2,value);
  }
  else if (iVar1 != 1) {
    return false;
  }
  (local_res8->fields).__1__state = -3;
  pIVar3 = (Il2CppObject *)(local_res8->fields).__7__wrap2;
  if (pIVar3 == (Il2CppObject *)0x0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811671c9;
    ThrowNullReferenceException();
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166f50;
  pvVar12 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar3);
  if ((char)pvVar12 == '\0') {
    pIVar7 = local_res10->klass->rgctx_data->_1_Interpolate__NewBezier_d__16_T____m__Finally1->methodPointer;
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181167125;
    (*pIVar7)(local_res8);
    (local_res8->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181167142;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__7__wrap2,(void *)0x0);
    (local_res8->fields)._points_5__2 = (UnityEngine_Vector3_array *)0x0;
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x18116715f;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields)._points_5__2,(void *)0x0);
    return false;
  }
  pIVar3 = (Il2CppObject *)(local_res8->fields).__7__wrap2;
  if (pIVar3 == (Il2CppObject *)0x0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811671c4;
    ThrowNullReferenceException();
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166f7a;
  InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_float,pIVar3);
  while( true ) {
    pIVar3 = (Il2CppObject *)(local_res8->fields).nodes;
    if (pIVar3 == (Il2CppObject *)0x0) {
      *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811671bf;
      ThrowNullReferenceException();
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166fa5;
    pvVar12 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar3);
    if ((int)pvVar12 <= (int)uVar18) {
      *(undefined8 *)((longlong)&uStack_80 + lVar9) = 0;
      *(float *)((longlong)afStack_88 + lVar9) = (local_res8->fields).maxStep;
      pUVar13 = (local_res8->fields)._points_5__2;
      ease = (local_res8->fields).ease;
      *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811670d1;
      pUVar16 = Interpolate__Bezier((UnityEngine_Vector3_o *)&local_70,ease,pUVar13,elapsedTime,
                                    *(float *)((longlong)afStack_88 + lVar9),
                                    *(MethodInfo **)((longlong)&uStack_80 + lVar9));
      fVar2 = (pUVar16->fields).z;
      fVar10 = (pUVar16->fields).y;
      (local_res8->fields).__2__current.fields.x = (pUVar16->fields).x;
      (local_res8->fields).__2__current.fields.y = fVar10;
      (local_res8->fields).__2__current.fields.z = fVar2;
      (local_res8->fields).__1__state = 1;
      return true;
    }
    pSVar4 = (local_res8->fields).nodes;
    if (pSVar4 == (System_Collections_IList_o *)0x0) {
      *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811671ba;
      ThrowNullReferenceException();
    }
    pUVar13 = (local_res8->fields)._points_5__2;
    pIVar5 = (local_res8->fields).toVector3;
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181166fda;
    uVar14 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar4,uVar18);
    klass = local_res10->klass->rgctx_data->_3_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181167004;
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181167012;
    puVar15 = (undefined8 *)il2cpp_runtime_helper_180416280(uVar14,klass,local_78 + lVar9);
    if (pIVar5 == (Interpolate_ToVector3_T__o *)0x0) break;
    if (-1 < (int)(local_res10->klass->rgctx_data->_3_T->_1).byval_arg.bits) {
      puVar15 = (undefined8 *)*puVar15;
    }
    pMVar6 = local_res10->klass->rgctx_data->_4_Interpolate_ToVector3_T__Invoke;
    *(UnityEngine_Vector3_Fields **)((longlong)afStack_88 + lVar9) = &local_70;
    pIVar7 = pMVar6->methodPointer;
    pIVar8 = pMVar6->invoker_method;
    *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x181167074;
    local_res20 = puVar15;
    (*pIVar8)(pIVar7,pMVar6,pIVar5,&local_res20,*(void **)((longlong)afStack_88 + lVar9));
    if (pUVar13 == (UnityEngine_Vector3_array *)0x0) {
      *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811671b0;
      ThrowNullReferenceException();
    }
    if ((uint)pUVar13->max_length <= uVar18) {
      *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811671ab;
      ThrowIndexOutOfRangeException();
    }
    pUVar13->m_Items[(int)uVar18].fields.x = local_70.x;
    pUVar13->m_Items[(int)uVar18].fields.y = local_70.y;
    pUVar13->m_Items[(int)uVar18].fields.z = local_70.z;
    uVar18 = uVar18 + 1;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar9) = 0x1811671b5;
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<object>$$<>m__Finally1
// il2cpp: void Interpolate__NewBezier_d__16_object_____m__Finally1 (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11676F0* method);
// 0x1811676f0

void Interpolate__NewBezier_d__16_object_____m__Finally1
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_11676F0 *method)

{
  if (Il2CppMethodInitialized_184340817 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184340817 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
    return;
  }
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$<>m__Finally1
// il2cpp: void Interpolate__NewBezier_d__16_Vector3_____m__Finally1 (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_1167740* method);
// 0x181167740

void Interpolate__NewBezier_d__16_Vector3_____m__Finally1
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_1167740 *method)

{
  if (Il2CppMethodInitialized_18434081a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_18434081a = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
    return;
  }
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$<>m__Finally1
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType_____m__Finally1 (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_1167790* method);
// 0x181167790

void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType_____m__Finally1
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_1167790 *method)

{
  if (Il2CppMethodInitialized_18434081d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_18434081d = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
    return;
  }
  return;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11673B0* method);
// 0x1811673b0

UnityEngine_Vector3_o
Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_11673B0* method)

{
  undefined8 uVar1;
  int32_t iVar2;
  
  iVar2 = *(int32_t *)((longlong)&(__this->fields).nodes + 4);
  uVar1 = *(undefined8 *)&(__this->fields).field_0x14;
  (__return_storage_ptr__->fields).valid = (bool)(char)uVar1;
  *(int3 *)&(__return_storage_ptr__->fields).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  (__return_storage_ptr__->fields).lastUsedFrameIndex = (int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->fields).viewInstanceID = iVar2;
  return __return_storage_ptr__;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11673B0* method);
// 0x1811673b0

UnityEngine_Vector3_o
Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_11673B0* method)

{
  undefined8 uVar1;
  int32_t iVar2;
  
  iVar2 = *(int32_t *)((longlong)&(__this->fields).nodes + 4);
  uVar1 = *(undefined8 *)&(__this->fields).field_0x14;
  (__return_storage_ptr__->fields).valid = (bool)(char)uVar1;
  *(int3 *)&(__return_storage_ptr__->fields).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  (__return_storage_ptr__->fields).lastUsedFrameIndex = (int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->fields).viewInstanceID = iVar2;
  return __return_storage_ptr__;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11673B0* method);
// 0x1811673b0

UnityEngine_Vector3_o
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_11673B0* method)

{
  undefined8 uVar1;
  int32_t iVar2;
  
  iVar2 = *(int32_t *)((longlong)&(__this->fields).nodes + 4);
  uVar1 = *(undefined8 *)&(__this->fields).field_0x14;
  (__return_storage_ptr__->fields).valid = (bool)(char)uVar1;
  *(int3 *)&(__return_storage_ptr__->fields).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  (__return_storage_ptr__->fields).lastUsedFrameIndex = (int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->fields).viewInstanceID = iVar2;
  return __return_storage_ptr__;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_Reset (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_8E2830* method);
// 0x1808e2830

void
Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_Reset(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_8E2830* method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_Reset (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_8E2830* method);
// 0x1808e2830

void
Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_Reset(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_8E2830* method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_8E2830* method);
// 0x1808e2830

void
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_8E2830* method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11674C0* method);
// 0x1811674c0

Il2CppObject *
Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_11674C0 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_184340818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184340818 = '\x01';
  }
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  local_10 = (__this->fields).__2__current.fields.z;
  pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_1167560* method);
// 0x181167560

Il2CppObject *
Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_1167560 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_18434081b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434081b = '\x01';
  }
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  local_10 = (__this->fields).__2__current.fields.z;
  pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_1167510* method);
// 0x181167510

Il2CppObject *
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_1167510 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_18434081e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434081e = '\x01';
  }
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  local_10 = (__this->fields).__2__current.fields.z;
  pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11671E0* method);
// 0x1811671e0

System_Collections_Generic_IEnumerator_Vector3__o*
Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_11671E0* method)

{
  int iVar1;
  Interpolate_Function_o *value;
  System_Collections_IList_o *value_00;
  Interpolate_ToVector3_T__o *value_01;
  System_Collections_Generic_IEnumerable_float__o *value_02;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_18116725a;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_18116725a:
  if (__this_00 != (Interpolate__NewBezier_d__16_T__o *)0x0) {
    value = (__this->fields).__3__ease;
    (__this_00->fields).ease = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease,value);
    value_00 = (__this->fields).__3__nodes;
    (__this_00->fields).nodes = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes,value_00);
    value_01 = (__this->fields).__3__toVector3;
    (__this_00->fields).toVector3 = value_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3,value_01);
    (__this_00->fields).maxStep = (__this->fields).__3__maxStep;
    value_02 = (__this->fields).__3__steps;
    (__this_00->fields).steps = value_02;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).steps,value_02);
    return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11671E0* method);
// 0x1811671e0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_11671E0 *method)

{
  int iVar1;
  Interpolate_Function_o *value;
  System_Collections_IList_o *value_00;
  Interpolate_ToVector3_T__o *value_01;
  System_Collections_Generic_IEnumerable_float__o *value_02;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_18116725a;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_18116725a:
  if (__this_00 != (Interpolate__NewBezier_d__16_T__o *)0x0) {
    value = (__this->fields).__3__ease;
    (__this_00->fields).ease = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease,value);
    value_00 = (__this->fields).__3__nodes;
    (__this_00->fields).nodes = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes,value_00);
    value_01 = (__this->fields).__3__toVector3;
    (__this_00->fields).toVector3 = value_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3,value_01);
    (__this_00->fields).maxStep = (__this->fields).__3__maxStep;
    value_02 = (__this->fields).__3__steps;
    (__this_00->fields).steps = value_02;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).steps,value_02);
    return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11672D0* method);
// 0x1811672d0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_11672D0 *method)

{
  int iVar1;
  MethodInfo *pMVar2;
  Interpolate_Function_o *value;
  System_Collections_IList_o *value_00;
  Interpolate_ToVector3_T__o *value_01;
  System_Collections_Generic_IEnumerable_float__o *value_02;
  int32_t iVar3;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *pIVar4;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      (__this->fields).__1__state = 0;
      pIVar4 = __this;
      goto label_181167348;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar4 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  pMVar2 = method->klass->rgctx_data->_6_Interpolate__NewBezier_d__16_T___ctor;
  (*pMVar2->methodPointer)(pIVar4,0,pMVar2);
label_181167348:
  if (pIVar4 != (Interpolate__NewBezier_d__16_T__o *)0x0) {
    value = (__this->fields).__3__ease;
    (pIVar4->fields).ease = value;
    Il2CppCodeGenWriteBarrier(&(pIVar4->fields).ease,value);
    value_00 = (__this->fields).__3__nodes;
    (pIVar4->fields).nodes = value_00;
    Il2CppCodeGenWriteBarrier(&(pIVar4->fields).nodes,value_00);
    value_01 = (__this->fields).__3__toVector3;
    (pIVar4->fields).toVector3 = value_01;
    Il2CppCodeGenWriteBarrier(&(pIVar4->fields).toVector3,value_01);
    (pIVar4->fields).maxStep = (__this->fields).__3__maxStep;
    value_02 = (__this->fields).__3__steps;
    (pIVar4->fields).steps = value_02;
    Il2CppCodeGenWriteBarrier(&(pIVar4->fields).steps,value_02);
    return (System_Collections_Generic_IEnumerator_Vector3__o *)pIVar4;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewBezier_d__16_object___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11673D0* method);
// 0x1811673d0

System_Collections_IEnumerator_o*
Interpolate__NewBezier_d__16_object___System_Collections_IEnumerable_GetEnumerator(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_11673D0* method)

{
  int iVar1;
  MethodInfo *pMVar2;
  Interpolate_Function_o *value;
  System_Collections_IList_o *value_00;
  Interpolate_ToVector3_T__o *value_01;
  System_Collections_Generic_IEnumerable_float__o *value_02;
  int32_t iVar3;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  
  pMVar2 = method->klass->rgctx_data->
           _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
  ;
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181167456;
    }
  }
  klass = pMVar2->klass->rgctx_data->klass;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar3;
label_181167456:
  if (__this_00 != (Interpolate__NewBezier_d__16_T__o *)0x0) {
    value = (__this->fields).__3__ease;
    (__this_00->fields).ease = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease,value);
    value_00 = (__this->fields).__3__nodes;
    (__this_00->fields).nodes = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes,value_00);
    value_01 = (__this->fields).__3__toVector3;
    (__this_00->fields).toVector3 = value_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3,value_01);
    (__this_00->fields).maxStep = (__this->fields).__3__maxStep;
    value_02 = (__this->fields).__3__steps;
    (__this_00->fields).steps = value_02;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).steps,value_02);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11673D0* method);
// 0x1811673d0

System_Collections_IEnumerator_o *
Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_11673D0 *method)

{
  int iVar1;
  MethodInfo *pMVar2;
  Interpolate_Function_o *value;
  System_Collections_IList_o *value_00;
  Interpolate_ToVector3_T__o *value_01;
  System_Collections_Generic_IEnumerable_float__o *value_02;
  int32_t iVar3;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  
  pMVar2 = method->klass->rgctx_data->
           _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
  ;
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181167456;
    }
  }
  klass = pMVar2->klass->rgctx_data->klass;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar3;
label_181167456:
  if (__this_00 != (Interpolate__NewBezier_d__16_T__o *)0x0) {
    value = (__this->fields).__3__ease;
    (__this_00->fields).ease = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease,value);
    value_00 = (__this->fields).__3__nodes;
    (__this_00->fields).nodes = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes,value_00);
    value_01 = (__this->fields).__3__toVector3;
    (__this_00->fields).toVector3 = value_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3,value_01);
    (__this_00->fields).maxStep = (__this->fields).__3__maxStep;
    value_02 = (__this->fields).__3__steps;
    (__this_00->fields).steps = value_02;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).steps,value_02);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_11612B0* method);
// 0x1811612b0

System_Collections_IEnumerator_o*
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator(Interpolate__NewBezier_d__16_T__o* __this, MethodInfo_11612B0* method)

{
  MethodInfo *pMVar1;
  System_Collections_IEnumerator_o *pSVar2;
  
  pMVar1 = method->klass->rgctx_data->
           _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
  ;
  pSVar2 = (System_Collections_IEnumerator_o *)(*pMVar1->methodPointer)(__this,pMVar1);
  return pSVar2;
}


// Interpolate.<NewCatmullRom>d__20<object>$$.ctor
// il2cpp: void Interpolate__NewCatmullRom_d__20_object____ctor (Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, const MethodInfo_8E2870* method);
// 0x1808e2870

void
Interpolate__NewCatmullRom_d__20_object____ctor(Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, MethodInfo_8E2870* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$.ctor
// il2cpp: void Interpolate__NewCatmullRom_d__20_Vector3____ctor (Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, const MethodInfo_8E2870* method);
// 0x1808e2870

void
Interpolate__NewCatmullRom_d__20_Vector3____ctor(Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, MethodInfo_8E2870* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType____ctor (Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, const MethodInfo_8E2870* method);
// 0x1808e2870

void
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType____ctor(Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, MethodInfo_8E2870* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCatmullRom_d__20_object___System_IDisposable_Dispose (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_547020* method);
// 0x180547020

void
Interpolate__NewCatmullRom_d__20_object___System_IDisposable_Dispose(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_547020* method)

{
  return;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCatmullRom_d__20_Vector3___System_IDisposable_Dispose (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_547020* method);
// 0x180547020

void
Interpolate__NewCatmullRom_d__20_Vector3___System_IDisposable_Dispose(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_547020* method)

{
  return;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_IDisposable_Dispose (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_547020* method);
// 0x180547020

void
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_IDisposable_Dispose(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_547020* method)

{
  return;
}


// Interpolate.<NewCatmullRom>d__20<object>$$MoveNext
// il2cpp: bool Interpolate__NewCatmullRom_d__20_object___MoveNext (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_11677E0* method);
// 0x1811677e0
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1811678bc: nop dword ptr [rax]
// asm:   0x181167919: mov eax, edi
// asm:   0x18116791b: jmp 0x181167927
// asm:   0x1811679bf: mov rax, rdi
// asm:   0x1811679c2: jmp 0x1811679d8
// asm:   0x181167a51: mov rax, rdi
// asm:   0x181167a54: jmp 0x181167a6a
// asm:   0x181167adc: mov rax, rdi
// asm:   0x181167adf: jmp 0x181167af5
// asm:   0x181167b68: mov rax, rdi
// asm:   0x181167b6b: jmp 0x181167b81
// asm:   0x181167d18: mov r9, qword ptr [rbp + 0x28]
// asm:   0x181167d1c: lea rcx, [rsp + 0x80]
// asm:   0x181167d24: mov rdx, qword ptr [rbp + 0x40]
// asm:   0x181167d28: mov r8, rdi
// asm:   0x181167d2b: call qword ptr [rbp + 0x18]
// asm:   0x181167d2e: movsd xmm0, qword ptr [rax]
// asm:   0x181167d32: mov ecx, dword ptr [rax + 8]
// asm:   0x181167d35: movsd qword ptr [rbx + 0x14], xmm0
// asm:   0x181167d3a: mov dword ptr [rbx + 0x1c], ecx
// asm:   0x181167d3d: mov dword ptr [rbx + 0x10], 1
// asm:   0x181167d44: jmp 0x181167c2b

bool Interpolate__NewCatmullRom_d__20_object___MoveNext
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_11677E0 *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  System_Collections_IList_o *pSVar8;
  Interpolate_ToVector3_T__o *pIVar9;
  int iVar10;
  void *pvVar11;
  Il2CppObject *pIVar12;
  Il2CppClass *pIVar13;
  undefined8 *puVar14;
  Il2CppObject *pIVar15;
  Il2CppObject *pIVar16;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_o local_68 [5];
  
  if (Il2CppMethodInitialized_18434081f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    Il2CppMethodInitialized_18434081f = '\x01';
  }
  iVar10 = (__this->fields).__1__state;
  if (iVar10 == 0) {
    pIVar16 = (Il2CppObject *)(__this->fields).nodes;
    (__this->fields).__1__state = -1;
    if (pIVar16 != (Il2CppObject *)0x0) {
      pvVar11 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar16);
      if ((int)pvVar11 < 2) {
        return false;
      }
      pSVar8 = (__this->fields).nodes;
      if (pSVar8 != (System_Collections_IList_o *)0x0) {
        pIVar9 = (__this->fields).toVector3;
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,0);
        if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
          pIVar13 = method->klass->rgctx_data->_2_T;
          if (((pIVar13->_2).bitflags1 & 1) == 0) {
            pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
          }
          if (pIVar16 == (Il2CppObject *)0x0) {
            pIVar12 = (Il2CppObject *)0x0;
          }
          else {
            pIVar12 = il2cpp_vm_Object_IsInst(pIVar16,pIVar13);
            if (pIVar12 == (Il2CppObject *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar16,pIVar13);
            }
          }
          puVar14 = (undefined8 *)
                    (*(code *)(pIVar9->fields).invoke_impl)
                              (local_68,(pIVar9->fields).method_code,pIVar12,(pIVar9->fields).method);
          uVar2 = *puVar14;
          fVar5 = *(float *)(puVar14 + 1);
          (__this->fields).__2__current.fields.x = (float)(int)uVar2;
          (__this->fields).__2__current.fields.y = (float)(int)((ulonglong)uVar2 >> 0x20);
          (__this->fields).__2__current.fields.z = fVar5;
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
  }
  else {
    pIVar16 = (Il2CppObject *)0x0;
    if (iVar10 == 1) {
      pIVar12 = (Il2CppObject *)(__this->fields).nodes;
      (__this->fields).__1__state = -1;
      if (pIVar12 != (Il2CppObject *)0x0) {
        pvVar11 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar12);
        (__this->fields)._current_5__3 = 0;
        (__this->fields)._last_5__2 = (int)pvVar11 + -1;
        goto label_1811678c0;
      }
    }
    else {
      if (iVar10 != 2) {
        return false;
      }
      piVar1 = &(__this->fields)._step_5__9;
      *piVar1 = *piVar1 + 1;
      (__this->fields).__1__state = -1;
      while ((__this->fields)._stepCount_5__8 < (__this->fields)._step_5__9) {
        piVar1 = &(__this->fields)._current_5__3;
        *piVar1 = *piVar1 + 1;
label_1811678c0:
        if ((__this->fields).loop == false) {
          if ((__this->fields)._last_5__2 <= (__this->fields)._current_5__3) {
            return false;
          }
          if ((__this->fields).loop != false) goto label_1811678d4;
        }
        else {
label_1811678d4:
          if ((__this->fields)._last_5__2 < (__this->fields)._current_5__3) {
            (__this->fields)._current_5__3 = 0;
          }
        }
        if ((__this->fields)._current_5__3 == 0) {
          if ((__this->fields).loop == false) {
            iVar10 = (__this->fields)._current_5__3;
          }
          else {
            iVar10 = (__this->fields)._last_5__2;
          }
        }
        else {
          iVar10 = (__this->fields)._current_5__3 + -1;
        }
        if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_181167d49;
        (__this->fields)._previous_5__4 = iVar10;
        (__this->fields)._start_5__5 = (__this->fields)._current_5__3;
        if ((__this->fields)._current_5__3 == (__this->fields)._last_5__2) {
          iVar10 = 0;
          if ((__this->fields).loop == false) {
            iVar10 = (__this->fields)._current_5__3;
          }
        }
        else {
          iVar10 = (__this->fields)._current_5__3 + 1;
        }
        (__this->fields)._end_5__6 = iVar10;
        if ((__this->fields)._end_5__6 == (__this->fields)._last_5__2) {
          if ((__this->fields).loop == false) {
            iVar10 = (__this->fields)._end_5__6;
          }
          else {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = (__this->fields)._end_5__6 + 1;
        }
        (__this->fields)._next_5__7 = iVar10;
        (__this->fields)._step_5__9 = 1;
        (__this->fields)._stepCount_5__8 = (__this->fields).slices + 1;
      }
      pSVar8 = (__this->fields).nodes;
      if (pSVar8 != (System_Collections_IList_o *)0x0) {
        pIVar9 = (__this->fields).toVector3;
        pIVar12 = (Il2CppObject *)
                  il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,(__this->fields)._previous_5__4);
        if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
          pIVar13 = method->klass->rgctx_data->_2_T;
          if (((pIVar13->_2).bitflags1 & 1) == 0) {
            pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
          }
          pIVar15 = pIVar16;
          if ((pIVar12 != (Il2CppObject *)0x0) &&
             (pIVar15 = il2cpp_vm_Object_IsInst(pIVar12,pIVar13), pIVar15 == (Il2CppObject *)0x0)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar12,pIVar13);
          }
          puVar14 = (undefined8 *)
                    (*(code *)(pIVar9->fields).invoke_impl)
                              (&local_78,(pIVar9->fields).method_code,pIVar15,(pIVar9->fields).method);
          pSVar8 = (__this->fields).nodes;
          if (pSVar8 != (System_Collections_IList_o *)0x0) {
            uVar2 = *puVar14;
            fVar5 = *(float *)(puVar14 + 1);
            pIVar9 = (__this->fields).toVector3;
            pIVar12 = (Il2CppObject *)
                      il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,(__this->fields)._start_5__5);
            if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
              pIVar13 = method->klass->rgctx_data->_2_T;
              if (((pIVar13->_2).bitflags1 & 1) == 0) {
                pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
              }
              pIVar15 = pIVar16;
              if ((pIVar12 != (Il2CppObject *)0x0) &&
                 (pIVar15 = il2cpp_vm_Object_IsInst(pIVar12,pIVar13), pIVar15 == (Il2CppObject *)0x0)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar12,pIVar13);
              }
              puVar14 = (undefined8 *)
                        (*(code *)(pIVar9->fields).invoke_impl)
                                  (&local_78,(pIVar9->fields).method_code,pIVar15,(pIVar9->fields).method);
              pSVar8 = (__this->fields).nodes;
              if (pSVar8 != (System_Collections_IList_o *)0x0) {
                uVar3 = *puVar14;
                fVar6 = *(float *)(puVar14 + 1);
                pIVar9 = (__this->fields).toVector3;
                pIVar12 = (Il2CppObject *)
                          il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,(__this->fields)._end_5__6)
                ;
                if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
                  pIVar13 = method->klass->rgctx_data->_2_T;
                  if (((pIVar13->_2).bitflags1 & 1) == 0) {
                    pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
                  }
                  pIVar15 = pIVar16;
                  if ((pIVar12 != (Il2CppObject *)0x0) &&
                     (pIVar15 = il2cpp_vm_Object_IsInst(pIVar12,pIVar13), pIVar15 == (Il2CppObject *)0x0)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pIVar12,pIVar13);
                  }
                  puVar14 = (undefined8 *)
                            (*(code *)(pIVar9->fields).invoke_impl)
                                      (&local_78,(pIVar9->fields).method_code,pIVar15,(pIVar9->fields).method)
                  ;
                  pSVar8 = (__this->fields).nodes;
                  if (pSVar8 != (System_Collections_IList_o *)0x0) {
                    uVar4 = *puVar14;
                    fVar7 = *(float *)(puVar14 + 1);
                    pIVar9 = (__this->fields).toVector3;
                    pIVar12 = (Il2CppObject *)
                              il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,
                                            (__this->fields)._next_5__7);
                    if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
                      pIVar13 = method->klass->rgctx_data->_2_T;
                      if (((pIVar13->_2).bitflags1 & 1) == 0) {
                        pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
                      }
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar16 = il2cpp_vm_Object_IsInst(pIVar12,pIVar13), pIVar16 == (Il2CppObject *)0x0))
                      {
                        il2cpp_codegen_raise_invalid_cast_exception(pIVar12,pIVar13);
                      }
                      puVar14 = (undefined8 *)
                                (*(code *)(pIVar9->fields).invoke_impl)
                                          (&local_78,(pIVar9->fields).method_code,pIVar16,
                                           (pIVar9->fields).method);
                      local_a8._0_8_ = *puVar14;
                      local_a8.z = *(float *)(puVar14 + 1);
                      local_98._0_8_ = uVar4;
                      local_98.z = fVar7;
                      local_88._0_8_ = uVar3;
                      local_88.z = fVar6;
                      local_78._0_8_ = uVar2;
                      local_78.z = fVar5;
                      pUVar17 = Interpolate__CatmullRom
                                          (local_68,(UnityEngine_Vector3_o *)&local_78,
                                           (UnityEngine_Vector3_o *)&local_88,
                                           (UnityEngine_Vector3_o *)&local_98,
                                           (UnityEngine_Vector3_o *)&local_a8,
                                           (float)(__this->fields)._step_5__9,
                                           (float)(__this->fields)._stepCount_5__8,(MethodInfo *)0x0);
                      fVar6 = (pUVar17->fields).y;
                      fVar5 = (pUVar17->fields).z;
                      (__this->fields).__2__current.fields.x = (pUVar17->fields).x;
                      (__this->fields).__2__current.fields.y = fVar6;
                      (__this->fields).__2__current.fields.z = fVar5;
                      (__this->fields).__1__state = 2;
                      return true;
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
label_181167d49:
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$MoveNext
// il2cpp: bool Interpolate__NewCatmullRom_d__20_Vector3___MoveNext (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1394560* method);
// 0x181394560
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181394aad: call 0x180416360  ; il2cpp_object_unbox()
// asm:   0x181394ab2: mov r9, qword ptr [rsi + 0x28]
// asm:   0x181394ab6: lea r8, [rbp - 0x19]
// asm:   0x181394aba: mov rdx, qword ptr [rsi + 0x40]
// asm:   0x181394abe: lea rcx, [rbp - 9]
// asm:   0x181394ac2: movsd xmm0, qword ptr [rax]
// asm:   0x181394ac6: mov eax, dword ptr [rax + 8]
// asm:   0x181394ac9: movsd qword ptr [rbp - 0x19], xmm0
// asm:   0x181394ace: mov dword ptr [rbp - 0x11], eax
// asm:   0x181394ad1: call qword ptr [rsi + 0x18]
// asm:   0x181394ad4: movsd xmm0, qword ptr [rax]
// asm:   0x181394ad8: mov ecx, dword ptr [rax + 8]
// asm:   0x181394adb: movsd qword ptr [rbx + 0x14], xmm0
// asm:   0x181394ae0: mov dword ptr [rbx + 0x1c], ecx
// asm:   0x181394ae3: mov dword ptr [rbx + 0x10], 1
// asm:   0x181394aea: jmp 0x1813949d1

bool Interpolate__NewCatmullRom_d__20_Vector3___MoveNext
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_1394560 *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  System_Collections_IList_o *pSVar8;
  Interpolate_ToVector3_T__o *pIVar9;
  int iVar10;
  void *pvVar11;
  Il2CppObject *pIVar12;
  Il2CppClass *pIVar13;
  undefined8 *puVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_o local_68 [5];
  
  if (Il2CppMethodInitialized_184340d3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    Il2CppMethodInitialized_184340d3e = '\x01';
  }
  iVar10 = (__this->fields).__1__state;
  if (iVar10 == 0) {
    pIVar12 = (Il2CppObject *)(__this->fields).nodes;
    (__this->fields).__1__state = -1;
    if (pIVar12 != (Il2CppObject *)0x0) {
      pvVar11 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar12);
      if ((int)pvVar11 < 2) {
        return false;
      }
      pSVar8 = (__this->fields).nodes;
      if (pSVar8 != (System_Collections_IList_o *)0x0) {
        pIVar9 = (__this->fields).toVector3;
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,0);
        if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
          pIVar13 = method->klass->rgctx_data->_2_T;
          if (((pIVar13->_2).bitflags1 & 1) == 0) {
            pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
          }
          if (pIVar12 != (Il2CppObject *)0x0) {
            if ((pIVar12->klass->_1).element_class == (pIVar13->_1).element_class) {
              puVar14 = il2cpp_object_unbox(pIVar12);
              local_78._0_8_ = *puVar14;
              local_78.z = *(float *)(puVar14 + 1);
              puVar14 = (undefined8 *)
                        (*(code *)(pIVar9->fields).invoke_impl)
                                  (local_68,(pIVar9->fields).method_code,&local_78,(pIVar9->fields).method);
              uVar2 = *puVar14;
              fVar5 = *(float *)(puVar14 + 1);
              (__this->fields).__2__current.fields.x = (float)(int)uVar2;
              (__this->fields).__2__current.fields.y = (float)(int)((ulonglong)uVar2 >> 0x20);
              (__this->fields).__2__current.fields.z = fVar5;
              (__this->fields).__1__state = 1;
              return true;
            }
            il2cpp_codegen_raise_invalid_cast_exception(pIVar12,pIVar13);
          }
        }
      }
    }
  }
  else if (iVar10 == 1) {
    pIVar12 = (Il2CppObject *)(__this->fields).nodes;
    (__this->fields).__1__state = -1;
    if (pIVar12 != (Il2CppObject *)0x0) {
      pvVar11 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar12);
      (__this->fields)._current_5__3 = 0;
      (__this->fields)._last_5__2 = (int)pvVar11 + -1;
      goto label_181394640;
    }
  }
  else {
    if (iVar10 != 2) {
      return false;
    }
    piVar1 = &(__this->fields)._step_5__9;
    *piVar1 = *piVar1 + 1;
    (__this->fields).__1__state = -1;
    while ((__this->fields)._stepCount_5__8 < (__this->fields)._step_5__9) {
      piVar1 = &(__this->fields)._current_5__3;
      *piVar1 = *piVar1 + 1;
label_181394640:
      if ((__this->fields).loop == false) {
        if ((__this->fields)._last_5__2 <= (__this->fields)._current_5__3) {
          return false;
        }
        if ((__this->fields).loop != false) goto label_181394654;
      }
      else {
label_181394654:
        if ((__this->fields)._last_5__2 < (__this->fields)._current_5__3) {
          (__this->fields)._current_5__3 = 0;
        }
      }
      if ((__this->fields)._current_5__3 == 0) {
        if ((__this->fields).loop == false) {
          iVar10 = (__this->fields)._current_5__3;
        }
        else {
          iVar10 = (__this->fields)._last_5__2;
        }
      }
      else {
        iVar10 = (__this->fields)._current_5__3 + -1;
      }
      if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_181394aef;
      (__this->fields)._previous_5__4 = iVar10;
      (__this->fields)._start_5__5 = (__this->fields)._current_5__3;
      if ((__this->fields)._current_5__3 == (__this->fields)._last_5__2) {
        if ((__this->fields).loop == false) {
          iVar10 = (__this->fields)._current_5__3;
        }
        else {
          iVar10 = 0;
        }
      }
      else {
        iVar10 = (__this->fields)._current_5__3 + 1;
      }
      (__this->fields)._end_5__6 = iVar10;
      if ((__this->fields)._end_5__6 == (__this->fields)._last_5__2) {
        if ((__this->fields).loop == false) {
          iVar10 = (__this->fields)._end_5__6;
        }
        else {
          iVar10 = 0;
        }
      }
      else {
        iVar10 = (__this->fields)._end_5__6 + 1;
      }
      (__this->fields)._next_5__7 = iVar10;
      (__this->fields)._step_5__9 = 1;
      (__this->fields)._stepCount_5__8 = (__this->fields).slices + 1;
    }
    pSVar8 = (__this->fields).nodes;
    if (pSVar8 != (System_Collections_IList_o *)0x0) {
      pIVar9 = (__this->fields).toVector3;
      pIVar12 = (Il2CppObject *)
                il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,(__this->fields)._previous_5__4);
      if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
        pIVar13 = method->klass->rgctx_data->_2_T;
        if (((pIVar13->_2).bitflags1 & 1) == 0) {
          pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
        }
        if (pIVar12 != (Il2CppObject *)0x0) {
          if ((pIVar12->klass->_1).element_class != (pIVar13->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar12,pIVar13);
          }
          puVar14 = il2cpp_object_unbox(pIVar12);
          local_a8._0_8_ = *puVar14;
          local_a8.z = *(float *)(puVar14 + 1);
          puVar14 = (undefined8 *)
                    (*(code *)(pIVar9->fields).invoke_impl)
                              (&local_78,(pIVar9->fields).method_code,&local_a8,(pIVar9->fields).method);
          pSVar8 = (__this->fields).nodes;
          if (pSVar8 != (System_Collections_IList_o *)0x0) {
            uVar2 = *puVar14;
            fVar5 = *(float *)(puVar14 + 1);
            pIVar9 = (__this->fields).toVector3;
            pIVar12 = (Il2CppObject *)
                      il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,(__this->fields)._start_5__5);
            if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
              pIVar13 = method->klass->rgctx_data->_2_T;
              if (((pIVar13->_2).bitflags1 & 1) == 0) {
                pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
              }
              if (pIVar12 != (Il2CppObject *)0x0) {
                if ((pIVar12->klass->_1).element_class != (pIVar13->_1).element_class) {
                  il2cpp_codegen_raise_invalid_cast_exception(pIVar12,pIVar13);
                }
                puVar14 = il2cpp_object_unbox(pIVar12);
                local_a8._0_8_ = *puVar14;
                local_a8.z = *(float *)(puVar14 + 1);
                puVar14 = (undefined8 *)
                          (*(code *)(pIVar9->fields).invoke_impl)
                                    (&local_78,(pIVar9->fields).method_code,&local_a8,(pIVar9->fields).method)
                ;
                pSVar8 = (__this->fields).nodes;
                if (pSVar8 != (System_Collections_IList_o *)0x0) {
                  uVar3 = *puVar14;
                  fVar6 = *(float *)(puVar14 + 1);
                  pIVar9 = (__this->fields).toVector3;
                  pIVar12 = (Il2CppObject *)
                            il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,
                                          (__this->fields)._end_5__6);
                  if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
                    pIVar13 = method->klass->rgctx_data->_2_T;
                    if (((pIVar13->_2).bitflags1 & 1) == 0) {
                      pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
                    }
                    if (pIVar12 != (Il2CppObject *)0x0) {
                      if ((pIVar12->klass->_1).element_class != (pIVar13->_1).element_class) {
                        il2cpp_codegen_raise_invalid_cast_exception(pIVar12,pIVar13);
                      }
                      puVar14 = il2cpp_object_unbox(pIVar12);
                      local_a8._0_8_ = *puVar14;
                      local_a8.z = *(float *)(puVar14 + 1);
                      puVar14 = (undefined8 *)
                                (*(code *)(pIVar9->fields).invoke_impl)
                                          (&local_78,(pIVar9->fields).method_code,&local_a8,
                                           (pIVar9->fields).method);
                      pSVar8 = (__this->fields).nodes;
                      if (pSVar8 != (System_Collections_IList_o *)0x0) {
                        uVar4 = *puVar14;
                        fVar7 = *(float *)(puVar14 + 1);
                        pIVar9 = (__this->fields).toVector3;
                        pIVar12 = (Il2CppObject *)
                                  il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar8,
                                                (__this->fields)._next_5__7);
                        if (pIVar9 != (Interpolate_ToVector3_T__o *)0x0) {
                          pIVar13 = method->klass->rgctx_data->_2_T;
                          if (((pIVar13->_2).bitflags1 & 1) == 0) {
                            pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
                          }
                          if (pIVar12 != (Il2CppObject *)0x0) {
                            if ((pIVar12->klass->_1).element_class == (pIVar13->_1).element_class) {
                              puVar14 = il2cpp_object_unbox(pIVar12);
                              local_a8._0_8_ = *puVar14;
                              local_a8.z = *(float *)(puVar14 + 1);
                              puVar14 = (undefined8 *)
                                        (*(code *)(pIVar9->fields).invoke_impl)
                                                  (&local_78,(pIVar9->fields).method_code,&local_a8,
                                                   (pIVar9->fields).method);
                              local_a8._0_8_ = *puVar14;
                              local_a8.z = *(float *)(puVar14 + 1);
                              local_98._0_8_ = uVar4;
                              local_98.z = fVar7;
                              local_88._0_8_ = uVar3;
                              local_88.z = fVar6;
                              local_78._0_8_ = uVar2;
                              local_78.z = fVar5;
                              pUVar15 = Interpolate__CatmullRom
                                                  (local_68,(UnityEngine_Vector3_o *)&local_78,
                                                   (UnityEngine_Vector3_o *)&local_88,
                                                   (UnityEngine_Vector3_o *)&local_98,
                                                   (UnityEngine_Vector3_o *)&local_a8,
                                                   (float)(__this->fields)._step_5__9,
                                                   (float)(__this->fields)._stepCount_5__8,(MethodInfo *)0x0);
                              fVar6 = (pUVar15->fields).y;
                              fVar5 = (pUVar15->fields).z;
                              (__this->fields).__2__current.fields.x = (pUVar15->fields).x;
                              (__this->fields).__2__current.fields.y = fVar6;
                              (__this->fields).__2__current.fields.z = fVar5;
                              (__this->fields).__1__state = 2;
                              return true;
                            }
                            il2cpp_codegen_raise_invalid_cast_exception(pIVar12,pIVar13);
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
  }
label_181394aef:
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$MoveNext
// il2cpp: bool Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___MoveNext (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1393EE0* method);
// 0x181393ee0
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18139402e: nop 
// asm:   0x181394505: mov rax, qword ptr [rdi + 0x20]
// asm:   0x181394509: lea r9, [rbp + 0xc0]
// asm:   0x181394510: mov qword ptr [rbp + 0xc0], r8
// asm:   0x181394517: mov r8, rsi
// asm:   0x18139451a: mov rcx, qword ptr [rax + 0xc0]
// asm:   0x181394521: lea rax, [rbp + 0x30]
// asm:   0x181394525: mov qword ptr [rsp + 0x20], rax
// asm:   0x18139452a: mov r10, qword ptr [rcx + 0x18]
// asm:   0x18139452e: mov rdx, r10
// asm:   0x181394531: mov rcx, qword ptr [r10]
// asm:   0x181394534: call qword ptr [r10 + 0x10]
// asm:   0x181394538: movsd xmm0, qword ptr [rbp + 0x30]
// asm:   0x18139453d: mov eax, dword ptr [rbp + 0x38]
// asm:   0x181394540: movsd qword ptr [rbx + 0x14], xmm0
// asm:   0x181394545: mov dword ptr [rbx + 0x1c], eax
// asm:   0x181394548: mov dword ptr [rbx + 0x10], 1
// asm:   0x18139454f: jmp 0x181394437

bool Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___MoveNext
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_1393EE0 *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  int iVar3;
  float fVar4;
  Il2CppObject *pIVar5;
  System_Collections_IList_o *pSVar6;
  Interpolate_ToVector3_T__o *pIVar7;
  Interpolate__NewCatmullRom_d__20_T__RGCTXs *pIVar8;
  MethodInfo *pMVar9;
  Il2CppMethodPointer pIVar10;
  InvokerMethod pIVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  ulonglong uVar21;
  void *pvVar22;
  undefined8 uVar23;
  Il2CppClass *pIVar24;
  undefined8 *puVar25;
  UnityEngine_Vector3_o *pUVar26;
  ulonglong uVar27;
  undefined8 *local_res8;
  longlong local_res10;
  undefined8 auStack_100 [5];
  longlong lStack_d8;
  float afStack_d0 [4];
  undefined8 uStack_c0;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_o local_78 [5];
  
  if (g_data_184340d40 == '\0') {
    auStack_100[0] = 0x181393f27;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    auStack_100[0] = 0x181393f33;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    g_data_184340d40 = '\x01';
  }
  uVar27 = (ulonglong)(method->klass->rgctx_data->_2_T->_2).stack_slot_size;
  uVar21 = uVar27 + 0xf;
  if (uVar21 <= uVar27) {
    uVar21 = 0xffffffffffffff0;
  }
  auStack_100[0] = 0x181393f6e;
  lVar12 = -(uVar21 & 0xfffffffffffffff0);
  uVar21 = uVar27 + 0xf;
  if (uVar21 <= uVar27) {
    uVar21 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar12) = 0x181393f8b;
  lVar13 = -(uVar21 & 0xfffffffffffffff0);
  uVar21 = uVar27 + 0xf;
  if (uVar21 <= uVar27) {
    uVar21 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar13 + lVar12) = 0x181393fa8;
  lVar14 = -(uVar21 & 0xfffffffffffffff0);
  uVar21 = uVar27 + 0xf;
  if (uVar21 <= uVar27) {
    uVar21 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar14 + lVar13 + lVar12) = 0x181393fc5;
  iVar20 = (__this->fields).__1__state;
  lVar15 = -(uVar21 & 0xfffffffffffffff0);
  local_res10 = (longlong)&local_b8 + lVar15 + lVar14 + lVar13 + lVar12;
  if (iVar20 == 0) {
    pIVar5 = (Il2CppObject *)(__this->fields).nodes;
    (__this->fields).__1__state = -1;
    if (pIVar5 != (Il2CppObject *)0x0) {
      *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x181394485;
      pvVar22 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar5);
      if ((int)pvVar22 < 2) {
        return false;
      }
      pSVar6 = (__this->fields).nodes;
      if (pSVar6 != (System_Collections_IList_o *)0x0) {
        pIVar7 = (__this->fields).toVector3;
        *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1813944b0;
        uVar23 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar6,0);
        pIVar24 = method->klass->rgctx_data->_2_T;
        if (((pIVar24->_2).bitflags1 & 1) == 0) {
          *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1813944d3;
          pIVar24 = il2cpp_codegen_class_init_checked(pIVar24);
        }
        *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1813944e1;
        puVar25 = (undefined8 *)il2cpp_runtime_helper_180416280(uVar23,pIVar24,(longlong)&local_b8 + lVar12);
        if (pIVar7 != (Interpolate_ToVector3_T__o *)0x0) {
          if (-1 < (int)(method->klass->rgctx_data->_2_T->_1).byval_arg.bits) {
            puVar25 = (undefined8 *)*puVar25;
          }
          pIVar8 = method->klass->rgctx_data;
          *(UnityEngine_Vector3_Fields **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12) =
               &local_88;
          pMVar9 = pIVar8->_3_Interpolate_ToVector3_T__Invoke;
          pIVar10 = pMVar9->methodPointer;
          pIVar11 = pMVar9->invoker_method;
          *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x181394538;
          local_res8 = puVar25;
          (*pIVar11)(pIVar10,pMVar9,pIVar7,&local_res8,
                     *(void **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12));
          (__this->fields).__2__current.fields.x = local_88.x;
          (__this->fields).__2__current.fields.y = local_88.y;
          (__this->fields).__2__current.fields.z = local_88.z;
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
  }
  else if (iVar20 == 1) {
    pIVar5 = (Il2CppObject *)(__this->fields).nodes;
    (__this->fields).__1__state = -1;
    if (pIVar5 != (Il2CppObject *)0x0) {
      *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x181394026;
      pvVar22 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_ICollection,pIVar5);
      (__this->fields)._current_5__3 = 0;
      (__this->fields)._last_5__2 = (int)pvVar22 + -1;
      goto label_181394030;
    }
  }
  else {
    if (iVar20 != 2) {
      return false;
    }
    piVar1 = &(__this->fields)._step_5__9;
    *piVar1 = *piVar1 + 1;
    (__this->fields).__1__state = -1;
    while ((__this->fields)._stepCount_5__8 < (__this->fields)._step_5__9) {
      piVar1 = &(__this->fields)._current_5__3;
      *piVar1 = *piVar1 + 1;
label_181394030:
      if ((__this->fields).loop == false) {
        if ((__this->fields)._last_5__2 <= (__this->fields)._current_5__3) {
          return false;
        }
        if ((__this->fields).loop != false) goto label_181394044;
      }
      else {
label_181394044:
        if ((__this->fields)._last_5__2 < (__this->fields)._current_5__3) {
          (__this->fields)._current_5__3 = 0;
        }
      }
      if ((__this->fields)._current_5__3 == 0) {
        if ((__this->fields).loop == false) {
          iVar20 = (__this->fields)._current_5__3;
        }
        else {
          iVar20 = (__this->fields)._last_5__2;
        }
      }
      else {
        iVar20 = (__this->fields)._current_5__3 + -1;
      }
      if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_181394554;
      (__this->fields)._previous_5__4 = iVar20;
      (__this->fields)._start_5__5 = (__this->fields)._current_5__3;
      if ((__this->fields)._current_5__3 == (__this->fields)._last_5__2) {
        if ((__this->fields).loop == false) {
          iVar20 = (__this->fields)._current_5__3;
        }
        else {
          iVar20 = 0;
        }
      }
      else {
        iVar20 = (__this->fields)._current_5__3 + 1;
      }
      (__this->fields)._end_5__6 = iVar20;
      if ((__this->fields)._end_5__6 == (__this->fields)._last_5__2) {
        if ((__this->fields).loop == false) {
          iVar20 = (__this->fields)._end_5__6;
        }
        else {
          iVar20 = 0;
        }
      }
      else {
        iVar20 = (__this->fields)._end_5__6 + 1;
      }
      (__this->fields)._next_5__7 = iVar20;
      (__this->fields)._step_5__9 = 1;
      (__this->fields)._stepCount_5__8 = (__this->fields).slices + 1;
    }
    pSVar6 = (__this->fields).nodes;
    if (pSVar6 != (System_Collections_IList_o *)0x0) {
      iVar2 = (__this->fields)._previous_5__4;
      pIVar7 = (__this->fields).toVector3;
      *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1813940fb;
      uVar23 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar6,iVar2);
      pIVar24 = method->klass->rgctx_data->_2_T;
      if (((pIVar24->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x18139411e;
        pIVar24 = il2cpp_codegen_class_init_checked(pIVar24);
      }
      *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x18139412c;
      puVar25 = (undefined8 *)il2cpp_runtime_helper_180416280(uVar23,pIVar24,(longlong)&local_b8 + lVar12);
      if (pIVar7 != (Interpolate_ToVector3_T__o *)0x0) {
        if (-1 < (int)(method->klass->rgctx_data->_2_T->_1).byval_arg.bits) {
          puVar25 = (undefined8 *)*puVar25;
        }
        pIVar8 = method->klass->rgctx_data;
        *(UnityEngine_Vector3_Fields **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12) = &local_b8
        ;
        pMVar9 = pIVar8->_3_Interpolate_ToVector3_T__Invoke;
        pIVar10 = pMVar9->methodPointer;
        pIVar11 = pMVar9->invoker_method;
        *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x181394187;
        local_res8 = puVar25;
        (*pIVar11)(pIVar10,pMVar9,pIVar7,&local_res8,
                   *(void **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12));
        pSVar6 = (__this->fields).nodes;
        if (pSVar6 != (System_Collections_IList_o *)0x0) {
          iVar2 = (__this->fields)._start_5__5;
          pIVar7 = (__this->fields).toVector3;
          *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1813941aa;
          uVar23 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar6,iVar2);
          pIVar24 = method->klass->rgctx_data->_2_T;
          if (((pIVar24->_2).bitflags1 & 1) == 0) {
            *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1813941cd;
            pIVar24 = il2cpp_codegen_class_init_checked(pIVar24);
          }
          *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1813941db;
          puVar25 = (undefined8 *)il2cpp_runtime_helper_180416280(uVar23,pIVar24,(longlong)&local_b8 + lVar13 + lVar12);
          if (pIVar7 != (Interpolate_ToVector3_T__o *)0x0) {
            if (-1 < (int)(method->klass->rgctx_data->_2_T->_1).byval_arg.bits) {
              puVar25 = (undefined8 *)*puVar25;
            }
            pIVar8 = method->klass->rgctx_data;
            *(UnityEngine_Vector3_Fields **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12) =
                 &local_a8;
            pMVar9 = pIVar8->_3_Interpolate_ToVector3_T__Invoke;
            pIVar10 = pMVar9->methodPointer;
            pIVar11 = pMVar9->invoker_method;
            *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x181394236;
            local_res8 = puVar25;
            (*pIVar11)(pIVar10,pMVar9,pIVar7,&local_res8,
                       *(void **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12));
            pSVar6 = (__this->fields).nodes;
            if (pSVar6 != (System_Collections_IList_o *)0x0) {
              iVar2 = (__this->fields)._end_5__6;
              pIVar7 = (__this->fields).toVector3;
              *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x181394259;
              uVar23 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar6,iVar2);
              pIVar24 = method->klass->rgctx_data->_2_T;
              if (((pIVar24->_2).bitflags1 & 1) == 0) {
                *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x18139427c;
                pIVar24 = il2cpp_codegen_class_init_checked(pIVar24);
              }
              *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x18139428a;
              puVar25 = (undefined8 *)
                        il2cpp_runtime_helper_180416280(uVar23,pIVar24,(longlong)&local_b8 + lVar14 + lVar13 + lVar12);
              if (pIVar7 != (Interpolate_ToVector3_T__o *)0x0) {
                if (-1 < (int)(method->klass->rgctx_data->_2_T->_1).byval_arg.bits) {
                  puVar25 = (undefined8 *)*puVar25;
                }
                pIVar8 = method->klass->rgctx_data;
                *(UnityEngine_Vector3_Fields **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12) =
                     &local_98;
                pMVar9 = pIVar8->_3_Interpolate_ToVector3_T__Invoke;
                pIVar10 = pMVar9->methodPointer;
                pIVar11 = pMVar9->invoker_method;
                *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1813942e5;
                local_res8 = puVar25;
                (*pIVar11)(pIVar10,pMVar9,pIVar7,&local_res8,
                           *(void **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12));
                pSVar6 = (__this->fields).nodes;
                if (pSVar6 != (System_Collections_IList_o *)0x0) {
                  iVar2 = (__this->fields)._next_5__7;
                  pIVar7 = (__this->fields).toVector3;
                  *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x181394308;
                  uVar23 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_IList,pSVar6,iVar2);
                  pIVar24 = method->klass->rgctx_data->_2_T;
                  if (((pIVar24->_2).bitflags1 & 1) == 0) {
                    *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x18139432b;
                    pIVar24 = il2cpp_codegen_class_init_checked(pIVar24);
                  }
                  *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x18139433d;
                  puVar25 = (undefined8 *)il2cpp_runtime_helper_180416280(uVar23,pIVar24,local_res10);
                  fVar16 = local_98.z;
                  uVar18 = local_98._0_8_;
                  fVar4 = local_a8.z;
                  uVar17 = local_a8._0_8_;
                  local_88.z = local_b8.z;
                  uVar23 = local_b8._0_8_;
                  if (pIVar7 != (Interpolate_ToVector3_T__o *)0x0) {
                    if (-1 < (int)(method->klass->rgctx_data->_2_T->_1).byval_arg.bits) {
                      puVar25 = (undefined8 *)*puVar25;
                    }
                    pIVar8 = method->klass->rgctx_data;
                    *(UnityEngine_Vector3_Fields **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12)
                         = &local_98;
                    pMVar9 = pIVar8->_3_Interpolate_ToVector3_T__Invoke;
                    pIVar10 = pMVar9->methodPointer;
                    pIVar11 = pMVar9->invoker_method;
                    *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1813943b3;
                    local_res8 = puVar25;
                    (*pIVar11)(pIVar10,pMVar9,pIVar7,&local_res8,
                               *(void **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12));
                    iVar20 = (__this->fields)._step_5__9;
                    iVar3 = (__this->fields)._stepCount_5__8;
                    *(undefined8 *)((longlong)&uStack_c0 + lVar15 + lVar14 + lVar13 + lVar12) = 0;
                    local_a8.z = fVar16;
                    local_b8.z = fVar4;
                    *(float *)((longlong)afStack_d0 + lVar15 + lVar14 + lVar13 + lVar12 + 8) = (float)iVar3;
                    *(float *)((longlong)afStack_d0 + lVar15 + lVar14 + lVar13 + lVar12) = (float)iVar20;
                    *(UnityEngine_Vector3_Fields **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12)
                         = &local_98;
                    uVar19 = local_98._0_8_;
                    local_98.x = (float)uVar18;
                    local_98.y = SUB84(uVar18,4);
                    local_a8.x = local_98.x;
                    local_a8.y = local_98.y;
                    uVar18 = local_a8._0_8_;
                    local_a8.x = (float)uVar17;
                    local_a8.y = SUB84(uVar17,4);
                    local_b8.x = local_a8.x;
                    local_b8.y = local_a8.y;
                    uVar17 = local_b8._0_8_;
                    local_b8.x = (float)uVar23;
                    local_b8.y = SUB84(uVar23,4);
                    local_88.x = local_b8.x;
                    local_88.y = local_b8.y;
                    local_b8._0_8_ = uVar17;
                    local_a8._0_8_ = uVar18;
                    local_98._0_8_ = uVar19;
                    *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x181394421;
                    pUVar26 = Interpolate__CatmullRom
                                        (local_78,(UnityEngine_Vector3_o *)&local_88,
                                         (UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)&local_a8
                                         ,*(UnityEngine_Vector3_o **)
                                           ((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12),
                                         *(float *)((longlong)afStack_d0 + lVar15 + lVar14 + lVar13 + lVar12),
                                         *(float *)((longlong)afStack_d0 +
                                                   lVar15 + lVar14 + lVar13 + lVar12 + 8),
                                         *(MethodInfo **)
                                          ((longlong)&uStack_c0 + lVar15 + lVar14 + lVar13 + lVar12));
                    fVar16 = (pUVar26->fields).y;
                    fVar4 = (pUVar26->fields).z;
                    (__this->fields).__2__current.fields.x = (pUVar26->fields).x;
                    (__this->fields).__2__current.fields.y = fVar16;
                    (__this->fields).__2__current.fields.z = fVar4;
                    (__this->fields).__1__state = 2;
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_181394554:
  *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x181394559;
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_11673B0* method);
// 0x1811673b0

UnityEngine_Vector3_o
Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_11673B0* method)

{
  undefined8 uVar1;
  int32_t iVar2;
  
  iVar2 = *(int32_t *)((longlong)&(__this->fields).nodes + 4);
  uVar1 = *(undefined8 *)&(__this->fields).field_0x14;
  (__return_storage_ptr__->fields).valid = (bool)(char)uVar1;
  *(int3 *)&(__return_storage_ptr__->fields).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  (__return_storage_ptr__->fields).lastUsedFrameIndex = (int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->fields).viewInstanceID = iVar2;
  return __return_storage_ptr__;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_11673B0* method);
// 0x1811673b0

UnityEngine_Vector3_o
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_11673B0* method)

{
  undefined8 uVar1;
  int32_t iVar2;
  
  iVar2 = *(int32_t *)((longlong)&(__this->fields).nodes + 4);
  uVar1 = *(undefined8 *)&(__this->fields).field_0x14;
  (__return_storage_ptr__->fields).valid = (bool)(char)uVar1;
  *(int3 *)&(__return_storage_ptr__->fields).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  (__return_storage_ptr__->fields).lastUsedFrameIndex = (int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->fields).viewInstanceID = iVar2;
  return __return_storage_ptr__;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_11673B0* method);
// 0x1811673b0

UnityEngine_Vector3_o
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_11673B0* method)

{
  undefined8 uVar1;
  int32_t iVar2;
  
  iVar2 = *(int32_t *)((longlong)&(__this->fields).nodes + 4);
  uVar1 = *(undefined8 *)&(__this->fields).field_0x14;
  (__return_storage_ptr__->fields).valid = (bool)(char)uVar1;
  *(int3 *)&(__return_storage_ptr__->fields).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  (__return_storage_ptr__->fields).lastUsedFrameIndex = (int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->fields).viewInstanceID = iVar2;
  return __return_storage_ptr__;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_Reset (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_8E2830* method);
// 0x1808e2830

void
Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_Reset(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_8E2830* method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_Reset (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_8E2830* method);
// 0x1808e2830

void
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_Reset(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_8E2830* method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_8E2830* method);
// 0x1808e2830

void
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_8E2830* method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1167F40* method);
// 0x181167f40

Il2CppObject *
Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_1167F40 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_184340820 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184340820 = '\x01';
  }
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  local_10 = (__this->fields).__2__current.fields.z;
  pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1394C50* method);
// 0x181394c50

Il2CppObject *
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_1394C50 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_184340d3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184340d3f = '\x01';
  }
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  local_10 = (__this->fields).__2__current.fields.z;
  pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1394C00* method);
// 0x181394c00

Il2CppObject *
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_1394C00 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_184340d41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184340d41 = '\x01';
  }
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  local_10 = (__this->fields).__2__current.fields.z;
  pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1167D90* method);
// 0x181167d90

System_Collections_Generic_IEnumerator_Vector3__o*
Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_1167D90* method)

{
  int iVar1;
  System_Collections_IList_o *value;
  Interpolate_ToVector3_T__o *value_00;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181167e0a;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_181167e0a:
  if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    value = (__this->fields).__3__nodes;
    (__this_00->fields).nodes = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes,value);
    value_00 = (__this->fields).__3__toVector3;
    (__this_00->fields).toVector3 = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3,value_00);
    (__this_00->fields).slices = (__this->fields).__3__slices;
    (__this_00->fields).loop = (__this->fields).__3__loop;
    return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1167D90* method);
// 0x181167d90

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_1167D90 *method)

{
  int iVar1;
  System_Collections_IList_o *value;
  Interpolate_ToVector3_T__o *value_00;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181167e0a;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_181167e0a:
  if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    value = (__this->fields).__3__nodes;
    (__this_00->fields).nodes = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes,value);
    value_00 = (__this->fields).__3__toVector3;
    (__this_00->fields).toVector3 = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3,value_00);
    (__this_00->fields).slices = (__this->fields).__3__slices;
    (__this_00->fields).loop = (__this->fields).__3__loop;
    return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1394B30* method);
// 0x181394b30

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_1394B30 *method)

{
  int iVar1;
  MethodInfo *pMVar2;
  System_Collections_IList_o *value;
  Interpolate_ToVector3_T__o *value_00;
  int32_t iVar3;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar4;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      (__this->fields).__1__state = 0;
      pIVar4 = __this;
      goto label_181394ba8;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar4 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  pMVar2 = method->klass->rgctx_data->_4_Interpolate__NewCatmullRom_d__20_T___ctor;
  (*pMVar2->methodPointer)(pIVar4,0,pMVar2);
label_181394ba8:
  if (pIVar4 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    value = (__this->fields).__3__nodes;
    (pIVar4->fields).nodes = value;
    Il2CppCodeGenWriteBarrier(&(pIVar4->fields).nodes,value);
    value_00 = (__this->fields).__3__toVector3;
    (pIVar4->fields).toVector3 = value_00;
    Il2CppCodeGenWriteBarrier(&(pIVar4->fields).toVector3,value_00);
    (pIVar4->fields).slices = (__this->fields).__3__slices;
    (pIVar4->fields).loop = (__this->fields).__3__loop;
    return (System_Collections_Generic_IEnumerator_Vector3__o *)pIVar4;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1167E60* method);
// 0x181167e60

System_Collections_IEnumerator_o*
Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerable_GetEnumerator(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_1167E60* method)

{
  int iVar1;
  MethodInfo *pMVar2;
  System_Collections_IList_o *value;
  Interpolate_ToVector3_T__o *value_00;
  int32_t iVar3;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  
  pMVar2 = method->klass->rgctx_data->
           _5_Interpolate__NewCatmullRom_d__20_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
  ;
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181167ee6;
    }
  }
  klass = pMVar2->klass->rgctx_data->klass;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar3;
label_181167ee6:
  if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    value = (__this->fields).__3__nodes;
    (__this_00->fields).nodes = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes,value);
    value_00 = (__this->fields).__3__toVector3;
    (__this_00->fields).toVector3 = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3,value_00);
    (__this_00->fields).slices = (__this->fields).__3__slices;
    (__this_00->fields).loop = (__this->fields).__3__loop;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_1167E60* method);
// 0x181167e60

System_Collections_IEnumerator_o *
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_1167E60 *method)

{
  int iVar1;
  MethodInfo *pMVar2;
  System_Collections_IList_o *value;
  Interpolate_ToVector3_T__o *value_00;
  int32_t iVar3;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  
  pMVar2 = method->klass->rgctx_data->
           _5_Interpolate__NewCatmullRom_d__20_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
  ;
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181167ee6;
    }
  }
  klass = pMVar2->klass->rgctx_data->klass;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar3 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar3;
label_181167ee6:
  if (__this_00 != (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    value = (__this->fields).__3__nodes;
    (__this_00->fields).nodes = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes,value);
    value_00 = (__this->fields).__3__toVector3;
    (__this_00->fields).toVector3 = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3,value_00);
    (__this_00->fields).slices = (__this->fields).__3__slices;
    (__this_00->fields).loop = (__this->fields).__3__loop;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_11616C0* method);
// 0x1811616c0

System_Collections_IEnumerator_o*
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator(Interpolate__NewCatmullRom_d__20_T__o* __this, MethodInfo_11616C0* method)

{
  MethodInfo *pMVar1;
  System_Collections_IEnumerator_o *pSVar2;
  
  pMVar1 = method->klass->rgctx_data->
           _5_Interpolate__NewCatmullRom_d__20_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
  ;
  pSVar2 = (System_Collections_IEnumerator_o *)(*pMVar1->methodPointer)(__this,pMVar1);
  return pSVar2;
}


// Interpolate.<NewCounter>d__6$$.ctor
// il2cpp: void Interpolate__NewCounter_d__6___ctor (Interpolate__NewCounter_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e81f0

void
Interpolate__NewCounter_d__6___ctor(Interpolate__NewCounter_d__6_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCounter>d__6$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCounter_d__6__System_IDisposable_Dispose (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x180547020

void
Interpolate__NewCounter_d__6__System_IDisposable_Dispose(Interpolate__NewCounter_d__6_o* __this, MethodInfo* method)

{
  return;
}


// Interpolate.<NewCounter>d__6$$MoveNext
// il2cpp: bool Interpolate__NewCounter_d__6__MoveNext (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x181daffc0

bool Interpolate__NewCounter_d__6__MoveNext(Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    iVar1 = (__this->fields).start;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    iVar1 = (__this->fields)._i_5__2 + (__this->fields).step;
  }
  (__this->fields)._i_5__2 = iVar1;
  (__this->fields).__1__state = -1;
  if ((__this->fields).end < (__this->fields)._i_5__2) {
    return false;
  }
  (__this->fields).__1__state = 1;
  (__this->fields).__2__current = (float)(__this->fields)._i_5__2;
  return true;
}


// Interpolate.<NewCounter>d__6$$System.Collections.Generic.IEnumerator<System.Single>.get_Current
// il2cpp: float Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerator_System_Single__get_Current (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x1815477e0

float
Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerator_System_Single__get_Current(Interpolate__NewCounter_d__6_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewCounter>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCounter_d__6__System_Collections_IEnumerator_Reset (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x181db00b0

void Interpolate__NewCounter_d__6__System_Collections_IEnumerator_Reset
               (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Interpolate_NewCounter_d__6_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Interpolate.<NewCounter>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCounter_d__6__System_Collections_IEnumerator_get_Current (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x181db00f0

Il2CppObject*
Interpolate__NewCounter_d__6__System_Collections_IEnumerator_get_Current(Interpolate__NewCounter_d__6_o* __this, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  local_res8[0] = (__this->fields).__2__current;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar1;
}


// Interpolate.<NewCounter>d__6$$System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_float__o* Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x181db0010

System_Collections_Generic_IEnumerator_float__o*
Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator(Interpolate__NewCounter_d__6_o* __this, MethodInfo* method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewCounter_d__6_o *__this_00;
  
  if (Il2CppMethodInitialized_1843448d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_1843448d3 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181db0083;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_181db0083:
  if (__this_00 != (Interpolate__NewCounter_d__6_o *)0x0) {
    (__this_00->fields).start = (__this->fields).__3__start;
    (__this_00->fields).end = (__this->fields).__3__end;
    (__this_00->fields).step = (__this->fields).__3__step;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewCounter>d__6$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCounter_d__6__System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x181db0010

System_Collections_IEnumerator_o *
Interpolate__NewCounter_d__6__System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewCounter_d__6_o *__this_00;
  
  if (Il2CppMethodInitialized_1843448d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_1843448d3 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181db0083;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_181db0083:
  if (__this_00 != (Interpolate__NewCounter_d__6_o *)0x0) {
    (__this_00->fields).start = (__this->fields).__3__start;
    (__this_00->fields).end = (__this->fields).__3__end;
    (__this_00->fields).step = (__this->fields).__3__step;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewEase>d__9$$.ctor
// il2cpp: void Interpolate__NewEase_d__9___ctor (Interpolate__NewEase_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Interpolate__NewEase_d__9___ctor(Interpolate__NewEase_d__9_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Interpolate.<NewEase>d__9$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewEase_d__9__System_IDisposable_Dispose (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x181db0540
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db05ab: jmp 0x181db05c1
// asm:   0x181db05ad: lea rcx, [rsp + 0x30]
// asm:   0x181db05b2: call 0x181d9e190  ; il2cpp_runtime_helper_181d9e190()
// asm:   0x181db05b7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181db05bc: test rcx, rcx
// asm:   0x181db05bf: jne 0x181db05c7
// asm:   0x181db05c7: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Interpolate__NewEase_d__9__System_IDisposable_Dispose
               (Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_1843448d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_1843448d5 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
    }
  }
  return;
}


// Interpolate.<NewEase>d__9$$MoveNext
// il2cpp: bool Interpolate__NewEase_d__9__MoveNext (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x181db0120
// eh: try 0x181db01ae..0x181db04e5 -> pad 0x183315aa0 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db048d: mov rbx, qword ptr [rsp + 0x48]
// asm:   0x181db0492: test rbx, rbx
// asm:   0x181db0495: jne 0x181db04e5
// asm:   0x181db0497: movzx eax, byte ptr [rsp + 0xf0]
// asm:   0x181db04e5: lea rcx, [rsp + 0x50]
// asm:   0x181db04ea: call 0x181d9e1f0  ; il2cpp_runtime_helper_181d9e1f0()
// asm:   0x181db04ef: mov rcx, rbx
// asm:   0x181db04f2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315aa0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315aa5: push rbp
// asm:   0x183315aa6: sub rsp, 0x30
// asm:   0x183315aaa: mov rbp, rdx
// asm:   0x183315aad: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315ab1: mov rcx, qword ptr [rax]
// asm:   0x183315ab4: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183315ab8: movabs rax, 0
// asm:   0x183315ac2: add rsp, 0x30
// asm:   0x183315ac6: pop rbp
// asm:   0x183315ac7: ret 

bool Interpolate__NewEase_d__9__MoveNext(Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  int iVar7;
  Il2CppClass *pIVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Interpolate_Function_o *pIVar10;
  Interpolate__NewEase_d__9_o *pIVar11;
  bool bVar12;
  System_Collections_Generic_IEnumerator_float__o *value;
  void *pvVar13;
  VirtualInvokeData *pVVar14;
  Il2CppObject *pIVar15;
  ushort uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  Interpolate__NewEase_d__9_o *local_res8 [2];
  undefined1 local_res18;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_90;
  Interpolate__NewEase_d__9_o **local_88;
  
  local_res8[0] = __this;
  if (Il2CppMethodInitialized_1843448d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_1843448d4 = '\x01';
  }
  local_res18 = 0;
  local_90 = 0;
  local_88 = local_res8;
  iVar7 = (local_res8[0]->fields).__1__state;
  if (iVar7 == 0) {
    (local_res8[0]->fields).__1__state = -1;
    fVar17 = (local_res8[0]->fields).end.fields.y;
    fVar1 = (local_res8[0]->fields).start.fields.y;
    fVar2 = (local_res8[0]->fields).end.fields.z;
    fVar3 = (local_res8[0]->fields).start.fields.z;
    (local_res8[0]->fields)._distance_5__2.fields.x =
         (local_res8[0]->fields).end.fields.x - (local_res8[0]->fields).start.fields.x;
    (local_res8[0]->fields)._distance_5__2.fields.y = fVar17 - fVar1;
    (local_res8[0]->fields)._distance_5__2.fields.z = fVar2 - fVar3;
    pIVar15 = (Il2CppObject *)(local_res8[0]->fields).driver;
    if (pIVar15 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    value = InterfaceInvoker0_Invoke
                      (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_float,pIVar15);
    (local_res8[0]->fields).__7__wrap2 = value;
    Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields).__7__wrap2,value);
  }
  else if (iVar7 != 1) {
    return false;
  }
  (local_res8[0]->fields).__1__state = -3;
  pIVar15 = (Il2CppObject *)(local_res8[0]->fields).__7__wrap2;
  if (pIVar15 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pvVar13 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar15);
  pIVar11 = local_res8[0];
  if ((char)pvVar13 == '\0') {
    if (Il2CppMethodInitialized_1843448d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_1843448d5 = '\x01';
    }
    (pIVar11->fields).__1__state = -1;
    if ((pIVar11->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(pIVar11->fields).__7__wrap2);
    }
    (local_res8[0]->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields).__7__wrap2,(void *)0x0);
    bVar12 = false;
  }
  else {
    pIVar15 = (Il2CppObject *)(local_res8[0]->fields).__7__wrap2;
    if (pIVar15 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar8 = pIVar15->klass;
    uVar6 = (pIVar8->_2).interface_offsets_count;
    if (uVar6 != 0) {
      uVar16 = 0;
      pIVar9 = (pIVar8->_1).interfaceOffsets;
      do {
        if (pIVar9[uVar16].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_float) {
          pVVar14 = pIVar8->vtable + pIVar9[uVar16].offset;
          goto label_181db02e6;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar6);
    }
    pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar15,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_float,0);
label_181db02e6:
    fVar17 = (*pVVar14->methodPtr)(pIVar15,pVVar14->method);
    pIVar10 = (local_res8[0]->fields).ease;
    if (pIVar10 == (Interpolate_Function_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar1 = (local_res8[0]->fields)._distance_5__2.fields.y;
    fVar2 = (local_res8[0]->fields)._distance_5__2.fields.z;
    fVar3 = (local_res8[0]->fields).start.fields.y;
    fVar4 = (local_res8[0]->fields).start.fields.z;
    fVar5 = (local_res8[0]->fields).total;
    uVar18 = (*(code *)(pIVar10->fields).invoke_impl)
                       ((pIVar10->fields).method_code,(local_res8[0]->fields).start.fields.x,
                        (local_res8[0]->fields)._distance_5__2.fields.x,fVar17,fVar5,(pIVar10->fields).method)
    ;
    uVar19 = (*(code *)(pIVar10->fields).invoke_impl)
                       ((pIVar10->fields).method_code,fVar3,fVar1,fVar17,fVar5,(pIVar10->fields).method);
    local_98 = (*(code *)(pIVar10->fields).invoke_impl)
                         ((pIVar10->fields).method_code,fVar4,fVar2,fVar17,fVar5,(pIVar10->fields).method);
    local_a0 = uVar18;
    local_9c = uVar19;
    pIVar15 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_a0);
    (local_res8[0]->fields).__2__current = pIVar15;
    Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields).__2__current,pIVar15);
    (local_res8[0]->fields).__1__state = 1;
    bVar12 = true;
  }
  return bVar12;
}


// Interpolate.<NewEase>d__9$$<>m__Finally1
// il2cpp: void Interpolate__NewEase_d__9____m__Finally1 (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x181db05d0

void Interpolate__NewEase_d__9____m__Finally1(Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843448d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_1843448d5 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).__7__wrap2 != (System_Collections_Generic_IEnumerator_float__o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap2);
    return;
  }
  return;
}


// Interpolate.<NewEase>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Interpolate__NewEase_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Interpolate__NewEase_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(Interpolate__NewEase_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewEase>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewEase_d__9__System_Collections_IEnumerator_Reset (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x181db0500

void Interpolate__NewEase_d__9__System_Collections_IEnumerator_Reset
               (Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Interpolate_NewEase_d__9_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Interpolate.<NewEase>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewEase_d__9__System_Collections_IEnumerator_get_Current (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Interpolate__NewEase_d__9__System_Collections_IEnumerator_get_Current(Interpolate__NewEase_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewTimer>d__3$$.ctor
// il2cpp: void Interpolate__NewTimer_d__3___ctor (Interpolate__NewTimer_d__3_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e81f0

void
Interpolate__NewTimer_d__3___ctor(Interpolate__NewTimer_d__3_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewTimer>d__3$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewTimer_d__3__System_IDisposable_Dispose (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x180547020

void
Interpolate__NewTimer_d__3__System_IDisposable_Dispose(Interpolate__NewTimer_d__3_o* __this, MethodInfo* method)

{
  return;
}


// Interpolate.<NewTimer>d__3$$MoveNext
// il2cpp: bool Interpolate__NewTimer_d__3__MoveNext (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x181db0620

bool Interpolate__NewTimer_d__3__MoveNext(Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 0) {
    (__this->fields)._elapsedTime_5__2 = 0.0;
  }
  else {
    if (iVar3 == 1) {
      fVar2 = (__this->fields)._elapsedTime_5__2;
      (__this->fields).__1__state = -1;
      fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar4 = fVar4 + fVar2;
      (__this->fields)._elapsedTime_5__2 = fVar4;
      if ((__this->fields).duration <= fVar4) {
        (__this->fields).__2__current = fVar4;
        (__this->fields).__1__state = 2;
        return true;
      }
      goto label_181db0690;
    }
    if (iVar3 != 2) {
      return false;
    }
  }
  (__this->fields).__1__state = -1;
label_181db0690:
  fVar2 = (__this->fields).duration;
  pfVar1 = &(__this->fields)._elapsedTime_5__2;
  if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
    return false;
  }
  (__this->fields).__2__current = (__this->fields)._elapsedTime_5__2;
  (__this->fields).__1__state = 1;
  return true;
}


// Interpolate.<NewTimer>d__3$$System.Collections.Generic.IEnumerator<System.Single>.get_Current
// il2cpp: float Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerator_System_Single__get_Current (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x1815477e0

float
Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerator_System_Single__get_Current(Interpolate__NewTimer_d__3_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewTimer>d__3$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewTimer_d__3__System_Collections_IEnumerator_Reset (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x181db0750

void Interpolate__NewTimer_d__3__System_Collections_IEnumerator_Reset
               (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Interpolate_NewTimer_d__3_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Interpolate.<NewTimer>d__3$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewTimer_d__3__System_Collections_IEnumerator_get_Current (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x181db00f0

Il2CppObject *
Interpolate__NewTimer_d__3__System_Collections_IEnumerator_get_Current
          (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  local_res8[0] = (__this->fields).__2__current;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar1;
}


// Interpolate.<NewTimer>d__3$$System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_float__o* Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x181db06b0

System_Collections_Generic_IEnumerator_float__o*
Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator(Interpolate__NewTimer_d__3_o* __this, MethodInfo* method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewTimer_d__3_o *__this_00;
  
  if (Il2CppMethodInitialized_1843448d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_1843448d6 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181db0723;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_181db0723:
  if (__this_00 != (Interpolate__NewTimer_d__3_o *)0x0) {
    (__this_00->fields).duration = (__this->fields).__3__duration;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate.<NewTimer>d__3$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewTimer_d__3__System_Collections_IEnumerable_GetEnumerator (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x181db06b0

System_Collections_IEnumerator_o *
Interpolate__NewTimer_d__3__System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewTimer_d__3_o *__this_00;
  
  if (Il2CppMethodInitialized_1843448d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_1843448d6 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181db0723;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_181db0723:
  if (__this_00 != (Interpolate__NewTimer_d__3_o *)0x0) {
    (__this_00->fields).duration = (__this->fields).__3__duration;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Interpolate$$Identity
// il2cpp: UnityEngine_Vector3_o Interpolate__Identity (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x18180f7a0

UnityEngine_Vector3_o
Interpolate__Identity(UnityEngine_Vector3_o v, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).m_Position.fields.z;
  fVar2 = (__this->fields).m_Position.fields.y;
  (__return_storage_ptr__->fields).x = (__this->fields).m_Position.fields.x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Interpolate$$TransformDotPosition
// il2cpp: UnityEngine_Vector3_o Interpolate__TransformDotPosition (UnityEngine_Transform_o* t, const MethodInfo* method);
// 0x181da2ba0

UnityEngine_Vector3_o *
Interpolate__TransformDotPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,UnityEngine_Transform_o *t,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  if (t != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_position(&local_18,t,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Interpolate$$NewTimer
// il2cpp: System_Collections_Generic_IEnumerable_float__o* Interpolate__NewTimer (float duration, const MethodInfo* method);
// 0x181da2b30

System_Collections_Generic_IEnumerable_float__o * Interpolate__NewTimer(float duration,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewTimer_d__3_o *__this;
  
  if (Il2CppMethodInitialized_1843448c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_1843448c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__duration = duration;
  return (System_Collections_Generic_IEnumerable_float__o *)__this;
}


// Interpolate$$NewCounter
// il2cpp: System_Collections_Generic_IEnumerable_float__o* Interpolate__NewCounter (int32_t start, int32_t end, int32_t step, const MethodInfo* method);
// 0x181da2800

System_Collections_Generic_IEnumerable_float__o *
Interpolate__NewCounter(int32_t start,int32_t end,int32_t step,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewCounter_d__6_o *__this;
  
  if (Il2CppMethodInitialized_1843448ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_1843448ca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__start = start;
  (__this->fields).__3__end = end;
  (__this->fields).__3__step = step;
  return (System_Collections_Generic_IEnumerable_float__o *)__this;
}


// Interpolate$$NewEase
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewEase (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, float duration, const MethodInfo* method);
// 0x181da2870

System_Collections_IEnumerator_o *
Interpolate__NewEase
          (Interpolate_Function_o *ease,UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,float duration
          ,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t iVar5;
  Interpolate__NewTimer_d__3_o *__this;
  Interpolate__NewEase_d__9_o *__this_00;
  bool bVar6;
  
  if (Il2CppMethodInitialized_1843448c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_1843448c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar5 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  bVar6 = Il2CppMethodInitialized_1843448cb == '\0';
  (__this->fields).__3__duration = duration;
  (__this->fields).__l__initialThreadId = iVar5;
  if (bVar6) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewEase_d__9);
    Il2CppMethodInitialized_1843448cb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewEase_d__9);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).ease = ease;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease,ease);
  fVar3 = (start->fields).y;
  fVar1 = (start->fields).z;
  fVar2 = (end->fields).z;
  (__this_00->fields).start.fields.x = (start->fields).x;
  (__this_00->fields).start.fields.y = fVar3;
  fVar3 = (end->fields).x;
  fVar4 = (end->fields).y;
  (__this_00->fields).start.fields.z = fVar1;
  (__this_00->fields).end.fields.x = fVar3;
  (__this_00->fields).end.fields.y = fVar4;
  (__this_00->fields).end.fields.z = fVar2;
  (__this_00->fields).total = duration;
  (__this_00->fields).driver = (System_Collections_Generic_IEnumerable_float__o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).driver,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Interpolate$$NewEase
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewEase (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t slices, const MethodInfo* method);
// 0x181da2a20

System_Collections_IEnumerator_o *
Interpolate__NewEase_1da2a20
          (Interpolate_Function_o *ease,UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,int32_t slices
          ,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t iVar4;
  Interpolate__NewCounter_d__6_o *__this;
  Interpolate__NewEase_d__9_o *__this_00;
  bool bVar5;
  
  if (Il2CppMethodInitialized_1843448ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_1843448ca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar4 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  bVar5 = Il2CppMethodInitialized_1843448cb == '\0';
  (__this->fields).__3__end = slices + 1;
  (__this->fields).__l__initialThreadId = iVar4;
  (__this->fields).__3__start = 0;
  (__this->fields).__3__step = 1;
  if (bVar5) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewEase_d__9);
    Il2CppMethodInitialized_1843448cb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewEase_d__9);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).ease = ease;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease,ease);
  fVar3 = (start->fields).y;
  fVar1 = (end->fields).z;
  fVar2 = (start->fields).z;
  (__this_00->fields).start.fields.x = (start->fields).x;
  (__this_00->fields).start.fields.y = fVar3;
  fVar3 = (end->fields).y;
  (__this_00->fields).end.fields.x = (end->fields).x;
  (__this_00->fields).end.fields.y = fVar3;
  (__this_00->fields).end.fields.z = fVar1;
  (__this_00->fields).start.fields.z = fVar2;
  (__this_00->fields).driver = (System_Collections_Generic_IEnumerable_float__o *)__this;
  (__this_00->fields).total = (float)(slices + 1);
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).driver,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Interpolate$$NewEase
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewEase (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, float total, System_Collections_Generic_IEnumerable_float__o* driver, const MethodInfo* method);
// 0x181da2970

System_Collections_IEnumerator_o *
Interpolate__NewEase_1da2970
          (Interpolate_Function_o *ease,UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,float total,
          System_Collections_Generic_IEnumerable_float__o *driver,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Interpolate__NewEase_d__9_o *__this;
  
  if (Il2CppMethodInitialized_1843448cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewEase_d__9);
    Il2CppMethodInitialized_1843448cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewEase_d__9);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).ease = ease;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ease,ease);
  fVar3 = (start->fields).y;
  fVar1 = (start->fields).z;
  fVar2 = (end->fields).z;
  (__this->fields).start.fields.x = (start->fields).x;
  (__this->fields).start.fields.y = fVar3;
  fVar3 = (end->fields).x;
  fVar4 = (end->fields).y;
  (__this->fields).start.fields.z = fVar1;
  (__this->fields).end.fields.x = fVar3;
  (__this->fields).end.fields.y = fVar4;
  (__this->fields).end.fields.z = fVar2;
  (__this->fields).total = total;
  (__this->fields).driver = driver;
  Il2CppCodeGenWriteBarrier(&(__this->fields).driver,driver);
  return (System_Collections_IEnumerator_o *)__this;
}


// Interpolate$$Ease
// il2cpp: UnityEngine_Vector3_o Interpolate__Ease (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1e00

UnityEngine_Vector3_o *
Interpolate__Ease(UnityEngine_Vector3_o *__return_storage_ptr__,Interpolate_Function_o *ease,
                 UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *distance,float elapsedTime,float duration
                 ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (ease != (Interpolate_Function_o *)0x0) {
    uVar1 = (*(code *)(ease->fields).invoke_impl)
                      ((ease->fields).method_code,(start->fields).x,(distance->fields).x,elapsedTime,duration,
                       (ease->fields).method);
    uVar2 = (*(code *)(ease->fields).invoke_impl)
                      ((ease->fields).method_code,(start->fields).y,(distance->fields).y,elapsedTime,duration,
                       (ease->fields).method);
    fVar3 = (float)(*(code *)(ease->fields).invoke_impl)
                             ((ease->fields).method_code,(start->fields).z,(distance->fields).z,elapsedTime,
                              duration,(ease->fields).method);
    (start->fields).z = fVar3;
    (start->fields).x = (float)uVar1;
    (start->fields).y = (float)uVar2;
    fVar3 = (start->fields).z;
    (__return_storage_ptr__->fields).x = (float)uVar1;
    (__return_storage_ptr__->fields).y = (float)uVar2;
    (__return_storage_ptr__->fields).z = fVar3;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Interpolate$$Ease
// il2cpp: Interpolate_Function_o* Interpolate__Ease (int32_t type, const MethodInfo* method);
// 0x181da1f10

Interpolate_Function_o * Interpolate__Ease_1da1f10(int32_t type,MethodInfo *method)

{
  DG_Tweening_EaseFunction_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_1843448cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_Function);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInCirc);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInCubic);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInExpo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInOutCirc);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInOutCubic);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInOutExpo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInOutQuad);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInOutQuart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInOutQuint);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInOutSine);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInQuad);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInQuart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInQuint);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseInSine);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseOutCirc);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseOutCubic);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseOutExpo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseOutQuad);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseOutQuart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseOutQuint);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_EaseOutSine);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_Linear);
    Il2CppMethodInitialized_1843448cc = '\x01';
  }
  __this = (DG_Tweening_EaseFunction_o *)0x0;
  switch(type) {
  case 0:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_Linear;
    break;
  case 1:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInQuad;
    break;
  case 2:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseOutQuad;
    break;
  case 3:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInOutQuad;
    break;
  case 4:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInCubic;
    break;
  case 5:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseOutCubic;
    break;
  case 6:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInOutCubic;
    break;
  case 7:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInQuart;
    break;
  case 8:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseOutQuart;
    break;
  case 9:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInOutQuart;
    break;
  case 10:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInQuint;
    break;
  case 0xb:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseOutQuint;
    break;
  case 0xc:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInOutQuint;
    break;
  case 0xd:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInSine;
    break;
  case 0xe:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseOutSine;
    break;
  case 0xf:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInOutSine;
    break;
  case 0x10:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInExpo;
    break;
  case 0x11:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseOutExpo;
    break;
  case 0x12:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInOutExpo;
    break;
  case 0x13:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInCirc;
    break;
  case 0x14:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseOutCirc;
    break;
  case 0x15:
    __this = (DG_Tweening_EaseFunction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    method_00 = MethodInfo_Interpolate_EaseInOutCirc;
    break;
  default:
    goto switchD_181da2061_default;
  }
  Interpolate_Function___ctor(__this,(Il2CppObject *)0x0,(intptr_t)method_00,(MethodInfo *)0x0);
switchD_181da2061_default:
  return (Interpolate_Function_o *)__this;
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Transform_array* nodes, float duration, const MethodInfo* method);
// 0x181da25f0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier
          (Interpolate_Function_o *ease,UnityEngine_Transform_array *nodes,float duration,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewTimer_d__3_o *steps;
  Interpolate_ToVector3_T__o *toVector3;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar2;
  
  if (Il2CppMethodInitialized_1843448cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewBezier_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_TransformDotPosition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Transform);
    Il2CppMethodInitialized_1843448cd = '\x01';
  }
  if (Il2CppMethodInitialized_1843448c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_1843448c9 = '\x01';
  }
  steps = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)steps,(MethodInfo *)0x0);
  (steps->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (steps->fields).__l__initialThreadId = iVar1;
  (steps->fields).__3__duration = duration;
  toVector3 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Transform);
  System_Func_object__ValueTuple_bool__Vector2_____ctor
            ((System_Func_T__TResult__o *)toVector3,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Interpolate_TransformDotPosition,(MethodInfo_E41220 *)0x0);
  pSVar2 = Interpolate__NewBezier_Vector3_
                     (ease,(System_Collections_IList_o *)nodes,toVector3,duration,
                      (System_Collections_Generic_IEnumerable_float__o *)steps,
                      (MethodInfo_7130B0 *)MethodInfo_Interpolate_NewBezier_Transform);
  return pSVar2;
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Transform_array* nodes, int32_t slices, const MethodInfo* method);
// 0x181da24f0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_1da24f0
          (Interpolate_Function_o *ease,UnityEngine_Transform_array *nodes,int32_t slices,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewCounter_d__6_o *steps;
  Interpolate_ToVector3_T__o *toVector3;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar2;
  
  if (Il2CppMethodInitialized_1843448ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewBezier_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_TransformDotPosition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Transform);
    Il2CppMethodInitialized_1843448ce = '\x01';
  }
  if (Il2CppMethodInitialized_1843448ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_1843448ca = '\x01';
  }
  steps = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)steps,(MethodInfo *)0x0);
  (steps->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (steps->fields).__l__initialThreadId = iVar1;
  (steps->fields).__3__end = slices + 1;
  (steps->fields).__3__start = 0;
  (steps->fields).__3__step = 1;
  toVector3 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Transform);
  System_Func_object__ValueTuple_bool__Vector2_____ctor
            ((System_Func_T__TResult__o *)toVector3,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Interpolate_TransformDotPosition,(MethodInfo_E41220 *)0x0);
  pSVar2 = Interpolate__NewBezier_Vector3_
                     (ease,(System_Collections_IList_o *)nodes,toVector3,(float)(slices + 1),
                      (System_Collections_Generic_IEnumerable_float__o *)steps,
                      (MethodInfo_7130B0 *)MethodInfo_Interpolate_NewBezier_Transform);
  return pSVar2;
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Vector3_array* points, float duration, const MethodInfo* method);
// 0x181da2400

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_1da2400
          (Interpolate_Function_o *ease,UnityEngine_Vector3_array *points,float duration,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewTimer_d__3_o *steps;
  Interpolate_ToVector3_T__o *toVector3;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar2;
  
  if (Il2CppMethodInitialized_1843448cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_Identity);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewBezier_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Vector3);
    Il2CppMethodInitialized_1843448cf = '\x01';
  }
  if (Il2CppMethodInitialized_1843448c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_1843448c9 = '\x01';
  }
  steps = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)steps,(MethodInfo *)0x0);
  (steps->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (steps->fields).__l__initialThreadId = iVar1;
  (steps->fields).__3__duration = duration;
  toVector3 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Vector3);
  Interpolate_ToVector3_Vector3____ctor
            ((System_Func_T__TResult__o *)toVector3,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Interpolate_Identity,(MethodInfo_E41310 *)0x0);
  pSVar2 = Interpolate__NewBezier_Vector3_
                     (ease,(System_Collections_IList_o *)points,toVector3,duration,
                      (System_Collections_Generic_IEnumerable_float__o *)steps,
                      (MethodInfo_7130B0 *)MethodInfo_Interpolate_NewBezier_Vector3);
  return pSVar2;
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Vector3_array* points, int32_t slices, const MethodInfo* method);
// 0x181da2300

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_1da2300
          (Interpolate_Function_o *ease,UnityEngine_Vector3_array *points,int32_t slices,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewCounter_d__6_o *steps;
  Interpolate_ToVector3_T__o *toVector3;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar2;
  
  if (Il2CppMethodInitialized_1843448d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_Identity);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewBezier_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Vector3);
    Il2CppMethodInitialized_1843448d0 = '\x01';
  }
  if (Il2CppMethodInitialized_1843448ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_1843448ca = '\x01';
  }
  steps = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)steps,(MethodInfo *)0x0);
  (steps->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (steps->fields).__l__initialThreadId = iVar1;
  (steps->fields).__3__end = slices + 1;
  (steps->fields).__3__start = 0;
  (steps->fields).__3__step = 1;
  toVector3 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Vector3);
  Interpolate_ToVector3_Vector3____ctor
            ((System_Func_T__TResult__o *)toVector3,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Interpolate_Identity,(MethodInfo_E41310 *)0x0);
  pSVar2 = Interpolate__NewBezier_Vector3_
                     (ease,(System_Collections_IList_o *)points,toVector3,(float)(slices + 1),
                      (System_Collections_Generic_IEnumerable_float__o *)steps,
                      (MethodInfo_7130B0 *)MethodInfo_Interpolate_NewBezier_Vector3);
  return pSVar2;
}


// Interpolate$$NewBezier<object>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier_object_ (Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, const MethodInfo_7130B0* method);
// 0x1807130b0

System_Collections_Generic_IEnumerable_Vector3__o*
Interpolate__NewBezier_object_(Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, MethodInfo_7130B0* method)

{
  Il2CppClass *klass;
  System_Xml_Linq_XElement__GetAttributes_d__116_o *__this;
  
  if (method->rgctx_data == (MethodInfo_7130B0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  klass = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this = (System_Xml_Linq_XElement__GetAttributes_d__116_o *)il2cpp_codegen_object_new(klass);
  System_Xml_Linq_XElement__GetAttributes_d__116___ctor
            (__this,-2,method->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (__this != (System_Xml_Linq_XElement__GetAttributes_d__116_o *)0x0) {
    (*(uint64_t *)((char *)__this + 0x60)) = (System_Xml_Linq_XAttribute_o *)ease;
    Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this + 0x60)),ease);
    (__this->fields).name = (System_Xml_Linq_XName_o *)nodes;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,nodes);
    (*(uint64_t *)((char *)__this + 0x50)) = toVector3;
    Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this + 0x50)),toVector3);
    (__this->fields)._a_5__2 = (System_Xml_Linq_XAttribute_o *)steps;
    *(float *)&__this[1].fields.field_0x14 = maxStep;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._a_5__2,steps);
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  ThrowNullReferenceException();
}


// Interpolate$$NewBezier<Vector3>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier_Vector3_ (Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, const MethodInfo_7130B0* method);
// 0x1807130b0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_Vector3_
          (Interpolate_Function_o *ease,System_Collections_IList_o *nodes,
          Interpolate_ToVector3_T__o *toVector3,float maxStep,
          System_Collections_Generic_IEnumerable_float__o *steps,MethodInfo_7130B0 *method)

{
  Il2CppClass *klass;
  System_Xml_Linq_XElement__GetAttributes_d__116_o *__this;
  
  if (method->rgctx_data == (MethodInfo_7130B0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  klass = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this = (System_Xml_Linq_XElement__GetAttributes_d__116_o *)il2cpp_codegen_object_new(klass);
  System_Xml_Linq_XElement__GetAttributes_d__116___ctor
            (__this,-2,method->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (__this != (System_Xml_Linq_XElement__GetAttributes_d__116_o *)0x0) {
    (*(uint64_t *)((char *)__this + 0x60)) = (System_Xml_Linq_XAttribute_o *)ease;
    Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this + 0x60)),ease);
    (__this->fields).name = (System_Xml_Linq_XName_o *)nodes;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,nodes);
    (*(uint64_t *)((char *)__this + 0x50)) = toVector3;
    Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this + 0x50)),toVector3);
    (__this->fields)._a_5__2 = (System_Xml_Linq_XAttribute_o *)steps;
    *(float *)&__this[1].fields.field_0x14 = maxStep;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._a_5__2,steps);
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  ThrowNullReferenceException();
}


// Interpolate$$NewBezier<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier___Il2CppFullySharedGenericType_ (Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, const MethodInfo_712FD0* method);
// 0x180712fd0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier___Il2CppFullySharedGenericType_
          (Interpolate_Function_o *ease,System_Collections_IList_o *nodes,
          Interpolate_ToVector3_T__o *toVector3,float maxStep,
          System_Collections_Generic_IEnumerable_float__o *steps,MethodInfo_712FD0 *method)

{
  MethodInfo *pMVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_712FD0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  klass = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar2 = il2cpp_codegen_object_new(klass);
  pMVar1 = method->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor;
  (*pMVar1->methodPointer)(pIVar2,0xfffffffe,pMVar1);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[6].klass = (Il2CppClass *)ease;
    Il2CppCodeGenWriteBarrier(&pIVar2[6].klass,ease);
    pIVar2[3].klass = (Il2CppClass *)nodes;
    Il2CppCodeGenWriteBarrier(&pIVar2[3].klass,nodes);
    pIVar2[5].klass = (Il2CppClass *)toVector3;
    Il2CppCodeGenWriteBarrier(&pIVar2[5].klass,toVector3);
    pIVar2[4].klass = (Il2CppClass *)steps;
    *(float *)((longlong)&pIVar2[6].monitor + 4) = maxStep;
    Il2CppCodeGenWriteBarrier(&pIVar2[4].klass,steps);
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pIVar2;
  }
  ThrowNullReferenceException();
}


// Interpolate$$Bezier
// il2cpp: UnityEngine_Vector3_o Interpolate__Bezier (Interpolate_Function_o* ease, UnityEngine_Vector3_array* points, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da12a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da12d8: movss xmm6, dword ptr [rsp + 0xa0]
// asm:   0x181da1418: dec ebp
// asm:   0x181da141a: test ebp, ebp
// asm:   0x181da141c: jg 0x181da12e1

UnityEngine_Vector3_o *
Interpolate__Bezier(UnityEngine_Vector3_o *__return_storage_ptr__,Interpolate_Function_o *ease,
                   UnityEngine_Vector3_array *points,float elapsedTime,float duration,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float fVar5;
  ulonglong uVar4;
  
  if (points == (UnityEngine_Vector3_array *)0x0) {
label_181da1451:
    ThrowNullReferenceException();
  }
  iVar1 = (int)points->max_length;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    uVar4 = 0;
    do {
      uVar3 = (uint)uVar4;
      if (((uint)points->max_length <= uVar3) || ((uint)points->max_length <= uVar3 + 1)) goto label_181da1457;
      if (ease == (Interpolate_Function_o *)0x0) goto label_181da1451;
      fVar5 = (float)(*(code *)(ease->fields).invoke_impl)
                               ((ease->fields).method_code,points->m_Items[uVar4].fields.x,
                                points->m_Items[uVar4 + 1].fields.x - points->m_Items[uVar4].fields.x,
                                elapsedTime,duration,(ease->fields).method);
      if (((((uint)points->max_length <= uVar3) ||
           (points->m_Items[uVar4].fields.x = fVar5, (uint)points->max_length <= uVar3)) ||
          ((uint)points->max_length <= uVar3 + 1)) ||
         (((fVar5 = (float)(*(code *)(ease->fields).invoke_impl)
                                     ((ease->fields).method_code,points->m_Items[uVar4].fields.y,
                                      points->m_Items[uVar4 + 1].fields.y - points->m_Items[uVar4].fields.y,
                                      elapsedTime,duration,(ease->fields).method),
           (uint)points->max_length <= uVar3 ||
           (points->m_Items[uVar4].fields.y = fVar5, (uint)points->max_length <= uVar3)) ||
          (((uint)points->max_length <= uVar3 + 1 ||
           (fVar5 = (float)(*(code *)(ease->fields).invoke_impl)
                                     ((ease->fields).method_code,points->m_Items[uVar4].fields.z,
                                      points->m_Items[uVar4 + 1].fields.z - points->m_Items[uVar4].fields.z,
                                      elapsedTime,duration,(ease->fields).method),
           (uint)points->max_length <= uVar3)))))) goto label_181da1457;
      points->m_Items[uVar4].fields.z = fVar5;
      uVar4 = (ulonglong)(uVar3 + 1);
    } while ((int)(uVar3 + 1) < iVar1);
  }
  if ((int)points->max_length != 0) {
    fVar5 = points->m_Items[0].fields.z;
    fVar2 = points->m_Items[0].fields.y;
    (__return_storage_ptr__->fields).x = points->m_Items[0].fields.x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar5;
    return __return_storage_ptr__;
  }
label_181da1457:
  ThrowIndexOutOfRangeException();
}


// Interpolate$$NewCatmullRom
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom (UnityEngine_Transform_array* nodes, int32_t slices, bool loop, const MethodInfo* method);
// 0x181da2770

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom(UnityEngine_Transform_array *nodes,int32_t slices,bool loop,MethodInfo *method)

{
  Interpolate_ToVector3_T__o *toVector3;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewCatmullRom_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_TransformDotPosition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Transform);
    Il2CppMethodInitialized_1843448d1 = '\x01';
  }
  toVector3 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Transform);
  System_Func_object__ValueTuple_bool__Vector2_____ctor
            ((System_Func_T__TResult__o *)toVector3,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Interpolate_TransformDotPosition,(MethodInfo_E41220 *)0x0);
  pSVar1 = Interpolate__NewCatmullRom_Vector3_
                     ((System_Collections_IList_o *)nodes,toVector3,slices,loop,
                      (MethodInfo_713240 *)MethodInfo_Interpolate_NewCatmullRom_Transform);
  return pSVar1;
}


// Interpolate$$NewCatmullRom
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom (UnityEngine_Vector3_array* points, int32_t slices, bool loop, const MethodInfo* method);
// 0x181da26e0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom_1da26e0
          (UnityEngine_Vector3_array *points,int32_t slices,bool loop,MethodInfo *method)

{
  Interpolate_ToVector3_T__o *toVector3;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_Identity);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewCatmullRom_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Vector3);
    Il2CppMethodInitialized_1843448d2 = '\x01';
  }
  toVector3 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Vector3);
  Interpolate_ToVector3_Vector3____ctor
            ((System_Func_T__TResult__o *)toVector3,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Interpolate_Identity,(MethodInfo_E41310 *)0x0);
  pSVar1 = Interpolate__NewCatmullRom_Vector3_
                     ((System_Collections_IList_o *)points,toVector3,slices,loop,
                      (MethodInfo_713240 *)MethodInfo_Interpolate_NewCatmullRom_Vector3);
  return pSVar1;
}


// Interpolate$$NewCatmullRom<object>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom_object_ (System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, const MethodInfo_713240* method);
// 0x180713240

System_Collections_Generic_IEnumerable_Vector3__o*
Interpolate__NewCatmullRom_object_(System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, MethodInfo_713240* method)

{
  Il2CppClass *klass;
  System_Xml_Linq_XElement__GetAttributes_d__116_o *__this;
  
  if (method->rgctx_data == (MethodInfo_713240_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  klass = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this = (System_Xml_Linq_XElement__GetAttributes_d__116_o *)il2cpp_codegen_object_new(klass);
  System_Xml_Linq_XElement__GetAttributes_d__116___ctor
            (__this,-2,method->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor);
  if (__this != (System_Xml_Linq_XElement__GetAttributes_d__116_o *)0x0) {
    (__this->fields).name = (System_Xml_Linq_XName_o *)nodes;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,nodes);
    (__this->fields)._a_5__2 = (System_Xml_Linq_XAttribute_o *)toVector3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._a_5__2,toVector3);
    *(int32_t *)&(*(uint64_t *)((char *)__this + 0x50)) = slices;
    *(bool *)((longlong)&(*(uint64_t *)((char *)__this + 0x48)) + 1) = loop;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  ThrowNullReferenceException();
}


// Interpolate$$NewCatmullRom<Vector3>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom_Vector3_ (System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, const MethodInfo_713240* method);
// 0x180713240

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom_Vector3_
          (System_Collections_IList_o *nodes,Interpolate_ToVector3_T__o *toVector3,int32_t slices,bool loop,
          MethodInfo_713240 *method)

{
  Il2CppClass *klass;
  System_Xml_Linq_XElement__GetAttributes_d__116_o *__this;
  
  if (method->rgctx_data == (MethodInfo_713240_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  klass = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this = (System_Xml_Linq_XElement__GetAttributes_d__116_o *)il2cpp_codegen_object_new(klass);
  System_Xml_Linq_XElement__GetAttributes_d__116___ctor
            (__this,-2,method->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor);
  if (__this != (System_Xml_Linq_XElement__GetAttributes_d__116_o *)0x0) {
    (__this->fields).name = (System_Xml_Linq_XName_o *)nodes;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name,nodes);
    (__this->fields)._a_5__2 = (System_Xml_Linq_XAttribute_o *)toVector3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._a_5__2,toVector3);
    *(int32_t *)&(*(uint64_t *)((char *)__this + 0x50)) = slices;
    *(bool *)((longlong)&(*(uint64_t *)((char *)__this + 0x48)) + 1) = loop;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
  }
  ThrowNullReferenceException();
}


// Interpolate$$NewCatmullRom<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom___Il2CppFullySharedGenericType_ (System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, const MethodInfo_713190* method);
// 0x180713190

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom___Il2CppFullySharedGenericType_
          (System_Collections_IList_o *nodes,Interpolate_ToVector3_T__o *toVector3,int32_t slices,bool loop,
          MethodInfo_713190 *method)

{
  MethodInfo *pMVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_713190_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  klass = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar2 = il2cpp_codegen_object_new(klass);
  pMVar1 = method->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor;
  (*pMVar1->methodPointer)(pIVar2,0xfffffffe,pMVar1);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[3].klass = (Il2CppClass *)nodes;
    Il2CppCodeGenWriteBarrier(&pIVar2[3].klass,nodes);
    pIVar2[4].klass = (Il2CppClass *)toVector3;
    Il2CppCodeGenWriteBarrier(&pIVar2[4].klass,toVector3);
    *(int32_t *)&pIVar2[5].klass = slices;
    *(bool *)((longlong)&pIVar2[4].monitor + 1) = loop;
    return (System_Collections_Generic_IEnumerable_Vector3__o *)pIVar2;
  }
  ThrowNullReferenceException();
}


// Interpolate$$CatmullRom
// il2cpp: UnityEngine_Vector3_o Interpolate__CatmullRom (UnityEngine_Vector3_o previous, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Vector3_o next, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1460

UnityEngine_Vector3_o *
Interpolate__CatmullRom
          (UnityEngine_Vector3_o *__return_storage_ptr__,UnityEngine_Vector3_o *previous,
          UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,UnityEngine_Vector3_o *next,
          float elapsedTime,float duration,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar9 = elapsedTime / duration;
  fVar10 = fVar9 * fVar9;
  fVar13 = fVar10 * fVar9;
  fVar12 = (fVar13 * -0.5 + fVar10) - fVar9 * 0.5;
  fVar11 = fVar13 * 1.5 + fVar10 * -2.5 + 1.0;
  fVar14 = fVar13 * 0.5 - fVar10 * 0.5;
  fVar9 = fVar10 + fVar10 + fVar13 * -1.5 + fVar9 * 0.5;
  uVar1 = (end->fields).y;
  uVar5 = (end->fields).z;
  uVar2 = (next->fields).y;
  uVar6 = (next->fields).z;
  uVar3 = (start->fields).y;
  uVar7 = (start->fields).z;
  (__return_storage_ptr__->fields).x =
       fVar14 * (next->fields).x +
       fVar9 * (end->fields).x + fVar11 * (start->fields).x + fVar12 * (previous->fields).x;
  uVar4 = (previous->fields).y;
  uVar8 = (previous->fields).z;
  (__return_storage_ptr__->fields).y =
       (float)uVar2 * fVar14 + (float)uVar1 * fVar9 + (float)uVar3 * fVar11 + (float)uVar4 * fVar12;
  (__return_storage_ptr__->fields).z =
       (float)uVar6 * fVar14 + (float)uVar5 * fVar9 + (float)uVar7 * fVar11 + (float)uVar8 * fVar12;
  return __return_storage_ptr__;
}


// Interpolate$$Linear
// il2cpp: float Interpolate__Linear (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da22e0

float Interpolate__Linear(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  return (fVar1 / duration) * distance + start;
}


// Interpolate$$EaseInQuad
// il2cpp: float Interpolate__EaseInQuad (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1ad0

float Interpolate__EaseInQuad(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  if (duration < elapsedTime) {
    return distance * 1.0 * 1.0 + start;
  }
  return (elapsedTime / duration) * distance * (elapsedTime / duration) + start;
}


// Interpolate$$EaseOutQuad
// il2cpp: float Interpolate__EaseOutQuad (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1cf0

float Interpolate__EaseOutQuad(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  return -distance * fVar1 * (fVar1 - 2.0) + start;
}


// Interpolate$$EaseInOutQuad
// il2cpp: float Interpolate__EaseInOutQuad (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1890

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
  return (((fVar1 - 1.0) - 2.0) * (fVar1 - 1.0) - 1.0) * -distance * 0.5 + start;
}


// Interpolate$$EaseInCubic
// il2cpp: float Interpolate__EaseInCubic (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1610

float Interpolate__EaseInCubic(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (duration < elapsedTime) {
    return distance * 1.0 * 1.0 * 1.0 + start;
  }
  fVar1 = elapsedTime / duration;
  return fVar1 * distance * fVar1 * fVar1 + start;
}


// Interpolate$$EaseOutCubic
// il2cpp: float Interpolate__EaseOutCubic (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1c50

float Interpolate__EaseOutCubic
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  fVar1 = fVar1 - 1.0;
  return (fVar1 * fVar1 * fVar1 + 1.0) * distance + start;
}


// Interpolate$$EaseInOutCubic
// il2cpp: float Interpolate__EaseInOutCubic (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1780

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
  fVar1 = fVar1 - 2.0;
  return (fVar1 * fVar1 * fVar1 + 2.0) * distance * 0.5 + start;
}


// Interpolate$$EaseInQuart
// il2cpp: float Interpolate__EaseInQuart (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1b10

float Interpolate__EaseInQuart(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  return fVar1 * distance * fVar1 * fVar1 * fVar1 + start;
}


// Interpolate$$EaseOutQuart
// il2cpp: float Interpolate__EaseOutQuart (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1d30

float Interpolate__EaseOutQuart
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  fVar1 = fVar1 - 1.0;
  return (fVar1 * fVar1 * fVar1 * fVar1 - 1.0) * -distance + start;
}


// Interpolate$$EaseInOutQuart
// il2cpp: float Interpolate__EaseInOutQuart (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1930

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
  fVar1 = fVar1 - 2.0;
  return (fVar1 * fVar1 * fVar1 * fVar1 - 2.0) * -distance * 0.5 + start;
}


// Interpolate$$EaseInQuint
// il2cpp: float Interpolate__EaseInQuint (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1b40

float Interpolate__EaseInQuint(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  return fVar1 * distance * fVar1 * fVar1 * fVar1 * fVar1 + start;
}


// Interpolate$$EaseOutQuint
// il2cpp: float Interpolate__EaseOutQuint (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1d70

float Interpolate__EaseOutQuint
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  fVar1 = fVar1 - 1.0;
  return (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 1.0) * distance + start;
}


// Interpolate$$EaseInOutQuint
// il2cpp: float Interpolate__EaseInOutQuint (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da19d0

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
  fVar1 = fVar1 - 2.0;
  return (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 2.0) * distance * 0.5 + start;
}


// Interpolate$$EaseInSine
// il2cpp: float Interpolate__EaseInSine (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1b80

float Interpolate__EaseInSine(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = (float)il2cpp_runtime_helper_1804f54c0((fVar1 / duration) * 1.5707964);
  return fVar1 * -distance + distance + start;
}


// Interpolate$$EaseOutSine
// il2cpp: float Interpolate__EaseOutSine (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1db0

float Interpolate__EaseOutSine(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = (float)il2cpp_runtime_helper_1804f5fc0((fVar1 / duration) * 1.5707964);
  return fVar1 * distance + start;
}


// Interpolate$$EaseInOutSine
// il2cpp: float Interpolate__EaseInOutSine (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1a70

float Interpolate__EaseInOutSine
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = (float)il2cpp_runtime_helper_1804f54c0((fVar1 * 3.1415927) / duration);
  return (fVar1 - 1.0) * -distance * 0.5 + start;
}


// Interpolate$$EaseInExpo
// il2cpp: float Interpolate__EaseInExpo (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1650

float Interpolate__EaseInExpo(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = (float)il2cpp_runtime_helper_1804f6b50(0x40000000,(fVar1 / duration - 1.0) * 10.0);
  return fVar1 * distance + start;
}


// Interpolate$$EaseOutExpo
// il2cpp: float Interpolate__EaseOutExpo (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1c90

float Interpolate__EaseOutExpo(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = (float)il2cpp_runtime_helper_1804f6b50(0x40000000,(fVar1 * -10.0) / duration);
  return (-fVar1 + 1.0) * distance + start;
}


// Interpolate$$EaseInOutExpo
// il2cpp: float Interpolate__EaseInOutExpo (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da17f0

float Interpolate__EaseInOutExpo
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / (duration * 0.5);
  }
  else {
    fVar1 = 2.0;
  }
  if (fVar1 < 1.0) {
    fVar1 = (float)il2cpp_runtime_helper_1804f6b50(0x40000000,(fVar1 - 1.0) * 10.0);
  }
  else {
    fVar1 = (float)il2cpp_runtime_helper_1804f6b50(0x40000000,(fVar1 - 1.0) * -10.0);
    fVar1 = -fVar1 + 2.0;
  }
  return fVar1 * distance * 0.5 + start;
}


// Interpolate$$EaseInCirc
// il2cpp: float Interpolate__EaseInCirc (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1590

float Interpolate__EaseInCirc(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  fVar1 = 1.0 - fVar1 * fVar1;
  if (fVar1 < 0.0) {
    fVar1 = (float)il2cpp_runtime_helper_1804fa7a0(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  return (fVar1 - 1.0) * -distance + start;
}


// Interpolate$$EaseOutCirc
// il2cpp: float Interpolate__EaseOutCirc (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da1be0

float Interpolate__EaseOutCirc(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / duration;
  }
  else {
    fVar1 = 1.0;
  }
  fVar1 = 1.0 - (fVar1 - 1.0) * (fVar1 - 1.0);
  if (fVar1 < 0.0) {
    fVar1 = (float)il2cpp_runtime_helper_1804fa7a0(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  return fVar1 * distance + start;
}


// Interpolate$$EaseInOutCirc
// il2cpp: float Interpolate__EaseInOutCirc (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x181da16b0

float Interpolate__EaseInOutCirc
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime / (duration * 0.5);
    if (fVar1 < 1.0) {
      fVar1 = 1.0 - fVar1 * fVar1;
      if (fVar1 < 0.0) {
        fVar1 = (float)il2cpp_runtime_helper_1804fa7a0(fVar1);
      }
      else {
        fVar1 = SQRT(fVar1);
      }
      distance = -distance;
      fVar1 = fVar1 - 1.0;
      goto label_181da1757;
    }
  }
  else {
    fVar1 = 2.0;
  }
  fVar1 = 1.0 - (fVar1 - 2.0) * (fVar1 - 2.0);
  if (fVar1 < 0.0) {
    fVar1 = (float)il2cpp_runtime_helper_1804fa7a0(fVar1);
    fVar1 = fVar1 + 1.0;
  }
  else {
    fVar1 = SQRT(fVar1) + 1.0;
  }
label_181da1757:
  return fVar1 * distance * 0.5 + start;
}


// Interpolate$$.ctor
// il2cpp: void Interpolate___ctor (Interpolate_o* __this, const MethodInfo* method);
// 0x18054c890

void
Interpolate___ctor(Interpolate_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


