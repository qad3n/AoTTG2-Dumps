// Type: Weather.RainWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/RainWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/RainWeatherEffect.cs
// --------------------------------

// Weather.RainWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_RainWeatherEffect__get__positionOffset (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x406c1c0

UnityEngine_Vector3_o
Weather_RainWeatherEffect__get__positionOffset(Weather_RainWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  UVar2.fields.x = (float)uVar1 * 30.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 30.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 30.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Weather.RainWeatherEffect$$Randomize
// il2cpp: void Weather_RainWeatherEffect__Randomize (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x406c210

void Weather_RainWeatherEffect__Randomize(Weather_RainWeatherEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  long lVar1;
  undefined8 uVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  long *plVar6;
  float maxInclusive;
  float angle;
  float angle_00;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o point_00;
  UnityEngine_Vector3_o axis;
  undefined1 auVar8 [12];
  undefined4 in_stack_ffffffffffffff68;
  float in_stack_ffffffffffffff6c;
  float in_stack_ffffffffffffff74;
  _union_249689 _Var9;
  _union_249689 a_Stack_48 [2];
  UnityEngine_Component_o *pUStack_38;
  
  if (g_data_057ac2f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_get_Current);
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2f0 = '\x01';
  }
  _Var9.genericMethod = (Il2CppObject *)0x0;
  maxInclusive = UnityEngine_Random__Range(0.0,20.0,(MethodInfo *)0x0);
  angle = UnityEngine_Random__Range(-maxInclusive,maxInclusive,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._particleSystems;
  if (__this_00 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_ParticleSystem_GetEnumer);
    _Var9 = a_Stack_48[0];
    while( true ) {
      __this_01.fields._list._4_4_ = in_stack_ffffffffffffff6c;
      __this_01.fields._list._0_4_ = in_stack_ffffffffffffff68;
      __this_01.fields._index = (int32_t)angle;
      __this_01.fields._version = (int32_t)in_stack_ffffffffffffff74;
      __this_01.fields._current = _Var9.genericMethod;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
      if ((char)bVar3 == '\0') {
        __this_02.fields._list._4_4_ = in_stack_ffffffffffffff6c;
        __this_02.fields._list._0_4_ = in_stack_ffffffffffffff68;
        __this_02.fields._index = (int32_t)angle;
        __this_02.fields._version = (int32_t)in_stack_ffffffffffffff74;
        __this_02.fields._current = _Var9.genericMethod;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
        return;
      }
      if (pUStack_38 == (UnityEngine_Component_o *)0x0) break;
      pUVar4 = UnityEngine_Component__get_transform(pUStack_38,(MethodInfo *)0x0);
      uVar2 = (*(__this->klass->vtable)._4_get__positionOffset.methodPtr)(__this);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0406c4e9;
      UVar7.fields.z = maxInclusive;
      UVar7.fields.x = (float)(int)uVar2;
      UVar7.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
      UnityEngine_Transform__set_localPosition(pUVar4,UVar7,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_Component__get_transform(pUStack_38,(MethodInfo *)0x0);
      maxInclusive = in_stack_ffffffffffffff6c;
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
        maxInclusive = in_stack_ffffffffffffff6c;
      }
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_0406c4df:
        il2cpp_runtime_helper_022b2c90();
        in_stack_ffffffffffffff6c = maxInclusive;
        break;
      }
      UnityEngine_Transform__set_localRotation
                (pUVar4,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                 (MethodInfo *)0x0);
      pUVar5 = UnityEngine_Component__get_transform(pUStack_38,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._transform;
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0406c4ee;
      UVar7 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      maxInclusive = UVar7.fields.z;
      if (g_data_057a6846 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6846 = '\x01';
      }
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406c4df;
      point.fields.z = maxInclusive;
      point.fields.x = (float)(int)UVar7.fields._0_8_;
      point.fields.y = (float)(int)((ulong)UVar7.fields._0_8_ >> 0x20);
      UnityEngine_Transform__RotateAround
                (pUVar5,point,
                 (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48)
                 ,angle,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_Component__get_transform(pUStack_38,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._transform;
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0406c4f3;
      UVar7 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      maxInclusive = UVar7.fields.z;
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057a6844 = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      in_stack_ffffffffffffff74 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      angle_00 = UnityEngine_Random__Range(0.0,360.0,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406c4f8;
      point_00.fields.z = maxInclusive;
      point_00.fields.x = (float)(int)UVar7.fields._0_8_;
      point_00.fields.y = (float)(int)((ulong)UVar7.fields._0_8_ >> 0x20);
      axis.fields.z = in_stack_ffffffffffffff74;
      axis.fields._0_8_ = uVar2;
      in_stack_ffffffffffffff6c = maxInclusive;
      UnityEngine_Transform__RotateAround(pUVar5,point_00,axis,angle_00,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_0406c4e9:
    maxInclusive = in_stack_ffffffffffffff6c;
    il2cpp_runtime_helper_022b2c90();
label_0406c4ee:
    il2cpp_runtime_helper_022b2c90();
label_0406c4f3:
    il2cpp_runtime_helper_022b2c90();
label_0406c4f8:
    il2cpp_runtime_helper_022b2c90();
    in_stack_ffffffffffffff6c = maxInclusive;
  }
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar1 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._list._4_4_ = in_stack_ffffffffffffff6c;
    __this_03.fields._list._0_4_ = in_stack_ffffffffffffff68;
    __this_03.fields._index = (int32_t)angle;
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff74;
    __this_03.fields._current = _Var9.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._list._4_4_ = in_stack_ffffffffffffff6c;
  __this_04.fields._list._0_4_ = in_stack_ffffffffffffff68;
  __this_04.fields._index = (int32_t)angle;
  __this_04.fields._version = (int32_t)in_stack_ffffffffffffff74;
  __this_04.fields._current = _Var9.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar8._0_8_);
}


// Weather.RainWeatherEffect$$SetLevel
// il2cpp: void Weather_RainWeatherEffect__SetLevel (Weather_RainWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x406c6a0

void Weather_RainWeatherEffect__SetLevel(Weather_RainWeatherEffect_o *__this,float level,MethodInfo *method)

{
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_00;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_01;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_02;
  UnityEngine_ParticleSystem_o *pUVar1;
  Weather_RainWeatherEffect_c *pWVar2;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  UnityEngine_Transform_o *parent;
  undefined8 uVar4;
  Weather_ThunderWeatherEffect_o *__this_00;
  float fVar5;
  float fVar6;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_d8;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_b8;
  UnityEngine_ParticleSystem_MainModule_Fields UStack_b0;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_a8;
  UnityEngine_ParticleSystem_MainModule_Fields UStack_a0;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_98;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_78;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_58;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields UStack_38;
  
  if (g_data_057ac2f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_get_Item);
    g_data_057ac2f1 = '\x01';
  }
  UStack_a0.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  UStack_a8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  UStack_b0.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  UStack_b8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  (__this->fields)._level = level;
  if (0.0 < level) {
    if (0.5 <= level) {
      parent = (UnityEngine_Transform_o *)0x1;
      (*(__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr)
                (__this,1,(__this->klass->vtable)._12_SetActiveParticleSystem.method);
      __this_00 = (Weather_ThunderWeatherEffect_o *)(__this->fields)._particleSystems;
      if (__this_00 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406ca4d;
      parent = (UnityEngine_Transform_o *)0x1;
      pUVar1 = (UnityEngine_ParticleSystem_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,1,MethodInfo_ParticleSystem_get_Item);
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_0406ca4d;
      parent = (UnityEngine_Transform_o *)0x0;
      UStack_b0.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__get_main(pUVar1,(MethodInfo *)0x0);
      __this_00 = (Weather_ThunderWeatherEffect_o *)(__this->fields)._particleSystems;
      if (__this_00 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406ca4d;
      parent = (UnityEngine_Transform_o *)0x1;
      pUVar1 = (UnityEngine_ParticleSystem_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,1,MethodInfo_ParticleSystem_get_Item);
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_0406ca4d;
      fVar5 = level + -0.5 + level + -0.5;
      UStack_b8.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__get_emission(pUVar1,(MethodInfo *)0x0);
      fVar6 = (float)(*(__this->klass->vtable)._18_ClampParticles.methodPtr)(fVar5 * 150.0 + 100.0,__this);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_d8,fVar6,(MethodInfo *)0x0);
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
                ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_b8,value_01,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_d8,fVar5 * 10.0 + 50.0,(MethodInfo *)0x0)
      ;
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
      pWVar2 = __this->klass;
      pMVar3 = (pWVar2->vtable)._14_SetActiveAudio.method;
      uVar4 = 1;
    }
    else {
      parent = (UnityEngine_Transform_o *)0x0;
      (*(__this->klass->vtable)._12_SetActiveParticleSystem.methodPtr)
                (__this,0,(__this->klass->vtable)._12_SetActiveParticleSystem.method);
      __this_00 = (Weather_ThunderWeatherEffect_o *)(__this->fields)._particleSystems;
      if (__this_00 == (Weather_ThunderWeatherEffect_o *)0x0) {
label_0406ca4d:
        il2cpp_runtime_helper_022b2c90();
        Weather_BaseWeatherEffect__Setup(__this_00,parent,method_00);
        return;
      }
      parent = (UnityEngine_Transform_o *)0x0;
      pUVar1 = (UnityEngine_ParticleSystem_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_ParticleSystem_get_Item);
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_0406ca4d;
      parent = (UnityEngine_Transform_o *)0x0;
      UStack_a0.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__get_main(pUVar1,(MethodInfo *)0x0);
      __this_00 = (Weather_ThunderWeatherEffect_o *)(__this->fields)._particleSystems;
      if (__this_00 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406ca4d;
      parent = (UnityEngine_Transform_o *)0x0;
      pUVar1 = (UnityEngine_ParticleSystem_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_ParticleSystem_get_Item);
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_0406ca4d;
      fVar5 = level + level;
      UStack_a8.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__get_emission(pUVar1,(MethodInfo *)0x0);
      fVar6 = (float)(*(__this->klass->vtable)._18_ClampParticles.methodPtr)(fVar5 * 150.0 + 50.0,__this);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_d8,fVar6,(MethodInfo *)0x0);
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
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&UStack_d8,fVar5 * 30.0 + 30.0,(MethodInfo *)0x0)
      ;
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
      pWVar2 = __this->klass;
      pMVar3 = (pWVar2->vtable)._14_SetActiveAudio.method;
      uVar4 = 0;
    }
    (*(pWVar2->vtable)._14_SetActiveAudio.methodPtr)(fVar5 * 0.25 + 0.25,__this,uVar4,pMVar3);
  }
  return;
}


// Weather.RainWeatherEffect$$Setup
// il2cpp: void Weather_RainWeatherEffect__Setup (Weather_RainWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x406ca60

void Weather_RainWeatherEffect__Setup
               (Weather_ThunderWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup(__this,parent,method);
  return;
}


// Weather.RainWeatherEffect$$.ctor
// il2cpp: void Weather_RainWeatherEffect___ctor (Weather_RainWeatherEffect_o* __this, const MethodInfo* method);
// 0x406ca70

void Weather_RainWeatherEffect___ctor(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor(__this,method);
  return;
}


