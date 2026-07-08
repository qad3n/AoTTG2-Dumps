// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetChoicePreview.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register (const MethodInfo* method);
// 0x41e2ea0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  System_Action_GisketchChoiceOptionRenderContext__o *renderer;
  
  if (DAT_05704f16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchChoiceOptionRenderContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_Render);
    il2cpp_init_method_metadata(&TypeInfo_AottgGuildPresetChoicePreview);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionRenderer);
    il2cpp_init_method_metadata(&"profile-character-guild-preset-preview");
    DAT_05704f16 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x10);
  }
  else {
    lVar3 = *(long *)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x10);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4) == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
  }
  *(undefined1 *)(lVar3 + 0x10) = 1;
  renderer = (System_Action_GisketchChoiceOptionRenderContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchChoiceOptionRenderContext);
  System_Action<object>___ctor();
  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
            ("profile-character-guild-preset-preview",renderer,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$UseRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__UseRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x41e5040

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__UseRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (DAT_05704f17 == '\0') {
    il2cpp_init_method_metadata(&"profile-character-guild-preset-preview");
    DAT_05704f17 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).choiceOptions = "profile-character-guild-preset-preview";
    il2cpp_runtime_glue(&(node->fields).choiceOptions);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Render
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Render (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x41e8b00

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Render
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,
               MethodInfo *method)

{
  int iVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this;
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this_00;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *normal;
  MethodInfo *method_03;
  MethodInfo *in_R8;
  System_String_o *id;
  bool bVar6;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o GStack_58;
  
  if (DAT_05704f18 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGuildPresetChoicePreview);
    il2cpp_init_method_metadata(&MethodInfo_AottgGuildPresetChoicePreviewRuntime_GetComponen);
    il2cpp_init_method_metadata(&MethodInfo_AottgGuildPresetChoicePreviewRuntime_AddComponen);
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_Gisket);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704f18 = '\x01';
  }
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    return;
  }
  pTVar2 = (context->fields).Label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_03 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface(context,method_03);
  GStack_58.fields.Kind = 0;
  GStack_58.fields._20_4_ = 0;
  GStack_58.fields.Sprite = (System_String_o *)0x0;
  GStack_58.fields.Id = (System_String_o *)0x0;
  GStack_58.fields.Label = (System_String_o *)0x0;
  GStack_58.fields.ImageScale = 0.0;
  GStack_58.fields._36_4_ = 0;
  bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet
                    ((context->fields).Value,&GStack_58,method_00);
  bVar6 = GStack_58.fields.Kind == 1;
  GStack_58.fields.Kind = 0;
  GStack_58.fields._20_4_ = 0;
  GStack_58.fields.Sprite = (System_String_o *)0x0;
  GStack_58.fields.Id = (System_String_o *)0x0;
  GStack_58.fields.Label = (System_String_o *)0x0;
  GStack_58.fields.ImageScale = 0.0;
  GStack_58.fields._36_4_ = 0;
  bVar4 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet
                    ((context->fields).Value,&GStack_58,method_01);
  if ((char)bVar4 == '\0') {
    id = (context->fields).Text;
LAB_041e8c57:
    x = (UnityEngine_Object_o *)(context->fields).Root;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    id = (context->fields).Value;
    GStack_58.fields.Kind = 0;
    GStack_58.fields._20_4_ = 0;
    GStack_58.fields.Sprite = (System_String_o *)0x0;
    GStack_58.fields.Id = (System_String_o *)0x0;
    GStack_58.fields.Label = (System_String_o *)0x0;
    GStack_58.fields.ImageScale = 0.0;
    GStack_58.fields._36_4_ = 0;
    bVar4 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(id,&GStack_58,method_02);
    if ((char)bVar4 == '\0') goto LAB_041e8c57;
    x = (UnityEngine_Object_o *)(context->fields).Root;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
    id = GStack_58.fields.Label;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  __this = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar5 = (context->fields).Root;
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_041e8d90;
    __this = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_GisketchDropdownItemFeedback_GetComponent_Gisket);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    normal = id;
    if (((byte)bVar3 & bVar6) != 0) {
      normal = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    if (__this == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)
    goto LAB_041e8d90;
    in_R8 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
              (__this,normal,normal,(uint)(byte)(context->fields).Enabled,(MethodInfo *)0x0);
  }
  pTVar2 = (context->fields).Label;
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    __this_00 = (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pTVar2,MethodInfo_AottgGuildPresetChoicePreviewRuntime_GetComponen);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pTVar2 = (context->fields).Label;
      if ((pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_041e8d90;
      __this_00 = (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *)
                  UnityEngine_GameObject__AddComponent<object>(pUVar5,MethodInfo_AottgGuildPresetChoicePreviewRuntime_AddComponen);
    }
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure
                (__this_00,(context->fields).Value,id,(uint)(byte)(context->fields).Enabled,in_R8);
      return;
    }
  }
LAB_041e8d90:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$ApplyDarkSurface
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x41e8da0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,
               MethodInfo *method)

{
  int iVar1;
  TMPro_TextMeshProUGUI_o *__this;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  System_String_o *pSVar4;
  
  if (DAT_05704f19 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGuildPresetChoicePreview);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponentInParent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"-popover");
    il2cpp_init_method_metadata(&"-options-scroll");
    DAT_05704f19 = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    if (*(char *)((long)&(context->fields).Enabled + 2) == '\0') {
      pUVar3 = (UnityEngine_Object_o *)(context->fields).Root;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_01 = (UnityEngine_Transform_o *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        __this_00 = (context->fields).Root;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_041e9046;
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      }
      iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      while( true ) {
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if ((__this_01 == (UnityEngine_Transform_o *)0x0) ||
           (pSVar4 = UnityEngine_Object__get_name
                               ((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0),
           pSVar4 == (System_String_o *)0x0)) break;
        bVar2 = System_String__EndsWith(pSVar4,"-popover",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0)
          ;
          if (pSVar4 == (System_String_o *)0x0) break;
          bVar2 = System_String__EndsWith(pSVar4,"-options-scroll",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') goto LAB_041e8fbf;
        }
        else {
LAB_041e8fbf:
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (pUVar3 == (UnityEngine_Object_o *)0x0) break;
            (**(code **)&pUVar3->klass[1]._2.naturalAligment)
                      (**(undefined8 **)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8),
                       (*(undefined8 **)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8))[1],pUVar3);
          }
        }
        __this_01 = UnityEngine_Transform__get_parent(__this_01,(MethodInfo *)0x0);
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
    }
    else {
      __this = (context->fields).Label;
      if (__this != (TMPro_TextMeshProUGUI_o *)0x0) {
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponentInParent<object>
                           ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponentInParent_Image);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pUVar3 != (UnityEngine_Object_o *)0x0) {
          (**(code **)&pUVar3->klass[1]._2.naturalAligment)
                    (**(undefined8 **)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8),
                     (*(undefined8 **)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8))[1],pUVar3,
                     pUVar3->klass[1].vtable._0_Equals.methodPtr);
          return;
        }
      }
    }
  }
LAB_041e9046:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview___cctor (const MethodInfo* method);
// 0x41e9330

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview___cctor(MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_05704f1a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGuildPresetChoicePreview);
    DAT_05704f1a = '\x01';
  }
  puVar1 = *(undefined8 **)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
  *puVar1 = 0x3e0f5c293e0f5c29;
  puVar1[1] = 0x3f8000003e0f5c29;
  return;
}


