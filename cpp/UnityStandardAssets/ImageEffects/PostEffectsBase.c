// Type: UnityStandardAssets.ImageEffects.PostEffectsBase
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/PostEffectsBase.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/PostEffectsBase.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckShaderAndCreateMaterial
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, UnityEngine_Shader_o* s, UnityEngine_Material_o* m2Create, const MethodInfo* method);
// 0x4251960

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,UnityEngine_Shader_o *s,
          UnityEngine_Material_o *m2Create,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *pUVar6;
  System_String_array *values;
  System_String_o *pSVar7;
  
  if (DAT_0570526a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" on effect ");
    il2cpp_init_method_metadata(&"Missing shader in ");
    il2cpp_init_method_metadata(&" is not supported on this platform!");
    il2cpp_init_method_metadata(&"The shader ");
    DAT_0570526a = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)s,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar7 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    pSVar7 = System_String__Concat("Missing shader in ",pSVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    return (UnityEngine_Material_o *)0x0;
  }
  if (s != (UnityEngine_Shader_o *)0x0) {
    bVar5 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)m2Create,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (m2Create == (UnityEngine_Material_o *)0x0) goto LAB_04251cd7;
        pUVar6 = (UnityEngine_Object_o *)
                 UnityEngine_Material__get_shader(m2Create,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)s,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return m2Create;
        }
      }
    }
    bVar5 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
      values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "The shader ";
          il2cpp_runtime_glue(values->m_Items);
          pSVar7 = (System_String_o *)
                   (*(s->klass->vtable)._3_ToString.methodPtr)
                             (s,(s->klass->vtable)._3_ToString.method);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar7;
            il2cpp_runtime_glue(values->m_Items + 1,pSVar7);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = " on effect ";
              il2cpp_runtime_glue(values->m_Items + 2);
              pSVar7 = (System_String_o *)
                       (*(__this->klass->vtable)._3_ToString.methodPtr)
                                 (__this,(__this->klass->vtable)._3_ToString.method);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar7;
                il2cpp_runtime_glue(values->m_Items + 3,pSVar7);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = " is not supported on this platform!";
                  il2cpp_runtime_glue(values->m_Items + 4);
                  pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                  return (UnityEngine_Material_o *)0x0;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pUVar6 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Material);
      UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar6,s,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar6;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pUVar6);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)pUVar6,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          if (pUVar6 != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_hideFlags(pUVar6,0x34,(MethodInfo *)0x0);
            return (UnityEngine_Material_o *)pUVar6;
          }
        }
      }
    }
  }
LAB_04251cd7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CreateMaterial
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, UnityEngine_Shader_o* s, UnityEngine_Material_o* m2Create, const MethodInfo* method);
// 0x4250eb0

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,UnityEngine_Shader_o *s,
          UnityEngine_Material_o *m2Create,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *pUVar6;
  System_String_o *pSVar7;
  
  if (DAT_0570526b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Missing shader in ");
    DAT_0570526b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)s,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar7 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    pSVar7 = System_String__Concat("Missing shader in ",pSVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
    return (UnityEngine_Material_o *)0x0;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)m2Create,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
LAB_04250fff:
    if (s == (UnityEngine_Shader_o *)0x0) goto LAB_042510bf;
  }
  else {
    if (m2Create == (UnityEngine_Material_o *)0x0) goto LAB_042510bf;
    pUVar6 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(m2Create,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)s,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto LAB_04250fff;
    if (s == (UnityEngine_Shader_o *)0x0) goto LAB_042510bf;
    bVar5 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return m2Create;
    }
  }
  bVar5 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (UnityEngine_Material_o *)0x0;
  }
  pUVar6 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Material);
  UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar6,s,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar6;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pUVar6);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)pUVar6,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      if (pUVar6 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_hideFlags(pUVar6,0x34,(MethodInfo *)0x0);
        return (UnityEngine_Material_o *)pUVar6;
      }
    }
  }
LAB_042510bf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$OnEnable
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__OnEnable (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x425fb40

void UnityStandardAssets_ImageEffects_PostEffectsBase__OnEnable
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$OnDestroy
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__OnDestroy (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x425fb50

void UnityStandardAssets_ImageEffects_PostEffectsBase__OnDestroy
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  UnityStandardAssets_ImageEffects_PostEffectsBase__RemoveCreatedMaterials(__this,method);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$RemoveCreatedMaterials
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__RemoveCreatedMaterials (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x425fb60

void UnityStandardAssets_ImageEffects_PostEffectsBase__RemoveCreatedMaterials
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  UnityEngine_Object_o *obj;
  
  if (DAT_0570526c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570526c = '\x01';
  }
  pSVar2 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
  if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    while( true ) {
      if (iVar1 < 1) {
        return;
      }
      obj = (UnityEngine_Object_o *)
            System_Collections_Generic_List<object>__get_Item(pSVar2,0,MethodInfo_Material_get_Item);
      pSVar2 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
      if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) break;
      System_Collections_Generic_List<object>__RemoveAt(pSVar2,0,MethodInfo_Void_RemoveAt);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      pSVar2 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
      if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) break;
      iVar1 = (pSVar2->fields)._size;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckSupport
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x425fc40

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  undefined8 unaff_RBX;
  undefined1 uVar4;
  
  if (DAT_0570526e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    DAT_0570526e = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar4 = 0;
  bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar1;
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar2) {
    bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar4 = (undefined1)bVar1;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar4;
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  bVar3 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if ((char)bVar1 == '\0') {
    bVar3 = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  return bVar3;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckResources (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x425fcc0

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckResources
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined8 extraout_RAX;
  
  if (DAT_0570526d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&" should be overwritten.");
    il2cpp_init_method_metadata(&"CheckResources () for ");
    DAT_0570526d = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._3_ToString.methodPtr)
                     (__this,(__this->klass->vtable)._3_ToString.method);
  pSVar1 = System_String__Concat("CheckResources () for ",pSVar1," should be overwritten.",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2));
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__Start (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x42595d0

void UnityStandardAssets_ImageEffects_PostEffectsBase__Start
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  undefined8 in_RDX;
  
  UNRECOVERED_JUMPTABLE = (__this->klass->vtable)._4_CheckResources.methodPtr;
                    /* WARNING: Could not recover jumptable at 0x042595e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (__this,(__this->klass->vtable)._4_CheckResources.method,in_RDX,UNRECOVERED_JUMPTABLE);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckSupport
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, bool needDepth, const MethodInfo* method);
// 0x4250dd0

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,bool_conflict needDepth,
          MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  uint uVar4;
  UnityEngine_Camera_o *__this_00;
  undefined1 uVar5;
  undefined8 unaff_R14;
  
  if (DAT_0570526e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    DAT_0570526e = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar5 = 0;
  bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar1;
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar2) {
    bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar5 = (undefined1)bVar1;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar5;
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if ((char)needDepth == '\0') {
      return bVar1;
    }
    bVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(1,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_00 = (UnityEngine_Camera_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
      if (__this_00 != (UnityEngine_Camera_o *)0x0) {
        uVar4 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
        UnityEngine_Camera__set_depthTextureMode(__this_00,uVar4 | 1,(MethodInfo *)0x0);
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  return 0;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckSupport
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, bool needDepth, bool needHdr, const MethodInfo* method);
// 0x4256450

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,bool_conflict needDepth,
          bool_conflict needHdr,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined4 in_register_00000014;
  
  bVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
                    (__this,needDepth,(MethodInfo *)CONCAT44(in_register_00000014,needHdr));
  if ((((char)bVar1 != '\0') && ((char)needHdr != '\0')) &&
     (bVar1 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1),
     (char)(__this->fields).supportHDRTextures == '\0')) {
    bVar1 = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  return bVar1;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$Dx11Support
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__Dx11Support (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x425fd60

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__Dx11Support
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1));
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$ReportAutoDisable
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x42510f0

void UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570526f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&" has been disabled as it's not supported on the current platform.");
    il2cpp_init_method_metadata(&"The image effect ");
    DAT_0570526f = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._3_ToString.methodPtr)
                     (__this,(__this->klass->vtable)._3_ToString.method);
  pSVar1 = System_String__Concat("The image effect ",pSVar1," has been disabled as it's not supported on the current platform.",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) != 0) {
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckShader
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShader (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, UnityEngine_Shader_o* s, const MethodInfo* method);
// 0x425fd70

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShader
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,UnityEngine_Shader_o *s,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05705270 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" on effect ");
    il2cpp_init_method_metadata(&"The shader ");
    il2cpp_init_method_metadata(&" is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects ...");
    DAT_05705270 = '\x01';
    method = extraout_RDX;
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5,method);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "The shader ";
      il2cpp_runtime_glue(values->m_Items);
      if (s == (UnityEngine_Shader_o *)0x0) goto LAB_0425ff07;
      pSVar2 = (System_String_o *)
               (*(s->klass->vtable)._3_ToString.methodPtr)(s,(s->klass->vtable)._3_ToString.method);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar2;
        il2cpp_runtime_glue(values->m_Items + 1,pSVar2);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = " on effect ";
          il2cpp_runtime_glue(values->m_Items + 2);
          pSVar2 = (System_String_o *)
                   (*(__this->klass->vtable)._3_ToString.methodPtr)
                             (__this,(__this->klass->vtable)._3_ToString.method);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar2;
            il2cpp_runtime_glue(values->m_Items + 3,pSVar2);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = " is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects ...";
              il2cpp_runtime_glue(values->m_Items + 4);
              pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
              bVar1 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
                *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
              }
              return 0;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0425ff07:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$NotSupported
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__NotSupported (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x42510d0

void UnityStandardAssets_ImageEffects_PostEffectsBase__NotSupported
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$DrawBorder
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__DrawBorder (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x425ff10

void UnityStandardAssets_ImageEffects_PostEffectsBase__DrawBorder
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,
               UnityEngine_RenderTexture_o *dest,UnityEngine_Material_o *material,MethodInfo *method
               )

{
  int32_t iVar1;
  int iVar2;
  int pass;
  float fVar3;
  
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
  UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
  if (material == (UnityEngine_Material_o *)0x0) {
LAB_04260319:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pass = 0;
  iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
  if (0 < iVar1) {
    do {
      UnityEngine_Material__SetPass(material,pass,(MethodInfo *)0x0);
      if (dest == (UnityEngine_RenderTexture_o *)0x0) goto LAB_04260319;
      iVar2 = (*(dest->klass->vtable)._5_get_width.methodPtr)(dest);
      fVar3 = 1.0 / (float)iVar2 + 0.0;
      UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar3,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar3,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._5_get_width.methodPtr)
                        (dest,(dest->klass->vtable)._5_get_width.method);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      fVar3 = 1.0 - 1.0 / (float)iVar2;
      UnityEngine_GL__Vertex3(fVar3,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar3,1.0,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._7_get_height.methodPtr)
                        (dest,(dest->klass->vtable)._7_get_height.method);
      fVar3 = 1.0 / (float)iVar2 + 0.0;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar3,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar3,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._7_get_height.methodPtr)();
      fVar3 = 1.0 - 1.0 / (float)iVar2;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar3,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar3,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__End((MethodInfo *)0x0);
      pass = pass + 1;
      iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
    } while (pass < iVar1);
  }
  UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase___ctor (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x4251780

void UnityStandardAssets_ImageEffects_PostEffectsBase___ctor
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_05705271 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_init_method_metadata(&TypeInfo_List_Material);
    DAT_05705271 = '\x01';
  }
  *(undefined1 *)&(__this->fields).supportHDRTextures = 1;
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Material);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported = __this_00;
  il2cpp_runtime_glue(&(__this->fields).isSupported);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


