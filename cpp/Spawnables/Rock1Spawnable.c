// Type: Spawnables.Rock1Spawnable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/Rock1Spawnable.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/Rock1Spawnable.cs
// --------------------------------

// Spawnables.Rock1Spawnable$$SetupSettings
// il2cpp: void Spawnables_Rock1Spawnable__SetupSettings (Spawnables_Rock1Spawnable_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x40843b0

void Spawnables_Rock1Spawnable__SetupSettings
               (Spawnables_Rock1Spawnable_o *__this,System_Object_array *settings,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  UnityEngine_Component_o *__this_00;
  bool_conflict bVar3;
  int32_t *piVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *p;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ac3c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ac3c5 = '\x01';
  }
  if (settings == (System_Object_array *)0x0) {
label_0408457d:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)settings->max_length != 0) {
    settings = (System_Object_array *)settings->m_Items[0];
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (settings != (System_Object_array *)0x0) {
      if ((((settings->obj).klass)->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40))
      goto label_04084587;
      piVar4 = (int32_t *)il2cpp_runtime_helper_02305440(settings);
      settings = (System_Object_array *)Utility_Util__FindCharacterByViewId(*piVar4,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)settings,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar3 == '\0') || (settings == (System_Object_array *)0x0)) {
        return;
      }
      pIVar2 = (settings->obj).klass;
      bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((pIVar2->_2).naturalAligment < bVar1) {
        return;
      }
      if ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BasicTitan) {
        return;
      }
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (((settings->m_Items[0x4b] != (Il2CppObject *)0x0) &&
          (__this_00 = *(UnityEngine_Component_o **)((long)settings->m_Items[0x4b] + 0x90),
          __this_00 != (UnityEngine_Component_o *)0x0)) &&
         (p = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar5,p,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          value.fields.z = -0.07;
          value.fields.x = 0.0;
          value.fields.y = 0.07;
          UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          settings = (System_Object_array *)0x0;
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation
                      (pUVar5,(UnityEngine_Quaternion_o)
                              **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    goto label_0408457d;
  }
  il2cpp_runtime_helper_022b2ca0();
label_04084587:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)settings,(MethodInfo *)0x0);
  return;
}


// Spawnables.Rock1Spawnable$$.ctor
// il2cpp: void Spawnables_Rock1Spawnable___ctor (Spawnables_Rock1Spawnable_o* __this, const MethodInfo* method);
// 0x4084590

void Spawnables_Rock1Spawnable___ctor(Spawnables_Rock1Spawnable_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


