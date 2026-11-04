// Type: Cameras.StaticCamera
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/StaticCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/StaticCamera.cs
// --------------------------------

// Cameras.StaticCamera$$Awake
// il2cpp: void Cameras_StaticCamera__Awake (Cameras_StaticCamera_o* __this, const MethodInfo* method);
// 0x1822fde90

void Cameras_StaticCamera__Awake(Cameras_StaticCamera_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Color_Fields local_18;
  
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Camera;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    local_18.r = 0.0;
    local_18.g = 0.0;
    local_18.b = 0.0;
    local_18.a = 1.0;
    UnityEngine_Camera__set_backgroundColor(__this_00,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Cameras.StaticCamera$$SetSkybox
// il2cpp: void Cameras_StaticCamera__SetSkybox (Cameras_StaticCamera_o* __this, bool skybox, const MethodInfo* method);
// 0x1822fded0

void Cameras_StaticCamera__SetSkybox(Cameras_StaticCamera_o *__this,bool skybox,MethodInfo *method)

{
  UnityEngine_Camera_o *__this_00;
  
  __this_00 = (__this->fields).Camera;
  if (__this_00 == (UnityEngine_Camera_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!skybox) {
    UnityEngine_Camera__set_clearFlags(__this_00,2,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Camera__set_clearFlags(__this_00,1,(MethodInfo *)0x0);
  return;
}


// Cameras.StaticCamera$$.ctor
// il2cpp: void Cameras_StaticCamera___ctor (Cameras_StaticCamera_o* __this, const MethodInfo* method);
// 0x180528540

void
Cameras_StaticCamera___ctor(Cameras_StaticCamera_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


