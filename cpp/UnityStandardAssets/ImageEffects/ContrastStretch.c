// Type: UnityStandardAssets.ImageEffects.ContrastStretch
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ContrastStretch.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ContrastStretch.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.ContrastStretch$$get_materialLum
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x425bc70

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum
          (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Shader_o *shader;
  bool_conflict bVar3;
  UnityEngine_Material_o *__this_00;
  
  if (DAT_0570524c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570524c = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_materialLum;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).m_materialLum;
  bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    shader = (__this->fields).shaderLum;
    __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
    (__this->fields).m_materialLum = __this_00;
    il2cpp_runtime_glue(ppUVar1,__this_00);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_materialLum;
    if (pUVar2 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Object__set_hideFlags(pUVar2,0x3d,(MethodInfo *)0x0);
  }
  return *ppUVar1;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$get_materialReduce
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x425bd40

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
          (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Shader_o *shader;
  bool_conflict bVar3;
  UnityEngine_Material_o *__this_00;
  
  if (DAT_0570524d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570524d = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_materialReduce;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).m_materialReduce;
  bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    shader = (__this->fields).shaderReduce;
    __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
    (__this->fields).m_materialReduce = __this_00;
    il2cpp_runtime_glue(ppUVar1,__this_00);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_materialReduce;
    if (pUVar2 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Object__set_hideFlags(pUVar2,0x3d,(MethodInfo *)0x0);
  }
  return *ppUVar1;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$get_materialAdapt
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x425be10

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
          (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Shader_o *shader;
  bool_conflict bVar3;
  UnityEngine_Material_o *__this_00;
  
  if (DAT_0570524e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570524e = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_materialAdapt;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).m_materialAdapt;
  bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    shader = (__this->fields).shaderAdapt;
    __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
    (__this->fields).m_materialAdapt = __this_00;
    il2cpp_runtime_glue(ppUVar1,__this_00);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_materialAdapt;
    if (pUVar2 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Object__set_hideFlags(pUVar2,0x3d,(MethodInfo *)0x0);
  }
  return *ppUVar1;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$get_materialApply
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x425bee0

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
          (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Shader_o *shader;
  bool_conflict bVar3;
  UnityEngine_Material_o *__this_00;
  
  if (DAT_0570524f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570524f = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_materialApply;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).m_materialApply;
  bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    shader = (__this->fields).shaderApply;
    __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
    (__this->fields).m_materialApply = __this_00;
    il2cpp_runtime_glue(ppUVar1,__this_00);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields).m_materialApply;
    if (pUVar2 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Object__set_hideFlags(pUVar2,0x3d,(MethodInfo *)0x0);
  }
  return *ppUVar1;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__Start (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x425bfb0

void UnityStandardAssets_ImageEffects_ContrastStretch__Start
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Shader_o *pUVar1;
  bool_conflict bVar2;
  
  bVar2 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).shaderAdapt;
    if (pUVar1 == (UnityEngine_Shader_o *)0x0) {
LAB_0425c01e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pUVar1 = (__this->fields).shaderApply;
      if (pUVar1 == (UnityEngine_Shader_o *)0x0) goto LAB_0425c01e;
      bVar2 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pUVar1 = (__this->fields).shaderLum;
        if (pUVar1 == (UnityEngine_Shader_o *)0x0) goto LAB_0425c01e;
        bVar2 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pUVar1 = (__this->fields).shaderReduce;
          if (pUVar1 == (UnityEngine_Shader_o *)0x0) goto LAB_0425c01e;
          bVar2 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            return;
          }
        }
      }
    }
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$OnEnable
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__OnEnable (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x425c030

void UnityStandardAssets_ImageEffects_ContrastStretch__OnEnable
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_RenderTexture_array *pUVar1;
  bool_conflict bVar2;
  UnityEngine_RenderTexture_o *pUVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (DAT_05705250 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RenderTexture);
    DAT_05705250 = '\x01';
  }
  pUVar1 = (__this->fields).adaptRenderTex;
  if (pUVar1 == (UnityEngine_RenderTexture_array *)0x0) goto LAB_0425c22c;
  if ((int)pUVar1->max_length != 0) {
    pUVar3 = pUVar1->m_Items[0];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pUVar1 = (__this->fields).adaptRenderTex;
      pUVar3 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_glue(TypeInfo_RenderTexture);
      UnityEngine_RenderTexture___ctor(pUVar3,1,1,0,(MethodInfo *)0x0);
      if (pUVar1 == (UnityEngine_RenderTexture_array *)0x0) goto LAB_0425c22c;
      if (pUVar3 != (UnityEngine_RenderTexture_o *)0x0) {
        lVar4 = il2cpp_runtime_glue(pUVar3,(((pUVar1->obj).klass)->_1).element_class);
        if (lVar4 == 0) goto LAB_0425c236;
      }
      if ((int)pUVar1->max_length == 0) goto LAB_0425c231;
      pUVar1->m_Items[0] = pUVar3;
      il2cpp_runtime_glue(pUVar1->m_Items,pUVar3);
      pUVar1 = (__this->fields).adaptRenderTex;
      if (pUVar1 == (UnityEngine_RenderTexture_array *)0x0) goto LAB_0425c22c;
      if ((int)pUVar1->max_length == 0) goto LAB_0425c231;
      if (pUVar1->m_Items[0] == (UnityEngine_RenderTexture_o *)0x0) goto LAB_0425c22c;
      UnityEngine_Object__set_hideFlags
                ((UnityEngine_Object_o *)pUVar1->m_Items[0],0x3d,(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields).adaptRenderTex;
    if (pUVar1 != (UnityEngine_RenderTexture_array *)0x0) {
      if ((pUVar1->max_length & 0xfffffffe) == 0) goto LAB_0425c231;
      pUVar3 = pUVar1->m_Items[1];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return;
      }
      pUVar1 = (__this->fields).adaptRenderTex;
      pUVar3 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_glue(TypeInfo_RenderTexture);
      UnityEngine_RenderTexture___ctor(pUVar3,1,1,0,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_RenderTexture_array *)0x0) {
        if (pUVar3 != (UnityEngine_RenderTexture_o *)0x0) {
          lVar4 = il2cpp_runtime_glue(pUVar3,(((pUVar1->obj).klass)->_1).element_class);
          if (lVar4 == 0) {
LAB_0425c236:
            uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar5,0);
          }
        }
        if ((pUVar1->max_length & 0xfffffffe) == 0) goto LAB_0425c231;
        pUVar1->m_Items[1] = pUVar3;
        il2cpp_runtime_glue(pUVar1->m_Items + 1,pUVar3);
        pUVar1 = (__this->fields).adaptRenderTex;
        if (pUVar1 != (UnityEngine_RenderTexture_array *)0x0) {
          if ((pUVar1->max_length & 0xfffffffe) == 0) goto LAB_0425c231;
          if (pUVar1->m_Items[1] != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_Object__set_hideFlags
                      ((UnityEngine_Object_o *)pUVar1->m_Items[1],0x3d,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
LAB_0425c22c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0425c231:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__OnDisable (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x425c250

void UnityStandardAssets_ImageEffects_ContrastStretch__OnDisable
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_RenderTexture_array *pUVar1;
  UnityEngine_RenderTexture_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  
  if (DAT_05705251 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705251 = '\x01';
  }
  pUVar1 = (__this->fields).adaptRenderTex;
  if (pUVar1 != (UnityEngine_RenderTexture_array *)0x0) {
    if ((int)pUVar1->max_length != 0) {
      pUVar2 = pUVar1->m_Items[0];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__DestroyImmediate((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).adaptRenderTex;
      if (pUVar1 == (UnityEngine_RenderTexture_array *)0x0) goto LAB_0425c454;
      if ((int)pUVar1->max_length != 0) {
        pUVar1->m_Items[0] = (UnityEngine_RenderTexture_o *)0x0;
        il2cpp_runtime_glue(pUVar1->m_Items);
        pUVar1 = (__this->fields).adaptRenderTex;
        if (pUVar1 == (UnityEngine_RenderTexture_array *)0x0) goto LAB_0425c454;
        if ((pUVar1->max_length & 0xfffffffe) != 0) {
          pUVar2 = pUVar1->m_Items[1];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Object__DestroyImmediate((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).adaptRenderTex;
          if (pUVar1 == (UnityEngine_RenderTexture_array *)0x0) goto LAB_0425c454;
          if ((pUVar1->max_length & 0xfffffffe) != 0) {
            pUVar1->m_Items[1] = (UnityEngine_RenderTexture_o *)0x0;
            il2cpp_runtime_glue(pUVar1->m_Items + 1);
            pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_materialLum;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_materialLum;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
            }
            pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_materialReduce;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_materialReduce;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
            }
            pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_materialAdapt;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_materialAdapt;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
            }
            pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_materialApply;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              pUVar3 = (UnityEngine_Object_o *)(__this->fields).m_materialApply;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
              return;
            }
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0425c454:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__OnRenderImage (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x425c460

void UnityStandardAssets_ImageEffects_ContrastStretch__OnRenderImage
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_RenderTexture_array *pUVar1;
  int32_t iVar2;
  uint uVar3;
  int iVar4;
  MethodInfo *curTexture;
  UnityEngine_Material_o *pUVar5;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05705252 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_AdaptTex");
    DAT_05705252 = '\x01';
  }
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    iVar2 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    uVar3 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    pMVar6 = (MethodInfo *)(ulong)uVar3;
    curTexture = (MethodInfo *)
                 UnityEngine_RenderTexture__GetTemporary(iVar2,uVar3,(MethodInfo *)0x0);
    pUVar5 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialLum(__this,pMVar6);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)curTexture,pUVar5,
               (MethodInfo *)0x0);
    while (curTexture != (MethodInfo *)0x0) {
      iVar4 = (*(((UnityEngine_Texture_c *)curTexture->methodPointer)->vtable)._5_get_width.
                methodPtr)(curTexture,
                           (((UnityEngine_Texture_c *)curTexture->methodPointer)->vtable).
                           _5_get_width.method);
      if ((iVar4 < 2) &&
         (iVar4 = (*(((UnityEngine_Texture_c *)curTexture->methodPointer)->vtable)._7_get_height.
                    methodPtr)(curTexture,
                               (((UnityEngine_Texture_c *)curTexture->methodPointer)->vtable).
                               _7_get_height.method), iVar4 < 2)) {
        pMVar6 = curTexture;
        UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
                  (__this,(UnityEngine_Texture_o *)curTexture,method_00);
        pUVar5 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply(__this,pMVar6);
        pUVar1 = (__this->fields).adaptRenderTex;
        if (pUVar1 != (UnityEngine_RenderTexture_array *)0x0) {
          uVar3 = (__this->fields).curAdaptIndex;
          if ((uint)pUVar1->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pUVar5 != (UnityEngine_Material_o *)0x0) {
            pMVar6 = "_AdaptTex";
            UnityEngine_Material__SetTexture
                      (pUVar5,(System_String_o *)"_AdaptTex",
                       (UnityEngine_Texture_o *)pUVar1->m_Items[(int)uVar3],(MethodInfo *)0x0);
            pUVar5 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialApply
                               (__this,pMVar6);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit
                      ((UnityEngine_Texture_o *)source,destination,pUVar5,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      }
      iVar4 = (*(((UnityEngine_Texture_c *)curTexture->methodPointer)->vtable)._5_get_width.
                methodPtr)(curTexture,
                           (((UnityEngine_Texture_c *)curTexture->methodPointer)->vtable).
                           _5_get_width.method);
      uVar3 = 1;
      iVar2 = 1;
      if (1 < iVar4) {
        iVar2 = iVar4 / 2;
      }
      iVar4 = (*(((UnityEngine_Texture_c *)curTexture->methodPointer)->vtable)._7_get_height.
                methodPtr)(curTexture,
                           (((UnityEngine_Texture_c *)curTexture->methodPointer)->vtable).
                           _7_get_height.method);
      if (1 < iVar4) {
        uVar3 = iVar4 / 2;
      }
      method_01 = (MethodInfo *)(ulong)uVar3;
      pMVar6 = (MethodInfo *)UnityEngine_RenderTexture__GetTemporary(iVar2,uVar3,(MethodInfo *)0x0);
      pUVar5 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialReduce
                         (__this,method_01);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)curTexture,(UnityEngine_RenderTexture_o *)pMVar6,pUVar5,
                 (MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary
                ((UnityEngine_RenderTexture_o *)curTexture,(MethodInfo *)0x0);
      curTexture = pMVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$CalculateAdaptation
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, UnityEngine_Texture_o* curTexture, const MethodInfo* method);
// 0x425c6a0

void UnityStandardAssets_ImageEffects_ContrastStretch__CalculateAdaptation
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,
               UnityEngine_Texture_o *curTexture,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UnityEngine_RenderTexture_array *pUVar4;
  UnityEngine_RenderTexture_o *pUVar5;
  UnityEngine_Texture_o *source;
  UnityEngine_Material_o *pUVar6;
  MethodInfo *pMVar7;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float fVar8;
  float fVar9;
  UnityEngine_Vector4_o value;
  
  pMVar7 = (MethodInfo *)curTexture;
  if (DAT_05705253 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_CurTex");
    il2cpp_init_method_metadata();
    DAT_05705253 = '\x01';
  }
  uVar1 = (__this->fields).curAdaptIndex;
  (__this->fields).curAdaptIndex =
       (uVar1 + 1) - ((uVar1 - ((int)(uVar1 + 1) >> 0x1f)) + 1 & 0xfffffffe);
  fVar9 = (__this->fields).adaptationSpeed;
  __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar9 = powf(__this_00,1.0 - fVar9,fVar8 * 30.0,pMVar7);
  pUVar6 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt(__this,pMVar7);
  if (pUVar6 != (UnityEngine_Material_o *)0x0) {
    pMVar7 = "_CurTex";
    UnityEngine_Material__SetTexture
              (pUVar6,(System_String_o *)"_CurTex",curTexture,(MethodInfo *)0x0);
    pUVar6 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt(__this,pMVar7);
    if (pUVar6 != (UnityEngine_Material_o *)0x0) {
      fVar9 = 1.0 - fVar9;
      fVar8 = 1.0;
      if (fVar9 <= 1.0) {
        fVar8 = fVar9;
      }
      value.fields.y = (__this->fields).limitMinimum;
      value.fields.x =
           (float)(~-(uint)(0.01 <= fVar9) & 0x3c23d70a | (uint)fVar8 & -(uint)(0.01 <= fVar9));
      value.fields.z = (__this->fields).limitMaximum;
      value.fields.w = 0.0;
      UnityEngine_Material__SetVector(pUVar6,"_AdaptParams",value,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).adaptRenderTex;
      if (pUVar4 != (UnityEngine_RenderTexture_array *)0x0) {
        uVar2 = (__this->fields).curAdaptIndex;
        if (uVar2 < (uint)pUVar4->max_length) {
          pUVar5 = pUVar4->m_Items[(int)uVar2];
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__SetRenderTarget(pUVar5,(MethodInfo *)0x0);
          pMVar7 = (MethodInfo *)0x1;
          UnityEngine_GL__Clear
                    (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                     (MethodInfo *)0x0);
          pUVar4 = (__this->fields).adaptRenderTex;
          if (pUVar4 == (UnityEngine_RenderTexture_array *)0x0) goto LAB_0425c85a;
          uVar2 = (uint)pUVar4->max_length;
          if ((uVar1 < uVar2) && (uVar3 = (__this->fields).curAdaptIndex, uVar3 < uVar2)) {
            source = (UnityEngine_Texture_o *)pUVar4->m_Items[(int)uVar1];
            pUVar5 = pUVar4->m_Items[(int)uVar3];
            pUVar6 = UnityStandardAssets_ImageEffects_ContrastStretch__get_materialAdapt
                               (__this,pMVar7);
            UnityEngine_Graphics__Blit(source,pUVar5,pUVar6,(MethodInfo *)0x0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_0425c85a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ContrastStretch$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastStretch___ctor (UnityStandardAssets_ImageEffects_ContrastStretch_o* __this, const MethodInfo* method);
// 0x425c870

void UnityStandardAssets_ImageEffects_ContrastStretch___ctor
               (UnityStandardAssets_ImageEffects_ContrastStretch_o *__this,MethodInfo *method)

{
  UnityEngine_RenderTexture_array *pUVar1;
  
  if (DAT_05705254 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RenderTexture);
    DAT_05705254 = '\x01';
  }
  (__this->fields).adaptationSpeed = 0.02;
  (__this->fields).limitMinimum = 0.2;
  (__this->fields).limitMaximum = 0.6;
  pUVar1 = (UnityEngine_RenderTexture_array *)il2cpp_glue_02274930(TypeInfo_RenderTexture,2);
  (__this->fields).adaptRenderTex = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).adaptRenderTex);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


