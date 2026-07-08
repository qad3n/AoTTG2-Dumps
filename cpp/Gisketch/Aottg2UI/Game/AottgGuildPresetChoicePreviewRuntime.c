// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetChoicePreviewRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, System_String_o* value, System_String_o* text, bool enabled, const MethodInfo* method);
// 0x41e90b0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure
               (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,
               System_String_o *value,System_String_o *text,bool_conflict enabled,MethodInfo *method
               )

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Image_o *image;
  UnityEngine_GameObject_o *pUVar4;
  TMPro_TMP_FontAsset_o *value_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_o *pSVar5;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_58;
  
  method_03 = (MethodInfo *)value;
  if (DAT_05704f1b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Aottg2");
    il2cpp_init_method_metadata(&"AoTTG Guild Preset Preview");
    DAT_05704f1b = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__get_Label
                        (__this,method_03);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 != '\0') {
    return;
  }
  if ((__this_00 != (TMPro_TMP_Text_o *)0x0) &&
     (pUVar3 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
    image = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage
                      (pUVar3,&(__this->fields)._image,"AoTTG Guild Preset Preview",31.0,(MethodInfo *)&"AoTTG Guild Preset Preview"
                      );
    Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage(image,value,method_00);
    if ((image != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)image,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if (((char)bVar1 != '\0') || (pSVar5 = text, text == (System_String_o *)0x0)) {
        pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      (*(__this_00->klass->vtable)._66_set_text.methodPtr)
                (__this_00,pSVar5,(__this_00->klass->vtable)._66_set_text.method);
      if ((char)enabled != '\0') {
        local_58.fields.Kind = 0;
        local_58.fields._20_4_ = 0;
        local_58.fields.Sprite = (System_String_o *)0x0;
        local_58.fields.Id = (System_String_o *)0x0;
        local_58.fields.Label = (System_String_o *)0x0;
        local_58.fields.ImageScale = 0.0;
        local_58.fields._36_4_ = 0;
        bVar2 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(value,&local_58,method_01);
        if ((char)bVar2 == '\0') {
          color_01.fields.b = 1.0;
          color_01.fields.a = 1.0;
          color_01.fields.r = 1.0;
          color_01.fields.g = 1.0;
          Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                    (__this_00,&(__this->fields)._effect,color_01,method_02);
          if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
            il2cpp_init_class();
          }
          value_00 = PatreonEffects_NameFontCatalog__Load("Aottg2",(MethodInfo *)0x0);
          TMPro_TMP_Text__set_font(__this_00,value_00,(MethodInfo *)0x0);
          (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                    (0x3f800000,0x3f8000003f800000,__this_00,
                     (__this_00->klass->vtable)._23_set_color.method);
          return;
        }
        if ((char)bVar1 != '\0') {
          return;
        }
        color.fields.b = 1.0;
        color.fields.a = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                  (__this_00,&(__this->fields)._effect,value,text,color,method);
        return;
      }
      color_00.fields.b = 0.58;
      color_00.fields.a = 1.0;
      color_00.fields.r = 0.58;
      color_00.fields.g = 0.58;
      Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                (__this_00,&(__this->fields)._effect,color_00,method_01);
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$get_Label
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__get_Label (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, const MethodInfo* method);
// 0x41e9370

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__get_Label
          (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o **ppTVar1;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *pTVar3;
  
  if (DAT_05704f1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704f1c = '\x01';
  }
  pTVar3 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppTVar1 = &(__this->fields)._label;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar3 = (TMPro_TMP_Text_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_TMP_Text_GetComponent_TMP_Text);
    (__this->fields)._label = pTVar3;
    il2cpp_runtime_glue(ppTVar1,pTVar3);
  }
  return *ppTVar1;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, const MethodInfo* method);
// 0x41e9cf0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,
               MethodInfo *method)

{
  MethodInfo *in_RDX;
  UnityEngine_Color_o color;
  
  color.fields.b = 1.0;
  color.fields.a = 1.0;
  color.fields.r = 1.0;
  color.fields.g = 1.0;
  Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
            ((__this->fields)._label,&(__this->fields)._effect,color,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, const MethodInfo* method);
// 0x41e9d10

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


