// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSurfaceMaterialOwner.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup(Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, UnityEngine_Material_o* material, MethodInfo* method)

{
  (__this->fields)._material = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._material,value);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__OnDestroy (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, const MethodInfo* method);
// 0x18188add0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__OnDestroy
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341f13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f13 = '\x01';
  }
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar1 = (__this->fields)._material;
    if (!bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner___ctor (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner___ctor(Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


