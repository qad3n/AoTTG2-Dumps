// ==================== AoTTG2 cross-reference ====================
// Type: TextureScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/TextureScaler.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/TextureScaler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x200000A")]
public class TextureScaler
{
	[Token(Token = "0x200000B")]
	public class ThreadData
	{
		[Token(Token = "0x400001B")]
		[FieldOffset(Offset = "0x10")]
		public Color[] TexColors;

		[Token(Token = "0x400001C")]
		[FieldOffset(Offset = "0x18")]
		public Color[] NewColors;

		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x20")]
		public int TexWidth;

		[Token(Token = "0x400001E")]
		[FieldOffset(Offset = "0x24")]
		public int TexHeight;

		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x28")]
		public int NewWidth;

		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0x2C")]
		public int NewHeight;

		[Token(Token = "0x6000034")]
		[Address(RVA = "0x5745700", Offset = "0x5744700", VA = "0x5745700")]
		public ThreadData(Color[] texColors, Color[] newColors, int texWidth, int texHeight, int newWidth, int newHeight)
		{
			// Lifted from source/cpp/TextureScaler.c (TextureScaler.ThreadData$$.ctor): clean
			base();
			this.TexColors = texColors;
			this.NewColors = newColors;
			this.TexWidth = texWidth;
			this.TexHeight = texHeight;
			this.NewWidth = newWidth;
			this.NewHeight = newHeight;
			return;
		}
	}

	[Token(Token = "0x200000C")]
	[CompilerGenerated]
	private sealed class _003CScale_003Ed__1 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000021")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000022")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000023")]
		[FieldOffset(Offset = "0x20")]
		public Texture2D tex;

		[Token(Token = "0x4000024")]
		[FieldOffset(Offset = "0x28")]
		public int newWidth;

		[Token(Token = "0x4000025")]
		[FieldOffset(Offset = "0x2C")]
		public int newHeight;

		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x30")]
		private Color[] _003CnewColors_003E5__2;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x38")]
		private Thread _003Cthread_003E5__3;

		[Token(Token = "0x17000003")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000038")]
			[Address(RVA = "0x5745D40", Offset = "0x5744D40", VA = "0x5745D40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/TextureScaler.c (TextureScaler.<Scale>d__1$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000004")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600003A")]
			[Address(RVA = "0x5745D90", Offset = "0x5744D90", VA = "0x5745D90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/TextureScaler.c (TextureScaler.<Scale>d__1$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000035")]
		[Address(RVA = "0x5745500", Offset = "0x5744500", VA = "0x5745500")]
		[DebuggerHidden]
		public _003CScale_003Ed__1(int _003C_003E1__state)
		{
			// Lifted from source/cpp/TextureScaler.c (TextureScaler.<Scale>d__1$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x5745A70", Offset = "0x5744A70", VA = "0x5745A70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/TextureScaler.c (TextureScaler.<Scale>d__1$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x5745A80", Offset = "0x5744A80", VA = "0x5745A80", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/TextureScaler.c (TextureScaler.<Scale>d__1$$MoveNext): 2 lines keep C-only constructs
			int iVar1;
			Texture2D pUVar2;
			int iVar3;
			int iVar4;
			bool bVar5;
			int iVar6;
			int iVar7;
			Color[] pUVar8;
			Color[] pUVar9;
			ThreadData __this_00;
			ParameterizedThreadStart __this_01;
			Thread pSVar10;
			object pIVar11;

			iVar1 = this.__1__state;
			if (iVar1 == 2) {
				this.__1__state = -1;
				pUVar2 = this.tex;
				if (pUVar2 == null) goto label_05845d35;
				bVar5 = false;
				pUVar2.Apply();
			}
			else {
				if (iVar1 == 1) {
					this.__1__state = -1;
				}
				else {
					if (iVar1 != 0) {
						return false;
					}
					this.__1__state = -1;
					pUVar2 = this.tex;
					if (pUVar2 == null) goto label_05845d35;
					pUVar8 = pUVar2.GetPixels();
					pUVar9 = (Color[])new Color[this.newHeight * this.newWidth];
					this._newColors_5__2 = pUVar9;
					pUVar2 = this.tex;
					if (pUVar2 == null) goto label_05845d35;
					pUVar9 = this._newColors_5__2;
					iVar6 = pUVar2.get_width();
					pUVar2 = this.tex;
					if (pUVar2 == null) goto label_05845d35;
					iVar7 = pUVar2.get_height();
					iVar3 = this.newWidth;
					iVar4 = this.newHeight;
					__this_00 = new ThreadData();
					__this_00.TexColors = pUVar8;
					__this_00.NewColors = pUVar9;
					__this_00.TexWidth = iVar6;
					__this_00.TexHeight = iVar7;
					__this_00.NewWidth = iVar3;
					__this_00.NewHeight = iVar4;
					__this_01 = il2cpp_codegen_object_new(typeof(ParameterizedThreadStart)) ;
					__this_01 = new ParameterizedThreadStart(null, (intptr_t)MethodInfo_TextureScaler_BilinearScale);
					pSVar10 = new Thread(__this_01);
					this._thread_5__3 = pSVar10;
					pSVar10 = this._thread_5__3;
					if (pSVar10 == null) goto label_05845d35;
					pSVar10.Start((object)__this_00);
				}
				pSVar10 = this._thread_5__3;
				if (pSVar10 == null) goto label_05845d35;
				bVar5 = pSVar10.IsAlive;
				if (bVar5) {
					pIVar11 = new WaitForEndOfFrame();
					this.__2__current = pIVar11;
					this.__1__state = 1;
				}
				else {
					pUVar2 = this.tex;
					if (pUVar2 == null) {
		label_05845d35: ;
						throw new NullReferenceException();
					}
					pUVar2.Reinitialize(this.newWidth, this.newHeight);
					pUVar2 = this.tex;
					if (pUVar2 == null) goto label_05845d35;
					pUVar2.SetPixels(this._newColors_5__2);
					pIVar11 = new WaitForEndOfFrame();
					this.__2__current = pIVar11;
					this.__1__state = 2;
				}
				bVar5 = true;
			}
			return bVar5;
		}

		[Token(Token = "0x6000039")]
		[Address(RVA = "0x5745D50", Offset = "0x5744D50", VA = "0x5745D50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/TextureScaler.c (TextureScaler.<Scale>d__1$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_TextureScaler_Scale_d__1_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x5745480", Offset = "0x5744480", VA = "0x5745480")]
	[IteratorStateMachine(typeof(_003CScale_003Ed__1))]
	public static IEnumerator Scale(Texture2D tex, int newWidth, int newHeight)
	{
		// Lifted from source/cpp/TextureScaler.c (TextureScaler$$Scale): clean
		d__1<Scale> __this;

		__this = new d__1<Scale>();
		__this.__1__state = 0;
		__this.tex = tex;
		__this.newWidth = newWidth;
		__this.newHeight = newHeight;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x5745520", Offset = "0x5744520", VA = "0x5745520")]
	public static void ScaleBlocking(Texture2D tex, int newWidth, int newHeight)
	{
		// Lifted from source/cpp/TextureScaler.c (TextureScaler$$ScaleBlocking): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		int iVar3;
		Color[] pUVar4;
		Color[] colors;
		ThreadData __this;
		ParameterizedThreadStart __this_00;
		Thread __this_01;

		if (tex != null) {
			pUVar4 = tex.GetPixels();
			colors = (Color[])new Color[newHeight * newWidth];
			iVar2 = tex.get_width();
			iVar3 = tex.get_height();
			__this = new ThreadData();
			__this.TexColors = pUVar4;
			__this.NewColors = colors;
			__this.TexWidth = iVar2;
			__this.TexHeight = iVar3;
			__this.NewWidth = newWidth;
			__this.NewHeight = newHeight;
			__this_00 = new ParameterizedThreadStart(null, (intptr_t)MethodInfo_TextureScaler_BilinearScale);
			__this_01 = new Thread(__this_00);
			if (__this_01 != null) {
				__this_01.Start((object)__this);
				while(true) {
					bVar1 = __this_01.IsAlive;
					if (!bVar1) break;
					Thread.Sleep(1);
				}
				tex.Reinitialize(newWidth, newHeight);
				tex.SetPixels(colors);
				tex.Apply();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x5745770", Offset = "0x5744770", VA = "0x5745770")]
	public static void BilinearScale(object obj)
	{
		// Lifted from source/cpp/TextureScaler.c (TextureScaler$$BilinearScale): 23 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		float pfVar3;
		MethodInfo pMVar4;
		Il2CppMethodPointer pIVar5;
		MethodInfo pMVar6;
		Il2CppMethodPointer pIVar7;
		byte bVar8;
		int iVar9;
		uint uVar10;
		int iVar11;
		int iVar12;
		uint uVar13;
		Il2CppClass pIVar14;
		IntPtr pvVar15;
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

		if (obj == null) {
	label_05845a2b: ;
			throw new NullReferenceException();
		}
		bVar8 = (typeof(ThreadData)._2).typeHierarchyDepth;
		if (((obj.klass._2).typeHierarchyDepth < bVar8) ||((obj.klass._2).typeHierarchy[(ulong)bVar8 - 1] != typeof(ThreadData))) {
			throw new InvalidCastException();
		}
		iVar9 = *(int)((long)&obj[2].monitor + 4);
		if ((0 < iVar9) && (uVar10 = *(uint)&obj[2].monitor, 0 < (int)uVar10)) {
			iVar11 = *(int)&obj[2].klass;
			iVar12 = *(int)((long)&obj[2].klass + 4);
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
					if (pIVar14 == null) goto label_05845a2b;
					uVar19 = iVar11 * (int)fVar23 + (int)fVar25;
					uVar13 = *(uint)&(pIVar14._1).namespaze;
					if ((((uVar13 <= uVar19) || (uVar1 = uVar19 + 1, uVar13 <= uVar1)) ||(uVar17 = (int)fVar25 + ((int)fVar23 + 1) * iVar11, uVar13 <= uVar17)) ||(uVar2 = uVar17 + 1, uVar13 <= uVar2)) {
	label_05845a26: ;
						throw new IndexOutOfRangeException();
					}
					pvVar15 = obj[1].monitor;
					if (pvVar15 == null) goto label_05845a2b;
					if ((ulong)*(uint)((long)pvVar15 + 0x18) <= uVar16 + uVar21) goto label_05845a26;
					fVar24 = fVar24 - (float)(int)fVar25;
					pMVar4 = pIVar14.vtable[(long)(int)uVar19 + -0x12].method;
					pIVar5 = pIVar14.vtable[(long)(int)uVar19 + -0x11].methodPtr;
					pMVar6 = pIVar14.vtable[(long)(int)uVar1 + -0x12].method;
					pIVar7 = pIVar14.vtable[(long)(int)uVar1 + -0x11].methodPtr;
					fVar27 = SUB84(pMVar4, 0);
					fVar28 = (float)((ulong)pMVar4 >> 0x20);
					fVar27 = (SUB84(pMVar6, 0) - fVar27) * fVar24 + fVar27;
					fVar28 = ((float)((ulong)pMVar6 >> 0x20) - fVar28) * fVar24 + fVar28;
					fVar25 = SUB84(pIVar5, 0);
					fVar26 = (float)((ulong)pIVar5 >> 0x20);
					fVar25 = (SUB84(pIVar7, 0) - fVar25) * fVar24 + fVar25;
					fVar26 = ((float)((ulong)pIVar7 >> 0x20) - fVar26) * fVar24 + fVar26;
					pMVar4 = pIVar14.vtable[(long)(int)uVar17 + -0x12].method;
					pIVar5 = pIVar14.vtable[(long)(int)uVar17 + -0x11].methodPtr;
					pMVar6 = pIVar14.vtable[(long)(int)uVar2 + -0x12].method;
					pIVar7 = pIVar14.vtable[(long)(int)uVar2 + -0x11].methodPtr;
					fVar29 = SUB84(pMVar4, 0);
					fVar30 = (float)((ulong)pMVar4 >> 0x20);
					fVar31 = SUB84(pIVar5, 0);
					fVar32 = (float)((ulong)pIVar5 >> 0x20);
					pfVar3 = (float)((long)pvVar15 + (lVar20 >> 0x1c) + 0x20);
					*pfVar3 = (((SUB84(pMVar6, 0) - fVar29) * fVar24 + fVar29) - fVar27) * fVar22 + fVar27;
					pfVar3[1] = ((((float)((ulong)pMVar6 >> 0x20) - fVar30) * fVar24 + fVar30) - fVar28) * fVar22 + fVar28 ;
					pfVar3[2] = (((SUB84(pIVar7, 0) - fVar31) * fVar24 + fVar31) - fVar25) * fVar22 + fVar25;
					pfVar3[3] = ((((float)((ulong)pIVar7 >> 0x20) - fVar32) * fVar24 + fVar32) - fVar26) * fVar22 + fVar26 ;
					uVar21 = uVar21 + 1;
					lVar20 = lVar20 + 0x100000000;
				} while (uVar10 != uVar21);
				lVar18 = lVar18 + 1;
				uVar16 = uVar10 + uVar16;
			} while (lVar18 < *(int)((long)&obj[2].monitor + 4));
		}
		return;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x5745A40", Offset = "0x5744A40", VA = "0x5745A40")]
	private static Color ColorLerpUnclamped(Color c1, Color c2, float value)
	{
		// Lifted from source/cpp/TextureScaler.c (TextureScaler$$ColorLerpUnclamped): clean
		Color UVar1;

		UVar1.r = c1.r + value * (c2.r - c1.r);
		UVar1.g = c1.g + value * (c2.g - c1.g);
		UVar1.a = c1.a + value * (c2.a - c1.a);
		UVar1.b = c1.b + value * (c2.b - c1.b);
		return (Color)UVar1;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x5745A60", Offset = "0x5744A60", VA = "0x5745A60")]
	public TextureScaler()
	{
		// Lifted from source/cpp/TextureScaler.c (TextureScaler$$.ctor): clean
		base();
		return;
	}
}
