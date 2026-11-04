// Type: Events.OnPreLoadScene
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Events/OnPreLoadScene.cs
// Prior real C# source: none
// --------------------------------

// Events.OnPreLoadScene$$.ctor
// il2cpp: void Events_OnPreLoadScene___ctor (Events_OnPreLoadScene_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x1805288c0

void
Events_OnPreLoadScene___ctor(Events_OnPreLoadScene_o* __this, Il2CppObject* object, intptr_t method, MethodInfo* method)

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
  else if (cVar1 == '\x01') {
    puVar3 = &label_180001f70;
    goto label_18052891f;
  }
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
  puVar3 = (undefined1 *)(__this->fields).method_ptr;
label_18052891f:
  (__this->fields).invoke_impl = (intptr_t)puVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_180001f20;
  return;
}


// Events.OnPreLoadScene$$Invoke
// il2cpp: void Events_OnPreLoadScene__Invoke (Events_OnPreLoadScene_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x1805288b0

void
Events_OnPreLoadScene__Invoke(Events_OnPreLoadScene_o* __this, int32_t sceneName, MethodInfo* method)

{
  (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code,source,(__this->fields).method);
  return;
}


// Events.OnPreLoadScene$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Events_OnPreLoadScene__BeginInvoke (Events_OnPreLoadScene_o* __this, int32_t sceneName, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x18233a9f0

System_IAsyncResult_o *
Events_OnPreLoadScene__BeginInvoke
          (Events_OnPreLoadScene_o *__this,int32_t sceneName,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  int32_t local_res10 [2];
  Il2CppObject *local_18;
  undefined8 uStack_10;
  
  local_res10[0] = sceneName;
  if (Il2CppMethodInitialized_1843477a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneName);
    Il2CppMethodInitialized_1843477a8 = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  uStack_10 = 0;
  local_18 = il2cpp_value_box((Il2CppClass *)TypeInfo_ApplicationManagers_SceneName,local_res10);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,&local_18,callback,object);
  return pSVar1;
}


// Events.OnPreLoadScene$$EndInvoke
// il2cpp: void Events_OnPreLoadScene__EndInvoke (Events_OnPreLoadScene_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x180528780

void
Events_OnPreLoadScene__EndInvoke(Events_OnPreLoadScene_o* __this, System_IAsyncResult_o* result, MethodInfo* method)

{
  il2cpp_runtime_helper_18042b2c0(result,0);
  return;
}


