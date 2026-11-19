// Type: Interpolate
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Interpolate.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Interpolate.cs
// --------------------------------

// Interpolate.ToVector3<object>$$.ctor
// il2cpp: void Interpolate_ToVector3_object____ctor (Interpolate_ToVector3_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_4266310* method);
// 0x4366310

void Interpolate_ToVector3_object____ctor
               (Interpolate_ToVector3_T__o *__this,Il2CppObject *object,intptr_t method,
               MethodInfo_4266310 *methodInfo)

{
  char cVar1;
  char cVar2;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target);
  cVar2 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar1 = il2cpp_runtime_helper_030d61c0();
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if ((__this->fields).method_is_virtual == false) {
        (__this->fields).invoke_impl = (intptr_t)&label_02bad490;
      }
      else {
        cVar2 = il2cpp_runtime_helper_03143050(method);
        cVar1 = il2cpp_runtime_helper_030d68e0(method);
        if (cVar2 == '\0') {
          if (cVar1 == '\0') {
            (__this->fields).invoke_impl = (intptr_t)&label_02bad4c0;
          }
          else {
            (__this->fields).invoke_impl = (intptr_t)&label_02bad4f0;
          }
        }
        else if (cVar1 == '\0') {
          (__this->fields).invoke_impl = (intptr_t)&label_02bad580;
        }
        else {
          (__this->fields).invoke_impl = (intptr_t)&label_02bad5c0;
        }
      }
      goto label_0436637e;
    }
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar2 == '\x01') {
    (__this->fields).invoke_impl = (intptr_t)&label_02bad4b0;
    goto label_0436637e;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_0436637e:
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02bad440;
  return;
}


// Interpolate.ToVector3<Vector3>$$.ctor
// il2cpp: void Interpolate_ToVector3_Vector3____ctor (Interpolate_ToVector3_Vector3__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_4266490* method);
// 0x4366490

void Interpolate_ToVector3_Vector3____ctor
               (Interpolate_ToVector3_Vector3__o *__this,Il2CppObject *object,intptr_t method,
               MethodInfo_4266490 *methodInfo)

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
    (__this->fields).invoke_impl = (intptr_t)&label_02bad6d0;
    goto label_043664f6;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_043664f6:
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02bad660;
  return;
}


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Interpolate_ToVector3___Il2CppFullySharedGenericType____ctor (Interpolate_ToVector3_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_4266600* method);
// 0x4366600

void Interpolate_ToVector3___Il2CppFullySharedGenericType____ctor
               (Interpolate_ToVector3_T__o *__this,Il2CppObject *object,intptr_t method,
               MethodInfo_4266600 *methodInfo)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target);
  cVar2 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar1 = il2cpp_runtime_helper_030d61c0();
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if ((__this->fields).method_is_virtual == false) {
        pcVar3 = il2cpp_runtime_helper_02bad7e0;
      }
      else {
        cVar2 = il2cpp_runtime_helper_03143050(method);
        cVar1 = il2cpp_runtime_helper_030d68e0(method);
        if (cVar2 == '\0') {
          if (cVar1 == '\0') {
            pcVar3 = il2cpp_runtime_helper_02bad820;
          }
          else {
            pcVar3 = (code *)&label_02bad870;
          }
        }
        else if (cVar1 == '\0') {
          pcVar3 = (code *)&g_data_02bad910;
        }
        else {
          pcVar3 = il2cpp_runtime_helper_02bad960;
        }
      }
    }
    else {
      if (object == (Il2CppObject *)0x0) {
        ex = il2cpp_codegen_get_argument_exception
                       ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
        il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
      }
      pcVar3 = il2cpp_runtime_helper_02bad7a0;
    }
  }
  else if (cVar2 == '\x01') {
    pcVar3 = il2cpp_runtime_helper_02bad730;
  }
  else {
    pcVar3 = il2cpp_runtime_helper_02bad760;
  }
  (__this->fields).invoke_impl = (intptr_t)pcVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02bad6e0;
  return;
}


// Interpolate.ToVector3<object>$$Invoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_object___Invoke (Interpolate_ToVector3_T__o* __this, Il2CppObject* v, const MethodInfo_4266420* method);
// 0x4366420

UnityEngine_Vector3_o
Interpolate_ToVector3_object___Invoke
          (Interpolate_ToVector3_T__o *__this,Il2CppObject *v,MethodInfo_4266420 *method)

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
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_Vector3___Invoke (Interpolate_ToVector3_Vector3__o* __this, UnityEngine_Vector3_o v, const MethodInfo_4266530* method);
// 0x4366530

UnityEngine_Vector3_o
Interpolate_ToVector3_Vector3___Invoke
          (Interpolate_ToVector3_Vector3__o *__this,UnityEngine_Vector3_o v,MethodInfo_4266530 *method)

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
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3___Il2CppFullySharedGenericType___Invoke (Interpolate_ToVector3_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v, const MethodInfo_42666F0* method);
// 0x43666f0

UnityEngine_Vector3_o
Interpolate_ToVector3___Il2CppFullySharedGenericType___Invoke
          (Interpolate_ToVector3_T__o *__this,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v,
          MethodInfo_42666F0 *method)

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
// il2cpp: System_IAsyncResult_o* Interpolate_ToVector3_object___BeginInvoke (Interpolate_ToVector3_T__o* __this, Il2CppObject* v, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_4266440* method);
// 0x4366440

System_IAsyncResult_o *
Interpolate_ToVector3_object___BeginInvoke
          (Interpolate_ToVector3_T__o *__this,Il2CppObject *v,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo_4266440 *method)

{
  System_IAsyncResult_o *pSVar1;
  Il2CppObject *pIStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  pIStack_18 = v;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&pIStack_18);
  return pSVar1;
}


// Interpolate.ToVector3<Vector3>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_ToVector3_Vector3___BeginInvoke (Interpolate_ToVector3_Vector3__o* __this, UnityEngine_Vector3_o v, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_4266550* method);
// 0x4366550

System_IAsyncResult_o *
Interpolate_ToVector3_Vector3___BeginInvoke
          (Interpolate_ToVector3_Vector3__o *__this,UnityEngine_Vector3_o v,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo_4266550 *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_38;
  float local_30;
  Il2CppObject *local_28;
  undefined8 uStack_20;
  
  local_30 = v.fields.z;
  local_38 = v.fields._0_8_;
  if (Il2CppMethodInitialized_07540325 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07540325 = '\x01';
  }
  local_28 = (Il2CppObject *)0x0;
  uStack_20 = 0;
  local_28 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_38);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&local_28,callback,object);
  return pSVar1;
}


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Interpolate_ToVector3___Il2CppFullySharedGenericType___BeginInvoke (Interpolate_ToVector3_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_4266710* method);
// 0x4366710

System_IAsyncResult_o *
Interpolate_ToVector3___Il2CppFullySharedGenericType___BeginInvoke
          (Interpolate_ToVector3_T__o *__this,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v,
          System_AsyncCallback_o *callback,Il2CppObject *object,MethodInfo_4266710 *method)

{
  Il2CppClass *klass;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *data;
  System_IAsyncResult_o *pSVar1;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_38;
  undefined8 uStack_30;
  
  data = v.klass;
  local_38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
  uStack_30 = 0;
  klass = il2cpp_vm_Class_FromIl2CppType((Il2CppType *)**(undefined8 **)((__this->fields).method + 0x30));
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if ((int)(klass->_1).byval_arg.bits < 0) {
    data = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)il2cpp_vm_Object_Box(klass,data);
  }
  local_38 = data;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&local_38,v.monitor,callback);
  return pSVar1;
}


// Interpolate.ToVector3<object>$$EndInvoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_object___EndInvoke (Interpolate_ToVector3_T__o* __this, System_IAsyncResult_o* result, const MethodInfo_4266460* method);
// 0x4366460

UnityEngine_Vector3_o
Interpolate_ToVector3_object___EndInvoke
          (Interpolate_ToVector3_T__o *__this,System_IAsyncResult_o *result,MethodInfo_4266460 *method)

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


// Interpolate.ToVector3<Vector3>$$EndInvoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3_Vector3___EndInvoke (Interpolate_ToVector3_Vector3__o* __this, System_IAsyncResult_o* result, const MethodInfo_42665D0* method);
// 0x43665d0

UnityEngine_Vector3_o
Interpolate_ToVector3_Vector3___EndInvoke
          (Interpolate_ToVector3_Vector3__o *__this,System_IAsyncResult_o *result,MethodInfo_42665D0 *method)

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


// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$EndInvoke
// il2cpp: UnityEngine_Vector3_o Interpolate_ToVector3___Il2CppFullySharedGenericType___EndInvoke (Interpolate_ToVector3_T__o* __this, System_IAsyncResult_o* result, const MethodInfo_4266790* method);
// 0x4366790

UnityEngine_Vector3_o
Interpolate_ToVector3___Il2CppFullySharedGenericType___EndInvoke
          (Interpolate_ToVector3_T__o *__this,System_IAsyncResult_o *result,MethodInfo_4266790 *method)

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


// Interpolate.Function$$.ctor
// il2cpp: void Interpolate_Function___ctor (Interpolate_Function_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x5849e70

void Interpolate_Function___ctor
               (Interpolate_Function_o *__this,Il2CppObject *object,intptr_t method,MethodInfo *methodInfo)

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
  else if (cVar1 == '\x04') {
    (__this->fields).invoke_impl = (intptr_t)&label_02fce3a0;
    goto label_05849ed6;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_05849ed6:
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02fce310;
  return;
}


// Interpolate.Function$$Invoke
// il2cpp: float Interpolate_Function__Invoke (Interpolate_Function_o* __this, float a, float b, float c, float d, const MethodInfo* method);
// 0x584ae30

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
// 0x584ae50

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
  Il2CppObject *local_48;
  Il2CppObject *local_40;
  Il2CppObject *local_38;
  Il2CppObject *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_58 = d;
  local_54 = c;
  local_50 = b;
  local_4c = a;
  local_48 = il2cpp_vm_Object_Box(g_data_07556740,&local_4c);
  local_40 = il2cpp_vm_Object_Box(g_data_07556740,&local_50);
  local_38 = il2cpp_vm_Object_Box(g_data_07556740,&local_54);
  local_30 = il2cpp_vm_Object_Box(g_data_07556740,&local_58);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&local_48,callback,object);
  return pSVar1;
}


// Interpolate.Function$$EndInvoke
// il2cpp: float Interpolate_Function__EndInvoke (Interpolate_Function_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x584af00

float Interpolate_Function__EndInvoke
                (Interpolate_Function_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  Il2CppObject *obj;
  float *pfVar1;
  
  obj = (Il2CppObject *)il2cpp_runtime_helper_03159300(result,0);
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pfVar1 = il2cpp_vm_Object_Unbox(obj);
  return *pfVar1;
}


// Interpolate.<NewBezier>d__16<object>$$.ctor
// il2cpp: void Interpolate__NewBezier_d__16_object____ctor (Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, const MethodInfo_465C8C0* method);
// 0x475c8c0

void Interpolate__NewBezier_d__16_object____ctor
               (Interpolate__NewBezier_d__16_T__o *__this,int32_t __1__state,MethodInfo_465C8C0 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$.ctor
// il2cpp: void Interpolate__NewBezier_d__16_Vector3____ctor (Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, const MethodInfo_465D2B0* method);
// 0x475d2b0

void Interpolate__NewBezier_d__16_Vector3____ctor
               (Interpolate__NewBezier_d__16_T__o *__this,int32_t __1__state,MethodInfo_465D2B0 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType____ctor (Interpolate__NewBezier_d__16_T__o* __this, int32_t __1__state, const MethodInfo_465DCC0* method);
// 0x475dcc0

void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType____ctor
               (Interpolate__NewBezier_d__16_T__o *__this,int32_t __1__state,MethodInfo_465DCC0 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewBezier>d__16<object>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewBezier_d__16_object___System_IDisposable_Dispose (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465C8F0* method);
// 0x475c8f0

void Interpolate__NewBezier_d__16_object___System_IDisposable_Dispose
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465C8F0 *method)

{
  int iVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_0754106d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_0754106d = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (Il2CppObject *)(__this->fields).__7__wrap2;
    if (obj != (Il2CppObject *)0x0) {
      pIVar2 = obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_0475c98f;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0475c98f:
      (*pVVar4->methodPtr)(obj,pVVar4->method);
      return;
    }
  }
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewBezier_d__16_Vector3___System_IDisposable_Dispose (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465D2E0* method);
// 0x475d2e0

void Interpolate__NewBezier_d__16_Vector3___System_IDisposable_Dispose
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465D2E0 *method)

{
  int iVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_07541070 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07541070 = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (Il2CppObject *)(__this->fields).__7__wrap2;
    if (obj != (Il2CppObject *)0x0) {
      pIVar2 = obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_0475d37f;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0475d37f:
      (*pVVar4->methodPtr)(obj,pVVar4->method);
      return;
    }
  }
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_IDisposable_Dispose (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465DCF0* method);
// 0x475dcf0

void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_IDisposable_Dispose
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465DCF0 *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    (*method->klass->rgctx_data->_1_Interpolate__NewBezier_d__16_T____m__Finally1->methodPointer)();
    return;
  }
  return;
}


// Interpolate.<NewBezier>d__16<object>$$MoveNext
// il2cpp: bool Interpolate__NewBezier_d__16_object___MoveNext (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465C9A0* method);
// 0x475c9a0
// eh: try 0x475ca8f..0x475cff8 -> pad 0x475d00c (+23 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x475d038..0x475d03d -> pad 0x475d058 cleanup
// eh: try 0x475d05b..0x475d065 -> pad 0x475d06d catch (...) [compiler noexcept guard]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x475ca7f: nop 
// asm:   0x475cac6: xor ebx, ebx
// asm:   0x475cac8: jmp 0x475cfaf
// asm:   0x475caff: nop 
// asm:   0x475cb9f: nop 
// asm:   0x475cc2e: nop 
// asm:   0x475cd8f: nop 
// asm:   0x475ce4c: nop dword ptr [rax]
// asm:   0x475cfd4: mov rdi, r15
// asm:   0x475cfd7: mov rsi, rbx
// asm:   0x475cfda: call 0x30d6890  ; il2cpp_codegen_raise_invalid_cast_exception()
// asm:   0x475cff8: jmp 0x475d020
// asm:   0x475cffa: jmp 0x475d020
// asm:   0x475cffc: jmp 0x475d020
// asm:   0x475cffe: jmp 0x475d020
// asm:   0x475d000: jmp 0x475d020
// asm:   0x475d002: jmp 0x475d020
// asm:   0x475d004: jmp 0x475d020
// asm:   0x475d006: jmp 0x475d020
// asm:   0x475d008: jmp 0x475d020
// asm:   0x475d00a: jmp 0x475d020
// asm:   0x475d00c: jmp 0x475d020
// asm:   0x475d00e: jmp 0x475d020
// asm:   0x475d010: jmp 0x475d020
// asm:   0x475d012: jmp 0x475d020
// asm:   0x475d014: jmp 0x475d020
// asm:   0x475d016: jmp 0x475d020
// asm:   0x475d018: jmp 0x475d020
// asm:   0x475d01a: jmp 0x475d020
// asm:   0x475d01c: jmp 0x475d020
// asm:   0x475d01e: jmp 0x475d020
// asm:   0x475d020: mov rbx, rax
// asm:   0x475d023: cmp edx, 1
// asm:   0x475d026: jne 0x475d05b
// asm:   0x475d028: mov rdi, rbx
// asm:   0x475d02b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x475d030: mov rbx, qword ptr [rax]
// asm:   0x475d033: mov qword ptr [rsp + 0x20], rbx
// asm:   0x475d038: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x475d03d: test rbx, rbx
// asm:   0x475d040: je 0x475cac6
// asm:   0x475d046: mov rdi, qword ptr [rsp + 8]
// asm:   0x475d04b: call 0x2c166d0  ; il2cpp_runtime_helper_02c166d0()
// asm:   0x475d050: mov rdi, rbx
// asm:   0x475d053: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x475d058: mov rbx, rax
// asm:   0x475d05b: lea rdi, [rsp + 0x20]
// asm:   0x475d060: call 0x2c16230  ; il2cpp_runtime_helper_02c16230()
// asm:   0x475d065: mov rdi, rbx
// asm:   0x475d068: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x475d06d: mov rdi, rax
// asm:   0x475d070: call 0x2ab61e0  ; __clang_call_terminate()

bool Interpolate__NewBezier_d__16_object___MoveNext
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465C9A0 *method)

{
  int iVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Interpolate_ToVector3_T__o *pIVar3;
  Interpolate__NewBezier_d__16_T__o *pIVar4;
  bool bVar5;
  int32_t iVar6;
  uint32_t length;
  VirtualInvokeData *pVVar7;
  UnityEngine_Vector3_array *pUVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *pIVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  float in_XMM1_Da;
  UnityEngine_Vector3_Fields UVar16;
  Interpolate__NewBezier_d__16_T__o *pIStack_60;
  float fStack_54;
  MethodInfo_465C9A0 *pMStack_50;
  undefined8 uStack_48;
  Interpolate__NewBezier_d__16_T__o **ppIStack_40;
  MethodInfo_465C9A0 **ppMStack_38;
  
  pIStack_60 = __this;
  pMStack_50 = method;
  if (Il2CppMethodInitialized_0754106c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_0754106c = '\x01';
  }
  uStack_48 = 0;
  ppIStack_40 = &pIStack_60;
  ppMStack_38 = &pMStack_50;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pIVar9 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_ICollection_c **)((long)&pIVar2->interfaceType + lVar13) ==
            TypeInfo_System_Collections_ICollection) {
          pVVar7 = pIVar10->vtable + (*(int *)((long)&pIVar2->offset + lVar13) + 1);
          goto label_0475cab8;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475cab8:
    iVar6 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
    if (iVar6 < 2) {
      return false;
    }
    pIVar9 = (Il2CppObject *)(pIStack_60->fields).nodes;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_ICollection_c **)((long)&pIVar2->interfaceType + lVar13) ==
            TypeInfo_System_Collections_ICollection) {
          pVVar7 = pIVar10->vtable + (*(int *)((long)&pIVar2->offset + lVar13) + 1);
          goto label_0475cb38;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475cb38:
    length = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
    pUVar8 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,length);
    (pIStack_60->fields)._points_5__2 = pUVar8;
    Il2CppCodeGenWriteBarrier(&(pIStack_60->fields)._points_5__2);
    pIVar9 = (Il2CppObject *)(pIStack_60->fields).steps;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_float__c **)((long)&pIVar2->interfaceType + lVar13) ==
            TypeInfo_System_Collections_Generic_IEnumerable_float) {
          pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
          goto label_0475cbd1;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_float,0);
label_0475cbd1:
    pIVar9 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
    (pIStack_60->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)pIVar9;
    Il2CppCodeGenWriteBarrier(&(pIStack_60->fields).__7__wrap2);
    __this = pIStack_60;
  }
  (__this->fields).__1__state = -3;
  pIVar9 = (Il2CppObject *)(__this->fields).__7__wrap2;
  if (pIVar9 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar10 = pIVar9->klass;
  uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
  if (uVar14 != 0) {
    pIVar2 = (pIVar10->_1).interfaceOffsets;
    lVar13 = 0;
    do {
      if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar13) ==
          TypeInfo_System_Collections_IEnumerator) {
        pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
        goto label_0475cc61;
      }
      lVar13 = lVar13 + 0x10;
    } while (uVar14 * 0x10 != lVar13);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0475cc61:
  bVar5 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
  pIVar4 = pIStack_60;
  if (bVar5) {
    pIVar9 = (Il2CppObject *)(pIStack_60->fields).__7__wrap2;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_float__c **)((long)&pIVar2->interfaceType + lVar13) ==
            TypeInfo_System_Collections_Generic_IEnumerator_float) {
          pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
          goto label_0475cd64;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_float,0);
label_0475cd64:
    fStack_54 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
    pIVar9 = (Il2CppObject *)(pIStack_60->fields).nodes;
    if (pIVar9 != (Il2CppObject *)0x0) {
      uVar14 = 0;
      do {
        pIVar10 = pIVar9->klass;
        uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar2 = (pIVar10->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_ICollection_c **)((long)&pIVar2->interfaceType + lVar13) ==
                TypeInfo_System_Collections_ICollection) {
              pVVar7 = pIVar10->vtable + (*(int *)((long)&pIVar2->offset + lVar13) + 1);
              goto label_0475cdf7;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475cdf7:
        iVar6 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
        if ((long)iVar6 <= (long)uVar14) {
          UVar16 = (UnityEngine_Vector3_Fields)
                   Interpolate__Bezier((pIStack_60->fields).ease,(pIStack_60->fields)._points_5__2,fStack_54,
                                       (pIStack_60->fields).maxStep,(MethodInfo *)0x0);
          (pIStack_60->fields).__2__current.fields = UVar16;
          (pIStack_60->fields).__1__state = 1;
          return true;
        }
        pIVar9 = (Il2CppObject *)(pIStack_60->fields).nodes;
        if (pIVar9 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar8 = (pIStack_60->fields)._points_5__2;
        pIVar3 = (pIStack_60->fields).toVector3;
        pIVar10 = pIVar9->klass;
        uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar2 = (pIVar10->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_IList_c **)((long)&pIVar2->interfaceType + lVar13) ==
                TypeInfo_System_Collections_IList) {
              pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
              goto label_0475ce83;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_0475ce83:
        pIVar9 = (*pVVar7->methodPtr)(pIVar9,(int32_t)uVar14,pVVar7->method);
        if (pIVar3 == (Interpolate_ToVector3_T__o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar10 = pMStack_50->klass->rgctx_data->_3_T;
        if (((pIVar10->_2).bitflags1 & 1) == 0) {
          pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
        }
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar11 = (Il2CppObject *)0x0;
        }
        else {
          pIVar11 = il2cpp_vm_Object_IsInst(pIVar9,pIVar10);
          if (pIVar11 == (Il2CppObject *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar9,pIVar10);
          }
        }
        uVar15 = (*(code *)(pIVar3->fields).invoke_impl)
                           ((pIVar3->fields).method_code,pIVar11,(pIVar3->fields).method);
        if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((uint)pUVar8->max_length <= uVar14) {
          ThrowIndexOutOfRangeException();
        }
        pUVar8->m_Items[uVar14].fields.x = (float)(int)uVar15;
        pUVar8->m_Items[uVar14].fields.y = (float)(int)((ulong)uVar15 >> 0x20);
        pUVar8->m_Items[uVar14].fields.z = in_XMM1_Da;
        uVar14 = uVar14 + 1;
        pIVar9 = (Il2CppObject *)(pIStack_60->fields).nodes;
      } while (pIVar9 != (Il2CppObject *)0x0);
    }
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_0754106d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_0754106d = '\x01';
  }
  (pIVar4->fields).__1__state = -1;
  pIVar9 = (Il2CppObject *)(pIVar4->fields).__7__wrap2;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar13) == TypeInfo_System_IDisposable)
        {
          pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
          goto label_0475cf74;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0475cf74:
    (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
  }
  (pIStack_60->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(pIStack_60->fields).__7__wrap2);
  (pIStack_60->fields)._points_5__2 = (UnityEngine_Vector3_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(pIStack_60->fields)._points_5__2);
  return false;
}


// Interpolate.<NewBezier>d__16<Vector3>$$MoveNext
// il2cpp: bool Interpolate__NewBezier_d__16_Vector3___MoveNext (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465D390* method);
// 0x475d390
// eh: try 0x475d47f..0x475da05 -> pad 0x475da19 (+24 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x475da45..0x475da4a -> pad 0x475da65 cleanup
// eh: try 0x475da68..0x475da72 -> pad 0x475da7a catch (...) [compiler noexcept guard]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x475d46f: nop 
// asm:   0x475d4b6: xor ebx, ebx
// asm:   0x475d4b8: jmp 0x475d9b7
// asm:   0x475d4ef: nop 
// asm:   0x475d58f: nop 
// asm:   0x475d61e: nop 
// asm:   0x475d7af: nop 
// asm:   0x475da05: jmp 0x475da2d
// asm:   0x475da07: jmp 0x475da2d
// asm:   0x475da09: jmp 0x475da2d
// asm:   0x475da0b: jmp 0x475da2d
// asm:   0x475da0d: jmp 0x475da2d
// asm:   0x475da0f: jmp 0x475da2d
// asm:   0x475da11: jmp 0x475da2d
// asm:   0x475da13: jmp 0x475da2d
// asm:   0x475da15: jmp 0x475da2d
// asm:   0x475da17: jmp 0x475da2d
// asm:   0x475da19: jmp 0x475da2d
// asm:   0x475da1b: jmp 0x475da2d
// asm:   0x475da1d: jmp 0x475da2d
// asm:   0x475da1f: jmp 0x475da2d
// asm:   0x475da21: jmp 0x475da2d
// asm:   0x475da23: jmp 0x475da2d
// asm:   0x475da25: jmp 0x475da2d
// asm:   0x475da27: jmp 0x475da2d
// asm:   0x475da29: jmp 0x475da2d
// asm:   0x475da2b: jmp 0x475da2d
// asm:   0x475da2d: mov rbx, rax
// asm:   0x475da30: cmp edx, 1
// asm:   0x475da33: jne 0x475da68
// asm:   0x475da35: mov rdi, rbx
// asm:   0x475da38: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x475da3d: mov rbx, qword ptr [rax]
// asm:   0x475da40: mov qword ptr [rsp + 0x20], rbx
// asm:   0x475da45: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x475da4a: test rbx, rbx
// asm:   0x475da4d: je 0x475d4b6
// asm:   0x475da53: mov rdi, qword ptr [rsp + 8]
// asm:   0x475da58: call 0x2c16780  ; il2cpp_runtime_helper_02c16780()
// asm:   0x475da5d: mov rdi, rbx
// asm:   0x475da60: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x475da65: mov rbx, rax
// asm:   0x475da68: lea rdi, [rsp + 0x20]
// asm:   0x475da6d: call 0x2c16250  ; il2cpp_runtime_helper_02c16250()
// asm:   0x475da72: mov rdi, rbx
// asm:   0x475da75: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x475da7a: mov rdi, rax
// asm:   0x475da7d: call 0x2ab61e0  ; __clang_call_terminate()

bool Interpolate__NewBezier_d__16_Vector3___MoveNext
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465D390 *method)

{
  int iVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Interpolate_ToVector3_T__o *pIVar3;
  Interpolate__NewBezier_d__16_T__o *pIVar4;
  bool bVar5;
  int32_t iVar6;
  uint32_t length;
  VirtualInvokeData *pVVar7;
  UnityEngine_Vector3_array *pUVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  UnityEngine_Vector3_Fields UVar17;
  Interpolate__NewBezier_d__16_T__o *pIStack_60;
  float fStack_54;
  MethodInfo_465D390 *pMStack_50;
  undefined8 uStack_48;
  Interpolate__NewBezier_d__16_T__o **ppIStack_40;
  MethodInfo_465D390 **ppMStack_38;
  
  pIStack_60 = __this;
  pMStack_50 = method;
  if (Il2CppMethodInitialized_0754106f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_0754106f = '\x01';
  }
  uStack_48 = 0;
  ppIStack_40 = &pIStack_60;
  ppMStack_38 = &pMStack_50;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pIVar9 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_ICollection_c **)((long)&pIVar2->interfaceType + lVar13) ==
            TypeInfo_System_Collections_ICollection) {
          pVVar7 = pIVar10->vtable + (*(int *)((long)&pIVar2->offset + lVar13) + 1);
          goto label_0475d4a8;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475d4a8:
    iVar6 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
    if (iVar6 < 2) {
      return false;
    }
    pIVar9 = (Il2CppObject *)(pIStack_60->fields).nodes;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_ICollection_c **)((long)&pIVar2->interfaceType + lVar13) ==
            TypeInfo_System_Collections_ICollection) {
          pVVar7 = pIVar10->vtable + (*(int *)((long)&pIVar2->offset + lVar13) + 1);
          goto label_0475d528;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475d528:
    length = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
    pUVar8 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,length);
    (pIStack_60->fields)._points_5__2 = pUVar8;
    Il2CppCodeGenWriteBarrier(&(pIStack_60->fields)._points_5__2);
    pIVar9 = (Il2CppObject *)(pIStack_60->fields).steps;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_float__c **)((long)&pIVar2->interfaceType + lVar13) ==
            TypeInfo_System_Collections_Generic_IEnumerable_float) {
          pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
          goto label_0475d5c1;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_float,0);
label_0475d5c1:
    pIVar9 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
    (pIStack_60->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)pIVar9;
    Il2CppCodeGenWriteBarrier(&(pIStack_60->fields).__7__wrap2);
    __this = pIStack_60;
  }
  (__this->fields).__1__state = -3;
  pIVar9 = (Il2CppObject *)(__this->fields).__7__wrap2;
  if (pIVar9 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar10 = pIVar9->klass;
  uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
  if (uVar14 != 0) {
    pIVar2 = (pIVar10->_1).interfaceOffsets;
    lVar13 = 0;
    do {
      if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar13) ==
          TypeInfo_System_Collections_IEnumerator) {
        pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
        goto label_0475d651;
      }
      lVar13 = lVar13 + 0x10;
    } while (uVar14 * 0x10 != lVar13);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0475d651:
  bVar5 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
  pIVar4 = pIStack_60;
  if (bVar5) {
    pIVar9 = (Il2CppObject *)(pIStack_60->fields).__7__wrap2;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_float__c **)((long)&pIVar2->interfaceType + lVar13) ==
            TypeInfo_System_Collections_Generic_IEnumerator_float) {
          pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
          goto label_0475d754;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_float,0);
label_0475d754:
    fStack_54 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
    pIVar9 = (Il2CppObject *)(pIStack_60->fields).nodes;
    if (pIVar9 != (Il2CppObject *)0x0) {
      uVar14 = 0;
      do {
        pIVar10 = pIVar9->klass;
        uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar2 = (pIVar10->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_ICollection_c **)((long)&pIVar2->interfaceType + lVar13) ==
                TypeInfo_System_Collections_ICollection) {
              pVVar7 = pIVar10->vtable + (*(int *)((long)&pIVar2->offset + lVar13) + 1);
              goto label_0475d7f7;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475d7f7:
        iVar6 = (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
        if ((long)iVar6 <= (long)uVar14) {
          UVar17 = (UnityEngine_Vector3_Fields)
                   Interpolate__Bezier((pIStack_60->fields).ease,(pIStack_60->fields)._points_5__2,fStack_54,
                                       (pIStack_60->fields).maxStep,(MethodInfo *)0x0);
          (pIStack_60->fields).__2__current.fields = UVar17;
          (pIStack_60->fields).__1__state = 1;
          return true;
        }
        pIVar9 = (Il2CppObject *)(pIStack_60->fields).nodes;
        if (pIVar9 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar8 = (pIStack_60->fields)._points_5__2;
        pIVar3 = (pIStack_60->fields).toVector3;
        pIVar10 = pIVar9->klass;
        uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar2 = (pIVar10->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_IList_c **)((long)&pIVar2->interfaceType + lVar13) ==
                TypeInfo_System_Collections_IList) {
              pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
              goto label_0475d883;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_0475d883:
        pIVar9 = (*pVVar7->methodPtr)(pIVar9,(int32_t)uVar14,pVVar7->method);
        if (pIVar3 == (Interpolate_ToVector3_T__o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar10 = pMStack_50->klass->rgctx_data->_3_T;
        if (((pIVar10->_2).bitflags1 & 1) == 0) {
          pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
        }
        if (pIVar9 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pIVar9->klass->_1).element_class != (pIVar10->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar9,pIVar10);
        }
        puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
        fVar16 = *(float *)(puVar11 + 1);
        uVar15 = (*(code *)(pIVar3->fields).invoke_impl)
                           (*puVar11,(pIVar3->fields).method_code,(pIVar3->fields).method);
        if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((uint)pUVar8->max_length <= uVar14) {
          ThrowIndexOutOfRangeException();
        }
        pUVar8->m_Items[uVar14].fields.x = (float)(int)uVar15;
        pUVar8->m_Items[uVar14].fields.y = (float)(int)((ulong)uVar15 >> 0x20);
        pUVar8->m_Items[uVar14].fields.z = fVar16;
        uVar14 = uVar14 + 1;
        pIVar9 = (Il2CppObject *)(pIStack_60->fields).nodes;
      } while (pIVar9 != (Il2CppObject *)0x0);
    }
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07541070 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07541070 = '\x01';
  }
  (pIVar4->fields).__1__state = -1;
  pIVar9 = (Il2CppObject *)(pIVar4->fields).__7__wrap2;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar10 = pIVar9->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar13) == TypeInfo_System_IDisposable)
        {
          pVVar7 = pIVar10->vtable + *(int *)((long)&pIVar2->offset + lVar13);
          goto label_0475d97c;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar14 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0475d97c:
    (*pVVar7->methodPtr)(pIVar9,pVVar7->method);
  }
  (pIStack_60->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(pIStack_60->fields).__7__wrap2);
  (pIStack_60->fields)._points_5__2 = (UnityEngine_Vector3_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(pIStack_60->fields)._points_5__2);
  return false;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$MoveNext
// il2cpp: bool Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___MoveNext (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465DD20* method);
// 0x475dd20
// eh: try 0x475de3f..0x475e336 -> pad 0x475e34a (+22 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x475e375..0x475e37a -> pad 0x475e3a4 cleanup
// eh: try 0x475e3a7..0x475e3b0 -> pad 0x475e3b8 catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x475de76: xor ebx, ebx
// asm:   0x475de78: jmp 0x475e2f8
// asm:   0x475dead: nop dword ptr [rax]
// asm:   0x475df4d: nop dword ptr [rax]
// asm:   0x475dfdc: nop dword ptr [rax]
// asm:   0x475e0fd: nop dword ptr [rax]
// asm:   0x475e336: jmp 0x475e35e
// asm:   0x475e338: jmp 0x475e35e
// asm:   0x475e33a: jmp 0x475e35e
// asm:   0x475e33c: jmp 0x475e35e
// asm:   0x475e33e: jmp 0x475e35e
// asm:   0x475e340: jmp 0x475e35e
// asm:   0x475e342: jmp 0x475e35e
// asm:   0x475e344: jmp 0x475e35e
// asm:   0x475e346: jmp 0x475e35e
// asm:   0x475e348: jmp 0x475e35e
// asm:   0x475e34a: jmp 0x475e35e
// asm:   0x475e34c: jmp 0x475e35e
// asm:   0x475e34e: jmp 0x475e35e
// asm:   0x475e350: jmp 0x475e35e
// asm:   0x475e352: jmp 0x475e35e
// asm:   0x475e354: jmp 0x475e35e
// asm:   0x475e356: jmp 0x475e35e
// asm:   0x475e358: jmp 0x475e35e
// asm:   0x475e35a: jmp 0x475e35e
// asm:   0x475e35c: jmp 0x475e35e
// asm:   0x475e35e: mov rbx, rax
// asm:   0x475e361: cmp edx, 1
// asm:   0x475e364: jne 0x475e3a7
// asm:   0x475e366: mov rdi, rbx
// asm:   0x475e369: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x475e36e: mov rbx, qword ptr [rax]
// asm:   0x475e371: mov qword ptr [rbp - 0x70], rbx
// asm:   0x475e375: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x475e37a: test rbx, rbx
// asm:   0x475e37d: je 0x475de76
// asm:   0x475e383: mov rax, qword ptr [rbp - 0x38]
// asm:   0x475e387: mov rdi, qword ptr [rbp - 0x30]
// asm:   0x475e38b: mov rax, qword ptr [rax + 0x20]
// asm:   0x475e38f: mov rax, qword ptr [rax + 0xc0]
// asm:   0x475e396: mov rsi, qword ptr [rax + 0x28]
// asm:   0x475e39a: call qword ptr [rsi]
// asm:   0x475e39c: mov rdi, rbx
// asm:   0x475e39f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x475e3a4: mov rbx, rax
// asm:   0x475e3a7: lea rdi, [rbp - 0x70]
// asm:   0x475e3ab: call 0x2c16270  ; il2cpp_runtime_helper_02c16270()
// asm:   0x475e3b0: mov rdi, rbx
// asm:   0x475e3b3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x475e3b8: mov rdi, rax
// asm:   0x475e3bb: call 0x2ab61e0  ; __clang_call_terminate()

bool Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___MoveNext
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465DD20 *method)

{
  float duration;
  int iVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  Interpolate_ToVector3_T__o *pIVar5;
  Interpolate__NewBezier_d__16_T__RGCTXs *pIVar6;
  InvokerMethod pIVar7;
  Interpolate_Function_o *ease;
  Interpolate__NewBezier_d__16_T__Fields *pIVar8;
  float elapsedTime;
  Interpolate__NewBezier_d__16_T__o *pIVar9;
  bool bVar10;
  int32_t iVar11;
  uint32_t length;
  VirtualInvokeData *pVVar12;
  UnityEngine_Vector3_array *pUVar13;
  Il2CppObject *pIVar14;
  Il2CppClass *pIVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  ulong uVar22;
  UnityEngine_Vector3_Fields UVar23;
  undefined8 uStack_80;
  undefined8 local_78;
  MethodInfo_465DD20 **local_70;
  Interpolate__NewBezier_d__16_T__o **local_68;
  undefined8 local_60;
  float local_58;
  undefined8 *local_50;
  float local_44;
  MethodInfo_465DD20 *local_40;
  Interpolate__NewBezier_d__16_T__o *local_38;
  
  local_40 = method;
  local_38 = __this;
  if (g_data_07541072 == '\0') {
    uStack_80 = 0x475dd54;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    uStack_80 = 0x475dd60;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_float);
    uStack_80 = 0x475dd6c;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_float);
    uStack_80 = 0x475dd78;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    uStack_80 = 0x475dd84;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    uStack_80 = 0x475dd90;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    g_data_07541072 = '\x01';
  }
  lVar20 = -((ulong)(method->klass->rgctx_data->_3_T->_2).stack_slot_size + 0xf & 0xfffffffffffffff0);
  puVar21 = (undefined1 *)((long)&local_78 + lVar20);
  local_78 = 0;
  local_70 = &local_40;
  local_68 = &local_38;
  iVar1 = (__this->fields).__1__state;
  puVar18 = puVar21;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pIVar14 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar14 == (Il2CppObject *)0x0) {
      *(undefined8 *)((long)&uStack_80 + lVar20) = 0x475e327;
      ThrowNullReferenceException();
    }
    pIVar15 = pIVar14->klass;
    uVar22 = (ulong)(pIVar15->_2).interface_offsets_count;
    if (uVar22 != 0) {
      pIVar2 = (pIVar15->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(System_Collections_ICollection_c **)((long)&pIVar2->interfaceType + lVar19) ==
            TypeInfo_System_Collections_ICollection) {
          pVVar12 = pIVar15->vtable + (*(int *)((long)&pIVar2->offset + lVar19) + 1);
          goto label_0475de68;
        }
        lVar19 = lVar19 + 0x10;
      } while (uVar22 * 0x10 != lVar19);
    }
    *(undefined8 *)((long)&uStack_80 + lVar20) = 0x475de4c;
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
    puVar18 = (undefined1 *)((long)&local_78 + lVar20);
label_0475de68:
    pMVar3 = pVVar12->method;
    pIVar4 = pVVar12->methodPtr;
    *(undefined8 *)(puVar18 + -8) = 0x475de71;
    iVar11 = (*pIVar4)(pIVar14,pMVar3);
    if (iVar11 < 2) {
      return false;
    }
    pIVar14 = (Il2CppObject *)(local_38->fields).nodes;
    if (pIVar14 == (Il2CppObject *)0x0) {
      *(undefined8 *)(puVar18 + -8) = 0x475e331;
      ThrowNullReferenceException();
    }
    pIVar15 = pIVar14->klass;
    uVar22 = (ulong)(pIVar15->_2).interface_offsets_count;
    if (uVar22 != 0) {
      pIVar2 = (pIVar15->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(System_Collections_ICollection_c **)((long)&pIVar2->interfaceType + lVar20) ==
            TypeInfo_System_Collections_ICollection) {
          pVVar12 = pIVar15->vtable + (*(int *)((long)&pIVar2->offset + lVar20) + 1);
          goto label_0475dee8;
        }
        lVar20 = lVar20 + 0x10;
      } while (uVar22 * 0x10 != lVar20);
    }
    *(undefined8 *)(puVar18 + -8) = 0x475decc;
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475dee8:
    pMVar3 = pVVar12->method;
    pIVar4 = pVVar12->methodPtr;
    *(undefined8 *)(puVar18 + -8) = 0x475def1;
    length = (*pIVar4)(pIVar14,pMVar3);
    *(undefined8 *)(puVar18 + -8) = 0x475df02;
    pUVar13 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,length);
    (local_38->fields)._points_5__2 = pUVar13;
    pIVar8 = &local_38->fields;
    *(undefined8 *)(puVar18 + -8) = 0x475df16;
    Il2CppCodeGenWriteBarrier(&pIVar8->_points_5__2);
    pIVar14 = (Il2CppObject *)(local_38->fields).steps;
    if (pIVar14 == (Il2CppObject *)0x0) {
      *(undefined8 *)(puVar18 + -8) = 0x475e336;
      ThrowNullReferenceException();
    }
    pIVar15 = pIVar14->klass;
    uVar22 = (ulong)(pIVar15->_2).interface_offsets_count;
    if (uVar22 != 0) {
      pIVar2 = (pIVar15->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_float__c **)((long)&pIVar2->interfaceType + lVar20) ==
            TypeInfo_System_Collections_Generic_IEnumerable_float) {
          pVVar12 = pIVar15->vtable + *(int *)((long)&pIVar2->offset + lVar20);
          goto label_0475df81;
        }
        lVar20 = lVar20 + 0x10;
      } while (uVar22 * 0x10 != lVar20);
    }
    *(undefined8 *)(puVar18 + -8) = 0x475df69;
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_float,0);
label_0475df81:
    pMVar3 = pVVar12->method;
    pIVar4 = pVVar12->methodPtr;
    *(undefined8 *)(puVar18 + -8) = 0x475df8a;
    pIVar14 = (*pIVar4)(pIVar14,pMVar3);
    (local_38->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)pIVar14;
    pIVar8 = &local_38->fields;
    *(undefined8 *)(puVar18 + -8) = 0x475df9e;
    Il2CppCodeGenWriteBarrier(&pIVar8->__7__wrap2);
    __this = local_38;
  }
  (__this->fields).__1__state = -3;
  pIVar14 = (Il2CppObject *)(__this->fields).__7__wrap2;
  if (pIVar14 == (Il2CppObject *)0x0) {
    *(undefined8 *)(puVar18 + -8) = 0x475e322;
    ThrowNullReferenceException();
  }
  pIVar15 = pIVar14->klass;
  uVar22 = (ulong)(pIVar15->_2).interface_offsets_count;
  if (uVar22 != 0) {
    pIVar2 = (pIVar15->_1).interfaceOffsets;
    lVar20 = 0;
    do {
      if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar20) ==
          TypeInfo_System_Collections_IEnumerator) {
        pVVar12 = pIVar15->vtable + *(int *)((long)&pIVar2->offset + lVar20);
        goto label_0475e011;
      }
      lVar20 = lVar20 + 0x10;
    } while (uVar22 * 0x10 != lVar20);
  }
  *(undefined8 *)(puVar18 + -8) = 0x475dff9;
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0475e011:
  pMVar3 = pVVar12->method;
  pIVar4 = pVVar12->methodPtr;
  *(undefined8 *)(puVar18 + -8) = 0x475e01a;
  bVar10 = (*pIVar4)(pIVar14,pMVar3);
  pIVar9 = local_38;
  if (!bVar10) {
    pIVar4 = local_40->klass->rgctx_data->_1_Interpolate__NewBezier_d__16_T____m__Finally1->methodPointer;
    *(undefined8 *)(puVar18 + -8) = 0x475e094;
    (*pIVar4)(pIVar9);
    (local_38->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
    pIVar8 = &local_38->fields;
    *(undefined8 *)(puVar18 + -8) = 0x475e0ab;
    Il2CppCodeGenWriteBarrier(&pIVar8->__7__wrap2);
    (local_38->fields)._points_5__2 = (UnityEngine_Vector3_array *)0x0;
    pIVar8 = &local_38->fields;
    *(undefined8 *)(puVar18 + -8) = 0x475e0c4;
    Il2CppCodeGenWriteBarrier(&pIVar8->_points_5__2);
    return false;
  }
  pIVar14 = (Il2CppObject *)(local_38->fields).__7__wrap2;
  if (pIVar14 == (Il2CppObject *)0x0) {
    *(undefined8 *)(puVar18 + -8) = 0x475e32c;
    ThrowNullReferenceException();
  }
  pIVar15 = pIVar14->klass;
  uVar22 = (ulong)(pIVar15->_2).interface_offsets_count;
  if (uVar22 != 0) {
    pIVar2 = (pIVar15->_1).interfaceOffsets;
    lVar20 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerator_float__c **)((long)&pIVar2->interfaceType + lVar20) ==
          TypeInfo_System_Collections_Generic_IEnumerator_float) {
        pVVar12 = pIVar15->vtable + *(int *)((long)&pIVar2->offset + lVar20);
        goto label_0475e0db;
      }
      lVar20 = lVar20 + 0x10;
    } while (uVar22 * 0x10 != lVar20);
  }
  *(undefined8 *)(puVar18 + -8) = 0x475e079;
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_float,0);
label_0475e0db:
  pMVar3 = pVVar12->method;
  pIVar4 = pVVar12->methodPtr;
  *(undefined8 *)(puVar18 + -8) = 0x475e0e4;
  local_44 = (*pIVar4)(pIVar14,pMVar3);
  pIVar14 = (Il2CppObject *)(local_38->fields).nodes;
  if (pIVar14 != (Il2CppObject *)0x0) {
    uVar22 = 0;
    do {
      pIVar15 = pIVar14->klass;
      uVar17 = (ulong)(pIVar15->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar2 = (pIVar15->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(System_Collections_ICollection_c **)((long)&pIVar2->interfaceType + lVar20) ==
              TypeInfo_System_Collections_ICollection) {
            pVVar12 = pIVar15->vtable + (*(int *)((long)&pIVar2->offset + lVar20) + 1);
            goto label_0475e177;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar17 * 0x10 != lVar20);
      }
      *(undefined8 *)(puVar18 + -8) = 0x475e14c;
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475e177:
      pMVar3 = pVVar12->method;
      pIVar4 = pVVar12->methodPtr;
      *(undefined8 *)(puVar18 + -8) = 0x475e180;
      iVar11 = (*pIVar4)(pIVar14,pMVar3);
      elapsedTime = local_44;
      if ((long)iVar11 <= (long)uVar22) {
        ease = (local_38->fields).ease;
        pUVar13 = (local_38->fields)._points_5__2;
        duration = (local_38->fields).maxStep;
        *(undefined8 *)(puVar18 + -8) = 0x475e2e2;
        UVar23 = (UnityEngine_Vector3_Fields)
                 Interpolate__Bezier(ease,pUVar13,elapsedTime,duration,(MethodInfo *)0x0);
        (local_38->fields).__2__current.fields = UVar23;
        (local_38->fields).__1__state = 1;
        return true;
      }
      pIVar14 = (Il2CppObject *)(local_38->fields).nodes;
      if (pIVar14 == (Il2CppObject *)0x0) {
        *(undefined8 *)(puVar18 + -8) = 0x475e31d;
        ThrowNullReferenceException();
      }
      pUVar13 = (local_38->fields)._points_5__2;
      pIVar5 = (local_38->fields).toVector3;
      pIVar15 = pIVar14->klass;
      uVar17 = (ulong)(pIVar15->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar2 = (pIVar15->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(System_Collections_IList_c **)((long)&pIVar2->interfaceType + lVar20) ==
              TypeInfo_System_Collections_IList) {
            pVVar12 = pIVar15->vtable + *(int *)((long)&pIVar2->offset + lVar20);
            goto label_0475e203;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar17 * 0x10 != lVar20);
      }
      *(undefined8 *)(puVar18 + -8) = 0x475e1e9;
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_0475e203:
      pMVar3 = pVVar12->method;
      pIVar4 = pVVar12->methodPtr;
      *(undefined8 *)(puVar18 + -8) = 0x475e20f;
      pIVar14 = (*pIVar4)(pIVar14,(int32_t)uVar22,pMVar3);
      pIVar15 = local_40->klass->rgctx_data->_3_T;
      if (((pIVar15->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)(puVar18 + -8) = 0x475e236;
        pIVar15 = il2cpp_codegen_class_init_checked(pIVar15);
      }
      *(undefined8 *)(puVar18 + -8) = 0x475e244;
      puVar16 = (undefined8 *)il2cpp_runtime_helper_030d6290(pIVar14,pIVar15,puVar21);
      if (pIVar5 == (Interpolate_ToVector3_T__o *)0x0) {
        *(undefined8 *)(puVar18 + -8) = 0x475e313;
        ThrowNullReferenceException();
      }
      pIVar6 = local_40->klass->rgctx_data;
      if (-1 < (int)(pIVar6->_3_T->_1).byval_arg.bits) {
        puVar16 = (undefined8 *)*puVar16;
      }
      pMVar3 = pIVar6->_4_Interpolate_ToVector3_T__Invoke;
      pIVar4 = pMVar3->methodPointer;
      pIVar7 = pMVar3->invoker_method;
      local_50 = puVar16;
      *(undefined8 *)(puVar18 + -8) = 0x475e282;
      (*pIVar7)(pIVar4,pMVar3,pIVar5,&local_50,&local_60);
      if (pUVar13 == (UnityEngine_Vector3_array *)0x0) {
        *(undefined8 *)(puVar18 + -8) = 0x475e318;
        ThrowNullReferenceException();
      }
      if ((uint)pUVar13->max_length <= uVar22) {
        *(undefined8 *)(puVar18 + -8) = 0x475e30e;
        ThrowIndexOutOfRangeException();
      }
      pUVar13->m_Items[uVar22].fields.x = (float)(undefined4)local_60;
      pUVar13->m_Items[uVar22].fields.y = (float)local_60._4_4_;
      pUVar13->m_Items[uVar22].fields.z = local_58;
      uVar22 = uVar22 + 1;
      pIVar14 = (Il2CppObject *)(local_38->fields).nodes;
    } while (pIVar14 != (Il2CppObject *)0x0);
  }
  *(undefined8 *)(puVar18 + -8) = 0x475e2c9;
  ThrowNullReferenceException();
}


// Interpolate.<NewBezier>d__16<object>$$<>m__Finally1
// il2cpp: void Interpolate__NewBezier_d__16_object_____m__Finally1 (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465D080* method);
// 0x475d080

void Interpolate__NewBezier_d__16_object_____m__Finally1
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465D080 *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_0754106d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_0754106d = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (Il2CppObject *)(__this->fields).__7__wrap2;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar1 = obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_0475d10f;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0475d10f:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// Interpolate.<NewBezier>d__16<Vector3>$$<>m__Finally1
// il2cpp: void Interpolate__NewBezier_d__16_Vector3_____m__Finally1 (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465DA90* method);
// 0x475da90

void Interpolate__NewBezier_d__16_Vector3_____m__Finally1
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465DA90 *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07541070 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07541070 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (Il2CppObject *)(__this->fields).__7__wrap2;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar1 = obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_0475db1f;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0475db1f:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$<>m__Finally1
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType_____m__Finally1 (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465E3C0* method);
// 0x475e3c0

void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType_____m__Finally1
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465E3C0 *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07541073 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07541073 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (Il2CppObject *)(__this->fields).__7__wrap2;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar1 = obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_0475e44f;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0475e44f:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465D120* method);
// 0x475d120

UnityEngine_Vector3_o
Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465D120 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465DB30* method);
// 0x475db30

UnityEngine_Vector3_o
Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465DB30 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465E460* method);
// 0x475e460

UnityEngine_Vector3_o
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465E460 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_Reset (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465D130* method);
// 0x475d130

void Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_Reset
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465D130 *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_Reset (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465DB40* method);
// 0x475db40

void Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_Reset
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465DB40 *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465E470* method);
// 0x475e470

void Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset
               (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465E470 *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465D170* method);
// 0x475d170

Il2CppObject *
Interpolate__NewBezier_d__16_object___System_Collections_IEnumerator_get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465D170 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_0754106e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0754106e = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465DB80* method);
// 0x475db80

Il2CppObject *
Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerator_get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465DB80 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_07541071 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07541071 = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465E4B0* method);
// 0x475e4b0

Il2CppObject *
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465E4B0 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_07541074 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07541074 = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465D1C0* method);
// 0x475d1c0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465D1C0 *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_0475d22e;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_0475d22e:
  (__this_00->fields).ease = (__this->fields).__3__ease;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease);
  (__this_00->fields).nodes = (__this->fields).__3__nodes;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes);
  (__this_00->fields).toVector3 = (__this->fields).__3__toVector3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3);
  (__this_00->fields).maxStep = (__this->fields).__3__maxStep;
  (__this_00->fields).steps = (__this->fields).__3__steps;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).steps);
  return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465DBD0* method);
// 0x475dbd0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465DBD0 *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *__this_00;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_0475dc3e;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_0475dc3e:
  (__this_00->fields).ease = (__this->fields).__3__ease;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease);
  (__this_00->fields).nodes = (__this->fields).__3__nodes;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes);
  (__this_00->fields).toVector3 = (__this->fields).__3__toVector3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3);
  (__this_00->fields).maxStep = (__this->fields).__3__maxStep;
  (__this_00->fields).steps = (__this->fields).__3__steps;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).steps);
  return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465E500* method);
// 0x475e500

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465E500 *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *pIVar3;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      pIVar3 = __this;
      goto label_0475e56f;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar3 = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  (*method->klass->rgctx_data->_6_Interpolate__NewBezier_d__16_T___ctor->methodPointer)(pIVar3,0);
  if (pIVar3 == (Interpolate__NewBezier_d__16_T__o *)0x0) {
    ThrowNullReferenceException();
  }
label_0475e56f:
  (pIVar3->fields).ease = (__this->fields).__3__ease;
  Il2CppCodeGenWriteBarrier(&(pIVar3->fields).ease);
  (pIVar3->fields).nodes = (__this->fields).__3__nodes;
  Il2CppCodeGenWriteBarrier(&(pIVar3->fields).nodes);
  (pIVar3->fields).toVector3 = (__this->fields).__3__toVector3;
  Il2CppCodeGenWriteBarrier(&(pIVar3->fields).toVector3);
  (pIVar3->fields).maxStep = (__this->fields).__3__maxStep;
  (pIVar3->fields).steps = (__this->fields).__3__steps;
  Il2CppCodeGenWriteBarrier(&(pIVar3->fields).steps);
  return (System_Collections_Generic_IEnumerator_Vector3__o *)pIVar3;
}


// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewBezier_d__16_object___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465D290* method);
// 0x475d290

System_Collections_IEnumerator_o *
Interpolate__NewBezier_d__16_object___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465D290 *method)

{
  System_Collections_Generic_IEnumerator_Vector3__o *pSVar1;
  
  pSVar1 = Interpolate__NewBezier_d__16_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
                     (__this,(MethodInfo_465D1C0 *)
                             method->klass->rgctx_data->
                             _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
                     );
  return (System_Collections_IEnumerator_o *)pSVar1;
}


// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465DCA0* method);
// 0x475dca0

System_Collections_IEnumerator_o *
Interpolate__NewBezier_d__16_Vector3___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465DCA0 *method)

{
  System_Collections_Generic_IEnumerator_Vector3__o *pSVar1;
  
  pSVar1 = Interpolate__NewBezier_d__16_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
                     (__this,(MethodInfo_465DBD0 *)
                             method->klass->rgctx_data->
                             _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
                     );
  return (System_Collections_IEnumerator_o *)pSVar1;
}


// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewBezier_d__16_T__o* __this, const MethodInfo_465E5D0* method);
// 0x475e5d0

System_Collections_IEnumerator_o *
Interpolate__NewBezier_d__16___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewBezier_d__16_T__o *__this,MethodInfo_465E5D0 *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = (System_Collections_IEnumerator_o *)
           (*method->klass->rgctx_data->
             _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
             ->methodPointer)();
  return pSVar1;
}


// Interpolate.<NewCatmullRom>d__20<object>$$.ctor
// il2cpp: void Interpolate__NewCatmullRom_d__20_object____ctor (Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, const MethodInfo_465E5F0* method);
// 0x475e5f0

void Interpolate__NewCatmullRom_d__20_object____ctor
               (Interpolate__NewCatmullRom_d__20_T__o *__this,int32_t __1__state,MethodInfo_465E5F0 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$.ctor
// il2cpp: void Interpolate__NewCatmullRom_d__20_Vector3____ctor (Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, const MethodInfo_494FFA0* method);
// 0x4a4ffa0

void Interpolate__NewCatmullRom_d__20_Vector3____ctor
               (Interpolate__NewCatmullRom_d__20_T__o *__this,int32_t __1__state,MethodInfo_494FFA0 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType____ctor (Interpolate__NewCatmullRom_d__20_T__o* __this, int32_t __1__state, const MethodInfo_4950890* method);
// 0x4a50890

void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType____ctor
               (Interpolate__NewCatmullRom_d__20_T__o *__this,int32_t __1__state,MethodInfo_4950890 *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCatmullRom_d__20_object___System_IDisposable_Dispose (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_465E620* method);
// 0x475e620

void Interpolate__NewCatmullRom_d__20_object___System_IDisposable_Dispose
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_465E620 *method)

{
  return;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCatmullRom_d__20_Vector3___System_IDisposable_Dispose (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_494FFD0* method);
// 0x4a4ffd0

void Interpolate__NewCatmullRom_d__20_Vector3___System_IDisposable_Dispose
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_494FFD0 *method)

{
  return;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_IDisposable_Dispose (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_49508C0* method);
// 0x4a508c0

void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_IDisposable_Dispose
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_49508C0 *method)

{
  return;
}


// Interpolate.<NewCatmullRom>d__20<object>$$MoveNext
// il2cpp: bool Interpolate__NewCatmullRom_d__20_object___MoveNext (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_465E630* method);
// 0x475e630
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x475e6bf: nop 
// asm:   0x475e739: nop dword ptr [rax]
// asm:   0x475e849: jmp 0x475e90a
// asm:   0x475e8ba: jmp 0x475ecc3
// asm:   0x475e960: jmp 0x475e82b
// asm:   0x475e99c: nop dword ptr [rax]
// asm:   0x475ea23: jmp 0x475ecc3
// asm:   0x475eb03: jmp 0x475ecc3
// asm:   0x475ebe3: jmp 0x475ecc3

bool Interpolate__NewCatmullRom_d__20_object___MoveNext
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_465E630 *method)

{
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Interpolate_ToVector3_T__o *pIVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int32_t iVar6;
  int iVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *pIVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  float in_XMM1_Da;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o next;
  UnityEngine_Vector3_o end;
  
  if (Il2CppMethodInitialized_07541075 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    Il2CppMethodInitialized_07541075 = '\x01';
  }
  iVar7 = (__this->fields).__1__state;
  if (iVar7 == 2) {
    (__this->fields).__1__state = -1;
    iVar7 = (__this->fields)._stepCount_5__8;
    iVar14 = (__this->fields)._step_5__9 + 1;
    (__this->fields)._step_5__9 = iVar14;
    goto label_0475e945;
  }
  if (iVar7 == 1) {
    (__this->fields).__1__state = -1;
    pIVar9 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar10 = pIVar9->klass;
      uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar1 = (pIVar10->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_ICollection_c **)((long)&pIVar1->interfaceType + lVar16) ==
              TypeInfo_System_Collections_ICollection) {
            pVVar8 = pIVar10->vtable + (*(int *)((long)&pIVar1->offset + lVar16) + 1);
            goto label_0475e805;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar12 * 0x10 != lVar16);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475e805:
      iVar6 = (*pVVar8->methodPtr)(pIVar9,pVVar8->method);
      (__this->fields)._last_5__2 = iVar6 + -1;
      (__this->fields)._current_5__3 = 0;
      iVar14 = 0;
      cVar5 = (__this->fields).loop;
      iVar7 = (__this->fields)._last_5__2;
      if ((bool)cVar5 != false) goto label_0475e8da;
label_0475e82b:
      if (iVar7 <= iVar14) {
        return false;
      }
      if (iVar14 != 0) goto label_0475e8f3;
      (__this->fields)._previous_5__4 = 0;
      (__this->fields)._start_5__5 = 0;
      iVar13 = 0;
      if (iVar7 != 0) goto label_0475e918;
      do {
        iVar7 = iVar13;
        iVar14 = iVar7;
        do {
          if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_0475e913;
          while( true ) {
            (__this->fields)._end_5__6 = iVar14;
            iVar13 = 0;
            if (cVar5 == '\0') {
              iVar13 = iVar7;
            }
            if (iVar14 != iVar7) {
              iVar13 = iVar14 + 1;
            }
            (__this->fields)._next_5__7 = iVar13;
            iVar7 = (__this->fields).slices + 1;
            (__this->fields)._stepCount_5__8 = iVar7;
            (__this->fields)._step_5__9 = 1;
            iVar14 = 1;
label_0475e945:
            if (iVar14 <= iVar7) {
              pIVar9 = (Il2CppObject *)(__this->fields).nodes;
              if (pIVar9 == (Il2CppObject *)0x0) goto label_0475e913;
              pIVar2 = (__this->fields).toVector3;
              iVar6 = (__this->fields)._previous_5__4;
              pIVar10 = pIVar9->klass;
              uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
              if (uVar12 == 0) goto label_0475e9af;
              pIVar1 = (pIVar10->_1).interfaceOffsets;
              lVar16 = 0;
              goto label_0475e9a0;
            }
            iVar14 = (__this->fields)._current_5__3 + 1;
            (__this->fields)._current_5__3 = iVar14;
            cVar5 = (__this->fields).loop;
            iVar7 = (__this->fields)._last_5__2;
            if ((bool)cVar5 == false) goto label_0475e82b;
label_0475e8da:
            iVar15 = iVar7;
            if (iVar7 < iVar14) {
              (__this->fields)._current_5__3 = 0;
              iVar13 = 0;
            }
            else {
              iVar13 = 0;
              if (iVar14 != 0) {
label_0475e8f3:
                iVar15 = iVar14 + -1;
                iVar13 = iVar14;
              }
            }
            (__this->fields)._previous_5__4 = iVar15;
            (__this->fields)._start_5__5 = iVar13;
            if (iVar13 == iVar7) break;
label_0475e918:
            iVar14 = iVar13 + 1;
          }
          iVar14 = 0;
          iVar13 = iVar7;
        } while (cVar5 != '\0');
      } while( true );
    }
    goto label_0475e913;
  }
  if (iVar7 != 0) {
    return false;
  }
  (__this->fields).__1__state = -1;
  pIVar9 = (Il2CppObject *)(__this->fields).nodes;
  if (pIVar9 == (Il2CppObject *)0x0) goto label_0475e913;
  pIVar10 = pIVar9->klass;
  uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
  if (uVar12 != 0) {
    pIVar1 = (pIVar10->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(System_Collections_ICollection_c **)((long)&pIVar1->interfaceType + lVar16) ==
          TypeInfo_System_Collections_ICollection) {
        pVVar8 = pIVar10->vtable + (*(int *)((long)&pIVar1->offset + lVar16) + 1);
        goto label_0475e77f;
      }
      lVar16 = lVar16 + 0x10;
    } while (uVar12 * 0x10 != lVar16);
  }
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_0475e77f:
  iVar6 = (*pVVar8->methodPtr)(pIVar9,pVVar8->method);
  if (iVar6 < 2) {
    return false;
  }
  pIVar9 = (Il2CppObject *)(__this->fields).nodes;
  if (pIVar9 == (Il2CppObject *)0x0) goto label_0475e913;
  pIVar2 = (__this->fields).toVector3;
  pIVar10 = pIVar9->klass;
  uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
  if (uVar12 != 0) {
    pIVar1 = (pIVar10->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
          TypeInfo_System_Collections_IList) {
        pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
        goto label_0475e868;
      }
      lVar16 = lVar16 + 0x10;
    } while (uVar12 * 0x10 != lVar16);
  }
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0)
  ;
label_0475e868:
  pIVar9 = (*pVVar8->methodPtr)(pIVar9,0,pVVar8->method);
  if (pIVar2 == (Interpolate_ToVector3_T__o *)0x0) goto label_0475e913;
  pIVar10 = method->klass->rgctx_data->_2_T;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  if (pIVar9 == (Il2CppObject *)0x0) {
    pIVar11 = (Il2CppObject *)0x0;
  }
  else {
    pIVar11 = il2cpp_vm_Object_IsInst(pIVar9,pIVar10);
    if (pIVar11 == (Il2CppObject *)0x0) goto label_0475ecc3;
  }
  uVar17 = (*(code *)(pIVar2->fields).invoke_impl)
                     ((pIVar2->fields).method_code,pIVar11,(pIVar2->fields).method);
  iVar6 = 1;
label_0475ed2a:
  (__this->fields).__2__current.fields.x = (float)(int)uVar17;
  (__this->fields).__2__current.fields.y = (float)(int)((ulong)uVar17 >> 0x20);
  (__this->fields).__2__current.fields.z = in_XMM1_Da;
  (__this->fields).__1__state = iVar6;
  return true;
  while (lVar16 = lVar16 + 0x10, uVar12 * 0x10 != lVar16) {
label_0475e9a0:
    if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
        TypeInfo_System_Collections_IList) {
      pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
      goto label_0475e9d1;
    }
  }
label_0475e9af:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0)
  ;
label_0475e9d1:
  pIVar9 = (*pVVar8->methodPtr)(pIVar9,iVar6,pVVar8->method);
  if (pIVar2 == (Interpolate_ToVector3_T__o *)0x0) goto label_0475e913;
  pIVar10 = method->klass->rgctx_data->_2_T;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  if (pIVar9 == (Il2CppObject *)0x0) {
    pIVar11 = (Il2CppObject *)0x0;
  }
  else {
    pIVar11 = il2cpp_vm_Object_IsInst(pIVar9,pIVar10);
    if (pIVar11 == (Il2CppObject *)0x0) goto label_0475ecc3;
  }
  uVar17 = (*(code *)(pIVar2->fields).invoke_impl)
                     ((pIVar2->fields).method_code,pIVar11,(pIVar2->fields).method);
  pIVar9 = (Il2CppObject *)(__this->fields).nodes;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar2 = (__this->fields).toVector3;
    iVar6 = (__this->fields)._start_5__5;
    pIVar10 = pIVar9->klass;
    uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
    fVar18 = in_XMM1_Da;
    if (uVar12 != 0) {
      pIVar1 = (pIVar10->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
            TypeInfo_System_Collections_IList) {
          pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
          goto label_0475eab1;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar12 * 0x10 != lVar16);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_0475eab1:
    pIVar9 = (*pVVar8->methodPtr)(pIVar9,iVar6,pVVar8->method);
    if (pIVar2 == (Interpolate_ToVector3_T__o *)0x0) goto label_0475e913;
    pIVar10 = method->klass->rgctx_data->_2_T;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    if (pIVar9 == (Il2CppObject *)0x0) {
      pIVar11 = (Il2CppObject *)0x0;
    }
    else {
      pIVar11 = il2cpp_vm_Object_IsInst(pIVar9,pIVar10);
      if (pIVar11 == (Il2CppObject *)0x0) goto label_0475ecc3;
    }
    uVar4 = (*(code *)(pIVar2->fields).invoke_impl)
                      ((pIVar2->fields).method_code,pIVar11,(pIVar2->fields).method);
    pIVar9 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar9 == (Il2CppObject *)0x0) goto label_0475e913;
    pIVar2 = (__this->fields).toVector3;
    iVar6 = (__this->fields)._end_5__6;
    pIVar10 = pIVar9->klass;
    uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
    fVar19 = fVar18;
    if (uVar12 != 0) {
      pIVar1 = (pIVar10->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
            TypeInfo_System_Collections_IList) {
          pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
          goto label_0475eb91;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar12 * 0x10 != lVar16);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_0475eb91:
    pIVar9 = (*pVVar8->methodPtr)(pIVar9,iVar6,pVVar8->method);
    if (pIVar2 == (Interpolate_ToVector3_T__o *)0x0) goto label_0475e913;
    pIVar10 = method->klass->rgctx_data->_2_T;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    if (pIVar9 == (Il2CppObject *)0x0) {
      pIVar11 = (Il2CppObject *)0x0;
    }
    else {
      pIVar11 = il2cpp_vm_Object_IsInst(pIVar9,pIVar10);
      if (pIVar11 == (Il2CppObject *)0x0) goto label_0475ecc3;
    }
    uVar3 = (*(code *)(pIVar2->fields).invoke_impl)
                      ((pIVar2->fields).method_code,pIVar11,(pIVar2->fields).method);
    pIVar9 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar2 = (__this->fields).toVector3;
      iVar6 = (__this->fields)._next_5__7;
      pIVar10 = pIVar9->klass;
      uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
      fVar20 = fVar19;
      if (uVar12 != 0) {
        pIVar1 = (pIVar10->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
              TypeInfo_System_Collections_IList) {
            pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
            goto label_0475ec71;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar12 * 0x10 != lVar16);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_0475ec71:
      pIVar9 = (*pVVar8->methodPtr)(pIVar9,iVar6,pVVar8->method);
      if (pIVar2 != (Interpolate_ToVector3_T__o *)0x0) {
        pIVar10 = method->klass->rgctx_data->_2_T;
        if (((pIVar10->_2).bitflags1 & 1) == 0) {
          pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
        }
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar11 = (Il2CppObject *)0x0;
        }
        else {
          pIVar11 = il2cpp_vm_Object_IsInst(pIVar9,pIVar10);
          if (pIVar11 == (Il2CppObject *)0x0) {
label_0475ecc3:
            il2cpp_codegen_raise_invalid_cast_exception(pIVar9,pIVar10);
          }
        }
        next.fields._0_8_ =
             (*(code *)(pIVar2->fields).invoke_impl)
                       ((pIVar2->fields).method_code,pIVar11,(pIVar2->fields).method);
        UVar21.fields.z = in_XMM1_Da;
        UVar21.fields.x = (float)(int)uVar17;
        UVar21.fields.y = (float)(int)((ulong)uVar17 >> 0x20);
        start.fields.z = fVar18;
        start.fields.x = (float)(int)uVar4;
        start.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
        next.fields.z = fVar20;
        end.fields.z = fVar19;
        end.fields.x = (float)(int)uVar3;
        end.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
        UVar21 = Interpolate__CatmullRom
                           (UVar21,start,end,next,(float)(__this->fields)._step_5__9,
                            (float)(__this->fields)._stepCount_5__8,(MethodInfo *)0x0);
        in_XMM1_Da = UVar21.fields.z;
        uVar17 = UVar21.fields._0_8_;
        iVar6 = 2;
        goto label_0475ed2a;
      }
    }
  }
label_0475e913:
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$MoveNext
// il2cpp: bool Interpolate__NewCatmullRom_d__20_Vector3___MoveNext (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_494FFE0* method);
// 0x4a4ffe0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4a5006f: nop 
// asm:   0x4a500e9: nop dword ptr [rax]
// asm:   0x4a501f9: jmp 0x4a502c0
// asm:   0x4a50316: jmp 0x4a501db
// asm:   0x4a5043f: nop 
// asm:   0x4a5051f: nop 
// asm:   0x4a505ff: nop 

bool Interpolate__NewCatmullRom_d__20_Vector3___MoveNext
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_494FFE0 *method)

{
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  Interpolate_ToVector3_T__o *pIVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int32_t iVar6;
  int iVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o next;
  UnityEngine_Vector3_o end;
  
  if (Il2CppMethodInitialized_0754162b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    Il2CppMethodInitialized_0754162b = '\x01';
  }
  iVar7 = (__this->fields).__1__state;
  if (iVar7 == 2) {
    (__this->fields).__1__state = -1;
    iVar7 = (__this->fields)._stepCount_5__8;
    iVar14 = (__this->fields)._step_5__9 + 1;
    (__this->fields)._step_5__9 = iVar14;
    goto label_04a502fb;
  }
  if (iVar7 == 1) {
    (__this->fields).__1__state = -1;
    pIVar9 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar9 == (Il2CppObject *)0x0) goto label_04a502c9;
    pIVar10 = pIVar9->klass;
    uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar1 = (pIVar10->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_ICollection_c **)((long)&pIVar1->interfaceType + lVar16) ==
            TypeInfo_System_Collections_ICollection) {
          pVVar8 = pIVar10->vtable + (*(int *)((long)&pIVar1->offset + lVar16) + 1);
          goto label_04a501b5;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar12 * 0x10 != lVar16);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_04a501b5:
    iVar6 = (*pVVar8->methodPtr)(pIVar9,pVVar8->method);
    (__this->fields)._last_5__2 = iVar6 + -1;
    (__this->fields)._current_5__3 = 0;
    iVar14 = 0;
    cVar5 = (__this->fields).loop;
    iVar7 = (__this->fields)._last_5__2;
    if ((bool)cVar5 != false) goto label_04a50290;
label_04a501db:
    if (iVar14 < iVar7) {
      if (iVar14 != 0) goto label_04a502a9;
      (__this->fields)._previous_5__4 = 0;
      (__this->fields)._start_5__5 = 0;
      iVar13 = 0;
      if (iVar7 != 0) goto label_04a502ce;
      do {
        iVar7 = iVar13;
        iVar14 = iVar7;
        do {
          if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_04a502c9;
          while( true ) {
            (__this->fields)._end_5__6 = iVar14;
            iVar13 = 0;
            if (cVar5 == '\0') {
              iVar13 = iVar7;
            }
            if (iVar14 != iVar7) {
              iVar13 = iVar14 + 1;
            }
            (__this->fields)._next_5__7 = iVar13;
            iVar7 = (__this->fields).slices + 1;
            (__this->fields)._stepCount_5__8 = iVar7;
            (__this->fields)._step_5__9 = 1;
            iVar14 = 1;
label_04a502fb:
            if (iVar14 <= iVar7) {
              pIVar9 = (Il2CppObject *)(__this->fields).nodes;
              if (pIVar9 == (Il2CppObject *)0x0) goto label_04a502c9;
              pIVar2 = (__this->fields).toVector3;
              iVar6 = (__this->fields)._previous_5__4;
              pIVar10 = pIVar9->klass;
              uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
              if (uVar12 == 0) goto label_04a5036f;
              pIVar1 = (pIVar10->_1).interfaceOffsets;
              lVar16 = 0;
              goto label_04a50360;
            }
            iVar14 = (__this->fields)._current_5__3 + 1;
            (__this->fields)._current_5__3 = iVar14;
            cVar5 = (__this->fields).loop;
            iVar7 = (__this->fields)._last_5__2;
            if ((bool)cVar5 == false) goto label_04a501db;
label_04a50290:
            iVar15 = iVar7;
            if (iVar7 < iVar14) {
              (__this->fields)._current_5__3 = 0;
              iVar13 = 0;
            }
            else {
              iVar13 = 0;
              if (iVar14 != 0) {
label_04a502a9:
                iVar15 = iVar14 + -1;
                iVar13 = iVar14;
              }
            }
            (__this->fields)._previous_5__4 = iVar15;
            (__this->fields)._start_5__5 = iVar13;
            if (iVar13 == iVar7) break;
label_04a502ce:
            iVar14 = iVar13 + 1;
          }
          iVar14 = 0;
          iVar13 = iVar7;
        } while (cVar5 != '\0');
      } while( true );
    }
  }
  else if (iVar7 == 0) {
    (__this->fields).__1__state = -1;
    pIVar9 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar10 = pIVar9->klass;
      uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar1 = (pIVar10->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_ICollection_c **)((long)&pIVar1->interfaceType + lVar16) ==
              TypeInfo_System_Collections_ICollection) {
            pVVar8 = pIVar10->vtable + (*(int *)((long)&pIVar1->offset + lVar16) + 1);
            goto label_04a5012f;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar12 * 0x10 != lVar16);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_04a5012f:
      iVar6 = (*pVVar8->methodPtr)(pIVar9,pVVar8->method);
      if (iVar6 < 2) {
        return false;
      }
      pIVar9 = (Il2CppObject *)(__this->fields).nodes;
      if (pIVar9 != (Il2CppObject *)0x0) {
        pIVar2 = (__this->fields).toVector3;
        pIVar10 = pIVar9->klass;
        uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar1 = (pIVar10->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
                TypeInfo_System_Collections_IList) {
              pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
              goto label_04a50218;
            }
            lVar16 = lVar16 + 0x10;
          } while (uVar12 * 0x10 != lVar16);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_04a50218:
        pIVar9 = (*pVVar8->methodPtr)(pIVar9,0,pVVar8->method);
        if (pIVar2 != (Interpolate_ToVector3_T__o *)0x0) {
          pIVar10 = method->klass->rgctx_data->_2_T;
          if (((pIVar10->_2).bitflags1 & 1) == 0) {
            pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
          }
          if (pIVar9 != (Il2CppObject *)0x0) {
            if ((pIVar9->klass->_1).element_class == (pIVar10->_1).element_class) {
              puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
              UVar21.fields.z = *(float *)(puVar11 + 1);
              uVar17 = (*(code *)(pIVar2->fields).invoke_impl)
                                 ((int)*puVar11,(pIVar2->fields).method_code,(pIVar2->fields).method);
              iVar6 = 1;
label_04a506ee:
              (__this->fields).__2__current.fields.x = (float)(int)uVar17;
              (__this->fields).__2__current.fields.y = (float)(int)((ulong)uVar17 >> 0x20);
              (__this->fields).__2__current.fields.z = UVar21.fields.z;
              (__this->fields).__1__state = iVar6;
              return true;
            }
            goto label_04a5070b;
          }
        }
      }
    }
    goto label_04a502c9;
  }
  return false;
  while (lVar16 = lVar16 + 0x10, uVar12 * 0x10 != lVar16) {
label_04a50360:
    if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
        TypeInfo_System_Collections_IList) {
      pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
      goto label_04a50391;
    }
  }
label_04a5036f:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0)
  ;
label_04a50391:
  pIVar9 = (*pVVar8->methodPtr)(pIVar9,iVar6,pVVar8->method);
  if (pIVar2 != (Interpolate_ToVector3_T__o *)0x0) {
    pIVar10 = method->klass->rgctx_data->_2_T;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    if (pIVar9 != (Il2CppObject *)0x0) {
      if ((pIVar9->klass->_1).element_class != (pIVar10->_1).element_class) goto label_04a5070b;
      puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
      UVar21.fields.z = *(float *)(puVar11 + 1);
      uVar17 = (*(code *)(pIVar2->fields).invoke_impl)
                         ((int)*puVar11,(pIVar2->fields).method_code,(pIVar2->fields).method);
      pIVar9 = (Il2CppObject *)(__this->fields).nodes;
      if (pIVar9 != (Il2CppObject *)0x0) {
        pIVar2 = (__this->fields).toVector3;
        iVar6 = (__this->fields)._start_5__5;
        pIVar10 = pIVar9->klass;
        uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar1 = (pIVar10->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
                TypeInfo_System_Collections_IList) {
              pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
              goto label_04a50471;
            }
            lVar16 = lVar16 + 0x10;
          } while (uVar12 * 0x10 != lVar16);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_04a50471:
        pIVar9 = (*pVVar8->methodPtr)(pIVar9,iVar6,pVVar8->method);
        if (pIVar2 != (Interpolate_ToVector3_T__o *)0x0) {
          pIVar10 = method->klass->rgctx_data->_2_T;
          if (((pIVar10->_2).bitflags1 & 1) == 0) {
            pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
          }
          if (pIVar9 != (Il2CppObject *)0x0) {
            if ((pIVar9->klass->_1).element_class != (pIVar10->_1).element_class) goto label_04a5070b;
            puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
            fVar18 = *(float *)(puVar11 + 1);
            uVar4 = (*(code *)(pIVar2->fields).invoke_impl)
                              ((int)*puVar11,(pIVar2->fields).method_code,(pIVar2->fields).method);
            pIVar9 = (Il2CppObject *)(__this->fields).nodes;
            if (pIVar9 != (Il2CppObject *)0x0) {
              pIVar2 = (__this->fields).toVector3;
              iVar6 = (__this->fields)._end_5__6;
              pIVar10 = pIVar9->klass;
              uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
              if (uVar12 != 0) {
                pIVar1 = (pIVar10->_1).interfaceOffsets;
                lVar16 = 0;
                do {
                  if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
                      TypeInfo_System_Collections_IList) {
                    pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
                    goto label_04a50551;
                  }
                  lVar16 = lVar16 + 0x10;
                } while (uVar12 * 0x10 != lVar16);
              }
              pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                                 (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_04a50551:
              pIVar9 = (*pVVar8->methodPtr)(pIVar9,iVar6,pVVar8->method);
              if (pIVar2 != (Interpolate_ToVector3_T__o *)0x0) {
                pIVar10 = method->klass->rgctx_data->_2_T;
                if (((pIVar10->_2).bitflags1 & 1) == 0) {
                  pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
                }
                if (pIVar9 != (Il2CppObject *)0x0) {
                  if ((pIVar9->klass->_1).element_class != (pIVar10->_1).element_class) {
label_04a5070b:
                    il2cpp_codegen_raise_invalid_cast_exception(pIVar9,pIVar10);
                  }
                  puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
                  fVar19 = *(float *)(puVar11 + 1);
                  uVar3 = (*(code *)(pIVar2->fields).invoke_impl)
                                    ((int)*puVar11,(pIVar2->fields).method_code,(pIVar2->fields).method);
                  pIVar9 = (Il2CppObject *)(__this->fields).nodes;
                  if (pIVar9 != (Il2CppObject *)0x0) {
                    pIVar2 = (__this->fields).toVector3;
                    iVar6 = (__this->fields)._next_5__7;
                    pIVar10 = pIVar9->klass;
                    uVar12 = (ulong)(pIVar10->_2).interface_offsets_count;
                    if (uVar12 != 0) {
                      pIVar1 = (pIVar10->_1).interfaceOffsets;
                      lVar16 = 0;
                      do {
                        if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar16) ==
                            TypeInfo_System_Collections_IList) {
                          pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar1->offset + lVar16);
                          goto label_04a50631;
                        }
                        lVar16 = lVar16 + 0x10;
                      } while (uVar12 * 0x10 != lVar16);
                    }
                    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                                       (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_04a50631:
                    pIVar9 = (*pVVar8->methodPtr)(pIVar9,iVar6,pVVar8->method);
                    if (pIVar2 != (Interpolate_ToVector3_T__o *)0x0) {
                      pIVar10 = method->klass->rgctx_data->_2_T;
                      if (((pIVar10->_2).bitflags1 & 1) == 0) {
                        pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
                      }
                      if (pIVar9 != (Il2CppObject *)0x0) {
                        if ((pIVar9->klass->_1).element_class == (pIVar10->_1).element_class) {
                          puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
                          fVar20 = *(float *)(puVar11 + 1);
                          next.fields._0_8_ =
                               (*(code *)(pIVar2->fields).invoke_impl)
                                         ((int)*puVar11,(pIVar2->fields).method_code,(pIVar2->fields).method);
                          UVar21.fields.z = UVar21.fields.z;
                          UVar21.fields.x = (float)(int)uVar17;
                          UVar21.fields.y = (float)(int)((ulong)uVar17 >> 0x20);
                          start.fields.z = fVar18;
                          start.fields.x = (float)(int)uVar4;
                          start.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
                          next.fields.z = fVar20;
                          end.fields.z = fVar19;
                          end.fields.x = (float)(int)uVar3;
                          end.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
                          UVar21 = Interpolate__CatmullRom
                                             (UVar21,start,end,next,(float)(__this->fields)._step_5__9,
                                              (float)(__this->fields)._stepCount_5__8,(MethodInfo *)0x0);
                          UVar21.fields.z = UVar21.fields.z;
                          uVar17 = UVar21.fields._0_8_;
                          iVar6 = 2;
                          goto label_04a506ee;
                        }
                        goto label_04a5070b;
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
label_04a502c9:
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$MoveNext
// il2cpp: bool Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___MoveNext (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_49508D0* method);
// 0x4a508d0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4a50b49: jmp 0x4a50c2a
// asm:   0x4a50c33: jmp 0x4a510fd
// asm:   0x4a50c80: jmp 0x4a50b2b
// asm:   0x4a50ccc: nop dword ptr [rax]
// asm:   0x4a50edd: nop dword ptr [rax]

bool Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___MoveNext
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_49508D0 *method)

{
  Il2CppRuntimeInterfaceOffsetPair *pIVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  Interpolate_ToVector3_T__o *pIVar4;
  Interpolate__NewCatmullRom_d__20_T__RGCTXs *pIVar5;
  InvokerMethod pIVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  MethodInfo_49508D0 *pMVar11;
  char cVar12;
  int32_t iVar13;
  int iVar14;
  ulong uVar15;
  VirtualInvokeData *pVVar16;
  Il2CppObject *pIVar17;
  Il2CppClass *pIVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  UnityEngine_Vector3_o previous;
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o end;
  undefined8 uStack_c0;
  float afStack_b8 [2];
  undefined8 uStack_b0;
  long local_a8 [3];
  undefined8 uStack_90;
  long local_80;
  long local_78;
  undefined8 uStack_70;
  float local_5c;
  float local_58;
  float local_54;
  MethodInfo_49508D0 *local_50;
  long local_48;
  float local_40;
  undefined8 *local_38;
  
  if (g_data_0754162d == '\0') {
    uStack_b0 = 0x4a508fc;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_ICollection);
    uStack_b0 = 0x4a50908;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IList);
    g_data_0754162d = '\x01';
  }
  uVar15 = (ulong)(method->klass->rgctx_data->_2_T->_2).stack_slot_size + 0xf & 0xfffffffffffffff0;
  lVar27 = (long)local_a8 - uVar15;
  lVar20 = (lVar27 - uVar15) - uVar15;
  lVar26 = lVar20 - uVar15;
  iVar14 = (__this->fields).__1__state;
  local_50 = method;
  if (iVar14 == 2) {
    (__this->fields).__1__state = -1;
    iVar14 = (__this->fields)._stepCount_5__8;
    iVar23 = (__this->fields)._step_5__9 + 1;
    (__this->fields)._step_5__9 = iVar23;
    local_78 = lVar20;
    goto label_04a50c65;
  }
  if (iVar14 == 1) {
    (__this->fields).__1__state = -1;
    pIVar17 = (Il2CppObject *)(__this->fields).nodes;
    local_78 = lVar20;
    if (pIVar17 == (Il2CppObject *)0x0) goto label_04a510fd;
    pIVar18 = pIVar17->klass;
    uVar21 = (ulong)(pIVar18->_2).interface_offsets_count;
    if (uVar21 != 0) {
      pIVar1 = (pIVar18->_1).interfaceOffsets;
      lVar25 = 0;
      do {
        if (*(System_Collections_ICollection_c **)((long)&pIVar1->interfaceType + lVar25) ==
            TypeInfo_System_Collections_ICollection) {
          pVVar16 = pIVar18->vtable + (*(int *)((long)&pIVar1->offset + lVar25) + 1);
          goto label_04a50b05;
        }
        lVar25 = lVar25 + 0x10;
      } while (uVar21 * 0x10 != lVar25);
    }
    *(undefined8 *)(lVar26 + -8) = 0x4a50a60;
    pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar17,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_04a50b05:
    pMVar2 = pVVar16->method;
    pIVar3 = pVVar16->methodPtr;
    *(undefined8 *)(lVar26 + -8) = 0x4a50b0e;
    iVar13 = (*pIVar3)(pIVar17,pMVar2);
    (__this->fields)._last_5__2 = iVar13 + -1;
    (__this->fields)._current_5__3 = 0;
    iVar23 = 0;
    cVar12 = (__this->fields).loop;
    iVar14 = (__this->fields)._last_5__2;
    if ((bool)cVar12 != false) goto label_04a50bfa;
label_04a50b2b:
    if (iVar23 < iVar14) {
      if (iVar23 != 0) goto label_04a50c13;
      (__this->fields)._previous_5__4 = 0;
      (__this->fields)._start_5__5 = 0;
      iVar22 = 0;
      if (iVar14 != 0) goto label_04a50c38;
      do {
        iVar14 = iVar22;
        iVar23 = iVar14;
        do {
          if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) goto label_04a510fd;
          while( true ) {
            (__this->fields)._end_5__6 = iVar23;
            iVar22 = 0;
            if (cVar12 == '\0') {
              iVar22 = iVar14;
            }
            if (iVar23 != iVar14) {
              iVar22 = iVar23 + 1;
            }
            (__this->fields)._next_5__7 = iVar22;
            iVar14 = (__this->fields).slices + 1;
            (__this->fields)._stepCount_5__8 = iVar14;
            (__this->fields)._step_5__9 = 1;
            iVar23 = 1;
label_04a50c65:
            if (iVar23 <= iVar14) {
              pIVar17 = (Il2CppObject *)(__this->fields).nodes;
              local_a8[2] = lVar27;
              local_80 = lVar26;
              if (pIVar17 == (Il2CppObject *)0x0) goto label_04a510fd;
              pIVar4 = (__this->fields).toVector3;
              iVar13 = (__this->fields)._previous_5__4;
              pIVar18 = pIVar17->klass;
              uVar21 = (ulong)(pIVar18->_2).interface_offsets_count;
              if (uVar21 == 0) goto label_04a50cdf;
              pIVar1 = (pIVar18->_1).interfaceOffsets;
              lVar20 = 0;
              goto label_04a50cd0;
            }
            iVar23 = (__this->fields)._current_5__3 + 1;
            (__this->fields)._current_5__3 = iVar23;
            cVar12 = (__this->fields).loop;
            iVar14 = (__this->fields)._last_5__2;
            if ((bool)cVar12 == false) goto label_04a50b2b;
label_04a50bfa:
            iVar24 = iVar14;
            if (iVar14 < iVar23) {
              (__this->fields)._current_5__3 = 0;
              iVar22 = 0;
            }
            else {
              iVar22 = 0;
              if (iVar23 != 0) {
label_04a50c13:
                iVar24 = iVar23 + -1;
                iVar22 = iVar23;
              }
            }
            (__this->fields)._previous_5__4 = iVar24;
            (__this->fields)._start_5__5 = iVar22;
            if (iVar22 == iVar14) break;
label_04a50c38:
            iVar23 = iVar22 + 1;
          }
          iVar23 = 0;
          iVar22 = iVar14;
        } while (cVar12 != '\0');
      } while( true );
    }
  }
  else if (iVar14 == 0) {
    (__this->fields).__1__state = -1;
    pIVar17 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar17 != (Il2CppObject *)0x0) {
      pIVar18 = pIVar17->klass;
      uVar15 = (ulong)(pIVar18->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar1 = (pIVar18->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(System_Collections_ICollection_c **)((long)&pIVar1->interfaceType + lVar20) ==
              TypeInfo_System_Collections_ICollection) {
            pVVar16 = pIVar18->vtable + (*(int *)((long)&pIVar1->offset + lVar20) + 1);
            goto label_04a50a7f;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar15 * 0x10 != lVar20);
      }
      *(undefined8 *)(lVar26 + -8) = 0x4a509d0;
      pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar17,(Il2CppClass *)TypeInfo_System_Collections_ICollection,1);
label_04a50a7f:
      pMVar2 = pVVar16->method;
      pIVar3 = pVVar16->methodPtr;
      *(undefined8 *)(lVar26 + -8) = 0x4a50a88;
      iVar13 = (*pIVar3)(pIVar17,pMVar2);
      if (iVar13 < 2) {
        return false;
      }
      pIVar17 = (Il2CppObject *)(__this->fields).nodes;
      if (pIVar17 != (Il2CppObject *)0x0) {
        pIVar4 = (__this->fields).toVector3;
        pIVar18 = pIVar17->klass;
        uVar15 = (ulong)(pIVar18->_2).interface_offsets_count;
        if (uVar15 != 0) {
          pIVar1 = (pIVar18->_1).interfaceOffsets;
          lVar20 = 0;
          do {
            if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar20) ==
                TypeInfo_System_Collections_IList) {
              pVVar16 = pIVar18->vtable + *(int *)((long)&pIVar1->offset + lVar20);
              goto label_04a50b68;
            }
            lVar20 = lVar20 + 0x10;
          } while (uVar15 * 0x10 != lVar20);
        }
        *(undefined8 *)(lVar26 + -8) = 0x4a50ae9;
        pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar17,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_04a50b68:
        pMVar2 = pVVar16->method;
        pIVar3 = pVVar16->methodPtr;
        *(undefined8 *)(lVar26 + -8) = 0x4a50b73;
        pIVar17 = (*pIVar3)(pIVar17,0,pMVar2);
        pIVar18 = local_50->klass->rgctx_data->_2_T;
        if (((pIVar18->_2).bitflags1 & 1) == 0) {
          *(undefined8 *)(lVar26 + -8) = 0x4a50b9a;
          pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
        }
        *(undefined8 *)(lVar26 + -8) = 0x4a50ba8;
        puVar19 = (undefined8 *)il2cpp_runtime_helper_030d6290(pIVar17,pIVar18,lVar27);
        if (pIVar4 != (Interpolate_ToVector3_T__o *)0x0) {
          pIVar5 = local_50->klass->rgctx_data;
          pMVar2 = pIVar5->_3_Interpolate_ToVector3_T__Invoke;
          pIVar3 = pMVar2->methodPointer;
          if (-1 < (int)(pIVar5->_2_T->_1).byval_arg.bits) {
            puVar19 = (undefined8 *)*puVar19;
          }
          pIVar6 = pMVar2->invoker_method;
          local_38 = puVar19;
          *(undefined8 *)(lVar26 + -8) = 0x4a50be6;
          (*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
          fVar28 = (float)local_48;
          fVar29 = (float)((ulong)local_48 >> 0x20);
          iVar13 = 1;
label_04a510e0:
          (__this->fields).__2__current.fields.x = fVar28;
          (__this->fields).__2__current.fields.y = fVar29;
          (__this->fields).__2__current.fields.z = local_40;
          (__this->fields).__1__state = iVar13;
          return true;
        }
      }
    }
    goto label_04a510fd;
  }
  return false;
  while (lVar20 = lVar20 + 0x10, uVar21 * 0x10 != lVar20) {
label_04a50cd0:
    if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar20) ==
        TypeInfo_System_Collections_IList) {
      pVVar16 = pIVar18->vtable + *(int *)((long)&pIVar1->offset + lVar20);
      goto label_04a50d01;
    }
  }
label_04a50cdf:
  *(undefined8 *)(lVar26 + -8) = 0x4a50ce9;
  pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar17,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_04a50d01:
  pMVar2 = pVVar16->method;
  pIVar3 = pVVar16->methodPtr;
  *(undefined8 *)(lVar26 + -8) = 0x4a50d0d;
  pIVar17 = (*pIVar3)(pIVar17,iVar13,pMVar2);
  pIVar18 = local_50->klass->rgctx_data->_2_T;
  if (((pIVar18->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)(lVar26 + -8) = 0x4a50d34;
    pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
  }
  lVar20 = local_a8[2];
  *(undefined8 *)(lVar26 + -8) = 0x4a50d46;
  puVar19 = (undefined8 *)il2cpp_runtime_helper_030d6290(pIVar17,pIVar18,lVar20);
  if (pIVar4 != (Interpolate_ToVector3_T__o *)0x0) {
    pIVar5 = local_50->klass->rgctx_data;
    pMVar2 = pIVar5->_3_Interpolate_ToVector3_T__Invoke;
    pIVar3 = pMVar2->methodPointer;
    if (-1 < (int)(pIVar5->_2_T->_1).byval_arg.bits) {
      puVar19 = (undefined8 *)*puVar19;
    }
    pIVar6 = pMVar2->invoker_method;
    local_38 = puVar19;
    *(undefined8 *)(lVar26 + -8) = 0x4a50d85;
    (*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
    pIVar17 = (Il2CppObject *)(__this->fields).nodes;
    if (pIVar17 != (Il2CppObject *)0x0) {
      local_a8[2] = local_48;
      uStack_90 = 0;
      local_5c = local_40;
      pIVar4 = (__this->fields).toVector3;
      iVar13 = (__this->fields)._start_5__5;
      pIVar18 = pIVar17->klass;
      uVar21 = (ulong)(pIVar18->_2).interface_offsets_count;
      if (uVar21 != 0) {
        pIVar1 = (pIVar18->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar20) ==
              TypeInfo_System_Collections_IList) {
            pVVar16 = pIVar18->vtable + *(int *)((long)&pIVar1->offset + lVar20);
            goto label_04a50e11;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar21 * 0x10 != lVar20);
      }
      *(undefined8 *)(lVar26 + -8) = 0x4a50df9;
      pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar17,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_04a50e11:
      pMVar2 = pVVar16->method;
      pIVar3 = pVVar16->methodPtr;
      *(undefined8 *)(lVar26 + -8) = 0x4a50e1d;
      pIVar17 = (*pIVar3)(pIVar17,iVar13,pMVar2);
      pMVar11 = local_50;
      pIVar18 = local_50->klass->rgctx_data->_2_T;
      if (((pIVar18->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)(lVar26 + -8) = 0x4a50e44;
        pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
      }
      *(undefined8 *)(lVar26 + -8) = 0x4a50e52;
      puVar19 = (undefined8 *)il2cpp_runtime_helper_030d6290(pIVar17,pIVar18,lVar27 - uVar15);
      if (pIVar4 != (Interpolate_ToVector3_T__o *)0x0) {
        pIVar5 = pMVar11->klass->rgctx_data;
        pMVar2 = pIVar5->_3_Interpolate_ToVector3_T__Invoke;
        pIVar3 = pMVar2->methodPointer;
        if (-1 < (int)(pIVar5->_2_T->_1).byval_arg.bits) {
          puVar19 = (undefined8 *)*puVar19;
        }
        pIVar6 = pMVar2->invoker_method;
        local_38 = puVar19;
        *(undefined8 *)(lVar26 + -8) = 0x4a50e8c;
        (*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
        pIVar17 = (Il2CppObject *)(__this->fields).nodes;
        if (pIVar17 != (Il2CppObject *)0x0) {
          local_a8[0] = local_48;
          local_a8[1] = 0;
          local_58 = local_40;
          pIVar4 = (__this->fields).toVector3;
          iVar13 = (__this->fields)._end_5__6;
          pIVar18 = pIVar17->klass;
          uVar15 = (ulong)(pIVar18->_2).interface_offsets_count;
          if (uVar15 != 0) {
            pIVar1 = (pIVar18->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar20) ==
                  TypeInfo_System_Collections_IList) {
                pVVar16 = pIVar18->vtable + *(int *)((long)&pIVar1->offset + lVar20);
                goto label_04a50f11;
              }
              lVar20 = lVar20 + 0x10;
            } while (uVar15 * 0x10 != lVar20);
          }
          *(undefined8 *)(lVar26 + -8) = 0x4a50ef9;
          pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar17,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_04a50f11:
          pMVar2 = pVVar16->method;
          pIVar3 = pVVar16->methodPtr;
          *(undefined8 *)(lVar26 + -8) = 0x4a50f1d;
          pIVar17 = (*pIVar3)(pIVar17,iVar13,pMVar2);
          pIVar18 = pMVar11->klass->rgctx_data->_2_T;
          if (((pIVar18->_2).bitflags1 & 1) == 0) {
            *(undefined8 *)(lVar26 + -8) = 0x4a50f40;
            pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
          }
          lVar20 = local_78;
          *(undefined8 *)(lVar26 + -8) = 0x4a50f4f;
          puVar19 = (undefined8 *)il2cpp_runtime_helper_030d6290(pIVar17,pIVar18,lVar20);
          if (pIVar4 != (Interpolate_ToVector3_T__o *)0x0) {
            pIVar5 = pMVar11->klass->rgctx_data;
            pMVar2 = pIVar5->_3_Interpolate_ToVector3_T__Invoke;
            pIVar3 = pMVar2->methodPointer;
            if (-1 < (int)(pIVar5->_2_T->_1).byval_arg.bits) {
              puVar19 = (undefined8 *)*puVar19;
            }
            pIVar6 = pMVar2->invoker_method;
            local_38 = puVar19;
            *(undefined8 *)(lVar26 + -8) = 0x4a50f89;
            (*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
            pIVar17 = (Il2CppObject *)(__this->fields).nodes;
            if (pIVar17 != (Il2CppObject *)0x0) {
              local_78 = local_48;
              uStack_70 = 0;
              local_54 = local_40;
              pIVar4 = (__this->fields).toVector3;
              iVar13 = (__this->fields)._next_5__7;
              pIVar18 = pIVar17->klass;
              uVar15 = (ulong)(pIVar18->_2).interface_offsets_count;
              if (uVar15 != 0) {
                pIVar1 = (pIVar18->_1).interfaceOffsets;
                lVar20 = 0;
                do {
                  if (*(System_Collections_IList_c **)((long)&pIVar1->interfaceType + lVar20) ==
                      TypeInfo_System_Collections_IList) {
                    pVVar16 = pIVar18->vtable + *(int *)((long)&pIVar1->offset + lVar20);
                    goto label_04a51011;
                  }
                  lVar20 = lVar20 + 0x10;
                } while (uVar15 * 0x10 != lVar20);
              }
              *(undefined8 *)(lVar26 + -8) = 0x4a50ff9;
              pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar17,(Il2CppClass *)TypeInfo_System_Collections_IList,0);
label_04a51011:
              pMVar2 = pVVar16->method;
              pIVar3 = pVVar16->methodPtr;
              *(undefined8 *)(lVar26 + -8) = 0x4a5101d;
              pIVar17 = (*pIVar3)(pIVar17,iVar13,pMVar2);
              pIVar18 = pMVar11->klass->rgctx_data->_2_T;
              if (((pIVar18->_2).bitflags1 & 1) == 0) {
                *(undefined8 *)(lVar26 + -8) = 0x4a51040;
                pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
              }
              lVar20 = local_80;
              *(undefined8 *)(lVar26 + -8) = 0x4a5104f;
              puVar19 = (undefined8 *)il2cpp_runtime_helper_030d6290(pIVar17,pIVar18,lVar20);
              if (pIVar4 != (Interpolate_ToVector3_T__o *)0x0) {
                pIVar5 = pMVar11->klass->rgctx_data;
                pMVar2 = pIVar5->_3_Interpolate_ToVector3_T__Invoke;
                pIVar3 = pMVar2->methodPointer;
                if (-1 < (int)(pIVar5->_2_T->_1).byval_arg.bits) {
                  puVar19 = (undefined8 *)*puVar19;
                }
                pIVar6 = pMVar2->invoker_method;
                local_38 = puVar19;
                *(undefined8 *)(lVar26 + -8) = 0x4a51089;
                (*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
                iVar14 = (__this->fields)._step_5__9;
                UVar30.fields.z = local_40;
                UVar30.fields.x = (float)(undefined4)local_48;
                UVar30.fields.y = (float)local_48._4_4_;
                *(float *)(lVar26 + -8) = (float)(__this->fields)._stepCount_5__8;
                *(float *)(lVar26 + -0x10) = (float)iVar14;
                fVar10 = local_54;
                fVar29 = local_58;
                fVar28 = local_5c;
                lVar8 = local_78;
                lVar25 = local_a8[2];
                lVar20 = local_a8[0];
                *(undefined8 *)(lVar26 + -0x18) = 0x4a510d7;
                lVar9 = local_78;
                lVar7 = local_a8[2];
                lVar27 = local_a8[0];
                previous.fields.z = fVar28;
                local_a8[2]._0_4_ = (undefined4)lVar25;
                local_a8[2]._4_4_ = SUB84(lVar25,4);
                previous.fields.x = (float)(undefined4)local_a8[2];
                previous.fields.y = (float)local_a8[2]._4_4_;
                start.fields.z = fVar29;
                local_a8[0]._0_4_ = (undefined4)lVar20;
                local_a8[0]._4_4_ = SUB84(lVar20,4);
                start.fields.x = (float)(undefined4)local_a8[0];
                start.fields.y = (float)local_a8[0]._4_4_;
                end.fields.z = fVar10;
                local_78._0_4_ = (undefined4)lVar8;
                local_78._4_4_ = SUB84(lVar8,4);
                end.fields.x = (float)(undefined4)local_78;
                end.fields.y = (float)local_78._4_4_;
                local_a8[0] = lVar27;
                local_a8[2] = lVar7;
                local_78 = lVar9;
                UVar30 = Interpolate__CatmullRom
                                   (previous,start,end,UVar30,*(float *)(lVar26 + -0x10),
                                    *(float *)(lVar26 + -8),(MethodInfo *)0x0);
                local_40 = UVar30.fields.z;
                fVar28 = UVar30.fields.x;
                fVar29 = UVar30.fields.y;
                iVar13 = 2;
                goto label_04a510e0;
              }
            }
          }
        }
      }
    }
  }
label_04a510fd:
  *(undefined8 *)(lVar26 + -8) = 0x4a51102;
  ThrowNullReferenceException();
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_465ED50* method);
// 0x475ed50

UnityEngine_Vector3_o
Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_465ED50 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_4950720* method);
// 0x4a50720

UnityEngine_Vector3_o
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_4950720 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current
// il2cpp: UnityEngine_Vector3_o Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_4951110* method);
// 0x4a51110

UnityEngine_Vector3_o
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_4951110 *method)

{
  return (UnityEngine_Vector3_o)(__this->fields).__2__current.fields;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_Reset (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_465ED60* method);
// 0x475ed60

void Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_Reset
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_465ED60 *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_Reset (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_4950730* method);
// 0x4a50730

void Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_Reset
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_4950730 *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_4951120* method);
// 0x4a51120

void Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset
               (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_4951120 *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,(MethodInfo *)method);
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_465EDA0* method);
// 0x475eda0

Il2CppObject *
Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerator_get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_465EDA0 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_07541076 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07541076 = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_4950770* method);
// 0x4a50770

Il2CppObject *
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerator_get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_4950770 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_0754162c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0754162c = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_4951160* method);
// 0x4a51160

Il2CppObject *
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_4951160 *method)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  float local_10;
  
  if (Il2CppMethodInitialized_0754162e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0754162e = '\x01';
  }
  local_10 = (__this->fields).__2__current.fields.z;
  local_18._0_4_ = (__this->fields).__2__current.fields.x;
  local_18._4_4_ = (__this->fields).__2__current.fields.y;
  pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_465EDF0* method);
// 0x475edf0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_465EDF0 *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_0475ee5e;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_0475ee5e:
  (__this_00->fields).nodes = (__this->fields).__3__nodes;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes);
  (__this_00->fields).toVector3 = (__this->fields).__3__toVector3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3);
  (__this_00->fields).slices = (__this->fields).__3__slices;
  (__this_00->fields).loop = (__this->fields).__3__loop;
  return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_49507C0* method);
// 0x4a507c0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_49507C0 *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *__this_00;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_04a5082e;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_04a5082e:
  (__this_00->fields).nodes = (__this->fields).__3__nodes;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).nodes);
  (__this_00->fields).toVector3 = (__this->fields).__3__toVector3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).toVector3);
  (__this_00->fields).slices = (__this->fields).__3__slices;
  (__this_00->fields).loop = (__this->fields).__3__loop;
  return (System_Collections_Generic_IEnumerator_Vector3__o *)__this_00;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_Vector3__o* Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_49511B0* method);
// 0x4a511b0

System_Collections_Generic_IEnumerator_Vector3__o *
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_49511B0 *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *pIVar3;
  
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      pIVar3 = __this;
      goto label_04a5121f;
    }
  }
  klass = method->klass->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar3 = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  (*method->klass->rgctx_data->_4_Interpolate__NewCatmullRom_d__20_T___ctor->methodPointer)(pIVar3,0);
  if (pIVar3 == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    ThrowNullReferenceException();
  }
label_04a5121f:
  (pIVar3->fields).nodes = (__this->fields).__3__nodes;
  Il2CppCodeGenWriteBarrier(&(pIVar3->fields).nodes);
  (pIVar3->fields).toVector3 = (__this->fields).__3__toVector3;
  Il2CppCodeGenWriteBarrier(&(pIVar3->fields).toVector3);
  (pIVar3->fields).slices = (__this->fields).__3__slices;
  (pIVar3->fields).loop = (__this->fields).__3__loop;
  return (System_Collections_Generic_IEnumerator_Vector3__o *)pIVar3;
}


// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_465EEA0* method);
// 0x475eea0

System_Collections_IEnumerator_o *
Interpolate__NewCatmullRom_d__20_object___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_465EEA0 *method)

{
  System_Collections_Generic_IEnumerator_Vector3__o *pSVar1;
  
  pSVar1 = Interpolate__NewCatmullRom_d__20_object___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
                     (__this,(MethodInfo_465EDF0 *)
                             method->klass->rgctx_data->
                             _5_Interpolate__NewCatmullRom_d__20_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
                     );
  return (System_Collections_IEnumerator_o *)pSVar1;
}


// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_4950870* method);
// 0x4a50870

System_Collections_IEnumerator_o *
Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_4950870 *method)

{
  System_Collections_Generic_IEnumerator_Vector3__o *pSVar1;
  
  pSVar1 = Interpolate__NewCatmullRom_d__20_Vector3___System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
                     (__this,(MethodInfo_49507C0 *)
                             method->klass->rgctx_data->
                             _5_Interpolate__NewCatmullRom_d__20_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator
                     );
  return (System_Collections_IEnumerator_o *)pSVar1;
}


// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCatmullRom_d__20_T__o* __this, const MethodInfo_4951260* method);
// 0x4a51260

System_Collections_IEnumerator_o *
Interpolate__NewCatmullRom_d__20___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCatmullRom_d__20_T__o *__this,MethodInfo_4951260 *method)

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
// 0x58495f0

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
// 0x584af30

void Interpolate__NewCounter_d__6__System_IDisposable_Dispose
               (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  return;
}


// Interpolate.<NewCounter>d__6$$MoveNext
// il2cpp: bool Interpolate__NewCounter_d__6__MoveNext (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x584af40

bool Interpolate__NewCounter_d__6__MoveNext(Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields).step + (__this->fields)._i_5__2;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 <= (__this->fields).end) {
label_0584af5e:
      (__this->fields).__2__current = (float)iVar1;
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields).start;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 <= (__this->fields).end) goto label_0584af5e;
  }
  return false;
}


// Interpolate.<NewCounter>d__6$$System.Collections.Generic.IEnumerator<System.Single>.get_Current
// il2cpp: float Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerator_System_Single__get_Current (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x584af90

float Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerator_System_Single__get_Current
                (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewCounter>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewCounter_d__6__System_Collections_IEnumerator_Reset (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x584afa0

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
// 0x584afe0

Il2CppObject *
Interpolate__NewCounter_d__6__System_Collections_IEnumerator_get_Current
          (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// Interpolate.<NewCounter>d__6$$System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_float__o* Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x584b010

System_Collections_Generic_IEnumerator_float__o *
Interpolate__NewCounter_d__6__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator
          (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewCounter_d__6_o *__this_00;
  
  if (Il2CppMethodInitialized_07545024 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_07545024 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_0584b083;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_0584b083:
  (__this_00->fields).start = (__this->fields).__3__start;
  (__this_00->fields).end = (__this->fields).__3__end;
  (__this_00->fields).step = (__this->fields).__3__step;
  return (System_Collections_Generic_IEnumerator_float__o *)__this_00;
}


// Interpolate.<NewCounter>d__6$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewCounter_d__6__System_Collections_IEnumerable_GetEnumerator (Interpolate__NewCounter_d__6_o* __this, const MethodInfo* method);
// 0x584b0b0

System_Collections_IEnumerator_o *
Interpolate__NewCounter_d__6__System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewCounter_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewCounter_d__6_o *__this_00;
  
  if (Il2CppMethodInitialized_07545024 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_07545024 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_0584b123;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_0584b123:
  (__this_00->fields).start = (__this->fields).__3__start;
  (__this_00->fields).end = (__this->fields).__3__end;
  (__this_00->fields).step = (__this->fields).__3__step;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Interpolate.<NewEase>d__9$$.ctor
// il2cpp: void Interpolate__NewEase_d__9___ctor (Interpolate__NewEase_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5849940

void Interpolate__NewEase_d__9___ctor
               (Interpolate__NewEase_d__9_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Interpolate.<NewEase>d__9$$System.IDisposable.Dispose
// il2cpp: void Interpolate__NewEase_d__9__System_IDisposable_Dispose (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x584b150

void Interpolate__NewEase_d__9__System_IDisposable_Dispose
               (Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_07545026 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07545026 = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (Il2CppObject *)(__this->fields).__7__wrap2;
    if (obj != (Il2CppObject *)0x0) {
      pIVar2 = obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_0584b1ef;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0584b1ef:
      (*pVVar4->methodPtr)(obj,pVVar4->method);
      return;
    }
  }
  return;
}


// Interpolate.<NewEase>d__9$$MoveNext
// il2cpp: bool Interpolate__NewEase_d__9__MoveNext (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x584b200
// eh: try 0x584b2df..0x584b5f0 -> pad 0x584b5fc (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x584b618..0x584b61d -> pad 0x584b63e cleanup
// eh: try 0x584b641..0x584b64b -> pad 0x584b653 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584b2ce: nop 
// asm:   0x584b35e: nop 
// asm:   0x584b5f0: jmp 0x584b600
// asm:   0x584b5f2: jmp 0x584b600
// asm:   0x584b5f4: jmp 0x584b600
// asm:   0x584b5f6: jmp 0x584b600
// asm:   0x584b5f8: jmp 0x584b600
// asm:   0x584b5fa: jmp 0x584b600
// asm:   0x584b5fc: jmp 0x584b600
// asm:   0x584b5fe: jmp 0x584b600
// asm:   0x584b600: mov rbx, rax
// asm:   0x584b603: cmp edx, 1
// asm:   0x584b606: jne 0x584b641
// asm:   0x584b608: mov rdi, rbx
// asm:   0x584b60b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x584b610: mov rbx, qword ptr [rax]
// asm:   0x584b613: mov qword ptr [rsp + 0x40], rbx
// asm:   0x584b618: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x584b61d: test rbx, rbx
// asm:   0x584b620: jne 0x584b62c
// asm:   0x584b62c: mov rdi, qword ptr [rsp + 8]
// asm:   0x584b631: call 0x2fce9f0  ; il2cpp_runtime_helper_02fce9f0()
// asm:   0x584b636: mov rdi, rbx
// asm:   0x584b639: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x584b63e: mov rbx, rax
// asm:   0x584b641: lea rdi, [rsp + 0x40]
// asm:   0x584b646: call 0x2fce3c0  ; il2cpp_runtime_helper_02fce3c0()
// asm:   0x584b64b: mov rdi, rbx
// asm:   0x584b64e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x584b653: mov rdi, rax
// asm:   0x584b656: call 0x2ab61e0  ; __clang_call_terminate()

bool Interpolate__NewEase_d__9__MoveNext(Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  Il2CppClass *pIVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Interpolate_Function_o *pIVar10;
  Interpolate__NewEase_d__9_o *pIVar11;
  bool bVar12;
  VirtualInvokeData *pVVar13;
  Il2CppObject *pIVar14;
  ulong uVar15;
  long lVar16;
  Interpolate__NewEase_d__9_o *local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  Interpolate__NewEase_d__9_o **local_30;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_70 = __this;
  if (Il2CppMethodInitialized_07545025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07545025 = '\x01';
  }
  local_38 = 0;
  local_30 = &local_70;
  iVar7 = (__this->fields).__1__state;
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    uVar3 = (__this->fields).end.fields.x;
    uVar5 = (__this->fields).end.fields.y;
    fVar1 = (__this->fields).end.fields.z;
    uVar4 = (__this->fields).start.fields.x;
    uVar6 = (__this->fields).start.fields.y;
    fVar2 = (__this->fields).start.fields.z;
    (__this->fields)._distance_5__2.fields.x = (float)uVar3 - (float)uVar4;
    (__this->fields)._distance_5__2.fields.y = (float)uVar5 - (float)uVar6;
    (__this->fields)._distance_5__2.fields.z = fVar1 - fVar2;
    pIVar14 = (Il2CppObject *)(__this->fields).driver;
    if (pIVar14 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar8 = pIVar14->klass;
    uVar15 = (ulong)(pIVar8->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar9 = (pIVar8->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_float__c **)((long)&pIVar9->interfaceType + lVar16) ==
            TypeInfo_System_Collections_Generic_IEnumerable_float) {
          pVVar13 = pIVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
          goto label_0584b301;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar15 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_float,0);
label_0584b301:
    pIVar14 = (*pVVar13->methodPtr)(pIVar14,pVVar13->method);
    (local_70->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)pIVar14;
    Il2CppCodeGenWriteBarrier(&(local_70->fields).__7__wrap2);
    __this = local_70;
  }
  (__this->fields).__1__state = -3;
  pIVar14 = (Il2CppObject *)(__this->fields).__7__wrap2;
  if (pIVar14 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar8 = pIVar14->klass;
  uVar15 = (ulong)(pIVar8->_2).interface_offsets_count;
  if (uVar15 != 0) {
    pIVar9 = (pIVar8->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(System_Collections_IEnumerator_c **)((long)&pIVar9->interfaceType + lVar16) ==
          TypeInfo_System_Collections_IEnumerator) {
        pVVar13 = pIVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
        goto label_0584b391;
      }
      lVar16 = lVar16 + 0x10;
    } while (uVar15 * 0x10 != lVar16);
  }
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0584b391:
  bVar12 = (*pVVar13->methodPtr)(pIVar14,pVVar13->method);
  pIVar11 = local_70;
  if (bVar12) {
    pIVar14 = (Il2CppObject *)(local_70->fields).__7__wrap2;
    if (pIVar14 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar8 = pIVar14->klass;
    uVar15 = (ulong)(pIVar8->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar9 = (pIVar8->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_float__c **)((long)&pIVar9->interfaceType + lVar16) ==
            TypeInfo_System_Collections_Generic_IEnumerator_float) {
          pVVar13 = pIVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
          goto label_0584b494;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar15 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_float,0);
label_0584b494:
    local_68 = (*pVVar13->methodPtr)(pIVar14,pVVar13->method);
    pIVar10 = (local_70->fields).ease;
    if (pIVar10 == (Interpolate_Function_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_58._0_4_ = (local_70->fields).start.fields.x;
    local_58._4_4_ = (local_70->fields).start.fields.y;
    local_5c = (local_70->fields).start.fields.z;
    local_18._0_4_ = (local_70->fields)._distance_5__2.fields.x;
    local_18._4_4_ = (local_70->fields)._distance_5__2.fields.y;
    local_60 = (local_70->fields)._distance_5__2.fields.z;
    local_64 = (local_70->fields).total;
    uStack_50 = 0;
    uStack_10 = 0;
    local_28 = (*(code *)(pIVar10->fields).invoke_impl)
                         ((undefined4)local_58,(pIVar10->fields).method_code,(pIVar10->fields).method);
    local_58 = (*(code *)(pIVar10->fields).invoke_impl)
                         (local_58._4_4_,local_18._4_4_,local_68,local_64,(pIVar10->fields).method_code,
                          (pIVar10->fields).method);
    local_40 = (*(code *)(pIVar10->fields).invoke_impl)
                         (local_5c,local_60,local_68,local_64,(pIVar10->fields).method_code,
                          (pIVar10->fields).method);
    local_48 = CONCAT44((undefined4)local_58,(undefined4)local_28);
    pIVar14 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_48);
    (local_70->fields).__2__current = pIVar14;
    Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
    (local_70->fields).__1__state = 1;
    bVar12 = true;
  }
  else {
    if (Il2CppMethodInitialized_07545026 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07545026 = '\x01';
    }
    (pIVar11->fields).__1__state = -1;
    pIVar14 = (Il2CppObject *)(pIVar11->fields).__7__wrap2;
    if (pIVar14 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar14->klass;
      uVar15 = (ulong)(pIVar8->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar9 = (pIVar8->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_System_IDisposable
             ) {
            pVVar13 = pIVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
            goto label_0584b5b7;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar15 * 0x10 != lVar16);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar14,(Il2CppClass *)TypeInfo_System_IDisposable,0)
      ;
label_0584b5b7:
      (*pVVar13->methodPtr)(pIVar14,pVVar13->method);
    }
    (local_70->fields).__7__wrap2 = (System_Collections_Generic_IEnumerator_float__o *)0x0;
    bVar12 = false;
    Il2CppCodeGenWriteBarrier(&(local_70->fields).__7__wrap2);
  }
  return bVar12;
}


// Interpolate.<NewEase>d__9$$<>m__Finally1
// il2cpp: void Interpolate__NewEase_d__9____m__Finally1 (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x584b660

void Interpolate__NewEase_d__9____m__Finally1(Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07545026 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07545026 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (Il2CppObject *)(__this->fields).__7__wrap2;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar1 = obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_0584b6ef;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0584b6ef:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// Interpolate.<NewEase>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Interpolate__NewEase_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x584b700

Il2CppObject *
Interpolate__NewEase_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewEase>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewEase_d__9__System_Collections_IEnumerator_Reset (Interpolate__NewEase_d__9_o* __this, const MethodInfo* method);
// 0x584b710

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
// 0x584b750

Il2CppObject *
Interpolate__NewEase_d__9__System_Collections_IEnumerator_get_Current
          (Interpolate__NewEase_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewTimer>d__3$$.ctor
// il2cpp: void Interpolate__NewTimer_d__3___ctor (Interpolate__NewTimer_d__3_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5849540

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
// 0x584b760

void Interpolate__NewTimer_d__3__System_IDisposable_Dispose
               (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  return;
}


// Interpolate.<NewTimer>d__3$$MoveNext
// il2cpp: bool Interpolate__NewTimer_d__3__MoveNext (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x584b770

bool Interpolate__NewTimer_d__3__MoveNext(Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  int32_t iVar3;
  float fVar4;
  
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    fVar4 = (__this->fields)._elapsedTime_5__2;
  }
  else if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    fVar1 = (__this->fields)._elapsedTime_5__2;
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 + fVar1;
    (__this->fields)._elapsedTime_5__2 = fVar4;
    iVar3 = 2;
    if ((__this->fields).duration <= fVar4) goto label_0584b7e8;
  }
  else {
    if (iVar2 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._elapsedTime_5__2 = 0.0;
    fVar4 = 0.0;
  }
  iVar3 = 1;
  if ((__this->fields).duration <= fVar4) {
    return false;
  }
label_0584b7e8:
  (__this->fields).__2__current = fVar4;
  (__this->fields).__1__state = iVar3;
  return true;
}


// Interpolate.<NewTimer>d__3$$System.Collections.Generic.IEnumerator<System.Single>.get_Current
// il2cpp: float Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerator_System_Single__get_Current (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x584b800

float Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerator_System_Single__get_Current
                (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Interpolate.<NewTimer>d__3$$System.Collections.IEnumerator.Reset
// il2cpp: void Interpolate__NewTimer_d__3__System_Collections_IEnumerator_Reset (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x584b810

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
// 0x584b850

Il2CppObject *
Interpolate__NewTimer_d__3__System_Collections_IEnumerator_get_Current
          (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// Interpolate.<NewTimer>d__3$$System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_float__o* Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x584b880

System_Collections_Generic_IEnumerator_float__o *
Interpolate__NewTimer_d__3__System_Collections_Generic_IEnumerable_System_Single__GetEnumerator
          (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewTimer_d__3_o *__this_00;
  
  if (Il2CppMethodInitialized_07545027 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_07545027 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_0584b8f3;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_0584b8f3:
  (__this_00->fields).duration = (__this->fields).__3__duration;
  return (System_Collections_Generic_IEnumerator_float__o *)__this_00;
}


// Interpolate.<NewTimer>d__3$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewTimer_d__3__System_Collections_IEnumerable_GetEnumerator (Interpolate__NewTimer_d__3_o* __this, const MethodInfo* method);
// 0x584b910

System_Collections_IEnumerator_o *
Interpolate__NewTimer_d__3__System_Collections_IEnumerable_GetEnumerator
          (Interpolate__NewTimer_d__3_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Interpolate__NewTimer_d__3_o *__this_00;
  
  if (Il2CppMethodInitialized_07545027 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_07545027 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_0584b983;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_0584b983:
  (__this_00->fields).duration = (__this->fields).__3__duration;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Interpolate$$Identity
// il2cpp: UnityEngine_Vector3_o Interpolate__Identity (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x58494a0

UnityEngine_Vector3_o Interpolate__Identity(UnityEngine_Vector3_o v,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)v.fields;
}


// Interpolate$$TransformDotPosition
// il2cpp: UnityEngine_Vector3_o Interpolate__TransformDotPosition (UnityEngine_Transform_o* t, const MethodInfo* method);
// 0x58494b0

UnityEngine_Vector3_o Interpolate__TransformDotPosition(UnityEngine_Transform_o *t,MethodInfo *method)

{
  UnityEngine_Vector3_Fields UVar1;
  
  if (t == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(t,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// Interpolate$$NewTimer
// il2cpp: System_Collections_Generic_IEnumerable_float__o* Interpolate__NewTimer (float duration, const MethodInfo* method);
// 0x58494d0

System_Collections_Generic_IEnumerable_float__o * Interpolate__NewTimer(float duration,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewTimer_d__3_o *__this;
  
  if (Il2CppMethodInitialized_0754501a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_0754501a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__duration = duration;
  return (System_Collections_Generic_IEnumerable_float__o *)__this;
}


// Interpolate$$NewCounter
// il2cpp: System_Collections_Generic_IEnumerable_float__o* Interpolate__NewCounter (int32_t start, int32_t end, int32_t step, const MethodInfo* method);
// 0x5849570

System_Collections_Generic_IEnumerable_float__o *
Interpolate__NewCounter(int32_t start,int32_t end,int32_t step,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewCounter_d__6_o *__this;
  
  if (Il2CppMethodInitialized_0754501b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_0754501b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__start = start;
  (__this->fields).__3__end = end;
  (__this->fields).__3__step = step;
  return (System_Collections_Generic_IEnumerable_float__o *)__this;
}


// Interpolate$$NewEase
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewEase (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, float duration, const MethodInfo* method);
// 0x5849620

System_Collections_IEnumerator_o *
Interpolate__NewEase
          (Interpolate_Function_o *ease,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,float duration,
          MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewTimer_d__3_o *__this;
  Interpolate__NewEase_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_0754501a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_0754501a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__duration = duration;
  if (Il2CppMethodInitialized_0754501c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewEase_d__9);
    Il2CppMethodInitialized_0754501c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewEase_d__9);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).ease = ease;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease);
  (__this_00->fields).start.fields.x = start.fields.x;
  (__this_00->fields).start.fields.y = start.fields.y;
  (__this_00->fields).start.fields.z = start.fields.z;
  (__this_00->fields).end.fields.x = end.fields.x;
  (__this_00->fields).end.fields.y = end.fields.y;
  (__this_00->fields).end.fields.z = end.fields.z;
  (__this_00->fields).total = duration;
  (__this_00->fields).driver = (System_Collections_Generic_IEnumerable_float__o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).driver);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Interpolate$$NewEase
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewEase (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, int32_t slices, const MethodInfo* method);
// 0x5849810

System_Collections_IEnumerator_o *
Interpolate__NewEase_5749810
          (Interpolate_Function_o *ease,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,int32_t slices,
          MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewCounter_d__6_o *__this;
  Interpolate__NewEase_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_0754501b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_0754501b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__start = 0;
  (__this->fields).__3__end = slices + 1;
  (__this->fields).__3__step = 1;
  if (Il2CppMethodInitialized_0754501c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewEase_d__9);
    Il2CppMethodInitialized_0754501c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewEase_d__9);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).ease = ease;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).ease);
  (__this_00->fields).start.fields.x = start.fields.x;
  (__this_00->fields).start.fields.y = start.fields.y;
  (__this_00->fields).start.fields.z = start.fields.z;
  (__this_00->fields).end.fields.x = end.fields.x;
  (__this_00->fields).end.fields.y = end.fields.y;
  (__this_00->fields).end.fields.z = end.fields.z;
  (__this_00->fields).total = (float)(slices + 1);
  (__this_00->fields).driver = (System_Collections_Generic_IEnumerable_float__o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).driver);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Interpolate$$NewEase
// il2cpp: System_Collections_IEnumerator_o* Interpolate__NewEase (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, float total, System_Collections_Generic_IEnumerable_float__o* driver, const MethodInfo* method);
// 0x5849740

System_Collections_IEnumerator_o *
Interpolate__NewEase_5749740
          (Interpolate_Function_o *ease,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,float total,
          System_Collections_Generic_IEnumerable_float__o *driver,MethodInfo *method)

{
  Interpolate__NewEase_d__9_o *__this;
  
  if (Il2CppMethodInitialized_0754501c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewEase_d__9);
    Il2CppMethodInitialized_0754501c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewEase_d__9);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).ease = ease;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ease);
  (__this->fields).start.fields.x = start.fields.x;
  (__this->fields).start.fields.y = start.fields.y;
  (__this->fields).start.fields.z = start.fields.z;
  (__this->fields).end.fields.x = end.fields.x;
  (__this->fields).end.fields.y = end.fields.y;
  (__this->fields).end.fields.z = end.fields.z;
  (__this->fields).total = total;
  (__this->fields).driver = driver;
  Il2CppCodeGenWriteBarrier(&(__this->fields).driver);
  return (System_Collections_IEnumerator_o *)__this;
}


// Interpolate$$Ease
// il2cpp: UnityEngine_Vector3_o Interpolate__Ease (Interpolate_Function_o* ease, UnityEngine_Vector3_o start, UnityEngine_Vector3_o distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x5849960

UnityEngine_Vector3_o
Interpolate__Ease(Interpolate_Function_o *ease,UnityEngine_Vector3_o start,UnityEngine_Vector3_o distance,
                 float elapsedTime,float duration,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  float fStack_34;
  float fStack_24;
  
  if (ease == (Interpolate_Function_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar3.fields.x =
       (*(code *)(ease->fields).invoke_impl)
                 (start.fields.x,distance.fields.x,elapsedTime,duration,(ease->fields).method_code,
                  (ease->fields).method);
  fStack_24 = start.fields.y;
  fStack_34 = distance.fields.y;
  uVar1 = (*(code *)(ease->fields).invoke_impl)
                    (fStack_24,fStack_34,elapsedTime,duration,(ease->fields).method_code,(ease->fields).method
                    );
  fVar2 = (float)(*(code *)(ease->fields).invoke_impl)
                           (start.fields.z,distance.fields.z,elapsedTime,duration,(ease->fields).method_code,
                            (ease->fields).method);
  UVar3.fields.y = (float)uVar1;
  UVar3.fields.z = fVar2;
  return (UnityEngine_Vector3_o)UVar3.fields;
}


// Interpolate$$Ease
// il2cpp: Interpolate_Function_o* Interpolate__Ease (int32_t type, const MethodInfo* method);
// 0x5849a20

Interpolate_Function_o * Interpolate__Ease_5749a20(int32_t type,MethodInfo *method)

{
  uint8_t uVar1;
  MethodInfo *pMVar2;
  char cVar3;
  Interpolate_Function_o *pIVar4;
  MethodInfo **ppMVar5;
  undefined1 *puVar6;
  Il2CppObject *ex;
  
  if (Il2CppMethodInitialized_0754501d == '\0') {
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
    Il2CppMethodInitialized_0754501d = '\x01';
  }
  switch(type) {
  case 0:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_Linear;
    break;
  case 1:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInQuad;
    break;
  case 2:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseOutQuad;
    break;
  case 3:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInOutQuad;
    break;
  case 4:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInCubic;
    break;
  case 5:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseOutCubic;
    break;
  case 6:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInOutCubic;
    break;
  case 7:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInQuart;
    break;
  case 8:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseOutQuart;
    break;
  case 9:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInOutQuart;
    break;
  case 10:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInQuint;
    break;
  case 0xb:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseOutQuint;
    break;
  case 0xc:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInOutQuint;
    break;
  case 0xd:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInSine;
    break;
  case 0xe:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseOutSine;
    break;
  case 0xf:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInOutSine;
    break;
  case 0x10:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInExpo;
    break;
  case 0x11:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseOutExpo;
    break;
  case 0x12:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInOutExpo;
    break;
  case 0x13:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInCirc;
    break;
  case 0x14:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseOutCirc;
    break;
  case 0x15:
    pIVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_Function);
    ppMVar5 = &MethodInfo_Interpolate_EaseInOutCirc;
    break;
  default:
    return (Interpolate_Function_o *)0x0;
  }
  pMVar2 = *ppMVar5;
  (pIVar4->fields).method_ptr = (intptr_t)pMVar2->virtualMethodPointer;
  (pIVar4->fields).method = (intptr_t)pMVar2;
  (pIVar4->fields).m_target = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(pIVar4->fields).m_target);
  uVar1 = pMVar2->parameters_count;
  (pIVar4->fields).method_code = (intptr_t)pIVar4;
  cVar3 = il2cpp_runtime_helper_030d61c0();
  if (cVar3 == '\0') {
    ex = il2cpp_codegen_get_argument_exception
                   ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
    il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
  }
  if (uVar1 == 4) {
    puVar6 = &label_02fce3a0;
  }
  else {
    puVar6 = (undefined1 *)(pIVar4->fields).method_ptr;
    (pIVar4->fields).method_code = (intptr_t)(pIVar4->fields).m_target;
  }
  (pIVar4->fields).invoke_impl = (intptr_t)puVar6;
  (pIVar4->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02fce310;
  return pIVar4;
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Transform_array* nodes, float duration, const MethodInfo* method);
// 0x5849f10

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier
          (Interpolate_Function_o *ease,UnityEngine_Transform_array *nodes,float duration,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewTimer_d__3_o *__this;
  Interpolate_ToVector3_T__o *__this_00;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar2;
  
  if (Il2CppMethodInitialized_0754501e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewBezier_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_TransformDotPosition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Transform);
    Il2CppMethodInitialized_0754501e = '\x01';
  }
  if (Il2CppMethodInitialized_0754501a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_0754501a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__duration = duration;
  __this_00 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Transform);
  Interpolate_ToVector3_object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Interpolate_TransformDotPosition,
             (MethodInfo_4266310 *)0x0);
  pSVar2 = Interpolate__NewBezier_object_
                     (ease,(System_Collections_IList_o *)nodes,__this_00,duration,
                      (System_Collections_Generic_IEnumerable_float__o *)__this,
                      (MethodInfo_356A500 *)MethodInfo_Interpolate_NewBezier_Transform);
  return pSVar2;
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Transform_array* nodes, int32_t slices, const MethodInfo* method);
// 0x584a000

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_574a000
          (Interpolate_Function_o *ease,UnityEngine_Transform_array *nodes,int32_t slices,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewCounter_d__6_o *__this;
  Interpolate_ToVector3_T__o *__this_00;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar2;
  
  if (Il2CppMethodInitialized_0754501f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewBezier_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_TransformDotPosition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Transform);
    Il2CppMethodInitialized_0754501f = '\x01';
  }
  if (Il2CppMethodInitialized_0754501b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_0754501b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__start = 0;
  (__this->fields).__3__end = slices + 1;
  (__this->fields).__3__step = 1;
  __this_00 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Transform);
  Interpolate_ToVector3_object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Interpolate_TransformDotPosition,
             (MethodInfo_4266310 *)0x0);
  pSVar2 = Interpolate__NewBezier_object_
                     (ease,(System_Collections_IList_o *)nodes,__this_00,(float)(slices + 1),
                      (System_Collections_Generic_IEnumerable_float__o *)__this,
                      (MethodInfo_356A500 *)MethodInfo_Interpolate_NewBezier_Transform);
  return pSVar2;
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Vector3_array* points, float duration, const MethodInfo* method);
// 0x584a100

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_574a100
          (Interpolate_Function_o *ease,UnityEngine_Vector3_array *points,float duration,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewTimer_d__3_o *__this;
  Interpolate_ToVector3_T__o *toVector3;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar2;
  
  if (Il2CppMethodInitialized_07545020 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_Identity);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewBezier_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Vector3);
    Il2CppMethodInitialized_07545020 = '\x01';
  }
  if (Il2CppMethodInitialized_0754501a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewTimer_d__3);
    Il2CppMethodInitialized_0754501a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewTimer_d__3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__duration = duration;
  toVector3 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Vector3);
  Interpolate_ToVector3_Vector3____ctor
            ((Interpolate_ToVector3_Vector3__o *)toVector3,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Interpolate_Identity,(MethodInfo_4266490 *)0x0);
  pSVar2 = Interpolate__NewBezier_Vector3_
                     (ease,(System_Collections_IList_o *)points,toVector3,duration,
                      (System_Collections_Generic_IEnumerable_float__o *)__this,
                      (MethodInfo_356A5F0 *)MethodInfo_Interpolate_NewBezier_Vector3);
  return pSVar2;
}


// Interpolate$$NewBezier
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier (Interpolate_Function_o* ease, UnityEngine_Vector3_array* points, int32_t slices, const MethodInfo* method);
// 0x584a1f0

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_574a1f0
          (Interpolate_Function_o *ease,UnityEngine_Vector3_array *points,int32_t slices,MethodInfo *method)

{
  int32_t iVar1;
  Interpolate__NewCounter_d__6_o *__this;
  Interpolate_ToVector3_T__o *toVector3;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar2;
  
  if (Il2CppMethodInitialized_07545021 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_Identity);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewBezier_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Vector3);
    Il2CppMethodInitialized_07545021 = '\x01';
  }
  if (Il2CppMethodInitialized_0754501b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_NewCounter_d__6);
    Il2CppMethodInitialized_0754501b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_NewCounter_d__6);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__start = 0;
  (__this->fields).__3__end = slices + 1;
  (__this->fields).__3__step = 1;
  toVector3 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Vector3);
  Interpolate_ToVector3_Vector3____ctor
            ((Interpolate_ToVector3_Vector3__o *)toVector3,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Interpolate_Identity,(MethodInfo_4266490 *)0x0);
  pSVar2 = Interpolate__NewBezier_Vector3_
                     (ease,(System_Collections_IList_o *)points,toVector3,(float)(slices + 1),
                      (System_Collections_Generic_IEnumerable_float__o *)__this,
                      (MethodInfo_356A5F0 *)MethodInfo_Interpolate_NewBezier_Vector3);
  return pSVar2;
}


// Interpolate$$NewBezier<object>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier_object_ (Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, const MethodInfo_356A500* method);
// 0x366a500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x366a5e3: jmp 0x366a541

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_object_
          (Interpolate_Function_o *ease,System_Collections_IList_o *nodes,
          Interpolate_ToVector3_T__o *toVector3,float maxStep,
          System_Collections_Generic_IEnumerable_float__o *steps,MethodInfo_356A500 *method)

{
  byte bVar1;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *__this;
  
  if (method->rgctx_data == (MethodInfo_356A500_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    klass = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  else {
    klass = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  Interpolate__NewBezier_d__16_object____ctor
            (__this,-2,(MethodInfo_465C8C0 *)method->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (__this == (Interpolate__NewBezier_d__16_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).__3__ease = ease;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__ease);
  (__this->fields).__3__nodes = nodes;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__nodes);
  (__this->fields).__3__toVector3 = toVector3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__toVector3);
  (__this->fields).__3__maxStep = maxStep;
  (__this->fields).__3__steps = steps;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__steps);
  return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
}


// Interpolate$$NewBezier<Vector3>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier_Vector3_ (Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, const MethodInfo_356A5F0* method);
// 0x366a5f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x366a6d3: jmp 0x366a631

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier_Vector3_
          (Interpolate_Function_o *ease,System_Collections_IList_o *nodes,
          Interpolate_ToVector3_T__o *toVector3,float maxStep,
          System_Collections_Generic_IEnumerable_float__o *steps,MethodInfo_356A5F0 *method)

{
  byte bVar1;
  Il2CppClass *klass;
  Interpolate__NewBezier_d__16_T__o *__this;
  
  if (method->rgctx_data == (MethodInfo_356A5F0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    klass = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  else {
    klass = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this = (Interpolate__NewBezier_d__16_T__o *)il2cpp_codegen_object_new(klass);
  Interpolate__NewBezier_d__16_Vector3____ctor
            (__this,-2,(MethodInfo_465D2B0 *)method->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor);
  if (__this == (Interpolate__NewBezier_d__16_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).__3__ease = ease;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__ease);
  (__this->fields).__3__nodes = nodes;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__nodes);
  (__this->fields).__3__toVector3 = toVector3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__toVector3);
  (__this->fields).__3__maxStep = maxStep;
  (__this->fields).__3__steps = steps;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__steps);
  return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
}


// Interpolate$$NewBezier<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewBezier___Il2CppFullySharedGenericType_ (Interpolate_Function_o* ease, System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, float maxStep, System_Collections_Generic_IEnumerable_float__o* steps, const MethodInfo_356A6E0* method);
// 0x366a6e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x366a7c0: jmp 0x366a721

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewBezier___Il2CppFullySharedGenericType_
          (Interpolate_Function_o *ease,System_Collections_IList_o *nodes,
          Interpolate_ToVector3_T__o *toVector3,float maxStep,
          System_Collections_Generic_IEnumerable_float__o *steps,MethodInfo_356A6E0 *method)

{
  byte bVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_356A6E0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    klass = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  else {
    klass = method->rgctx_data->_0_Interpolate__NewBezier_d__16_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar2 = il2cpp_codegen_object_new(klass);
  (*method->rgctx_data->_1_Interpolate__NewBezier_d__16_T___ctor->methodPointer)(pIVar2,0xfffffffe);
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2[6].klass = (Il2CppClass *)ease;
  Il2CppCodeGenWriteBarrier(&pIVar2[6].klass);
  pIVar2[3].klass = (Il2CppClass *)nodes;
  Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
  pIVar2[5].klass = (Il2CppClass *)toVector3;
  Il2CppCodeGenWriteBarrier(&pIVar2[5].klass);
  *(float *)((long)&pIVar2[6].monitor + 4) = maxStep;
  pIVar2[4].klass = (Il2CppClass *)steps;
  Il2CppCodeGenWriteBarrier(&pIVar2[4].klass);
  return (System_Collections_Generic_IEnumerable_Vector3__o *)pIVar2;
}


// Interpolate$$Bezier
// il2cpp: UnityEngine_Vector3_o Interpolate__Bezier (Interpolate_Function_o* ease, UnityEngine_Vector3_array* points, float elapsedTime, float duration, const MethodInfo* method);
// 0x584a2f0

UnityEngine_Vector3_o
Interpolate__Bezier(Interpolate_Function_o *ease,UnityEngine_Vector3_array *points,float elapsedTime,
                   float duration,MethodInfo *method)

{
  ulong uVar1;
  uint uVar2;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector3_o *pUVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  if (points == (UnityEngine_Vector3_array *)0x0) {
label_0584a460:
    ThrowNullReferenceException();
  }
  uVar1 = points->max_length & 0xffffffff;
  uVar2 = (int)points->max_length - 1;
  if (0 < (int)uVar2) {
    if (ease == (Interpolate_Function_o *)0x0) goto label_0584a460;
    uVar6 = (ulong)uVar2;
    do {
      pUVar3 = points->m_Items;
      uVar4 = 0;
      do {
        if ((uVar1 <= uVar4) || (uVar5 = uVar4 + 1, uVar1 <= uVar5)) goto label_0584a45b;
        fVar7 = (pUVar3->fields).x;
        fVar7 = (float)(*(code *)(ease->fields).invoke_impl)
                                 (fVar7,(*(uint32_t *)((char *)pUVar3 + 0x2c)) - fVar7,elapsedTime,duration,
                                  (ease->fields).method_code,(ease->fields).method,method);
        uVar1 = (ulong)(uint)points->max_length;
        if ((uVar1 <= uVar4) || ((pUVar3->fields).x = fVar7, uVar1 <= uVar5)) goto label_0584a45b;
        fVar7 = (pUVar3->fields).y;
        fVar7 = (float)(*(code *)(ease->fields).invoke_impl)
                                 (fVar7,(*(uint32_t *)((char *)pUVar3 + 0x30)) - fVar7,elapsedTime,duration,
                                  (ease->fields).method_code,(ease->fields).method);
        uVar1 = (ulong)(uint)points->max_length;
        if ((uVar1 <= uVar4) || ((pUVar3->fields).y = fVar7, uVar1 <= uVar5)) goto label_0584a45b;
        fVar7 = (pUVar3->fields).z;
        fVar7 = (float)(*(code *)(ease->fields).invoke_impl)
                                 (fVar7,(*(uint32_t *)((char *)pUVar3 + 0x34)) - fVar7,elapsedTime,duration,
                                  (ease->fields).method_code,(ease->fields).method);
        uVar1 = (ulong)(uint)points->max_length;
        if (uVar1 <= uVar4) goto label_0584a45b;
        (pUVar3->fields).z = fVar7;
        pUVar3 = pUVar3 + 1;
        method = extraout_RDX;
        uVar4 = uVar5;
      } while (uVar5 != uVar6);
      uVar6 = uVar6 - 1;
    } while (0 < (int)uVar6);
  }
  if (uVar1 != 0) {
    return (UnityEngine_Vector3_o)points->m_Items[0].fields;
  }
label_0584a45b:
  ThrowIndexOutOfRangeException();
}


// Interpolate$$NewCatmullRom
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom (UnityEngine_Transform_array* nodes, int32_t slices, bool loop, const MethodInfo* method);
// 0x584a470

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom(UnityEngine_Transform_array *nodes,int32_t slices,bool loop,MethodInfo *method)

{
  Interpolate_ToVector3_T__o *__this;
  System_Collections_Generic_IEnumerable_Vector3__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545022 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewCatmullRom_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_TransformDotPosition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Transform);
    Il2CppMethodInitialized_07545022 = '\x01';
  }
  __this = (Interpolate_ToVector3_T__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Transform);
  Interpolate_ToVector3_object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Interpolate_TransformDotPosition,
             (MethodInfo_4266310 *)0x0);
  pSVar1 = Interpolate__NewCatmullRom_object_
                     ((System_Collections_IList_o *)nodes,__this,slices,loop,
                      (MethodInfo_356A7D0 *)MethodInfo_Interpolate_NewCatmullRom_Transform);
  return pSVar1;
}


// Interpolate$$NewCatmullRom
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom (UnityEngine_Vector3_array* points, int32_t slices, bool loop, const MethodInfo* method);
// 0x584a510
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584a554: lea rax, [rip + 0x1a2902d]  ; TypeInfo_Interpolate_ToVector3_Vector3
// asm:   0x584a55b: mov rdi, qword ptr [rax]
// asm:   0x584a55e: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x584a563: mov rbp, rax
// asm:   0x584a566: lea rax, [rip + 0x1a624b3]  ; MethodInfo_Interpolate_Identity
// asm:   0x584a56d: mov rdx, qword ptr [rax]
// asm:   0x584a570: mov rdi, rbp
// asm:   0x584a573: xor esi, esi
// asm:   0x584a575: xor ecx, ecx
// asm:   0x584a577: call 0x4366490  ; Interpolate_ToVector3_Vector3____ctor()
// asm:   0x584a57c: lea rax, [rip + 0x1a623ed]  ; MethodInfo_Interpolate_NewCatmullRom_Vector3
// asm:   0x584a583: mov r8, qword ptr [rax]
// asm:   0x584a586: movzx ecx, r15b
// asm:   0x584a58a: mov rdi, rbx
// asm:   0x584a58d: mov rsi, rbp
// asm:   0x584a590: mov edx, r14d
// asm:   0x584a593: add rsp, 8
// asm:   0x584a597: pop rbx
// asm:   0x584a598: pop r14
// asm:   0x584a59a: pop r15
// asm:   0x584a59c: pop rbp
// asm:   0x584a59d: jmp 0x366a890  ; Interpolate__NewCatmullRom_Vector3_()

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom_574a510
          (UnityEngine_Vector3_array *points,int32_t slices,bool loop,MethodInfo *method)

{
  byte bVar1;
  MethodInfo *pMVar2;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  Interpolate_ToVector3_T__o *__this_00;
  
  if (Il2CppMethodInitialized_07545023 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_Identity);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Interpolate_NewCatmullRom_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Interpolate_ToVector3_Vector3);
    Il2CppMethodInitialized_07545023 = '\x01';
  }
  __this_00 = (Interpolate_ToVector3_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Interpolate_ToVector3_Vector3);
  Interpolate_ToVector3_Vector3____ctor
            ((Interpolate_ToVector3_Vector3__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Interpolate_Identity,(MethodInfo_4266490 *)0x0);
  pMVar2 = MethodInfo_Interpolate_NewCatmullRom_Vector3;
  if ((MethodInfo_Interpolate_NewCatmullRom_Vector3->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_Interpolate_NewCatmullRom_Vector3);
    klass = ((pMVar2->field7_0x38).rgctx_data)->klass;
    bVar1 = (klass->_2).bitflags1;
  }
  else {
    klass = ((MethodInfo_Interpolate_NewCatmullRom_Vector3->field7_0x38).rgctx_data)->klass;
    bVar1 = (klass->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            (__this,-2,(MethodInfo_494FFA0 *)(pMVar2->field7_0x38).rgctx_data[1].method);
  if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).__3__nodes = (System_Collections_IList_o *)points;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__nodes);
  (__this->fields).__3__toVector3 = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__toVector3);
  (__this->fields).__3__slices = slices;
  (__this->fields).__3__loop = loop;
  return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
}


// Interpolate$$NewCatmullRom<object>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom_object_ (System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, const MethodInfo_356A7D0* method);
// 0x366a7d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x366a87e: jmp 0x366a807

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom_object_
          (System_Collections_IList_o *nodes,Interpolate_ToVector3_T__o *toVector3,int32_t slices,bool loop,
          MethodInfo_356A7D0 *method)

{
  byte bVar1;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  
  if (method->rgctx_data == (MethodInfo_356A7D0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    klass = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  else {
    klass = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  Interpolate__NewCatmullRom_d__20_object____ctor
            (__this,-2,(MethodInfo_465E5F0 *)method->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor)
  ;
  if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).__3__nodes = nodes;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__nodes);
  (__this->fields).__3__toVector3 = toVector3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__toVector3);
  (__this->fields).__3__slices = slices;
  (__this->fields).__3__loop = loop;
  return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
}


// Interpolate$$NewCatmullRom<Vector3>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom_Vector3_ (System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, const MethodInfo_356A890* method);
// 0x366a890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x366a93e: jmp 0x366a8c7

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom_Vector3_
          (System_Collections_IList_o *nodes,Interpolate_ToVector3_T__o *toVector3,int32_t slices,bool loop,
          MethodInfo_356A890 *method)

{
  byte bVar1;
  Il2CppClass *klass;
  Interpolate__NewCatmullRom_d__20_T__o *__this;
  
  if (method->rgctx_data == (MethodInfo_356A890_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    klass = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  else {
    klass = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this = (Interpolate__NewCatmullRom_d__20_T__o *)il2cpp_codegen_object_new(klass);
  Interpolate__NewCatmullRom_d__20_Vector3____ctor
            (__this,-2,(MethodInfo_494FFA0 *)method->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor)
  ;
  if (__this == (Interpolate__NewCatmullRom_d__20_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).__3__nodes = nodes;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__nodes);
  (__this->fields).__3__toVector3 = toVector3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__toVector3);
  (__this->fields).__3__slices = slices;
  (__this->fields).__3__loop = loop;
  return (System_Collections_Generic_IEnumerable_Vector3__o *)__this;
}


// Interpolate$$NewCatmullRom<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_IEnumerable_Vector3__o* Interpolate__NewCatmullRom___Il2CppFullySharedGenericType_ (System_Collections_IList_o* nodes, Interpolate_ToVector3_T__o* toVector3, int32_t slices, bool loop, const MethodInfo_356A950* method);
// 0x366a950
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x366a9fb: jmp 0x366a987

System_Collections_Generic_IEnumerable_Vector3__o *
Interpolate__NewCatmullRom___Il2CppFullySharedGenericType_
          (System_Collections_IList_o *nodes,Interpolate_ToVector3_T__o *toVector3,int32_t slices,bool loop,
          MethodInfo_356A950 *method)

{
  byte bVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_356A950_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    klass = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  else {
    klass = method->rgctx_data->_0_Interpolate__NewCatmullRom_d__20_T_;
    bVar1 = (klass->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar2 = il2cpp_codegen_object_new(klass);
  (*method->rgctx_data->_1_Interpolate__NewCatmullRom_d__20_T___ctor->methodPointer)(pIVar2,0xfffffffe);
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2[3].klass = (Il2CppClass *)nodes;
  Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
  pIVar2[4].klass = (Il2CppClass *)toVector3;
  Il2CppCodeGenWriteBarrier(&pIVar2[4].klass);
  *(int32_t *)&pIVar2[5].klass = slices;
  *(bool *)((long)&pIVar2[4].monitor + 1) = loop;
  return (System_Collections_Generic_IEnumerable_Vector3__o *)pIVar2;
}


// Interpolate$$CatmullRom
// il2cpp: UnityEngine_Vector3_o Interpolate__CatmullRom (UnityEngine_Vector3_o previous, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Vector3_o next, float elapsedTime, float duration, const MethodInfo* method);
// 0x584a5b0

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
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  
  fVar5 = elapsedTime / duration;
  fVar3 = fVar5 * fVar5;
  fVar1 = fVar5 * fVar3 * 0.5;
  fVar2 = (fVar3 - fVar1) - fVar5 * 0.5;
  fVar6 = fVar5 * fVar3 * 1.5;
  fVar4 = fVar3 * -2.5 + fVar6 + 1.0;
  fVar5 = ((fVar3 + fVar3) - fVar6) + fVar5 * 0.5;
  fVar1 = fVar1 - fVar3 * 0.5;
  UVar7.fields.z =
       previous.fields.z * fVar2 + start.fields.z * fVar4 + end.fields.z * fVar5 + next.fields.z * fVar1;
  UVar7.fields.x =
       previous.fields.x * fVar2 + fVar4 * start.fields.x + fVar5 * end.fields.x + fVar1 * next.fields.x;
  UVar7.fields.y =
       previous.fields.y * fVar2 + fVar4 * start.fields.y + fVar5 * end.fields.y + fVar1 * next.fields.y;
  return (UnityEngine_Vector3_o)UVar7.fields;
}


// Interpolate$$Linear
// il2cpp: float Interpolate__Linear (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x584a690

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
// 0x584a6b0

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
// 0x584a6e0

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
// 0x584a710

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
// 0x584a790

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
// 0x584a7c0

float Interpolate__EaseOutCubic
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
  return start + (fVar1 * fVar1 * fVar1 + 1.0) * distance;
}


// Interpolate$$EaseInOutCubic
// il2cpp: float Interpolate__EaseInOutCubic (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x584a800

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
// 0x584a880

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
// 0x584a8b0

float Interpolate__EaseOutQuart
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
  return start - (fVar1 * fVar1 * fVar1 * fVar1 + -1.0) * distance;
}


// Interpolate$$EaseInOutQuart
// il2cpp: float Interpolate__EaseInOutQuart (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x584a8f0

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
// 0x584a970

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
// 0x584a9a0

float Interpolate__EaseOutQuint
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
  return start + (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 1.0) * distance;
}


// Interpolate$$EaseInOutQuint
// il2cpp: float Interpolate__EaseInOutQuint (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x584a9e0

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
// 0x584aa70

float Interpolate__EaseInSine(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = cosf((fVar1 / duration) * 1.5707964);
  return (distance - fVar1 * distance) + start;
}


// Interpolate$$EaseOutSine
// il2cpp: float Interpolate__EaseOutSine (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x584aab0

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
// 0x584aaf0

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
// 0x584ab40

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
// 0x584ab80

float Interpolate__EaseOutExpo(float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = duration;
  if (elapsedTime <= duration) {
    fVar1 = elapsedTime;
  }
  fVar1 = exp2f((fVar1 * -10.0) / duration);
  return (1.0 - fVar1) * distance + start;
}


// Interpolate$$EaseInOutExpo
// il2cpp: float Interpolate__EaseInOutExpo (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x584abc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584ac26: movaps xmm0, xmm2

float Interpolate__EaseInOutExpo
                (float start,float distance,float elapsedTime,float duration,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 2.0;
  if ((elapsedTime <= duration) && (fVar1 = elapsedTime / (duration * 0.5), fVar1 < 1.0)) {
    fVar1 = exp2f((fVar1 + -1.0) * 10.0);
    return distance * 0.5 * fVar1 + start;
  }
  fVar1 = exp2f((fVar1 + -1.0) * -10.0);
  return (2.0 - fVar1) * distance * 0.5 + start;
}


// Interpolate$$EaseInCirc
// il2cpp: float Interpolate__EaseInCirc (float start, float distance, float elapsedTime, float duration, const MethodInfo* method);
// 0x584ac70

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
// 0x584ace0

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
// 0x584ad50

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
      goto label_0584adb1;
    }
  }
  else {
    fVar1 = 2.0;
  }
  fVar1 = (fVar1 + -2.0) * (fVar1 + -2.0);
  fVar3 = 1.0;
  fVar2 = 0.5;
label_0584adb1:
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
// 0x584ae20

void Interpolate___ctor(Interpolate_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


