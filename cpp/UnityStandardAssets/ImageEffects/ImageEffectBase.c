// Type: UnityStandardAssets.ImageEffects.ImageEffectBase
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ImageEffectBase.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ImageEffectBase.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.ImageEffectBase$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffectBase__Start (UnityStandardAssets_ImageEffects_ImageEffectBase_o* __this, const MethodInfo* method);
// 0x425dc30

void UnityStandardAssets_ImageEffects_ImageEffectBase__Start
               (UnityStandardAssets_ImageEffects_MotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  UnityEngine_Shader_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_0570525b == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570525b = '\x01';
  }
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    exists = (UnityEngine_Object_o *)(__this->fields).shader;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_00 = (__this->fields).shader;
      if (__this_00 == (UnityEngine_Shader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = UnityEngine_Shader__get_isSupported(__this_00,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return;
      }
    }
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ImageEffectBase$$get_material
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ImageEffectBase__get_material (UnityStandardAssets_ImageEffects_ImageEffectBase_o* __this, const MethodInfo* method);
// 0x425b6d0

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
          (UnityStandardAssets_ImageEffects_ImageEffectBase_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Shader_o *shader;
  bool_conflict bVar3;
  UnityEngine_Material_o *__this_00;
  
  if (DAT_0570525c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570525c = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).m_Material;
  bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    shader = (__this->fields).shader;
    __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
    (__this->fields).m_Material = __this_00;
    il2cpp_runtime_glue(ppUVar1,__this_00);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_Material;
    if (pUVar2 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Object__set_hideFlags(pUVar2,0x3d,(MethodInfo *)0x0);
  }
  return *ppUVar1;
}


// UnityStandardAssets.ImageEffects.ImageEffectBase$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffectBase__OnDisable (UnityStandardAssets_ImageEffects_ImageEffectBase_o* __this, const MethodInfo* method);
// 0x425dcc0

void UnityStandardAssets_ImageEffects_ImageEffectBase__OnDisable
               (UnityStandardAssets_ImageEffects_ImageEffectBase_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570525d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570525d = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).m_Material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.ImageEffectBase$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffectBase___ctor (UnityStandardAssets_ImageEffects_ImageEffectBase_o* __this, const MethodInfo* method);
// 0x425b7b0

void UnityStandardAssets_ImageEffects_ImageEffectBase___ctor
               (UnityStandardAssets_ImageEffects_ImageEffectBase_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


