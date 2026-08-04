// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSurfaceMaterialOwner.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x3b36e00

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  (__this->fields)._material = material;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._material);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__OnDestroy (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, const MethodInfo* method);
// 0x3b36e10

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__OnDestroy
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057a9c65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c65 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar2 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner___ctor (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, const MethodInfo* method);
// 0x3b36ed0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner___ctor
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


