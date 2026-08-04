// Type: Effects.LineRendererEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Effects/LineRendererEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/LineRendererEffect.cs
// --------------------------------

// Effects.LineRendererEffect$$Setup
// il2cpp: void Effects_LineRendererEffect__Setup (Effects_LineRendererEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x4572d20

void Effects_LineRendererEffect__Setup
               (Effects_LineRendererEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  UnityEngine_LineRenderer_o **ppUVar1;
  UnityEngine_LineRenderer_o *pUVar2;
  UnityEngine_Vector3_Fields *pUVar3;
  float *pfVar4;
  UnityEngine_Object_o *obj;
  UnityEngine_LineRenderer_o *pUVar5;
  UnityEngine_MonoBehaviour_o *__this_00;
  float fVar6;
  float fVar7;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  undefined8 local_60;
  
  if (g_data_057af087 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRenderer_GetComponent_LineRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057af087 = '\x01';
  }
  (__this->fields)._owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,owner);
  (__this->fields)._timeLeft = liveTime;
  pUVar2 = (UnityEngine_LineRenderer_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_LineRenderer_GetComponent_LineRenderer);
  ppUVar1 = &(__this->fields)._renderer;
  (__this->fields)._renderer = pUVar2;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar2 = (__this->fields)._renderer;
  if (pUVar2 == (UnityEngine_LineRenderer_o *)0x0) {
label_04572f4e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    UnityEngine_LineRenderer__set_positionCount(pUVar2,2,(MethodInfo *)0x0);
    if (settings == (System_Object_array *)0x0) goto label_04572f4e;
    if ((int)settings->max_length != 0) {
      pUVar5 = *ppUVar1;
      if ((pUVar5 != (UnityEngine_LineRenderer_o *)0x0) &&
         (pUVar2 = (UnityEngine_LineRenderer_o *)settings->m_Items[0],
         pUVar2 != (UnityEngine_LineRenderer_o *)0x0)) {
        if ((pUVar2->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) goto label_04572f58;
        pUVar3 = (UnityEngine_Vector3_Fields *)il2cpp_runtime_helper_02305440();
        UnityEngine_LineRenderer__SetPosition(pUVar5,0,(UnityEngine_Vector3_o)*pUVar3,(MethodInfo *)0x0);
        pUVar2 = pUVar5;
        if ((uint)settings->max_length < 2) goto label_04572f53;
        pUVar5 = *ppUVar1;
        if ((pUVar5 != (UnityEngine_LineRenderer_o *)0x0) &&
           (pUVar2 = (UnityEngine_LineRenderer_o *)settings->m_Items[1],
           pUVar2 != (UnityEngine_LineRenderer_o *)0x0)) {
          if ((pUVar2->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) goto label_04572f58;
          pUVar3 = (UnityEngine_Vector3_Fields *)il2cpp_runtime_helper_02305440();
          UnityEngine_LineRenderer__SetPosition(pUVar5,1,(UnityEngine_Vector3_o)*pUVar3,(MethodInfo *)0x0);
          pUVar2 = pUVar5;
          if ((uint)settings->max_length < 3) goto label_04572f53;
          pUVar5 = *ppUVar1;
          if ((pUVar5 != (UnityEngine_LineRenderer_o *)0x0) &&
             (pUVar2 = (UnityEngine_LineRenderer_o *)settings->m_Items[2],
             pUVar2 != (UnityEngine_LineRenderer_o *)0x0)) {
            if ((pUVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9be8 + 0x40))
            goto label_04572f58;
            pfVar4 = (float *)il2cpp_runtime_helper_02305440();
            UnityEngine_LineRenderer__set_startWidth(pUVar5,*pfVar4,(MethodInfo *)0x0);
            pUVar2 = pUVar5;
            if ((uint)settings->max_length < 4) goto label_04572f53;
            pUVar5 = *ppUVar1;
            if ((pUVar5 != (UnityEngine_LineRenderer_o *)0x0) &&
               (pUVar2 = (UnityEngine_LineRenderer_o *)settings->m_Items[3],
               pUVar2 != (UnityEngine_LineRenderer_o *)0x0)) {
              if ((pUVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9be8 + 0x40))
              goto label_04572f58;
              pfVar4 = (float *)il2cpp_runtime_helper_02305440();
              UnityEngine_LineRenderer__set_endWidth(pUVar5,*pfVar4,(MethodInfo *)0x0);
              pUVar2 = pUVar5;
              if ((uint)settings->max_length < 5) goto label_04572f53;
              pUVar2 = (UnityEngine_LineRenderer_o *)settings->m_Items[4];
              if (pUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
                if ((pUVar2->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9be8 + 0x40)) {
                  pfVar4 = (float *)il2cpp_runtime_helper_02305440();
                  fVar7 = *pfVar4;
                  (__this->fields)._totalTime = fVar7;
                  (__this->fields)._timeLeft = fVar7;
                  return;
                }
                goto label_04572f58;
              }
            }
          }
        }
      }
      goto label_04572f4e;
    }
  }
label_04572f53:
  il2cpp_runtime_helper_022b2ca0();
label_04572f58:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af081 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057af081 = '\x01';
  }
  fVar7 = *(float *)&(((UnityEngine_Component_o *)(pUVar2 + 1))->fields).m_CachedPtr;
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar7 = fVar7 - fVar6;
  *(float *)&(((UnityEngine_Component_o *)(pUVar2 + 1))->fields).m_CachedPtr = fVar7;
  if (fVar7 <= 0.0) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    fVar7 = *(float *)&(((UnityEngine_Component_o *)(pUVar2 + 1))->fields).m_CachedPtr;
  }
  if (((UnityEngine_Component_o *)(pUVar2 + 2))->klass != (UnityEngine_Component_c *)0x0) {
    fVar7 = fVar7 / *(float *)((long)&(((UnityEngine_Component_o *)(pUVar2 + 1))->fields).m_CachedPtr + 4);
    value.fields.a = fVar7;
    value.fields.b = 1.0;
    value.fields.r = 1.0;
    value.fields.g = 1.0;
    UnityEngine_LineRenderer__set_startColor
              ((UnityEngine_LineRenderer_o *)((UnityEngine_Component_o *)(pUVar2 + 2))->klass,value,
               (MethodInfo *)0x0);
    if (((UnityEngine_Component_o *)(pUVar2 + 2))->klass != (UnityEngine_Component_c *)0x0) {
      value_00.fields.b = 1.0;
      value_00.fields.a = fVar7;
      value_00.fields.r = 1.0;
      value_00.fields.g = 1.0;
      UnityEngine_LineRenderer__set_endColor
                ((UnityEngine_LineRenderer_o *)((UnityEngine_Component_o *)(pUVar2 + 2))->klass,value_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Effects.LineRendererEffect$$Update
// il2cpp: void Effects_LineRendererEffect__Update (Effects_LineRendererEffect_o* __this, const MethodInfo* method);
// 0x4572f60

void Effects_LineRendererEffect__Update(Effects_LineRendererEffect_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  UnityEngine_Object_o *obj;
  UnityEngine_MonoBehaviour_o *__this_00;
  float fVar2;
  float fVar3;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  undefined8 uStack_28;
  
  if (g_data_057af081 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057af081 = '\x01';
  }
  fVar3 = (__this->fields)._timeLeft;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 - fVar2;
  (__this->fields)._timeLeft = fVar3;
  if (fVar3 <= 0.0) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    fVar3 = (__this->fields)._timeLeft;
  }
  pUVar1 = (__this->fields)._renderer;
  if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
    fVar3 = fVar3 / (__this->fields)._totalTime;
    value.fields.a = fVar3;
    value.fields.b = 1.0;
    value.fields.r = 1.0;
    value.fields.g = 1.0;
    UnityEngine_LineRenderer__set_startColor(pUVar1,value,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._renderer;
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      value_00.fields.b = 1.0;
      value_00.fields.a = fVar3;
      value_00.fields.r = 1.0;
      value_00.fields.g = 1.0;
      UnityEngine_LineRenderer__set_endColor(pUVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Effects.LineRendererEffect$$.ctor
// il2cpp: void Effects_LineRendererEffect___ctor (Effects_LineRendererEffect_o* __this, const MethodInfo* method);
// 0x4573040

void Effects_LineRendererEffect___ctor(Effects_LineRendererEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


