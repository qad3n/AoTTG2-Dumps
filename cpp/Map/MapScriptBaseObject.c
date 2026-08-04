// Type: Map.MapScriptBaseObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptBaseObject.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptBaseObject.cs
// --------------------------------

// Map.MapScriptBaseObject$$SetPosition
// il2cpp: void Map_MapScriptBaseObject__SetPosition (Map_MapScriptBaseObject_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x40b4c10

void Map_MapScriptBaseObject__SetPosition
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  *(float *)&(__this->fields).Name = position.fields.x;
  *(float *)((long)&(__this->fields).Name + 4) = position.fields.y;
  (__this->fields).PositionX = position.fields.z;
  return;
}


// Map.MapScriptBaseObject$$SetScale
// il2cpp: void Map_MapScriptBaseObject__SetScale (Map_MapScriptBaseObject_o* __this, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x40b4bf0

void Map_MapScriptBaseObject__SetScale
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Vector3_o scale,MethodInfo *method)

{
  (__this->fields).RotationY = scale.fields.x;
  (__this->fields).RotationZ = scale.fields.y;
  (__this->fields).ScaleX = scale.fields.z;
  return;
}


// Map.MapScriptBaseObject$$SetRotation
// il2cpp: void Map_MapScriptBaseObject__SetRotation (Map_MapScriptBaseObject_o* __this, UnityEngine_Vector3_o rotation, const MethodInfo* method);
// 0x40b5c90

void Map_MapScriptBaseObject__SetRotation
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Vector3_o rotation,MethodInfo *method)

{
  (__this->fields).PositionY = rotation.fields.x;
  (__this->fields).PositionZ = rotation.fields.y;
  (__this->fields).RotationX = rotation.fields.z;
  return;
}


// Map.MapScriptBaseObject$$SetRotation
// il2cpp: void Map_MapScriptBaseObject__SetRotation (Map_MapScriptBaseObject_o* __this, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x40b4ce0

void Map_MapScriptBaseObject__SetRotation_3fb4ce0
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o euler;
  
  UVar1 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar1.fields.x * 57.29578;
  euler.fields.y = UVar1.fields.y * 57.29578;
  euler.fields.z = UVar1.fields.z * 57.29578;
  UVar1 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  (__this->fields).PositionY = UVar1.fields.x;
  (__this->fields).PositionZ = UVar1.fields.y;
  (__this->fields).RotationX = UVar1.fields.z;
  return;
}


// Map.MapScriptBaseObject$$GetPosition
// il2cpp: UnityEngine_Vector3_o Map_MapScriptBaseObject__GetPosition (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x40b5cb0

UnityEngine_Vector3_o
Map_MapScriptBaseObject__GetPosition(Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(__this->fields).Name;
}


// Map.MapScriptBaseObject$$GetRotation
// il2cpp: UnityEngine_Vector3_o Map_MapScriptBaseObject__GetRotation (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x40b5cc0

UnityEngine_Vector3_o
Map_MapScriptBaseObject__GetRotation(Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields.x = (__this->fields).PositionY;
  UVar1.fields.y = (__this->fields).PositionZ;
  UVar1.fields.z = (__this->fields).RotationX;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Map.MapScriptBaseObject$$GetScale
// il2cpp: UnityEngine_Vector3_o Map_MapScriptBaseObject__GetScale (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x40b5cd0

UnityEngine_Vector3_o Map_MapScriptBaseObject__GetScale(Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields.x = (__this->fields).RotationY;
  UVar1.fields.y = (__this->fields).RotationZ;
  UVar1.fields.z = (__this->fields).ScaleX;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Map.MapScriptBaseObject$$.ctor
// il2cpp: void Map_MapScriptBaseObject___ctor (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x40b5ce0

void Map_MapScriptBaseObject___ctor(Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  if (g_data_057ac4e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Unnamed");
    g_data_057ac4e4 = '\x01';
  }
  (__this->fields).Asset = "None";
  il2cpp_runtime_helper_022b4080(&(__this->fields).Asset);
  *(undefined2 *)&(__this->fields).Active = 0x101;
  *(undefined1 *)((long)&(__this->fields).Active + 2) = 1;
  uVar1 = "Unnamed"._4_4_;
  (__this->fields).Visible = (undefined4)"Unnamed";
  (__this->fields).Networked = uVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Visible);
  (__this->fields).RotationY = 1.0;
  (__this->fields).RotationZ = 1.0;
  (__this->fields).ScaleX = 1.0;
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  return;
}


