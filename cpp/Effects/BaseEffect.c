// Type: Effects.BaseEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Effects/BaseEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/BaseEffect.cs
// --------------------------------

// Effects.BaseEffect$$Setup
// il2cpp: void Effects_BaseEffect__Setup (Effects_BaseEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x595afd0

void Effects_BaseEffect__Setup
               (Effects_BaseEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  (__this->fields)._timeLeft = liveTime;
  return;
}


// Effects.BaseEffect$$PlayAudio
// il2cpp: void Effects_BaseEffect__PlayAudio (Effects_BaseEffect_o* __this, const MethodInfo* method);
// 0x595b000

void Effects_BaseEffect__PlayAudio(Effects_BaseEffect_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_075458ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource_71a4f58);
    Il2CppMethodInitialized_075458ee = '\x01';
  }
  pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_34B1260 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource_71a4f58);
  if (pSVar2 == (System_Object_array *)0x0) {
label_0595b07f:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar2->max_length;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_AudioSource_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_AudioSource_o *)0x0)
      goto label_0595b07f;
      UnityEngine_AudioSource__Play_68b06a0
                ((UnityEngine_AudioSource_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
      uVar1 = (uint)pSVar2->max_length;
    } while ((int)uVar3 < (int)uVar1);
  }
  return;
}


// Effects.BaseEffect$$Update
// il2cpp: void Effects_BaseEffect__Update (Effects_BaseEffect_o* __this, const MethodInfo* method);
// 0x595b090

void Effects_BaseEffect__Update(Effects_BaseEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_075458ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075458ef = '\x01';
  }
  fVar2 = (__this->fields)._timeLeft;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._timeLeft = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  return;
}


// Effects.BaseEffect$$.ctor
// il2cpp: void Effects_BaseEffect___ctor (Effects_BaseEffect_o* __this, const MethodInfo* method);
// 0x595b120

void Effects_BaseEffect___ctor(Effects_BaseEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


