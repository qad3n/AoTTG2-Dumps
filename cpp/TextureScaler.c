// Type: TextureScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/TextureScaler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/TextureScaler.cs  [CHANGED since prior version]
// --------------------------------

// TextureScaler.ThreadData$$.ctor
// il2cpp: void TextureScaler_ThreadData___ctor (TextureScaler_ThreadData_o* __this, UnityEngine_Color_array* texColors, UnityEngine_Color_array* newColors, int32_t texWidth, int32_t texHeight, int32_t newWidth, int32_t newHeight, const MethodInfo* method);
// 0x3d66420

void TextureScaler_ThreadData___ctor
               (TextureScaler_ThreadData_o *__this,UnityEngine_Color_array *texColors,
               UnityEngine_Color_array *newColors,int32_t texWidth,int32_t texHeight,
               int32_t newWidth,int32_t newHeight,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).TexColors = texColors;
  il2cpp_runtime_glue(&__this->fields,texColors);
  (__this->fields).NewColors = newColors;
  il2cpp_runtime_glue(&(__this->fields).NewColors,newColors);
  (__this->fields).TexWidth = texWidth;
  (__this->fields).TexHeight = texHeight;
  (__this->fields).NewWidth = newWidth;
  (__this->fields).NewHeight = newHeight;
  return;
}


// TextureScaler.<Scale>d__1$$.ctor
// il2cpp: void TextureScaler__Scale_d__1___ctor (TextureScaler__Scale_d__1_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d66220

void TextureScaler_<Scale>d__1___ctor
               (TextureScaler__Scale_d__1_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// TextureScaler.<Scale>d__1$$System.IDisposable.Dispose
// il2cpp: void TextureScaler__Scale_d__1__System_IDisposable_Dispose (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x3d667a0

void TextureScaler_<Scale>d__1__System_IDisposable_Dispose
               (TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  return;
}


// TextureScaler.<Scale>d__1$$MoveNext
// il2cpp: bool TextureScaler__Scale_d__1__MoveNext (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x3d667b0

bool_conflict
TextureScaler_<Scale>d__1__MoveNext(TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Texture2D_o *pUVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  UnityEngine_Color_array *pUVar7;
  UnityEngine_Color_array *pUVar8;
  Il2CppObject *pIVar9;
  System_Threading_ParameterizedThreadStart_o *start;
  System_Threading_Thread_o *pSVar10;
  
  if (DAT_057025d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_ParameterizedThreadStart);
    il2cpp_init_method_metadata(&MethodInfo_Void_BilinearScale);
    il2cpp_init_method_metadata(&TypeInfo_ThreadData);
    il2cpp_init_method_metadata(&TypeInfo_Thread);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_057025d2 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    pUVar2 = (__this->fields).tex;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_03d66a6e;
    bVar6 = 0;
    UnityEngine_Texture2D__Apply(pUVar2,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      pSVar10 = (__this->fields)._thread_5__3;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      (__this->fields).__1__state = -1;
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_03d66a6e;
      pUVar7 = UnityEngine_Texture2D__GetPixels(pUVar2,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_Color_array *)
               il2cpp_glue_02274930(TypeInfo_Color,(__this->fields).newHeight * (__this->fields).newWidth);
      (__this->fields)._newColors_5__2 = pUVar8;
      il2cpp_runtime_glue(&(__this->fields)._newColors_5__2,pUVar8);
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_03d66a6e;
      pUVar8 = (__this->fields)._newColors_5__2;
      uVar4 = (*(pUVar2->klass->vtable)._5_get_width.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._5_get_width.method);
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_03d66a6e;
      uVar5 = (*(pUVar2->klass->vtable)._7_get_height.methodPtr)();
      pvVar3 = *(void **)&(__this->fields).newWidth;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ThreadData);
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      pIVar9[1].klass = (Il2CppClass *)pUVar7;
      il2cpp_runtime_glue(pIVar9 + 1,pUVar7);
      pIVar9[1].monitor = pUVar8;
      il2cpp_runtime_glue(&pIVar9[1].monitor,pUVar8);
      *(undefined4 *)&pIVar9[2].klass = uVar4;
      *(undefined4 *)((long)&pIVar9[2].klass + 4) = uVar5;
      pIVar9[2].monitor = pvVar3;
      start = (System_Threading_ParameterizedThreadStart_o *)il2cpp_runtime_glue(TypeInfo_ParameterizedThreadStart);
      System_Threading_ParameterizedThreadStart___ctor();
      pSVar10 = (System_Threading_Thread_o *)il2cpp_runtime_glue(TypeInfo_Thread);
      System_Threading_Thread___ctor(pSVar10,start,(MethodInfo *)0x0);
      (__this->fields)._thread_5__3 = pSVar10;
      il2cpp_runtime_glue(&(__this->fields)._thread_5__3,pSVar10);
      pSVar10 = (__this->fields)._thread_5__3;
      if (pSVar10 == (System_Threading_Thread_o *)0x0) goto LAB_03d66a6e;
      System_Threading_Thread__Start(pSVar10,pIVar9,(MethodInfo *)0x0);
      pSVar10 = (__this->fields)._thread_5__3;
    }
    if (pSVar10 == (System_Threading_Thread_o *)0x0) goto LAB_03d66a6e;
    bVar6 = System_Threading_Thread__get_IsAlive(pSVar10,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) {
LAB_03d66a6e:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_Texture2D__Reinitialize
                (pUVar2,(__this->fields).newWidth,(__this->fields).newHeight,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).tex;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_03d66a6e;
      UnityEngine_Texture2D__SetPixels(pUVar2,(__this->fields)._newColors_5__2,(MethodInfo *)0x0);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar9,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar9;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar9);
      (__this->fields).__1__state = 2;
    }
    else {
      pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar9,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar9;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar9);
      (__this->fields).__1__state = 1;
    }
    bVar6 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  return bVar6;
}


// TextureScaler.<Scale>d__1$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* TextureScaler__Scale_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x3d66a80

Il2CppObject *
TextureScaler_<Scale>d__1__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// TextureScaler.<Scale>d__1$$System.Collections.IEnumerator.Reset
// il2cpp: void TextureScaler__Scale_d__1__System_Collections_IEnumerator_Reset (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x3d66a90

void TextureScaler_<Scale>d__1__System_Collections_IEnumerator_Reset
               (TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// TextureScaler.<Scale>d__1$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* TextureScaler__Scale_d__1__System_Collections_IEnumerator_get_Current (TextureScaler__Scale_d__1_o* __this, const MethodInfo* method);
// 0x3d66ad0

Il2CppObject *
TextureScaler_<Scale>d__1__System_Collections_IEnumerator_get_Current
          (TextureScaler__Scale_d__1_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// TextureScaler$$Scale
// il2cpp: System_Collections_IEnumerator_o* TextureScaler__Scale (UnityEngine_Texture2D_o* tex, int32_t newWidth, int32_t newHeight, const MethodInfo* method);
// 0x3d66190

System_Collections_IEnumerator_o *
TextureScaler__Scale
          (UnityEngine_Texture2D_o *tex,int32_t newWidth,int32_t newHeight,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057025cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Scale_d__1);
    DAT_057025cf = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Scale_d__1);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)tex;
    il2cpp_runtime_glue(__this + 2,tex);
    *(int32_t *)&__this[2].monitor = newWidth;
    *(int32_t *)((long)&__this[2].monitor + 4) = newHeight;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// TextureScaler$$ScaleBlocking
// il2cpp: void TextureScaler__ScaleBlocking (UnityEngine_Texture2D_o* tex, int32_t newWidth, int32_t newHeight, const MethodInfo* method);
// 0x3d66240

void TextureScaler__ScaleBlocking
               (UnityEngine_Texture2D_o *tex,int32_t newWidth,int32_t newHeight,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool_conflict bVar3;
  UnityEngine_Color_array *pUVar4;
  UnityEngine_Color_array *colors;
  Il2CppObject *__this;
  System_Threading_ParameterizedThreadStart_o *start;
  System_Threading_Thread_o *__this_00;
  
  if (DAT_057025d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_ParameterizedThreadStart);
    il2cpp_init_method_metadata(&MethodInfo_Void_BilinearScale);
    il2cpp_init_method_metadata(&TypeInfo_ThreadData);
    il2cpp_init_method_metadata(&TypeInfo_Thread);
    DAT_057025d0 = '\x01';
  }
  if (tex != (UnityEngine_Texture2D_o *)0x0) {
    pUVar4 = UnityEngine_Texture2D__GetPixels(tex,(MethodInfo *)0x0);
    colors = (UnityEngine_Color_array *)il2cpp_glue_02274930(TypeInfo_Color,newHeight * newWidth);
    uVar1 = (*(tex->klass->vtable)._5_get_width.methodPtr)
                      (tex,(tex->klass->vtable)._5_get_width.method);
    uVar2 = (*(tex->klass->vtable)._7_get_height.methodPtr)(tex);
    __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ThreadData);
    System_Object___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = (Il2CppClass *)pUVar4;
    il2cpp_runtime_glue(__this + 1,pUVar4);
    __this[1].monitor = colors;
    il2cpp_runtime_glue(&__this[1].monitor,colors);
    *(undefined4 *)&__this[2].klass = uVar1;
    *(undefined4 *)((long)&__this[2].klass + 4) = uVar2;
    *(int32_t *)&__this[2].monitor = newWidth;
    *(int32_t *)((long)&__this[2].monitor + 4) = newHeight;
    start = (System_Threading_ParameterizedThreadStart_o *)il2cpp_runtime_glue(TypeInfo_ParameterizedThreadStart);
    System_Threading_ParameterizedThreadStart___ctor();
    __this_00 = (System_Threading_Thread_o *)il2cpp_runtime_glue(TypeInfo_Thread);
    System_Threading_Thread___ctor(__this_00,start,(MethodInfo *)0x0);
    if (__this_00 != (System_Threading_Thread_o *)0x0) {
      System_Threading_Thread__Start(__this_00,__this,(MethodInfo *)0x0);
      while( true ) {
        bVar3 = System_Threading_Thread__get_IsAlive(__this_00,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') break;
        System_Threading_Thread__Sleep(1,(MethodInfo *)0x0);
      }
      UnityEngine_Texture2D__Reinitialize(tex,newWidth,newHeight,(MethodInfo *)0x0);
      UnityEngine_Texture2D__SetPixels(tex,colors,(MethodInfo *)0x0);
      UnityEngine_Texture2D__Apply(tex,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// TextureScaler$$BilinearScale
// il2cpp: void TextureScaler__BilinearScale (Il2CppObject* obj, const MethodInfo* method);
// 0x3d66490

void TextureScaler__BilinearScale(Il2CppObject *obj,MethodInfo *method)

{
  uint uVar1;
  float *pfVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  Il2CppClass *pIVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
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
  
  if (DAT_057025d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ThreadData);
    DAT_057025d1 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    bVar6 = (TypeInfo_ThreadData->_2).naturalAligment;
    if (((obj->klass->_2).naturalAligment < bVar6) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_ThreadData)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(obj);
    }
    iVar13 = *(int *)((long)&obj[2].monitor + 4);
    if (0 < iVar13) {
      uVar7 = *(uint *)&obj[2].monitor;
      iVar8 = *(int *)&obj[2].klass;
      iVar9 = *(int *)((long)&obj[2].klass + 4);
      fVar22 = (float)iVar13;
      uVar21 = 0;
      lVar17 = 0;
      do {
        fVar23 = (float)(int)lVar17 * (1.0 / (fVar22 / (float)(iVar9 + -1)));
        fVar24 = floorf(fVar23);
        if (0 < (int)uVar7) {
          lVar19 = (ulong)uVar21 << 0x20;
          iVar13 = (int)fVar24;
          fVar23 = fVar23 - (float)iVar13;
          uVar20 = 0;
          do {
            fVar24 = (float)(int)uVar20 * (1.0 / ((float)(int)uVar7 / (float)(iVar8 + -1)));
            fVar25 = floorf(fVar24);
            pIVar11 = obj[1].klass;
            if (pIVar11 == (Il2CppClass *)0x0) goto LAB_03d66762;
            iVar16 = (int)fVar25;
            uVar18 = iVar8 * iVar13 + iVar16;
            uVar10 = *(uint *)&(pIVar11->_1).namespaze;
            if ((((uVar10 <= uVar18) || (uVar15 = uVar18 + 1, uVar10 <= uVar15)) ||
                (uVar14 = (iVar13 + 1) * iVar8 + iVar16, uVar10 <= uVar14)) ||
               (uVar1 = uVar14 + 1, uVar10 <= uVar1)) {
LAB_03d6675d:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pvVar12 = obj[1].monitor;
            if (pvVar12 == (void *)0x0) goto LAB_03d66762;
            if ((ulong)*(uint *)((long)pvVar12 + 0x18) <= uVar21 + uVar20) goto LAB_03d6675d;
            fVar24 = fVar24 - (float)iVar16;
            pvVar3 = (&(pIVar11->_1).byval_arg)[(int)uVar18].data;
            fVar27 = SUB84(pvVar3,0);
            fVar28 = (float)((ulong)pvVar3 >> 0x20);
            uVar4 = *(undefined8 *)&(&(pIVar11->_1).byval_arg)[(int)uVar18].bits;
            pvVar3 = (&(pIVar11->_1).byval_arg)[(int)uVar15].data;
            uVar5 = *(undefined8 *)&(&(pIVar11->_1).byval_arg)[(int)uVar15].bits;
            fVar27 = (SUB84(pvVar3,0) - fVar27) * fVar24 + fVar27;
            fVar28 = ((float)((ulong)pvVar3 >> 0x20) - fVar28) * fVar24 + fVar28;
            fVar25 = (float)uVar4;
            fVar26 = (float)((ulong)uVar4 >> 0x20);
            fVar25 = ((float)uVar5 - fVar25) * fVar24 + fVar25;
            fVar26 = ((float)((ulong)uVar5 >> 0x20) - fVar26) * fVar24 + fVar26;
            pvVar3 = (&(pIVar11->_1).byval_arg)[(int)uVar14].data;
            fVar29 = SUB84(pvVar3,0);
            fVar30 = (float)((ulong)pvVar3 >> 0x20);
            uVar4 = *(undefined8 *)&(&(pIVar11->_1).byval_arg)[(int)uVar14].bits;
            pvVar3 = (&(pIVar11->_1).byval_arg)[(int)uVar1].data;
            uVar5 = *(undefined8 *)&(&(pIVar11->_1).byval_arg)[(int)uVar1].bits;
            fVar31 = (float)uVar4;
            fVar32 = (float)((ulong)uVar4 >> 0x20);
            pfVar2 = (float *)((long)pvVar12 + (lVar19 >> 0x20) * 0x10 + 0x20);
            *pfVar2 = (((SUB84(pvVar3,0) - fVar29) * fVar24 + fVar29) - fVar27) * fVar23 + fVar27;
            pfVar2[1] = ((((float)((ulong)pvVar3 >> 0x20) - fVar30) * fVar24 + fVar30) - fVar28) *
                        fVar23 + fVar28;
            pfVar2[2] = ((((float)uVar5 - fVar31) * fVar24 + fVar31) - fVar25) * fVar23 + fVar25;
            pfVar2[3] = ((((float)((ulong)uVar5 >> 0x20) - fVar32) * fVar24 + fVar32) - fVar26) *
                        fVar23 + fVar26;
            uVar20 = uVar20 + 1;
            lVar19 = lVar19 + 0x100000000;
          } while (uVar7 != uVar20);
          iVar13 = *(int *)((long)&obj[2].monitor + 4);
        }
        lVar17 = lVar17 + 1;
        uVar21 = uVar21 + uVar7;
      } while (lVar17 < iVar13);
    }
    return;
  }
LAB_03d66762:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// TextureScaler$$ColorLerpUnclamped
// il2cpp: UnityEngine_Color_o TextureScaler__ColorLerpUnclamped (UnityEngine_Color_o c1, UnityEngine_Color_o c2, float value, const MethodInfo* method);
// 0x3d66770

UnityEngine_Color_o
TextureScaler__ColorLerpUnclamped
          (UnityEngine_Color_o c1,UnityEngine_Color_o c2,float value,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  UVar1.fields.r = c1.fields.r + (c2.fields.r - c1.fields.r) * value;
  UVar1.fields.g = c1.fields.g + (c2.fields.g - c1.fields.g) * value;
  UVar1.fields.b = c1.fields.b + (c2.fields.b - c1.fields.b) * value;
  UVar1.fields.a = c1.fields.a + (c2.fields.a - c1.fields.a) * value;
  return (UnityEngine_Color_o)UVar1.fields;
}


// TextureScaler$$.ctor
// il2cpp: void TextureScaler___ctor (TextureScaler_o* __this, const MethodInfo* method);
// 0x3d66790

void TextureScaler___ctor(TextureScaler_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


