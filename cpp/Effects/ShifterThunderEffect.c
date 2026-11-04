// Type: Effects.ShifterThunderEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Effects/ShifterThunderEffect.cs
// Prior real C# source: none
// --------------------------------

// Effects.ShifterThunderEffect.Bolt$$.ctor
// il2cpp: void Effects_ShifterThunderEffect_Bolt___ctor (Effects_ShifterThunderEffect_Bolt_o* __this, UnityEngine_Transform_o* parent, UnityEngine_Material_o* material, int32_t points, float scale, const MethodInfo* method);
// 0x181e63360

void Effects_ShifterThunderEffect_Bolt___ctor
               (Effects_ShifterThunderEffect_Bolt_o *__this,UnityEngine_Transform_o *parent,
               UnityEngine_Material_o *material,int32_t points,float scale,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pUVar1 = Effects_ShifterThunderEffect_Bolt__CreateLine(parent,material,points,scale * 0.9,(MethodInfo *)0x0)
  ;
  (__this->fields)._core = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._core,pUVar1);
  pUVar1 = Effects_ShifterThunderEffect_Bolt__CreateLine(parent,material,points,scale * 9.0,(MethodInfo *)0x0)
  ;
  (__this->fields)._glow = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._glow,pUVar1);
  return;
}


// Effects.ShifterThunderEffect.Bolt$$CreateLine
// il2cpp: UnityEngine_LineRenderer_o* Effects_ShifterThunderEffect_Bolt__CreateLine (UnityEngine_Transform_o* parent, UnityEngine_Material_o* material, int32_t points, float width, const MethodInfo* method);
// 0x181e62e90

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
  UnityEngine_Keyframe_Fields local_98;
  UnityEngine_Keyframe_Fields local_78;
  UnityEngine_Keyframe_Fields local_58 [2];
  
  if (Il2CppMethodInitialized_184344f61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AnimationCurve);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Keyframe_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder bolt");
    Il2CppMethodInitialized_184344f61 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(pUVar1,"Thunder bolt",(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    if (__this != (UnityEngine_LineRenderer_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
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
              local_98.m_Time = 0.0;
              local_98.m_Value = 0.0;
              local_98.m_InTangent = 0.0;
              local_98.m_OutTangent = 0.0;
              local_98.m_WeightedMode = 0;
              local_98.m_InWeight = 0.0;
              local_98.m_OutWeight = 0.0;
              UnityEngine_Keyframe___ctor
                        ((UnityEngine_Keyframe_o *)&local_98,0.0,width * 0.6,(MethodInfo *)0x0);
              if (keys != (UnityEngine_Keyframe_array *)0x0) {
                if ((int)keys->max_length != 0) {
                  local_58[0].m_Time = local_98.m_Time;
                  local_58[0].m_Value = local_98.m_Value;
                  local_58[0].m_InTangent = local_98.m_InTangent;
                  local_58[0].m_OutTangent = local_98.m_OutTangent;
                  local_58[0].m_WeightedMode = local_98.m_WeightedMode;
                  local_58[0].m_InWeight = local_98.m_InWeight;
                  local_58[0].m_OutWeight = local_98.m_OutWeight;
                  keys->m_Items[0].fields.m_Time = local_98.m_Time;
                  keys->m_Items[0].fields.m_Value = local_98.m_Value;
                  keys->m_Items[0].fields.m_InTangent = local_98.m_InTangent;
                  keys->m_Items[0].fields.m_OutTangent = local_98.m_OutTangent;
                  keys->m_Items[0].fields.m_OutTangent = local_98.m_OutTangent;
                  keys->m_Items[0].fields.m_WeightedMode = local_98.m_WeightedMode;
                  keys->m_Items[0].fields.m_InWeight = local_98.m_InWeight;
                  keys->m_Items[0].fields.m_OutWeight = local_98.m_OutWeight;
                  local_78.m_Time = 0.0;
                  local_78.m_Value = 0.0;
                  local_78.m_InTangent = 0.0;
                  local_78.m_OutTangent = 0.0;
                  local_78.m_WeightedMode = 0;
                  local_78.m_InWeight = 0.0;
                  local_78.m_OutWeight = 0.0;
                  UnityEngine_Keyframe___ctor((UnityEngine_Keyframe_o *)&local_78,1.0,width,(MethodInfo *)0x0)
                  ;
                  if (1 < (uint)keys->max_length) {
                    local_58[0].m_Time = local_78.m_Time;
                    local_58[0].m_Value = local_78.m_Value;
                    local_58[0].m_InTangent = local_78.m_InTangent;
                    local_58[0].m_OutTangent = local_78.m_OutTangent;
                    local_58[0].m_WeightedMode = local_78.m_WeightedMode;
                    local_58[0].m_InWeight = local_78.m_InWeight;
                    local_58[0].m_OutWeight = local_78.m_OutWeight;
                    keys->m_Items[1].fields.m_Time = local_78.m_Time;
                    keys->m_Items[1].fields.m_Value = local_78.m_Value;
                    keys->m_Items[1].fields.m_InTangent = local_78.m_InTangent;
                    keys->m_Items[1].fields.m_OutTangent = local_78.m_OutTangent;
                    keys->m_Items[1].fields.m_OutTangent = local_78.m_OutTangent;
                    keys->m_Items[1].fields.m_WeightedMode = local_78.m_WeightedMode;
                    keys->m_Items[1].fields.m_InWeight = local_78.m_InWeight;
                    keys->m_Items[1].fields.m_OutWeight = local_78.m_OutWeight;
                    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_AnimationCurve);
                    UnityEngine_AnimationCurve___ctor(__this_02,keys,(MethodInfo *)0x0);
                    UnityEngine_LineRenderer__SetWidthCurve(__this,__this_02,(MethodInfo *)0x0);
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
// 0x181e63310

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
// 0x181e63140

void Effects_ShifterThunderEffect_Bolt__SetPoints
               (Effects_ShifterThunderEffect_Bolt_o *__this,UnityEngine_Vector3_array *points,float alpha,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_LineRenderer_o *pUVar4;
  Effects_ShifterThunderEffect_StaticFields *pEVar5;
  UnityEngine_Color_o local_58 [5];
  
  if (Il2CppMethodInitialized_184344f62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    Il2CppMethodInitialized_184344f62 = '\x01';
  }
  pUVar4 = (__this->fields)._core;
  if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__SetPositions(pUVar4,points,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._glow;
    if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__SetPositions(pUVar4,points,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._core;
      if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
      }
      if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
        pEVar5 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
        fVar1 = (pEVar5->CoreColor).fields.r;
        fVar2 = (pEVar5->CoreColor).fields.g;
        fVar3 = (pEVar5->CoreColor).fields.b;
        local_58[0].fields.r = fVar1;
        local_58[0].fields.g = fVar2;
        local_58[0].fields.b = fVar3;
        local_58[0].fields.a = alpha;
        UnityEngine_LineRenderer__set_endColor(pUVar4,local_58,(MethodInfo *)0x0);
        local_58[0].fields.r = fVar1;
        local_58[0].fields.g = fVar2;
        local_58[0].fields.b = fVar3;
        local_58[0].fields.a = alpha;
        UnityEngine_LineRenderer__set_startColor(pUVar4,local_58,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._glow;
        if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
          pEVar5 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
          fVar1 = (pEVar5->GlowColor).fields.r;
          fVar2 = (pEVar5->GlowColor).fields.g;
          fVar3 = (pEVar5->GlowColor).fields.b;
          local_58[0].fields.r = fVar1;
          local_58[0].fields.g = fVar2;
          local_58[0].fields.b = fVar3;
          local_58[0].fields.a = alpha * 0.45;
          UnityEngine_LineRenderer__set_endColor(pUVar4,local_58,(MethodInfo *)0x0);
          local_58[0].fields.r = fVar1;
          local_58[0].fields.g = fVar2;
          local_58[0].fields.b = fVar3;
          local_58[0].fields.a = alpha * 0.45;
          UnityEngine_LineRenderer__set_startColor(pUVar4,local_58,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Effects.ShifterThunderEffect$$Setup
// il2cpp: void Effects_ShifterThunderEffect__Setup (Effects_ShifterThunderEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x181e75dc0

void Effects_ShifterThunderEffect__Setup
               (Effects_ShifterThunderEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  byte bVar1;
  int32_t viewId;
  Il2CppObject *obj;
  UnityEngine_Transform_o *value;
  Il2CppObject *pIVar2;
  int32_t *piVar3;
  Characters_BaseCharacter_o *pCVar4;
  
  if (Il2CppMethodInitialized_184344f5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184344f5a = '\x01';
  }
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields)._timeLeft = liveTime;
  if ((settings != (System_Object_array *)0x0) && (settings->max_length != 0)) {
    if ((int)settings->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = settings->m_Items[0];
    if (obj != (Il2CppObject *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
      if (obj->klass == g_data_184354e08) {
        pIVar2 = obj;
      }
      if (pIVar2 != (Il2CppObject *)0x0) {
        if ((obj->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
        }
        piVar3 = il2cpp_object_unbox(obj);
        viewId = *piVar3;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pCVar4 = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
          bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
          if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
             ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
            if ((*(uint64_t *)((char *)pCVar4 + 0x100)) == (void *)0x0) {
              ThrowNullReferenceException();
            }
            value = *(UnityEngine_Transform_o **)((longlong)(*(uint64_t *)((char *)pCVar4 + 0x100)) + 0x40);
            (__this->fields)._target = value;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._target,value);
          }
        }
      }
    }
  }
  return;
}


// Effects.ShifterThunderEffect$$Start
// il2cpp: void Effects_ShifterThunderEffect__Start (Effects_ShifterThunderEffect_o* __this, const MethodInfo* method);
// 0x181e75f10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e75ff3: mov r13d, 8
// asm:   0x181e75ff9: nop dword ptr [rax]
// asm:   0x181e760a2: jmp 0x181e76000

void Effects_ShifterThunderEffect__Start(Effects_ShifterThunderEffect_o *__this,MethodInfo *method)

{
  float scale;
  undefined4 uVar1;
  undefined4 uVar2;
  Effects_ShifterThunderEffect_Bolt_array *pEVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  Effects_ShifterThunderEffect_StaticFields *pEVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Material_o *material;
  Effects_ShifterThunderEffect_Bolt_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Light_o *pUVar8;
  UnityEngine_Transform_o *parent;
  uint uVar9;
  uint uVar10;
  int32_t points;
  UnityEngine_Color_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184344f5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect_Bolt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Light);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder light");
    Il2CppMethodInitialized_184344f5b = '\x01';
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = UnityEngine_Transform__get_localScale((UnityEngine_Vector3_o *)local_48,pUVar6,(MethodInfo *)0x0)
    ;
    (__this->fields)._scale = (pUVar7->fields).x;
    if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
    }
    material = Effects_ShifterThunderEffect__GetMaterial((MethodInfo *)0x0);
    uVar10 = 0;
    pEVar3 = (__this->fields)._bolts;
    while (pEVar3 != (Effects_ShifterThunderEffect_Bolt_array *)0x0) {
      if ((int)pEVar3->max_length <= (int)uVar10) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor(__this_01,"Thunder light",(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          pUVar8 = UnityEngine_GameObject__AddComponent_object_
                             (__this_01,
                              (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Light);
          (__this->fields)._light = pUVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._light,pUVar8);
          pUVar8 = (__this->fields)._light;
          if (pUVar8 != (UnityEngine_Light_o *)0x0) {
            pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0)
            ;
            parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,parent,false,(MethodInfo *)0x0);
              pUVar8 = (__this->fields)._light;
              if (pUVar8 != (UnityEngine_Light_o *)0x0) {
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar1 = (pUVar4->upVector).fields.x;
                uVar2 = (pUVar4->upVector).fields.y;
                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                  local_48[0].g = (float)uVar2 * 20.0;
                  local_48[0].r = (float)uVar1 * 20.0;
                  local_48[0].b = (pUVar4->upVector).fields.z * 20.0;
                  UnityEngine_Transform__set_localPosition
                            (pUVar6,(UnityEngine_Vector3_o *)local_48,(MethodInfo *)0x0);
                  pUVar8 = (__this->fields)._light;
                  if (pUVar8 != (UnityEngine_Light_o *)0x0) {
                    UnityEngine_Light__set_type(pUVar8,2,(MethodInfo *)0x0);
                    pUVar8 = (__this->fields)._light;
                    if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
                    }
                    if (pUVar8 != (UnityEngine_Light_o *)0x0) {
                      pEVar5 = TypeInfo_Effects_ShifterThunderEffect->static_fields;
                      local_48[0].r = (pEVar5->GlowColor).fields.r;
                      local_48[0].g = (pEVar5->GlowColor).fields.g;
                      local_48[0].b = (pEVar5->GlowColor).fields.b;
                      local_48[0].a = (pEVar5->GlowColor).fields.a;
                      UnityEngine_Light__set_color(pUVar8,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
                      pUVar8 = (__this->fields)._light;
                      if (pUVar8 != (UnityEngine_Light_o *)0x0) {
                        UnityEngine_Light__set_range(pUVar8,(__this->fields)._scale * 260.0,(MethodInfo *)0x0)
                        ;
                        pUVar8 = (__this->fields)._light;
                        if (pUVar8 != (UnityEngine_Light_o *)0x0) {
                          UnityEngine_Light__set_shadows(pUVar8,0,(MethodInfo *)0x0);
                          Effects_ShifterThunderEffect__UpdateBolts(__this,(MethodInfo *)0x0);
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
      pEVar3 = (__this->fields)._bolts;
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      scale = (__this->fields)._scale;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect_Bolt);
      uVar9 = uVar10 & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      points = 0x12;
      if (uVar9 != 0) {
        points = 8;
      }
      Effects_ShifterThunderEffect_Bolt___ctor(__this_00,pUVar6,material,points,scale,(MethodInfo *)0x0);
      if (pEVar3 == (Effects_ShifterThunderEffect_Bolt_array *)0x0) break;
      if ((uint)pEVar3->max_length <= uVar10) {
        ThrowIndexOutOfRangeException();
      }
      pEVar3->m_Items[(int)uVar10] = __this_00;
      Il2CppCodeGenWriteBarrier(pEVar3->m_Items + (int)uVar10,__this_00);
      uVar10 = uVar10 + 1;
      pEVar3 = (__this->fields)._bolts;
    }
  }
  ThrowNullReferenceException();
}


// Effects.ShifterThunderEffect$$Update
// il2cpp: void Effects_ShifterThunderEffect__Update (Effects_ShifterThunderEffect_o* __this, const MethodInfo* method);
// 0x181e76970

void Effects_ShifterThunderEffect__Update(Effects_ShifterThunderEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Light_o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344f5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344f5c = '\x01';
  }
  Effects_BaseEffect__Update((Effects_BaseEffect_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._target;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._target;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_181e76a83;
    pUVar3 = UnityEngine_Transform__get_position(local_28,pUVar1,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_181e76a83;
    local_38.x = (pUVar3->fields).x;
    local_38.y = (pUVar3->fields).y;
    local_38.z = (pUVar3->fields).z;
    UnityEngine_Transform__set_position(__this_01,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
  }
  fVar5 = (__this->fields)._time;
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar6 = (__this->fields)._flickerTimeLeft;
  (__this->fields)._time = fVar4 + fVar5;
  fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar6 = fVar6 - fVar5;
  (__this->fields)._flickerTimeLeft = fVar6;
  if (fVar6 <= 0.0) {
    __this_00 = (__this->fields)._light;
    if (__this_00 == (UnityEngine_Light_o *)0x0) {
label_181e76a83:
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      Effects_ShifterThunderEffect__UpdateBolts(__this,(MethodInfo *)0x0);
    }
  }
  return;
}


// Effects.ShifterThunderEffect$$UpdateBolts
// il2cpp: void Effects_ShifterThunderEffect__UpdateBolts (Effects_ShifterThunderEffect_o* __this, const MethodInfo* method);
// 0x181e762a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e763c9: nop dword ptr [rax]
// asm:   0x181e76469: movaps xmm13, xmm8
// asm:   0x181e7649c: nop dword ptr [rax]
// asm:   0x181e765fe: nop 

void Effects_ShifterThunderEffect__UpdateBolts(Effects_ShifterThunderEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  Effects_ShifterThunderEffect_Bolt_array *pEVar11;
  Effects_ShifterThunderEffect_Bolt_o *__this_00;
  UnityEngine_Vector3_array *pUVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  UnityEngine_Light_o *pUVar14;
  uint uVar15;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar16;
  UnityEngine_Vector2_o UVar17;
  int iVar18;
  bool visible;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fStackX_1c;
  UnityEngine_Vector3_o local_188;
  UnityEngine_Vector3_o local_178;
  UnityEngine_Vector3_Fields local_168;
  UnityEngine_Vector3_Fields local_158;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  UnityEngine_Vector3_Fields local_128 [2];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  UnityEngine_Vector3_o local_e8;
  UnityEngine_Vector3_o local_d8 [14];
  
  if (Il2CppMethodInitialized_184344f5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    Il2CppMethodInitialized_184344f5d = '\x01';
  }
  (__this->fields)._flickerTimeLeft = 0.04;
  __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
    pUVar16 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)local_128,__this_01,(MethodInfo *)0x0);
    fVar26 = 0.0;
    iVar19 = 0;
    uVar5._0_4_ = (pUVar16->fields).x;
    uVar5._4_4_ = (pUVar16->fields).y;
    fVar23 = (pUVar16->fields).z;
    uStack_f0 = 0;
    local_108 = uVar5._4_4_;
    fStack_104 = uVar5._4_4_;
    fStack_100 = uVar5._4_4_;
    fStack_fc = uVar5._4_4_;
    local_f8 = uVar5;
    do {
      fVar20 = 0.0;
      pEVar11 = (__this->fields)._bolts;
      if (pEVar11 == (Effects_ShifterThunderEffect_Bolt_array *)0x0) goto label_181e7695d;
      if ((uint)pEVar11->max_length <= (uint)(iVar19 * 4)) {
label_181e76963:
        ThrowIndexOutOfRangeException();
      }
      fVar4 = (__this->fields)._time - (float)iVar19 * 0.18;
      __this_00 = pEVar11->m_Items[iVar19 * 4];
      if ((fVar4 < 0.0) || (0.42 <= fVar4)) {
        visible = false;
      }
      else {
        fVar10 = UnityEngine_Random__get_value((MethodInfo *)0x0);
        visible = 0.15 < fVar10;
      }
      if (visible != false) {
        fVar20 = UnityEngine_Random__Range(0.6,1.0,(MethodInfo *)0x0);
        fVar20 = fVar20 * (1.0 - (fVar4 * 0.6) / 0.42);
      }
      if (fVar26 <= fVar20) {
        fVar26 = fVar20;
      }
      if (__this_00 == (Effects_ShifterThunderEffect_Bolt_o *)0x0) goto label_181e7695d;
      Effects_ShifterThunderEffect_Bolt__SetVisible(__this_00,visible,(MethodInfo *)0x0);
      iVar18 = 1;
      do {
        pEVar11 = (__this->fields)._bolts;
        if (pEVar11 == (Effects_ShifterThunderEffect_Bolt_array *)0x0) goto label_181e7695d;
        uVar15 = iVar19 * 4 + iVar18;
        if ((uint)pEVar11->max_length <= uVar15) goto label_181e76963;
        if (pEVar11->m_Items[(int)uVar15] == (Effects_ShifterThunderEffect_Bolt_o *)0x0) goto label_181e7695d;
        Effects_ShifterThunderEffect_Bolt__SetVisible(pEVar11->m_Items[(int)uVar15],visible,(MethodInfo *)0x0)
        ;
        iVar18 = iVar18 + 1;
      } while (iVar18 < 4);
      if (visible != false) {
        UVar17 = UnityEngine_Random__get_insideUnitCircle((MethodInfo *)0x0);
        fVar4 = (__this->fields)._scale;
        fStackX_1c = UVar17.fields.y;
        fVar25 = fVar4 * 260.0 + local_108;
        uVar24._0_4_ = UVar17.fields.x * 260.0 * 0.25 * fVar4 + (float)uVar5;
        pUVar16 = UnityEngine_Random__get_insideUnitSphere(&local_e8,(MethodInfo *)0x0);
        fVar10 = (__this->fields)._scale;
        pUVar12 = (__this->fields)._mainPoints;
        uVar1 = (pUVar16->fields).x;
        uVar7 = (pUVar16->fields).y;
        fVar21 = (pUVar16->fields).z;
        if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
        }
        uVar24._4_4_ = fVar25;
        local_168.y = (float)uVar7 * 4.0 * fVar10 + uVar5._4_4_;
        local_168.x = (float)uVar1 * 4.0 * fVar10 + (float)uVar5;
        local_168.z = fVar21 * 4.0 * fVar10 + fVar23;
        local_158._0_8_ = uVar24;
        local_158.z = fStackX_1c * 260.0 * 0.25 * fVar4 + fVar23;
        Effects_ShifterThunderEffect__Jag
                  ((UnityEngine_Vector3_o *)&local_158,(UnityEngine_Vector3_o *)&local_168,pUVar12,
                   (MethodInfo *)0x0);
        Effects_ShifterThunderEffect_Bolt__SetPoints
                  (__this_00,(__this->fields)._mainPoints,fVar20,(MethodInfo *)0x0);
        iVar18 = 1;
        do {
          pUVar12 = (__this->fields)._mainPoints;
          uVar15 = UnityEngine_Random__RandomRangeInt(2,0xe,(MethodInfo *)0x0);
          if (pUVar12 == (UnityEngine_Vector3_array *)0x0) goto label_181e7695d;
          if ((uint)pUVar12->max_length <= uVar15) goto label_181e76963;
          uVar6._0_4_ = pUVar12->m_Items[(int)uVar15].fields.x;
          uVar6._4_4_ = pUVar12->m_Items[(int)uVar15].fields.y;
          uVar5._0_4_ = pUVar12->m_Items[(int)uVar15].fields.z;
          local_128[0]._0_8_ = uVar6;
          if (Il2CppMethodInitialized_18434494b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18434494b = '\x01';
          }
          pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar2 = (pUVar13->downVector).fields.x;
          uVar8 = (pUVar13->downVector).fields.y;
          uVar5._4_4_ = (pUVar13->downVector).fields.z;
          pUVar16 = UnityEngine_Random__get_insideUnitSphere(local_d8,(MethodInfo *)0x0);
          uVar3 = (pUVar16->fields).x;
          uVar9 = (pUVar16->fields).y;
          fVar4 = (float)uVar3 * 1.2 + (float)uVar2;
          fVar10 = (float)uVar9 * 1.2 + (float)uVar8;
          uVar5._4_4_ = (pUVar16->fields).z * 1.2 + uVar5._4_4_;
          local_148 = CONCAT44(fVar10,fVar4);
          local_140 = uVar5._4_4_;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar21 = (float)il2cpp_runtime_helper_180546a40(&local_148,0);
          if (fVar21 <= 1e-05) {
            pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar4 = (pUVar13->zeroVector).fields.x;
            fVar10 = (pUVar13->zeroVector).fields.y;
            uVar5._4_4_ = (pUVar13->zeroVector).fields.z;
          }
          else {
            fVar4 = fVar4 / fVar21;
            fVar10 = fVar10 / fVar21;
            uVar5._4_4_ = uVar5._4_4_ / fVar21;
          }
          local_138 = CONCAT44(fVar10,fVar4);
          fVar25 = local_128[0].y;
          fVar21 = (__this->fields)._scale;
          fVar22 = UnityEngine_Random__Range(0.12,0.3,(MethodInfo *)0x0);
          pUVar12 = (__this->fields)._branchPoints;
          if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
          }
          local_178.fields.y = fVar25;
          local_188.fields.x = fVar4 * 260.0 * fVar21 * fVar22 + (float)uVar6;
          local_188.fields.y = fVar10 * 260.0 * fVar21 * fVar22 + fVar25;
          local_188.fields.z = uVar5._4_4_ * 260.0 * fVar21 * fVar22 + (float)uVar5;
          local_178.fields.x = (float)uVar6;
          local_178.fields.z = (float)uVar5;
          Effects_ShifterThunderEffect__Jag(&local_178,&local_188,pUVar12,(MethodInfo *)0x0);
          pEVar11 = (__this->fields)._bolts;
          if (pEVar11 == (Effects_ShifterThunderEffect_Bolt_array *)0x0) goto label_181e7695d;
          uVar15 = iVar19 * 4 + iVar18;
          if ((uint)pEVar11->max_length <= uVar15) goto label_181e76963;
          if (pEVar11->m_Items[(int)uVar15] == (Effects_ShifterThunderEffect_Bolt_o *)0x0) goto label_181e7695d;
          Effects_ShifterThunderEffect_Bolt__SetPoints
                    (pEVar11->m_Items[(int)uVar15],(__this->fields)._branchPoints,fVar20 * 0.7,
                     (MethodInfo *)0x0);
          iVar18 = iVar18 + 1;
        } while (iVar18 < 4);
        uVar5._0_4_ = (float)local_f8;
        uVar5._4_4_ = local_f8._4_4_;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < 4);
    fVar23 = (__this->fields)._time / 1.4;
    if (fVar23 < 0.0) {
      fVar23 = 0.0;
    }
    else if (1.0 < fVar23) {
      fVar23 = 1.0;
    }
    pUVar14 = (__this->fields)._light;
    if (fVar26 <= 0.25) {
      fVar26 = 0.25;
    }
    if (pUVar14 != (UnityEngine_Light_o *)0x0) {
      fVar23 = 1.0 - fVar23;
      UnityEngine_Light__set_intensity(pUVar14,fVar26 * fVar23 * fVar23 * 8.0,(MethodInfo *)0x0);
      pUVar14 = (__this->fields)._light;
      if (pUVar14 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar14,0.0 < fVar23,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181e7695d:
  ThrowNullReferenceException();
}


// Effects.ShifterThunderEffect$$Jag
// il2cpp: void Effects_ShifterThunderEffect__Jag (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Vector3_array* points, const MethodInfo* method);
// 0x181e75b10
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e75c78: movaps xmm0, xmm6
// asm:   0x181e75c7b: jmp 0x181e75c86
// asm:   0x181e75d4d: movaps xmm14, xmmword ptr [rsp + 0x40]
// asm:   0x181e75d53: movaps xmm13, xmmword ptr [rsp + 0x50]
// asm:   0x181e75d59: movaps xmm12, xmmword ptr [rsp + 0x60]
// asm:   0x181e75d5f: movaps xmm11, xmmword ptr [rsp + 0x70]
// asm:   0x181e75d65: movaps xmm10, xmmword ptr [rsp + 0x80]
// asm:   0x181e75d6e: movaps xmm9, xmmword ptr [rsp + 0x90]
// asm:   0x181e75d77: mov rsi, qword ptr [rsp + 0xf8]
// asm:   0x181e75d7f: movaps xmm15, xmmword ptr [rsp + 0x30]

void Effects_ShifterThunderEffect__Jag
               (UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,UnityEngine_Vector3_array *points,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o *pUVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o local_c8 [14];
  
  if (Il2CppMethodInitialized_18433dee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433dee7 = '\x01';
  }
  fVar17 = (start->fields).x - (end->fields).x;
  fVar15 = (start->fields).y - (end->fields).y;
  fVar18 = (start->fields).z - (end->fields).z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar14 = (double)(fVar15 * fVar15 + fVar17 * fVar17 + fVar18 * fVar18);
  if (dVar14 < 0.0) {
    dVar14 = sqrt(dVar14);
  }
  else {
    dVar14 = SQRT(dVar14);
  }
  if (points == (UnityEngine_Vector3_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar11 = (int)points->max_length + -1;
  if (-1 < iVar11) {
    fVar15 = (end->fields).x;
    fVar17 = (start->fields).x;
    fVar18 = (end->fields).y;
    fVar1 = (start->fields).y;
    fVar2 = (end->fields).z;
    fVar3 = (start->fields).z;
    fVar13 = (float)dVar14;
    uVar9 = 0;
    do {
      fVar16 = (float)(int)uVar9 / (float)iVar11;
      if (fVar16 < 0.0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = fVar16;
        if (1.0 < fVar16) {
          fVar12 = 1.0;
        }
      }
      pUVar8 = UnityEngine_Random__get_insideUnitSphere(local_c8,(MethodInfo *)0x0);
      fVar16 = (float)il2cpp_runtime_helper_1804f5fc0(fVar16 * 3.1415927);
      if ((uint)points->max_length <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      uVar10 = uVar9 + 1;
      fVar4 = (pUVar8->fields).z;
      fVar5 = (pUVar8->fields).x;
      fVar6 = (start->fields).z;
      fVar7 = (start->fields).x;
      points->m_Items[(int)uVar9].fields.y =
           fVar13 * (pUVar8->fields).y * 0.045 * fVar16 + (fVar18 - fVar1) * fVar12 + (start->fields).y;
      points->m_Items[(int)uVar9].fields.z =
           fVar13 * fVar4 * 0.045 * fVar16 + (fVar2 - fVar3) * fVar12 + fVar6;
      points->m_Items[(int)uVar9].fields.x =
           fVar13 * fVar5 * 0.045 * fVar16 + (fVar15 - fVar17) * fVar12 + fVar7;
      uVar9 = uVar10;
    } while ((int)uVar10 <= iVar11);
  }
  return;
}


// Effects.ShifterThunderEffect$$GetMaterial
// il2cpp: UnityEngine_Material_o* Effects_ShifterThunderEffect__GetMaterial (const MethodInfo* method);
// 0x181e75770

UnityEngine_Material_o * Effects_ShifterThunderEffect__GetMaterial(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Material_o *__this;
  UnityEngine_Texture_o *__this_00;
  int y;
  float fVar4;
  UnityEngine_Color_o local_58 [5];
  
  if (Il2CppMethodInitialized_184344f5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter thunder bolt");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseMap");
    il2cpp_codegen_initialize_runtime_metadata(&"Effects/Materials/ShifterThunderMat1");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter thunder glow");
    Il2CppMethodInitialized_184344f5e = '\x01';
  }
  if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
  }
  pUVar3 = TypeInfo_Effects_ShifterThunderEffect->static_fields->_material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar3 = UnityEngine_Resources__Load_object_
                       ("Effects/Materials/ShifterThunderMat1",
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Material);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor_2ee55e0(__this,pUVar3,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,"Shifter thunder bolt",(MethodInfo *)0x0);
      if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
      }
      TypeInfo_Effects_ShifterThunderEffect->static_fields->_material = __this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_ShifterThunderEffect->static_fields->_material,__this);
      __this_00 = (UnityEngine_Texture_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
      y = 0;
      UnityEngine_Texture2D___ctor_2efc630
                ((UnityEngine_Texture2D_o *)__this_00,1,0x20,4,false,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_wrapMode(__this_00,1,(MethodInfo *)0x0);
        UnityEngine_Object__set_name
                  ((UnityEngine_Object_o *)__this_00,"Shifter thunder glow",(MethodInfo *)0x0);
        while( true ) {
          iVar2 = (*(__this_00->klass->vtable)._7_get_height.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._7_get_height.method);
          if (iVar2 <= y) break;
          iVar2 = (*(__this_00->klass->vtable)._7_get_height.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._7_get_height.method);
          local_58[0].fields.r = 1.0;
          local_58[0].fields.g = 1.0;
          local_58[0].fields.b = 1.0;
          fVar4 = (float)y / ((float)iVar2 - 1.0);
          fVar4 = 1.0 - ABS((fVar4 + fVar4) - 1.0);
          local_58[0].fields.a = (3.0 - (fVar4 + fVar4)) * fVar4 * fVar4;
          UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this_00,0,y,local_58,(MethodInfo *)0x0)
          ;
          y = y + 1;
        }
        UnityEngine_Texture2D__Apply((UnityEngine_Texture2D_o *)__this_00,false,true,(MethodInfo *)0x0);
        if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
        }
        pUVar3 = TypeInfo_Effects_ShifterThunderEffect->static_fields->_material;
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetTexture(pUVar3,"_BaseMap",__this_00,(MethodInfo *)0x0);
          return TypeInfo_Effects_ShifterThunderEffect->static_fields->_material;
        }
      }
    }
    ThrowNullReferenceException();
  }
  if ((TypeInfo_Effects_ShifterThunderEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ShifterThunderEffect);
  }
  return TypeInfo_Effects_ShifterThunderEffect->static_fields->_material;
}


// Effects.ShifterThunderEffect$$.ctor
// il2cpp: void Effects_ShifterThunderEffect___ctor (Effects_ShifterThunderEffect_o* __this, const MethodInfo* method);
// 0x181e76b10

void Effects_ShifterThunderEffect___ctor(Effects_ShifterThunderEffect_o *__this,MethodInfo *method)

{
  Effects_ShifterThunderEffect_Bolt_array *value;
  UnityEngine_Vector3_array *pUVar1;
  
  if (Il2CppMethodInitialized_184344f5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect_Bolt_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184344f5f = '\x01';
  }
  value = (Effects_ShifterThunderEffect_Bolt_array *)
          SZArrayNew(TypeInfo_Effects_ShifterThunderEffect_Bolt_array,0x10);
  (__this->fields)._bolts = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bolts,value);
  pUVar1 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,0x12);
  (__this->fields)._mainPoints = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mainPoints,pUVar1);
  pUVar1 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
  (__this->fields)._branchPoints = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._branchPoints,pUVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Effects.ShifterThunderEffect$$.cctor
// il2cpp: void Effects_ShifterThunderEffect___cctor (const MethodInfo* method);
// 0x181e76a90

void Effects_ShifterThunderEffect___cctor(MethodInfo *method)

{
  Effects_ShifterThunderEffect_StaticFields *pEVar1;
  
  if (Il2CppMethodInitialized_184344f60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ShifterThunderEffect);
    Il2CppMethodInitialized_184344f60 = '\x01';
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


