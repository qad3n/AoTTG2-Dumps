// Type: CustomSkins.TitanCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/TitanCustomSkinPart.cs
// Prior real C# source: none
// --------------------------------

// CustomSkins.TitanCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_TitanCustomSkinPart___ctor (CustomSkins_TitanCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, UnityEngine_Transform_o* rendererRoot, const MethodInfo* method);
// 0x5962e50

void CustomSkins_TitanCustomSkinPart___ctor
               (CustomSkins_TitanCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,UnityEngine_Transform_o *rendererRoot,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,
             (System_Nullable_Vector2__o)ZEXT812(0),false,in_stack_ffffffffffffffe0);
  (__this->fields)._rendererRoot = rendererRoot;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rendererRoot);
  return;
}


// CustomSkins.TitanCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_TitanCustomSkinPart__IsValidPart (CustomSkins_TitanCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5965220

bool CustomSkins_TitanCustomSkinPart__IsValidPart
               (CustomSkins_TitanCustomSkinPart_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545943 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer_71a5018);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545943 = '\x01';
  }
  pUVar1 = (__this->fields)._rendererRoot;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._rendererRoot;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x1;
    UnityEngine_Component__GetComponentsInChildren_object__34b13c0
              ((UnityEngine_Component_o *)pUVar1,true,
               (System_Collections_Generic_List_T__o *)(__this->fields)._renderers,
               (MethodInfo_34B13C0 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer_71a5018
              );
  }
  bVar2 = CustomSkins_BaseCustomSkinPart__IsValidPart((CustomSkins_BaseCustomSkinPart_o *)__this,method_00);
  return bVar2;
}


// CustomSkins.TitanCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_TitanCustomSkinPart__SetNewTexture (CustomSkins_TitanCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x59652b0

UnityEngine_Material_o *
CustomSkins_TitanCustomSkinPart__SetNewTexture
          (CustomSkins_TitanCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *__this_00;
  MethodInfo *extraout_RDX;
  UnityEngine_Color_o value;
  
  if (Il2CppMethodInitialized_07545944 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545944 = '\x01';
    method = extraout_RDX;
  }
  __this_00 = CustomSkins_BaseCustomSkinPart__SetNewTexture
                        ((CustomSkins_BaseCustomSkinPart_o *)__this,texture,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    value.fields.b = 1.0;
    value.fields.a = 1.0;
    value.fields.r = 1.0;
    value.fields.g = 1.0;
    UnityEngine_Material__set_color(__this_00,value,(MethodInfo *)0x0);
  }
  return __this_00;
}


