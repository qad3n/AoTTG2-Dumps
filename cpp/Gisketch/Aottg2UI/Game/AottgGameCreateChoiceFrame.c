// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateChoiceFrame.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame$$get_Sprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__get_Sprite (const MethodInfo* method);
// 0x5e90050

UnityEngine_Sprite_o * Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__get_Sprite(MethodInfo *method)

{
  UnityEngine_Sprite_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame_c **ppGVar2;
  
  if (g_data_075488b5 == '\0') {
    ppGVar2 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame);
    g_data_075488b5 = '\x01';
    method = (MethodInfo *)ppGVar2;
  }
  pUVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite;
  if (pUVar1 == (UnityEngine_Sprite_o *)0x0) {
    pUVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite(0.0,method);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite = pUVar1;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite);
  }
  return pUVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame$$get_RingSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__get_RingSprite (const MethodInfo* method);
// 0x5e930c0

UnityEngine_Sprite_o * Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__get_RingSprite(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame_StaticFields *pGVar1;
  UnityEngine_Sprite_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame_c **ppGVar3;
  
  if (g_data_075488b6 == '\0') {
    ppGVar3 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame);
    g_data_075488b6 = '\x01';
    method = (MethodInfo *)ppGVar3;
  }
  pUVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_ringSprite;
  if (pUVar2 == (UnityEngine_Sprite_o *)0x0) {
    pUVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite(2.0,method);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields;
    pGVar1->_ringSprite = pUVar2;
    Il2CppCodeGenWriteBarrier(&pGVar1->_ringSprite);
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame$$CreateSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite (float thickness, const MethodInfo* method);
// 0x5e93200
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9338c: nop dword ptr [rax]
// asm:   0x5e933f4: jmp 0x5e93403
// asm:   0x5e93400: movaps xmm1, xmm0
// asm:   0x5e93479: nop dword ptr [rax]

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite(float thickness,MethodInfo *method)

{
  void *pvVar1;
  UnityEngine_Texture_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Sprite_o *pUVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int y;
  int x;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Color_o color;
  UnityEngine_Vector4_o border;
  
  if (Il2CppMethodInitialized_075488b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_075488b7 = '\x01';
  }
  __this = (UnityEngine_Texture_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  y = 0;
  UnityEngine_Texture2D___ctor_68efe30((UnityEngine_Texture2D_o *)__this,0x40,0x40,4,false,(MethodInfo *)0x0);
  if (__this == (UnityEngine_Texture_o *)0x0) {
label_05e935be:
    ThrowNullReferenceException();
  }
  UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this,0x34,(MethodInfo *)0x0);
  UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
  do {
    fVar10 = 11.0 - (float)y;
    x = 0;
    do {
      pIVar2 = SZArrayNew(TypeInfo_float_array,3);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05e935be;
      pvVar1 = pIVar2[1].monitor;
      uVar4 = (uint)pvVar1;
      if (uVar4 == 0) {
label_05e935b9:
        ThrowIndexOutOfRangeException();
      }
      fVar11 = 11.0 - (float)x;
      *(float *)&pIVar2[2].klass = fVar11;
      if (uVar4 < 3) goto label_05e935b9;
      *(float *)&pIVar2[2].monitor = (float)x + -52.0;
      if (1 < (int)uVar4) {
        uVar9 = (ulong)pvVar1 & 0xffffffff;
        uVar7 = uVar9 - 1;
        uVar5 = (ulong)((uint)uVar7 & 3);
        lVar6 = 1;
        if (2 < uVar9 - 2) {
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            fVar13 = *(float *)((long)&pIVar2[2].klass + uVar8 * 4 + 4);
            if (fVar13 <= fVar11) {
              fVar13 = fVar11;
            }
            fVar11 = *(float *)((long)&pIVar2[2].monitor + uVar8 * 4);
            if (fVar11 <= fVar13) {
              fVar11 = fVar13;
            }
            fVar13 = *(float *)((long)&pIVar2[2].monitor + uVar8 * 4 + 4);
            if (fVar13 <= fVar11) {
              fVar13 = fVar11;
            }
            fVar11 = *(float *)((long)&pIVar2[3].klass + uVar8 * 4);
            if (fVar11 <= fVar13) {
              fVar11 = fVar13;
            }
            uVar9 = uVar8 + 4;
          } while ((uVar7 & 0xfffffffffffffffc) != uVar8 + 4);
          lVar6 = uVar8 + 5;
        }
        if (uVar5 != 0) {
          uVar7 = 0;
          do {
            fVar13 = *(float *)((long)&pIVar2[2].klass + uVar7 * 4 + lVar6 * 4);
            if (fVar13 <= fVar11) {
              fVar13 = fVar11;
            }
            fVar11 = fVar13;
            uVar7 = uVar7 + 1;
          } while (uVar5 != uVar7);
        }
      }
      pIVar2 = SZArrayNew(TypeInfo_float_array,3);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05e935be;
      pvVar1 = pIVar2[1].monitor;
      uVar4 = (uint)pvVar1;
      if ((uVar4 == 0) || (*(float *)&pIVar2[2].klass = fVar10, uVar4 < 3)) goto label_05e935b9;
      *(float *)&pIVar2[2].monitor = (float)y + -52.0;
      fVar13 = fVar10;
      if (1 < (int)uVar4) {
        uVar9 = (ulong)pvVar1 & 0xffffffff;
        uVar7 = uVar9 - 1;
        uVar5 = (ulong)((uint)uVar7 & 3);
        lVar6 = 1;
        if (2 < uVar9 - 2) {
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            fVar12 = *(float *)((long)&pIVar2[2].klass + uVar8 * 4 + 4);
            if (fVar12 <= fVar13) {
              fVar12 = fVar13;
            }
            fVar13 = *(float *)((long)&pIVar2[2].monitor + uVar8 * 4);
            if (fVar13 <= fVar12) {
              fVar13 = fVar12;
            }
            fVar12 = *(float *)((long)&pIVar2[2].monitor + uVar8 * 4 + 4);
            if (fVar12 <= fVar13) {
              fVar12 = fVar13;
            }
            fVar13 = *(float *)((long)&pIVar2[3].klass + uVar8 * 4);
            if (fVar13 <= fVar12) {
              fVar13 = fVar12;
            }
            uVar9 = uVar8 + 4;
          } while ((uVar7 & 0xfffffffffffffffc) != uVar8 + 4);
          lVar6 = uVar8 + 5;
        }
        if (uVar5 != 0) {
          uVar7 = 0;
          do {
            fVar12 = *(float *)((long)&pIVar2[2].klass + uVar7 * 4 + lVar6 * 4);
            if (fVar12 <= fVar13) {
              fVar12 = fVar13;
            }
            fVar13 = fVar12;
            uVar7 = uVar7 + 1;
          } while (uVar5 != uVar7);
        }
      }
      fVar11 = fVar13 * fVar13 + fVar11 * fVar11;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      fVar12 = 12.0 - fVar11;
      fVar13 = 1.0;
      if (fVar12 <= 1.0) {
        fVar13 = fVar12;
      }
      fVar13 = (float)(-(uint)(0.0 <= fVar12) & (uint)fVar13);
      if (0.0 < thickness) {
        fVar11 = (12.0 - thickness) - fVar11;
        fVar12 = 1.0;
        if (fVar11 <= 1.0) {
          fVar12 = fVar11;
        }
        fVar13 = fVar13 - (float)(-(uint)(0.0 <= fVar11) & (uint)fVar12);
      }
      color.fields.a = fVar13;
      color.fields.b = 1.0;
      color.fields.r = 1.0;
      color.fields.g = 1.0;
      UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this,x,y,color,(MethodInfo *)0x0);
      x = x + 1;
    } while (x != 0x40);
    y = y + 1;
    if (y == 0x40) {
      UnityEngine_Texture2D__Apply_68f05c0((UnityEngine_Texture2D_o *)__this,false,(MethodInfo *)0x0);
      border.fields.z = 12.0;
      border.fields.w = 12.0;
      border.fields.x = 12.0;
      border.fields.y = 12.0;
      pUVar3 = UnityEngine_Sprite__Create_68ba610
                         ((UnityEngine_Texture2D_o *)__this,
                          (UnityEngine_Rect_o)(ZEXT816(0x4280000042800000) << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,64.0,0,0,border,(MethodInfo *)0x0);
      return pUVar3;
    }
  } while( true );
}


