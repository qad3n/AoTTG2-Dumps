// Type: CustomSkins.HumanCostumeCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/HumanCostumeCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanCostumeCustomSkinPart.cs
// --------------------------------

// CustomSkins.HumanCostumeCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HumanCostumeCustomSkinPart___ctor (CustomSkins_HumanCostumeCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x4091890

void CustomSkins_HumanCostumeCustomSkinPart___ctor
               (CustomSkins_HumanCostumeCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_fffffffffffffff0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,textureScale,1,
             in_stack_fffffffffffffff0);
  return;
}


// CustomSkins.HumanCostumeCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_HumanCostumeCustomSkinPart__SetNewTexture (CustomSkins_HumanCostumeCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4094ba0

UnityEngine_Material_o *
CustomSkins_HumanCostumeCustomSkinPart__SetNewTexture
          (CustomSkins_HumanCostumeCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppClass *x;
  undefined1 auVar5 [16];
  UnityEngine_Vector2_o UVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_Renderer__o *pSVar8;
  UnityEngine_Object_o *pUVar9;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  UnityEngine_Texture_o *material;
  UnityEngine_Object_o *x_00;
  CustomSkins_HumanCostumeCustomSkinPart_c *__this_01;
  UnityEngine_Material_o *pUVar10;
  UnityEngine_Renderer_o *pUVar11;
  undefined4 extraout_var;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Object_o *unaff_RBX;
  UnityEngine_Texture_o *value;
  UnityEngine_Texture_o *value_00;
  System_Collections_Generic_List_Renderer__o *pSVar12;
  CustomSkins_HumanCostumeCustomSkinPart_o *__this_02;
  CustomSkins_HumanCostumeCustomSkinPart_c *__this_03;
  CustomSkins_HumanCostumeCustomSkinPart_o *unaff_R12;
  MethodInfo_362BED0 **unaff_R13;
  UnityEngine_Texture2D_o *unaff_R14;
  UnityEngine_Texture_o *unaff_R15;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  MethodInfo_362BED0 **ppMStack_40;
  
  if (g_data_057ac433 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057ac433 = '\x01';
  }
  pSVar12 = (__this->fields)._renderers;
  value = (UnityEngine_Texture_o *)texture;
  __this_02 = __this;
  ppMStack_40 = unaff_R13;
  if ((pSVar12 != (System_Collections_Generic_List_Renderer__o *)0x0) && (0 < (pSVar12->fields)._size)) {
    pUVar9 = (UnityEngine_Object_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (UnityEngine_Texture_o *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      __this_02 = (CustomSkins_HumanCostumeCustomSkinPart_o *)(__this->fields)._renderers;
      material = unaff_R15;
      if (__this_02 != (CustomSkins_HumanCostumeCustomSkinPart_o *)0x0) {
        value_00 = (UnityEngine_Texture_o *)0x0;
        __this_00 = (CustomSkins_BaseCustomSkinPart_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_02,0,MethodInfo_Renderer_get_Item);
        if (__this_00 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
          material = (UnityEngine_Texture_o *)
                     UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)__this_00,(MethodInfo *)0x0)
          ;
          value_00 = material;
          bVar7 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial
                            (__this_00,(UnityEngine_Material_o *)material,method_00);
          if ((char)bVar7 == '\0') {
            pSVar12 = (__this->fields)._renderers;
            __this_02 = (CustomSkins_HumanCostumeCustomSkinPart_o *)0x0;
            if (pSVar12 != (System_Collections_Generic_List_Renderer__o *)0x0) {
              value_00 = (UnityEngine_Texture_o *)0x0;
              pUVar11 = (UnityEngine_Renderer_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_02 = (CustomSkins_HumanCostumeCustomSkinPart_o *)0x0;
              pUVar10 = Characters_HumanSetupMaterials__GetCustomSkinMaterial((MethodInfo *)0x0);
              material = (UnityEngine_Texture_o *)0x0;
              if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
                UnityEngine_Renderer__set_material(pUVar11,pUVar10,(MethodInfo *)0x0);
                __this_02 = __this;
                goto CustomSkins_BaseCustomSkinPart__SetNewTexture;
              }
            }
          }
          else {
            __this_02 = (CustomSkins_HumanCostumeCustomSkinPart_o *)__this_00;
            if (material != (UnityEngine_Texture_o *)0x0) {
              bVar7 = UnityEngine_Material__HasProperty_4dcb5b0
                                ((UnityEngine_Material_o *)material,"_MainTex",(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                UnityEngine_Material__set_mainTexture
                          ((UnityEngine_Material_o *)material,(UnityEngine_Texture_o *)texture,
                           (MethodInfo *)0x0);
              }
              else {
                UnityEngine_Material__SetTexture
                          ((UnityEngine_Material_o *)material,"_MainTex",(UnityEngine_Texture_o *)texture,
                           (MethodInfo *)0x0);
              }
              (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                        (__this,material,(__this->klass->vtable)._6_SetMaterial.method);
              return (UnityEngine_Material_o *)material;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      ppMStack_40 = &MethodInfo_Renderer_get_Item;
      if (g_data_057ac434 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&"_MainTex");
        g_data_057ac434 = '\x01';
      }
      pSVar12 = (__this_02->fields)._renderers;
      if ((pSVar12 != (System_Collections_Generic_List_Renderer__o *)0x0) && (0 < (pSVar12->fields)._size)) {
        x_00 = (UnityEngine_Object_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          __this_03 = (CustomSkins_HumanCostumeCustomSkinPart_c *)(__this_02->fields)._renderers;
          if ((__this_03 == (CustomSkins_HumanCostumeCustomSkinPart_c *)0x0) ||
             (__this_01 = (CustomSkins_HumanCostumeCustomSkinPart_c *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_03,0,MethodInfo_Renderer_get_Item),
             __this_01 == (CustomSkins_HumanCostumeCustomSkinPart_c *)0x0)) {
label_04094f4b:
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ac435 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ac435 = '\x01';
            }
            x = (__this_03->_1).element_class;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar7);
          }
          pUVar10 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)__this_01,(MethodInfo *)0x0);
          bVar7 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial
                            ((CustomSkins_BaseCustomSkinPart_o *)__this_01,pUVar10,method_01);
          if ((char)bVar7 != '\0') {
            __this_03 = __this_01;
            if (pUVar10 != (UnityEngine_Material_o *)0x0) {
              bVar7 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar10,"_MainTex",(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                UnityEngine_Material__set_mainTexture(pUVar10,value_00,(MethodInfo *)0x0);
              }
              else {
                UnityEngine_Material__SetTexture(pUVar10,"_MainTex",value_00,(MethodInfo *)0x0);
              }
              (*(((System_Collections_Generic_List_object__c *)__this_02->klass)->vtable)._6_IndexOf.methodPtr
              )(__this_02,pUVar10,
                (((System_Collections_Generic_List_object__c *)__this_02->klass)->vtable)._6_IndexOf.method);
              return pUVar10;
            }
            goto label_04094f4b;
          }
          bVar7 = System_String__op_Inequality
                            ((System_String_o *)__this_02[1].klass,
                             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            pSVar12 = (__this_02->fields)._renderers;
            __this_03 = (CustomSkins_HumanCostumeCustomSkinPart_c *)0x0;
            if (pSVar12 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_04094f4b;
            pUVar11 = (UnityEngine_Renderer_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
            __this_03 = __this_02[1].klass;
            if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar10 = Characters_HumanSetupMaterials__GetHairMaterial
                                ((System_String_o *)__this_03,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_Renderer_o *)0x0) goto label_04094f4b;
            UnityEngine_Renderer__set_material(pUVar11,pUVar10,(MethodInfo *)0x0);
          }
        }
      }
      register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffd8;
      unaff_RBX = pUVar9;
      value = value_00;
      unaff_R12 = __this;
      unaff_R14 = texture;
      unaff_R15 = material;
    }
  }
CustomSkins_BaseCustomSkinPart__SetNewTexture:
  *(UnityEngine_Texture_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(UnityEngine_Texture2D_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(MethodInfo_362BED0 ***)((long)register0x00000020 + -0x18) = ppMStack_40;
  *(CustomSkins_HumanCostumeCustomSkinPart_o **)((long)register0x00000020 + -0x20) = unaff_R12;
  *(UnityEngine_Object_o **)((long)register0x00000020 + -0x28) = unaff_RBX;
  if (g_data_057ac42e == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094048;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094054;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094060;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac42e = '\x01';
  }
  pSVar12 = (__this_02->fields)._renderers;
  if ((pSVar12 != (System_Collections_Generic_List_Renderer__o *)0x0) && ((pSVar12->fields)._size != 0)) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094090;
    pUVar9 = (UnityEngine_Object_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40940ac;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40940b8;
    bVar7 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pSVar12 = (__this_02->fields)._renderers;
      if (pSVar12 != (System_Collections_Generic_List_Renderer__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40940d4;
        pUVar11 = (UnityEngine_Renderer_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
        if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40940e7;
          pUVar9 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(pUVar11,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40940fc;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094108;
          bVar7 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            return (UnityEngine_Material_o *)0x0;
          }
          pSVar12 = (__this_02->fields)._renderers;
          if (pSVar12 != (System_Collections_Generic_List_Renderer__o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094134;
            pSVar8 = (System_Collections_Generic_List_Renderer__o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
            if (pSVar8 != (System_Collections_Generic_List_Renderer__o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094147;
              pUVar10 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pSVar8,(MethodInfo *)0x0)
              ;
              pSVar12 = pSVar8;
              if (pUVar10 != (UnityEngine_Material_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x409415d;
                UnityEngine_Material__set_mainTexture(pUVar10,value,(MethodInfo *)0x0);
                UVar1 = (__this_02->fields)._textureScale.fields;
                UVar2 = (__this_02->fields)._defaultTextureScale.fields;
                fVar13 = UVar1.x - UVar2.x;
                fVar14 = UVar1.y - UVar2.y;
                if (9.9999994e-11 <= fVar14 * fVar14 + fVar13 * fVar13) {
                  pSVar12 = (__this_02->fields)._renderers;
                  if (pSVar12 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40941a3;
                  pSVar8 = (System_Collections_Generic_List_Renderer__o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
                  if (pSVar8 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40941b6;
                  pUVar10 = UnityEngine_Renderer__get_material
                                      ((UnityEngine_Renderer_o *)pSVar8,(MethodInfo *)0x0);
                  pSVar12 = pSVar8;
                  if (pUVar10 == (UnityEngine_Material_o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40941c9;
                  UVar6 = UnityEngine_Material__get_mainTextureScale(pUVar10,(MethodInfo *)0x0);
                  auVar5._8_4_ = extraout_XMM0_Dc;
                  auVar5._0_4_ = UVar6.fields.x;
                  auVar5._4_4_ = UVar6.fields.y;
                  auVar5._12_4_ = extraout_XMM0_Dd;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar5;
                  pSVar12 = (__this_02->fields)._renderers;
                  if (pSVar12 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40941e5;
                  pSVar8 = (System_Collections_Generic_List_Renderer__o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
                  if (pSVar8 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40941f8;
                  pUVar10 = UnityEngine_Renderer__get_material
                                      ((UnityEngine_Renderer_o *)pSVar8,(MethodInfo *)0x0);
                  pSVar12 = pSVar8;
                  if (pUVar10 == (UnityEngine_Material_o *)0x0) goto label_040942be;
                  UVar1 = (__this_02->fields)._textureScale.fields;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094218;
                  UVar6.fields.y = *(float *)((long)register0x00000020 + -0x34) * UVar1.y;
                  UVar6.fields.x = *(float *)((long)register0x00000020 + -0x38) * UVar1.x;
                  UnityEngine_Material__set_mainTextureScale(pUVar10,UVar6,(MethodInfo *)0x0);
                  pSVar12 = (__this_02->fields)._renderers;
                  if (pSVar12 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094230;
                  pSVar8 = (System_Collections_Generic_List_Renderer__o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
                  if (pSVar8 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094243;
                  pUVar10 = UnityEngine_Renderer__get_material
                                      ((UnityEngine_Renderer_o *)pSVar8,(MethodInfo *)0x0);
                  pSVar12 = pSVar8;
                  if (pUVar10 == (UnityEngine_Material_o *)0x0) goto label_040942be;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094255;
                  UnityEngine_Material__set_mainTextureOffset
                            (pUVar10,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                }
                pSVar12 = (__this_02->fields)._renderers;
                if (pSVar12 != (System_Collections_Generic_List_Renderer__o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094269;
                  pUVar11 = (UnityEngine_Renderer_o *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item);
                  if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4094278;
                    pUVar10 = UnityEngine_Renderer__get_material(pUVar11,(MethodInfo *)0x0);
                    pMVar3 = (((System_Collections_Generic_List_object__c *)__this_02->klass)->vtable).
                             _6_IndexOf.method;
                    pIVar4 = (((System_Collections_Generic_List_object__c *)__this_02->klass)->vtable).
                             _6_IndexOf.methodPtr;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x409428e;
                    (*pIVar4)(__this_02,pUVar10,pMVar3);
                    pSVar12 = (__this_02->fields)._renderers;
                    if (pSVar12 != (System_Collections_Generic_List_Renderer__o *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40942a2;
                      pUVar11 = (UnityEngine_Renderer_o *)
                                System_Collections_Generic_List_object___get_Item
                                          ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Renderer_get_Item
                                          );
                      if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
                        pUVar10 = UnityEngine_Renderer__get_material(pUVar11,(MethodInfo *)0x0);
                        return pUVar10;
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
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40942c3;
      il2cpp_runtime_helper_022b2c90();
      return (UnityEngine_Material_o *)(pSVar12->fields)._syncRoot;
    }
  }
  return (UnityEngine_Material_o *)0x0;
}


