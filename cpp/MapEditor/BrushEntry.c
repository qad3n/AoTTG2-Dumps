// Type: MapEditor.BrushEntry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/BrushEntry.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.BrushEntry$$.ctor
// il2cpp: void MapEditor_BrushEntry___ctor (MapEditor_BrushEntry_o* __this, const MethodInfo* method);
// 0x5c7f9f0

void MapEditor_BrushEntry___ctor(MapEditor_BrushEntry_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  UnityEngine_Vector2_c *pUVar2;
  
  if (Il2CppMethodInitialized_075479a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/None");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_075479a0 = '\x01';
  }
  (__this->fields).Weight = 1.0;
  (__this->fields).ScaleMin = 1.0;
  (__this->fields).ScaleMax = 1.0;
  (__this->fields).YawMax = 360.0;
  (__this->fields).ScaleXMin = 1.0;
  (__this->fields).ScaleXMax = 1.0;
  (__this->fields).ScaleYMin = 1.0;
  (__this->fields).ScaleYMax = 1.0;
  (__this->fields).ScaleZMin = 1.0;
  (__this->fields).ScaleZMax = 1.0;
  (__this->fields).RotYMax = 360.0;
  (__this->fields).Active = true;
  (__this->fields).Static = true;
  (__this->fields).Visible = true;
  if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
  }
  (__this->fields).CollideMode = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CollideMode);
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  (__this->fields).CollideWith = TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CollideWith);
  (__this->fields).PhysicsMaterial = "Default";
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhysicsMaterial);
  if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
  }
  (__this->fields).Shader = TypeInfo_Map_MapObjectShader->static_fields->Default;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shader);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(pUVar1,(MethodInfo *)0x0);
  (__this->fields).Color = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(pUVar1,(MethodInfo *)0x0);
  (__this->fields).ReflectColor = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ReflectColor);
  (__this->fields).Texture = "Misc/None";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Texture);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector2;
  (__this->fields).Tiling.fields = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
    pUVar2 = TypeInfo_UnityEngine_Vector2;
  }
  (__this->fields).Offset.fields = (pUVar2->static_fields->zeroVector).fields;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


