// Type: Spawnables.BaseSpawnable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Spawnables/BaseSpawnable.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/BaseSpawnable.cs
// --------------------------------

// Spawnables.BaseSpawnable$$Setup
// il2cpp: void Spawnables_BaseSpawnable__Setup (Spawnables_BaseSpawnable_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x586da90

void Spawnables_BaseSpawnable__Setup
               (Spawnables_BaseSpawnable_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  (__this->fields)._timeLeft = liveTime;
  (__this->fields)._expires = 0.0 < liveTime;
  (*(__this->klass->vtable)._5_SetupSettings.methodPtr)
            (__this,settings,(__this->klass->vtable)._5_SetupSettings.method);
  return;
}


// Spawnables.BaseSpawnable$$SetupSettings
// il2cpp: void Spawnables_BaseSpawnable__SetupSettings (Spawnables_BaseSpawnable_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x586daf0

void Spawnables_BaseSpawnable__SetupSettings
               (Spawnables_BaseSpawnable_o *__this,System_Object_array *settings,MethodInfo *method)

{
  return;
}


// Spawnables.BaseSpawnable$$Update
// il2cpp: void Spawnables_BaseSpawnable__Update (Spawnables_BaseSpawnable_o* __this, const MethodInfo* method);
// 0x586db00

void Spawnables_BaseSpawnable__Update(Spawnables_BaseSpawnable_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07545156 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545156 = '\x01';
  }
  fVar2 = (__this->fields)._timeLeft;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._timeLeft = fVar2;
  if ((fVar2 <= 0.0) && ((__this->fields)._expires != false)) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Spawnables.BaseSpawnable$$.ctor
// il2cpp: void Spawnables_BaseSpawnable___ctor (Spawnables_BaseSpawnable_o* __this, const MethodInfo* method);
// 0x586db90

void Spawnables_BaseSpawnable___ctor(Spawnables_BaseSpawnable_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


