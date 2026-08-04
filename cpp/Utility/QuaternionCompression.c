// Type: Utility.QuaternionCompression
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/QuaternionCompression.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/QuaternionCompression.cs
// --------------------------------

// Utility.QuaternionCompression$$CompressQuaternion
// il2cpp: int32_t Utility_QuaternionCompression__CompressQuaternion (UnityEngine_Quaternion_o* quaternion, const MethodInfo* method);
// 0x448bc50

int32_t Utility_QuaternionCompression__CompressQuaternion
                  (UnityEngine_Quaternion_o *quaternion,MethodInfo *method)

{
  float *pfVar1;
  float *pfVar2;
  int32_t iVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  float *pfVar8;
  MethodInfo *pMVar9;
  uint uVar10;
  undefined1 *puVar11;
  MethodInfo *pMVar12;
  MethodInfo *pMVar13;
  ulong uVar14;
  MethodInfo *method_00;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double dStack_48;
  float *pfStack_40;
  float *pfStack_38;
  
  if (g_data_057ae8e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuaternionCompression);
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    g_data_057ae8e1 = '\x01';
  }
  if (TypeInfo_QuaternionCompression[0x39] == 0.0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pfVar16 = *(float **)(TypeInfo_QuaternionCompression + 0x2e);
  *pfVar16 = ABS((quaternion->fields).x);
  pfVar16[1] = ABS((quaternion->fields).y);
  pfVar16[2] = ABS((quaternion->fields).z);
  pfVar16[3] = ABS((quaternion->fields).w);
  uVar14 = 4;
  pfVar15 = TypeInfo_float;
  lVar4 = il2cpp_runtime_helper_022b2a40();
  pfVar16 = TypeInfo_QuaternionCompression;
  if (lVar4 != 0) {
    uVar10 = (uint)*(ulong *)(lVar4 + 0x18);
    if (uVar10 != 0) {
      pfVar8 = *(float **)(TypeInfo_QuaternionCompression + 0x2e);
      fVar21 = *pfVar8;
      *(float *)(lVar4 + 0x20) = fVar21;
      pfVar15 = pfVar16;
      if (uVar10 != 1) {
        fVar22 = pfVar8[1];
        *(float *)(lVar4 + 0x24) = fVar22;
        if (2 < uVar10) {
          uVar14 = (ulong)(uint)pfVar8[2];
          *(float *)(lVar4 + 0x28) = pfVar8[2];
          if (uVar10 != 3) {
            method_00 = (MethodInfo *)(ulong)(uint)pfVar8[3];
            *(float *)(lVar4 + 0x2c) = pfVar8[3];
            fVar19 = fVar21;
            if (1 < (int)uVar10) {
              method_00 = (MethodInfo *)(*(ulong *)(lVar4 + 0x18) & 0xffffffff);
              fVar19 = fVar22;
              if (fVar22 <= fVar21) {
                fVar19 = fVar21;
              }
              if (method_00 != (MethodInfo *)0x2) {
                pMVar9 = (MethodInfo *)(ulong)(uVar10 - 2 & 3);
                if (&method_00[-1].field_0x55 < (undefined1 *)0x3) {
                  puVar11 = (undefined1 *)0x2;
                }
                else {
                  method_00 = (MethodInfo *)((long)method_00 + (-2 - (long)pMVar9));
                  pMVar13 = (MethodInfo *)0x0;
                  do {
                    pMVar12 = pMVar13;
                    fVar21 = *(float *)(lVar4 + 0x28 + (long)pMVar12 * 4);
                    if (fVar21 <= fVar19) {
                      fVar21 = fVar19;
                    }
                    fVar22 = *(float *)(lVar4 + 0x2c + (long)pMVar12 * 4);
                    if (fVar22 <= fVar21) {
                      fVar22 = fVar21;
                    }
                    fVar21 = *(float *)(lVar4 + 0x30 + (long)pMVar12 * 4);
                    if (fVar21 <= fVar22) {
                      fVar21 = fVar22;
                    }
                    fVar19 = *(float *)(lVar4 + 0x34 + (long)pMVar12 * 4);
                    if (fVar19 <= fVar21) {
                      fVar19 = fVar21;
                    }
                    pMVar13 = (MethodInfo *)((long)&pMVar12->methodPointer + 4);
                  } while (method_00 != pMVar13);
                  puVar11 = (undefined1 *)((long)&pMVar12->methodPointer + 6);
                }
                if (pMVar9 != (MethodInfo *)0x0) {
                  method_00 = (MethodInfo *)0x0;
                  fVar21 = fVar19;
                  do {
                    fVar19 = *(float *)(lVar4 + (long)puVar11 * 4 + 0x20 + (long)method_00 * 4);
                    if (fVar19 <= fVar21) {
                      fVar19 = fVar21;
                    }
                    method_00 = (MethodInfo *)((long)&method_00->methodPointer + 1);
                    fVar21 = fVar19;
                  } while (pMVar9 != method_00);
                }
              }
            }
            pfVar15 = &(quaternion->fields).y;
            pfVar1 = &(quaternion->fields).z;
            pfVar2 = &(quaternion->fields).w;
            pfStack_40 = pfVar2;
            pfStack_38 = pfVar1;
            if ((*pfVar8 != fVar19) || (NAN(*pfVar8) || NAN(fVar19))) {
              if (pfVar16[0x39] == 0.0) {
                il2cpp_runtime_helper_02337ed0();
                pfVar8 = *(float **)(TypeInfo_QuaternionCompression + 0x2e);
                pfVar16 = TypeInfo_QuaternionCompression;
              }
              iVar17 = 1;
              if ((pfVar8[1] != fVar19) || (pfVar5 = pfVar15, NAN(pfVar8[1]) || NAN(fVar19))) {
                if (pfVar16[0x39] == 0.0) {
                  il2cpp_runtime_helper_02337ed0();
                  pfVar8 = *(float **)(TypeInfo_QuaternionCompression + 0x2e);
                  pfVar16 = TypeInfo_QuaternionCompression;
                }
                iVar17 = 2;
                if ((pfVar8[2] != fVar19) || (pfVar5 = pfVar1, NAN(pfVar8[2]) || NAN(fVar19))) {
                  iVar17 = 3;
                  pfVar5 = pfVar2;
                }
              }
              bVar18 = *pfVar5 <= 0.0 && *pfVar5 != 0.0;
              fVar21 = (quaternion->fields).x;
              fVar22 = (quaternion->fields).x;
              if (pfVar16[0x39] == 0.0) {
                il2cpp_runtime_helper_02337ed0();
                pfVar16 = TypeInfo_QuaternionCompression;
              }
              fVar19 = **(float **)(pfVar16 + 0x2e) * 722.66315;
              dVar20 = modf((double)fVar19,&dStack_48,method_00);
              if (0.0 <= fVar19) {
                if ((dVar20 != 0.5) || (NAN(dVar20))) {
                  fVar19 = floorf(fVar19 + 0.5);
                }
                else {
                  fVar19 = (float)dStack_48;
                  if (((long)dStack_48 & 1U) != 0) {
                    fVar19 = fVar19 + 1.0;
                  }
                }
              }
              else if ((dVar20 != -0.5) || (NAN(dVar20))) {
                fVar19 = ceilf(fVar19 + -0.5);
              }
              else {
                fVar19 = (float)dStack_48;
                if (((long)dStack_48 & 1U) != 0) {
                  fVar19 = fVar19 + -1.0;
                }
              }
              uVar10 = (int)fVar19 & 0xffffU |
                       (uint)((fVar22 <= 0.0 && fVar21 != 0.0) != bVar18) << 9 | iVar17 << 10;
              if (iVar17 != 1) {
                uVar10 = uVar10 << 10;
                pfVar16 = TypeInfo_QuaternionCompression;
                goto label_0448bfd6;
              }
              iVar17 = 1;
            }
            else {
              bVar18 = (quaternion->fields).x <= 0.0 && (quaternion->fields).x != 0.0;
              uVar10 = 0;
              iVar17 = 0;
label_0448bfd6:
              fVar22 = *pfVar15;
              fVar21 = *pfVar15;
              if (pfVar16[0x39] == 0.0) {
                il2cpp_runtime_helper_02337ed0();
                pfVar16 = TypeInfo_QuaternionCompression;
              }
              fVar19 = *(float *)(*(long *)(pfVar16 + 0x2e) + 4) * 722.66315;
              dVar20 = modf((double)fVar19,&dStack_48,method_00);
              if (0.0 <= fVar19) {
                if ((dVar20 != 0.5) || (NAN(dVar20))) {
                  fVar19 = floorf(fVar19 + 0.5);
                }
                else {
                  fVar19 = (float)dStack_48;
                  if (((long)dStack_48 & 1U) != 0) {
                    fVar19 = fVar19 + 1.0;
                  }
                }
              }
              else if ((dVar20 != -0.5) || (NAN(dVar20))) {
                fVar19 = ceilf(fVar19 + -0.5);
              }
              else {
                fVar19 = (float)dStack_48;
                if (((long)dStack_48 & 1U) != 0) {
                  fVar19 = fVar19 + -1.0;
                }
              }
              uVar10 = (int)fVar19 & 0xffffU |
                       (uint)(bVar18 != (fVar21 <= 0.0 && fVar22 != 0.0)) << 9 | uVar10;
              if (iVar17 == 2) goto label_0448c1b5;
            }
            fVar22 = *pfStack_38;
            fVar21 = *pfStack_38;
            if (TypeInfo_QuaternionCompression[0x39] == 0.0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar19 = *(float *)(*(long *)(TypeInfo_QuaternionCompression + 0x2e) + 8) * 722.66315;
            dVar20 = modf((double)fVar19,&dStack_48,method_00);
            if (0.0 <= fVar19) {
              if ((dVar20 != 0.5) || (NAN(dVar20))) {
                fVar19 = floorf(fVar19 + 0.5);
              }
              else {
                fVar19 = (float)dStack_48;
                if (((long)dStack_48 & 1U) != 0) {
                  fVar19 = fVar19 + 1.0;
                }
              }
            }
            else if ((dVar20 != -0.5) || (NAN(dVar20))) {
              fVar19 = ceilf(fVar19 + -0.5);
            }
            else {
              fVar19 = (float)dStack_48;
              if (((long)dStack_48 & 1U) != 0) {
                fVar19 = fVar19 + -1.0;
              }
            }
            uVar10 = (int)fVar19 & 0xffffU |
                     (uint)(bVar18 != (fVar21 <= 0.0 && fVar22 != 0.0)) << 9 | uVar10 << 10;
            if (iVar17 == 3) {
              return uVar10;
            }
label_0448c1b5:
            fVar21 = *pfStack_40;
            fVar22 = *pfStack_40;
            if (TypeInfo_QuaternionCompression[0x39] == 0.0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar19 = *(float *)(*(long *)(TypeInfo_QuaternionCompression + 0x2e) + 0xc) * 722.66315;
            pfStack_40 = (float *)CONCAT44(pfStack_40._4_4_,fVar19);
            dVar20 = modf((double)fVar19,&dStack_48,method_00);
            if (0.0 <= pfStack_40._0_4_) {
              if ((dVar20 != 0.5) || (NAN(dVar20))) {
                fVar19 = floorf(pfStack_40._0_4_ + 0.5);
              }
              else {
                fVar19 = (float)dStack_48;
                if (((long)dStack_48 & 1U) != 0) {
                  fVar19 = fVar19 + 1.0;
                }
              }
            }
            else if ((dVar20 != -0.5) || (NAN(dVar20))) {
              fVar19 = ceilf(pfStack_40._0_4_ + -0.5);
            }
            else {
              fVar19 = (float)dStack_48;
              if (((long)dStack_48 & 1U) != 0) {
                fVar19 = fVar19 + -1.0;
              }
            }
            return (int)fVar19 & 0xffffU |
                   (uint)(bVar18 != (fVar22 <= 0.0 && fVar21 != 0.0)) << 9 | uVar10 << 10;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uVar7 = uVar14 >> 0x1e;
  uVar10 = (uint)uVar7 & 3;
  fVar21 = 0.0;
  if (uVar10 == 3) {
label_0448c320:
    fVar22 = (float)((uint)uVar14 & 0x1ff) * 0.0013837706 *
             *(float *)(&g_data_00d1d580 + (ulong)((uVar14 & 0x200) == 0) * 4);
    pfVar15[2] = fVar22;
    fVar21 = fVar22 * fVar22 + fVar21;
    uVar14 = (ulong)((uint)uVar14 >> 10);
    if (uVar10 == 1) goto label_0448c3b4;
  }
  else {
    fVar21 = (float)((uint)uVar14 & 0x1ff) * 0.0013837706 *
             *(float *)(&g_data_00d1d580 + (ulong)((uVar14 & 0x200) == 0) * 4);
    pfVar15[3] = fVar21;
    fVar21 = fVar21 * fVar21 + 0.0;
    uVar14 = (ulong)((uint)uVar14 >> 10);
    if (uVar10 != 2) goto label_0448c320;
  }
  uVar6 = (ulong)((uVar14 & 0x200) == 0);
  fVar22 = (float)((uint)uVar14 & 0x1ff) * 0.0013837706 * *(float *)(&g_data_00d1d580 + uVar6 * 4);
  pfVar15[1] = fVar22;
  fVar21 = fVar22 * fVar22 + fVar21;
  if ((uVar7 & 3) == 0) {
    fVar21 = 1.0 - fVar21;
    if (fVar21 < 0.0) {
      fVar21 = sqrtf(fVar21);
      uVar6 = extraout_RAX_00;
    }
    else {
      fVar21 = SQRT(fVar21);
    }
    *pfVar15 = fVar21;
    return (int32_t)uVar6;
  }
  uVar14 = uVar14 >> 10;
label_0448c3b4:
  uVar7 = (ulong)((uVar14 & 0x200) == 0);
  fVar22 = (float)((uint)uVar14 & 0x1ff) * 0.0013837706 * *(float *)(&g_data_00d1d580 + uVar7 * 4);
  *pfVar15 = fVar22;
  fVar21 = 1.0 - (fVar22 * fVar22 + fVar21);
  if (fVar21 < 0.0) {
    fVar21 = sqrtf(fVar21);
    uVar7 = extraout_RAX;
  }
  else {
    fVar21 = SQRT(fVar21);
  }
  iVar3 = (int32_t)uVar7;
  if (uVar10 == 1) {
    pfVar15[1] = fVar21;
    return iVar3;
  }
  if (uVar10 != 2) {
    pfVar15[3] = fVar21;
    return iVar3;
  }
  pfVar15[2] = fVar21;
  return iVar3;
}


// Utility.QuaternionCompression$$DecompressQuaternion
// il2cpp: void Utility_QuaternionCompression__DecompressQuaternion (UnityEngine_Quaternion_o* quaternion, int32_t rawCompressed, const MethodInfo* method);
// 0x448c2c0

void Utility_QuaternionCompression__DecompressQuaternion
               (UnityEngine_Quaternion_o *quaternion,int32_t rawCompressed,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = (uint)rawCompressed >> 0x1e;
  fVar2 = 0.0;
  if (uVar1 == 3) {
label_0448c320:
    fVar3 = (float)(rawCompressed & 0x1ff) * 0.0013837706 *
            *(float *)(&g_data_00d1d580 + (ulong)((rawCompressed & 0x200U) == 0) * 4);
    (quaternion->fields).z = fVar3;
    fVar2 = fVar3 * fVar3 + fVar2;
    rawCompressed = (uint)rawCompressed >> 10;
    if (uVar1 == 1) goto label_0448c3b4;
  }
  else {
    fVar2 = (float)(rawCompressed & 0x1ff) * 0.0013837706 *
            *(float *)(&g_data_00d1d580 + (ulong)((rawCompressed & 0x200U) == 0) * 4);
    (quaternion->fields).w = fVar2;
    fVar2 = fVar2 * fVar2 + 0.0;
    rawCompressed = (uint)rawCompressed >> 10;
    if (uVar1 != 2) goto label_0448c320;
  }
  fVar3 = (float)(rawCompressed & 0x1ff) * 0.0013837706 *
          *(float *)(&g_data_00d1d580 + (ulong)((rawCompressed & 0x200U) == 0) * 4);
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
label_0448c3b4:
  fVar3 = (float)(rawCompressed & 0x1ff) * 0.0013837706 *
          *(float *)(&g_data_00d1d580 + (ulong)((rawCompressed & 0x200U) == 0) * 4);
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
// 0x448c470

void Utility_QuaternionCompression___cctor(MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (g_data_057ae8e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuaternionCompression);
    g_data_057ae8e2 = '\x01';
  }
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  uVar2 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  puVar1 = *(undefined8 **)(TypeInfo_QuaternionCompression + 0xb8);
  *puVar1 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  puVar1[1] = uVar2;
  return;
}


