// Type: Weather.WindWeatherEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WindWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WindWeatherEffect.cs
// --------------------------------

// Weather.WindWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_WindWeatherEffect__get__positionOffset (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x181da1240

UnityEngine_Vector3_o *
Weather_WindWeatherEffect__get__positionOffset
          (UnityEngine_Vector3_o *__return_storage_ptr__,Weather_WindWeatherEffect_o *__this,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->upVector).fields.y;
  uVar2 = (pUVar3->upVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar3->upVector).fields.x * 0.0;
  (__return_storage_ptr__->fields).y = (float)uVar1 * 0.0;
  (__return_storage_ptr__->fields).z = (float)uVar2 * 0.0;
  return __return_storage_ptr__;
}


// Weather.WindWeatherEffect$$Setup
// il2cpp: void Weather_WindWeatherEffect__Setup (Weather_WindWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x181dae3a0

void Weather_WindWeatherEffect__Setup
               (Weather_WindWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup((Weather_BaseWeatherEffect_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$Randomize
// il2cpp: void Weather_WindWeatherEffect__Randomize (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_WindWeatherEffect__Randomize(Weather_WindWeatherEffect_o* __this, MethodInfo* method)

{
  return;
}


// Weather.WindWeatherEffect$$Disable
// il2cpp: void Weather_WindWeatherEffect__Disable (Weather_WindWeatherEffect_o* __this, bool fadeOut, const MethodInfo* method);
// 0x181dd52f0

void Weather_WindWeatherEffect__Disable(Weather_WindWeatherEffect_o *__this,bool fadeOut,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434495e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    Il2CppMethodInitialized_18434495e = '\x01';
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
// 0x181dd5360

void Weather_WindWeatherEffect__SetLevel(Weather_WindWeatherEffect_o *__this,float level,MethodInfo *method)

{
  MethodInfo *pMVar1;
  _func_36 *vtableDispatch;
  
  if (Il2CppMethodInitialized_18434495f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    Il2CppMethodInitialized_18434495f = '\x01';
  }
  (__this->fields)._level = level;
  if (0.0 < level) {
    if ((TypeInfo_Weather_WindWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect);
    }
    TypeInfo_Weather_WindWeatherEffect->static_fields->WindEnabled = true;
    pMVar1 = (__this->klass->vtable)._15_SetAudioVolume.method;
    vtableDispatch = (__this->klass->vtable)._15_SetAudioVolume.methodPtr;
    if (0.5 <= level) {
      (*vtableDispatch)(__this,1,0.5,pMVar1);
      return;
    }
    (*vtableDispatch)(__this,0,1.0,pMVar1);
  }
  return;
}


// Weather.WindWeatherEffect$$.ctor
// il2cpp: void Weather_WindWeatherEffect___ctor (Weather_WindWeatherEffect_o* __this, const MethodInfo* method);
// 0x181da1230

void Weather_WindWeatherEffect___ctor(Weather_WindWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor((Weather_BaseWeatherEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WindWeatherEffect$$.cctor
// il2cpp: void Weather_WindWeatherEffect___cctor (const MethodInfo* method);
// 0x181dd5410

void Weather_WindWeatherEffect___cctor(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  Weather_WindWeatherEffect_StaticFields *pWVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184344960 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    Il2CppMethodInitialized_184344960 = '\x01';
  }
  TypeInfo_Weather_WindWeatherEffect->static_fields->WindEnabled = false;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  pWVar3 = TypeInfo_Weather_WindWeatherEffect->static_fields;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (pWVar3->WindDirection).fields.x = (pUVar2->zeroVector).fields.x;
  (pWVar3->WindDirection).fields.y = fVar4;
  (pWVar3->WindDirection).fields.z = fVar1;
  return;
}


