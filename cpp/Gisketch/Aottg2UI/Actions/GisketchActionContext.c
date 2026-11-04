// Type: Gisketch.Aottg2UI.Actions.GisketchActionContext
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchActionContext.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchActionContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this, System_String_o* elementId, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x18190ba00

void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__this,System_String_o *elementId,
               UnityEngine_GameObject_o *gameObject,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               MethodInfo *method)

{
  (__this->fields).ElementId = elementId;
  Il2CppCodeGenWriteBarrier((void **)__this,elementId);
  (__this->fields).GameObject = gameObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameObject,gameObject);
  (__this->fields).Node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Node,node);
  (__this->fields).InputSource = 0;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchActionContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this, System_String_o* elementId, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, int32_t inputSource, const MethodInfo* method);
// 0x18190b9a0

void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_190b9a0
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__this,System_String_o *elementId,
               UnityEngine_GameObject_o *gameObject,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               int32_t inputSource,MethodInfo *method)

{
  (__this->fields).ElementId = elementId;
  Il2CppCodeGenWriteBarrier((void **)__this,elementId);
  (__this->fields).GameObject = gameObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameObject,gameObject);
  (__this->fields).Node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Node,node);
  (__this->fields).InputSource = inputSource;
  return;
}


