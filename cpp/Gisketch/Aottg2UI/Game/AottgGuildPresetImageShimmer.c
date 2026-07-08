// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetImageShimmer.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$SetEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled (UnityEngine_UI_Image_o* image, bool enabled, const MethodInfo* method);
// 0x41e9d70

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled
               (UnityEngine_UI_Image_o *image,bool_conflict enabled,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_UI_Image_o *method_00;
  
  if (DAT_05704f21 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgGuildPresetImageShimmer_GetComponent_AottgG);
    il2cpp_init_method_metadata(&MethodInfo_AottgGuildPresetImageShimmer_AddComponent_AottgG);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704f21 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (image != (UnityEngine_UI_Image_o *)0x0) {
    __this = (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)image,MethodInfo_AottgGuildPresetImageShimmer_GetComponent_AottgG);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_041e9e5e;
      __this = (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)
               UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_AottgGuildPresetImageShimmer_AddComponent_AottgG);
    }
    if (__this != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)0x0) {
      if (DAT_05704f22 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05704f22 = '\x01';
      }
      (__this->fields)._source = image;
      method_00 = image;
      il2cpp_runtime_glue(&(__this->fields)._source);
      if ((char)enabled == '\0') {
        Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial
                  (__this,(MethodInfo *)method_00);
        return;
      }
      Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial
                (__this,(MethodInfo *)method_00);
      x = (UnityEngine_Object_o *)(__this->fields)._material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if ((char)(__this->fields)._enabled == '\0') {
          if (image == (UnityEngine_UI_Image_o *)0x0) goto LAB_041e9f6f;
          pUVar2 = (UnityEngine_Material_o *)
                   (*(image->klass->vtable)._32_get_material.methodPtr)
                             (image,(image->klass->vtable)._32_get_material.method);
          (__this->fields)._originalMaterial = pUVar2;
          il2cpp_runtime_glue(&(__this->fields)._originalMaterial,pUVar2);
        }
        else if (image == (UnityEngine_UI_Image_o *)0x0) {
LAB_041e9f6f:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*(image->klass->vtable)._33_set_material.methodPtr)
                  (image,(__this->fields)._material,(image->klass->vtable)._33_set_material.method);
        *(undefined1 *)&(__this->fields)._enabled = 1;
      }
      return;
    }
  }
LAB_041e9e5e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__Configure (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, UnityEngine_UI_Image_o* source, bool enabled, const MethodInfo* method);
// 0x41e9ea0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__Configure
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,
               UnityEngine_UI_Image_o *source,bool_conflict enabled,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_UI_Image_o *method_00;
  
  if (DAT_05704f22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704f22 = '\x01';
  }
  (__this->fields)._source = source;
  method_00 = source;
  il2cpp_runtime_glue(&(__this->fields)._source);
  if ((char)enabled == '\0') {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial
              (__this,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial
            (__this,(MethodInfo *)method_00);
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if ((char)(__this->fields)._enabled == '\0') {
      if (source == (UnityEngine_UI_Image_o *)0x0) goto LAB_041e9f6f;
      pUVar2 = (UnityEngine_Material_o *)
               (*(source->klass->vtable)._32_get_material.methodPtr)
                         (source,(source->klass->vtable)._32_get_material.method);
      (__this->fields)._originalMaterial = pUVar2;
      il2cpp_runtime_glue(&(__this->fields)._originalMaterial,pUVar2);
    }
    else if (source == (UnityEngine_UI_Image_o *)0x0) {
LAB_041e9f6f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(source->klass->vtable)._33_set_material.methodPtr)
              (source,(__this->fields)._material,(source->klass->vtable)._33_set_material.method);
    *(undefined1 *)&(__this->fields)._enabled = 1;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$EnsureMaterial
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x41ea020

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Material_o **ppUVar3;
  
  if (DAT_05704f23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"UI/AoTTG Guild Image Shimmer");
    DAT_05704f23 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pUVar2 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("UI/AoTTG Guild Image Shimmer",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      ppUVar3 = &(__this->fields)._material;
      __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
      UnityEngine_Material___ctor(__this_00,(UnityEngine_Shader_o *)pUVar2,(MethodInfo *)0x0);
      *ppUVar3 = __this_00;
      il2cpp_runtime_glue(ppUVar3,__this_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$RestoreMaterial
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x41e9f80

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05704f24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704f24 = '\x01';
  }
  pUVar1 = (__this->fields)._source;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar2 != '\0') && ((char)(__this->fields)._enabled != '\0')) {
    pUVar1 = (__this->fields)._source;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(pUVar1->klass->vtable)._33_set_material.methodPtr)
              (pUVar1,(__this->fields)._originalMaterial,
               (pUVar1->klass->vtable)._33_set_material.method);
  }
  (__this->fields)._originalMaterial = (UnityEngine_Material_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._originalMaterial,0);
  *(undefined1 *)&(__this->fields)._enabled = 0;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__OnDestroy (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x41ea110

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05704f25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704f25 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial(__this,method);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x41ea1a0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


