// Type: Cameras.StaticCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/StaticCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/StaticCamera.cs
// --------------------------------

// Cameras.StaticCamera$$Awake
// il2cpp: void Cameras_StaticCamera__Awake (Cameras_StaticCamera_o* __this, const MethodInfo* method);
// 0x447f250

void Cameras_StaticCamera__Awake(Cameras_StaticCamera_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,method);
  uVar1 = (uint)method;
  __this_00 = (__this->fields).Camera;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_backgroundColor
              (__this_00,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this_00[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Camera__set_clearFlags((UnityEngine_Camera_o *)__this_01,2 - (uVar1 & 0xff),(MethodInfo *)0x0)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Cameras.StaticCamera$$SetSkybox
// il2cpp: void Cameras_StaticCamera__SetSkybox (Cameras_StaticCamera_o* __this, bool skybox, const MethodInfo* method);
// 0x447f280

void Cameras_StaticCamera__SetSkybox(Cameras_StaticCamera_o *__this,bool_conflict skybox,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this_00;
  
  __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields).Camera;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Camera__set_clearFlags
              ((UnityEngine_Camera_o *)__this_00,2 - (skybox & 0xffU),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Cameras.StaticCamera$$.ctor
// il2cpp: void Cameras_StaticCamera___ctor (Cameras_StaticCamera_o* __this, const MethodInfo* method);
// 0x447f2b0

void Cameras_StaticCamera___ctor(Cameras_StaticCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


