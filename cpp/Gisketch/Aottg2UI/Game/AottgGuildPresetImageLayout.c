// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetImageLayout.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Configure (UnityEngine_UI_Image_o* image, float width, float height, const MethodInfo* method);
// 0x41e9d20

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Configure
               (UnityEngine_UI_Image_o *image,float width,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this;
  
  __this = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,method);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    (__this->fields)._baseWidth = width;
    (__this->fields)._baseHeight = height;
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this,1.0,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Scale
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Scale (UnityEngine_UI_Image_o* image, float scale, const MethodInfo* method);
// 0x41e9e70

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Scale
               (UnityEngine_UI_Image_o *image,float scale,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this;
  
  __this = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,method);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this,scale,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Runtime
// il2cpp: Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime (UnityEngine_UI_Image_o* image, const MethodInfo* method);
// 0x41ea1b0

Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime
          (UnityEngine_UI_Image_o *image,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o **ppUVar1;
  int iVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *x;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  
  if (DAT_05704f26 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgGuildPresetImageLayout_GetComponent_AottgGu);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_AottgGuildPresetImageLayout_AddComponent_AottgGu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704f26 = '\x01';
  }
  if (image != (UnityEngine_UI_Image_o *)0x0) {
    x = (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)
        UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)image,MethodInfo_AottgGuildPresetImageLayout_GetComponent_AottgGu);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (x != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
        pUVar4 = (x->fields)._layout;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
joined_r0x041ea336:
        if (iVar2 == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          ppUVar1 = &(x->fields)._layout;
          pUVar4 = (UnityEngine_UI_LayoutElement_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)image,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          *ppUVar1 = pUVar4;
          il2cpp_runtime_glue(ppUVar1,pUVar4);
        }
        return x;
      }
    }
    else {
      __this = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        x = (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)
            UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_AottgGuildPresetImageLayout_AddComponent_AottgGu);
        x_00 = (UnityEngine_Object_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)image,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_041ea3ec;
          UVar7 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
          fVar6 = UVar7.fields.m_Width;
        }
        else {
          if (x_00 == (UnityEngine_Object_o *)0x0) goto LAB_041ea3ec;
          fVar6 = (float)(*(code *)x_00->klass[2]._1.klass)(x_00);
        }
        if (x != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
          (x->fields)._baseWidth = fVar6;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
            if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_041ea3ec;
            UVar7 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
            fVar6 = UVar7.fields.m_Height;
          }
          else {
            if (x_00 == (UnityEngine_Object_o *)0x0) goto LAB_041ea3ec;
            fVar6 = (float)(*x_00->klass[2]._1.methods)(x_00);
          }
          (x->fields)._baseHeight = fVar6;
          pUVar4 = (x->fields)._layout;
          iVar2 = *(int *)(TypeInfo_Object + 0xe4);
          goto joined_r0x041ea336;
        }
      }
    }
  }
LAB_041ea3ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* __this, float scale, const MethodInfo* method);
// 0x41ea400

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this,float scale,
               MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this_00;
  undefined8 extraout_RDX;
  
  if (DAT_05704f27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704f27 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (DAT_056fe077 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fe077 = '\x01';
  }
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localScale
              (__this_00,
               (UnityEngine_Vector3_o)
               *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
               (MethodInfo *)0x0);
    pUVar1 = (__this->fields)._layout;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      return;
    }
    pUVar1 = (__this->fields)._layout;
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                ((ulong)(uint)((__this->fields)._baseWidth * scale),pUVar1,
                 (pUVar1->klass->vtable)._36_set_preferredWidth.method);
      pUVar1 = (__this->fields)._layout;
      if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        vtable_dispatch = (pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr;
        (*vtable_dispatch)
                  ((ulong)(uint)(scale * (__this->fields)._baseHeight),pUVar1,
                   (pUVar1->klass->vtable)._38_set_preferredHeight.method,extraout_RDX,
                   vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* __this, const MethodInfo* method);
// 0x41ea510

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


