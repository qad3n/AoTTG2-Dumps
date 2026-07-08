// Type: Map.MapTargetable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapTargetable.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapTargetable.cs  [CHANGED since prior version]
// --------------------------------

// Map.MapTargetable$$get_GameObject
// il2cpp: UnityEngine_GameObject_o* Map_MapTargetable__get_GameObject (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x3db0230

UnityEngine_GameObject_o *
Map_MapTargetable__get_GameObject(Map_MapTargetable_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  
  __this_00 = (__this->fields)._transform;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapTargetable$$get_Team
// il2cpp: System_String_o* Map_MapTargetable__get_Team (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x3db0250

System_String_o * Map_MapTargetable__get_Team(Map_MapTargetable_o *__this,MethodInfo *method)

{
  return (__this->fields)._Team_k__BackingField;
}


// Map.MapTargetable$$set_Team
// il2cpp: void Map_MapTargetable__set_Team (Map_MapTargetable_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3db0260

void Map_MapTargetable__set_Team
               (Map_MapTargetable_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Team_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Team_k__BackingField);
  return;
}


// Map.MapTargetable$$get_Enabled
// il2cpp: bool Map_MapTargetable__get_Enabled (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x3db0270

bool_conflict Map_MapTargetable__get_Enabled(Map_MapTargetable_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Enabled_k__BackingField);
}


// Map.MapTargetable$$set_Enabled
// il2cpp: void Map_MapTargetable__set_Enabled (Map_MapTargetable_o* __this, bool value, const MethodInfo* method);
// 0x3db0280

void Map_MapTargetable__set_Enabled
               (Map_MapTargetable_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._Enabled_k__BackingField = (char)value;
  return;
}


// Map.MapTargetable$$.ctor
// il2cpp: void Map_MapTargetable___ctor (Map_MapTargetable_o* __this, UnityEngine_Transform_o* transform, UnityEngine_Vector3_o center, System_String_o* team, const MethodInfo* method);
// 0x3db0290

void Map_MapTargetable___ctor
               (Map_MapTargetable_o *__this,UnityEngine_Transform_o *transform,
               UnityEngine_Vector3_o center,System_String_o *team,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._Enabled_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = transform;
  il2cpp_runtime_glue(&__this->fields,transform);
  (__this->fields)._center.fields.x = (float)(int)center.fields._0_8_;
  (__this->fields)._center.fields.y = (float)(int)((ulong)center.fields._0_8_ >> 0x20);
  (__this->fields)._center.fields.z = center.fields.z;
  (__this->fields)._Team_k__BackingField = team;
  il2cpp_runtime_glue(&(__this->fields)._Team_k__BackingField,team);
  return;
}


// Map.MapTargetable$$ValidTarget
// il2cpp: bool Map_MapTargetable__ValidTarget (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x3db0300

bool_conflict Map_MapTargetable__ValidTarget(Map_MapTargetable_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool_conflict bVar1;
  
  if (DAT_057027bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057027bc = '\x01';
  }
  if ((char)(__this->fields)._Enabled_k__BackingField != '\0') {
    x = (__this->fields)._transform;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}


// Map.MapTargetable$$GetPosition
// il2cpp: UnityEngine_Vector3_o Map_MapTargetable__GetPosition (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x3db0360

UnityEngine_Vector3_o Map_MapTargetable__GetPosition(Map_MapTargetable_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields)._transform;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__TransformPoint
                      (__this_00,(UnityEngine_Vector3_o)(__this->fields)._center.fields,
                       (MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapTargetable$$GetTeam
// il2cpp: System_String_o* Map_MapTargetable__GetTeam (Map_MapTargetable_o* __this, const MethodInfo* method);
// 0x3db0390

System_String_o * Map_MapTargetable__GetTeam(Map_MapTargetable_o *__this,MethodInfo *method)

{
  return (__this->fields)._Team_k__BackingField;
}


