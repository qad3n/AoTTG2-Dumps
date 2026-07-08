// Type: Gisketch.Aottg2UI.Building.GisketchComponentFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchComponentFactory.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x3af8ff0

void Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor(void)

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
    if (cVar1 == '\x03') {
      *(undefined1 **)(in_RDI + 0x18) = &LAB_0205e5c0;
      goto LAB_03af9068;
    }
    if (in_RSI == 0) {
      uVar3 = il2cpp_glue_022dc730(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar3,0);
    }
  }
  else if (cVar1 == '\x04') {
    *(undefined1 **)(in_RDI + 0x18) = &LAB_0205e5f0;
    goto LAB_03af9068;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
LAB_03af9068:
  *(undefined1 **)(in_RDI + 0x38) = &LAB_0205e550;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$Invoke
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__Invoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b07440

bool_conflict
Gisketch_Aottg2UI_Building_GisketchComponentFactory__Invoke
          (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,
          UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool_conflict bVar1;
  bVar1 = (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Gisketch_Aottg2UI_Building_GisketchComponentFactory__BeginInvoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x3b07460

System_IAsyncResult_o *
Gisketch_Aottg2UI_Building_GisketchComponentFactory__BeginInvoke
          (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,
          UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  UnityEngine_GameObject_o *local_28;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_20;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *local_18;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_28 = go;
  local_20 = node;
  local_18 = context;
  local_10 = view;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_glue_022fd810(__this,&local_28,callback,object);
  return pSVar1;
}


// Gisketch.Aottg2UI.Building.GisketchComponentFactory$$EndInvoke
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentFactory__EndInvoke (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x3b074a0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchComponentFactory__EndInvoke
          (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this,
          System_IAsyncResult_o *result,MethodInfo *method)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = il2cpp_glue_022fda50(result,0);
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)il2cpp_glue_022c7330(lVar1);
    return CONCAT31((int3)((ulong)puVar2 >> 8),*puVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


