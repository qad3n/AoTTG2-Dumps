// Type: Weather.WindWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WindWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WindWeatherEffect.cs
// --------------------------------

// Weather.WindWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_WindWeatherEffect__get__positionOffset (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x4078b70

UnityEngine_Vector3_o
Weather_WindWeatherEffect__get__positionOffset(Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  UVar2.fields.x = (float)uVar1 * 0.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 0.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Weather.WindWeatherEffect$$Setup
// il2cpp: void Weather_WindWeatherEffect__Setup (Weather_WindWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x4078bc0

void Weather_WindWeatherEffect__Setup
               (Weather_WindWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup((Weather_ThunderWeatherEffect_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$Randomize
// il2cpp: void Weather_WindWeatherEffect__Randomize (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x4078bd0

void Weather_WindWeatherEffect__Randomize(Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WindWeatherEffect$$Disable
// il2cpp: void Weather_WindWeatherEffect__Disable (Weather_WindWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x4078be0

void Weather_WindWeatherEffect__Disable
               (Weather_WindWeatherEffect_o *__this,bool_conflict fadeOut,MethodInfo *method)

{
  if (g_data_057ac32e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WindWeatherEffect);
    g_data_057ac32e = '\x01';
  }
  if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8) = 0;
  Weather_BaseWeatherEffect__Disable((Weather_BaseWeatherEffect_o *)__this,fadeOut & 0xff,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$SetLevel
// il2cpp: void Weather_WindWeatherEffect__SetLevel (Weather_WindWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x4078c40

void Weather_WindWeatherEffect__SetLevel(Weather_WindWeatherEffect_o *__this,float level,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  MethodInfo *pMVar1;
  
  if (g_data_057ac32f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WindWeatherEffect);
    g_data_057ac32f = '\x01';
    (__this->fields)._level = level;
  }
  else {
    (__this->fields)._level = level;
  }
  if (level <= 0.0) {
    return;
  }
  if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8) = 1;
  UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._15_SetAudioVolume.methodPtr;
  pMVar1 = (__this->klass->vtable)._15_SetAudioVolume.method;
  if (0.5 <= level) {
    (*UNRECOVERED_JUMPTABLE_00)(0x3f000000,__this,1,pMVar1);
    return;
  }
  (*UNRECOVERED_JUMPTABLE_00)(0x3f800000,__this,0,pMVar1);
  return;
}


// Weather.WindWeatherEffect$$.ctor
// il2cpp: void Weather_WindWeatherEffect___ctor (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x4078d20

void Weather_WindWeatherEffect___ctor(Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$.cctor
// il2cpp: void Weather_WindWeatherEffect___cctor (const MethodInfo* method);
// 0x4078d30

void Weather_WindWeatherEffect___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (g_data_057ac330 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WindWeatherEffect);
    g_data_057ac330 = '\x01';
  }
  puVar2 = *(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8);
  *puVar2 = 0;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
    puVar2 = *(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8);
  }
  uVar1 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  *(undefined8 *)(puVar2 + 4) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  *(undefined4 *)(puVar2 + 0xc) = uVar1;
  return;
}


