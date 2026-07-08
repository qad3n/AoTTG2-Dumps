// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSurfaceMaterialOwner.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x3acdc00

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  (__this->fields)._material = material;
  il2cpp_runtime_glue(&(__this->fields)._material);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__OnDestroy (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, const MethodInfo* method);
// 0x3acdc10

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__OnDestroy
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570134d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570134d = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar2 == '\0') {
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner___ctor (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, const MethodInfo* method);
// 0x3acdcd0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner___ctor
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


