// Type: Effects.BaseEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Effects/BaseEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Effects/BaseEffect.cs  [CHANGED since prior version]
// --------------------------------

// Effects.BaseEffect$$Setup
// il2cpp: void Effects_BaseEffect__Setup (Effects_BaseEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x423d6c0

void Effects_BaseEffect__Setup
               (Effects_BaseEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner);
  (__this->fields)._timeLeft = liveTime;
  return;
}


// Effects.BaseEffect$$Update
// il2cpp: void Effects_BaseEffect__Update (Effects_BaseEffect_o* __this, const MethodInfo* method);
// 0x423d6f0

void Effects_BaseEffect__Update(Effects_BaseEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  float fVar1;
  float fVar2;
  
  if (DAT_0570518e == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570518e = '\x01';
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
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
  return;
}


// Effects.BaseEffect$$.ctor
// il2cpp: void Effects_BaseEffect___ctor (Effects_BaseEffect_o* __this, const MethodInfo* method);
// 0x423d780

void Effects_BaseEffect___ctor(Effects_BaseEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


