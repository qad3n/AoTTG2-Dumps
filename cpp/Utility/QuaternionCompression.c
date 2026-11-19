// Type: Utility.QuaternionCompression
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/QuaternionCompression.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/QuaternionCompression.cs
// --------------------------------

// Utility.QuaternionCompression$$CompressQuaternion
// il2cpp: int32_t Utility_QuaternionCompression__CompressQuaternion (UnityEngine_Quaternion_o* quaternion, const MethodInfo* method);
// 0x5dea980
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5deaab3: jmp 0x5deab24
// asm:   0x5deaab5: movaps xmm1, xmm0
// asm:   0x5deaab8: jmp 0x5deab24
// asm:   0x5deac9a: jmp 0x5deaf06

int32_t Utility_QuaternionCompression__CompressQuaternion
                  (UnityEngine_Quaternion_o *quaternion,MethodInfo *method)

{
  float *pfVar1;
  float *pfVar2;
  void *pvVar3;
  Il2CppObject *pIVar4;
  float *pfVar5;
  Utility_QuaternionCompression_StaticFields *pUVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  MethodInfo *method_00;
  ulong uVar10;
  ulong uVar11;
  Il2CppClass *klass;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double dStack_50;
  float *pfStack_48;
  float *pfStack_40;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075482bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_075482bf = '\x01';
  }
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
  }
  pUVar6 = TypeInfo_Utility_QuaternionCompression->static_fields;
  (pUVar6->s_QuatAbsValues).fields.x = ABS((quaternion->fields).x);
  (pUVar6->s_QuatAbsValues).fields.y = ABS((quaternion->fields).y);
  (pUVar6->s_QuatAbsValues).fields.z = ABS((quaternion->fields).z);
  (pUVar6->s_QuatAbsValues).fields.w = ABS((quaternion->fields).w);
  method_00 = (MethodInfo *)0x4;
  pIVar4 = SZArrayNew(TypeInfo_float_array,4);
  klass = (Il2CppClass *)TypeInfo_Utility_QuaternionCompression;
  if (pIVar4 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pvVar3 = pIVar4[1].monitor;
  uVar8 = (uint)pvVar3;
  if (uVar8 == 0) {
label_05deb002:
    ThrowIndexOutOfRangeException();
  }
  pUVar6 = TypeInfo_Utility_QuaternionCompression->static_fields;
  fVar18 = (pUVar6->s_QuatAbsValues).fields.x;
  *(float *)&pIVar4[2].klass = fVar18;
  if (((uVar8 == 1) ||
      (*(float *)((long)&pIVar4[2].klass + 4) = (pUVar6->s_QuatAbsValues).fields.y, uVar8 < 3)) ||
     (*(float *)&pIVar4[2].monitor = (pUVar6->s_QuatAbsValues).fields.z, uVar8 == 3)) goto label_05deb002;
  *(float *)((long)&pIVar4[2].monitor + 4) = (pUVar6->s_QuatAbsValues).fields.w;
  if (1 < (int)uVar8) {
    uVar10 = (ulong)pvVar3 & 0xffffffff;
    uVar7 = uVar10 - 1;
    uVar9 = (ulong)((uint)uVar7 & 3);
    if (uVar10 - 2 < 3) {
      method_00 = (MethodInfo *)0x1;
    }
    else {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        fVar17 = *(float *)((long)&pIVar4[2].klass + uVar11 * 4 + 4);
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        fVar18 = *(float *)((long)&pIVar4[2].monitor + uVar11 * 4);
        if (fVar18 <= fVar17) {
          fVar18 = fVar17;
        }
        fVar17 = *(float *)((long)&pIVar4[2].monitor + uVar11 * 4 + 4);
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        fVar18 = *(float *)((long)&pIVar4[3].klass + uVar11 * 4);
        if (fVar18 <= fVar17) {
          fVar18 = fVar17;
        }
        uVar10 = uVar11 + 4;
      } while ((uVar7 & 0xfffffffffffffffc) != uVar11 + 4);
      method_00 = (MethodInfo *)(uVar11 + 5);
    }
    if (uVar9 != 0) {
      uVar7 = 0;
      fVar17 = fVar18;
      do {
        fVar18 = *(float *)((long)&pIVar4[2].klass + uVar7 * 4 + (long)method_00 * 4);
        if (fVar18 <= fVar17) {
          fVar18 = fVar17;
        }
        uVar7 = uVar7 + 1;
        fVar17 = fVar18;
      } while (uVar9 != uVar7);
    }
  }
  pfVar1 = &(quaternion->fields).y;
  pfVar2 = &(quaternion->fields).z;
  pfVar5 = &(quaternion->fields).w;
  fVar17 = (pUVar6->s_QuatAbsValues).fields.x;
  pfStack_48 = pfVar2;
  pfStack_40 = pfVar5;
  if ((fVar17 != fVar18) || (NAN(fVar17) || NAN(fVar18))) {
    if ((((Utility_QuaternionCompression_c *)klass)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      pUVar6 = TypeInfo_Utility_QuaternionCompression->static_fields;
      klass = (Il2CppClass *)TypeInfo_Utility_QuaternionCompression;
    }
    fStack_34 = (pUVar6->s_QuatAbsValues).fields.y;
    iVar12 = 1;
    if ((fStack_34 != fVar18) || (NAN(fStack_34) || NAN(fVar18))) {
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        pUVar6 = TypeInfo_Utility_QuaternionCompression->static_fields;
        klass = (Il2CppClass *)TypeInfo_Utility_QuaternionCompression;
      }
      fVar17 = (pUVar6->s_QuatAbsValues).fields.z;
      iVar12 = 2;
      if ((fVar17 != fVar18) || (NAN(fVar17) || NAN(fVar18))) {
        iVar12 = 3;
      }
      else {
        pfVar5 = pfVar2;
      }
    }
    else {
      pfVar5 = pfVar1;
    }
    bVar13 = *pfVar5 <= 0.0 && *pfVar5 != 0.0;
    fVar14 = (quaternion->fields).x;
    fVar17 = (quaternion->fields).x;
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_Utility_QuaternionCompression;
    }
    fStack_38 = (klass->static_fields->s_QuatAbsValues).fields.x * 722.66315;
    dVar16 = modf((double)fStack_38,&dStack_50,method_00);
    if (0.0 <= fStack_38) {
      if ((dVar16 != 0.5) || (NAN(dVar16))) {
        fVar15 = floorf(fStack_38 + 0.5);
      }
      else {
        fVar15 = (float)dStack_50;
        if (((long)dStack_50 & 1U) != 0) {
          fVar15 = fVar15 + 1.0;
        }
      }
    }
    else if ((dVar16 != -0.5) || (NAN(dVar16))) {
      fVar15 = ceilf(fStack_38 + -0.5);
    }
    else {
      fVar15 = (float)dStack_50;
      if (((long)dStack_50 & 1U) != 0) {
        fVar15 = fVar15 + -1.0;
      }
    }
    uVar8 = (int)fVar15 & 0xffffU | (uint)((0.0 < fVar17 || fVar14 == 0.0) == bVar13) << 9 | iVar12 << 10;
    if ((fStack_34 != fVar18) || (NAN(fStack_34) || NAN(fVar18))) {
      uVar8 = uVar8 << 10;
      klass = (Il2CppClass *)TypeInfo_Utility_QuaternionCompression;
      goto label_05deab5f;
    }
    iVar12 = 1;
  }
  else {
    bVar13 = (quaternion->fields).x <= 0.0 && (quaternion->fields).x != 0.0;
    uVar8 = 0;
    iVar12 = 0;
label_05deab5f:
    fVar17 = *pfVar1;
    fVar18 = *pfVar1;
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_Utility_QuaternionCompression;
    }
    fVar14 = (klass->static_fields->s_QuatAbsValues).fields.y * 722.66315;
    dVar16 = modf((double)fVar14,&dStack_50,method_00);
    if (0.0 <= fVar14) {
      if ((dVar16 != 0.5) || (NAN(dVar16))) {
        fVar14 = floorf(fVar14 + 0.5);
      }
      else {
        fVar14 = (float)dStack_50;
        if (((long)dStack_50 & 1U) != 0) {
          fVar14 = fVar14 + 1.0;
        }
      }
    }
    else if ((dVar16 != -0.5) || (NAN(dVar16))) {
      fVar14 = ceilf(fVar14 + -0.5);
    }
    else {
      fVar14 = (float)dStack_50;
      if (((long)dStack_50 & 1U) != 0) {
        fVar14 = fVar14 + -1.0;
      }
    }
    uVar8 = (int)fVar14 & 0xffffU | (uint)(bVar13 != (fVar18 <= 0.0 && fVar17 != 0.0)) << 9 | uVar8;
    if (iVar12 == 2) goto label_05deaf06;
  }
  fVar18 = *pfStack_48;
  fVar17 = *pfStack_48;
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
  }
  fVar14 = (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.z * 722.66315;
  pfStack_48 = (float *)CONCAT44(pfStack_48._4_4_,fVar14);
  dVar16 = modf((double)fVar14,&dStack_50,method_00);
  if (0.0 <= pfStack_48._0_4_) {
    if ((dVar16 != 0.5) || (NAN(dVar16))) {
      fVar14 = floorf(pfStack_48._0_4_ + 0.5);
    }
    else {
      fVar14 = (float)dStack_50;
      if (((long)dStack_50 & 1U) != 0) {
        fVar14 = fVar14 + 1.0;
      }
    }
  }
  else if ((dVar16 != -0.5) || (NAN(dVar16))) {
    fVar14 = ceilf(pfStack_48._0_4_ + -0.5);
  }
  else {
    fVar14 = (float)dStack_50;
    if (((long)dStack_50 & 1U) != 0) {
      fVar14 = fVar14 + -1.0;
    }
  }
  uVar8 = (int)fVar14 & 0xffffU | (uint)(bVar13 != (fVar17 <= 0.0 && fVar18 != 0.0)) << 9 | uVar8 << 10;
  if (iVar12 == 3) {
    return uVar8;
  }
label_05deaf06:
  fVar18 = *pfStack_40;
  fVar17 = *pfStack_40;
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
  }
  fVar14 = (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.w * 722.66315;
  pfStack_40 = (float *)CONCAT44(pfStack_40._4_4_,fVar14);
  dVar16 = modf((double)fVar14,&dStack_50,method_00);
  if (0.0 <= pfStack_40._0_4_) {
    if ((dVar16 != 0.5) || (NAN(dVar16))) {
      fVar14 = floorf(pfStack_40._0_4_ + 0.5);
    }
    else {
      fVar14 = (float)dStack_50;
      if (((long)dStack_50 & 1U) != 0) {
        fVar14 = fVar14 + 1.0;
      }
    }
  }
  else if ((dVar16 != -0.5) || (NAN(dVar16))) {
    fVar14 = ceilf(pfStack_40._0_4_ + -0.5);
  }
  else {
    fVar14 = (float)dStack_50;
    if (((long)dStack_50 & 1U) != 0) {
      fVar14 = fVar14 + -1.0;
    }
  }
  return (int)fVar14 & 0xffffU | (uint)(bVar13 != (fVar17 <= 0.0 && fVar18 != 0.0)) << 9 | uVar8 << 10;
}


// Utility.QuaternionCompression$$DecompressQuaternion
// il2cpp: void Utility_QuaternionCompression__DecompressQuaternion (UnityEngine_Quaternion_o* quaternion, int32_t rawCompressed, const MethodInfo* method);
// 0x5deb010

void Utility_QuaternionCompression__DecompressQuaternion
               (UnityEngine_Quaternion_o *quaternion,int32_t rawCompressed,MethodInfo *method)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  uVar5 = (uint)rawCompressed >> 0x1e;
  pfVar1 = &(quaternion->fields).w;
  pfVar2 = &(quaternion->fields).z;
  pfVar3 = &(quaternion->fields).y;
  fVar7 = 0.0;
  uVar4 = rawCompressed;
  if (uVar5 == 3) {
label_05deb072:
    fVar6 = (float)(uVar4 & 0x1ff) * 0.0013837706;
    if ((uVar4 & 0x200) != 0) {
      fVar6 = -fVar6;
    }
    *pfVar2 = fVar6;
    fVar7 = fVar7 + fVar6 * fVar6;
    uVar4 = uVar4 >> 10;
    if (uVar5 == 1) goto label_05deb0e2;
  }
  else {
    fVar7 = (float)(rawCompressed & 0x1ff) * 0.0013837706;
    if ((rawCompressed & 0x200U) != 0) {
      fVar7 = -fVar7;
    }
    *pfVar1 = fVar7;
    fVar7 = fVar7 * fVar7 + 0.0;
    uVar4 = (uint)rawCompressed >> 10;
    if (uVar5 != 2) goto label_05deb072;
  }
  fVar6 = (float)(uVar4 & 0x1ff) * 0.0013837706;
  if ((uVar4 & 0x200) != 0) {
    fVar6 = -fVar6;
  }
  *pfVar3 = fVar6;
  fVar7 = fVar7 + fVar6 * fVar6;
  uVar4 = uVar4 >> 10;
label_05deb0e2:
  if (0x3fffffff < (uint)rawCompressed) {
    fVar6 = (float)(uVar4 & 0x1ff) * 0.0013837706;
    if ((uVar4 & 0x200) != 0) {
      fVar6 = -fVar6;
    }
    (quaternion->fields).x = fVar6;
    fVar7 = fVar7 + fVar6 * fVar6;
  }
  fVar7 = 1.0 - fVar7;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  switch(uVar5) {
  case 1:
    quaternion = (UnityEngine_Quaternion_o *)pfVar3;
    break;
  case 2:
    quaternion = (UnityEngine_Quaternion_o *)pfVar2;
    break;
  case 3:
    quaternion = (UnityEngine_Quaternion_o *)pfVar1;
  }
  *(float *)quaternion = fVar7;
  return;
}


// Utility.QuaternionCompression$$.cctor
// il2cpp: void Utility_QuaternionCompression___cctor (const MethodInfo* method);
// 0x5deb170

void Utility_QuaternionCompression___cctor(MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  Utility_QuaternionCompression_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_075482c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    Il2CppMethodInitialized_075482c0 = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar3 = (pUVar1->identityQuaternion).fields.y;
  fVar4 = (pUVar1->identityQuaternion).fields.z;
  fVar5 = (pUVar1->identityQuaternion).fields.w;
  pUVar2 = TypeInfo_Utility_QuaternionCompression->static_fields;
  (pUVar2->s_QuatAbsValues).fields.x = (pUVar1->identityQuaternion).fields.x;
  (pUVar2->s_QuatAbsValues).fields.y = fVar3;
  (pUVar2->s_QuatAbsValues).fields.z = fVar4;
  (pUVar2->s_QuatAbsValues).fields.w = fVar5;
  return;
}


