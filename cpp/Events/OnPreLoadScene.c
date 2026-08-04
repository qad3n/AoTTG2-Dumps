// Type: Events.OnPreLoadScene
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Events/OnPreLoadScene.cs
// Prior real C# source: none
// --------------------------------

// Events.OnPreLoadScene$$.ctor
// il2cpp: void Events_OnPreLoadScene___ctor (Events_OnPreLoadScene_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x447f8e0

void Events_OnPreLoadScene___ctor(void)

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
  cVar1 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar2 = il2cpp_runtime_helper_022b2a80();
  if (cVar2 == '\0') {
    if (in_RSI == 0) {
      lVar3 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_runtime_helper_022b2b10(lVar3,0);
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      return;
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined1 **)(in_RDI + 0x18) = &label_02235430;
    goto label_0447f945;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
label_0447f945:
  *(undefined1 **)(in_RDI + 0x38) = &label_022353e0;
  return;
}


// Events.OnPreLoadScene$$Invoke
// il2cpp: void Events_OnPreLoadScene__Invoke (Events_OnPreLoadScene_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x447f980

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
// 0x447f9a0

System_IAsyncResult_o *
Events_OnPreLoadScene__BeginInvoke
          (Events_OnPreLoadScene_o *__this,int32_t sceneName,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  int32_t local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_2c = sceneName;
  if (g_data_057ae887 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneName);
    g_data_057ae887 = '\x01';
  }
  local_28 = 0;
  uStack_20 = 0;
  local_28 = il2cpp_runtime_helper_02304f30(TypeInfo_SceneName,&local_2c);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&local_28,callback,object);
  return pSVar1;
}


// Events.OnPreLoadScene$$EndInvoke
// il2cpp: void Events_OnPreLoadScene__EndInvoke (Events_OnPreLoadScene_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x447fa10

void Events_OnPreLoadScene__EndInvoke
               (Events_OnPreLoadScene_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  il2cpp_runtime_helper_0233bb60(result,0);
  return;
}


