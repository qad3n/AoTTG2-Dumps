// Type: Effects.BaseEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Effects/BaseEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/BaseEffect.cs
// --------------------------------

// Effects.BaseEffect$$Setup
// il2cpp: void Effects_BaseEffect__Setup (Effects_BaseEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x181e62de0

void Effects_BaseEffect__Setup
               (Effects_BaseEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields)._timeLeft = liveTime;
  return;
}


// Effects.BaseEffect$$PlayAudio
// il2cpp: void Effects_BaseEffect__PlayAudio (Effects_BaseEffect_o* __this, const MethodInfo* method);
// 0x181e62d50

void Effects_BaseEffect__PlayAudio(Effects_BaseEffect_o *__this,MethodInfo *method)

{
  System_Object_array *pSVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184344f4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource_40ab520);
    Il2CppMethodInitialized_184344f4d = '\x01';
  }
  pSVar1 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_665440 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_AudioSource_40ab520);
  if (pSVar1 != (System_Object_array *)0x0) {
    uVar2 = 0;
    while( true ) {
      if ((int)pSVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pSVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_AudioSource_o *)pSVar1->m_Items[(int)uVar2] == (UnityEngine_AudioSource_o *)0x0) break;
      UnityEngine_AudioSource__Play_2eb4470
                ((UnityEngine_AudioSource_o *)pSVar1->m_Items[(int)uVar2],(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Effects.BaseEffect$$Update
// il2cpp: void Effects_BaseEffect__Update (Effects_BaseEffect_o* __this, const MethodInfo* method);
// 0x181e62e10

void Effects_BaseEffect__Update(Effects_BaseEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184344f4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344f4e = '\x01';
  }
  fVar2 = (__this->fields)._timeLeft;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._timeLeft = fVar2;
  if (fVar2 <= 0.0) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  }
  return;
}


// Effects.BaseEffect$$.ctor
// il2cpp: void Effects_BaseEffect___ctor (Effects_BaseEffect_o* __this, const MethodInfo* method);
// 0x180528540

void
Effects_BaseEffect___ctor(Effects_BaseEffect_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


