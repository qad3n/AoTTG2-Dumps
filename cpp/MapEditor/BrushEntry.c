// Type: MapEditor.BrushEntry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/BrushEntry.cs
// Prior source: NEW in this update
// --------------------------------

// MapEditor.BrushEntry$$.ctor
// il2cpp: void MapEditor_BrushEntry___ctor (MapEditor_BrushEntry_o* __this, const MethodInfo* method);
// 0x403e330

void MapEditor_BrushEntry___ctor(MapEditor_BrushEntry_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  long lVar2;
  
  if (DAT_057043c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&"Misc/None");
    il2cpp_init_method_metadata(&"Default");
    DAT_057043c5 = '\x01';
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
  *(undefined2 *)&(__this->fields).Active = 0x101;
  *(undefined1 *)((long)&(__this->fields).Active + 2) = 1;
  if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(undefined8 *)&(__this->fields).Visible = **(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).Visible);
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_init_class();
  }
  (__this->fields).CollideMode = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
  il2cpp_runtime_glue(&(__this->fields).CollideMode);
  (__this->fields).CollideWith = "Default";
  il2cpp_runtime_glue(&(__this->fields).CollideWith);
  if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  (__this->fields).PhysicsMaterial = (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).PhysicsMaterial);
  pUVar1 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).Shader = (System_String_o *)pUVar1;
  il2cpp_runtime_glue(&(__this->fields).Shader);
  pUVar1 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).Color = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).Color,pUVar1);
  (__this->fields).ReflectColor = "Misc/None";
  il2cpp_runtime_glue(&(__this->fields).ReflectColor);
  if (DAT_0570136e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570136e = '\x01';
  }
  lVar2 = TypeInfo_Vector2;
  (__this->fields).Texture = *(System_String_o **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
    lVar2 = TypeInfo_Vector2;
  }
  (__this->fields).Tiling.fields = **(UnityEngine_Vector2_Fields **)(lVar2 + 0xb8);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


