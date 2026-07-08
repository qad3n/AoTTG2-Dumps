// Type: Utility.QuaternionCompression
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/QuaternionCompression.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/Compression/QuaternionCompression.cs  [CHANGED since prior version]
// --------------------------------

// Utility.QuaternionCompression$$CompressQuaternion
// il2cpp: int32_t Utility_QuaternionCompression__CompressQuaternion (UnityEngine_Quaternion_o* quaternion, const MethodInfo* method);
// 0x415b2f0

int32_t Utility_QuaternionCompression__CompressQuaternion
                  (UnityEngine_Quaternion_o *quaternion,MethodInfo *method)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  MethodInfo *pMVar7;
  uint uVar8;
  undefined1 *puVar9;
  MethodInfo *pMVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  long lVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double dStack_48;
  float *pfStack_40;
  float *pfStack_38;
  
  if (DAT_05704a2a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_QuaternionCompression);
    il2cpp_init_method_metadata(&TypeInfo_float);
    DAT_05704a2a = '\x01';
  }
  if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pfVar6 = *(float **)(TypeInfo_QuaternionCompression + 0xb8);
  *pfVar6 = ABS((quaternion->fields).x);
  pfVar6[1] = ABS((quaternion->fields).y);
  pfVar6[2] = ABS((quaternion->fields).z);
  pfVar6[3] = ABS((quaternion->fields).w);
  lVar4 = il2cpp_glue_02274930(TypeInfo_float,4);
  lVar12 = TypeInfo_QuaternionCompression;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar8 = (uint)*(ulong *)(lVar4 + 0x18);
  if (uVar8 == 0) {
LAB_0415b951:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pfVar6 = *(float **)(TypeInfo_QuaternionCompression + 0xb8);
  fVar18 = *pfVar6;
  *(float *)(lVar4 + 0x20) = fVar18;
  if (uVar8 == 1) goto LAB_0415b951;
  fVar17 = pfVar6[1];
  *(float *)(lVar4 + 0x24) = fVar17;
  if ((uVar8 < 3) || (*(float *)(lVar4 + 0x28) = pfVar6[2], uVar8 == 3)) goto LAB_0415b951;
  method_00 = (MethodInfo *)(ulong)(uint)pfVar6[3];
  *(float *)(lVar4 + 0x2c) = pfVar6[3];
  if (1 < (int)uVar8) {
    method_00 = (MethodInfo *)(*(ulong *)(lVar4 + 0x18) & 0xffffffff);
    if (fVar17 <= fVar18) {
      fVar17 = fVar18;
    }
    fVar18 = fVar17;
    if (method_00 != (MethodInfo *)0x2) {
      pMVar7 = (MethodInfo *)(ulong)(uVar8 - 2 & 3);
      if (&method_00[-1].field_0x55 < (undefined1 *)0x3) {
        puVar9 = (undefined1 *)0x2;
      }
      else {
        method_00 = (MethodInfo *)((long)method_00 + (-2 - (long)pMVar7));
        pMVar11 = (MethodInfo *)0x0;
        do {
          pMVar10 = pMVar11;
          fVar17 = *(float *)(lVar4 + 0x28 + (long)pMVar10 * 4);
          if (fVar17 <= fVar18) {
            fVar17 = fVar18;
          }
          fVar18 = *(float *)(lVar4 + 0x2c + (long)pMVar10 * 4);
          if (fVar18 <= fVar17) {
            fVar18 = fVar17;
          }
          fVar17 = *(float *)(lVar4 + 0x30 + (long)pMVar10 * 4);
          if (fVar17 <= fVar18) {
            fVar17 = fVar18;
          }
          fVar18 = *(float *)(lVar4 + 0x34 + (long)pMVar10 * 4);
          if (fVar18 <= fVar17) {
            fVar18 = fVar17;
          }
          pMVar11 = (MethodInfo *)((long)&pMVar10->methodPointer + 4);
        } while (method_00 != pMVar11);
        puVar9 = (undefined1 *)((long)&pMVar10->methodPointer + 6);
      }
      if (pMVar7 != (MethodInfo *)0x0) {
        method_00 = (MethodInfo *)0x0;
        fVar17 = fVar18;
        do {
          fVar18 = *(float *)(lVar4 + (long)puVar9 * 4 + 0x20 + (long)method_00 * 4);
          if (fVar18 <= fVar17) {
            fVar18 = fVar17;
          }
          method_00 = (MethodInfo *)((long)&method_00->methodPointer + 1);
          fVar17 = fVar18;
        } while (pMVar7 != method_00);
      }
    }
  }
  pfVar1 = &(quaternion->fields).y;
  pfVar2 = &(quaternion->fields).z;
  pfVar3 = &(quaternion->fields).w;
  pfStack_40 = pfVar3;
  pfStack_38 = pfVar2;
  if ((*pfVar6 != fVar18) || (NAN(*pfVar6) || NAN(fVar18))) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      il2cpp_init_class();
      pfVar6 = *(float **)(TypeInfo_QuaternionCompression + 0xb8);
      lVar12 = TypeInfo_QuaternionCompression;
    }
    iVar13 = 1;
    if ((pfVar6[1] != fVar18) || (pfVar5 = pfVar1, NAN(pfVar6[1]) || NAN(fVar18))) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        il2cpp_init_class();
        pfVar6 = *(float **)(TypeInfo_QuaternionCompression + 0xb8);
        lVar12 = TypeInfo_QuaternionCompression;
      }
      iVar13 = 2;
      if ((pfVar6[2] != fVar18) || (pfVar5 = pfVar2, NAN(pfVar6[2]) || NAN(fVar18))) {
        iVar13 = 3;
        pfVar5 = pfVar3;
      }
    }
    bVar14 = *pfVar5 <= 0.0 && *pfVar5 != 0.0;
    fVar17 = (quaternion->fields).x;
    fVar18 = (quaternion->fields).x;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      il2cpp_init_class();
      lVar12 = TypeInfo_QuaternionCompression;
    }
    fVar15 = **(float **)(lVar12 + 0xb8) * 722.66315;
    dVar16 = modf((double)fVar15,&dStack_48,method_00);
    if (0.0 <= fVar15) {
      if ((dVar16 != 0.5) || (NAN(dVar16))) {
        fVar15 = floorf(fVar15 + 0.5);
      }
      else {
        fVar15 = (float)dStack_48;
        if (((long)dStack_48 & 1U) != 0) {
          fVar15 = fVar15 + 1.0;
        }
      }
    }
    else if ((dVar16 != -0.5) || (NAN(dVar16))) {
      fVar15 = ceilf(fVar15 + -0.5);
    }
    else {
      fVar15 = (float)dStack_48;
      if (((long)dStack_48 & 1U) != 0) {
        fVar15 = fVar15 + -1.0;
      }
    }
    uVar8 = (int)fVar15 & 0xffffU |
            (uint)((fVar18 <= 0.0 && fVar17 != 0.0) != bVar14) << 9 | iVar13 << 10;
    if (iVar13 != 1) {
      uVar8 = uVar8 << 10;
      lVar12 = TypeInfo_QuaternionCompression;
      goto LAB_0415b676;
    }
    iVar13 = 1;
  }
  else {
    bVar14 = (quaternion->fields).x <= 0.0 && (quaternion->fields).x != 0.0;
    uVar8 = 0;
    iVar13 = 0;
LAB_0415b676:
    fVar17 = *pfVar1;
    fVar18 = *pfVar1;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      il2cpp_init_class();
      lVar12 = TypeInfo_QuaternionCompression;
    }
    fVar15 = *(float *)(*(long *)(lVar12 + 0xb8) + 4) * 722.66315;
    dVar16 = modf((double)fVar15,&dStack_48,method_00);
    if (0.0 <= fVar15) {
      if ((dVar16 != 0.5) || (NAN(dVar16))) {
        fVar15 = floorf(fVar15 + 0.5);
      }
      else {
        fVar15 = (float)dStack_48;
        if (((long)dStack_48 & 1U) != 0) {
          fVar15 = fVar15 + 1.0;
        }
      }
    }
    else if ((dVar16 != -0.5) || (NAN(dVar16))) {
      fVar15 = ceilf(fVar15 + -0.5);
    }
    else {
      fVar15 = (float)dStack_48;
      if (((long)dStack_48 & 1U) != 0) {
        fVar15 = fVar15 + -1.0;
      }
    }
    uVar8 = (int)fVar15 & 0xffffU | (uint)(bVar14 != (fVar18 <= 0.0 && fVar17 != 0.0)) << 9 | uVar8;
    if (iVar13 == 2) goto LAB_0415b855;
  }
  fVar18 = *pfStack_38;
  fVar17 = *pfStack_38;
  if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar15 = *(float *)(*(long *)(TypeInfo_QuaternionCompression + 0xb8) + 8) * 722.66315;
  dVar16 = modf((double)fVar15,&dStack_48,method_00);
  if (0.0 <= fVar15) {
    if ((dVar16 != 0.5) || (NAN(dVar16))) {
      fVar15 = floorf(fVar15 + 0.5);
    }
    else {
      fVar15 = (float)dStack_48;
      if (((long)dStack_48 & 1U) != 0) {
        fVar15 = fVar15 + 1.0;
      }
    }
  }
  else if ((dVar16 != -0.5) || (NAN(dVar16))) {
    fVar15 = ceilf(fVar15 + -0.5);
  }
  else {
    fVar15 = (float)dStack_48;
    if (((long)dStack_48 & 1U) != 0) {
      fVar15 = fVar15 + -1.0;
    }
  }
  uVar8 = (int)fVar15 & 0xffffU |
          (uint)(bVar14 != (fVar17 <= 0.0 && fVar18 != 0.0)) << 9 | uVar8 << 10;
  if (iVar13 == 3) {
    return uVar8;
  }
LAB_0415b855:
  fVar18 = *pfStack_40;
  fVar17 = *pfStack_40;
  if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar15 = *(float *)(*(long *)(TypeInfo_QuaternionCompression + 0xb8) + 0xc) * 722.66315;
  pfStack_40 = (float *)CONCAT44(pfStack_40._4_4_,fVar15);
  dVar16 = modf((double)fVar15,&dStack_48,method_00);
  if (0.0 <= pfStack_40._0_4_) {
    if ((dVar16 != 0.5) || (NAN(dVar16))) {
      fVar15 = floorf(pfStack_40._0_4_ + 0.5);
    }
    else {
      fVar15 = (float)dStack_48;
      if (((long)dStack_48 & 1U) != 0) {
        fVar15 = fVar15 + 1.0;
      }
    }
  }
  else if ((dVar16 != -0.5) || (NAN(dVar16))) {
    fVar15 = ceilf(pfStack_40._0_4_ + -0.5);
  }
  else {
    fVar15 = (float)dStack_48;
    if (((long)dStack_48 & 1U) != 0) {
      fVar15 = fVar15 + -1.0;
    }
  }
  return (int)fVar15 & 0xffffU |
         (uint)(bVar14 != (fVar17 <= 0.0 && fVar18 != 0.0)) << 9 | uVar8 << 10;
}


// Utility.QuaternionCompression$$DecompressQuaternion
// il2cpp: void Utility_QuaternionCompression__DecompressQuaternion (UnityEngine_Quaternion_o* quaternion, int32_t rawCompressed, const MethodInfo* method);
// 0x415b960

void Utility_QuaternionCompression__DecompressQuaternion
               (UnityEngine_Quaternion_o *quaternion,int32_t rawCompressed,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = (uint)rawCompressed >> 0x1e;
  fVar2 = 0.0;
  if (uVar1 == 3) {
LAB_0415b9c0:
    fVar3 = (float)(rawCompressed & 0x1ff) * 0.0013837706 *
            *(float *)(&DAT_00cd0ef0 + (ulong)((rawCompressed & 0x200U) == 0) * 4);
    (quaternion->fields).z = fVar3;
    fVar2 = fVar3 * fVar3 + fVar2;
    rawCompressed = (uint)rawCompressed >> 10;
    if (uVar1 == 1) goto LAB_0415ba54;
  }
  else {
    fVar2 = (float)(rawCompressed & 0x1ff) * 0.0013837706 *
            *(float *)(&DAT_00cd0ef0 + (ulong)((rawCompressed & 0x200U) == 0) * 4);
    (quaternion->fields).w = fVar2;
    fVar2 = fVar2 * fVar2 + 0.0;
    rawCompressed = (uint)rawCompressed >> 10;
    if (uVar1 != 2) goto LAB_0415b9c0;
  }
  fVar3 = (float)(rawCompressed & 0x1ff) * 0.0013837706 *
          *(float *)(&DAT_00cd0ef0 + (ulong)((rawCompressed & 0x200U) == 0) * 4);
  (quaternion->fields).y = fVar3;
  fVar2 = fVar3 * fVar3 + fVar2;
  if (uVar1 == 0) {
    fVar2 = 1.0 - fVar2;
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    (quaternion->fields).x = fVar2;
    return;
  }
  rawCompressed = (uint)rawCompressed >> 10;
LAB_0415ba54:
  fVar3 = (float)(rawCompressed & 0x1ff) * 0.0013837706 *
          *(float *)(&DAT_00cd0ef0 + (ulong)((rawCompressed & 0x200U) == 0) * 4);
  (quaternion->fields).x = fVar3;
  fVar2 = 1.0 - (fVar3 * fVar3 + fVar2);
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      (quaternion->fields).z = fVar2;
      return;
    }
    (quaternion->fields).w = fVar2;
    return;
  }
  (quaternion->fields).y = fVar2;
  return;
}


// Utility.QuaternionCompression$$.cctor
// il2cpp: void Utility_QuaternionCompression___cctor (const MethodInfo* method);
// 0x415bb10

void Utility_QuaternionCompression___cctor(MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_05704a2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_QuaternionCompression);
    DAT_05704a2b = '\x01';
  }
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  uVar2 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  puVar1 = *(undefined8 **)(TypeInfo_QuaternionCompression + 0xb8);
  *puVar1 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  puVar1[1] = uVar2;
  return;
}


