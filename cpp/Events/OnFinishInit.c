// Type: Events.OnFinishInit
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Events/OnFinishInit.cs
// Prior real C# source: none
// --------------------------------

// Events.OnFinishInit$$.ctor
// il2cpp: void Events_OnFinishInit___ctor (Events_OnFinishInit_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x5dd9d50

void Events_OnFinishInit___ctor
               (Events_OnFinishInit_o *__this,Il2CppObject *object,intptr_t method,MethodInfo *methodInfo)

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
  else if (cVar1 == '\0') {
    (__this->fields).invoke_impl = (intptr_t)&label_02fde9b0;
    goto label_05dd9db5;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_05dd9db5:
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02fde970;
  return;
}


// Events.OnFinishInit$$Invoke
// il2cpp: void Events_OnFinishInit__Invoke (Events_OnFinishInit_o* __this, const MethodInfo* method);
// 0x5dd9df0

void Events_OnFinishInit__Invoke(Events_OnFinishInit_o *__this,MethodInfo *method)

{
  code *vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  (*vtableDispatch)((__this->fields).method_code,(__this->fields).method,in_RDX,vtableDispatch);
  return;
}


// Events.OnFinishInit$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Events_OnFinishInit__BeginInvoke (Events_OnFinishInit_o* __this, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x5dd9e10

System_IAsyncResult_o *
Events_OnFinishInit__BeginInvoke
          (Events_OnFinishInit_o *__this,System_AsyncCallback_o *callback,Il2CppObject *object,
          MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&uStack_8,callback,object);
  return pSVar1;
}


// Events.OnFinishInit$$EndInvoke
// il2cpp: void Events_OnFinishInit__EndInvoke (Events_OnFinishInit_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x5dd9e30

void Events_OnFinishInit__EndInvoke
               (Events_OnFinishInit_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  il2cpp_runtime_helper_03159300(result,0);
  return;
}


