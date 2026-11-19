// Type: Weather.SnowWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Weather/SnowWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/SnowWeatherEffect.cs
// --------------------------------

// Weather.SnowWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_SnowWeatherEffect__get__positionOffset (Weather_SnowWeatherEffect_o* __this, const MethodInfo* method);
// 0x58566e0

UnityEngine_Vector3_o
Weather_SnowWeatherEffect__get__positionOffset(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->upVector).fields.x;
  uVar2 = (pUVar3->upVector).fields.y;
  UVar4.fields.x = (float)uVar1 * 0.0;
  UVar4.fields.y = (float)uVar2 * 0.0;
  UVar4.fields.z = (pUVar3->upVector).fields.z * 0.0;
  return (UnityEngine_Vector3_o)UVar4.fields;
}


// Weather.SnowWeatherEffect$$Randomize
// il2cpp: void Weather_SnowWeatherEffect__Randomize (Weather_SnowWeatherEffect_o* __this, const MethodInfo* method);
// 0x5856730

void Weather_SnowWeatherEffect__Randomize(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.SnowWeatherEffect$$SetLevel
// il2cpp: void Weather_SnowWeatherEffect__SetLevel (Weather_SnowWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x5856740

void Weather_SnowWeatherEffect__SetLevel(Weather_SnowWeatherEffect_o *__this,float level,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *pSVar1;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_00;
  UnityEngine_ParticleSystem_o *pUVar2;
  float constant;
  UnityEngine_ParticleSystem_EmissionModule_o UStack_60;
  UnityEngine_ParticleSystem_MainModule_o UStack_58;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_50;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_30;
  
  if (Il2CppMethodInitialized_0754507a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
    Il2CppMethodInitialized_0754507a = '\x01';
  }
  (__this->fields)._level = level;
  if (level <= 0.0) {
    return;
  }
  (*(__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr)
            (__this,0,(__this->klass->vtable)._12_SetActiveParticleSystem.method);
  pSVar1 = (__this->fields)._particleSystems;
  if ((pSVar1 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) &&
     (pUVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item),
     pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
    UStack_58 = UnityEngine_ParticleSystem__get_main(pUVar2,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._particleSystems;
    if ((pSVar1 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) &&
       (pUVar2 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,0,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item),
       pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
      UStack_60 = UnityEngine_ParticleSystem__get_emission(pUVar2,(MethodInfo *)0x0);
      constant = (*(__this->klass->vtable)._18_ClampParticles.methodPtr)
                           (__this,level * 200.0 + 100.0,(__this->klass->vtable)._18_ClampParticles.method);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_30,constant,(MethodInfo *)0x0);
      value.fields.m_CurveMin = UStack_30.m_CurveMin;
      value.fields.m_Mode = UStack_30.m_Mode;
      value.fields.m_CurveMultiplier = UStack_30.m_CurveMultiplier;
      value.fields.m_CurveMax = UStack_30.m_CurveMax;
      value.fields.m_ConstantMin = UStack_30.m_ConstantMin;
      value.fields.m_ConstantMax = UStack_30.m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(&UStack_60,value,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_50,25.0,(MethodInfo *)0x0);
      value_00.fields.m_CurveMin = UStack_50.m_CurveMin;
      value_00.fields.m_Mode = UStack_50.m_Mode;
      value_00.fields.m_CurveMultiplier = UStack_50.m_CurveMultiplier;
      value_00.fields.m_CurveMax = UStack_50.m_CurveMax;
      value_00.fields.m_ConstantMin = UStack_50.m_ConstantMin;
      value_00.fields.m_ConstantMax = UStack_50.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize(&UStack_58,value_00,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._14_SetActiveAudio.methodPtr)
                (__this,0,level * 0.25 + 0.25,(__this->klass->vtable)._14_SetActiveAudio.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.SnowWeatherEffect$$Setup
// il2cpp: void Weather_SnowWeatherEffect__Setup (Weather_SnowWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x58568c0

void Weather_SnowWeatherEffect__Setup
               (Weather_SnowWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup((Weather_ThunderWeatherEffect_o *)__this,parent,method);
  return;
}


// Weather.SnowWeatherEffect$$.ctor
// il2cpp: void Weather_SnowWeatherEffect___ctor (Weather_SnowWeatherEffect_o* __this, const MethodInfo* method);
// 0x58568d0

void Weather_SnowWeatherEffect___ctor(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor(__this,method);
  return;
}


