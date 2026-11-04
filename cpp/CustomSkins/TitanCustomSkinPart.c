// Type: CustomSkins.TitanCustomSkinPart
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomSkins/TitanCustomSkinPart.cs
// Prior real C# source: none
// --------------------------------

// CustomSkins.TitanCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_TitanCustomSkinPart___ctor (CustomSkins_TitanCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, const MethodInfo* method);
// 0x181e96200

void CustomSkins_TitanCustomSkinPart___ctor
               (CustomSkins_TitanCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,MethodInfo *method)

{
  System_Nullable_Vector2__Fields local_18 [2];
  
  local_18[0].hasValue = false;
  local_18[0]._1_3_ = 0;
  local_18[0].value.fields.x = 0.0;
  local_18[0].value.fields.y = 0.0;
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,
             (System_Nullable_Vector2__o *)local_18,false,(MethodInfo *)0x0);
  return;
}


// CustomSkins.TitanCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_TitanCustomSkinPart__SetNewTexture (CustomSkins_TitanCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x181e96160

UnityEngine_Material_o *
CustomSkins_TitanCustomSkinPart__SetNewTexture
          (CustomSkins_TitanCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344fb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fb5 = '\x01';
  }
  __this_00 = CustomSkins_BaseCustomSkinPart__SetNewTexture
                        ((CustomSkins_BaseCustomSkinPart_o *)__this,texture,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_18.r = 1.0;
    local_18.g = 1.0;
    local_18.b = 1.0;
    local_18.a = 1.0;
    UnityEngine_Material__set_color(__this_00,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  }
  return __this_00;
}


