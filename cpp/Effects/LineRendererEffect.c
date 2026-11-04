// Type: Effects.LineRendererEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Effects/LineRendererEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/LineRendererEffect.cs
// --------------------------------

// Effects.LineRendererEffect$$Setup
// il2cpp: void Effects_LineRendererEffect__Setup (Effects_LineRendererEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x181e682c0

void Effects_LineRendererEffect__Setup
               (Effects_LineRendererEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *pIVar2;
  UnityEngine_LineRenderer_o *pUVar3;
  undefined8 *puVar4;
  float *pfVar5;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344f59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184344f59 = '\x01';
  }
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields)._timeLeft = liveTime;
  pUVar3 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LineRenderer);
  (__this->fields)._renderer = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._renderer,pUVar3);
  pUVar3 = (__this->fields)._renderer;
  if (pUVar3 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(pUVar3,2,(MethodInfo *)0x0);
    if (settings != (System_Object_array *)0x0) {
      if ((int)settings->max_length == 0) {
label_181e6853c:
        ThrowIndexOutOfRangeException();
      }
      pUVar3 = (__this->fields)._renderer;
      if ((pUVar3 != (UnityEngine_LineRenderer_o *)0x0) &&
         (pIVar2 = settings->m_Items[0], pIVar2 != (Il2CppObject *)0x0)) {
        if ((pIVar2->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2,TypeInfo_UnityEngine_Vector3);
        }
        puVar4 = il2cpp_object_unbox(pIVar2);
        local_28[0]._0_8_ = *puVar4;
        local_28[0].z = *(float *)(puVar4 + 1);
        UnityEngine_LineRenderer__SetPosition(pUVar3,0,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
        if ((uint)settings->max_length < 2) goto label_181e6853c;
        pUVar3 = (__this->fields)._renderer;
        if ((pUVar3 != (UnityEngine_LineRenderer_o *)0x0) &&
           (pIVar2 = settings->m_Items[1], pIVar2 != (Il2CppObject *)0x0)) {
          if ((pIVar2->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar2,TypeInfo_UnityEngine_Vector3);
          }
          puVar4 = il2cpp_object_unbox(pIVar2);
          local_28[0]._0_8_ = *puVar4;
          local_28[0].z = *(float *)(puVar4 + 1);
          UnityEngine_LineRenderer__SetPosition(pUVar3,1,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
          if ((uint)settings->max_length < 3) goto label_181e6853c;
          pUVar3 = (__this->fields)._renderer;
          if ((pUVar3 != (UnityEngine_LineRenderer_o *)0x0) &&
             (pIVar2 = settings->m_Items[2], pIVar2 != (Il2CppObject *)0x0)) {
            if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e38);
            }
            pfVar5 = il2cpp_object_unbox(pIVar2);
            UnityEngine_LineRenderer__set_startWidth(pUVar3,*pfVar5,(MethodInfo *)0x0);
            if ((uint)settings->max_length < 4) goto label_181e6853c;
            pUVar3 = (__this->fields)._renderer;
            if ((pUVar3 != (UnityEngine_LineRenderer_o *)0x0) &&
               (pIVar2 = settings->m_Items[3], pIVar2 != (Il2CppObject *)0x0)) {
              if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e38);
              }
              pfVar5 = il2cpp_object_unbox(pIVar2);
              UnityEngine_LineRenderer__set_endWidth(pUVar3,*pfVar5,(MethodInfo *)0x0);
              if ((uint)settings->max_length < 5) goto label_181e6853c;
              pIVar2 = settings->m_Items[4];
              if (pIVar2 != (Il2CppObject *)0x0) {
                if ((pIVar2->klass->_1).element_class == *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
                  pfVar5 = il2cpp_object_unbox(pIVar2);
                  fVar1 = *pfVar5;
                  (__this->fields)._totalTime = fVar1;
                  (__this->fields)._timeLeft = fVar1;
                  return;
                }
                il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e38);
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Effects.LineRendererEffect$$Update
// il2cpp: void Effects_LineRendererEffect__Update (Effects_LineRendererEffect_o* __this, const MethodInfo* method);
// 0x181e68550

void Effects_LineRendererEffect__Update(Effects_LineRendererEffect_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  float fVar2;
  UnityEngine_Color_o local_28 [2];
  
  Effects_BaseEffect__Update((Effects_BaseEffect_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._renderer;
  fVar2 = (__this->fields)._timeLeft / (__this->fields)._totalTime;
  if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
    local_28[0].fields.r = 1.0;
    local_28[0].fields.g = 1.0;
    local_28[0].fields.b = 1.0;
    local_28[0].fields.a = fVar2;
    UnityEngine_LineRenderer__set_startColor(pUVar1,local_28,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._renderer;
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      local_28[0].fields.r = 1.0;
      local_28[0].fields.g = 1.0;
      local_28[0].fields.b = 1.0;
      local_28[0].fields.a = fVar2;
      UnityEngine_LineRenderer__set_endColor(pUVar1,local_28,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Effects.LineRendererEffect$$.ctor
// il2cpp: void Effects_LineRendererEffect___ctor (Effects_LineRendererEffect_o* __this, const MethodInfo* method);
// 0x180528540

void
Effects_LineRendererEffect___ctor(Effects_LineRendererEffect_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


