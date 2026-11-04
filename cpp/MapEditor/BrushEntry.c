// Type: MapEditor.BrushEntry
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/BrushEntry.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.BrushEntry$$.ctor
// il2cpp: void MapEditor_BrushEntry___ctor (MapEditor_BrushEntry_o* __this, const MethodInfo* method);
// 0x1820b5940

void MapEditor_BrushEntry___ctor(MapEditor_BrushEntry_o *__this,MethodInfo *method)

{
  float fVar1;
  System_String_o *pSVar2;
  Utility_Color255_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843469a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/None");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_1843469a3 = '\x01';
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
  pSVar2 = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
  (__this->fields).CollideMode = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CollideMode,pSVar2);
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  pSVar2 = TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
  (__this->fields).CollideWith = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CollideWith,pSVar2);
  (__this->fields).PhysicsMaterial = "Default";
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhysicsMaterial,"Default");
  if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
  }
  pSVar2 = TypeInfo_Map_MapObjectShader->static_fields->Default;
  (__this->fields).Shader = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shader,pSVar2);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(pUVar3,(MethodInfo *)0x0);
  (__this->fields).Color = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color,pUVar3);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(pUVar3,(MethodInfo *)0x0);
  (__this->fields).ReflectColor = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ReflectColor,pUVar3);
  (__this->fields).Texture = "Misc/None";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Texture,"Misc/None");
  if (Il2CppMethodInitialized_184341f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f36 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.x;
  (__this->fields).Tiling.fields.y = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.y;
  (__this->fields).Tiling.fields.x = fVar1;
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
  (__this->fields).Offset.fields.y = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  (__this->fields).Offset.fields.x = fVar1;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


