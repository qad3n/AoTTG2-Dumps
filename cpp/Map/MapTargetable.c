// Type: Map.MapTargetable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapTargetable.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapTargetable.cs
// --------------------------------

// Map.MapTargetable$$get_GameObject
// il2cpp: UnityEngine_GameObject_o* Map_MapTargetable__get_GameObject (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x181edab30

UnityEngine_GameObject_o * Map_MapTargetable__get_GameObject(Map_MapTargetable_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  
  __this_00 = (__this->fields)._transform;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    return pUVar1;
  }
  ThrowNullReferenceException();
}


// Map.MapTargetable$$get_Team
// il2cpp: System_String_o* Map_MapTargetable__get_Team (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x180584c80

System_String_o*
Map_MapTargetable__get_Team(Map_MapTargetable_o* __this, MethodInfo* method)

{
  return (__this->fields)._Team_k__BackingField;
}


// Map.MapTargetable$$set_Team
// il2cpp: void Map_MapTargetable__set_Team (Map_MapTargetable_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180584ca0

void
Map_MapTargetable__set_Team(Map_MapTargetable_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Team_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Team_k__BackingField,value);
  return;
}


// Map.MapTargetable$$get_Enabled
// il2cpp: bool Map_MapTargetable__get_Enabled (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x180acdd00

bool
Map_MapTargetable__get_Enabled(Map_MapTargetable_o* __this, MethodInfo* method)

{
  return (__this->fields)._Enabled_k__BackingField;
}


// Map.MapTargetable$$set_Enabled
// il2cpp: void Map_MapTargetable__set_Enabled (Map_MapTargetable_o* __this, bool value, const MethodInfo* method);
// 0x180ace1a0

void
Map_MapTargetable__set_Enabled(Map_MapTargetable_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._Enabled_k__BackingField = value;
  return;
}


// Map.MapTargetable$$.ctor
// il2cpp: void Map_MapTargetable___ctor (Map_MapTargetable_o* __this, UnityEngine_Transform_o* transform, UnityEngine_Vector3_o center, System_String_o* team, const MethodInfo* method);
// 0x181edaad0

void Map_MapTargetable___ctor
               (Map_MapTargetable_o *__this,UnityEngine_Transform_o *transform,UnityEngine_Vector3_o *center,
               System_String_o *team,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  (__this->fields)._Enabled_k__BackingField = true;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = transform;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transform,transform);
  fVar2 = (center->fields).y;
  fVar1 = (center->fields).z;
  (__this->fields)._center.fields.x = (center->fields).x;
  (__this->fields)._center.fields.y = fVar2;
  (__this->fields)._center.fields.z = fVar1;
  (__this->fields)._Team_k__BackingField = team;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Team_k__BackingField,team);
  return;
}


// Map.MapTargetable$$ValidTarget
// il2cpp: bool Map_MapTargetable__ValidTarget (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x181edaa70

bool Map_MapTargetable__ValidTarget(Map_MapTargetable_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345123 = '\x01';
  }
  if ((__this->fields)._Enabled_k__BackingField == false) {
    return false;
  }
  x = (__this->fields)._transform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Map.MapTargetable$$GetPosition
// il2cpp: UnityEngine_Vector3_o Map_MapTargetable__GetPosition (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x181edaa10

UnityEngine_Vector3_o *
Map_MapTargetable__GetPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,Map_MapTargetable_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields)._transform;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    local_28.x = (__this->fields)._center.fields.x;
    local_28.y = (__this->fields)._center.fields.y;
    local_28.z = (__this->fields)._center.fields.z;
    pUVar3 = UnityEngine_Transform__TransformPoint
                       (&local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Map.MapTargetable$$GetTeam
// il2cpp: System_String_o* Map_MapTargetable__GetTeam (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x180584c80

System_String_o*
Map_MapTargetable__GetTeam(Map_MapTargetable_o* __this, MethodInfo* method)

{
  return (__this->fields)._Team_k__BackingField;
}


