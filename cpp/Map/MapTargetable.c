// Type: Map.MapTargetable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapTargetable.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapTargetable.cs
// --------------------------------

// Map.MapTargetable$$get_GameObject
// il2cpp: UnityEngine_GameObject_o* Map_MapTargetable__get_GameObject (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x59a6480

UnityEngine_GameObject_o * Map_MapTargetable__get_GameObject(Map_MapTargetable_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  
  __this_00 = (__this->fields)._transform;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  return pUVar1;
}


// Map.MapTargetable$$get_Team
// il2cpp: System_String_o* Map_MapTargetable__get_Team (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x59a64a0

System_String_o * Map_MapTargetable__get_Team(Map_MapTargetable_o *__this,MethodInfo *method)

{
  return (__this->fields)._Team_k__BackingField;
}


// Map.MapTargetable$$set_Team
// il2cpp: void Map_MapTargetable__set_Team (Map_MapTargetable_o* __this, System_String_o* value, const MethodInfo* method);
// 0x59a64b0

void Map_MapTargetable__set_Team(Map_MapTargetable_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Team_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Team_k__BackingField);
  return;
}


// Map.MapTargetable$$get_Enabled
// il2cpp: bool Map_MapTargetable__get_Enabled (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x59a64c0

bool Map_MapTargetable__get_Enabled(Map_MapTargetable_o *__this,MethodInfo *method)

{
  return (__this->fields)._Enabled_k__BackingField;
}


// Map.MapTargetable$$set_Enabled
// il2cpp: void Map_MapTargetable__set_Enabled (Map_MapTargetable_o* __this, bool value, const MethodInfo* method);
// 0x59a64d0

void Map_MapTargetable__set_Enabled(Map_MapTargetable_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._Enabled_k__BackingField = value;
  return;
}


// Map.MapTargetable$$.ctor
// il2cpp: void Map_MapTargetable___ctor (Map_MapTargetable_o* __this, UnityEngine_Transform_o* transform, UnityEngine_Vector3_o center, System_String_o* team, const MethodInfo* method);
// 0x59a64e0

void Map_MapTargetable___ctor
               (Map_MapTargetable_o *__this,UnityEngine_Transform_o *transform,UnityEngine_Vector3_o center,
               System_String_o *team,MethodInfo *method)

{
  (__this->fields)._Enabled_k__BackingField = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = transform;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transform);
  (__this->fields)._center.fields.x = center.fields.x;
  (__this->fields)._center.fields.y = center.fields.y;
  (__this->fields)._center.fields.z = center.fields.z;
  (__this->fields)._Team_k__BackingField = team;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Team_k__BackingField);
  return;
}


// Map.MapTargetable$$ValidTarget
// il2cpp: bool Map_MapTargetable__ValidTarget (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x59a6550

bool Map_MapTargetable__ValidTarget(Map_MapTargetable_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545abc = '\x01';
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
// 0x59a65b0

UnityEngine_Vector3_o Map_MapTargetable__GetPosition(Map_MapTargetable_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields)._transform;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector3_Fields)
          UnityEngine_Transform__TransformPoint
                    (__this_00,(UnityEngine_Vector3_o)(__this->fields)._center.fields,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// Map.MapTargetable$$GetTeam
// il2cpp: System_String_o* Map_MapTargetable__GetTeam (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x59a65e0

System_String_o * Map_MapTargetable__GetTeam(Map_MapTargetable_o *__this,MethodInfo *method)

{
  return (__this->fields)._Team_k__BackingField;
}


