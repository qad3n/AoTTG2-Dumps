// Type: Weather.SnowWeatherEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/SnowWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/SnowWeatherEffect.cs
// --------------------------------

// Weather.SnowWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_SnowWeatherEffect__get__positionOffset (Weather_SnowWeatherEffect_o* __this, const MethodInfo* method);
// 0x181da1240

UnityEngine_Vector3_o
Weather_SnowWeatherEffect__get__positionOffset(Weather_SnowWeatherEffect_o* __this, MethodInfo* method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->upVector).fields.y;
  uVar2 = (pUVar3->upVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar3->upVector).fields.x * 0.0;
  (__return_storage_ptr__->fields).y = (float)uVar1 * 0.0;
  (__return_storage_ptr__->fields).z = (float)uVar2 * 0.0;
  return __return_storage_ptr__;
}


// Weather.SnowWeatherEffect$$Randomize
// il2cpp: void Weather_SnowWeatherEffect__Randomize (Weather_SnowWeatherEffect_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_SnowWeatherEffect__Randomize(Weather_SnowWeatherEffect_o* __this, MethodInfo* method)

{
  return;
}


// Weather.SnowWeatherEffect$$SetLevel
// il2cpp: void Weather_SnowWeatherEffect__SetLevel (Weather_SnowWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x181dae9b0

void Weather_SnowWeatherEffect__SetLevel(Weather_SnowWeatherEffect_o *__this,float level,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *pSVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  UnityEngine_ParticleSystem_MinMaxCurve_o *pUVar3;
  float constant;
  UnityEngine_ParticleSystem_EmissionModule_o local_res8 [3];
  UnityEngine_ParticleSystem_MainModule_o local_res20;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_58;
  UnityEngine_ParticleSystem_MinMaxCurve_o local_38;
  
  if (Il2CppMethodInitialized_184344922 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
    Il2CppMethodInitialized_184344922 = '\x01';
  }
  (__this->fields)._level = level;
  local_res20.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_res8[0].fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if (level <= 0.0) {
    return;
  }
  (*(__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr)
            (__this,0,(__this->klass->vtable)._12_SetActiveParticleSystem.method);
  pSVar1 = (__this->fields)._particleSystems;
  if ((pSVar1 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) &&
     (pUVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item),
     pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
    local_res20.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_MainModule_Fields)
         UnityEngine_ParticleSystem__get_noise(pUVar2,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._particleSystems;
    if ((pSVar1 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) &&
       (pUVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,0,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item),
       pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
      local_res8[0].fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           UnityEngine_ParticleSystem__get_noise(pUVar2,(MethodInfo *)0x0);
      constant = (*(__this->klass->vtable)._18_ClampParticles.methodPtr)
                           (__this,level * 200.0 + 100.0,(__this->klass->vtable)._18_ClampParticles.method);
      pUVar3 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&local_38,constant,(MethodInfo *)0x0);
      local_58.m_Mode = (pUVar3->fields).m_Mode;
      local_58.m_CurveMultiplier = (pUVar3->fields).m_CurveMultiplier;
      local_58.m_CurveMin = (pUVar3->fields).m_CurveMin;
      local_58.m_CurveMax = (pUVar3->fields).m_CurveMax;
      local_58.m_ConstantMin = (pUVar3->fields).m_ConstantMin;
      local_58.m_ConstantMax = (pUVar3->fields).m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                (local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_58,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&local_38,25.0,(MethodInfo *)0x0);
      local_58.m_Mode = (pUVar3->fields).m_Mode;
      local_58.m_CurveMultiplier = (pUVar3->fields).m_CurveMultiplier;
      local_58.m_CurveMin = (pUVar3->fields).m_CurveMin;
      local_58.m_CurveMax = (pUVar3->fields).m_CurveMax;
      local_58.m_ConstantMin = (pUVar3->fields).m_ConstantMin;
      local_58.m_ConstantMax = (pUVar3->fields).m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize
                (&local_res20,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_58,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._14_SetActiveAudio.methodPtr)
                (__this,0,level * 0.25 + 0.25,(__this->klass->vtable)._14_SetActiveAudio.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.SnowWeatherEffect$$Setup
// il2cpp: void Weather_SnowWeatherEffect__Setup (Weather_SnowWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x181dae3a0

void
Weather_SnowWeatherEffect__Setup(Weather_SnowWeatherEffect_o* __this, UnityEngine_Transform_o* parent, MethodInfo* method)

{
  Weather_BaseWeatherEffect__Setup((Weather_BaseWeatherEffect_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// Weather.SnowWeatherEffect$$.ctor
// il2cpp: void Weather_SnowWeatherEffect___ctor (Weather_SnowWeatherEffect_o* __this, const MethodInfo* method);
// 0x181da1230

void
Weather_SnowWeatherEffect___ctor(Weather_SnowWeatherEffect_o* __this, MethodInfo* method)

{
  Weather_BaseWeatherEffect___ctor((Weather_BaseWeatherEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


