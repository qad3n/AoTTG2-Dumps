// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateChoiceFrame.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame$$get_Sprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__get_Sprite (const MethodInfo* method);
// 0x1823c2530

UnityEngine_Sprite_o * Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__get_Sprite(MethodInfo *method)

{
  UnityEngine_Sprite_o *value;
  
  if (Il2CppMethodInitialized_184347d7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame);
    Il2CppMethodInitialized_184347d7e = '\x01';
  }
  value = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite;
  if (value == (UnityEngine_Sprite_o *)0x0) {
    value = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite((MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite = value;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_sprite,value);
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceFrame$$CreateSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite (const MethodInfo* method);
// 0x1823c21b0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c22b0: mov ebx, ebp
// asm:   0x1823c231d: nop dword ptr [rax]
// asm:   0x1823c2342: jmp 0x1823c2347
// asm:   0x1823c23af: nop 
// asm:   0x1823c23d2: jmp 0x1823c23d7

UnityEngine_Sprite_o * Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite(MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Texture_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Sprite_o *pUVar3;
  uint uVar4;
  ulonglong uVar5;
  int x;
  int iVar6;
  int y;
  bool bVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_Fields local_88;
  UnityEngine_Rect_Fields local_78 [7];
  
  if (Il2CppMethodInitialized_184347d7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_184347d7f = '\x01';
  }
  __this = (UnityEngine_Texture_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  iVar6 = 0;
  UnityEngine_Texture2D___ctor_2efc630((UnityEngine_Texture2D_o *)__this,0x40,0x40,4,false,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Texture_o *)0x0) {
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this,0x34,(MethodInfo *)0x0);
    UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
    x = iVar6;
    y = iVar6;
    while (pIVar2 = SZArrayNew(TypeInfo_float_array,3), pIVar2 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar2[1].monitor == 0) {
label_1823c251b:
        ThrowIndexOutOfRangeException();
      }
      fVar8 = 11.0 - (float)x;
      *(float *)&pIVar2[2].klass = fVar8;
      if (*(uint *)&pIVar2[1].monitor < 3) goto label_1823c251b;
      *(float *)&pIVar2[2].monitor = (float)x - 52.0;
      uVar1 = *(uint *)&pIVar2[1].monitor;
      if (uVar1 == 0) {
        fVar8 = 0.0;
      }
      else {
        uVar5 = 1;
        bVar7 = 1 < uVar1;
        if (1 < (int)uVar1) {
          do {
            if (!bVar7) goto label_1823c251b;
            if (fVar8 < *(float *)((longlong)&pIVar2[2].klass + uVar5 * 4)) {
              fVar8 = *(float *)((longlong)&pIVar2[2].klass + uVar5 * 4);
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            bVar7 = uVar4 < uVar1;
          } while ((int)uVar4 < (int)uVar1);
        }
      }
      pIVar2 = SZArrayNew(TypeInfo_float_array,3);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      if (*(int *)&pIVar2[1].monitor == 0) goto label_1823c251b;
      fVar9 = 11.0 - (float)y;
      *(float *)&pIVar2[2].klass = fVar9;
      if (*(uint *)&pIVar2[1].monitor < 3) goto label_1823c251b;
      *(float *)&pIVar2[2].monitor = (float)y - 52.0;
      uVar1 = *(uint *)&pIVar2[1].monitor;
      if (uVar1 == 0) {
        fVar9 = 0.0;
      }
      else {
        uVar5 = 1;
        uVar4 = 1;
        if (1 < (int)uVar1) {
          do {
            if (uVar1 <= uVar4) goto label_1823c251b;
            if (fVar9 < *(float *)((longlong)&pIVar2[2].klass + uVar5 * 4)) {
              fVar9 = *(float *)((longlong)&pIVar2[2].klass + uVar5 * 4);
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
          } while ((int)uVar4 < (int)uVar1);
        }
      }
      fVar8 = fVar9 * fVar9 + fVar8 * fVar8;
      if (fVar8 < 0.0) {
        fVar8 = (float)il2cpp_runtime_helper_1804fa7a0();
      }
      else {
        fVar8 = SQRT(fVar8);
      }
      local_88.a = 12.0 - fVar8;
      if (local_88.a < 0.0) {
        local_88.a = 0.0;
      }
      else if (1.0 < local_88.a) {
        local_88.a = 1.0;
      }
      local_88.r = 1.0;
      local_88.g = 1.0;
      local_88.b = 1.0;
      UnityEngine_Texture2D__SetPixel
                ((UnityEngine_Texture2D_o *)__this,x,y,(UnityEngine_Color_o *)&local_88,(MethodInfo *)0x0);
      x = x + 1;
      if ((0x3f < x) && (y = y + 1, x = iVar6, 0x3f < y)) {
        UnityEngine_Texture2D__Apply_2ef9fe0((UnityEngine_Texture2D_o *)__this,false,(MethodInfo *)0x0);
        local_88.r = 12.0;
        local_88.g = 12.0;
        local_88.b = 12.0;
        local_88.a = 12.0;
        local_78[0].m_XMin = 0.0;
        local_78[0].m_YMin = 0.0;
        local_78[0].m_Width = 64.0;
        local_78[0].m_Height = 64.0;
        pUVar3 = UnityEngine_Sprite__Create_2ed4400
                           ((UnityEngine_Texture2D_o *)__this,(UnityEngine_Rect_o *)local_78,
                            (UnityEngine_Vector2_o)0x3f0000003f000000,64.0,0,0,
                            (UnityEngine_Vector4_o *)&local_88,(MethodInfo *)0x0);
        return pUVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


