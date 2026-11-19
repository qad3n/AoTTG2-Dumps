// Type: UI.MobileInputShapeUtil
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileInputShapeUtil.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputShapeUtil$$ApplyShape
// il2cpp: void UI_MobileInputShapeUtil__ApplyShape (UnityEngine_UI_Image_o* image, int32_t shape, const MethodInfo* method);
// 0x5c73890
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c738f7: jmp 0x5c73937
// asm:   0x5c73903: mov rsi, rax
// asm:   0x5c73906: jmp 0x5c7390f

void UI_MobileInputShapeUtil__ApplyShape(UnityEngine_UI_Image_o *image,int32_t shape,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Sprite_o *value;
  UnityEngine_UI_Image_o *method_00;
  
  if (Il2CppMethodInitialized_0754792c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754792c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = image;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (shape == 2) {
    value = UI_MobileInputShapeUtil__GetDiamondSprite((MethodInfo *)method_00);
  }
  else {
    if (shape != 1) {
      if (image == (UnityEngine_UI_Image_o *)0x0) goto label_05c73937;
      value = (UnityEngine_Sprite_o *)0x0;
      goto label_05c7390f;
    }
    value = UI_MobileInputShapeUtil__GetCircleSprite((MethodInfo *)method_00);
  }
  if (image == (UnityEngine_UI_Image_o *)0x0) {
label_05c73937:
    ThrowNullReferenceException();
  }
label_05c7390f:
  UnityEngine_UI_Image__set_sprite(image,value,(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_type(image,0,(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_preserveAspect(image,false,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputShapeUtil$$GetCircleSprite
// il2cpp: UnityEngine_Sprite_o* UI_MobileInputShapeUtil__GetCircleSprite (const MethodInfo* method);
// 0x5c73940

UnityEngine_Sprite_o * UI_MobileInputShapeUtil__GetCircleSprite(MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  UnityEngine_Texture_o *__this;
  UnityEngine_Sprite_o *pUVar3;
  int y;
  int x_00;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_0754792d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputShapeUtil);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"MobileInputCircleSprite");
    Il2CppMethodInitialized_0754792d = '\x01';
  }
  x = (UnityEngine_Object_o *)TypeInfo_UI_MobileInputShapeUtil->static_fields->_circleSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    __this = (UnityEngine_Texture_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D)
    ;
    y = 0;
    UnityEngine_Texture2D___ctor_68efe30
              ((UnityEngine_Texture2D_o *)__this,0x40,0x40,5,false,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Texture_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,"MobileInputCircleSprite",(MethodInfo *)0x0);
    UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
    UnityEngine_Texture__set_filterMode(__this,1,(MethodInfo *)0x0);
    do {
      x_00 = 0;
      do {
        if (Il2CppMethodInitialized_0753e72f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e72f = '\x01';
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar5 = ((float)x_00 + -31.5) * ((float)x_00 + -31.5) + ((float)y + -31.5) * ((float)y + -31.5);
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        fVar5 = 32.0 - fVar5;
        fVar4 = 1.0;
        if (fVar5 <= 1.0) {
          fVar4 = fVar5;
        }
        color.fields.a = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
        color.fields.b = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this,x_00,y,color,(MethodInfo *)0x0);
        x_00 = x_00 + 1;
      } while (x_00 != 0x40);
      y = y + 1;
    } while (y != 0x40);
    UnityEngine_Texture2D__Apply_68f05d0((UnityEngine_Texture2D_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Sprite__Create_68ba7d0
                       ((UnityEngine_Texture2D_o *)__this,
                        (UnityEngine_Rect_o)(ZEXT816(0x4280000042800000) << 0x40),
                        (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    TypeInfo_UI_MobileInputShapeUtil->static_fields->_circleSprite = pUVar3;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileInputShapeUtil->static_fields->_circleSprite);
  }
  return TypeInfo_UI_MobileInputShapeUtil->static_fields->_circleSprite;
}


// UI.MobileInputShapeUtil$$GetDiamondSprite
// il2cpp: UnityEngine_Sprite_o* UI_MobileInputShapeUtil__GetDiamondSprite (const MethodInfo* method);
// 0x5c73bb0

UnityEngine_Sprite_o * UI_MobileInputShapeUtil__GetDiamondSprite(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UI_MobileInputShapeUtil_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Texture_o *__this;
  UnityEngine_Sprite_o *pUVar3;
  int y;
  int x_00;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_0754792e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputShapeUtil);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"MobileInputDiamondSprite");
    Il2CppMethodInitialized_0754792e = '\x01';
  }
  x = (UnityEngine_Object_o *)TypeInfo_UI_MobileInputShapeUtil->static_fields->_diamondSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    __this = (UnityEngine_Texture_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D)
    ;
    y = 0;
    UnityEngine_Texture2D___ctor_68efe30
              ((UnityEngine_Texture2D_o *)__this,0x40,0x40,5,false,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Texture_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,"MobileInputDiamondSprite",(MethodInfo *)0x0);
    UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
    UnityEngine_Texture__set_filterMode(__this,1,(MethodInfo *)0x0);
    do {
      x_00 = 0;
      do {
        fVar5 = 32.0 - (ABS((float)x_00 + -31.5) + ABS((float)y + -31.5));
        fVar4 = 1.0;
        if (fVar5 <= 1.0) {
          fVar4 = fVar5;
        }
        color.fields.a = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
        color.fields.b = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this,x_00,y,color,(MethodInfo *)0x0);
        x_00 = x_00 + 1;
      } while (x_00 != 0x40);
      y = y + 1;
    } while (y != 0x40);
    UnityEngine_Texture2D__Apply_68f05d0((UnityEngine_Texture2D_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Sprite__Create_68ba7d0
                       ((UnityEngine_Texture2D_o *)__this,
                        (UnityEngine_Rect_o)(ZEXT816(0x4280000042800000) << 0x40),
                        (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    pUVar1 = TypeInfo_UI_MobileInputShapeUtil->static_fields;
    pUVar1->_diamondSprite = pUVar3;
    Il2CppCodeGenWriteBarrier(&pUVar1->_diamondSprite);
  }
  return TypeInfo_UI_MobileInputShapeUtil->static_fields->_diamondSprite;
}


