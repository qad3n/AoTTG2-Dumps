// Type: Weather.RainWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/RainWeatherEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/RainWeatherEffect.cs  [CHANGED since prior version]
// --------------------------------

// Weather.RainWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_RainWeatherEffect__get__positionOffset (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d76870

UnityEngine_Vector3_o
Weather_RainWeatherEffect__get__positionOffset
          (Weather_RainWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  UVar2.fields.x = (float)uVar1 * 30.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 30.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 30.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Weather.RainWeatherEffect$$Randomize
// il2cpp: void Weather_RainWeatherEffect__Randomize (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d768c0

void Weather_RainWeatherEffect__Randomize(Weather_RainWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  undefined8 uVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o point_00;
  UnityEngine_Vector3_o axis;
  undefined4 in_stack_ffffffffffffff68;
  float in_stack_ffffffffffffff6c;
  float in_stack_ffffffffffffff74;
  _union_247328 _Var9;
  _union_247328 a_Stack_48 [2];
  UnityEngine_Component_o *pUStack_38;
  ulong uVar7;
  
  if (DAT_05702640 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_get_Current);
    il2cpp_init_method_metadata();
    DAT_05702640 = '\x01';
  }
  fVar5 = UnityEngine_Random__Range(0.0,20.0,(MethodInfo *)0x0);
  uVar7 = (ulong)(uint)fVar5;
  fVar5 = UnityEngine_Random__Range(-fVar5,fVar5,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._particleSystems;
  if (__this_00 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_ParticleSystem);
  _Var9 = a_Stack_48[0];
  while( true ) {
    __this_01.fields._list._4_4_ = in_stack_ffffffffffffff6c;
    __this_01.fields._list._0_4_ = in_stack_ffffffffffffff68;
    __this_01.fields._index = (int32_t)fVar5;
    __this_01.fields._version = (int32_t)in_stack_ffffffffffffff74;
    __this_01.fields._current = _Var9.genericMethod;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
    if ((char)bVar2 == '\0') {
      __this_02.fields._list._4_4_ = in_stack_ffffffffffffff6c;
      __this_02.fields._list._0_4_ = in_stack_ffffffffffffff68;
      __this_02.fields._index = (int32_t)fVar5;
      __this_02.fields._version = (int32_t)in_stack_ffffffffffffff74;
      __this_02.fields._current = _Var9.genericMethod;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
      return;
    }
    if (pUStack_38 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = UnityEngine_Component__get_transform(pUStack_38,(MethodInfo *)0x0);
    uVar1 = (*(__this->klass->vtable)._4_get__positionOffset.methodPtr)(__this);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar8.fields.z = (float)uVar7;
    UVar8.fields.x = (float)(int)uVar1;
    UVar8.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
    UnityEngine_Transform__set_localPosition(pUVar3,UVar8,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform(pUStack_38,(MethodInfo *)0x0);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Transform__set_localRotation
              (pUVar3,(UnityEngine_Quaternion_o)
                      **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
    pUVar4 = UnityEngine_Component__get_transform(pUStack_38,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._transform;
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar8 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    fVar6 = UVar8.fields.z;
    if (DAT_056fde21 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde21 = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    point.fields.z = fVar6;
    point.fields.x = (float)(int)UVar8.fields._0_8_;
    point.fields.y = (float)(int)((ulong)UVar8.fields._0_8_ >> 0x20);
    UnityEngine_Transform__RotateAround
              (pUVar4,point,
               (UnityEngine_Vector3_o)
               *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48),fVar5,
               (MethodInfo *)0x0);
    pUVar4 = UnityEngine_Component__get_transform(pUStack_38,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._transform;
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar8 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    in_stack_ffffffffffffff6c = UVar8.fields.z;
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fde1f = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    in_stack_ffffffffffffff74 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    fVar6 = UnityEngine_Random__Range(0.0,360.0,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) break;
    point_00.fields.z = in_stack_ffffffffffffff6c;
    point_00.fields.x = (float)(int)UVar8.fields._0_8_;
    point_00.fields.y = (float)(int)((ulong)UVar8.fields._0_8_ >> 0x20);
    uVar7 = (ulong)(uint)in_stack_ffffffffffffff6c;
    axis.fields.z = in_stack_ffffffffffffff74;
    axis.fields._0_8_ = uVar1;
    UnityEngine_Transform__RotateAround(pUVar4,point_00,axis,fVar6,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.RainWeatherEffect$$SetLevel
// il2cpp: void Weather_RainWeatherEffect__SetLevel (Weather_RainWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x3d76d50

void Weather_RainWeatherEffect__SetLevel
               (Weather_RainWeatherEffect_o *__this,float level,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *pSVar1;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_00;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_01;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_02;
  UnityEngine_ParticleSystem_o *pUVar2;
  Weather_RainWeatherEffect_c *pWVar3;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_d8;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_b8;
  UnityEngine_ParticleSystem_MainModule_Fields UStack_b0;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_a8;
  UnityEngine_ParticleSystem_MainModule_Fields UStack_a0;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_98;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_78;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_58;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_38;
  
  if (DAT_05702641 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_get_Item);
    DAT_05702641 = '\x01';
  }
  UStack_a0.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  UStack_a8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  UStack_b0.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  UStack_b8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  (__this->fields)._level = level;
  if (0.0 < level) {
    if (0.5 <= level) {
      (*(__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr)
                (__this,1,(__this->klass->vtable)._12_SetActiveParticleSystem.method);
      pSVar1 = (__this->fields)._particleSystems;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto LAB_03d770fd;
      pUVar2 = (UnityEngine_ParticleSystem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,1,MethodInfo_ParticleSystem_get_Item);
      if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_03d770fd;
      UStack_b0.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)
           UnityEngine_ParticleSystem__get_main(pUVar2,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._particleSystems;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto LAB_03d770fd;
      pUVar2 = (UnityEngine_ParticleSystem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,1,MethodInfo_ParticleSystem_get_Item);
      if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_03d770fd;
      fVar6 = level + -0.5 + level + -0.5;
      UStack_b8.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)
           UnityEngine_ParticleSystem__get_emission(pUVar2,(MethodInfo *)0x0);
      fVar7 = (float)(*(__this->klass->vtable)._18_ClampParticles.methodPtr)
                               (fVar6 * 150.0 + 100.0,__this);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_d8,fVar7,(MethodInfo *)0x0);
      UStack_78.m_CurveMax = UStack_d8.m_CurveMax;
      UStack_78.m_ConstantMin = UStack_d8.m_ConstantMin;
      UStack_78.m_ConstantMax = UStack_d8.m_ConstantMax;
      UStack_78.m_Mode = UStack_d8.m_Mode;
      UStack_78.m_CurveMultiplier = UStack_d8.m_CurveMultiplier;
      UStack_78.m_CurveMin = UStack_d8.m_CurveMin;
      value_01.fields.m_CurveMin = UStack_d8.m_CurveMin;
      value_01.fields.m_Mode = UStack_d8.m_Mode;
      value_01.fields.m_CurveMultiplier = UStack_d8.m_CurveMultiplier;
      value_01.fields.m_CurveMax = UStack_d8.m_CurveMax;
      value_01.fields.m_ConstantMin = UStack_d8.m_ConstantMin;
      value_01.fields.m_ConstantMax = UStack_d8.m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_b8,value_01,(MethodInfo *)0x0)
      ;
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_d8,fVar6 * 10.0 + 50.0,
                 (MethodInfo *)0x0);
      UStack_98.m_CurveMax = UStack_d8.m_CurveMax;
      UStack_98.m_ConstantMin = UStack_d8.m_ConstantMin;
      UStack_98.m_ConstantMax = UStack_d8.m_ConstantMax;
      UStack_98.m_Mode = UStack_d8.m_Mode;
      UStack_98.m_CurveMultiplier = UStack_d8.m_CurveMultiplier;
      UStack_98.m_CurveMin = UStack_d8.m_CurveMin;
      value_02.fields.m_CurveMin = UStack_d8.m_CurveMin;
      value_02.fields.m_Mode = UStack_d8.m_Mode;
      value_02.fields.m_CurveMultiplier = UStack_d8.m_CurveMultiplier;
      value_02.fields.m_CurveMax = UStack_d8.m_CurveMax;
      value_02.fields.m_ConstantMin = UStack_d8.m_ConstantMin;
      value_02.fields.m_ConstantMax = UStack_d8.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize
                ((UnityEngine_ParticleSystem_MainModule_o)&UStack_b0,value_02,(MethodInfo *)0x0);
      pWVar3 = __this->klass;
      pMVar4 = (pWVar3->vtable)._14_SetActiveAudio.method;
      uVar5 = 1;
    }
    else {
      (*(__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr)
                (__this,0,(__this->klass->vtable)._12_SetActiveParticleSystem.method);
      pSVar1 = (__this->fields)._particleSystems;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
LAB_03d770fd:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar2 = (UnityEngine_ParticleSystem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_ParticleSystem_get_Item);
      if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_03d770fd;
      UStack_a0.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)
           UnityEngine_ParticleSystem__get_main(pUVar2,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._particleSystems;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) goto LAB_03d770fd;
      pUVar2 = (UnityEngine_ParticleSystem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_ParticleSystem_get_Item);
      if (pUVar2 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_03d770fd;
      fVar6 = level + level;
      UStack_a8.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)
           UnityEngine_ParticleSystem__get_emission(pUVar2,(MethodInfo *)0x0);
      fVar7 = (float)(*(__this->klass->vtable)._18_ClampParticles.methodPtr)
                               (fVar6 * 150.0 + 50.0,__this);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_d8,fVar7,(MethodInfo *)0x0);
      UStack_38.m_CurveMax = UStack_d8.m_CurveMax;
      UStack_38.m_ConstantMin = UStack_d8.m_ConstantMin;
      UStack_38.m_ConstantMax = UStack_d8.m_ConstantMax;
      UStack_38.m_Mode = UStack_d8.m_Mode;
      UStack_38.m_CurveMultiplier = UStack_d8.m_CurveMultiplier;
      UStack_38.m_CurveMin = UStack_d8.m_CurveMin;
      value.fields.m_CurveMin = UStack_d8.m_CurveMin;
      value.fields.m_Mode = UStack_d8.m_Mode;
      value.fields.m_CurveMultiplier = UStack_d8.m_CurveMultiplier;
      value.fields.m_CurveMax = UStack_d8.m_CurveMax;
      value.fields.m_ConstantMin = UStack_d8.m_ConstantMin;
      value.fields.m_ConstantMax = UStack_d8.m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_a8,value,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_d8,fVar6 * 30.0 + 30.0,
                 (MethodInfo *)0x0);
      UStack_58.m_CurveMax = UStack_d8.m_CurveMax;
      UStack_58.m_ConstantMin = UStack_d8.m_ConstantMin;
      UStack_58.m_ConstantMax = UStack_d8.m_ConstantMax;
      UStack_58.m_Mode = UStack_d8.m_Mode;
      UStack_58.m_CurveMultiplier = UStack_d8.m_CurveMultiplier;
      UStack_58.m_CurveMin = UStack_d8.m_CurveMin;
      value_00.fields.m_CurveMin = UStack_d8.m_CurveMin;
      value_00.fields.m_Mode = UStack_d8.m_Mode;
      value_00.fields.m_CurveMultiplier = UStack_d8.m_CurveMultiplier;
      value_00.fields.m_CurveMax = UStack_d8.m_CurveMax;
      value_00.fields.m_ConstantMin = UStack_d8.m_ConstantMin;
      value_00.fields.m_ConstantMax = UStack_d8.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize
                ((UnityEngine_ParticleSystem_MainModule_o)&UStack_a0,value_00,(MethodInfo *)0x0);
      pWVar3 = __this->klass;
      pMVar4 = (pWVar3->vtable)._14_SetActiveAudio.method;
      uVar5 = 0;
    }
    (*(pWVar3->vtable)._14_SetActiveAudio.methodPtr)(fVar6 * 0.25 + 0.25,__this,uVar5,pMVar4);
  }
  return;
}


// Weather.RainWeatherEffect$$Setup
// il2cpp: void Weather_RainWeatherEffect__Setup (Weather_RainWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x3d77110

void Weather_RainWeatherEffect__Setup
               (Weather_ThunderWeatherEffect_o *__this,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup(__this,parent,method);
  return;
}


// Weather.RainWeatherEffect$$.ctor
// il2cpp: void Weather_RainWeatherEffect___ctor (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d77120

void Weather_RainWeatherEffect___ctor(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor(__this,method);
  return;
}


