// Type: Weather.WindWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/WindWeatherEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/WindWeatherEffect.cs  [CHANGED since prior version]
// --------------------------------

// Weather.WindWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_WindWeatherEffect__get__positionOffset (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d83220

UnityEngine_Vector3_o
Weather_WindWeatherEffect__get__positionOffset
          (Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  UVar2.fields.x = (float)uVar1 * 0.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 0.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Weather.WindWeatherEffect$$Setup
// il2cpp: void Weather_WindWeatherEffect__Setup (Weather_WindWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x3d83270

void Weather_WindWeatherEffect__Setup
               (Weather_WindWeatherEffect_o *__this,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup
            ((Weather_ThunderWeatherEffect_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$Randomize
// il2cpp: void Weather_WindWeatherEffect__Randomize (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d83280

void Weather_WindWeatherEffect__Randomize(Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WindWeatherEffect$$Disable
// il2cpp: void Weather_WindWeatherEffect__Disable (Weather_WindWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x3d83290

void Weather_WindWeatherEffect__Disable
               (Weather_WindWeatherEffect_o *__this,bool_conflict fadeOut,MethodInfo *method)

{
  if (DAT_0570267e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WindWeatherEffect);
    DAT_0570267e = '\x01';
  }
  if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8) = 0;
  Weather_BaseWeatherEffect__Disable
            ((Weather_BaseWeatherEffect_o *)__this,fadeOut & 0xff,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$SetLevel
// il2cpp: void Weather_WindWeatherEffect__SetLevel (Weather_WindWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x3d832f0

void Weather_WindWeatherEffect__SetLevel
               (Weather_WindWeatherEffect_o *__this,float level,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch_00;
  MethodInfo *pMVar1;
  
  if (DAT_0570267f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WindWeatherEffect);
    DAT_0570267f = '\x01';
    (__this->fields)._level = level;
  }
  else {
    (__this->fields)._level = level;
  }
  if (level <= 0.0) {
    return;
  }
  if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8) = 1;
  vtable_dispatch_00 = (__this->klass->vtable)._15_SetAudioVolume.methodPtr;
  pMVar1 = (__this->klass->vtable)._15_SetAudioVolume.method;
  if (0.5 <= level) {
    (*vtable_dispatch_00)(0x3f000000,__this,1,pMVar1);
    return;
  }
  (*vtable_dispatch_00)(0x3f800000,__this,0,pMVar1);
  return;
}


// Weather.WindWeatherEffect$$.ctor
// il2cpp: void Weather_WindWeatherEffect___ctor (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d833d0

void Weather_WindWeatherEffect___ctor(Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$.cctor
// il2cpp: void Weather_WindWeatherEffect___cctor (const MethodInfo* method);
// 0x3d833e0

void Weather_WindWeatherEffect___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (DAT_05702680 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WindWeatherEffect);
    DAT_05702680 = '\x01';
  }
  puVar2 = *(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8);
  *puVar2 = 0;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
    puVar2 = *(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8);
  }
  uVar1 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  *(undefined8 *)(puVar2 + 4) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  *(undefined4 *)(puVar2 + 0xc) = uVar1;
  return;
}


