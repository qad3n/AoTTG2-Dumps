// Type: Weather.WindWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Weather/WindWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WindWeatherEffect.cs
// --------------------------------

// Weather.WindWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_WindWeatherEffect__get__positionOffset (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x58627e0

UnityEngine_Vector3_o
Weather_WindWeatherEffect__get__positionOffset(Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->upVector).fields.x;
  uVar2 = (pUVar3->upVector).fields.y;
  UVar4.fields.x = (float)uVar1 * 0.0;
  UVar4.fields.y = (float)uVar2 * 0.0;
  UVar4.fields.z = (pUVar3->upVector).fields.z * 0.0;
  return (UnityEngine_Vector3_o)UVar4.fields;
}


// Weather.WindWeatherEffect$$Setup
// il2cpp: void Weather_WindWeatherEffect__Setup (Weather_WindWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5862830

void Weather_WindWeatherEffect__Setup
               (Weather_WindWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup((Weather_ThunderWeatherEffect_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$Randomize
// il2cpp: void Weather_WindWeatherEffect__Randomize (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x5862840

void Weather_WindWeatherEffect__Randomize(Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WindWeatherEffect$$Disable
// il2cpp: void Weather_WindWeatherEffect__Disable (Weather_WindWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x5862850

void Weather_WindWeatherEffect__Disable(Weather_WindWeatherEffect_o *__this,bool fadeOut,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075450ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    Il2CppMethodInitialized_075450ba = '\x01';
  }
  if ((TypeInfo_Weather_WindWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect);
  }
  TypeInfo_Weather_WindWeatherEffect->static_fields->WindEnabled = false;
  Weather_BaseWeatherEffect__Disable((Weather_BaseWeatherEffect_o *)__this,fadeOut,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$SetLevel
// il2cpp: void Weather_WindWeatherEffect__SetLevel (Weather_WindWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x58628b0

void Weather_WindWeatherEffect__SetLevel(Weather_WindWeatherEffect_o *__this,float level,MethodInfo *method)

{
  _func_28 *UNRECOVERED_JUMPTABLE_00;
  MethodInfo *pMVar1;
  
  if (Il2CppMethodInitialized_075450bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    Il2CppMethodInitialized_075450bb = '\x01';
    (__this->fields)._level = level;
  }
  else {
    (__this->fields)._level = level;
  }
  if (level <= 0.0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect);
  }
  TypeInfo_Weather_WindWeatherEffect->static_fields->WindEnabled = true;
  UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._15_SetAudioVolume.methodPtr;
  pMVar1 = (__this->klass->vtable)._15_SetAudioVolume.method;
  if (0.5 <= level) {
    (*UNRECOVERED_JUMPTABLE_00)(__this,1,0.5,pMVar1);
    return;
  }
  (*UNRECOVERED_JUMPTABLE_00)(__this,0,1.0,pMVar1);
  return;
}


// Weather.WindWeatherEffect$$.ctor
// il2cpp: void Weather_WindWeatherEffect___ctor (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x5862990

void Weather_WindWeatherEffect___ctor(Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$.cctor
// il2cpp: void Weather_WindWeatherEffect___cctor (const MethodInfo* method);
// 0x58629a0

void Weather_WindWeatherEffect___cctor(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  Weather_WindWeatherEffect_StaticFields *pWVar4;
  
  if (Il2CppMethodInitialized_075450bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    Il2CppMethodInitialized_075450bc = '\x01';
  }
  pWVar4 = TypeInfo_Weather_WindWeatherEffect->static_fields;
  pWVar4->WindEnabled = false;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
    pWVar4 = TypeInfo_Weather_WindWeatherEffect->static_fields;
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (pWVar4->WindDirection).fields.x = (pUVar2->zeroVector).fields.x;
  (pWVar4->WindDirection).fields.y = fVar3;
  (pWVar4->WindDirection).fields.z = fVar1;
  return;
}


