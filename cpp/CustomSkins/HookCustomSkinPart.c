// Type: CustomSkins.HookCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/HookCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HookCustomSkinPart.cs
// --------------------------------

// CustomSkins.HookCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HookCustomSkinPart___ctor (CustomSkins_HookCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, float tiling, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x40918f0

void CustomSkins_HookCustomSkinPart___ctor
               (CustomSkins_HookCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,float tiling,System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,textureScale,1,
             in_stack_ffffffffffffffe0);
  (__this->fields)._tiling = tiling;
  return;
}


// CustomSkins.HookCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_HookCustomSkinPart__SetMaterial (CustomSkins_HookCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4094930

void CustomSkins_HookCustomSkinPart__SetMaterial
               (CustomSkins_HookCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  UnityEngine_Renderer_o *__this_05;
  UnityEngine_Renderer_o *pUVar8;
  
  if (g_data_057ac431 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_GetComponent_Hook);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    g_data_057ac431 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  __this_05 = (UnityEngine_Renderer_o *)0x0;
  __this_00 = (__this->fields)._renderers;
  if (__this_00 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._list = pSVar6;
      __this_01.fields._current = (Il2CppObject *)__this_05;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar7;
        __this_02.fields._list = pSVar6;
        __this_02.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
        return;
      }
      if (__this_05 == (UnityEngine_Renderer_o *)0x0) break;
      pUVar8 = __this_05;
      UnityEngine_Renderer__set_material(__this_05,material,(MethodInfo *)0x0);
      pIVar3 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_05,MethodInfo_Hook_GetComponent_Hook);
      __this_05 = pUVar8;
      if (pIVar3 == (Il2CppObject *)0x0) goto label_04094a4b;
      *(float *)&pIVar3[0xb].monitor = (__this->fields)._tiling;
    }
    il2cpp_runtime_helper_022b2c90();
label_04094a4b:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = pSVar6;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._list = pSVar6;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar5._0_8_);
}


// CustomSkins.HookCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_HookCustomSkinPart__SetNewTexture (CustomSkins_HookCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4094af0

UnityEngine_Material_o *
CustomSkins_HookCustomSkinPart__SetNewTexture
          (CustomSkins_HookCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  CustomSkins_BaseCustomSkinPart_c *x;
  undefined1 auVar5 [16];
  UnityEngine_Vector2_o UVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_Renderer__o *pSVar8;
  CustomSkins_HookCustomSkinPart_o *pCVar9;
  CustomSkins_HookCustomSkinPart_o *pCVar10;
  CustomSkins_HookCustomSkinPart_o *__this_00;
  CustomSkins_HookCustomSkinPart_o *material;
  UnityEngine_Object_o *pUVar11;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  UnityEngine_Material_o *pUVar12;
  UnityEngine_Renderer_o *pUVar13;
  undefined4 extraout_var;
  MethodInfo *method_00;
  MethodInfo *method_01;
  CustomSkins_HookCustomSkinPart_o **ppCVar14;
  CustomSkins_HookCustomSkinPart_o *value;
  System_Collections_Generic_List_Renderer__o *pSVar15;
  CustomSkins_HookCustomSkinPart_o *pCVar16;
  CustomSkins_HookCustomSkinPart_o *__this_02;
  CustomSkins_BaseCustomSkinPart_o *__this_03;
  MethodInfo_362BED0 **unaff_R13;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  MethodInfo_362BED0 **ppMStack_68;
  CustomSkins_HookCustomSkinPart_o *pCStack_50;
  CustomSkins_HookCustomSkinPart_o *pCStack_48;
  undefined1 auStack_28 [8];
  
  if (g_data_057ac432 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&"Transparent/Diffuse");
    g_data_057ac432 = '\x01';
  }
  pCVar9 = (CustomSkins_HookCustomSkinPart_o *)UnityEngine_Shader__Find("Transparent/Diffuse",(MethodInfo *)0x0);
  pCVar10 = (CustomSkins_HookCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  value = pCVar9;
  pCVar16 = pCVar10;
  UnityEngine_Material___ctor
            ((UnityEngine_Material_o *)pCVar10,(UnityEngine_Shader_o *)pCVar9,(MethodInfo *)0x0);
  if (pCVar10 != (CustomSkins_HookCustomSkinPart_o *)0x0) {
    UnityEngine_Material__set_mainTexture
              ((UnityEngine_Material_o *)pCVar10,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
              (__this,pCVar10,(__this->klass->vtable)._6_SetMaterial.method);
    return (UnityEngine_Material_o *)pCVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pCStack_50 = pCVar10;
  pCStack_48 = pCVar9;
  if (g_data_057ac433 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057ac433 = '\x01';
  }
  pSVar15 = (pCVar16->fields)._renderers;
  if ((pSVar15 == (System_Collections_Generic_List_Renderer__o *)0x0) || ((pSVar15->fields)._size < 1)) {
label_04094d0f:
    ppCVar14 = (CustomSkins_HookCustomSkinPart_o **)auStack_28;
    pCVar9 = pCStack_50;
    pCVar10 = value;
    __this_02 = pCVar16;
    pCVar16 = pCStack_48;
    ppMStack_68 = unaff_R13;
  }
  else {
    pCVar9 = (CustomSkins_HookCustomSkinPart_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar10 = (CustomSkins_HookCustomSkinPart_o *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto label_04094d0f;
    __this_02 = (CustomSkins_HookCustomSkinPart_o *)(pCVar16->fields)._renderers;
    material = __this;
    if (__this_02 != (CustomSkins_HookCustomSkinPart_o *)0x0) {
      pCVar10 = (CustomSkins_HookCustomSkinPart_o *)0x0;
      __this_00 = (CustomSkins_HookCustomSkinPart_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,0,MethodInfo_Renderer_get_Item);
      if (__this_00 != (CustomSkins_HookCustomSkinPart_o *)0x0) {
        material = (CustomSkins_HookCustomSkinPart_o *)
                   UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)__this_00,(MethodInfo *)0x0);
        pCVar10 = material;
        bVar7 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial
                          ((CustomSkins_BaseCustomSkinPart_o *)__this_00,(UnityEngine_Material_o *)material,
                           method_00);
        if ((char)bVar7 == '\0') {
          pSVar15 = (pCVar16->fields)._renderers;
          __this_02 = (CustomSkins_HookCustomSkinPart_o *)0x0;
          if (pSVar15 != (System_Collections_Generic_List_Renderer__o *)0x0) {
            pCVar10 = (CustomSkins_HookCustomSkinPart_o *)0x0;
            pUVar13 = (UnityEngine_Renderer_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
            if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_02 = (CustomSkins_HookCustomSkinPart_o *)0x0;
            pUVar12 = Characters_HumanSetupMaterials__GetCustomSkinMaterial((MethodInfo *)0x0);
            material = (CustomSkins_HookCustomSkinPart_o *)0x0;
            if (pUVar13 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__set_material(pUVar13,pUVar12,(MethodInfo *)0x0);
              goto label_04094d0f;
            }
          }
        }
        else {
          __this_02 = __this_00;
          if (material != (CustomSkins_HookCustomSkinPart_o *)0x0) {
            bVar7 = UnityEngine_Material__HasProperty_4dcb5b0
                              ((UnityEngine_Material_o *)material,"_MainTex",(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              UnityEngine_Material__set_mainTexture
                        ((UnityEngine_Material_o *)material,(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
            }
            else {
              UnityEngine_Material__SetTexture
                        ((UnityEngine_Material_o *)material,"_MainTex",(UnityEngine_Texture_o *)value,
                         (MethodInfo *)0x0);
            }
            (*(((System_Collections_Generic_List_object__c *)pCVar16->klass)->vtable)._6_IndexOf.methodPtr)
                      (pCVar16,material,
                       (((System_Collections_Generic_List_object__c *)pCVar16->klass)->vtable)._6_IndexOf.
                       method);
            return (UnityEngine_Material_o *)material;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    ppMStack_68 = &MethodInfo_Renderer_get_Item;
    if (g_data_057ac434 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&"_MainTex");
      g_data_057ac434 = '\x01';
    }
    pSVar15 = (__this_02->fields)._renderers;
    if ((pSVar15 != (System_Collections_Generic_List_Renderer__o *)0x0) && (0 < (pSVar15->fields)._size)) {
      pUVar11 = (UnityEngine_Object_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        __this_03 = (CustomSkins_BaseCustomSkinPart_o *)(__this_02->fields)._renderers;
        if ((__this_03 == (CustomSkins_BaseCustomSkinPart_o *)0x0) ||
           (__this_01 = (CustomSkins_BaseCustomSkinPart_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_03,0,MethodInfo_Renderer_get_Item),
           __this_01 == (CustomSkins_BaseCustomSkinPart_o *)0x0)) {
label_04094f4b:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac435 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ac435 = '\x01';
          }
          x = __this_03[1].klass;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar7);
        }
        pUVar12 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)__this_01,(MethodInfo *)0x0);
        bVar7 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial(__this_01,pUVar12,method_01);
        if ((char)bVar7 != '\0') {
          __this_03 = __this_01;
          if (pUVar12 != (UnityEngine_Material_o *)0x0) {
            bVar7 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar12,"_MainTex",(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              UnityEngine_Material__set_mainTexture
                        (pUVar12,(UnityEngine_Texture_o *)pCVar10,(MethodInfo *)0x0);
            }
            else {
              UnityEngine_Material__SetTexture
                        (pUVar12,"_MainTex",(UnityEngine_Texture_o *)pCVar10,(MethodInfo *)0x0);
            }
            (*(((System_Collections_Generic_List_object__c *)__this_02->klass)->vtable)._6_IndexOf.methodPtr)
                      (__this_02,pUVar12,
                       (((System_Collections_Generic_List_object__c *)__this_02->klass)->vtable)._6_IndexOf.
                       method);
            return pUVar12;
          }
          goto label_04094f4b;
        }
        bVar7 = System_String__op_Inequality
                          (*(System_String_o **)&(__this_02->fields)._tiling,
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pSVar15 = (__this_02->fields)._renderers;
          __this_03 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
          if (pSVar15 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_04094f4b;
          pUVar13 = (UnityEngine_Renderer_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
          __this_03 = *(CustomSkins_BaseCustomSkinPart_o **)&(__this_02->fields)._tiling;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar12 = Characters_HumanSetupMaterials__GetHairMaterial
                              ((System_String_o *)__this_03,(MethodInfo *)0x0);
          if (pUVar13 == (UnityEngine_Renderer_o *)0x0) goto label_04094f4b;
          UnityEngine_Renderer__set_material(pUVar13,pUVar12,(MethodInfo *)0x0);
        }
      }
    }
    ppCVar14 = &pCStack_50;
    texture = (UnityEngine_Texture2D_o *)value;
    __this = material;
  }
  *(CustomSkins_HookCustomSkinPart_o **)((long)ppCVar14 + -8) = __this;
  *(UnityEngine_Texture2D_o **)((long)ppCVar14 + -0x10) = texture;
  *(MethodInfo_362BED0 ***)((long)ppCVar14 + -0x18) = ppMStack_68;
  *(CustomSkins_HookCustomSkinPart_o **)((long)ppCVar14 + -0x20) = pCVar16;
  *(CustomSkins_HookCustomSkinPart_o **)((long)ppCVar14 + -0x28) = pCVar9;
  if (g_data_057ac42e == '\0') {
    *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094048;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094054;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094060;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac42e = '\x01';
  }
  pSVar15 = (__this_02->fields)._renderers;
  if ((pSVar15 != (System_Collections_Generic_List_Renderer__o *)0x0) && ((pSVar15->fields)._size != 0)) {
    *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094090;
    pUVar11 = (UnityEngine_Object_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40940ac;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40940b8;
    bVar7 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pSVar15 = (__this_02->fields)._renderers;
      if (pSVar15 != (System_Collections_Generic_List_Renderer__o *)0x0) {
        *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40940d4;
        pUVar13 = (UnityEngine_Renderer_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
        if (pUVar13 != (UnityEngine_Renderer_o *)0x0) {
          *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40940e7;
          pUVar11 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(pUVar13,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40940fc;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094108;
          bVar7 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            return (UnityEngine_Material_o *)0x0;
          }
          pSVar15 = (__this_02->fields)._renderers;
          if (pSVar15 != (System_Collections_Generic_List_Renderer__o *)0x0) {
            *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094134;
            pSVar8 = (System_Collections_Generic_List_Renderer__o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
            if (pSVar8 != (System_Collections_Generic_List_Renderer__o *)0x0) {
              *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094147;
              pUVar12 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pSVar8,(MethodInfo *)0x0)
              ;
              pSVar15 = pSVar8;
              if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                *(undefined8 *)((long)ppCVar14 + -0x40) = 0x409415d;
                UnityEngine_Material__set_mainTexture
                          (pUVar12,(UnityEngine_Texture_o *)pCVar10,(MethodInfo *)0x0);
                UVar1 = (__this_02->fields)._textureScale.fields;
                UVar2 = (__this_02->fields)._defaultTextureScale.fields;
                fVar17 = UVar1.x - UVar2.x;
                fVar18 = UVar1.y - UVar2.y;
                if (9.9999994e-11 <= fVar18 * fVar18 + fVar17 * fVar17) {
                  pSVar15 = (__this_02->fields)._renderers;
                  if (pSVar15 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40941a3;
                  pSVar8 = (System_Collections_Generic_List_Renderer__o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
                  if (pSVar8 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40941b6;
                  pUVar12 = UnityEngine_Renderer__get_material
                                      ((UnityEngine_Renderer_o *)pSVar8,(MethodInfo *)0x0);
                  pSVar15 = pSVar8;
                  if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40941c9;
                  UVar6 = UnityEngine_Material__get_mainTextureScale(pUVar12,(MethodInfo *)0x0);
                  auVar5._8_4_ = extraout_XMM0_Dc;
                  auVar5._0_4_ = UVar6.fields.x;
                  auVar5._4_4_ = UVar6.fields.y;
                  auVar5._12_4_ = extraout_XMM0_Dd;
                  *(undefined1 (*) [16])((long)ppCVar14 + -0x38) = auVar5;
                  pSVar15 = (__this_02->fields)._renderers;
                  if (pSVar15 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40941e5;
                  pSVar8 = (System_Collections_Generic_List_Renderer__o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
                  if (pSVar8 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40941f8;
                  pUVar12 = UnityEngine_Renderer__get_material
                                      ((UnityEngine_Renderer_o *)pSVar8,(MethodInfo *)0x0);
                  pSVar15 = pSVar8;
                  if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_040942be;
                  UVar1 = (__this_02->fields)._textureScale.fields;
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094218;
                  UVar6.fields.y = *(float *)((long)ppCVar14 + -0x34) * UVar1.y;
                  UVar6.fields.x = *(float *)((long)ppCVar14 + -0x38) * UVar1.x;
                  UnityEngine_Material__set_mainTextureScale(pUVar12,UVar6,(MethodInfo *)0x0);
                  pSVar15 = (__this_02->fields)._renderers;
                  if (pSVar15 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094230;
                  pSVar8 = (System_Collections_Generic_List_Renderer__o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
                  if (pSVar8 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094243;
                  pUVar12 = UnityEngine_Renderer__get_material
                                      ((UnityEngine_Renderer_o *)pSVar8,(MethodInfo *)0x0);
                  pSVar15 = pSVar8;
                  if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094255;
                  UnityEngine_Material__set_mainTextureOffset
                            (pUVar12,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                }
                pSVar15 = (__this_02->fields)._renderers;
                if (pSVar15 != (System_Collections_Generic_List_Renderer__o *)0x0) {
                  *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094269;
                  pUVar13 = (UnityEngine_Renderer_o *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item);
                  if (pUVar13 != (UnityEngine_Renderer_o *)0x0) {
                    *(undefined8 *)((long)ppCVar14 + -0x40) = 0x4094278;
                    pUVar12 = UnityEngine_Renderer__get_material(pUVar13,(MethodInfo *)0x0);
                    pMVar3 = (((System_Collections_Generic_List_object__c *)__this_02->klass)->vtable).
                             _6_IndexOf.method;
                    pIVar4 = (((System_Collections_Generic_List_object__c *)__this_02->klass)->vtable).
                             _6_IndexOf.methodPtr;
                    *(undefined8 *)((long)ppCVar14 + -0x40) = 0x409428e;
                    (*pIVar4)(__this_02,pUVar12,pMVar3);
                    pSVar15 = (__this_02->fields)._renderers;
                    if (pSVar15 != (System_Collections_Generic_List_Renderer__o *)0x0) {
                      *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40942a2;
                      pUVar13 = (UnityEngine_Renderer_o *)
                                System_Collections_Generic_List_object___get_Item
                                          ((System_Collections_Generic_List_object__o *)pSVar15,0,MethodInfo_Renderer_get_Item
                                          );
                      if (pUVar13 != (UnityEngine_Renderer_o *)0x0) {
                        pUVar12 = UnityEngine_Renderer__get_material(pUVar13,(MethodInfo *)0x0);
                        return pUVar12;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
label_040942be:
      *(undefined8 *)((long)ppCVar14 + -0x40) = 0x40942c3;
      il2cpp_runtime_helper_022b2c90();
      return (UnityEngine_Material_o *)(pSVar15->fields)._syncRoot;
    }
  }
  return (UnityEngine_Material_o *)0x0;
}


