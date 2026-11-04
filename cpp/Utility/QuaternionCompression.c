// Type: Utility.QuaternionCompression
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/QuaternionCompression.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/QuaternionCompression.cs
// --------------------------------

// Utility.QuaternionCompression$$CompressQuaternion
// il2cpp: int32_t Utility_QuaternionCompression__CompressQuaternion (UnityEngine_Quaternion_o* quaternion, const MethodInfo* method);
// 0x18233e1e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233e35d: nop dword ptr [rax]
// asm:   0x18233e383: jmp 0x18233e388
// asm:   0x18233e5ed: jmp 0x18233e65e
// asm:   0x18233e5ef: mov edx, ebx

int32_t Utility_QuaternionCompression__CompressQuaternion
                  (UnityEngine_Quaternion_o *quaternion,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  int32_t index;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_184347813 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_184347813 = '\x01';
  }
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
  }
  (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.x =
       ABS((quaternion->fields).x);
  (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.y =
       ABS((quaternion->fields).y);
  (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.z =
       ABS((quaternion->fields).z);
  (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.w =
       ABS((quaternion->fields).w);
  pIVar1 = SZArrayNew(TypeInfo_float_array,4);
  if (pIVar1 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((((*(int *)&pIVar1[1].monitor == 0) ||
       (*(float *)&pIVar1[2].klass =
             (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.x,
       *(uint *)&pIVar1[1].monitor < 2)) ||
      (*(float *)((longlong)&pIVar1[2].klass + 4) =
            (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.y,
      *(uint *)&pIVar1[1].monitor < 3)) ||
     (*(float *)&pIVar1[2].monitor =
           (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.z,
     *(uint *)&pIVar1[1].monitor < 4)) {
label_18233e6a8:
    ThrowIndexOutOfRangeException();
  }
  *(float *)((longlong)&pIVar1[2].monitor + 4) =
       (TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.w;
  uVar4 = *(uint *)&pIVar1[1].monitor;
  if (uVar4 == 0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = *(float *)&pIVar1[2].klass;
    uVar2 = 1;
    bVar8 = 1 < uVar4;
    if (1 < (int)uVar4) {
      do {
        if (!bVar8) goto label_18233e6a8;
        if (fVar9 < *(float *)((longlong)&pIVar1[2].klass + (ulonglong)uVar2 * 4)) {
          fVar9 = *(float *)((longlong)&pIVar1[2].klass + (ulonglong)uVar2 * 4);
        }
        uVar2 = uVar2 + 1;
        bVar8 = uVar2 < uVar4;
      } while ((int)uVar2 < (int)uVar4);
    }
  }
  uVar4 = 2;
  if ((TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.x == fVar9) {
    sVar3 = 0;
    index = 0;
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
    }
    if ((TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.y == fVar9) {
      sVar3 = 1;
      index = 1;
      uVar4 = 1;
      uVar2 = 0x400;
    }
    else {
      if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
      }
      if ((TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues).fields.z == fVar9) {
        sVar3 = 2;
        index = 2;
        uVar2 = 0x800;
      }
      else {
        sVar3 = 3;
        index = 3;
        uVar4 = 3;
        uVar2 = 0xc00;
      }
    }
  }
  fVar9 = UnityEngine_Quaternion__get_Item(quaternion,index,(MethodInfo *)0x0);
  if (0.0 <= fVar9) {
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = 0x200;
    uVar7 = 0x200;
    uVar5 = 0x200;
  }
  if (sVar3 == 0) {
label_18233e509:
    fVar9 = UnityEngine_Quaternion__get_Item(quaternion,1,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
    }
    fVar10 = UnityEngine_Quaternion__get_Item
                       (&TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues,1,
                        (MethodInfo *)0x0);
    fVar10 = (float)il2cpp_runtime_helper_180012930(fVar10 * 722.66315);
    uVar2 = 0x200;
    if (0.0 <= fVar9) {
      uVar2 = 0;
    }
    uVar4 = uVar2 ^ uVar7 | (int)fVar10 & 0xffffU | uVar4 << 10;
    if (sVar3 == 2) goto label_18233e5f1;
  }
  else {
    fVar9 = UnityEngine_Quaternion__get_Item(quaternion,0,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
    }
    fVar10 = UnityEngine_Quaternion__get_Item
                       (&TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues,0,
                        (MethodInfo *)0x0);
    fVar10 = (float)il2cpp_runtime_helper_180012930(fVar10 * 722.66315);
    uVar4 = 0x200;
    if (0.0 <= fVar9) {
      uVar4 = 0;
    }
    uVar4 = uVar4 ^ uVar6 | (int)fVar10 & 0xffffU | uVar2;
    if (sVar3 != 1) goto label_18233e509;
  }
  fVar9 = UnityEngine_Quaternion__get_Item(quaternion,2,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
  }
  fVar10 = UnityEngine_Quaternion__get_Item
                     (&TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues,2,
                      (MethodInfo *)0x0);
  fVar10 = (float)il2cpp_runtime_helper_180012930(fVar10 * 722.66315);
  uVar2 = 0x200;
  if (0.0 <= fVar9) {
    uVar2 = 0;
  }
  uVar4 = uVar2 ^ uVar7 | (int)fVar10 & 0xffffU | uVar4 << 10;
  if (sVar3 == 3) {
    return uVar4;
  }
label_18233e5f1:
  fVar9 = UnityEngine_Quaternion__get_Item(quaternion,3,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
  }
  fVar10 = UnityEngine_Quaternion__get_Item
                     (&TypeInfo_Utility_QuaternionCompression->static_fields->s_QuatAbsValues,3,
                      (MethodInfo *)0x0);
  fVar10 = (float)il2cpp_runtime_helper_180012930(fVar10 * 722.66315);
  uVar2 = 0x200;
  if (0.0 <= fVar9) {
    uVar2 = 0;
  }
  return uVar2 ^ uVar5 | (int)fVar10 & 0xffffU | uVar4 << 10;
}


// Utility.QuaternionCompression$$DecompressQuaternion
// il2cpp: void Utility_QuaternionCompression__DecompressQuaternion (UnityEngine_Quaternion_o* quaternion, int32_t rawCompressed, const MethodInfo* method);
// 0x18208d520

void Utility_QuaternionCompression__DecompressQuaternion
               (UnityEngine_Quaternion_o *quaternion,int32_t rawCompressed,MethodInfo *method)

{
  uint index;
  uint index_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  index = 3;
  fVar3 = 0.0;
  index_00 = (uint)rawCompressed >> 0x1e;
  do {
    if (index != index_00) {
      if ((rawCompressed & 0x200U) == 0) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = -1.0;
      }
      UnityEngine_Quaternion__set_Item
                (quaternion,index,(float)(rawCompressed & 0x1ff) * 0.0013837706 * fVar2,(MethodInfo *)0x0);
      fVar2 = UnityEngine_Quaternion__get_Item(quaternion,index,(MethodInfo *)0x0);
      fVar1 = UnityEngine_Quaternion__get_Item(quaternion,index,(MethodInfo *)0x0);
      rawCompressed = (uint)rawCompressed >> 10;
      fVar3 = fVar3 + fVar1 * fVar2;
    }
    index = index - 1;
  } while (-1 < (int)index);
  fVar3 = 1.0 - fVar3;
  if (fVar3 < 0.0) {
    fVar3 = (float)il2cpp_runtime_helper_1804fa7a0(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  UnityEngine_Quaternion__set_Item(quaternion,index_00,fVar3,(MethodInfo *)0x0);
  return;
}


// Utility.QuaternionCompression$$.cctor
// il2cpp: void Utility_QuaternionCompression___cctor (const MethodInfo* method);
// 0x18233e6b0

void Utility_QuaternionCompression___cctor(MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  Utility_QuaternionCompression_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184347814 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    Il2CppMethodInitialized_184347814 = '\x01';
  }
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
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


