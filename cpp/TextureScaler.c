// Type: TextureScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/TextureScaler.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/TextureScaler.cs
// --------------------------------

// TextureScaler.ThreadData$$.ctor
// il2cpp: void TextureScaler_ThreadData___ctor (TextureScaler_ThreadData_o* __this, UnityEngine_Color_array* texColors, UnityEngine_Color_array* newColors, int32_t texWidth, int32_t texHeight, int32_t newWidth, int32_t newHeight, const MethodInfo* method);
// 0x5845700

void TextureScaler_ThreadData___ctor
               (TextureScaler_ThreadData_o *__this,UnityEngine_Color_array *texColors,
               UnityEngine_Color_array *newColors,int32_t texWidth,int32_t texHeight,int32_t newWidth,
               int32_t newHeight,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).TexColors = texColors;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TexColors);
  (__this->fields).NewColors = newColors;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NewColors);
  (__this->fields).TexWidth = texWidth;
  (__this->fields).TexHeight = texHeight;
  (__this->fields).NewWidth = newWidth;
  (__this->fields).NewHeight = newHeight;
  return;
}


// TextureScaler.<Scale>d__1$$.ctor
// il2cpp: void TextureScaler__Scale_d__1___ctor (TextureScaler__Scale_d__1_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5845500

void TextureScaler__Scale_d__1___ctor
               (TextureScaler__Scale_d__1_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// TextureScaler.<Scale>d__1$$System.IDisposable.Dispose
// il2cpp: void TextureScaler__Scale_d__1__System_IDisposable_Dispose (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x5845a70

void TextureScaler__Scale_d__1__System_IDisposable_Dispose
               (TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  return;
}


// TextureScaler.<Scale>d__1$$MoveNext
// il2cpp: bool TextureScaler__Scale_d__1__MoveNext (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x5845a80

bool TextureScaler__Scale_d__1__MoveNext(TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Texture2D_o *pUVar2;
  int32_t iVar3;
  int32_t iVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  UnityEngine_Color_array *pUVar8;
  UnityEngine_Color_array *pUVar9;
  TextureScaler_ThreadData_o *__this_00;
  System_Threading_ParameterizedThreadStart_o *__this_01;
  System_Threading_Thread_o *pSVar10;
  Il2CppObject *pIVar11;
  
  if (Il2CppMethodInitialized_07544ffc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_ParameterizedThreadStart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_TextureScaler_BilinearScale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TextureScaler_ThreadData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Thread);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07544ffc = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    pUVar2 = (__this->fields).tex;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto label_05845d35;
    bVar5 = false;
    UnityEngine_Texture2D__Apply_68f05d0(pUVar2,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      (__this->fields).__1__state = -1;
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto label_05845d35;
      pUVar8 = UnityEngine_Texture2D__GetPixels_68f0940(pUVar2,(MethodInfo *)0x0);
      pUVar9 = (UnityEngine_Color_array *)
               SZArrayNew(TypeInfo_UnityEngine_Color_array,
                          (__this->fields).newHeight * (__this->fields).newWidth);
      (__this->fields)._newColors_5__2 = pUVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._newColors_5__2);
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto label_05845d35;
      pUVar9 = (__this->fields)._newColors_5__2;
      iVar6 = (*(pUVar2->klass->vtable)._5_get_width.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._5_get_width.method);
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto label_05845d35;
      iVar7 = (*(pUVar2->klass->vtable)._7_get_height.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._7_get_height.method);
      iVar3 = (__this->fields).newWidth;
      iVar4 = (__this->fields).newHeight;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TextureScaler_ThreadData);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).TexColors = pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).TexColors);
      (__this_00->fields).NewColors = pUVar9;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).NewColors);
      (__this_00->fields).TexWidth = iVar6;
      (__this_00->fields).TexHeight = iVar7;
      (__this_00->fields).NewWidth = iVar3;
      (__this_00->fields).NewHeight = iVar4;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Threading_ParameterizedThreadStart)
      ;
      System_Threading_ParameterizedThreadStart___ctor
                (__this_01,(Il2CppObject *)0x0,(intptr_t)MethodInfo_TextureScaler_BilinearScale,
                 (MethodInfo *)0x0);
      pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Threading_Thread);
      System_Threading_Thread___ctor_5538bd0(pSVar10,__this_01,(MethodInfo *)0x0);
      (__this->fields)._thread_5__3 = pSVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._thread_5__3);
      pSVar10 = (__this->fields)._thread_5__3;
      if (pSVar10 == (System_Threading_Thread_o *)0x0) goto label_05845d35;
      System_Threading_Thread__Start_5538e00(pSVar10,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
    }
    pSVar10 = (__this->fields)._thread_5__3;
    if (pSVar10 == (System_Threading_Thread_o *)0x0) goto label_05845d35;
    bVar5 = System_Threading_Thread__get_IsAlive(pSVar10,(MethodInfo *)0x0);
    if (bVar5) {
      pIVar11 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar11,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar11;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
    }
    else {
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) {
label_05845d35:
        ThrowNullReferenceException();
      }
      UnityEngine_Texture2D__Reinitialize
                (pUVar2,(__this->fields).newWidth,(__this->fields).newHeight,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto label_05845d35;
      UnityEngine_Texture2D__SetPixels_68f0260(pUVar2,(__this->fields)._newColors_5__2,(MethodInfo *)0x0);
      pIVar11 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar11,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar11;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
    }
    bVar5 = true;
  }
  return bVar5;
}


// TextureScaler.<Scale>d__1$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* TextureScaler__Scale_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x5845d40

Il2CppObject *
TextureScaler__Scale_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// TextureScaler.<Scale>d__1$$System.Collections.IEnumerator.Reset
// il2cpp: void TextureScaler__Scale_d__1__System_Collections_IEnumerator_Reset (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x5845d50

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
// 0x5845d90

Il2CppObject *
TextureScaler__Scale_d__1__System_Collections_IEnumerator_get_Current
          (TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// TextureScaler$$Scale
// il2cpp: System_Collections_IEnumerator_o* TextureScaler__Scale (UnityEngine_Texture2D_o* tex, int32_t newWidth, int32_t newHeight, const MethodInfo* method);
// 0x5845480

System_Collections_IEnumerator_o *
TextureScaler__Scale(UnityEngine_Texture2D_o *tex,int32_t newWidth,int32_t newHeight,MethodInfo *method)

{
  TextureScaler__Scale_d__1_o *__this;
  
  if (Il2CppMethodInitialized_07544ff9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TextureScaler_Scale_d__1);
    Il2CppMethodInitialized_07544ff9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TextureScaler_Scale_d__1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).tex = tex;
  Il2CppCodeGenWriteBarrier(&(__this->fields).tex);
  (__this->fields).newWidth = newWidth;
  (__this->fields).newHeight = newHeight;
  return (System_Collections_IEnumerator_o *)__this;
}


// TextureScaler$$ScaleBlocking
// il2cpp: void TextureScaler__ScaleBlocking (UnityEngine_Texture2D_o* tex, int32_t newWidth, int32_t newHeight, const MethodInfo* method);
// 0x5845520

void TextureScaler__ScaleBlocking
               (UnityEngine_Texture2D_o *tex,int32_t newWidth,int32_t newHeight,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_Color_array *pUVar4;
  UnityEngine_Color_array *colors;
  TextureScaler_ThreadData_o *__this;
  System_Threading_ParameterizedThreadStart_o *__this_00;
  System_Threading_Thread_o *__this_01;
  
  if (Il2CppMethodInitialized_07544ffa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_ParameterizedThreadStart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_TextureScaler_BilinearScale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TextureScaler_ThreadData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Thread);
    Il2CppMethodInitialized_07544ffa = '\x01';
  }
  if (tex != (UnityEngine_Texture2D_o *)0x0) {
    pUVar4 = UnityEngine_Texture2D__GetPixels_68f0940(tex,(MethodInfo *)0x0);
    colors = (UnityEngine_Color_array *)SZArrayNew(TypeInfo_UnityEngine_Color_array,newHeight * newWidth);
    iVar2 = (*(tex->klass->vtable)._5_get_width.methodPtr)(tex,(tex->klass->vtable)._5_get_width.method);
    iVar3 = (*(tex->klass->vtable)._7_get_height.methodPtr)(tex,(tex->klass->vtable)._7_get_height.method);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TextureScaler_ThreadData);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).TexColors = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).TexColors);
    (__this->fields).NewColors = colors;
    Il2CppCodeGenWriteBarrier(&(__this->fields).NewColors);
    (__this->fields).TexWidth = iVar2;
    (__this->fields).TexHeight = iVar3;
    (__this->fields).NewWidth = newWidth;
    (__this->fields).NewHeight = newHeight;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Threading_ParameterizedThreadStart);
    System_Threading_ParameterizedThreadStart___ctor
              (__this_00,(Il2CppObject *)0x0,(intptr_t)MethodInfo_TextureScaler_BilinearScale,
               (MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Threading_Thread);
    System_Threading_Thread___ctor_5538bd0(__this_01,__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_Threading_Thread_o *)0x0) {
      System_Threading_Thread__Start_5538e00(__this_01,(Il2CppObject *)__this,(MethodInfo *)0x0);
      while( true ) {
        bVar1 = System_Threading_Thread__get_IsAlive(__this_01,(MethodInfo *)0x0);
        if (!bVar1) break;
        System_Threading_Thread__Sleep(1,(MethodInfo *)0x0);
      }
      UnityEngine_Texture2D__Reinitialize(tex,newWidth,newHeight,(MethodInfo *)0x0);
      UnityEngine_Texture2D__SetPixels_68f0260(tex,colors,(MethodInfo *)0x0);
      UnityEngine_Texture2D__Apply_68f05d0(tex,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// TextureScaler$$BilinearScale
// il2cpp: void TextureScaler__BilinearScale (Il2CppObject* obj, const MethodInfo* method);
// 0x5845770
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5845849: nop dword ptr [rax]

void TextureScaler__BilinearScale(Il2CppObject *obj,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  MethodInfo *pMVar6;
  Il2CppMethodPointer pIVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  Il2CppClass *pIVar14;
  void *pvVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  if (Il2CppMethodInitialized_07544ffb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TextureScaler_ThreadData);
    Il2CppMethodInitialized_07544ffb = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
label_05845a2b:
    ThrowNullReferenceException();
  }
  bVar8 = (TypeInfo_TextureScaler_ThreadData->_2).typeHierarchyDepth;
  if (((obj->klass->_2).typeHierarchyDepth < bVar8) ||
     ((obj->klass->_2).typeHierarchy[(ulong)bVar8 - 1] != (Il2CppClass *)TypeInfo_TextureScaler_ThreadData)) {
    il2cpp_codegen_raise_invalid_cast_exception(obj);
  }
  iVar9 = *(int *)((long)&obj[2].monitor + 4);
  if ((0 < iVar9) && (uVar10 = *(uint *)&obj[2].monitor, 0 < (int)uVar10)) {
    iVar11 = *(int *)&obj[2].klass;
    iVar12 = *(int *)((long)&obj[2].klass + 4);
    uVar16 = 0;
    lVar18 = 0;
    do {
      lVar20 = (ulong)uVar16 << 0x20;
      fVar22 = (float)(int)lVar18 * (1.0 / ((float)iVar9 / (float)(iVar12 + -1)));
      fVar23 = floorf(fVar22);
      fVar22 = fVar22 - (float)(int)fVar23;
      uVar21 = 0;
      do {
        fVar24 = (float)(int)uVar21 * (1.0 / ((float)(int)uVar10 / (float)(iVar11 + -1)));
        fVar25 = floorf(fVar24);
        pIVar14 = obj[1].klass;
        if (pIVar14 == (Il2CppClass *)0x0) goto label_05845a2b;
        uVar19 = iVar11 * (int)fVar23 + (int)fVar25;
        uVar13 = *(uint *)&(pIVar14->_1).namespaze;
        if ((((uVar13 <= uVar19) || (uVar1 = uVar19 + 1, uVar13 <= uVar1)) ||
            (uVar17 = (int)fVar25 + ((int)fVar23 + 1) * iVar11, uVar13 <= uVar17)) ||
           (uVar2 = uVar17 + 1, uVar13 <= uVar2)) {
label_05845a26:
          ThrowIndexOutOfRangeException();
        }
        pvVar15 = obj[1].monitor;
        if (pvVar15 == (void *)0x0) goto label_05845a2b;
        if ((ulong)*(uint *)((long)pvVar15 + 0x18) <= uVar16 + uVar21) goto label_05845a26;
        fVar24 = fVar24 - (float)(int)fVar25;
        pMVar4 = pIVar14->vtable[(long)(int)uVar19 + -0x12].method;
        pIVar5 = pIVar14->vtable[(long)(int)uVar19 + -0x11].methodPtr;
        pMVar6 = pIVar14->vtable[(long)(int)uVar1 + -0x12].method;
        pIVar7 = pIVar14->vtable[(long)(int)uVar1 + -0x11].methodPtr;
        fVar27 = SUB84(pMVar4,0);
        fVar28 = (float)((ulong)pMVar4 >> 0x20);
        fVar27 = (SUB84(pMVar6,0) - fVar27) * fVar24 + fVar27;
        fVar28 = ((float)((ulong)pMVar6 >> 0x20) - fVar28) * fVar24 + fVar28;
        fVar25 = SUB84(pIVar5,0);
        fVar26 = (float)((ulong)pIVar5 >> 0x20);
        fVar25 = (SUB84(pIVar7,0) - fVar25) * fVar24 + fVar25;
        fVar26 = ((float)((ulong)pIVar7 >> 0x20) - fVar26) * fVar24 + fVar26;
        pMVar4 = pIVar14->vtable[(long)(int)uVar17 + -0x12].method;
        pIVar5 = pIVar14->vtable[(long)(int)uVar17 + -0x11].methodPtr;
        pMVar6 = pIVar14->vtable[(long)(int)uVar2 + -0x12].method;
        pIVar7 = pIVar14->vtable[(long)(int)uVar2 + -0x11].methodPtr;
        fVar29 = SUB84(pMVar4,0);
        fVar30 = (float)((ulong)pMVar4 >> 0x20);
        fVar31 = SUB84(pIVar5,0);
        fVar32 = (float)((ulong)pIVar5 >> 0x20);
        pfVar3 = (float *)((long)pvVar15 + (lVar20 >> 0x1c) + 0x20);
        *pfVar3 = (((SUB84(pMVar6,0) - fVar29) * fVar24 + fVar29) - fVar27) * fVar22 + fVar27;
        pfVar3[1] = ((((float)((ulong)pMVar6 >> 0x20) - fVar30) * fVar24 + fVar30) - fVar28) * fVar22 + fVar28
        ;
        pfVar3[2] = (((SUB84(pIVar7,0) - fVar31) * fVar24 + fVar31) - fVar25) * fVar22 + fVar25;
        pfVar3[3] = ((((float)((ulong)pIVar7 >> 0x20) - fVar32) * fVar24 + fVar32) - fVar26) * fVar22 + fVar26
        ;
        uVar21 = uVar21 + 1;
        lVar20 = lVar20 + 0x100000000;
      } while (uVar10 != uVar21);
      lVar18 = lVar18 + 1;
      uVar16 = uVar10 + uVar16;
    } while (lVar18 < *(int *)((long)&obj[2].monitor + 4));
  }
  return;
}


// TextureScaler$$ColorLerpUnclamped
// il2cpp: UnityEngine_Color_o TextureScaler__ColorLerpUnclamped (UnityEngine_Color_o c1, UnityEngine_Color_o c2, float value, const MethodInfo* method);
// 0x5845a40

UnityEngine_Color_o
TextureScaler__ColorLerpUnclamped
          (UnityEngine_Color_o c1,UnityEngine_Color_o c2,float value,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  UVar1.fields.r = c1.fields.r + value * (c2.fields.r - c1.fields.r);
  UVar1.fields.g = c1.fields.g + value * (c2.fields.g - c1.fields.g);
  UVar1.fields.a = c1.fields.a + value * (c2.fields.a - c1.fields.a);
  UVar1.fields.b = c1.fields.b + value * (c2.fields.b - c1.fields.b);
  return (UnityEngine_Color_o)UVar1.fields;
}


// TextureScaler$$.ctor
// il2cpp: void TextureScaler___ctor (TextureScaler_o* __this, const MethodInfo* method);
// 0x5845a60

void TextureScaler___ctor(TextureScaler_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


