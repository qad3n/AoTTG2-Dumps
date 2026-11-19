// Type: Map.MapScriptBaseObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapScriptBaseObject.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptBaseObject.cs
// --------------------------------

// Map.MapScriptBaseObject$$SetPosition
// il2cpp: void Map_MapScriptBaseObject__SetPosition (Map_MapScriptBaseObject_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x59a1f30

void Map_MapScriptBaseObject__SetPosition
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  (__this->fields).PositionX = position.fields.x;
  (__this->fields).PositionY = position.fields.y;
  (__this->fields).PositionZ = position.fields.z;
  return;
}


// Map.MapScriptBaseObject$$SetScale
// il2cpp: void Map_MapScriptBaseObject__SetScale (Map_MapScriptBaseObject_o* __this, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x59a1f20

void Map_MapScriptBaseObject__SetScale
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Vector3_o scale,MethodInfo *method)

{
  (__this->fields).ScaleX = scale.fields.x;
  (__this->fields).ScaleY = scale.fields.y;
  (__this->fields).ScaleZ = scale.fields.z;
  return;
}


// Map.MapScriptBaseObject$$SetRotation
// il2cpp: void Map_MapScriptBaseObject__SetRotation (Map_MapScriptBaseObject_o* __this, UnityEngine_Vector3_o rotation, const MethodInfo* method);
// 0x59a3aa0

void Map_MapScriptBaseObject__SetRotation
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Vector3_o rotation,MethodInfo *method)

{
  (__this->fields).RotationX = rotation.fields.x;
  (__this->fields).RotationY = rotation.fields.y;
  (__this->fields).RotationZ = rotation.fields.z;
  return;
}


// Map.MapScriptBaseObject$$SetRotation
// il2cpp: void Map_MapScriptBaseObject__SetRotation (Map_MapScriptBaseObject_o* __this, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x59a1ff0

void Map_MapScriptBaseObject__SetRotation_58a1ff0
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_18;
  
  local_18.fields = rotation.fields;
  UVar1 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
  euler.fields.x = UVar1.fields.x * 57.29578;
  euler.fields.y = UVar1.fields.y * 57.29578;
  euler.fields.z = UVar1.fields.z * 57.29578;
  UVar1 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  (__this->fields).RotationX = UVar1.fields.x;
  (__this->fields).RotationY = UVar1.fields.y;
  (__this->fields).RotationZ = UVar1.fields.z;
  return;
}


// Map.MapScriptBaseObject$$GetPosition
// il2cpp: UnityEngine_Vector3_o Map_MapScriptBaseObject__GetPosition (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x59a3ab0

UnityEngine_Vector3_o
Map_MapScriptBaseObject__GetPosition(Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields.x = (__this->fields).PositionX;
  UVar1.fields.y = (__this->fields).PositionY;
  UVar1.fields.z = (__this->fields).PositionZ;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Map.MapScriptBaseObject$$GetRotation
// il2cpp: UnityEngine_Vector3_o Map_MapScriptBaseObject__GetRotation (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x59a3ac0

UnityEngine_Vector3_o
Map_MapScriptBaseObject__GetRotation(Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields.x = (__this->fields).RotationX;
  UVar1.fields.y = (__this->fields).RotationY;
  UVar1.fields.z = (__this->fields).RotationZ;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Map.MapScriptBaseObject$$GetScale
// il2cpp: UnityEngine_Vector3_o Map_MapScriptBaseObject__GetScale (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x59a3ad0

UnityEngine_Vector3_o Map_MapScriptBaseObject__GetScale(Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields.x = (__this->fields).ScaleX;
  UVar1.fields.y = (__this->fields).ScaleY;
  UVar1.fields.z = (__this->fields).ScaleZ;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Map.MapScriptBaseObject$$.ctor
// il2cpp: void Map_MapScriptBaseObject___ctor (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x59a3ae0

void Map_MapScriptBaseObject___ctor(Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545a91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Unnamed");
    Il2CppMethodInitialized_07545a91 = '\x01';
  }
  (__this->fields).Asset = "None";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Asset);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  (__this->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
  (__this->fields).Active = true;
  (__this->fields).Static = true;
  (__this->fields).Visible = true;
  (__this->fields).Name = "Unnamed";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
  (__this->fields).ScaleX = 1.0;
  (__this->fields).ScaleY = 1.0;
  (__this->fields).ScaleZ = 1.0;
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  return;
}


