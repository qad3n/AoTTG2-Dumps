// Type: CustomSkins.HumanCostumeCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/HumanCostumeCustomSkinPart.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinParts/HumanCostumeCustomSkinPart.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.HumanCostumeCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HumanCostumeCustomSkinPart___ctor (CustomSkins_HumanCostumeCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x42446e0

void CustomSkins_HumanCostumeCustomSkinPart___ctor
               (CustomSkins_HumanCostumeCustomSkinPart_o *__this,
               CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_fffffffffffffff0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,
             textureScale,1,in_stack_fffffffffffffff0);
  return;
}


// CustomSkins.HumanCostumeCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_HumanCostumeCustomSkinPart__SetNewTexture (CustomSkins_HumanCostumeCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4247b40

UnityEngine_Material_o *
CustomSkins_HumanCostumeCustomSkinPart__SetNewTexture
          (CustomSkins_HumanCostumeCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,
          MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Renderer_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_057051da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_MainTex");
    DAT_057051da = '\x01';
    method = extraout_RDX;
  }
  pSVar1 = (__this->fields)._renderers;
  if ((pSVar1 != (System_Collections_Generic_List_Renderer__o *)0x0) && (0 < (pSVar1->fields)._size)
     ) {
    x = (UnityEngine_Object_o *)
        System_Collections_Generic_List<object>__get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_Renderer_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method = extraout_RDX_00;
    if ((char)bVar2 != '\0') {
      pSVar1 = (__this->fields)._renderers;
      if (pSVar1 != (System_Collections_Generic_List_Renderer__o *)0x0) {
        __this_00 = (CustomSkins_BaseCustomSkinPart_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_Renderer_get_Item);
        if (__this_00 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
          pUVar3 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)__this_00,(MethodInfo *)0x0);
          bVar2 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial
                            (__this_00,pUVar3,method_00);
          if ((char)bVar2 == '\0') {
            pSVar1 = (__this->fields)._renderers;
            if (pSVar1 != (System_Collections_Generic_List_Renderer__o *)0x0) {
              __this_01 = (UnityEngine_Renderer_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar1,0,
                                     MethodInfo_Renderer_get_Item);
              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pUVar3 = Characters_HumanSetupMaterials__GetCustomSkinMaterial((MethodInfo *)0x0);
              if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
                UnityEngine_Renderer__set_material(__this_01,pUVar3,(MethodInfo *)0x0);
                method = extraout_RDX_01;
                goto LAB_04247caf;
              }
            }
          }
          else if (pUVar3 != (UnityEngine_Material_o *)0x0) {
            bVar2 = UnityEngine_Material__HasProperty(pUVar3,"_MainTex",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              UnityEngine_Material__set_mainTexture
                        (pUVar3,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
            }
            else {
              UnityEngine_Material__SetTexture
                        (pUVar3,"_MainTex",(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
            }
            (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                      (__this,pUVar3,(__this->klass->vtable)._6_SetMaterial.method);
            return pUVar3;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_04247caf:
  pUVar3 = CustomSkins_BaseCustomSkinPart__SetNewTexture
                     ((CustomSkins_BaseCustomSkinPart_o *)__this,texture,method);
  return pUVar3;
}


