// Type: Gisketch.Aottg2UI.Actions.GisketchActionContext
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchActionContext.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchActionContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this, System_String_o* elementId, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b9d200

void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this,System_String_o *elementId,
               UnityEngine_GameObject_o *gameObject,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               MethodInfo *method)

{
  elementId->klass = (System_String_c *)gameObject;
  il2cpp_runtime_helper_022b4080();
  elementId->monitor = node;
  il2cpp_runtime_helper_022b4080(&elementId->monitor,node);
  elementId->fields = (System_String_Fields)method;
  il2cpp_runtime_helper_022b4080(&elementId->fields,method);
  *(undefined4 *)&elementId[1].klass = 0;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchActionContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this, System_String_o* elementId, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, int32_t inputSource, const MethodInfo* method);
// 0x3b9d250

void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this,System_String_o *elementId,
               UnityEngine_GameObject_o *gameObject,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               int32_t inputSource,MethodInfo *method)

{
  System_String_Fields SVar1;
  undefined4 in_register_0000000c;
  
  SVar1._4_4_ = in_register_0000000c;
  SVar1._stringLength = inputSource;
  elementId->klass = (System_String_c *)gameObject;
  il2cpp_runtime_helper_022b4080();
  elementId->monitor = node;
  il2cpp_runtime_helper_022b4080(&elementId->monitor,node);
  elementId->fields = SVar1;
  il2cpp_runtime_helper_022b4080(&elementId->fields,SVar1);
  *(int *)&elementId[1].klass = (int)method;
  return;
}


