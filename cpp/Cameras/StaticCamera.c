// Type: Cameras.StaticCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Cameras/StaticCamera.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Cameras/StaticCamera.cs  [CHANGED since prior version]
// --------------------------------

// Cameras.StaticCamera$$Awake
// il2cpp: void Cameras_StaticCamera__Awake (Cameras_StaticCamera_o* __this, const MethodInfo* method);
// 0x414c240

void Cameras_StaticCamera__Awake(Cameras_StaticCamera_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *__this_00;
  
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,method);
  __this_00 = (__this->fields).Camera;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_backgroundColor
              (__this_00,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.StaticCamera$$SetSkybox
// il2cpp: void Cameras_StaticCamera__SetSkybox (Cameras_StaticCamera_o* __this, bool skybox, const MethodInfo* method);
// 0x414c270

void Cameras_StaticCamera__SetSkybox
               (Cameras_StaticCamera_o *__this,bool_conflict skybox,MethodInfo *method)

{
  UnityEngine_Camera_o *__this_00;
  
  __this_00 = (__this->fields).Camera;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_clearFlags(__this_00,2 - (skybox & 0xffU),(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.StaticCamera$$.ctor
// il2cpp: void Cameras_StaticCamera___ctor (Cameras_StaticCamera_o* __this, const MethodInfo* method);
// 0x414c2a0

void Cameras_StaticCamera___ctor(Cameras_StaticCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


