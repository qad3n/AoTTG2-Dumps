// Type: UnityStandardAssets.ImageEffects.ImageEffectBase
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ImageEffectBase.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ImageEffectBase.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.ImageEffectBase$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffectBase__Start (UnityStandardAssets_ImageEffects_ImageEffectBase_o* __this, const MethodInfo* method);
// 0x4582d30

void UnityStandardAssets_ImageEffects_ImageEffectBase__Start
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Shader_o *__this_00;
  
  if (g_data_057af0d7 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057af0d7 = '\x01';
  }
  bVar2 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).shader;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      __this_00 = (__this->fields).shader;
      if (__this_00 == (UnityEngine_Shader_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057af0d9 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057af0d9 = '\x01';
        }
        pUVar1 = (UnityEngine_Object_o *)__this_00[1].fields.m_CachedPtr;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pUVar1 = (UnityEngine_Object_o *)__this_00[1].fields.m_CachedPtr;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      bVar2 = UnityEngine_Shader__get_isSupported(__this_00,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return;
      }
    }
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ImageEffectBase$$get_material
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ImageEffectBase__get_material (UnityStandardAssets_ImageEffects_ImageEffectBase_o* __this, const MethodInfo* method);
// 0x45807d0

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
          (UnityStandardAssets_ImageEffects_ImageEffectBase_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Shader_o *shader;
  bool_conflict bVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057af0d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0d8 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).m_Material;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    shader = (__this->fields).shader;
    __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
    (__this->fields).m_Material = __this_00;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    __this_01 = (UnityEngine_MonoBehaviour_o *)(__this->fields).m_Material;
    if (__this_01 == (UnityEngine_MonoBehaviour_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_01,0x3d,(MethodInfo *)0x0);
  }
  return *ppUVar1;
}


// UnityStandardAssets.ImageEffects.ImageEffectBase$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffectBase__OnDisable (UnityStandardAssets_ImageEffects_ImageEffectBase_o* __this, const MethodInfo* method);
// 0x4582dc0

void UnityStandardAssets_ImageEffects_ImageEffectBase__OnDisable
               (UnityStandardAssets_ImageEffects_ImageEffectBase_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057af0d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0d9 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_Material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.ImageEffectBase$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffectBase___ctor (UnityStandardAssets_ImageEffects_ImageEffectBase_o* __this, const MethodInfo* method);
// 0x45808b0

void UnityStandardAssets_ImageEffects_ImageEffectBase___ctor
               (UnityStandardAssets_ImageEffects_ImageEffectBase_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


