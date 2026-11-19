// Type: Effects.ShifterThunderEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Effects/ShifterThunderEffect.cs
// Prior real C# source: none
// --------------------------------

// Effects.ShifterThunderEffect.Bolt$$.ctor
// il2cpp: void Effects_ShifterThunderEffect_Bolt___ctor (Effects_ShifterThunderEffect_Bolt_o* __this, UnityEngine_Transform_o* parent, UnityEngine_Material_o* material, int32_t points, float scale, const MethodInfo* method);
// 0x595cf90

void Effects_ShifterThunderEffect_Bolt___ctor
               (Effects_ShifterThunderEffect_Bolt_o *__this,UnityEngine_Transform_o *parent,
               UnityEngine_Material_o *material,int32_t points,float scale,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  int32_t iVar2;
  undefined4 in_register_0000000c;
  
  iVar2 = points;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pUVar1 = Effects_ShifterThunderEffect_Bolt__CreateLine
                     (parent,material,points,scale * 0.9,(MethodInfo *)CONCAT44(in_register_0000000c,iVar2));
  (__this->fields)._core = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._core);
  pUVar1 = Effects_ShifterThunderEffect_Bolt__CreateLine
                     (parent,material,points,scale * 9.0,(MethodInfo *)CONCAT44(in_register_0000000c,iVar2));
  (__this->fields)._glow = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._glow);
  return;
}


// Effects.ShifterThunderEffect.Bolt$$CreateLine
// il2cpp: UnityEngine_LineRenderer_o* Effects_ShifterThunderEffect_Bolt__CreateLine (UnityEngine_Transform_o* parent, UnityEngine_Material_o* material, int32_t points, float width, const MethodInfo* method);
// 0x595e0c0

UnityEngine_LineRenderer_o *
Effects_ShifterThunderEffect_Bolt__CreateLine
          (UnityEngine_Transform_o *parent,UnityEngine_Material_o *material,int32_t points,float width,
          MethodInfo *method)

{
  int32_t value;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_LineRenderer_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Keyframe_array *keys;
  UnityEngine_AnimationCurve_o *__this_02;
  UnityEngine_Keyframe_Fields local_78;
  UnityEngine_Keyframe_Fields local_58;
  
  if (Il2CppMethodInitialized_07545902 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AnimationCurve);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Keyframe_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder bolt");
    Il2CppMethodInitialized_07545902 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(pUVar1,"Thunder bolt",(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    if (__this != (UnityEngine_LineRenderer_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (parent != (UnityEngine_Transform_o *)0x0) {
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            value = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__set_layer(pUVar1,value,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)__this,material,(MethodInfo *)0x0);
              UnityEngine_LineRenderer__set_useWorldSpace(__this,true,(MethodInfo *)0x0);
              UnityEngine_LineRenderer__set_positionCount(__this,points,(MethodInfo *)0x0);
              UnityEngine_LineRenderer__set_textureMode(__this,0,(MethodInfo *)0x0);
              UnityEngine_LineRenderer__set_alignment(__this,0,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_shadowCastingMode
                        ((UnityEngine_Renderer_o *)__this,0,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_receiveShadows
                        ((UnityEngine_Renderer_o *)__this,false,(MethodInfo *)0x0);
              keys = (UnityEngine_Keyframe_array *)SZArrayNew(TypeInfo_UnityEngine_Keyframe_array,2);
              local_58.m_WeightedMode = 0;
              local_58.m_InWeight = 0.0;
              local_58.m_OutWeight = 0.0;
              local_58.m_Time = 0.0;
              local_58.m_Value = 0.0;
              local_58.m_InTangent = 0.0;
              local_58.m_OutTangent = 0.0;
              UnityEngine_Keyframe___ctor
                        ((UnityEngine_Keyframe_o *)&local_58,0.0,width * 0.6,(MethodInfo *)0x0);
              if (keys != (UnityEngine_Keyframe_array *)0x0) {
                if ((int)keys->max_length != 0) {
                  keys->m_Items[0].fields.m_OutWeight = local_58.m_OutWeight;
                  keys->m_Items[0].fields.m_WeightedMode = local_58.m_WeightedMode;
                  keys->m_Items[0].fields.m_InWeight = local_58.m_InWeight;
                  keys->m_Items[0].fields.m_Time = local_58.m_Time;
                  keys->m_Items[0].fields.m_Value = local_58.m_Value;
                  keys->m_Items[0].fields.m_InTangent = local_58.m_InTangent;
                  keys->m_Items[0].fields.m_OutTangent = local_58.m_OutTangent;
                  local_78.m_WeightedMode = 0;
                  local_78.m_InWeight = 0.0;
                  local_78.m_OutWeight = 0.0;
                  local_78.m_Time = 0.0;
                  local_78.m_Value = 0.0;
                  local_78.m_InTangent = 0.0;
                  local_78.m_OutTangent = 0.0;
                  UnityEngine_Keyframe___ctor((UnityEngine_Keyframe_o *)&local_78,1.0,width,(MethodInfo *)0x0)
                  ;
                  if ((keys->max_length & 0xfffffffe) != 0) {
                    keys->m_Items[1].fields.m_OutWeight = local_78.m_OutWeight;
                    keys->m_Items[1].fields.m_WeightedMode = local_78.m_WeightedMode;
                    keys->m_Items[1].fields.m_InWeight = local_78.m_InWeight;
                    keys->m_Items[1].fields.m_Time = local_78.m_Time;
                    keys->m_Items[1].fields.m_Value = local_78.m_Value;
                    keys->m_Items[1].fields.m_InTangent = local_78.m_InTangent;
                    keys->m_Items[1].fields.m_OutTangent = local_78.m_OutTangent;
                    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_AnimationCurve);
                    UnityEngine_AnimationCurve___ctor(__this_02,keys,(MethodInfo *)0x0);
                    UnityEngine_LineRenderer__set_widthCurve(__this,__this_02,(MethodInfo *)0x0);
                    UnityEngine_Renderer__set_enabled
                              ((UnityEngine_Renderer_o *)__this,false,(MethodInfo *)0x0);
                    return __this;
                  }
                }
                ThrowIndexOutOfRangeException();
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Effects.ShifterThunderEffect.Bolt$$SetVisible
// il2cpp: void Effects_ShifterThunderEffect_Bolt__SetVisible (Effects_ShifterThunderEffect_Bolt_o* __this, bool visible, const MethodInfo* method);
// 0x595dc50

void Effects_ShifterThunderEffect_Bolt__SetVisible
               (Effects_ShifterThunderEffect_Bolt_o *__this,bool visible,MethodInfo *method)

{
  UnityEngine_Renderer_o *pUVar1;
  
  pUVar1 = (UnityEngine_Renderer_o *)(__this->fields)._core;
  if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_enabled(pUVar1,visible,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Renderer_o *)(__this->fields)._glow;
    if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_enabled(pUVar1,visible,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Effects.ShifterThunderEffect.Bolt$$SetPoints
// il2cpp: void Effects_ShifterThunderEffect_Bolt__SetPoints (Effects_ShifterThunderEffect_Bolt_o* __this, UnityEngine_Vector3_array* points, float alpha, const MethodInfo* method);
// 0x595de90

void Effects_ShifterThunderEffect_Bolt__SetPoints
               (Effects_ShifterThunderEffect_Bolt_o *__this,UnityEngine_Vector3_array *points,float alpha,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_LineRenderer_o *pUVar6;
  Effects_ShifterThunderEffect_StaticFields *pEVar7;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07545903 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    Il2CppMethodInitialized_07545903 = '\x01';
  }
  pUVar6 = (__this->fields)._core;
  if (pUVar6 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__SetPositions(pUVar6,points,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._glow;
    if (pUVar6 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__SetPositions(pUVar6,points,(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._core;
      if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
      }
      if (pUVar6 != (UnityEngine_LineRenderer_o *)0x0) {
        pEVar7 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
        uVar2 = (pEVar7->CoreColor).fields.r;
        uVar4 = (pEVar7->CoreColor).fields.g;
        value_00.fields.g = (float)uVar4;
        value_00.fields.r = (float)uVar2;
        fVar1 = (pEVar7->CoreColor).fields.b;
        value.fields.a = alpha;
        value.fields.b = fVar1;
        value.fields.r = (float)uVar2;
        value.fields.g = (float)uVar4;
        UnityEngine_LineRenderer__set_endColor(pUVar6,value,(MethodInfo *)0x0);
        value_00.fields.a = alpha;
        value_00.fields.b = fVar1;
        UnityEngine_LineRenderer__set_startColor(pUVar6,value_00,(MethodInfo *)0x0);
        pUVar6 = (__this->fields)._glow;
        if (pUVar6 != (UnityEngine_LineRenderer_o *)0x0) {
          pEVar7 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
          uVar3 = (pEVar7->GlowColor).fields.r;
          uVar5 = (pEVar7->GlowColor).fields.g;
          value_02.fields.g = (float)uVar5;
          value_02.fields.r = (float)uVar3;
          fVar1 = (pEVar7->GlowColor).fields.b;
          value_01.fields.a = alpha * 0.45;
          value_01.fields.b = fVar1;
          value_01.fields.r = (float)uVar3;
          value_01.fields.g = (float)uVar5;
          UnityEngine_LineRenderer__set_endColor(pUVar6,value_01,(MethodInfo *)0x0);
          value_02.fields.b = fVar1;
          value_02.fields.a = alpha * 0.45;
          UnityEngine_LineRenderer__set_startColor(pUVar6,value_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Effects.ShifterThunderEffect$$Setup
// il2cpp: void Effects_ShifterThunderEffect__Setup (Effects_ShifterThunderEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x595c810

void Effects_ShifterThunderEffect__Setup
               (Effects_ShifterThunderEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  byte bVar1;
  int32_t viewId;
  Il2CppObject *obj;
  int32_t *piVar2;
  Characters_BaseCharacter_o *pCVar3;
  
  if (Il2CppMethodInitialized_075458fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075458fb = '\x01';
  }
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  (__this->fields)._timeLeft = liveTime;
  if ((settings != (System_Object_array *)0x0) && (settings->max_length != 0)) {
    if ((int)settings->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = settings->m_Items[0];
    if ((obj != (Il2CppObject *)0x0) && (obj->klass == g_data_07556710)) {
      piVar2 = il2cpp_vm_Object_Unbox(obj);
      viewId = *piVar2;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pCVar3 = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
      if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
           ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
          if ((*(uint64_t *)((char *)pCVar3 + 0x108)) == (void *)0x0) {
            ThrowNullReferenceException();
          }
          (__this->fields)._target = *(UnityEngine_Transform_o **)((long)(*(uint64_t *)((char *)pCVar3 + 0x108)) + 0x40);
          Il2CppCodeGenWriteBarrier(&(__this->fields)._target);
          return;
        }
      }
    }
  }
  return;
}


// Effects.ShifterThunderEffect$$Start
// il2cpp: void Effects_ShifterThunderEffect__Start (Effects_ShifterThunderEffect_o* __this, const MethodInfo* method);
// 0x595c930

void Effects_ShifterThunderEffect__Start(Effects_ShifterThunderEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Light_o **targetAddress;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Material_o *material;
  Effects_ShifterThunderEffect_Bolt_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar6;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Light_o *pUVar7;
  UnityEngine_Transform_o *parent;
  MethodInfo *in_RCX;
  int32_t points;
  long lVar8;
  MethodInfo *method_00;
  Effects_ShifterThunderEffect_c *method_01;
  Effects_ShifterThunderEffect_Bolt_array *pEVar9;
  ulong uVar10;
  UnityEngine_Vector3_o UVar11;
  
  if (Il2CppMethodInitialized_075458fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect_Bolt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Light);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder light");
    Il2CppMethodInitialized_075458fc = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    UVar11 = UnityEngine_Transform__get_localScale(pUVar5,(MethodInfo *)0x0);
    (__this->fields)._scale = UVar11.fields.x;
    method_01 = TypeInfo_Effects_ShifterThunderEffect;
    if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
    }
    material = Effects_ShifterThunderEffect__GetMaterial((MethodInfo *)method_01);
    pEVar9 = (__this->fields)._bolts;
    if (pEVar9 != (Effects_ShifterThunderEffect_Bolt_array *)0x0) {
      lVar8 = 0x20;
      uVar10 = 0;
      do {
        if ((long)(int)pEVar9->max_length <= (long)uVar10) {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor(__this_01,"Thunder light",(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            pUVar7 = UnityEngine_GameObject__AddComponent_object_
                               (__this_01,
                                (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Light);
            targetAddress = &(__this->fields)._light;
            (__this->fields)._light = pUVar7;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pUVar7 = (__this->fields)._light;
            if (pUVar7 != (UnityEngine_Light_o *)0x0) {
              pUVar5 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
              parent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_692d510(pUVar5,parent,false,(MethodInfo *)0x0);
                if (*targetAddress != (UnityEngine_Light_o *)0x0) {
                  pUVar5 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_0753e72c == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_0753e72c = '\x01';
                  }
                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
                    UVar11.fields.z = (pUVar4->upVector).fields.z * 20.0;
                    uVar2 = (pUVar4->upVector).fields.x;
                    uVar3 = (pUVar4->upVector).fields.y;
                    UVar11.fields.x = (float)uVar2 * 20.0;
                    UVar11.fields.y = (float)uVar3 * 20.0;
                    UnityEngine_Transform__set_localPosition(pUVar5,UVar11,(MethodInfo *)0x0);
                    if (*targetAddress != (UnityEngine_Light_o *)0x0) {
                      UnityEngine_Light__set_type(*targetAddress,2,(MethodInfo *)0x0);
                      pUVar7 = *targetAddress;
                      if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
                      }
                      if (pUVar7 != (UnityEngine_Light_o *)0x0) {
                        UnityEngine_Light__set_color
                                  (pUVar7,(UnityEngine_Color_o)
                                          (TypeInfo_Effects_ShifterThunderEffect->static_fields->GlowColor).
                                          fields,(MethodInfo *)0x0);
                        if (*targetAddress != (UnityEngine_Light_o *)0x0) {
                          UnityEngine_Light__set_range
                                    (*targetAddress,(__this->fields)._scale * 260.0,(MethodInfo *)0x0);
                          pUVar7 = (__this->fields)._light;
                          if (pUVar7 != (UnityEngine_Light_o *)0x0) {
                            method_00 = (MethodInfo *)0x0;
                            UnityEngine_Light__set_shadows(pUVar7,0,(MethodInfo *)0x0);
                            Effects_ShifterThunderEffect__UpdateBolts(__this,method_00);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        }
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        points = 8;
        if ((uVar10 & 3) == 0) {
          points = 0x12;
        }
        fVar1 = (__this->fields)._scale;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect_Bolt);
        System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
        pUVar6 = Effects_ShifterThunderEffect_Bolt__CreateLine(pUVar5,material,points,fVar1 * 0.9,in_RCX);
        (__this_00->fields)._core = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._core);
        pUVar6 = Effects_ShifterThunderEffect_Bolt__CreateLine(pUVar5,material,points,fVar1 * 9.0,in_RCX);
        (__this_00->fields)._glow = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._glow);
        if ((uint)pEVar9->max_length <= uVar10) {
          ThrowIndexOutOfRangeException();
        }
        pEVar9->m_Items[uVar10] = __this_00;
        Il2CppCodeGenWriteBarrier((void **)((long)pEVar9->m_Items + lVar8 + -0x20));
        uVar10 = uVar10 + 1;
        pEVar9 = (__this->fields)._bolts;
        lVar8 = lVar8 + 8;
      } while (pEVar9 != (Effects_ShifterThunderEffect_Bolt_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Effects.ShifterThunderEffect$$Update
// il2cpp: void Effects_ShifterThunderEffect__Update (Effects_ShifterThunderEffect_o* __this, const MethodInfo* method);
// 0x595dae0

void Effects_ShifterThunderEffect__Update(Effects_ShifterThunderEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Light_o *__this_00;
  bool bVar2;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_075458fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075458fd = '\x01';
  }
  if (Il2CppMethodInitialized_075458ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075458ef = '\x01';
  }
  fVar4 = (__this->fields)._timeLeft;
  fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 - fVar3;
  (__this->fields)._timeLeft = fVar4;
  if (fVar4 <= 0.0) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._target;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._target;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_0595dc44;
    value = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_0595dc44;
    UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
  }
  fVar4 = (__this->fields)._time;
  fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._time = fVar3 + fVar4;
  fVar4 = (__this->fields)._flickerTimeLeft;
  fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 - fVar3;
  (__this->fields)._flickerTimeLeft = fVar4;
  if (fVar4 <= 0.0) {
    __this_00 = (__this->fields)._light;
    if (__this_00 == (UnityEngine_Light_o *)0x0) {
label_0595dc44:
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      Effects_ShifterThunderEffect__UpdateBolts(__this,method_00);
      return;
    }
  }
  return;
}


// Effects.ShifterThunderEffect$$UpdateBolts
// il2cpp: void Effects_ShifterThunderEffect__UpdateBolts (Effects_ShifterThunderEffect_o* __this, const MethodInfo* method);
// 0x595d020
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x595d449: nop dword ptr [rax]
// asm:   0x595d96b: jmp 0x595d0b0

void Effects_ShifterThunderEffect__UpdateBolts(Effects_ShifterThunderEffect_o *__this,MethodInfo *method)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint32_t uVar12;
  Effects_ShifterThunderEffect_Bolt_array *pEVar13;
  Effects_ShifterThunderEffect_Bolt_o *pEVar14;
  UnityEngine_Renderer_o *pUVar15;
  Effects_ShifterThunderEffect_Bolt_o *pEVar16;
  UnityEngine_Vector3_array *pUVar17;
  UnityEngine_LineRenderer_o *pUVar18;
  Effects_ShifterThunderEffect_StaticFields *pEVar19;
  UnityEngine_Light_o *pUVar20;
  UnityEngine_Vector2_o UVar21;
  uint uVar22;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar23;
  bool value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar33 [12];
  int iVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Db;
  float fVar30;
  float extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float fVar31;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar32;
  float extraout_XMM0_Dd_01;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o end;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  float local_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float fStack_b4;
  UnityEngine_Vector3_Fields local_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  long local_88;
  ulong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_075458fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    Il2CppMethodInitialized_075458fe = '\x01';
  }
  (__this->fields)._flickerTimeLeft = 0.04;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    lVar25 = 0;
    UVar39 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    local_78._8_4_ = extraout_XMM0_Dc;
    local_78._0_8_ = UVar39.fields._0_8_;
    local_78._12_4_ = extraout_XMM0_Dd;
    local_100 = 0.0;
    do {
      pEVar13 = (__this->fields)._bolts;
      if (pEVar13 == (Effects_ShifterThunderEffect_Bolt_array *)0x0) goto label_0595dad4;
      uVar1 = lVar25 * 4;
      if ((uint)pEVar13->max_length <= uVar1) {
label_0595dacf:
        ThrowIndexOutOfRangeException();
      }
      fVar35 = (float)(int)lVar25 * -0.18 + (__this->fields)._time;
      pEVar14 = pEVar13->m_Items[lVar25 * 4];
      value = false;
      local_104 = 0.0;
      if ((0.0 <= fVar35) && (fVar35 < 0.42)) {
        fVar26 = UnityEngine_Random__get_value((MethodInfo *)0x0);
        value = false;
        if (0.15 < fVar26) {
          local_104 = UnityEngine_Random__Range(0.6,1.0,(MethodInfo *)0x0);
          local_104 = ((fVar35 * 0.6) / -0.42 + 1.0) * local_104;
          value = true;
        }
      }
      if ((pEVar14 == (Effects_ShifterThunderEffect_Bolt_o *)0x0) ||
         (pUVar15 = (UnityEngine_Renderer_o *)(pEVar14->fields)._core,
         pUVar15 == (UnityEngine_Renderer_o *)0x0)) goto label_0595dad4;
      local_88 = lVar25;
      UnityEngine_Renderer__set_enabled(pUVar15,value,(MethodInfo *)0x0);
      pUVar15 = (UnityEngine_Renderer_o *)(pEVar14->fields)._glow;
      if (pUVar15 == (UnityEngine_Renderer_o *)0x0) goto label_0595dad4;
      UnityEngine_Renderer__set_enabled(pUVar15,value,(MethodInfo *)0x0);
      pEVar13 = (__this->fields)._bolts;
      if (pEVar13 == (Effects_ShifterThunderEffect_Bolt_array *)0x0) goto label_0595dad4;
      if ((ulong)(uint)pEVar13->max_length <= (uVar1 | 1)) goto label_0595dacf;
      pEVar16 = pEVar13->m_Items[uVar1 | 1];
      if ((pEVar16 == (Effects_ShifterThunderEffect_Bolt_o *)0x0) ||
         (pUVar15 = (UnityEngine_Renderer_o *)(pEVar16->fields)._core,
         pUVar15 == (UnityEngine_Renderer_o *)0x0)) goto label_0595dad4;
      UnityEngine_Renderer__set_enabled(pUVar15,value,(MethodInfo *)0x0);
      pUVar15 = (UnityEngine_Renderer_o *)(pEVar16->fields)._glow;
      if (pUVar15 == (UnityEngine_Renderer_o *)0x0) goto label_0595dad4;
      UnityEngine_Renderer__set_enabled(pUVar15,value,(MethodInfo *)0x0);
      pEVar13 = (__this->fields)._bolts;
      if (pEVar13 == (Effects_ShifterThunderEffect_Bolt_array *)0x0) goto label_0595dad4;
      if ((ulong)(uint)pEVar13->max_length <= (uVar1 | 2)) goto label_0595dacf;
      pEVar16 = pEVar13->m_Items[uVar1 | 2];
      if ((pEVar16 == (Effects_ShifterThunderEffect_Bolt_o *)0x0) ||
         (pUVar15 = (UnityEngine_Renderer_o *)(pEVar16->fields)._core,
         pUVar15 == (UnityEngine_Renderer_o *)0x0)) goto label_0595dad4;
      UnityEngine_Renderer__set_enabled(pUVar15,value,(MethodInfo *)0x0);
      pUVar15 = (UnityEngine_Renderer_o *)(pEVar16->fields)._glow;
      if (pUVar15 == (UnityEngine_Renderer_o *)0x0) goto label_0595dad4;
      UnityEngine_Renderer__set_enabled(pUVar15,value,(MethodInfo *)0x0);
      pEVar13 = (__this->fields)._bolts;
      if (pEVar13 == (Effects_ShifterThunderEffect_Bolt_array *)0x0) goto label_0595dad4;
      if ((ulong)(uint)pEVar13->max_length <= (uVar1 | 3)) goto label_0595dacf;
      pEVar16 = pEVar13->m_Items[uVar1 | 3];
      if ((pEVar16 == (Effects_ShifterThunderEffect_Bolt_o *)0x0) ||
         (pUVar15 = (UnityEngine_Renderer_o *)(pEVar16->fields)._core,
         pUVar15 == (UnityEngine_Renderer_o *)0x0)) goto label_0595dad4;
      UnityEngine_Renderer__set_enabled(pUVar15,value,(MethodInfo *)0x0);
      pUVar15 = (UnityEngine_Renderer_o *)(pEVar16->fields)._glow;
      if (pUVar15 == (UnityEngine_Renderer_o *)0x0) goto label_0595dad4;
      method_01 = (MethodInfo *)(ulong)value;
      local_80 = uVar1;
      UnityEngine_Renderer__set_enabled(pUVar15,value,(MethodInfo *)0x0);
      if (value != false) {
        UVar21 = UnityEngine_Random__get_insideUnitCircle((MethodInfo *)0x0);
        fVar35 = (__this->fields)._scale;
        UVar40 = UnityEngine_Random__get_insideUnitSphere((MethodInfo *)0x0);
        fVar26 = (__this->fields)._scale;
        pUVar17 = (__this->fields)._mainPoints;
        if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
        }
        local_f8 = UVar21.fields.x;
        fStack_f4 = UVar21.fields.y;
        start.fields.x = fVar35 * local_f8 * 260.0 * 0.25 + (float)local_78._0_4_;
        start.fields.y = fVar35 * 260.0 + (float)local_78._4_4_;
        end.fields.x = fVar26 * UVar40.fields.x * 4.0 + (float)local_78._0_4_;
        end.fields.y = fVar26 * UVar40.fields.y * 4.0 + (float)local_78._4_4_;
        start.fields.z = fStack_f4 * 260.0 * 0.25 * fVar35 + UVar39.fields.z;
        end.fields.z = UVar40.fields.z * 4.0 * fVar26 + UVar39.fields.z;
        Effects_ShifterThunderEffect__Jag(start,end,pUVar17,method_01);
        Effects_ShifterThunderEffect_Bolt__SetPoints(pEVar14,(__this->fields)._mainPoints,local_104,method_00)
        ;
        local_58 = ZEXT416((uint)(local_104 * 0.7));
        local_68 = ZEXT416((uint)(local_104 * 0.7 * 0.45));
        lVar25 = 1;
        do {
          pUVar17 = (__this->fields)._mainPoints;
          uVar22 = UnityEngine_Random__Range_690e2b0(2,0xe,(MethodInfo *)0x0);
          if (pUVar17 == (UnityEngine_Vector3_array *)0x0) goto label_0595dad4;
          if ((uint)pUVar17->max_length <= uVar22) goto label_0595dacf;
          uVar2 = pUVar17->m_Items[(int)uVar22].fields.x;
          uVar7 = pUVar17->m_Items[(int)uVar22].fields.y;
          fVar35 = pUVar17->m_Items[(int)uVar22].fields.z;
          if (Il2CppMethodInitialized_075450a5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_075450a5 = '\x01';
          }
          pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar3 = (pUVar23->downVector).fields.x;
          uVar8 = (pUVar23->downVector).fields.y;
          fVar26 = (pUVar23->downVector).fields.z;
          UVar40 = UnityEngine_Random__get_insideUnitSphere((MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e72d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72d = '\x01';
            local_a0.x = 0.0;
            local_a0.y = 0.0;
            if (g_data_0753e729 == '\0') goto label_0595d99e;
label_0595d521:
            local_a0.x = 0.0;
            local_a0.y = 0.0;
            uVar12 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            local_a0.x = 0.0;
            local_a0.y = 0.0;
            if (g_data_0753e729 != '\0') goto label_0595d521;
label_0595d99e:
            local_a0.x = 0.0;
            local_a0.y = 0.0;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            g_data_0753e729 = '\x01';
            uVar12 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          if (uVar12 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          local_128._0_4_ = (float)uVar3 + UVar40.fields.x * 1.2;
          local_128._4_4_ = (float)uVar8 + UVar40.fields.y * 1.2;
          fVar26 = fVar26 + UVar40.fields.z * 1.2;
          fStack_120 = extraout_XMM0_Dc_00 * 0.0 + 0.0;
          fStack_11c = extraout_XMM0_Dd_00 * 0.0 + 0.0;
          uVar29 = 0;
          fVar27 = fVar26 * fVar26 +
                   (float)local_128._4_4_ * (float)local_128._4_4_ +
                   (float)local_128._0_4_ * (float)local_128._0_4_;
          if (fVar27 < 0.0) {
            fVar27 = sqrtf(fVar27);
            uVar29 = extraout_XMM0_Db;
            if (1e-05 < fVar27) goto label_0595d5aa;
label_0595d578:
            pUVar23 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar26 = (pUVar23->zeroVector).fields.z;
          }
          else {
            fVar27 = SQRT(fVar27);
            if (fVar27 <= 1e-05) goto label_0595d578;
label_0595d5aa:
            fVar26 = fVar26 / fVar27;
            auVar34._4_4_ = fVar27;
            auVar34._0_4_ = fVar27;
            auVar34._8_4_ = uVar29;
            auVar34._12_4_ = uVar29;
            auVar34 = divps(_local_128,auVar34);
            local_a0.x = auVar34._0_4_;
            local_a0.y = auVar34._4_4_;
            pUVar23 = (UnityEngine_Vector3_StaticFields *)&local_a0;
          }
          uVar4 = (pUVar23->zeroVector).fields.x;
          uVar9 = (pUVar23->zeroVector).fields.y;
          fVar27 = (__this->fields)._scale;
          fVar28 = UnityEngine_Random__Range(0.12,0.3,(MethodInfo *)0x0);
          pUVar17 = (__this->fields)._branchPoints;
          if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
            if (Il2CppMethodInitialized_0753e7b7 == '\0') goto label_0595d9f8;
label_0595d63f:
            uVar12 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            if (Il2CppMethodInitialized_0753e7b7 != '\0') goto label_0595d63f;
label_0595d9f8:
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e7b7 = '\x01';
            uVar12 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          if (uVar12 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fVar36 = fVar28 * (float)uVar4 * 260.0 * fVar27 + (float)uVar2;
          fVar37 = fVar28 * (float)uVar9 * 260.0 * fVar27 + (float)uVar7;
          fVar30 = 0.0;
          fVar31 = 0.0;
          fVar32 = 0.0;
          fVar38 = fVar26 * 260.0 * fVar27 * fVar28 + fVar35;
          fVar26 = fVar35 - fVar38;
          fVar27 = (float)uVar2 - fVar36;
          fVar28 = (float)uVar7 - fVar37;
          fVar26 = fVar26 * fVar26 + fVar28 * fVar28 + fVar27 * fVar27;
          if (fVar26 < 0.0) {
            local_a0.z = sqrtf(fVar26);
            fVar30 = extraout_XMM0_Db_00;
            fVar31 = extraout_XMM0_Dc_01;
            fVar32 = extraout_XMM0_Dd_01;
          }
          else {
            local_a0.z = SQRT(fVar26);
          }
          fStack_94 = fVar30;
          fStack_90 = fVar31;
          fStack_8c = fVar32;
          if (pUVar17 == (UnityEngine_Vector3_array *)0x0) goto label_0595dad4;
          iVar24 = (int)pUVar17->max_length + -1;
          if (-1 < iVar24) {
            uVar22 = 0;
            local_48 = local_a0.z;
            fStack_44 = local_a0.z;
            fStack_40 = local_a0.z;
            fStack_3c = local_a0.z;
            do {
              fVar26 = (float)(int)uVar22 / (float)iVar24;
              UVar40 = UnityEngine_Random__get_insideUnitSphere((MethodInfo *)0x0);
              fVar27 = sinf(fVar26 * 3.1415927);
              if ((uint)pUVar17->max_length <= uVar22) goto label_0595dacf;
              auVar33 = ZEXT812(0x3f800000);
              if (fVar26 <= auVar33._0_4_) {
                auVar33._4_8_ = auVar33._4_8_;
                auVar33._0_4_ = fVar26;
              }
              fVar26 = (float)(-(uint)(0.0 <= fVar26) & auVar33._0_4_);
              local_b8 = UVar40.fields.x;
              fStack_b4 = UVar40.fields.y;
              pUVar17->m_Items[(int)uVar22].fields.x =
                   fVar27 * local_b8 * local_48 * 0.045 + fVar26 * (fVar36 - (float)uVar2) + (float)uVar2;
              pUVar17->m_Items[(int)uVar22].fields.y =
                   fVar27 * fStack_b4 * fStack_44 * 0.045 + fVar26 * (fVar37 - (float)uVar7) + (float)uVar7;
              pUVar17->m_Items[(int)uVar22].fields.z =
                   UVar40.fields.z * local_a0.z * 0.045 * fVar27 + fVar26 * (fVar38 - fVar35) + fVar35;
              uVar22 = uVar22 + 1;
            } while ((int)uVar22 <= iVar24);
          }
          pEVar13 = (__this->fields)._bolts;
          if (pEVar13 == (Effects_ShifterThunderEffect_Bolt_array *)0x0) goto label_0595dad4;
          if ((ulong)(uint)pEVar13->max_length <= local_80 + lVar25) goto label_0595dacf;
          pEVar14 = pEVar13->m_Items[(int)(local_80 + lVar25)];
          if (pEVar14 == (Effects_ShifterThunderEffect_Bolt_o *)0x0) goto label_0595dad4;
          pUVar17 = (__this->fields)._branchPoints;
          if (Il2CppMethodInitialized_07545903 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
            Il2CppMethodInitialized_07545903 = '\x01';
          }
          pUVar18 = (pEVar14->fields)._core;
          if (pUVar18 == (UnityEngine_LineRenderer_o *)0x0) goto label_0595dad4;
          UnityEngine_LineRenderer__SetPositions(pUVar18,pUVar17,(MethodInfo *)0x0);
          pUVar18 = (pEVar14->fields)._glow;
          if (pUVar18 == (UnityEngine_LineRenderer_o *)0x0) goto label_0595dad4;
          UnityEngine_LineRenderer__SetPositions(pUVar18,pUVar17,(MethodInfo *)0x0);
          pUVar18 = (pEVar14->fields)._core;
          if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
          }
          if (pUVar18 == (UnityEngine_LineRenderer_o *)0x0) goto label_0595dad4;
          pEVar19 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
          uVar5 = (pEVar19->CoreColor).fields.r;
          uVar10 = (pEVar19->CoreColor).fields.g;
          value_00.fields.g = (float)uVar10;
          value_00.fields.r = (float)uVar5;
          fVar35 = (pEVar19->CoreColor).fields.b;
          uVar29 = local_58._0_4_;
          UnityEngine_LineRenderer__set_endColor
                    (pUVar18,(UnityEngine_Color_o)
                             CONCAT88(CONCAT44(local_58._0_4_,fVar35),CONCAT44((float)uVar10,(float)uVar5)),
                     (MethodInfo *)0x0);
          value_00.fields.b = fVar35;
          value_00.fields.a = (float)uVar29;
          UnityEngine_LineRenderer__set_startColor(pUVar18,value_00,(MethodInfo *)0x0);
          pUVar18 = (pEVar14->fields)._glow;
          if (pUVar18 == (UnityEngine_LineRenderer_o *)0x0) goto label_0595dad4;
          pEVar19 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
          uVar6 = (pEVar19->GlowColor).fields.r;
          uVar11 = (pEVar19->GlowColor).fields.g;
          value_01.fields.g = (float)uVar11;
          value_01.fields.r = (float)uVar6;
          fVar35 = (pEVar19->GlowColor).fields.b;
          uVar29 = local_68._0_4_;
          UnityEngine_LineRenderer__set_endColor
                    (pUVar18,(UnityEngine_Color_o)
                             CONCAT88(CONCAT44(local_68._0_4_,fVar35),CONCAT44((float)uVar11,(float)uVar6)),
                     (MethodInfo *)0x0);
          value_01.fields.b = fVar35;
          value_01.fields.a = (float)uVar29;
          UnityEngine_LineRenderer__set_startColor(pUVar18,value_01,(MethodInfo *)0x0);
          lVar25 = lVar25 + 1;
        } while (lVar25 != 4);
      }
      if (local_100 <= local_104) {
        local_100 = local_104;
      }
      lVar25 = local_88 + 1;
    } while (lVar25 != 4);
    pUVar20 = (__this->fields)._light;
    if (pUVar20 != (UnityEngine_Light_o *)0x0) {
      fVar26 = (__this->fields)._time / 1.4;
      fVar35 = 1.0;
      if (fVar26 <= 1.0) {
        fVar35 = fVar26;
      }
      fVar35 = (float)(~-(uint)(0.0 <= fVar26) & 0x3f800000 | (uint)(1.0 - fVar35) & -(uint)(0.0 <= fVar26));
      if (local_100 <= 0.25) {
        local_100 = 0.25;
      }
      UnityEngine_Light__set_intensity(pUVar20,local_100 * fVar35 * fVar35 * 8.0,(MethodInfo *)0x0);
      pUVar20 = (__this->fields)._light;
      if (pUVar20 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar20,0.0 < fVar35,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0595dad4:
  ThrowNullReferenceException();
}


// Effects.ShifterThunderEffect$$Jag
// il2cpp: void Effects_ShifterThunderEffect__Jag (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Vector3_array* points, const MethodInfo* method);
// 0x595dc90

void Effects_ShifterThunderEffect__Jag
               (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,UnityEngine_Vector3_array *points,
               MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  float local_78;
  float fStack_74;
  float local_58;
  float fStack_54;
  float local_28;
  float fStack_24;
  
  fVar7 = start.fields.z;
  if (Il2CppMethodInitialized_0753e7b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b7 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar4 = fVar7 - end.fields.z;
  local_58 = start.fields.x;
  fStack_54 = start.fields.y;
  local_78 = end.fields.x;
  fStack_74 = end.fields.y;
  fVar4 = fVar4 * fVar4 +
          (fStack_54 - fStack_74) * (fStack_54 - fStack_74) + (local_58 - local_78) * (local_58 - local_78);
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (points == (UnityEngine_Vector3_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = (int)points->max_length + -1;
  if (-1 < iVar3) {
    uVar2 = 0;
    do {
      fVar5 = (float)(int)uVar2 / (float)iVar3;
      UVar9 = UnityEngine_Random__get_insideUnitSphere((MethodInfo *)0x0);
      fVar6 = sinf(fVar5 * 3.1415927);
      if ((uint)points->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      fVar8 = 1.0;
      if (fVar5 <= 1.0) {
        fVar8 = fVar5;
      }
      fVar8 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar8);
      local_28 = UVar9.fields.x;
      fStack_24 = UVar9.fields.y;
      points->m_Items[(int)uVar2].fields.x =
           fVar6 * local_28 * fVar4 * 0.045 + fVar8 * (local_78 - local_58) + local_58;
      points->m_Items[(int)uVar2].fields.y =
           fVar6 * fStack_24 * fVar4 * 0.045 + fVar8 * (fStack_74 - fStack_54) + fStack_54;
      points->m_Items[(int)uVar2].fields.z =
           UVar9.fields.z * fVar4 * 0.045 * fVar6 + fVar8 * (end.fields.z - fVar7) + fVar7;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 <= iVar3);
  }
  return;
}


// Effects.ShifterThunderEffect$$GetMaterial
// il2cpp: UnityEngine_Material_o* Effects_ShifterThunderEffect__GetMaterial (const MethodInfo* method);
// 0x595cc90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x595ce74: nop word ptr cs:[rax + rax]

UnityEngine_Material_o * Effects_ShifterThunderEffect__GetMaterial(MethodInfo *method)

{
  Effects_ShifterThunderEffect_StaticFields *pEVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Material_o *__this;
  UnityEngine_Texture_o *__this_00;
  int y;
  float fVar5;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_075458ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter thunder bolt");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseMap");
    il2cpp_codegen_initialize_runtime_metadata(&"Effects/Materials/ShifterThunderMat1");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter thunder glow");
    Il2CppMethodInitialized_075458ff = '\x01';
  }
  if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
  }
  pUVar4 = TypeInfo_Effects_ShifterThunderEffect->static_fields->_material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
    }
label_0595cf6c:
    return TypeInfo_Effects_ShifterThunderEffect->static_fields->_material;
  }
  pUVar4 = UnityEngine_Resources__Load_object_
                     ("Effects/Materials/ShifterThunderMat1",
                      (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Material);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor_68dcfd0(__this,pUVar4,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,"Shifter thunder bolt",(MethodInfo *)0x0);
    if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
    }
    pEVar1 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
    pEVar1->_material = __this;
    Il2CppCodeGenWriteBarrier(&pEVar1->_material);
    __this_00 = (UnityEngine_Texture_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
    UnityEngine_Texture2D___ctor_68efe30
              ((UnityEngine_Texture2D_o *)__this_00,1,0x20,4,false,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Texture_o *)0x0) {
      y = 0;
      UnityEngine_Texture__set_wrapMode(__this_00,1,(MethodInfo *)0x0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_00,"Shifter thunder glow",(MethodInfo *)0x0);
      iVar3 = (*(__this_00->klass->vtable)._7_get_height.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._7_get_height.method);
      if (0 < iVar3) {
        do {
          iVar3 = (*(__this_00->klass->vtable)._7_get_height.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._7_get_height.method);
          fVar5 = (float)y / ((float)iVar3 + -1.0);
          fVar5 = 1.0 - ABS(fVar5 + fVar5 + -1.0);
          color.fields.a = (3.0 - (fVar5 + fVar5)) * fVar5 * fVar5;
          color.fields.b = 1.0;
          color.fields.r = 1.0;
          color.fields.g = 1.0;
          UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this_00,0,y,color,(MethodInfo *)0x0);
          y = y + 1;
          iVar3 = (*(__this_00->klass->vtable)._7_get_height.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._7_get_height.method);
        } while (y < iVar3);
      }
      UnityEngine_Texture2D__Apply((UnityEngine_Texture2D_o *)__this_00,false,true,(MethodInfo *)0x0);
      if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
      }
      pUVar4 = TypeInfo_Effects_ShifterThunderEffect->static_fields->_material;
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetTexture(pUVar4,"_BaseMap",__this_00,(MethodInfo *)0x0);
        goto label_0595cf6c;
      }
    }
  }
  ThrowNullReferenceException();
}


// Effects.ShifterThunderEffect$$.ctor
// il2cpp: void Effects_ShifterThunderEffect___ctor (Effects_ShifterThunderEffect_o* __this, const MethodInfo* method);
// 0x595dfc0

void Effects_ShifterThunderEffect___ctor(Effects_ShifterThunderEffect_o *__this,MethodInfo *method)

{
  Effects_ShifterThunderEffect_Bolt_array *pEVar1;
  UnityEngine_Vector3_array *pUVar2;
  
  if (Il2CppMethodInitialized_07545900 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect_Bolt_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_07545900 = '\x01';
  }
  pEVar1 = (Effects_ShifterThunderEffect_Bolt_array *)
           SZArrayNew(TypeInfo_Effects_ShifterThunderEffect_Bolt_array,0x10);
  (__this->fields)._bolts = pEVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bolts);
  pUVar2 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,0x12);
  (__this->fields)._mainPoints = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mainPoints);
  pUVar2 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
  (__this->fields)._branchPoints = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._branchPoints);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Effects.ShifterThunderEffect$$.cctor
// il2cpp: void Effects_ShifterThunderEffect___cctor (const MethodInfo* method);
// 0x595e070

void Effects_ShifterThunderEffect___cctor(MethodInfo *method)

{
  Effects_ShifterThunderEffect_StaticFields *pEVar1;
  
  if (Il2CppMethodInitialized_07545901 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    Il2CppMethodInitialized_07545901 = '\x01';
  }
  pEVar1 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
  (pEVar1->CoreColor).fields.r = 1.0;
  (pEVar1->CoreColor).fields.g = 0.98;
  (pEVar1->CoreColor).fields.b = 0.9;
  (pEVar1->CoreColor).fields.a = 1.0;
  pEVar1 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
  (pEVar1->GlowColor).fields.r = 1.0;
  (pEVar1->GlowColor).fields.g = 0.68;
  (pEVar1->GlowColor).fields.b = 0.28;
  (pEVar1->GlowColor).fields.a = 1.0;
  return;
}


