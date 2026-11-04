// Type: TextureScaler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/TextureScaler.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/TextureScaler.cs
// --------------------------------

// TextureScaler.ThreadData$$.ctor
// il2cpp: void TextureScaler_ThreadData___ctor (TextureScaler_ThreadData_o* __this, UnityEngine_Color_array* texColors, UnityEngine_Color_array* newColors, int32_t texWidth, int32_t texHeight, int32_t newWidth, int32_t newHeight, const MethodInfo* method);
// 0x181daf3e0

void TextureScaler_ThreadData___ctor
               (TextureScaler_ThreadData_o *__this,UnityEngine_Color_array *texColors,
               UnityEngine_Color_array *newColors,int32_t texWidth,int32_t texHeight,int32_t newWidth,
               int32_t newHeight,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).TexColors = texColors;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TexColors,texColors);
  (__this->fields).NewColors = newColors;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NewColors,newColors);
  (__this->fields).TexHeight = texHeight;
  (__this->fields).NewWidth = newWidth;
  (__this->fields).NewHeight = newHeight;
  (__this->fields).TexWidth = texWidth;
  return;
}


// TextureScaler.<Scale>d__1$$.ctor
// il2cpp: void TextureScaler__Scale_d__1___ctor (TextureScaler__Scale_d__1_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
TextureScaler__Scale_d__1___ctor(TextureScaler__Scale_d__1_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// TextureScaler.<Scale>d__1$$System.IDisposable.Dispose
// il2cpp: void TextureScaler__Scale_d__1__System_IDisposable_Dispose (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x180547020

void
TextureScaler__Scale_d__1__System_IDisposable_Dispose(TextureScaler__Scale_d__1_o* __this, MethodInfo* method)

{
  return;
}


// TextureScaler.<Scale>d__1$$MoveNext
// il2cpp: bool TextureScaler__Scale_d__1__MoveNext (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x181db0790
// asm: 15 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db0a23: mov rdx, qword ptr [rbp + 0x30]
// asm:   0x181db0a27: xor r8d, r8d
// asm:   0x181db0a2a: call 0x182efbb10  ; UnityEngine_Texture2D__SetPixels()
// asm:   0x181db0a2f: mov rcx, qword ptr [rip + 0x22e5e3a]  ; TypeInfo_UnityEngine_WaitForEndOfFrame
// asm:   0x181db0a36: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181db0a3b: xor edx, edx
// asm:   0x181db0a3d: mov rcx, rax
// asm:   0x181db0a40: mov rbx, rax
// asm:   0x181db0a43: call 0x18054c890  ; ClothFactory___c___ctor()
// asm:   0x181db0a48: lea rcx, [rbp + 0x18]
// asm:   0x181db0a4c: mov qword ptr [rbp + 0x18], rbx
// asm:   0x181db0a50: mov rdx, rbx
// asm:   0x181db0a53: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x181db0a58: mov dword ptr [rbp + 0x10], 2
// asm:   0x181db0a5f: jmp 0x181db09e1

bool TextureScaler__Scale_d__1__MoveNext(TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_Texture2D_o *pUVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  UnityEngine_Color_array *value;
  UnityEngine_Color_array *pUVar8;
  TextureScaler_ThreadData_o *parameter;
  System_Threading_ParameterizedThreadStart_o *__this_00;
  System_Threading_Thread_o *pSVar9;
  Il2CppObject *pIVar10;
  
  if (Il2CppMethodInitialized_1843448ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_ParameterizedThreadStart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_TextureScaler_BilinearScale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TextureScaler_ThreadData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Thread);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_1843448ab = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    pUVar4 = (__this->fields).tex;
    (__this->fields).__1__state = -1;
    if (pUVar4 == (UnityEngine_Texture2D_o *)0x0) goto label_181db0a61;
    value = UnityEngine_Texture2D__GetPixels_2efa540(pUVar4,(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_Color_array *)
             SZArrayNew(TypeInfo_UnityEngine_Color_array,
                        (__this->fields).newHeight * (__this->fields).newWidth);
    (__this->fields)._newColors_5__2 = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._newColors_5__2,pUVar8);
    pUVar4 = (__this->fields).tex;
    if (pUVar4 == (UnityEngine_Texture2D_o *)0x0) goto label_181db0a61;
    pUVar8 = (__this->fields)._newColors_5__2;
    iVar6 = (*(pUVar4->klass->vtable)._5_get_width.methodPtr)
                      (pUVar4,(pUVar4->klass->vtable)._5_get_width.method);
    pUVar4 = (__this->fields).tex;
    if (pUVar4 == (UnityEngine_Texture2D_o *)0x0) goto label_181db0a61;
    iVar7 = (*(pUVar4->klass->vtable)._7_get_height.methodPtr)
                      (pUVar4,(pUVar4->klass->vtable)._7_get_height.method);
    iVar2 = (__this->fields).newWidth;
    iVar3 = (__this->fields).newHeight;
    parameter = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TextureScaler_ThreadData);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)parameter,(MethodInfo *)0x0);
    (parameter->fields).TexColors = value;
    Il2CppCodeGenWriteBarrier(&(parameter->fields).TexColors,value);
    (parameter->fields).NewColors = pUVar8;
    Il2CppCodeGenWriteBarrier(&(parameter->fields).NewColors,pUVar8);
    (parameter->fields).TexWidth = iVar6;
    (parameter->fields).TexHeight = iVar7;
    (parameter->fields).NewWidth = iVar2;
    (parameter->fields).NewHeight = iVar3;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Threading_ParameterizedThreadStart);
    System_Threading_ParameterizedThreadStart___ctor
              ((UnityEngine_Windows_WebCam_VideoCapture_OnVideoCaptureResourceCreatedCallback_o *)__this_00,
               (Il2CppObject *)0x0,(intptr_t)MethodInfo_TextureScaler_BilinearScale,(MethodInfo *)0x0);
    pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Threading_Thread);
    System_Threading_Thread___ctor_1bc3060(pSVar9,__this_00,(MethodInfo *)0x0);
    (__this->fields)._thread_5__3 = pSVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._thread_5__3,pSVar9);
    pSVar9 = (__this->fields)._thread_5__3;
    if (pSVar9 == (System_Threading_Thread_o *)0x0) goto label_181db0a61;
    System_Threading_Thread__Start_1bc2d40(pSVar9,(Il2CppObject *)parameter,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        pUVar4 = (__this->fields).tex;
        (__this->fields).__1__state = -1;
        if (pUVar4 == (UnityEngine_Texture2D_o *)0x0) goto label_181db0a61;
        UnityEngine_Texture2D__Apply_2ef9fd0(pUVar4,(MethodInfo *)0x0);
      }
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  pSVar9 = (__this->fields)._thread_5__3;
  if (pSVar9 != (System_Threading_Thread_o *)0x0) {
    bVar5 = System_Threading_Thread__get_IsAlive(pSVar9,(MethodInfo *)0x0);
    if (bVar5) {
      pIVar10 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar10,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
      (__this->fields).__1__state = 1;
      return true;
    }
    pUVar4 = (__this->fields).tex;
    if (pUVar4 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Reinitialize
                (pUVar4,(__this->fields).newWidth,(__this->fields).newHeight,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).tex;
      if (pUVar4 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__SetPixels_2efbb10(pUVar4,(__this->fields)._newColors_5__2,(MethodInfo *)0x0);
        pIVar10 = (Il2CppObject *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar10,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar10;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
        (__this->fields).__1__state = 2;
        return true;
      }
    }
  }
label_181db0a61:
  ThrowNullReferenceException();
}


// TextureScaler.<Scale>d__1$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* TextureScaler__Scale_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
TextureScaler__Scale_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current(TextureScaler__Scale_d__1_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// TextureScaler.<Scale>d__1$$System.Collections.IEnumerator.Reset
// il2cpp: void TextureScaler__Scale_d__1__System_Collections_IEnumerator_Reset (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x181db0a70

void TextureScaler__Scale_d__1__System_Collections_IEnumerator_Reset
               (TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_TextureScaler_Scale_d__1_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// TextureScaler.<Scale>d__1$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* TextureScaler__Scale_d__1__System_Collections_IEnumerator_get_Current (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
TextureScaler__Scale_d__1__System_Collections_IEnumerator_get_Current(TextureScaler__Scale_d__1_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// TextureScaler$$Scale
// il2cpp: System_Collections_IEnumerator_o* TextureScaler__Scale (UnityEngine_Texture2D_o* tex, int32_t newWidth, int32_t newHeight, const MethodInfo* method);
// 0x181daf370

System_Collections_IEnumerator_o *
TextureScaler__Scale(UnityEngine_Texture2D_o *tex,int32_t newWidth,int32_t newHeight,MethodInfo *method)

{
  TextureScaler__Scale_d__1_o *__this;
  
  if (Il2CppMethodInitialized_1843448a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TextureScaler_Scale_d__1);
    Il2CppMethodInitialized_1843448a8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TextureScaler_Scale_d__1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).tex = tex;
  Il2CppCodeGenWriteBarrier(&(__this->fields).tex,tex);
  (__this->fields).newWidth = newWidth;
  (__this->fields).newHeight = newHeight;
  return (System_Collections_IEnumerator_o *)__this;
}


// TextureScaler$$ScaleBlocking
// il2cpp: void TextureScaler__ScaleBlocking (UnityEngine_Texture2D_o* tex, int32_t newWidth, int32_t newHeight, const MethodInfo* method);
// 0x181daf190

void TextureScaler__ScaleBlocking
               (UnityEngine_Texture2D_o *tex,int32_t newWidth,int32_t newHeight,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_Color_array *value;
  UnityEngine_Color_array *colors;
  TextureScaler_ThreadData_o *parameter;
  System_Threading_ParameterizedThreadStart_o *__this;
  System_Threading_Thread_o *__this_00;
  
  if (Il2CppMethodInitialized_1843448a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_ParameterizedThreadStart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_TextureScaler_BilinearScale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TextureScaler_ThreadData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Thread);
    Il2CppMethodInitialized_1843448a9 = '\x01';
  }
  if (tex != (UnityEngine_Texture2D_o *)0x0) {
    value = UnityEngine_Texture2D__GetPixels_2efa540(tex,(MethodInfo *)0x0);
    colors = (UnityEngine_Color_array *)SZArrayNew(TypeInfo_UnityEngine_Color_array,newWidth * newHeight);
    iVar2 = (*(tex->klass->vtable)._5_get_width.methodPtr)(tex,(tex->klass->vtable)._5_get_width.method);
    iVar3 = (*(tex->klass->vtable)._7_get_height.methodPtr)(tex,(tex->klass->vtable)._7_get_height.method);
    parameter = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TextureScaler_ThreadData);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)parameter,(MethodInfo *)0x0);
    (parameter->fields).TexColors = value;
    Il2CppCodeGenWriteBarrier(&(parameter->fields).TexColors,value);
    (parameter->fields).NewColors = colors;
    Il2CppCodeGenWriteBarrier(&(parameter->fields).NewColors,colors);
    (parameter->fields).TexWidth = iVar2;
    (parameter->fields).TexHeight = iVar3;
    (parameter->fields).NewWidth = newWidth;
    (parameter->fields).NewHeight = newHeight;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Threading_ParameterizedThreadStart);
    System_Threading_ParameterizedThreadStart___ctor
              ((UnityEngine_Windows_WebCam_VideoCapture_OnVideoCaptureResourceCreatedCallback_o *)__this,
               (Il2CppObject *)0x0,(intptr_t)MethodInfo_TextureScaler_BilinearScale,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Threading_Thread);
    System_Threading_Thread___ctor_1bc3060(__this_00,__this,(MethodInfo *)0x0);
    if (__this_00 != (System_Threading_Thread_o *)0x0) {
      System_Threading_Thread__Start_1bc2d40(__this_00,(Il2CppObject *)parameter,(MethodInfo *)0x0);
      while( true ) {
        bVar1 = System_Threading_Thread__get_IsAlive(__this_00,(MethodInfo *)0x0);
        if (!bVar1) break;
        System_Threading_Thread__Sleep(1,(MethodInfo *)0x0);
      }
      UnityEngine_Texture2D__Reinitialize(tex,newWidth,newHeight,(MethodInfo *)0x0);
      UnityEngine_Texture2D__SetPixels_2efbb10(tex,colors,(MethodInfo *)0x0);
      UnityEngine_Texture2D__Apply_2ef9fd0(tex,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// TextureScaler$$BilinearScale
// il2cpp: void TextureScaler__BilinearScale (Il2CppObject* obj, const MethodInfo* method);
// 0x181daed30

void TextureScaler__BilinearScale(Il2CppObject *obj,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  Il2CppClass *pIVar14;
  void *pvVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if (Il2CppMethodInitialized_1843448aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TextureScaler_ThreadData);
    Il2CppMethodInitialized_1843448aa = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    bVar11 = (TypeInfo_TextureScaler_ThreadData->_2).typeHierarchyDepth;
    if (((obj->klass->_2).typeHierarchyDepth < bVar11) ||
       ((obj->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
        (Il2CppClass *)TypeInfo_TextureScaler_ThreadData)) {
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
    iVar22 = 0;
    iVar12 = *(int *)&obj[2].klass;
    iVar13 = *(int *)&obj[2].monitor;
    fVar29 = 1.0 / ((float)*(int *)&obj[2].monitor / (float)(*(int *)&obj[2].klass + -1));
    fVar30 = 1.0 / ((float)*(int *)((longlong)&obj[2].monitor + 4) /
                   (float)(*(int *)((longlong)&obj[2].klass + 4) + -1));
    do {
      if (*(int *)((longlong)&obj[2].monitor + 4) <= iVar22) {
        return;
      }
      fVar23 = (float)il2cpp_runtime_helper_1804f4110((float)iVar22 * fVar30);
      iVar21 = (int)fVar23;
      iVar20 = iVar21 * iVar12;
      iVar19 = (iVar21 + 1) * iVar12;
      iVar18 = 0;
      if (0 < iVar13) {
        do {
          fVar23 = (float)il2cpp_runtime_helper_1804f4110((float)iVar18 * fVar29);
          pIVar14 = obj[1].klass;
          iVar17 = (int)fVar23;
          if (pIVar14 == (Il2CppClass *)0x0) goto label_181daf113;
          uVar3 = iVar17 + iVar20;
          if (*(uint *)&(pIVar14->_1).namespaze <= uVar3) {
label_181daf104:
            ThrowIndexOutOfRangeException();
          }
          iVar1 = iVar17 + iVar20;
          if (*(uint *)&(pIVar14->_1).namespaze <= iVar1 + 1U) goto label_181daf104;
          fVar25 = (float)iVar18 * fVar29 - (float)iVar17;
          fVar23 = *(float *)&(&(pIVar14->_1).byval_arg)[(int)uVar3].data;
          fVar26 = *(float *)((longlong)&(&(pIVar14->_1).byval_arg)[(int)uVar3].data + 4);
          uVar2 = iVar17 + iVar19;
          fVar27 = (float)(&(pIVar14->_1).byval_arg)[(int)uVar3].bits;
          fVar28 = *(float *)&(&(pIVar14->_1).byval_arg)[(int)uVar3].field_0xc;
          fVar23 = (*(float *)&(&(pIVar14->_1).this_arg)[iVar1].data - fVar23) * fVar25 + fVar23;
          fVar26 = (*(float *)((longlong)&(&(pIVar14->_1).this_arg)[iVar1].data + 4) - fVar26) * fVar25 +
                   fVar26;
          fVar27 = ((float)(&(pIVar14->_1).this_arg)[iVar1].bits - fVar27) * fVar25 + fVar27;
          fVar28 = (*(float *)&(&(pIVar14->_1).this_arg)[iVar1].field_0xc - fVar28) * fVar25 + fVar28;
          if (*(uint *)&(pIVar14->_1).namespaze <= uVar2) goto label_181daf104;
          iVar17 = iVar17 + iVar19;
          if (*(uint *)&(pIVar14->_1).namespaze <= iVar17 + 1U) goto label_181daf104;
          pvVar15 = obj[1].monitor;
          fVar4 = *(float *)&(&(pIVar14->_1).byval_arg)[(int)uVar2].data;
          fVar5 = *(float *)((longlong)&(&(pIVar14->_1).byval_arg)[(int)uVar2].data + 4);
          fVar6 = (float)(&(pIVar14->_1).byval_arg)[(int)uVar2].bits;
          fVar7 = *(float *)&(&(pIVar14->_1).byval_arg)[(int)uVar2].field_0xc;
          fVar24 = (float)iVar22 * fVar30 - (float)iVar21;
          fVar8 = *(float *)((longlong)&(&(pIVar14->_1).this_arg)[iVar17].data + 4);
          fVar9 = (float)(&(pIVar14->_1).this_arg)[iVar17].bits;
          fVar10 = *(float *)&(&(pIVar14->_1).this_arg)[iVar17].field_0xc;
          if (pvVar15 == (void *)0x0) goto label_181daf113;
          uVar3 = iVar18 + iVar22 * iVar13;
          if (*(uint *)((longlong)pvVar15 + 0x18) <= uVar3) goto label_181daf104;
          lVar16 = (longlong)(int)uVar3;
          iVar18 = iVar18 + 1;
          *(float *)((longlong)pvVar15 + lVar16 * 0x10 + 0x20) =
               (((*(float *)&(&(pIVar14->_1).this_arg)[iVar17].data - fVar4) * fVar25 + fVar4) - fVar23) *
               fVar24 + fVar23;
          *(float *)((longlong)pvVar15 + lVar16 * 0x10 + 0x24) =
               (((fVar8 - fVar5) * fVar25 + fVar5) - fVar26) * fVar24 + fVar26;
          *(float *)((longlong)pvVar15 + lVar16 * 0x10 + 0x28) =
               (((fVar9 - fVar6) * fVar25 + fVar6) - fVar27) * fVar24 + fVar27;
          *(float *)((longlong)pvVar15 + lVar16 * 0x10 + 0x2c) =
               (((fVar10 - fVar7) * fVar25 + fVar7) - fVar28) * fVar24 + fVar28;
        } while (iVar18 < iVar13);
      }
      iVar22 = iVar22 + 1;
    } while( true );
  }
label_181daf113:
  ThrowNullReferenceException();
}


// TextureScaler$$ColorLerpUnclamped
// il2cpp: UnityEngine_Color_o TextureScaler__ColorLerpUnclamped (UnityEngine_Color_o c1, UnityEngine_Color_o c2, float value, const MethodInfo* method);
// 0x181daf120

UnityEngine_Color_o
TextureScaler__ColorLerpUnclamped_1daf120(UnityEngine_Color_o c1, UnityEngine_Color_o c2, float value, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (end->fields).y;
  fVar2 = (start->fields).y;
  fVar3 = (start->fields).y;
  (__return_storage_ptr__->fields).x = ((end->fields).x - (start->fields).x) * t + (start->fields).x;
  fVar4 = (end->fields).z;
  fVar5 = (start->fields).z;
  (__return_storage_ptr__->fields).y = (fVar1 - fVar2) * t + fVar3;
  fVar1 = (end->fields).w;
  fVar2 = (start->fields).w;
  fVar3 = (start->fields).w;
  (__return_storage_ptr__->fields).z = (fVar4 - fVar5) * t + (start->fields).z;
  (__return_storage_ptr__->fields).w = (fVar1 - fVar2) * t + fVar3;
  return __return_storage_ptr__;
}


// TextureScaler$$.ctor
// il2cpp: void TextureScaler___ctor (TextureScaler_o* __this, const MethodInfo* method);
// 0x18054c890

void
TextureScaler___ctor(TextureScaler_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


