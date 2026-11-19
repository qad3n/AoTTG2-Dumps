// Type: Events.OnPreLoadScene
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Events/OnPreLoadScene.cs
// Prior real C# source: none
// --------------------------------

// Events.OnPreLoadScene$$.ctor
// il2cpp: void Events_OnPreLoadScene___ctor (Events_OnPreLoadScene_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x5dd9ad0

void Events_OnPreLoadScene___ctor
               (Events_OnPreLoadScene_o *__this,Il2CppObject *object,intptr_t method,MethodInfo *methodInfo)

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
    (__this->fields).invoke_impl = (intptr_t)&label_02fde8e0;
    goto label_05dd9b36;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_05dd9b36:
  (__this->fields).extra_arg = (intptr_t)&label_02fde890;
  return;
}


// Events.OnPreLoadScene$$Invoke
// il2cpp: void Events_OnPreLoadScene__Invoke (Events_OnPreLoadScene_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x5dd9b70

void Events_OnPreLoadScene__Invoke(Events_OnPreLoadScene_o *__this,int32_t sceneName,MethodInfo *method)

{
  code *vtableDispatch;
  
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  (*vtableDispatch)
            ((__this->fields).method_code,sceneName,(__this->fields).method,vtableDispatch);
  return;
}


// Events.OnPreLoadScene$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Events_OnPreLoadScene__BeginInvoke (Events_OnPreLoadScene_o* __this, int32_t sceneName, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x5dd9b90

System_IAsyncResult_o *
Events_OnPreLoadScene__BeginInvoke
          (Events_OnPreLoadScene_o *__this,int32_t sceneName,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  int32_t local_2c;
  Il2CppObject *local_28;
  undefined8 uStack_20;
  
  local_2c = sceneName;
  if (Il2CppMethodInitialized_07548240 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneName);
    Il2CppMethodInitialized_07548240 = '\x01';
  }
  local_28 = (Il2CppObject *)0x0;
  uStack_20 = 0;
  local_28 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_ApplicationManagers_SceneName,&local_2c);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&local_28,callback,object);
  return pSVar1;
}


// Events.OnPreLoadScene$$EndInvoke
// il2cpp: void Events_OnPreLoadScene__EndInvoke (Events_OnPreLoadScene_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x5dd9c00

void Events_OnPreLoadScene__EndInvoke
               (Events_OnPreLoadScene_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  il2cpp_runtime_helper_03159300(result,0);
  return;
}


