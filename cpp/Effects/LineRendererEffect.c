// Type: Effects.LineRendererEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Effects/LineRendererEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Effects/LineRendererEffect.cs  [CHANGED since prior version]
// --------------------------------

// Effects.LineRendererEffect$$Setup
// il2cpp: void Effects_LineRendererEffect__Setup (Effects_LineRendererEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x423e390

void Effects_LineRendererEffect__Setup
               (Effects_LineRendererEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  UnityEngine_LineRenderer_o **ppUVar1;
  float fVar2;
  UnityEngine_LineRenderer_o *pUVar3;
  UnityEngine_Vector3_Fields *pUVar4;
  float *pfVar5;
  
  if (DAT_05705194 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LineRenderer_GetComponent_LineRenderer);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05705194 = '\x01';
  }
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner,owner);
  (__this->fields)._timeLeft = liveTime;
  pUVar3 = (UnityEngine_LineRenderer_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_LineRenderer_GetComponent_LineRenderer);
  ppUVar1 = &(__this->fields)._renderer;
  (__this->fields)._renderer = pUVar3;
  il2cpp_runtime_glue(ppUVar1,pUVar3);
  pUVar3 = (__this->fields)._renderer;
  if (pUVar3 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(pUVar3,2,(MethodInfo *)0x0);
    if (settings != (System_Object_array *)0x0) {
      if ((int)settings->max_length == 0) {
LAB_0423e5c3:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar3 = *ppUVar1;
      if ((pUVar3 != (UnityEngine_LineRenderer_o *)0x0) &&
         (settings->m_Items[0] != (Il2CppObject *)0x0)) {
        if ((settings->m_Items[0]->klass->_1).element_class ==
            *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
          pUVar4 = (UnityEngine_Vector3_Fields *)il2cpp_glue_022c7330();
          UnityEngine_LineRenderer__SetPosition
                    (pUVar3,0,(UnityEngine_Vector3_o)*pUVar4,(MethodInfo *)0x0);
          if ((uint)settings->max_length < 2) goto LAB_0423e5c3;
          pUVar3 = *ppUVar1;
          if ((pUVar3 == (UnityEngine_LineRenderer_o *)0x0) ||
             (settings->m_Items[1] == (Il2CppObject *)0x0)) goto LAB_0423e5be;
          if ((settings->m_Items[1]->klass->_1).element_class ==
              *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
            pUVar4 = (UnityEngine_Vector3_Fields *)il2cpp_glue_022c7330();
            UnityEngine_LineRenderer__SetPosition
                      (pUVar3,1,(UnityEngine_Vector3_o)*pUVar4,(MethodInfo *)0x0);
            if ((uint)settings->max_length < 3) goto LAB_0423e5c3;
            pUVar3 = *ppUVar1;
            if ((pUVar3 == (UnityEngine_LineRenderer_o *)0x0) ||
               (settings->m_Items[2] == (Il2CppObject *)0x0)) goto LAB_0423e5be;
            if ((settings->m_Items[2]->klass->_1).element_class ==
                *(Il2CppClass **)(DAT_05711098 + 0x40)) {
              pfVar5 = (float *)il2cpp_glue_022c7330();
              UnityEngine_LineRenderer__set_startWidth(pUVar3,*pfVar5,(MethodInfo *)0x0);
              if ((uint)settings->max_length < 4) goto LAB_0423e5c3;
              pUVar3 = *ppUVar1;
              if ((pUVar3 == (UnityEngine_LineRenderer_o *)0x0) ||
                 (settings->m_Items[3] == (Il2CppObject *)0x0)) goto LAB_0423e5be;
              if ((settings->m_Items[3]->klass->_1).element_class ==
                  *(Il2CppClass **)(DAT_05711098 + 0x40)) {
                pfVar5 = (float *)il2cpp_glue_022c7330();
                UnityEngine_LineRenderer__set_endWidth(pUVar3,*pfVar5,(MethodInfo *)0x0);
                if ((uint)settings->max_length < 5) goto LAB_0423e5c3;
                if (settings->m_Items[4] == (Il2CppObject *)0x0) goto LAB_0423e5be;
                if ((settings->m_Items[4]->klass->_1).element_class ==
                    *(Il2CppClass **)(DAT_05711098 + 0x40)) {
                  pfVar5 = (float *)il2cpp_glue_022c7330();
                  fVar2 = *pfVar5;
                  (__this->fields)._totalTime = fVar2;
                  (__this->fields)._timeLeft = fVar2;
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
    }
  }
LAB_0423e5be:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Effects.LineRendererEffect$$Update
// il2cpp: void Effects_LineRendererEffect__Update (Effects_LineRendererEffect_o* __this, const MethodInfo* method);
// 0x423e5d0

void Effects_LineRendererEffect__Update(Effects_LineRendererEffect_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  UnityEngine_Object_o *obj;
  float fVar2;
  float fVar3;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  undefined8 uStack_28;
  
  if (DAT_0570518e == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570518e = '\x01';
  }
  fVar3 = (__this->fields)._timeLeft;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 - fVar2;
  (__this->fields)._timeLeft = fVar3;
  if (fVar3 <= 0.0) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Effects.LineRendererEffect$$.ctor
// il2cpp: void Effects_LineRendererEffect___ctor (Effects_LineRendererEffect_o* __this, const MethodInfo* method);
// 0x423e6b0

void Effects_LineRendererEffect___ctor(Effects_LineRendererEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


