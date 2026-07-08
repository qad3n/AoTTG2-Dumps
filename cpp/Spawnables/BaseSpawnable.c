// Type: Spawnables.BaseSpawnable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Spawnables/BaseSpawnable.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Spawnables/BaseSpawnable.cs  [CHANGED since prior version]
// --------------------------------

// Spawnables.BaseSpawnable$$Setup
// il2cpp: void Spawnables_BaseSpawnable__Setup (Spawnables_BaseSpawnable_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x3d8e950

void Spawnables_BaseSpawnable__Setup
               (Spawnables_BaseSpawnable_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner);
  (__this->fields)._timeLeft = liveTime;
  *(bool *)&(__this->fields)._expires = 0.0 < liveTime;
  vtable_dispatch = (__this->klass->vtable)._5_SetupSettings.methodPtr;
  (*vtable_dispatch)
            (__this,settings,(__this->klass->vtable)._5_SetupSettings.method,vtable_dispatch);
  return;
}


// Spawnables.BaseSpawnable$$SetupSettings
// il2cpp: void Spawnables_BaseSpawnable__SetupSettings (Spawnables_BaseSpawnable_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x3d8e9b0

void Spawnables_BaseSpawnable__SetupSettings
               (Spawnables_BaseSpawnable_o *__this,System_Object_array *settings,MethodInfo *method)

{
  return;
}


// Spawnables.BaseSpawnable$$Update
// il2cpp: void Spawnables_BaseSpawnable__Update (Spawnables_BaseSpawnable_o* __this, const MethodInfo* method);
// 0x3d8e9c0

void Spawnables_BaseSpawnable__Update(Spawnables_BaseSpawnable_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  float fVar1;
  float fVar2;
  
  if (DAT_05702714 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05702714 = '\x01';
  }
  fVar2 = (__this->fields)._timeLeft;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._timeLeft = fVar2;
  if ((fVar2 <= 0.0) && ((char)(__this->fields)._expires != '\0')) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Spawnables.BaseSpawnable$$.ctor
// il2cpp: void Spawnables_BaseSpawnable___ctor (Spawnables_BaseSpawnable_o* __this, const MethodInfo* method);
// 0x3d8ea50

void Spawnables_BaseSpawnable___ctor(Spawnables_BaseSpawnable_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


