// Type: Cameras.StaticCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Cameras/StaticCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/StaticCamera.cs
// --------------------------------

// Cameras.StaticCamera$$Awake
// il2cpp: void Cameras_StaticCamera__Awake (Cameras_StaticCamera_o* __this, const MethodInfo* method);
// 0x5dd93d0

void Cameras_StaticCamera__Awake(Cameras_StaticCamera_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *__this_00;
  
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,method);
  __this_00 = (__this->fields).Camera;
  if (__this_00 == (UnityEngine_Camera_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Camera__set_backgroundColor
            (__this_00,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
  return;
}


// Cameras.StaticCamera$$SetSkybox
// il2cpp: void Cameras_StaticCamera__SetSkybox (Cameras_StaticCamera_o* __this, bool skybox, const MethodInfo* method);
// 0x5dd9400

void Cameras_StaticCamera__SetSkybox(Cameras_StaticCamera_o *__this,bool skybox,MethodInfo *method)

{
  UnityEngine_Camera_o *__this_00;
  int32_t value;
  undefined7 in_register_00000031;
  
  __this_00 = (__this->fields).Camera;
  if ((int)CONCAT71(in_register_00000031,skybox) == 0) {
    value = 2;
  }
  else {
    value = 1;
  }
  if (__this_00 == (UnityEngine_Camera_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Camera__set_clearFlags(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Cameras.StaticCamera$$.ctor
// il2cpp: void Cameras_StaticCamera___ctor (Cameras_StaticCamera_o* __this, const MethodInfo* method);
// 0x5dd9430

void Cameras_StaticCamera___ctor(Cameras_StaticCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


