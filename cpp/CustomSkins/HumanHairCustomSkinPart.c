// Type: CustomSkins.HumanHairCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/HumanHairCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanHairCustomSkinPart.cs
// --------------------------------

// CustomSkins.HumanHairCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HumanHairCustomSkinPart___ctor (CustomSkins_HumanHairCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, System_String_o* hairTexture, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x4091850

void CustomSkins_HumanHairCustomSkinPart___ctor
               (CustomSkins_HumanHairCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,System_String_o *hairTexture,System_Nullable_Vector2__o textureScale,
               MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,textureScale,1,
             in_stack_ffffffffffffffe0);
  (__this->fields)._hairTexture = hairTexture;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hairTexture,hairTexture);
  return;
}


// CustomSkins.HumanHairCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_HumanHairCustomSkinPart__SetNewTexture (CustomSkins_HumanHairCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4094d60

UnityEngine_Material_o *
CustomSkins_HumanHairCustomSkinPart__SetNewTexture
          (CustomSkins_HumanHairCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  CustomSkins_BaseCustomSkinPart_c *x;
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  System_Collections_Generic_List_Renderer__o *pSVar5;
  UnityEngine_Object_o *pUVar6;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Renderer_o *pUVar8;
  undefined4 extraout_var;
  MethodInfo *method_00;
  System_Collections_Generic_List_Renderer__o *pSVar9;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  float fVar10;
  float fVar11;
  float fStack_38;
  float fStack_34;
  
  if (g_data_057ac434 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057ac434 = '\x01';
  }
  pSVar9 = (__this->fields)._renderers;
  if ((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) && (0 < (pSVar9->fields)._size)) {
    pUVar6 = (UnityEngine_Object_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      __this_01 = (CustomSkins_BaseCustomSkinPart_o *)(__this->fields)._renderers;
      if ((__this_01 == (CustomSkins_BaseCustomSkinPart_o *)0x0) ||
         (__this_00 = (CustomSkins_BaseCustomSkinPart_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,0,MethodInfo_Renderer_get_Item),
         __this_00 == (CustomSkins_BaseCustomSkinPart_o *)0x0)) {
label_04094f4b:
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac435 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ac435 = '\x01';
        }
        x = __this_01[1].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar4);
      }
      pUVar7 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)__this_00,(MethodInfo *)0x0);
      bVar4 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial(__this_00,pUVar7,method_00);
      if ((char)bVar4 != '\0') {
        __this_01 = __this_00;
        if (pUVar7 != (UnityEngine_Material_o *)0x0) {
          bVar4 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar7,"_MainTex",(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            UnityEngine_Material__set_mainTexture(pUVar7,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
          }
          else {
            UnityEngine_Material__SetTexture
                      (pUVar7,"_MainTex",(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
          }
          (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                    (__this,pUVar7,(__this->klass->vtable)._6_SetMaterial.method);
          return pUVar7;
        }
        goto label_04094f4b;
      }
      bVar4 = System_String__op_Inequality
                        ((__this->fields)._hairTexture,
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar9 = (__this->fields)._renderers;
        __this_01 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
        if (pSVar9 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_04094f4b;
        pUVar8 = (UnityEngine_Renderer_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item);
        __this_01 = (CustomSkins_BaseCustomSkinPart_o *)(__this->fields)._hairTexture;
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar7 = Characters_HumanSetupMaterials__GetHairMaterial
                           ((System_String_o *)__this_01,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Renderer_o *)0x0) goto label_04094f4b;
        UnityEngine_Renderer__set_material(pUVar8,pUVar7,(MethodInfo *)0x0);
      }
    }
  }
  if (g_data_057ac42e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac42e = '\x01';
  }
  pSVar9 = (__this->fields)._renderers;
  if ((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) && ((pSVar9->fields)._size != 0)) {
    pUVar6 = (UnityEngine_Object_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pSVar9 = (__this->fields)._renderers;
      if ((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
         (pUVar8 = (UnityEngine_Renderer_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
         pUVar8 != (UnityEngine_Renderer_o *)0x0)) {
        pUVar6 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(pUVar8,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return (UnityEngine_Material_o *)0x0;
        }
        pSVar9 = (__this->fields)._renderers;
        if (((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
            (pSVar5 = (System_Collections_Generic_List_Renderer__o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
            pSVar5 != (System_Collections_Generic_List_Renderer__o *)0x0)) &&
           (pUVar7 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pSVar5,(MethodInfo *)0x0),
           pSVar9 = pSVar5, pUVar7 != (UnityEngine_Material_o *)0x0)) {
          UnityEngine_Material__set_mainTexture(pUVar7,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
          UVar1 = (__this->fields)._textureScale.fields;
          UVar2 = (__this->fields)._defaultTextureScale.fields;
          fVar10 = UVar1.x - UVar2.x;
          fVar11 = UVar1.y - UVar2.y;
          if (9.9999994e-11 <= fVar11 * fVar11 + fVar10 * fVar10) {
            pSVar9 = (__this->fields)._renderers;
            if (((pSVar9 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
                (pSVar5 = (System_Collections_Generic_List_Renderer__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
                pSVar5 == (System_Collections_Generic_List_Renderer__o *)0x0)) ||
               (pUVar7 = UnityEngine_Renderer__get_material
                                   ((UnityEngine_Renderer_o *)pSVar5,(MethodInfo *)0x0), pSVar9 = pSVar5,
               pUVar7 == (UnityEngine_Material_o *)0x0)) goto label_040942be;
            UVar3 = UnityEngine_Material__get_mainTextureScale(pUVar7,(MethodInfo *)0x0);
            pSVar9 = (__this->fields)._renderers;
            if (((pSVar9 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
                (pSVar5 = (System_Collections_Generic_List_Renderer__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
                pSVar5 == (System_Collections_Generic_List_Renderer__o *)0x0)) ||
               (pUVar7 = UnityEngine_Renderer__get_material
                                   ((UnityEngine_Renderer_o *)pSVar5,(MethodInfo *)0x0), pSVar9 = pSVar5,
               pUVar7 == (UnityEngine_Material_o *)0x0)) goto label_040942be;
            UVar1 = (__this->fields)._textureScale.fields;
            fStack_38 = UVar3.fields.x;
            fStack_34 = UVar3.fields.y;
            UVar3.fields.y = fStack_34 * UVar1.y;
            UVar3.fields.x = fStack_38 * UVar1.x;
            UnityEngine_Material__set_mainTextureScale(pUVar7,UVar3,(MethodInfo *)0x0);
            pSVar9 = (__this->fields)._renderers;
            if (((pSVar9 == (System_Collections_Generic_List_Renderer__o *)0x0) ||
                (pSVar5 = (System_Collections_Generic_List_Renderer__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
                pSVar5 == (System_Collections_Generic_List_Renderer__o *)0x0)) ||
               (pUVar7 = UnityEngine_Renderer__get_material
                                   ((UnityEngine_Renderer_o *)pSVar5,(MethodInfo *)0x0), pSVar9 = pSVar5,
               pUVar7 == (UnityEngine_Material_o *)0x0)) goto label_040942be;
            UnityEngine_Material__set_mainTextureOffset(pUVar7,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          }
          pSVar9 = (__this->fields)._renderers;
          if ((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
             (pUVar8 = (UnityEngine_Renderer_o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
             pUVar8 != (UnityEngine_Renderer_o *)0x0)) {
            pUVar7 = UnityEngine_Renderer__get_material(pUVar8,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                      (__this,pUVar7,(__this->klass->vtable)._6_SetMaterial.method);
            pSVar9 = (__this->fields)._renderers;
            if ((pSVar9 != (System_Collections_Generic_List_Renderer__o *)0x0) &&
               (pUVar8 = (UnityEngine_Renderer_o *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar9,0,MethodInfo_Renderer_get_Item),
               pUVar8 != (UnityEngine_Renderer_o *)0x0)) {
              pUVar7 = UnityEngine_Renderer__get_material(pUVar8,(MethodInfo *)0x0);
              return pUVar7;
            }
          }
        }
      }
label_040942be:
      il2cpp_runtime_helper_022b2c90();
      return (UnityEngine_Material_o *)(pSVar9->fields)._syncRoot;
    }
  }
  return (UnityEngine_Material_o *)0x0;
}


