// Type: Map.MapScriptBaseObject
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptBaseObject.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptBaseObject.cs
// --------------------------------

// Map.MapScriptBaseObject$$SetPosition
// il2cpp: void Map_MapScriptBaseObject__SetPosition (Map_MapScriptBaseObject_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x181eb5560

void Map_MapScriptBaseObject__SetPosition
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  (__this->fields).PositionX = (position->fields).x;
  (__this->fields).PositionY = (position->fields).y;
  (__this->fields).PositionZ = (position->fields).z;
  return;
}


// Map.MapScriptBaseObject$$SetScale
// il2cpp: void Map_MapScriptBaseObject__SetScale (Map_MapScriptBaseObject_o* __this, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x181eb5610

void Map_MapScriptBaseObject__SetScale
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Vector3_o *scale,MethodInfo *method)

{
  (__this->fields).ScaleX = (scale->fields).x;
  (__this->fields).ScaleY = (scale->fields).y;
  (__this->fields).ScaleZ = (scale->fields).z;
  return;
}


// Map.MapScriptBaseObject$$SetRotation
// il2cpp: void Map_MapScriptBaseObject__SetRotation (Map_MapScriptBaseObject_o* __this, UnityEngine_Vector3_o rotation, const MethodInfo* method);
// 0x181eb5580

void Map_MapScriptBaseObject__SetRotation
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Vector3_o *rotation,MethodInfo *method)

{
  (__this->fields).RotationX = (rotation->fields).x;
  (__this->fields).RotationY = (rotation->fields).y;
  (__this->fields).RotationZ = (rotation->fields).z;
  return;
}


// Map.MapScriptBaseObject$$SetRotation
// il2cpp: void Map_MapScriptBaseObject__SetRotation (Map_MapScriptBaseObject_o* __this, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x181eb55a0

void Map_MapScriptBaseObject__SetRotation_1eb55a0
               (Map_MapScriptBaseObject_o *__this,UnityEngine_Quaternion_o *rotation,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  pUVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,rotation,(MethodInfo *)0x0);
  uVar2 = (pUVar5->fields).x;
  uVar3 = (pUVar5->fields).y;
  local_28.x = (float)uVar2 * 57.29578;
  local_28.y = (float)uVar3 * 57.29578;
  local_28.z = (pUVar5->fields).z * 57.29578;
  pUVar5 = UnityEngine_Quaternion__Internal_MakePositive
                     (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
  fVar1 = (pUVar5->fields).z;
  fVar4 = (pUVar5->fields).x;
  (__this->fields).RotationY = (pUVar5->fields).y;
  (__this->fields).RotationZ = fVar1;
  (__this->fields).RotationX = fVar4;
  return;
}


// Map.MapScriptBaseObject$$GetPosition
// il2cpp: UnityEngine_Vector3_o Map_MapScriptBaseObject__GetPosition (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x181eb5500

UnityEngine_Vector3_o *
Map_MapScriptBaseObject__GetPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  (__return_storage_ptr__->fields).x = (__this->fields).PositionX;
  (__return_storage_ptr__->fields).y = (__this->fields).PositionY;
  (__return_storage_ptr__->fields).z = (__this->fields).PositionZ;
  return __return_storage_ptr__;
}


// Map.MapScriptBaseObject$$GetRotation
// il2cpp: UnityEngine_Vector3_o Map_MapScriptBaseObject__GetRotation (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x181eb5520

UnityEngine_Vector3_o *
Map_MapScriptBaseObject__GetRotation
          (UnityEngine_Vector3_o *__return_storage_ptr__,Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  (__return_storage_ptr__->fields).x = (__this->fields).RotationX;
  (__return_storage_ptr__->fields).y = (__this->fields).RotationY;
  (__return_storage_ptr__->fields).z = (__this->fields).RotationZ;
  return __return_storage_ptr__;
}


// Map.MapScriptBaseObject$$GetScale
// il2cpp: UnityEngine_Vector3_o Map_MapScriptBaseObject__GetScale (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x181eb5540

UnityEngine_Vector3_o *
Map_MapScriptBaseObject__GetScale
          (UnityEngine_Vector3_o *__return_storage_ptr__,Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  (__return_storage_ptr__->fields).x = (__this->fields).ScaleX;
  (__return_storage_ptr__->fields).y = (__this->fields).ScaleY;
  (__return_storage_ptr__->fields).z = (__this->fields).ScaleZ;
  return __return_storage_ptr__;
}


// Map.MapScriptBaseObject$$.ctor
// il2cpp: void Map_MapScriptBaseObject___ctor (Map_MapScriptBaseObject_o* __this, const MethodInfo* method);
// 0x181eb5630

void Map_MapScriptBaseObject___ctor(Map_MapScriptBaseObject_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Unnamed");
    Il2CppMethodInitialized_1843450f7 = '\x01';
  }
  (__this->fields).Asset = "None";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Asset,"None");
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  (__this->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
  (__this->fields).Active = true;
  (__this->fields).Static = true;
  (__this->fields).Visible = true;
  (__this->fields).Name = "Unnamed";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,"Unnamed");
  (__this->fields).ScaleX = 1.0;
  (__this->fields).ScaleY = 1.0;
  (__this->fields).ScaleZ = 1.0;
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  return;
}


