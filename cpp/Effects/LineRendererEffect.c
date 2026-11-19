// Type: Effects.LineRendererEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Effects/LineRendererEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/LineRendererEffect.cs
// --------------------------------

// Effects.LineRendererEffect$$Setup
// il2cpp: void Effects_LineRendererEffect__Setup (Effects_LineRendererEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x595c4d0

void Effects_LineRendererEffect__Setup
               (Effects_LineRendererEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  UnityEngine_LineRenderer_o **targetAddress;
  float fVar1;
  Il2CppObject *pIVar2;
  UnityEngine_LineRenderer_o *pUVar3;
  UnityEngine_Vector3_Fields *pUVar4;
  float *pfVar5;
  
  if (Il2CppMethodInitialized_075458fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075458fa = '\x01';
  }
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  (__this->fields)._timeLeft = liveTime;
  pUVar3 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LineRenderer);
  targetAddress = &(__this->fields)._renderer;
  (__this->fields)._renderer = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar3 = (__this->fields)._renderer;
  if (pUVar3 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(pUVar3,2,(MethodInfo *)0x0);
    if (settings != (System_Object_array *)0x0) {
      if ((int)settings->max_length == 0) {
label_0595c713:
        ThrowIndexOutOfRangeException();
      }
      pUVar3 = *targetAddress;
      if ((pUVar3 != (UnityEngine_LineRenderer_o *)0x0) &&
         (pIVar2 = settings->m_Items[0], pIVar2 != (Il2CppObject *)0x0)) {
        if ((pIVar2->klass->_1).element_class == (TypeInfo_UnityEngine_Vector3->_1).element_class) {
          pUVar4 = il2cpp_vm_Object_Unbox(pIVar2);
          UnityEngine_LineRenderer__SetPosition(pUVar3,0,(UnityEngine_Vector3_o)*pUVar4,(MethodInfo *)0x0);
          if ((settings->max_length & 0xfffffffe) == 0) goto label_0595c713;
          pUVar3 = *targetAddress;
          if ((pUVar3 == (UnityEngine_LineRenderer_o *)0x0) ||
             (pIVar2 = settings->m_Items[1], pIVar2 == (Il2CppObject *)0x0)) goto label_0595c70e;
          if ((pIVar2->klass->_1).element_class == (TypeInfo_UnityEngine_Vector3->_1).element_class) {
            pUVar4 = il2cpp_vm_Object_Unbox(pIVar2);
            UnityEngine_LineRenderer__SetPosition(pUVar3,1,(UnityEngine_Vector3_o)*pUVar4,(MethodInfo *)0x0);
            if ((uint)settings->max_length < 3) goto label_0595c713;
            pUVar3 = *targetAddress;
            if ((pUVar3 == (UnityEngine_LineRenderer_o *)0x0) ||
               (pIVar2 = settings->m_Items[2], pIVar2 == (Il2CppObject *)0x0)) goto label_0595c70e;
            if ((pIVar2->klass->_1).element_class == *(Il2CppClass **)(g_data_07556740 + 0x40)) {
              pfVar5 = il2cpp_vm_Object_Unbox(pIVar2);
              UnityEngine_LineRenderer__set_startWidth(pUVar3,*pfVar5,(MethodInfo *)0x0);
              if ((settings->max_length & 0xfffffffc) == 0) goto label_0595c713;
              pUVar3 = *targetAddress;
              if ((pUVar3 == (UnityEngine_LineRenderer_o *)0x0) ||
                 (pIVar2 = settings->m_Items[3], pIVar2 == (Il2CppObject *)0x0)) goto label_0595c70e;
              if ((pIVar2->klass->_1).element_class == *(Il2CppClass **)(g_data_07556740 + 0x40)) {
                pfVar5 = il2cpp_vm_Object_Unbox(pIVar2);
                UnityEngine_LineRenderer__set_endWidth(pUVar3,*pfVar5,(MethodInfo *)0x0);
                if ((uint)settings->max_length < 5) goto label_0595c713;
                pIVar2 = settings->m_Items[4];
                if (pIVar2 == (Il2CppObject *)0x0) goto label_0595c70e;
                if ((pIVar2->klass->_1).element_class == *(Il2CppClass **)(g_data_07556740 + 0x40)) {
                  pfVar5 = il2cpp_vm_Object_Unbox(pIVar2);
                  fVar1 = *pfVar5;
                  (__this->fields)._totalTime = fVar1;
                  (__this->fields)._timeLeft = fVar1;
                  return;
                }
              }
            }
          }
        }
        il2cpp_codegen_raise_invalid_cast_exception();
      }
    }
  }
label_0595c70e:
  ThrowNullReferenceException();
}


// Effects.LineRendererEffect$$Update
// il2cpp: void Effects_LineRendererEffect__Update (Effects_LineRendererEffect_o* __this, const MethodInfo* method);
// 0x595c720

void Effects_LineRendererEffect__Update(Effects_LineRendererEffect_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  UnityEngine_Object_o *obj;
  float fVar2;
  float fVar3;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  undefined8 uStack_28;
  
  if (Il2CppMethodInitialized_075458ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075458ef = '\x01';
  }
  fVar3 = (__this->fields)._timeLeft;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 - fVar2;
  (__this->fields)._timeLeft = fVar3;
  if (fVar3 <= 0.0) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Effects.LineRendererEffect$$.ctor
// il2cpp: void Effects_LineRendererEffect___ctor (Effects_LineRendererEffect_o* __this, const MethodInfo* method);
// 0x595c800

void Effects_LineRendererEffect___ctor(Effects_LineRendererEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


