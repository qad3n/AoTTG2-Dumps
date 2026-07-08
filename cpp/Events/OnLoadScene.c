// Type: Events.OnLoadScene
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Events/OnLoadScene.cs
// Prior source: NEW in this update
// --------------------------------

// Events.OnLoadScene$$.ctor
// il2cpp: void Events_OnLoadScene___ctor (Events_OnLoadScene_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x414ca10

void Events_OnLoadScene___ctor(void)

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
    *(undefined1 **)(in_RDI + 0x18) = &LAB_021e0d20;
    goto LAB_0414ca75;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
LAB_0414ca75:
  *(undefined1 **)(in_RDI + 0x38) = &LAB_021e0cd0;
  return;
}


// Events.OnLoadScene$$Invoke
// il2cpp: void Events_OnLoadScene__Invoke (Events_OnLoadScene_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x414cab0

void Events_OnLoadScene__Invoke(Events_OnLoadScene_o *__this,int32_t sceneName,MethodInfo *method)

{
  code *vtable_dispatch;
  
  vtable_dispatch = (code *)(__this->fields).invoke_impl;
  (*vtable_dispatch)
            ((__this->fields).method_code,sceneName,(__this->fields).method,vtable_dispatch);
  return;
}


// Events.OnLoadScene$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Events_OnLoadScene__BeginInvoke (Events_OnLoadScene_o* __this, int32_t sceneName, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x414cad0

System_IAsyncResult_o *
Events_OnLoadScene__BeginInvoke
          (Events_OnLoadScene_o *__this,int32_t sceneName,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  int32_t local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_2c = sceneName;
  if (DAT_057049c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneName);
    DAT_057049c2 = '\x01';
  }
  local_28 = 0;
  uStack_20 = 0;
  local_28 = il2cpp_runtime_glue(TypeInfo_SceneName,&local_2c);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_glue_022fd810(__this,&local_28,callback,object);
  return pSVar1;
}


// Events.OnLoadScene$$EndInvoke
// il2cpp: void Events_OnLoadScene__EndInvoke (Events_OnLoadScene_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x414cb40

void Events_OnLoadScene__EndInvoke
               (Events_OnLoadScene_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  il2cpp_glue_022fda50(result,0);
  return;
}


