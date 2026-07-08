// Type: Weather.SnowWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/SnowWeatherEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/SnowWeatherEffect.cs  [CHANGED since prior version]
// --------------------------------

// Weather.SnowWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_SnowWeatherEffect__get__positionOffset (Weather_SnowWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d77130

UnityEngine_Vector3_o
Weather_SnowWeatherEffect__get__positionOffset
          (Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  UVar2.fields.x = (float)uVar1 * 0.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 0.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Weather.SnowWeatherEffect$$Randomize
// il2cpp: void Weather_SnowWeatherEffect__Randomize (Weather_SnowWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d77180

void Weather_SnowWeatherEffect__Randomize(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.SnowWeatherEffect$$SetLevel
// il2cpp: void Weather_SnowWeatherEffect__SetLevel (Weather_SnowWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x3d77190

void Weather_SnowWeatherEffect__SetLevel
               (Weather_SnowWeatherEffect_o *__this,float level,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *pSVar1;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_00;
  UnityEngine_ParticleSystem_o *pUVar2;
  float constant;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_88;
  UnityEngine_ParticleSystem_MainModule_Fields UStack_80;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_78;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_58;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_38;
  
  if (DAT_05702642 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_get_Item);
    DAT_05702642 = '\x01';
  }
  UStack_80.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  UStack_88.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  (__this->fields)._level = level;
  if (level <= 0.0) {
    return;
  }
  (*(__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr)
            (__this,0,(__this->klass->vtable)._12_SetActiveParticleSystem.method);
  pSVar1 = (__this->fields)._particleSystems;
  if ((pSVar1 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) &&
     (pUVar2 = (UnityEngine_ParticleSystem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_ParticleSystem_get_Item),
     pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
    UStack_80.m_ParticleSystem =
         (UnityEngine_ParticleSystem_o *)
         UnityEngine_ParticleSystem__get_main(pUVar2,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._particleSystems;
    if ((pSVar1 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) &&
       (pUVar2 = (UnityEngine_ParticleSystem_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_ParticleSystem_get_Item),
       pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
      UStack_88.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)
           UnityEngine_ParticleSystem__get_emission(pUVar2,(MethodInfo *)0x0);
      constant = (float)(*(__this->klass->vtable)._18_ClampParticles.methodPtr)
                                  (level * 200.0 + 100.0,__this);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_78,constant,(MethodInfo *)0x0);
      UStack_38.m_CurveMax = UStack_78.m_CurveMax;
      UStack_38.m_ConstantMin = UStack_78.m_ConstantMin;
      UStack_38.m_ConstantMax = UStack_78.m_ConstantMax;
      UStack_38.m_Mode = UStack_78.m_Mode;
      UStack_38.m_CurveMultiplier = UStack_78.m_CurveMultiplier;
      UStack_38.m_CurveMin = UStack_78.m_CurveMin;
      value.fields.m_CurveMin = UStack_78.m_CurveMin;
      value.fields.m_Mode = UStack_78.m_Mode;
      value.fields.m_CurveMultiplier = UStack_78.m_CurveMultiplier;
      value.fields.m_CurveMax = UStack_78.m_CurveMax;
      value.fields.m_ConstantMin = UStack_78.m_ConstantMin;
      value.fields.m_ConstantMax = UStack_78.m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_88,value,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_78,25.0,(MethodInfo *)0x0);
      UStack_58.m_CurveMax = UStack_78.m_CurveMax;
      UStack_58.m_ConstantMin = UStack_78.m_ConstantMin;
      UStack_58.m_ConstantMax = UStack_78.m_ConstantMax;
      UStack_58.m_Mode = UStack_78.m_Mode;
      UStack_58.m_CurveMultiplier = UStack_78.m_CurveMultiplier;
      UStack_58.m_CurveMin = UStack_78.m_CurveMin;
      value_00.fields.m_CurveMin = UStack_78.m_CurveMin;
      value_00.fields.m_Mode = UStack_78.m_Mode;
      value_00.fields.m_CurveMultiplier = UStack_78.m_CurveMultiplier;
      value_00.fields.m_CurveMax = UStack_78.m_CurveMax;
      value_00.fields.m_ConstantMin = UStack_78.m_ConstantMin;
      value_00.fields.m_ConstantMax = UStack_78.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize
                ((UnityEngine_ParticleSystem_MainModule_o)&UStack_80,value_00,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._14_SetActiveAudio.methodPtr)
                (level * 0.25 + 0.25,__this,0,(__this->klass->vtable)._14_SetActiveAudio.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.SnowWeatherEffect$$Setup
// il2cpp: void Weather_SnowWeatherEffect__Setup (Weather_SnowWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x3d77360

void Weather_SnowWeatherEffect__Setup
               (Weather_ThunderWeatherEffect_o *__this,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup(__this,parent,method);
  return;
}


// Weather.SnowWeatherEffect$$.ctor
// il2cpp: void Weather_SnowWeatherEffect___ctor (Weather_SnowWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d77370

void Weather_SnowWeatherEffect___ctor(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor(__this,method);
  return;
}


