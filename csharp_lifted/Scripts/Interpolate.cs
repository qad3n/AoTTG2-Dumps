// ==================== AoTTG2 cross-reference ====================
// Type: Interpolate
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Interpolate.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Interpolate.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000018")]
public class Interpolate
{
	[Token(Token = "0x2000019")]
	public enum EaseType
	{
		[Token(Token = "0x400005F")]
		Linear,
		[Token(Token = "0x4000060")]
		EaseInQuad,
		[Token(Token = "0x4000061")]
		EaseOutQuad,
		[Token(Token = "0x4000062")]
		EaseInOutQuad,
		[Token(Token = "0x4000063")]
		EaseInCubic,
		[Token(Token = "0x4000064")]
		EaseOutCubic,
		[Token(Token = "0x4000065")]
		EaseInOutCubic,
		[Token(Token = "0x4000066")]
		EaseInQuart,
		[Token(Token = "0x4000067")]
		EaseOutQuart,
		[Token(Token = "0x4000068")]
		EaseInOutQuart,
		[Token(Token = "0x4000069")]
		EaseInQuint,
		[Token(Token = "0x400006A")]
		EaseOutQuint,
		[Token(Token = "0x400006B")]
		EaseInOutQuint,
		[Token(Token = "0x400006C")]
		EaseInSine,
		[Token(Token = "0x400006D")]
		EaseOutSine,
		[Token(Token = "0x400006E")]
		EaseInOutSine,
		[Token(Token = "0x400006F")]
		EaseInExpo,
		[Token(Token = "0x4000070")]
		EaseOutExpo,
		[Token(Token = "0x4000071")]
		EaseInOutExpo,
		[Token(Token = "0x4000072")]
		EaseInCirc,
		[Token(Token = "0x4000073")]
		EaseOutCirc,
		[Token(Token = "0x4000074")]
		EaseInOutCirc
	}

	[Token(Token = "0x200001A")]
	public delegate Vector3 ToVector3<T>(T v);

	[Token(Token = "0x200001B")]
	public delegate float Function(float a, float b, float c, float d);

	[Token(Token = "0x200001C")]
	[CompilerGenerated]
	private sealed class _003CNewBezier_003Ed__16<T> : IEnumerable<Vector3>, IEnumerable, IEnumerator<Vector3>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000075")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000076")]
		[FieldOffset(Offset = "0x0")]
		private Vector3 _003C_003E2__current;

		[Token(Token = "0x4000077")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000078")]
		[FieldOffset(Offset = "0x0")]
		private IList nodes;

		[Token(Token = "0x4000079")]
		[FieldOffset(Offset = "0x0")]
		public IList _003C_003E3__nodes;

		[Token(Token = "0x400007A")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<float> steps;

		[Token(Token = "0x400007B")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<float> _003C_003E3__steps;

		[Token(Token = "0x400007C")]
		[FieldOffset(Offset = "0x0")]
		private ToVector3<T> toVector3;

		[Token(Token = "0x400007D")]
		[FieldOffset(Offset = "0x0")]
		public ToVector3<T> _003C_003E3__toVector3;

		[Token(Token = "0x400007E")]
		[FieldOffset(Offset = "0x0")]
		private Function ease;

		[Token(Token = "0x400007F")]
		[FieldOffset(Offset = "0x0")]
		public Function _003C_003E3__ease;

		[Token(Token = "0x4000080")]
		[FieldOffset(Offset = "0x0")]
		private float maxStep;

		[Token(Token = "0x4000081")]
		[FieldOffset(Offset = "0x0")]
		public float _003C_003E3__maxStep;

		[Token(Token = "0x4000082")]
		[FieldOffset(Offset = "0x0")]
		private Vector3[] _003Cpoints_003E5__2;

		[Token(Token = "0x4000083")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<float> _003C_003E7__wrap2;

		[Token(Token = "0x17000008")]
		private Vector3 System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EVector3_003E_002ECurrent
		{
			[Token(Token = "0x60000A7")]
			[DebuggerHidden]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x17000009")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000A9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A3")]
		[DebuggerHidden]
		public _003CNewBezier_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000A4")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000A5")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000A6")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000A8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000AA")]
		[DebuggerHidden]
		private IEnumerator<Vector3> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EVector3_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000AB")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200001D")]
	[CompilerGenerated]
	private sealed class _003CNewCatmullRom_003Ed__20<T> : IEnumerable<Vector3>, IEnumerable, IEnumerator<Vector3>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000085")]
		[FieldOffset(Offset = "0x0")]
		private Vector3 _003C_003E2__current;

		[Token(Token = "0x4000086")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000087")]
		[FieldOffset(Offset = "0x0")]
		private IList nodes;

		[Token(Token = "0x4000088")]
		[FieldOffset(Offset = "0x0")]
		public IList _003C_003E3__nodes;

		[Token(Token = "0x4000089")]
		[FieldOffset(Offset = "0x0")]
		private ToVector3<T> toVector3;

		[Token(Token = "0x400008A")]
		[FieldOffset(Offset = "0x0")]
		public ToVector3<T> _003C_003E3__toVector3;

		[Token(Token = "0x400008B")]
		[FieldOffset(Offset = "0x0")]
		private bool loop;

		[Token(Token = "0x400008C")]
		[FieldOffset(Offset = "0x0")]
		public bool _003C_003E3__loop;

		[Token(Token = "0x400008D")]
		[FieldOffset(Offset = "0x0")]
		private int slices;

		[Token(Token = "0x400008E")]
		[FieldOffset(Offset = "0x0")]
		public int _003C_003E3__slices;

		[Token(Token = "0x400008F")]
		[FieldOffset(Offset = "0x0")]
		private int _003Clast_003E5__2;

		[Token(Token = "0x4000090")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ccurrent_003E5__3;

		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cprevious_003E5__4;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cstart_003E5__5;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cend_003E5__6;

		[Token(Token = "0x4000094")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cnext_003E5__7;

		[Token(Token = "0x4000095")]
		[FieldOffset(Offset = "0x0")]
		private int _003CstepCount_003E5__8;

		[Token(Token = "0x4000096")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cstep_003E5__9;

		[Token(Token = "0x1700000A")]
		private Vector3 System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EVector3_003E_002ECurrent
		{
			[Token(Token = "0x60000AF")]
			[DebuggerHidden]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x1700000B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000B1")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000AC")]
		[DebuggerHidden]
		public _003CNewCatmullRom_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000AD")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000AE")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000B0")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000B2")]
		[DebuggerHidden]
		private IEnumerator<Vector3> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EVector3_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000B3")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200001E")]
	[CompilerGenerated]
	private sealed class _003CNewCounter_003Ed__6 : IEnumerable<float>, IEnumerable, IEnumerator<float>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000097")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000098")]
		[FieldOffset(Offset = "0x14")]
		private float _003C_003E2__current;

		[Token(Token = "0x4000099")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400009A")]
		[FieldOffset(Offset = "0x1C")]
		private int start;

		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x20")]
		public int _003C_003E3__start;

		[Token(Token = "0x400009C")]
		[FieldOffset(Offset = "0x24")]
		private int step;

		[Token(Token = "0x400009D")]
		[FieldOffset(Offset = "0x28")]
		public int _003C_003E3__step;

		[Token(Token = "0x400009E")]
		[FieldOffset(Offset = "0x2C")]
		private int end;

		[Token(Token = "0x400009F")]
		[FieldOffset(Offset = "0x30")]
		public int _003C_003E3__end;

		[Token(Token = "0x40000A0")]
		[FieldOffset(Offset = "0x34")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700000C")]
		private float System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ESingle_003E_002ECurrent
		{
			[Token(Token = "0x60000B7")]
			[Address(RVA = "0x574AF90", Offset = "0x5749F90", VA = "0x574AF90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Interpolate.c (Interpolate.<NewCounter>d__6$$System.Collections.Generic.IEnumerator<System.Single>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700000D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000B9")]
			[Address(RVA = "0x574AFE0", Offset = "0x5749FE0", VA = "0x574AFE0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Interpolate.c (Interpolate.<NewCounter>d__6$$System.Collections.IEnumerator.get_Current): clean
				object pIVar1;
				byte[] auStack_4 = new byte[4];

				return pIVar1;
			}
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x57495F0", Offset = "0x57485F0", VA = "0x57495F0")]
		[DebuggerHidden]
		public _003CNewCounter_003Ed__6(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewCounter>d__6$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x574AF30", Offset = "0x5749F30", VA = "0x574AF30", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewCounter>d__6$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x574AF40", Offset = "0x5749F40", VA = "0x574AF40", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewCounter>d__6$$MoveNext): clean
			int iVar1;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
				iVar1 = this.step + this._i_5__2;
				this._i_5__2 = iVar1;
				if (iVar1 <= this.end) {
		label_0584af5e: ;
					this.__2__current = (float)iVar1;
					this.__1__state = 1;
					return true;
				}
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				iVar1 = this.start;
				this._i_5__2 = iVar1;
				if (iVar1 <= this.end) goto label_0584af5e;
			}
			return false;
		}

		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x574AFA0", Offset = "0x5749FA0", VA = "0x574AFA0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewCounter>d__6$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Interpolate_NewCounter_d__6_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x574B010", Offset = "0x574A010", VA = "0x574B010", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewCounter>d__6$$System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			d__6<NewCounter> __this_00;

			if (this.__1__state == -2) {
				iVar1 = this.__l__initialThreadId;
				iVar2 = Environment.CurrentManagedThreadId;
				if (iVar1 == iVar2) {
					this.__1__state = 0;
					__this_00 = this;
					goto label_0584b083;
				}
			}
			__this_00 = new d__6<NewCounter>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
		label_0584b083: ;
			__this_00.start = this.__3__start;
			__this_00.end = this.__3__end;
			__this_00.step = this.__3__step;
			return (IEnumerator<float>)__this_00;
		}

		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x574B0B0", Offset = "0x574A0B0", VA = "0x574B0B0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewCounter>d__6$$System.Collections.IEnumerable.GetEnumerator): clean
			int iVar1;
			int iVar2;
			d__6<NewCounter> __this_00;

			if (this.__1__state == -2) {
				iVar1 = this.__l__initialThreadId;
				iVar2 = Environment.CurrentManagedThreadId;
				if (iVar1 == iVar2) {
					this.__1__state = 0;
					__this_00 = this;
					goto label_0584b123;
				}
			}
			__this_00 = new d__6<NewCounter>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
		label_0584b123: ;
			__this_00.start = this.__3__start;
			__this_00.end = this.__3__end;
			__this_00.step = this.__3__step;
			return (IEnumerator)__this_00;
		}
	}

	[Token(Token = "0x200001F")]
	[CompilerGenerated]
	private sealed class _003CNewEase_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000A1")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000A2")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000A3")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 end;

		[Token(Token = "0x40000A4")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 start;

		[Token(Token = "0x40000A5")]
		[FieldOffset(Offset = "0x38")]
		public IEnumerable<float> driver;

		[Token(Token = "0x40000A6")]
		[FieldOffset(Offset = "0x40")]
		public Function ease;

		[Token(Token = "0x40000A7")]
		[FieldOffset(Offset = "0x48")]
		public float total;

		[Token(Token = "0x40000A8")]
		[FieldOffset(Offset = "0x4C")]
		private Vector3 _003Cdistance_003E5__2;

		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x58")]
		private IEnumerator<float> _003C_003E7__wrap2;

		[Token(Token = "0x1700000E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000C0")]
			[Address(RVA = "0x574B700", Offset = "0x574A700", VA = "0x574B700", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Interpolate.c (Interpolate.<NewEase>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700000F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000C2")]
			[Address(RVA = "0x574B750", Offset = "0x574A750", VA = "0x574B750", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Interpolate.c (Interpolate.<NewEase>d__9$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x5749940", Offset = "0x5748940", VA = "0x5749940")]
		[DebuggerHidden]
		public _003CNewEase_003Ed__9(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewEase>d__9$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x574B150", Offset = "0x574A150", VA = "0x574B150", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewEase>d__9$$System.IDisposable.Dispose): clean
			int iVar1;
			object obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = (object)this.__7__wrap2;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x574B200", Offset = "0x574A200", VA = "0x574B200", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewEase>d__9$$MoveNext): 8 lines keep C-only constructs
			float fVar1;
			float fVar2;
			uint uVar3;
			uint uVar4;
			uint uVar5;
			uint uVar6;
			int iVar7;
			Function pIVar10;
			d__9<NewEase> pIVar11;
			bool bVar12;
			object pIVar14;
			d__9<NewEase> local_70;
			float local_68;
			float local_64;
			float local_60;
			float local_5c;
			ulong local_58;
			ulong local_48;
			uint local_40;
			d__9<NewEase>* local_30;
			ulong local_28;
			ulong local_18;

			local_70 = this;
			local_30 = &local_70;
			iVar7 = this.__1__state;
			if (iVar7 != 1) {
				if (iVar7 != 0) {
					return false;
				}
				this.__1__state = -1;
				uVar3 = this.end.x;
				uVar5 = this.end.y;
				fVar1 = this.end.z;
				uVar4 = this.start.x;
				uVar6 = this.start.y;
				fVar2 = this.start.z;
				this._distance_5__2.x = (float)uVar3 - (float)uVar4;
				this._distance_5__2.y = (float)uVar5 - (float)uVar6;
				this._distance_5__2.z = fVar1 - fVar2;
				pIVar14 = (object)this.driver;
				if (pIVar14 == null) {
					throw new NullReferenceException();
				}
				pIVar14 = pIVar14.Dispose();
				local_70.__7__wrap2 = (IEnumerator<float>)pIVar14;
				this = local_70;
			}
			this.__1__state = -3;
			pIVar14 = (object)this.__7__wrap2;
			if (pIVar14 == null) {
				throw new NullReferenceException();
			}
			bVar12 = pIVar14.Dispose();
			pIVar11 = local_70;
			if (bVar12) {
				pIVar14 = (object)local_70.__7__wrap2;
				if (pIVar14 == null) {
					throw new NullReferenceException();
				}
				local_68 = pIVar14.Dispose();
				pIVar10 = local_70.ease;
				if (pIVar10 == null) {
					throw new NullReferenceException();
				}
				local_58._0_4_ = local_70.start.x;
				local_58._4_4_ = local_70.start.y;
				local_5c = local_70.start.z;
				local_18._0_4_ = local_70._distance_5__2.x;
				local_18._4_4_ = local_70._distance_5__2.y;
				local_60 = local_70._distance_5__2.z;
				local_64 = local_70.total;
				local_28 = (*(code)pIVar10.invoke_impl)((undefined4)local_58,pIVar10.method_code,pIVar10.method);
				local_58 = (*(code)pIVar10.invoke_impl)(local_58._4_4_,local_18._4_4_,local_68,local_64,pIVar10.method_code,pIVar10.method);
				local_40 = (*(code)pIVar10.invoke_impl)(local_5c,local_60,local_68,local_64,pIVar10.method_code,pIVar10.method);
				local_48 = CONCAT44((undefined4)local_58, (undefined4)local_28);
				pIVar14 = (object)local_48;
				local_70.__2__current = pIVar14;
				local_70.__1__state = 1;
				bVar12 = true;
			}
			else {
				pIVar11.__1__state = -1;
				pIVar14 = (object)pIVar11.__7__wrap2;
				if (pIVar14 != null) {
					pIVar14.Dispose();
				}
				local_70.__7__wrap2 = null;
				bVar12 = false;
			}
			return bVar12;
		}

		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x574B660", Offset = "0x574A660", VA = "0x574B660")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewEase>d__9$$<>m__Finally1): clean
			object obj;

			this.__1__state = -1;
			obj = (object)this.__7__wrap2;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x574B710", Offset = "0x574A710", VA = "0x574B710", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewEase>d__9$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Interpolate_NewEase_d__9_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000020")]
	[CompilerGenerated]
	private sealed class _003CNewTimer_003Ed__3 : IEnumerable<float>, IEnumerable, IEnumerator<float>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000AA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000AB")]
		[FieldOffset(Offset = "0x14")]
		private float _003C_003E2__current;

		[Token(Token = "0x40000AC")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40000AD")]
		[FieldOffset(Offset = "0x1C")]
		private float duration;

		[Token(Token = "0x40000AE")]
		[FieldOffset(Offset = "0x20")]
		public float _003C_003E3__duration;

		[Token(Token = "0x40000AF")]
		[FieldOffset(Offset = "0x24")]
		private float _003CelapsedTime_003E5__2;

		[Token(Token = "0x17000010")]
		private float System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ESingle_003E_002ECurrent
		{
			[Token(Token = "0x60000C6")]
			[Address(RVA = "0x574B800", Offset = "0x574A800", VA = "0x574B800", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Interpolate.c (Interpolate.<NewTimer>d__3$$System.Collections.Generic.IEnumerator<System.Single>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000011")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000C8")]
			[Address(RVA = "0x574B850", Offset = "0x574A850", VA = "0x574B850", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Interpolate.c (Interpolate.<NewTimer>d__3$$System.Collections.IEnumerator.get_Current): clean
				object pIVar1;
				byte[] auStack_4 = new byte[4];

				return pIVar1;
			}
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x5749540", Offset = "0x5748540", VA = "0x5749540")]
		[DebuggerHidden]
		public _003CNewTimer_003Ed__3(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewTimer>d__3$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x574B760", Offset = "0x574A760", VA = "0x574B760", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewTimer>d__3$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x574B770", Offset = "0x574A770", VA = "0x574B770", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewTimer>d__3$$MoveNext): clean
			float fVar1;
			int iVar2;
			int iVar3;
			float fVar4;

			iVar2 = this.__1__state;
			if (iVar2 == 2) {
				this.__1__state = -1;
				fVar4 = this._elapsedTime_5__2;
			}
			else if (iVar2 == 1) {
				this.__1__state = -1;
				fVar1 = this._elapsedTime_5__2;
				fVar4 = Time.deltaTime;
				fVar4 = fVar4 + fVar1;
				this._elapsedTime_5__2 = fVar4;
				iVar3 = 2;
				if (this.duration <= fVar4) goto label_0584b7e8;
			}
			else {
				if (iVar2 != 0) {
					return false;
				}
				this.__1__state = -1;
				this._elapsedTime_5__2 = 0.0;
				fVar4 = 0.0;
			}
			iVar3 = 1;
			if (this.duration <= fVar4) {
				return false;
			}
		label_0584b7e8: ;
			this.__2__current = fVar4;
			this.__1__state = iVar3;
			return true;
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x574B810", Offset = "0x574A810", VA = "0x574B810", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewTimer>d__3$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Interpolate_NewTimer_d__3_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x574B880", Offset = "0x574A880", VA = "0x574B880", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewTimer>d__3$$System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			d__3<NewTimer> __this_00;

			if (this.__1__state == -2) {
				iVar1 = this.__l__initialThreadId;
				iVar2 = Environment.CurrentManagedThreadId;
				if (iVar1 == iVar2) {
					this.__1__state = 0;
					__this_00 = this;
					goto label_0584b8f3;
				}
			}
			__this_00 = new d__3<NewTimer>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
		label_0584b8f3: ;
			__this_00.duration = this.__3__duration;
			return (IEnumerator<float>)__this_00;
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x574B910", Offset = "0x574A910", VA = "0x574B910", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Interpolate.c (Interpolate.<NewTimer>d__3$$System.Collections.IEnumerable.GetEnumerator): clean
			int iVar1;
			int iVar2;
			d__3<NewTimer> __this_00;

			if (this.__1__state == -2) {
				iVar1 = this.__l__initialThreadId;
				iVar2 = Environment.CurrentManagedThreadId;
				if (iVar1 == iVar2) {
					this.__1__state = 0;
					__this_00 = this;
					goto label_0584b983;
				}
			}
			__this_00 = new d__3<NewTimer>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
		label_0584b983: ;
			__this_00.duration = this.__3__duration;
			return (IEnumerator)__this_00;
		}
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x57494A0", Offset = "0x57484A0", VA = "0x57494A0")]
	private static Vector3 Identity(Vector3 v)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$Identity): clean
		return (Vector3)v;
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x57494B0", Offset = "0x57484B0", VA = "0x57494B0")]
	private static Vector3 TransformDotPosition(Transform t)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$TransformDotPosition): clean
		Vector3 UVar1;

		if (t == null) {
			throw new NullReferenceException();
		}
		UVar1 = (Vector3)t.position;
		return (Vector3)UVar1;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x57494D0", Offset = "0x57484D0", VA = "0x57494D0")]
	[IteratorStateMachine(typeof(_003CNewTimer_003Ed__3))]
	private static IEnumerable<float> NewTimer(float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewTimer): clean
		int iVar1;
		d__3<NewTimer> __this;

		__this = new d__3<NewTimer>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__duration = duration;
		return (IEnumerable<float>)__this;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x5749570", Offset = "0x5748570", VA = "0x5749570")]
	[IteratorStateMachine(typeof(_003CNewCounter_003Ed__6))]
	private static IEnumerable<float> NewCounter(int start, int end, int step)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewCounter): clean
		int iVar1;
		d__6<NewCounter> __this;

		__this = new d__6<NewCounter>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__start = start;
		__this.__3__end = end;
		__this.__3__step = step;
		return (IEnumerable<float>)__this;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x5749620", Offset = "0x5748620", VA = "0x5749620")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewEase): clean
		int iVar1;
		d__3<NewTimer> __this;
		d__9<NewEase> __this_00;

		__this = new d__3<NewTimer>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__duration = duration;
		__this_00 = new d__9<NewEase>();
		__this_00.__1__state = 0;
		__this_00.ease = ease;
		__this_00.start.x = start.x;
		__this_00.start.y = start.y;
		__this_00.start.z = start.z;
		__this_00.end.x = end.x;
		__this_00.end.y = end.y;
		__this_00.end.z = end.z;
		__this_00.total = duration;
		__this_00.driver = (IEnumerable<float>)__this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5749810", Offset = "0x5748810", VA = "0x5749810")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, int slices)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewEase): clean
		int iVar1;
		d__6<NewCounter> __this;
		d__9<NewEase> __this_00;

		__this = new d__6<NewCounter>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__start = 0;
		__this.__3__end = slices + 1;
		__this.__3__step = 1;
		__this_00 = new d__9<NewEase>();
		__this_00.__1__state = 0;
		__this_00.ease = ease;
		__this_00.start.x = start.x;
		__this_00.start.y = start.y;
		__this_00.start.z = start.z;
		__this_00.end.x = end.x;
		__this_00.end.y = end.y;
		__this_00.end.z = end.z;
		__this_00.total = (float)(slices + 1);
		__this_00.driver = (IEnumerable<float>)__this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5749740", Offset = "0x5748740", VA = "0x5749740")]
	[IteratorStateMachine(typeof(_003CNewEase_003Ed__9))]
	private static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float total, IEnumerable<float> driver)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewEase): clean
		d__9<NewEase> __this;

		__this = new d__9<NewEase>();
		__this.__1__state = 0;
		__this.ease = ease;
		__this.start.x = start.x;
		__this.start.y = start.y;
		__this.start.z = start.z;
		__this.end.x = end.x;
		__this.end.y = end.y;
		__this.end.z = end.z;
		__this.total = total;
		__this.driver = driver;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x5749960", Offset = "0x5748960", VA = "0x5749960")]
	private static Vector3 Ease(Function ease, Vector3 start, Vector3 distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$Ease): clean
		uint uVar1;
		float fVar2;
		Vector3 UVar3;
		float fStack_34;
		float fStack_24;

		if (ease == null) {
			throw new NullReferenceException();
		}
		UVar3.x =(*(code)ease.invoke_impl)(start.x,distance.x,elapsedTime,duration,ease.method_code,ease.method);
		fStack_24 = start.y;
		fStack_34 = distance.y;
		uVar1 = (*(code)ease.invoke_impl)(fStack_24,fStack_34,elapsedTime,duration,ease.method_code,ease.method );
		fVar2 = (float)(*(code)ease.invoke_impl)(start.z,distance.z,elapsedTime,duration,ease.method_code,ease.method);
		UVar3.y = (float)uVar1;
		UVar3.z = fVar2;
		return (Vector3)UVar3;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x5749A20", Offset = "0x5748A20", VA = "0x5749A20")]
	public static Function Ease(EaseType type)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$Ease): 28 lines keep C-only constructs
		byte uVar1;
		MethodInfo pMVar2;
		sbyte cVar3;
		Function pIVar4;
		MethodInfo* ppMVar5;
		byte puVar6;
		object ex;

		switch(type) {
		case 0:
			ppMVar5 = &MethodInfo_Interpolate_Linear;
			break;
		case 1:
			ppMVar5 = &MethodInfo_Interpolate_EaseInQuad;
			break;
		case 2:
			ppMVar5 = &MethodInfo_Interpolate_EaseOutQuad;
			break;
		case 3:
			ppMVar5 = &MethodInfo_Interpolate_EaseInOutQuad;
			break;
		case 4:
			ppMVar5 = &MethodInfo_Interpolate_EaseInCubic;
			break;
		case 5:
			ppMVar5 = &MethodInfo_Interpolate_EaseOutCubic;
			break;
		case 6:
			ppMVar5 = &MethodInfo_Interpolate_EaseInOutCubic;
			break;
		case 7:
			ppMVar5 = &MethodInfo_Interpolate_EaseInQuart;
			break;
		case 8:
			ppMVar5 = &MethodInfo_Interpolate_EaseOutQuart;
			break;
		case 9:
			ppMVar5 = &MethodInfo_Interpolate_EaseInOutQuart;
			break;
		case 10:
			ppMVar5 = &MethodInfo_Interpolate_EaseInQuint;
			break;
		case 0xb:
			ppMVar5 = &MethodInfo_Interpolate_EaseOutQuint;
			break;
		case 0xc:
			ppMVar5 = &MethodInfo_Interpolate_EaseInOutQuint;
			break;
		case 0xd:
			ppMVar5 = &MethodInfo_Interpolate_EaseInSine;
			break;
		case 0xe:
			ppMVar5 = &MethodInfo_Interpolate_EaseOutSine;
			break;
		case 0xf:
			ppMVar5 = &MethodInfo_Interpolate_EaseInOutSine;
			break;
		case 0x10:
			ppMVar5 = &MethodInfo_Interpolate_EaseInExpo;
			break;
		case 0x11:
			ppMVar5 = &MethodInfo_Interpolate_EaseOutExpo;
			break;
		case 0x12:
			ppMVar5 = &MethodInfo_Interpolate_EaseInOutExpo;
			break;
		case 0x13:
			ppMVar5 = &MethodInfo_Interpolate_EaseInCirc;
			break;
		case 0x14:
			ppMVar5 = &MethodInfo_Interpolate_EaseOutCirc;
			break;
		case 0x15:
			ppMVar5 = &MethodInfo_Interpolate_EaseInOutCirc;
			break;
		default: ;
			return null;
		}
		pMVar2 = *ppMVar5;
		pIVar4.method_ptr = (intptr_t)pMVar2.virtualMethodPointer;
		pIVar4.method = (intptr_t)pMVar2;
		pIVar4.m_target = null;
		uVar1 = pMVar2.parameters_count;
		pIVar4.method_code = (intptr_t)pIVar4;
		cVar3 = il2cpp_runtime_helper_030d61c0();
		if (cVar3 == false) {
			ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
			throw ex;
		}
		if (uVar1 == 4) {
			puVar6 = &label_02fce3a0;
		}
		else {
			puVar6 = (byte)pIVar4.method_ptr;
			pIVar4.method_code = (intptr_t)pIVar4.m_target;
		}
		pIVar4.invoke_impl = (intptr_t)puVar6;
		pIVar4.extra_arg = (intptr_t)il2cpp_runtime_helper_02fce310;
		return pIVar4;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x5749F10", Offset = "0x5748F10", VA = "0x5749F10")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewBezier): 2 lines keep C-only constructs
		int iVar1;
		d__3<NewTimer> __this;
		ToVector3<T> __this_00;
		System_Collections_Generic_IEnumerable_Vector3__o pSVar2;

		__this = new d__3<NewTimer>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__duration = duration;
		__this_00 = new ToVector3<Transform>(null, (intptr_t)MethodInfo_Interpolate_TransformDotPosition);
		pSVar2 = Interpolate.NewBezier<Transform>(ease, (IList)nodes, __this_00, duration, (IEnumerable<float>)__this);
		return pSVar2;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x574A000", Offset = "0x5749000", VA = "0x574A000")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, int slices)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewBezier): 2 lines keep C-only constructs
		int iVar1;
		d__6<NewCounter> __this;
		ToVector3<T> __this_00;
		System_Collections_Generic_IEnumerable_Vector3__o pSVar2;

		__this = new d__6<NewCounter>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__start = 0;
		__this.__3__end = slices + 1;
		__this.__3__step = 1;
		__this_00 = new ToVector3<Transform>(null, (intptr_t)MethodInfo_Interpolate_TransformDotPosition);
		pSVar2 = Interpolate.NewBezier<Transform>(ease, (IList)nodes, __this_00, (float)(slices + 1), (IEnumerable<float>)__this);
		return pSVar2;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x574A100", Offset = "0x5749100", VA = "0x574A100")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewBezier): 2 lines keep C-only constructs
		int iVar1;
		d__3<NewTimer> __this;
		ToVector3<T> toVector3;
		System_Collections_Generic_IEnumerable_Vector3__o pSVar2;

		__this = new d__3<NewTimer>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__duration = duration;
		toVector3 = new ToVector3<Vector3>(null, (intptr_t)MethodInfo_Interpolate_Identity);
		pSVar2 = Interpolate.NewBezier<Vector3>(ease, (IList)points, toVector3, duration, (IEnumerable<float>)__this);
		return pSVar2;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x574A1F0", Offset = "0x57491F0", VA = "0x574A1F0")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, int slices)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewBezier): 2 lines keep C-only constructs
		int iVar1;
		d__6<NewCounter> __this;
		ToVector3<T> toVector3;
		System_Collections_Generic_IEnumerable_Vector3__o pSVar2;

		__this = new d__6<NewCounter>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__start = 0;
		__this.__3__end = slices + 1;
		__this.__3__step = 1;
		toVector3 = new ToVector3<Vector3>(null, (intptr_t)MethodInfo_Interpolate_Identity);
		pSVar2 = Interpolate.NewBezier<Vector3>(ease, (IList)points, toVector3, (float)(slices + 1), (IEnumerable<float>)__this);
		return pSVar2;
	}

	[Token(Token = "0x600007E")]
	[IteratorStateMachine(typeof(_003CNewBezier_003Ed__16<>))]
	private static IEnumerable<Vector3> NewBezier<T>(Function ease, IList nodes, ToVector3<T> toVector3, float maxStep, IEnumerable<float> steps)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x574A2F0", Offset = "0x57492F0", VA = "0x574A2F0")]
	private static Vector3 Bezier(Function ease, Vector3[] points, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$Bezier): 2 lines keep C-only constructs
		ulong uVar1;
		uint uVar2;
		MethodInfo extraout_RDX;
		Vector3 pUVar3;
		ulong uVar4;
		ulong uVar5;
		ulong uVar6;
		float fVar7;

		if (points == null) {
	label_0584a460: ;
			throw new NullReferenceException();
		}
		uVar1 = points.Length & 0xffffffff;
		uVar2 = (int)points.Length - 1;
		if (0 < (int)uVar2) {
			if (ease == null) goto label_0584a460;
			uVar6 = (ulong)uVar2;
			do {
				pUVar3 = points.m_Items;
				uVar4 = 0;
				do {
					if ((uVar1 <= uVar4) || (uVar5 = uVar4 + 1, uVar1 <= uVar5)) goto label_0584a45b;
					fVar7 = pUVar3.x;
					fVar7 = (float)(*(code)ease.invoke_impl)(fVar7,(*(uint)((sbyte)pUVar3 + 0x2c)) - fVar7,elapsedTime,duration,ease.method_code,ease.method,method);
					uVar1 = (ulong)(uint)points.Length;
					if ((uVar1 <= uVar4) || (pUVar3.x = fVar7, uVar1 <= uVar5)) goto label_0584a45b;
					fVar7 = pUVar3.y;
					fVar7 = (float)(*(code)ease.invoke_impl)(fVar7,(*(uint)((sbyte)pUVar3 + 0x30)) - fVar7,elapsedTime,duration,ease.method_code,ease.method);
					uVar1 = (ulong)(uint)points.Length;
					if ((uVar1 <= uVar4) || (pUVar3.y = fVar7, uVar1 <= uVar5)) goto label_0584a45b;
					fVar7 = pUVar3.z;
					fVar7 = (float)(*(code)ease.invoke_impl)(fVar7,(*(uint)((sbyte)pUVar3 + 0x34)) - fVar7,elapsedTime,duration,ease.method_code,ease.method);
					uVar1 = (ulong)(uint)points.Length;
					if (uVar1 <= uVar4) goto label_0584a45b;
					pUVar3.z = fVar7;
					pUVar3 = pUVar3 + 1;
					method = extraout_RDX;
					uVar4 = uVar5;
				} while (uVar5 != uVar6);
				uVar6 = uVar6 - 1;
			} while (0 < (int)uVar6);
		}
		if (uVar1 != 0) {
			return (Vector3)points[0];
		}
	label_0584a45b: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x574A470", Offset = "0x5749470", VA = "0x574A470")]
	public static IEnumerable<Vector3> NewCatmullRom(Transform[] nodes, int slices, bool loop)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewCatmullRom): 2 lines keep C-only constructs
		ToVector3<T> __this;
		System_Collections_Generic_IEnumerable_Vector3__o pSVar1;

		__this = new ToVector3<Transform>(null, (intptr_t)MethodInfo_Interpolate_TransformDotPosition);
		pSVar1 = Interpolate.NewCatmullRom<Transform>((IList)nodes, __this, slices, loop);
		return pSVar1;
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x574A510", Offset = "0x5749510", VA = "0x574A510")]
	public static IEnumerable<Vector3> NewCatmullRom(Vector3[] points, int slices, bool loop)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$NewCatmullRom): 12 lines keep C-only constructs
		byte bVar1;
		MethodInfo pMVar2;
		Il2CppClass klass;
		_NewCatmullRom_d__20<T> __this;
		ToVector3<T> __this_00;

		__this_00 = new ToVector3<Vector3>(null, (intptr_t)MethodInfo_Interpolate_Identity);
		pMVar2 = MethodInfo_Interpolate_NewCatmullRom_Vector3;
		if ((MethodInfo_Interpolate_NewCatmullRom_Vector3.field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Interpolate_NewCatmullRom_Vector3);
			klass = ((pMVar2.field7_0x38).rgctx_data).klass;
			bVar1 = (klass._2).bitflags1;
		}
		else {
			klass = ((MethodInfo_Interpolate_NewCatmullRom_Vector3.field7_0x38).rgctx_data).klass;
			bVar1 = (klass._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this = (_NewCatmullRom_d__20<T>)il2cpp_codegen_object_new(klass);
		__this = new _NewCatmullRom_d__20<Vector3>(-2);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.__3__nodes = (IList)points;
		__this.__3__toVector3 = __this_00;
		__this.__3__slices = slices;
		__this.__3__loop = loop;
		return (System_Collections_Generic_IEnumerable_Vector3__o)__this;
	}

	[Token(Token = "0x6000082")]
	[IteratorStateMachine(typeof(_003CNewCatmullRom_003Ed__20<>))]
	private static IEnumerable<Vector3> NewCatmullRom<T>(IList nodes, ToVector3<T> toVector3, int slices, bool loop)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x574A5B0", Offset = "0x57495B0", VA = "0x574A5B0")]
	public static Vector3 CatmullRom(Vector3 previous, Vector3 start, Vector3 end, Vector3 next, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$CatmullRom): clean
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Vector3 UVar7;

		fVar5 = elapsedTime / duration;
		fVar3 = fVar5 * fVar5;
		fVar1 = fVar5 * fVar3 * 0.5;
		fVar2 = (fVar3 - fVar1) - fVar5 * 0.5;
		fVar6 = fVar5 * fVar3 * 1.5;
		fVar4 = fVar3 * -2.5 + fVar6 + 1.0;
		fVar5 = ((fVar3 + fVar3) - fVar6) + fVar5 * 0.5;
		fVar1 = fVar1 - fVar3 * 0.5;
		UVar7.z = previous.z * fVar2 + start.z * fVar4 + end.z * fVar5 + next.z * fVar1;
		UVar7.x = previous.x * fVar2 + fVar4 * start.x + fVar5 * end.x + fVar1 * next.x;
		UVar7.y = previous.y * fVar2 + fVar4 * start.y + fVar5 * end.y + fVar1 * next.y;
		return (Vector3)UVar7;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x574A690", Offset = "0x5749690", VA = "0x574A690")]
	private static float Linear(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$Linear): clean
		float fVar1;

		fVar1 = duration;
		if (elapsedTime <= duration) {
			fVar1 = elapsedTime;
		}
		return start + (fVar1 / duration) * distance;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x574A6B0", Offset = "0x57496B0", VA = "0x574A6B0")]
	private static float EaseInQuad(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInQuad): clean
		float fVar1;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / duration;
		}
		else {
			fVar1 = 1.0;
		}
		return distance * fVar1 * fVar1 + start;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x574A6E0", Offset = "0x57496E0", VA = "0x574A6E0")]
	private static float EaseOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseOutQuad): clean
		float fVar1;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / duration;
		}
		else {
			fVar1 = 1.0;
		}
		return start - (fVar1 + -2.0) * distance * fVar1;
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x574A710", Offset = "0x5749710", VA = "0x574A710")]
	private static float EaseInOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInOutQuad): clean
		float fVar1;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / (duration * 0.5);
			if (fVar1 < 1.0) {
				return distance * 0.5 * fVar1 * fVar1 + start;
			}
		}
		else {
			fVar1 = 2.0;
		}
		return ((fVar1 + -1.0 + -2.0) * (fVar1 + -1.0) + -1.0) * distance * -0.5 + start;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x574A790", Offset = "0x5749790", VA = "0x574A790")]
	private static float EaseInCubic(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInCubic): clean
		float fVar1;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / duration;
		}
		else {
			fVar1 = 1.0;
		}
		return distance * fVar1 * fVar1 * fVar1 + start;
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x574A7C0", Offset = "0x57497C0", VA = "0x574A7C0")]
	private static float EaseOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseOutCubic): clean
		float fVar1;

		fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
		return start + (fVar1 * fVar1 * fVar1 + 1.0) * distance;
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x574A800", Offset = "0x5749800", VA = "0x574A800")]
	private static float EaseInOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInOutCubic): clean
		float fVar1;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / (duration * 0.5);
			if (fVar1 < 1.0) {
				return distance * 0.5 * fVar1 * fVar1 * fVar1 + start;
			}
		}
		else {
			fVar1 = 2.0;
		}
		fVar1 = fVar1 + -2.0;
		return (fVar1 * fVar1 * fVar1 + 2.0) * distance * 0.5 + start;
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x574A880", Offset = "0x5749880", VA = "0x574A880")]
	private static float EaseInQuart(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInQuart): clean
		float fVar1;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / duration;
		}
		else {
			fVar1 = 1.0;
		}
		return distance * fVar1 * fVar1 * fVar1 * fVar1 + start;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x574A8B0", Offset = "0x57498B0", VA = "0x574A8B0")]
	private static float EaseOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseOutQuart): clean
		float fVar1;

		fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
		return start - (fVar1 * fVar1 * fVar1 * fVar1 + -1.0) * distance;
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x574A8F0", Offset = "0x57498F0", VA = "0x574A8F0")]
	private static float EaseInOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInOutQuart): clean
		float fVar1;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / (duration * 0.5);
			if (fVar1 < 1.0) {
				return distance * 0.5 * fVar1 * fVar1 * fVar1 * fVar1 + start;
			}
		}
		else {
			fVar1 = 2.0;
		}
		fVar1 = fVar1 + -2.0;
		return (fVar1 * fVar1 * fVar1 * fVar1 + -2.0) * distance * -0.5 + start;
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x574A970", Offset = "0x5749970", VA = "0x574A970")]
	private static float EaseInQuint(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInQuint): clean
		float fVar1;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / duration;
		}
		else {
			fVar1 = 1.0;
		}
		return distance * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + start;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x574A9A0", Offset = "0x57499A0", VA = "0x574A9A0")]
	private static float EaseOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseOutQuint): clean
		float fVar1;

		fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
		return start + (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 1.0) * distance;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x574A9E0", Offset = "0x57499E0", VA = "0x574A9E0")]
	private static float EaseInOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInOutQuint): clean
		float fVar1;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / (duration * 0.5);
			if (fVar1 < 1.0) {
				return distance * 0.5 * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + start;
			}
		}
		else {
			fVar1 = 2.0;
		}
		fVar1 = fVar1 + -2.0;
		return (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 2.0) * distance * 0.5 + start;
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x574AA70", Offset = "0x5749A70", VA = "0x574AA70")]
	private static float EaseInSine(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInSine): clean
		float fVar1;

		fVar1 = duration;
		if (elapsedTime <= duration) {
			fVar1 = elapsedTime;
		}
		fVar1 = cosf((fVar1 / duration) * 1.5707964);
		return (distance - fVar1 * distance) + start;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x574AAB0", Offset = "0x5749AB0", VA = "0x574AAB0")]
	private static float EaseOutSine(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseOutSine): clean
		float fVar1;

		fVar1 = duration;
		if (elapsedTime <= duration) {
			fVar1 = elapsedTime;
		}
		fVar1 = sinf((fVar1 / duration) * 1.5707964);
		return fVar1 * distance + start;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x574AAF0", Offset = "0x5749AF0", VA = "0x574AAF0")]
	private static float EaseInOutSine(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInOutSine): clean
		float fVar1;

		fVar1 = duration;
		if (elapsedTime <= duration) {
			fVar1 = elapsedTime;
		}
		fVar1 = cosf((fVar1 * 3.1415927) / duration);
		return (fVar1 + -1.0) * distance * -0.5 + start;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x574AB40", Offset = "0x5749B40", VA = "0x574AB40")]
	private static float EaseInExpo(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInExpo): clean
		float fVar1;

		fVar1 = duration;
		if (elapsedTime <= duration) {
			fVar1 = elapsedTime;
		}
		fVar1 = exp2f((fVar1 / duration + -1.0) * 10.0);
		return fVar1 * distance + start;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x574AB80", Offset = "0x5749B80", VA = "0x574AB80")]
	private static float EaseOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseOutExpo): clean
		float fVar1;

		fVar1 = duration;
		if (elapsedTime <= duration) {
			fVar1 = elapsedTime;
		}
		fVar1 = exp2f((fVar1 * -10.0) / duration);
		return (1.0 - fVar1) * distance + start;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x574ABC0", Offset = "0x5749BC0", VA = "0x574ABC0")]
	private static float EaseInOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInOutExpo): clean
		float fVar1;

		fVar1 = 2.0;
		if ((elapsedTime <= duration) && (fVar1 = elapsedTime / (duration * 0.5), fVar1 < 1.0)) {
			fVar1 = exp2f((fVar1 + -1.0) * 10.0);
			return distance * 0.5 * fVar1 + start;
		}
		fVar1 = exp2f((fVar1 + -1.0) * -10.0);
		return (2.0 - fVar1) * distance * 0.5 + start;
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x574AC70", Offset = "0x5749C70", VA = "0x574AC70")]
	private static float EaseInCirc(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInCirc): clean
		float fVar1;

		fVar1 = 1.0;
		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / duration;
		}
		fVar1 = 1.0 - fVar1 * fVar1;
		if (fVar1 < 0.0) {
			fVar1 = sqrtf(fVar1);
		}
		else {
			fVar1 = SQRT(fVar1);
		}
		return start - (fVar1 + -1.0) * distance;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x574ACE0", Offset = "0x5749CE0", VA = "0x574ACE0")]
	private static float EaseOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseOutCirc): clean
		float fVar1;

		fVar1 = (float)(~-(uint)(duration < elapsedTime) & (uint)(elapsedTime / duration + -1.0));
		fVar1 = 1.0 - fVar1 * fVar1;
		if (0.0 <= fVar1) {
			return SQRT(fVar1) * distance + start;
		}
		fVar1 = sqrtf(fVar1);
		return fVar1 * distance + start;
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x574AD50", Offset = "0x5749D50", VA = "0x574AD50")]
	private static float EaseInOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$EaseInOutCirc): clean
		float fVar1;
		float fVar2;
		float fVar3;

		if (elapsedTime <= duration) {
			fVar1 = elapsedTime / (duration * 0.5);
			if (fVar1 < 1.0) {
				fVar1 = fVar1 * fVar1;
				fVar3 = -1.0;
				fVar2 = -0.5;
				goto label_0584adb1;
			}
		}
		else {
			fVar1 = 2.0;
		}
		fVar1 = (fVar1 + -2.0) * (fVar1 + -2.0);
		fVar3 = 1.0;
		fVar2 = 0.5;
	label_0584adb1: ;
		fVar1 = 1.0 - fVar1;
		if (fVar1 < 0.0) {
			fVar1 = sqrtf(fVar1);
		}
		else {
			fVar1 = SQRT(fVar1);
		}
		return fVar2 * distance * (fVar1 + fVar3) + start;
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x574AE20", Offset = "0x5749E20", VA = "0x574AE20")]
	public Interpolate()
	{
		// Lifted from source/cpp/Interpolate.c (Interpolate$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Interpolate.c.

	// Interpolate$$NewBezier<object>: 9 lines keep C-only constructs
	private static System_Collections_Generic_IEnumerable_Vector3__o NewBezier_object(Function ease, IList nodes, ToVector3<T> toVector3, float maxStep, IEnumerable<float> steps)
	{
		byte bVar1;
		Il2CppClass klass;
		_NewBezier_d__16<T> __this;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			klass = method.rgctx_data._0_Interpolate__NewBezier_d__16_T_;
			bVar1 = (klass._2).bitflags1;
		}
		else {
			klass = method.rgctx_data._0_Interpolate__NewBezier_d__16_T_;
			bVar1 = (klass._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this = (_NewBezier_d__16<T>)il2cpp_codegen_object_new(klass);
		__this = new _NewBezier_d__16<object>(-2);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.__3__ease = ease;
		__this.__3__nodes = nodes;
		__this.__3__toVector3 = toVector3;
		__this.__3__maxStep = maxStep;
		__this.__3__steps = steps;
		return (System_Collections_Generic_IEnumerable_Vector3__o)__this;
	}

	// Interpolate$$NewBezier<Vector3>: 9 lines keep C-only constructs
	private static System_Collections_Generic_IEnumerable_Vector3__o NewBezier_Vector3(Function ease, IList nodes, ToVector3<T> toVector3, float maxStep, IEnumerable<float> steps)
	{
		byte bVar1;
		Il2CppClass klass;
		_NewBezier_d__16<T> __this;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			klass = method.rgctx_data._0_Interpolate__NewBezier_d__16_T_;
			bVar1 = (klass._2).bitflags1;
		}
		else {
			klass = method.rgctx_data._0_Interpolate__NewBezier_d__16_T_;
			bVar1 = (klass._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this = (_NewBezier_d__16<T>)il2cpp_codegen_object_new(klass);
		__this = new _NewBezier_d__16<Vector3>(-2);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.__3__ease = ease;
		__this.__3__nodes = nodes;
		__this.__3__toVector3 = toVector3;
		__this.__3__maxStep = maxStep;
		__this.__3__steps = steps;
		return (System_Collections_Generic_IEnumerable_Vector3__o)__this;
	}

	// Interpolate$$NewBezier<__Il2CppFullySharedGenericType>: 15 lines keep C-only constructs
	private static System_Collections_Generic_IEnumerable_Vector3__o NewBezier___Il2CppFullySharedGenericType(Function ease, IList nodes, ToVector3<T> toVector3, float maxStep, IEnumerable<float> steps)
	{
		byte bVar1;
		Il2CppClass klass;
		object pIVar2;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			klass = method.rgctx_data._0_Interpolate__NewBezier_d__16_T_;
			bVar1 = (klass._2).bitflags1;
		}
		else {
			klass = method.rgctx_data._0_Interpolate__NewBezier_d__16_T_;
			bVar1 = (klass._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		pIVar2 = il2cpp_codegen_object_new(klass);
		(*method.rgctx_data._1_Interpolate__NewBezier_d__16_T___ctor.methodPointer)(pIVar2,0xfffffffe);
		if (pIVar2 == null) {
			throw new NullReferenceException();
		}
		pIVar2[6].klass = (Il2CppClass)ease;
		pIVar2[3].klass = (Il2CppClass)nodes;
		pIVar2[5].klass = (Il2CppClass)toVector3;
		*(float)((long)&pIVar2[6].monitor + 4) = maxStep;
		pIVar2[4].klass = (Il2CppClass)steps;
		return (System_Collections_Generic_IEnumerable_Vector3__o)pIVar2;
	}

	// Interpolate$$NewCatmullRom<object>: 9 lines keep C-only constructs
	private static System_Collections_Generic_IEnumerable_Vector3__o NewCatmullRom_object(IList nodes, ToVector3<T> toVector3, int slices, bool loop)
	{
		byte bVar1;
		Il2CppClass klass;
		_NewCatmullRom_d__20<T> __this;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			klass = method.rgctx_data._0_Interpolate__NewCatmullRom_d__20_T_;
			bVar1 = (klass._2).bitflags1;
		}
		else {
			klass = method.rgctx_data._0_Interpolate__NewCatmullRom_d__20_T_;
			bVar1 = (klass._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this = (_NewCatmullRom_d__20<T>)il2cpp_codegen_object_new(klass);
		__this = new _NewCatmullRom_d__20<object>(-2) ;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.__3__nodes = nodes;
		__this.__3__toVector3 = toVector3;
		__this.__3__slices = slices;
		__this.__3__loop = loop;
		return (System_Collections_Generic_IEnumerable_Vector3__o)__this;
	}

	// Interpolate$$NewCatmullRom<Vector3>: 9 lines keep C-only constructs
	private static System_Collections_Generic_IEnumerable_Vector3__o NewCatmullRom_Vector3(IList nodes, ToVector3<T> toVector3, int slices, bool loop)
	{
		byte bVar1;
		Il2CppClass klass;
		_NewCatmullRom_d__20<T> __this;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			klass = method.rgctx_data._0_Interpolate__NewCatmullRom_d__20_T_;
			bVar1 = (klass._2).bitflags1;
		}
		else {
			klass = method.rgctx_data._0_Interpolate__NewCatmullRom_d__20_T_;
			bVar1 = (klass._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this = (_NewCatmullRom_d__20<T>)il2cpp_codegen_object_new(klass);
		__this = new _NewCatmullRom_d__20<Vector3>(-2) ;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.__3__nodes = nodes;
		__this.__3__toVector3 = toVector3;
		__this.__3__slices = slices;
		__this.__3__loop = loop;
		return (System_Collections_Generic_IEnumerable_Vector3__o)__this;
	}

	// Interpolate$$NewCatmullRom<__Il2CppFullySharedGenericType>: 14 lines keep C-only constructs
	private static System_Collections_Generic_IEnumerable_Vector3__o NewCatmullRom___Il2CppFullySharedGenericType(IList nodes, ToVector3<T> toVector3, int slices, bool loop)
	{
		byte bVar1;
		Il2CppClass klass;
		object pIVar2;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			klass = method.rgctx_data._0_Interpolate__NewCatmullRom_d__20_T_;
			bVar1 = (klass._2).bitflags1;
		}
		else {
			klass = method.rgctx_data._0_Interpolate__NewCatmullRom_d__20_T_;
			bVar1 = (klass._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		pIVar2 = il2cpp_codegen_object_new(klass);
		(*method.rgctx_data._1_Interpolate__NewCatmullRom_d__20_T___ctor.methodPointer)(pIVar2,0xfffffffe);
		if (pIVar2 == null) {
			throw new NullReferenceException();
		}
		pIVar2[3].klass = (Il2CppClass)nodes;
		pIVar2[4].klass = (Il2CppClass)toVector3;
		*(int)&pIVar2[5].klass = slices;
		*(bool)((long)&pIVar2[4].monitor + 1) = loop;
		return (System_Collections_Generic_IEnumerable_Vector3__o)pIVar2;
	}

	// Interpolate.ToVector3<object>$$.ctor: 11 lines keep C-only constructs
	private void ToVector3_object___ctor(object @object)
	{
		sbyte cVar1;
		sbyte cVar2;
		object ex;

		this.method_ptr = *(IntPtr)(method + 8);
		this.method = method;
		this.m_target = @object;
		cVar2 = *(sbyte)(method + 0x52);
		this.method_code = (intptr_t)this;
		cVar1 = il2cpp_runtime_helper_030d61c0();
		if (cVar1 == false) {
			if (cVar2 == false) {
				if (this.method_is_virtual == false) {
					this.invoke_impl = (intptr_t)&label_02bad490;
				}
				else {
					cVar2 = il2cpp_runtime_helper_03143050(method);
					cVar1 = il2cpp_runtime_helper_030d68e0(method);
					if (cVar2 == false) {
						if (cVar1 == false) {
							this.invoke_impl = (intptr_t)&label_02bad4c0;
						}
						else {
							this.invoke_impl = (intptr_t)&label_02bad4f0;
						}
					}
					else if (cVar1 == false) {
						this.invoke_impl = (intptr_t)&label_02bad580;
					}
					else {
						this.invoke_impl = (intptr_t)&label_02bad5c0;
					}
				}
				goto label_0436637e;
			}
			if (@object == null) {
				ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
				throw ex;
			}
		}
		else if (cVar2 == true) {
			this.invoke_impl = (intptr_t)&label_02bad4b0;
			goto label_0436637e;
		}
		this.invoke_impl = this.method_ptr;
		this.method_code = (intptr_t)this.m_target;
	label_0436637e: ;
		this.extra_arg = (intptr_t)il2cpp_runtime_helper_02bad440;
		return;
	}

	// Interpolate.ToVector3<object>$$Invoke: 3 lines keep C-only constructs
	private Vector3 ToVector3_object__Invoke(object v)
	{
		code *vtableDispatch;
		float in_XMM1_Da;
		Vector3 UVar1;

		vtableDispatch = (code)this.invoke_impl;
		UVar1._0_8_ =(*vtableDispatch)(this.method_code,v,this.method,vtableDispatch);
		UVar1.z = in_XMM1_Da;
		return (Vector3)UVar1;
	}

	// Interpolate.ToVector3<object>$$BeginInvoke: 1 lines keep C-only constructs
	private IAsyncResult ToVector3_object__BeginInvoke(object v, AsyncCallback callback, object @object)
	{
		IAsyncResult pSVar1;
		object pIStack_18;

		pIStack_18 = v;
		pSVar1 = (IAsyncResult)il2cpp_runtime_helper_031591c0(this, &pIStack_18);
		return pSVar1;
	}

	// Interpolate.ToVector3<object>$$EndInvoke: 3 lines keep C-only constructs
	private Vector3 ToVector3_object__EndInvoke(IAsyncResult result)
	{
		object obj;
		Vector3 pUVar1;

		obj = (object)il2cpp_runtime_helper_03159300(result, 0);
		if (obj == null) {
			throw new NullReferenceException();
		}
		pUVar1 = il2cpp_vm_Object_Unbox(obj);
		return (UnityEngine_Vector3_o)*pUVar1;
	}

	// Interpolate.ToVector3<Vector3>$$.ctor: 4 lines keep C-only constructs
	private void ToVector3_Vector3___ctor(object @object)
	{
		sbyte cVar1;
		sbyte cVar2;
		object ex;

		this.method_ptr = *(IntPtr)(method + 8);
		this.method = method;
		this.m_target = @object;
		cVar1 = *(sbyte)(method + 0x52);
		this.method_code = (intptr_t)this;
		cVar2 = il2cpp_runtime_helper_030d61c0();
		if (cVar2 == false) {
			if (@object == null) {
				ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
				throw ex;
			}
		}
		else if (cVar1 == true) {
			this.invoke_impl = (intptr_t)&label_02bad6d0;
			goto label_043664f6;
		}
		this.invoke_impl = this.method_ptr;
		this.method_code = (intptr_t)this.m_target;
	label_043664f6: ;
		this.extra_arg = (intptr_t)il2cpp_runtime_helper_02bad660;
		return;
	}

	// Interpolate.ToVector3<Vector3>$$Invoke: 2 lines keep C-only constructs
	private Vector3 ToVector3_Vector3__Invoke(Vector3 v)
	{
		code *vtableDispatch;
		ulong in_RDX;
		float fVar1;
		Vector3 UVar2;

		fVar1 = v.z;
		vtableDispatch = (code)this.invoke_impl;
		UVar2._0_8_ =(*vtableDispatch)(v._0_8_,this.method_code,this.method,in_RDX, vtableDispatch);
		UVar2.z = fVar1;
		return (Vector3)UVar2;
	}

	// Interpolate.ToVector3<Vector3>$$BeginInvoke: 2 lines keep C-only constructs
	private IAsyncResult ToVector3_Vector3__BeginInvoke(Vector3 v, AsyncCallback callback, object @object)
	{
		IAsyncResult pSVar1;
		ulong local_38;
		object local_28;

		local_38 = v._0_8_;
		local_28 = null;
		local_28 = (object)local_38;
		pSVar1 = (IAsyncResult)il2cpp_runtime_helper_031591c0(this, &local_28, callback, @object);
		return pSVar1;
	}

	// Interpolate.ToVector3<Vector3>$$EndInvoke: 3 lines keep C-only constructs
	private Vector3 ToVector3_Vector3__EndInvoke(IAsyncResult result)
	{
		object obj;
		Vector3 pUVar1;

		obj = (object)il2cpp_runtime_helper_03159300(result, 0);
		if (obj == null) {
			throw new NullReferenceException();
		}
		pUVar1 = il2cpp_vm_Object_Unbox(obj);
		return (UnityEngine_Vector3_o)*pUVar1;
	}

	// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$.ctor: 13 lines keep C-only constructs
	private void ToVector3___Il2CppFullySharedGenericType___ctor(object @object)
	{
		sbyte cVar1;
		sbyte cVar2;
		code *pcVar3;
		object ex;

		this.method_ptr = *(IntPtr)(method + 8);
		this.method = method;
		this.m_target = @object;
		cVar2 = *(sbyte)(method + 0x52);
		this.method_code = (intptr_t)this;
		cVar1 = il2cpp_runtime_helper_030d61c0();
		if (cVar1 == false) {
			if (cVar2 == false) {
				if (this.method_is_virtual == false) {
					pcVar3 = il2cpp_runtime_helper_02bad7e0;
				}
				else {
					cVar2 = il2cpp_runtime_helper_03143050(method);
					cVar1 = il2cpp_runtime_helper_030d68e0(method);
					if (cVar2 == false) {
						if (cVar1 == false) {
							pcVar3 = il2cpp_runtime_helper_02bad820;
						}
						else {
							pcVar3 = (code)&label_02bad870;
						}
					}
					else if (cVar1 == false) {
						pcVar3 = (code)&g_data_02bad910;
					}
					else {
						pcVar3 = il2cpp_runtime_helper_02bad960;
					}
				}
			}
			else {
				if (@object == null) {
					ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
					throw ex;
				}
				pcVar3 = il2cpp_runtime_helper_02bad7a0;
			}
		}
		else if (cVar2 == true) {
			pcVar3 = il2cpp_runtime_helper_02bad730;
		}
		else {
			pcVar3 = il2cpp_runtime_helper_02bad760;
		}
		this.invoke_impl = (intptr_t)pcVar3;
		this.extra_arg = (intptr_t)il2cpp_runtime_helper_02bad6e0;
		return;
	}

	// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$Invoke: 3 lines keep C-only constructs
	private Vector3 ToVector3___Il2CppFullySharedGenericType__Invoke(__Il2CppFullySharedGenericType v)
	{
		code *vtableDispatch;
		float in_XMM1_Da;
		Vector3 UVar1;

		vtableDispatch = (code)this.invoke_impl;
		UVar1._0_8_ =(*vtableDispatch)(this.method_code,v.klass,this.method,vtableDispatch);
		UVar1.z = in_XMM1_Da;
		return (Vector3)UVar1;
	}

	// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$BeginInvoke: 7 lines keep C-only constructs
	private IAsyncResult ToVector3___Il2CppFullySharedGenericType__BeginInvoke(__Il2CppFullySharedGenericType v, AsyncCallback callback, object @object)
	{
		Il2CppClass klass;
		__Il2CppFullySharedGenericType data;
		IAsyncResult pSVar1;
		__Il2CppFullySharedGenericType local_38;

		data = v.klass;
		local_38 = null;
		klass = il2cpp_vm_Class_FromIl2CppType((Il2CppType)**(ulong*)(this.method + 0x30));
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if ((int)(klass._1).byval_arg.bits < 0) {
			data = (__Il2CppFullySharedGenericType)(object)data;
		}
		local_38 = data;
		pSVar1 = (IAsyncResult)il2cpp_runtime_helper_031591c0(this, &local_38, v.monitor, callback);
		return pSVar1;
	}

	// Interpolate.ToVector3<__Il2CppFullySharedGenericType>$$EndInvoke: 3 lines keep C-only constructs
	private Vector3 ToVector3___Il2CppFullySharedGenericType__EndInvoke(IAsyncResult result)
	{
		object obj;
		Vector3 pUVar1;

		obj = (object)il2cpp_runtime_helper_03159300(result, 0);
		if (obj == null) {
			throw new NullReferenceException();
		}
		pUVar1 = il2cpp_vm_Object_Unbox(obj);
		return (UnityEngine_Vector3_o)*pUVar1;
	}

	// Interpolate.<NewBezier>d__16<object>$$.ctor: clean
	private void NewBezier_d__16_object___ctor(int __1__state)
	{
		int iVar1;

		base();
		this.__1__state = __1__state;
		iVar1 = Environment.CurrentManagedThreadId;
		this.__l__initialThreadId = iVar1;
		return;
	}

	// Interpolate.<NewBezier>d__16<object>$$System.IDisposable.Dispose: clean
	private void NewBezier_d__16_object__System_IDisposable_Dispose()
	{
		int iVar1;
		object obj;

		iVar1 = this.__1__state;
		if ((iVar1 == 1) || (iVar1 == -3)) {
			this.__1__state = -1;
			obj = (object)this.__7__wrap2;
			if (obj != null) {
				obj.Dispose();
				return;
			}
		}
		return;
	}

	// Interpolate.<NewBezier>d__16<object>$$MoveNext: 17 lines keep C-only constructs
	private bool NewBezier_d__16_object__MoveNext()
	{
		int iVar1;
		ToVector3<T> pIVar3;
		_NewBezier_d__16<T> pIVar4;
		bool bVar5;
		int iVar6;
		uint length;
		Vector3[] pUVar8;
		object pIVar9;
		Il2CppClass pIVar10;
		object pIVar11;
		ulong uVar14;
		ulong uVar15;
		float in_XMM1_Da;
		Vector3 UVar16;
		_NewBezier_d__16<T> pIStack_60;
		float fStack_54;
		MethodInfo_465C9A0 pMStack_50;
		_NewBezier_d__16<T>* ppIStack_40;
		MethodInfo_465C9A0* ppMStack_38;

		pIStack_60 = this;
		pMStack_50 = method;
		ppIStack_40 = &pIStack_60;
		ppMStack_38 = &pMStack_50;
		iVar1 = this.__1__state;
		if (iVar1 != 1) {
			if (iVar1 != 0) {
				return false;
			}
			this.__1__state = -1;
			pIVar9 = (object)this.nodes;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			iVar6 = pIVar9.Dispose();
			if (iVar6 < 2) {
				return false;
			}
			pIVar9 = (object)pIStack_60.nodes;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			length = pIVar9.Dispose();
			pUVar8 = (Vector3[])new Vector3[length];
			pIStack_60._points_5__2 = pUVar8;
			pIVar9 = (object)pIStack_60.steps;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			pIVar9 = pIVar9.Dispose();
			pIStack_60.__7__wrap2 = (IEnumerator<float>)pIVar9;
			this = pIStack_60;
		}
		this.__1__state = -3;
		pIVar9 = (object)this.__7__wrap2;
		if (pIVar9 == null) {
			throw new NullReferenceException();
		}
		pIVar10 = pIVar9.klass;
		uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
		bVar5 = pIVar9.Dispose();
		pIVar4 = pIStack_60;
		if (bVar5) {
			pIVar9 = (object)pIStack_60.__7__wrap2;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			fStack_54 = pIVar9.Dispose();
			pIVar9 = (object)pIStack_60.nodes;
			if (pIVar9 != null) {
				uVar14 = 0;
				do {
					pIVar10 = pIVar9.klass;
					iVar6 = pIVar9.Dispose();
					if ((long)iVar6 <= (long)uVar14) {
						UVar16 = (Vector3)Interpolate.Bezier(pIStack_60.ease, pIStack_60._points_5__2, fStack_54, pIStack_60.maxStep);
						pIStack_60.__2__current = UVar16;
						pIStack_60.__1__state = 1;
						return true;
					}
					pIVar9 = (object)pIStack_60.nodes;
					if (pIVar9 == null) {
						throw new NullReferenceException();
					}
					pUVar8 = pIStack_60._points_5__2;
					pIVar3 = pIStack_60.toVector3;
					pIVar10 = pIVar9.klass;
					pIVar9 = pIVar9.Dispose((int32_t)uVar14);
					if (pIVar3 == null) {
						throw new NullReferenceException();
					}
					pIVar10 = pMStack_50.klass.rgctx_data._3_T;
					if (((pIVar10._2).bitflags1 & 1) == 0) {
						pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
					}
					if (pIVar9 == null) {
						pIVar11 = null;
					}
					else {
						pIVar11 = il2cpp_vm_Object_IsInst(pIVar9, pIVar10);
						if (pIVar11 == null) {
							throw new InvalidCastException();
						}
					}
					uVar15 = (*(code)pIVar3.invoke_impl)(pIVar3.method_code,pIVar11,pIVar3.method);
					if (pUVar8 == null) {
						throw new NullReferenceException();
					}
					if ((uint)pUVar8.Length <= uVar14) {
						throw new IndexOutOfRangeException();
					}
					pUVar8[uVar14].x = (float)(int)uVar15;
					pUVar8[uVar14].y = (float)(int)((ulong)uVar15 >> 0x20);
					pUVar8[uVar14].z = in_XMM1_Da;
					uVar14 = uVar14 + 1;
					pIVar9 = (object)pIStack_60.nodes;
				} while (pIVar9 != null);
			}
			throw new NullReferenceException();
		}
		pIVar4.__1__state = -1;
		pIVar9 = (object)pIVar4.__7__wrap2;
		if (pIVar9 != null) {
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			pIVar9.Dispose();
		}
		pIStack_60.__7__wrap2 = null;
		pIStack_60._points_5__2 = null;
		return false;
	}

	// Interpolate.<NewBezier>d__16<object>$$<>m__Finally1: clean
	private void NewBezier_d__16_object___m__Finally1()
	{
		object obj;

		this.__1__state = -1;
		obj = (object)this.__7__wrap2;
		if (obj == null) {
			return;
		}
		obj.Dispose();
		return;
	}

	// Interpolate.<NewBezier>d__16<object>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current: clean
	private Vector3 NewBezier_d__16_object__System_Collections_Generic_IEnumerator_UnityEngine_Vector3_get_Current()
	{
		return (Vector3)this.__2__current;
	}

	// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerator.Reset: 3 lines keep C-only constructs
	private void NewBezier_d__16_object__System_Collections_IEnumerator_Reset()
	{
		Il2CppClass klass;
		NotSupportedException __this_00;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
		__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotSupportedException();
		throw (object)__this_00;
	}

	// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerator.get_Current: 2 lines keep C-only constructs
	private object NewBezier_d__16_object__System_Collections_IEnumerator_get_Current()
	{
		object pIVar1;
		ulong local_18;

		local_18._0_4_ = this.__2__current.x;
		local_18._4_4_ = this.__2__current.y;
		return pIVar1;
	}

	// Interpolate.<NewBezier>d__16<object>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator: 6 lines keep C-only constructs
	private System_Collections_Generic_IEnumerator_Vector3__o NewBezier_d__16_object__System_Collections_Generic_IEnumerable_UnityEngine_Vector3_GetEnumerator()
	{
		int iVar1;
		int iVar2;
		Il2CppClass klass;
		_NewBezier_d__16<T> __this_00;

		if (this.__1__state == -2) {
			iVar1 = this.__l__initialThreadId;
			iVar2 = Environment.CurrentManagedThreadId;
			if (iVar1 == iVar2) {
				this.__1__state = 0;
				__this_00 = this;
				goto label_0475d22e;
			}
		}
		klass = method.klass.rgctx_data._0_Interpolate__NewBezier_d__16_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (_NewBezier_d__16<T>)il2cpp_codegen_object_new(klass);
		__this_00 = new Object();
		__this_00.__1__state = 0;
		iVar2 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar2;
	label_0475d22e: ;
		__this_00.ease = this.__3__ease;
		__this_00.nodes = this.__3__nodes;
		__this_00.toVector3 = this.__3__toVector3;
		__this_00.maxStep = this.__3__maxStep;
		__this_00.steps = this.__3__steps;
		return (System_Collections_Generic_IEnumerator_Vector3__o)__this_00;
	}

	// Interpolate.<NewBezier>d__16<object>$$System.Collections.IEnumerable.GetEnumerator: 1 lines keep C-only constructs
	private IEnumerator NewBezier_d__16_object__System_Collections_IEnumerable_GetEnumerator()
	{
		System_Collections_Generic_IEnumerator_Vector3__o pSVar1;

		pSVar1 = this.System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator();
		return (IEnumerator)pSVar1;
	}

	// Interpolate.<NewBezier>d__16<Vector3>$$.ctor: clean
	private void NewBezier_d__16_Vector3___ctor(int __1__state)
	{
		int iVar1;

		base();
		this.__1__state = __1__state;
		iVar1 = Environment.CurrentManagedThreadId;
		this.__l__initialThreadId = iVar1;
		return;
	}

	// Interpolate.<NewBezier>d__16<Vector3>$$System.IDisposable.Dispose: clean
	private void NewBezier_d__16_Vector3__System_IDisposable_Dispose()
	{
		int iVar1;
		object obj;

		iVar1 = this.__1__state;
		if ((iVar1 == 1) || (iVar1 == -3)) {
			this.__1__state = -1;
			obj = (object)this.__7__wrap2;
			if (obj != null) {
				obj.Dispose();
				return;
			}
		}
		return;
	}

	// Interpolate.<NewBezier>d__16<Vector3>$$MoveNext: 17 lines keep C-only constructs
	private bool NewBezier_d__16_Vector3__MoveNext()
	{
		int iVar1;
		ToVector3<T> pIVar3;
		_NewBezier_d__16<T> pIVar4;
		bool bVar5;
		int iVar6;
		uint length;
		Vector3[] pUVar8;
		object pIVar9;
		Il2CppClass pIVar10;
		ulong puVar11;
		ulong uVar14;
		ulong uVar15;
		float fVar16;
		Vector3 UVar17;
		_NewBezier_d__16<T> pIStack_60;
		float fStack_54;
		MethodInfo_465D390 pMStack_50;
		_NewBezier_d__16<T>* ppIStack_40;
		MethodInfo_465D390* ppMStack_38;

		pIStack_60 = this;
		pMStack_50 = method;
		ppIStack_40 = &pIStack_60;
		ppMStack_38 = &pMStack_50;
		iVar1 = this.__1__state;
		if (iVar1 != 1) {
			if (iVar1 != 0) {
				return false;
			}
			this.__1__state = -1;
			pIVar9 = (object)this.nodes;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			iVar6 = pIVar9.Dispose();
			if (iVar6 < 2) {
				return false;
			}
			pIVar9 = (object)pIStack_60.nodes;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			length = pIVar9.Dispose();
			pUVar8 = (Vector3[])new Vector3[length];
			pIStack_60._points_5__2 = pUVar8;
			pIVar9 = (object)pIStack_60.steps;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			pIVar9 = pIVar9.Dispose();
			pIStack_60.__7__wrap2 = (IEnumerator<float>)pIVar9;
			this = pIStack_60;
		}
		this.__1__state = -3;
		pIVar9 = (object)this.__7__wrap2;
		if (pIVar9 == null) {
			throw new NullReferenceException();
		}
		pIVar10 = pIVar9.klass;
		uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
		bVar5 = pIVar9.Dispose();
		pIVar4 = pIStack_60;
		if (bVar5) {
			pIVar9 = (object)pIStack_60.__7__wrap2;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			fStack_54 = pIVar9.Dispose();
			pIVar9 = (object)pIStack_60.nodes;
			if (pIVar9 != null) {
				uVar14 = 0;
				do {
					pIVar10 = pIVar9.klass;
					iVar6 = pIVar9.Dispose();
					if ((long)iVar6 <= (long)uVar14) {
						UVar17 = (Vector3)Interpolate.Bezier(pIStack_60.ease, pIStack_60._points_5__2, fStack_54, pIStack_60.maxStep);
						pIStack_60.__2__current = UVar17;
						pIStack_60.__1__state = 1;
						return true;
					}
					pIVar9 = (object)pIStack_60.nodes;
					if (pIVar9 == null) {
						throw new NullReferenceException();
					}
					pUVar8 = pIStack_60._points_5__2;
					pIVar3 = pIStack_60.toVector3;
					pIVar10 = pIVar9.klass;
					pIVar9 = pIVar9.Dispose((int32_t)uVar14);
					if (pIVar3 == null) {
						throw new NullReferenceException();
					}
					pIVar10 = pMStack_50.klass.rgctx_data._3_T;
					if (((pIVar10._2).bitflags1 & 1) == 0) {
						pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
					}
					if (pIVar9 == null) {
						throw new NullReferenceException();
					}
					if ((pIVar9.klass._1).element_class != (pIVar10._1).element_class) {
						throw new InvalidCastException();
					}
					puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
					fVar16 = *(float)(puVar11 + 1);
					uVar15 = (*(code)pIVar3.invoke_impl)(*puVar11,pIVar3.method_code,pIVar3.method);
					if (pUVar8 == null) {
						throw new NullReferenceException();
					}
					if ((uint)pUVar8.Length <= uVar14) {
						throw new IndexOutOfRangeException();
					}
					pUVar8[uVar14].x = (float)(int)uVar15;
					pUVar8[uVar14].y = (float)(int)((ulong)uVar15 >> 0x20);
					pUVar8[uVar14].z = fVar16;
					uVar14 = uVar14 + 1;
					pIVar9 = (object)pIStack_60.nodes;
				} while (pIVar9 != null);
			}
			throw new NullReferenceException();
		}
		pIVar4.__1__state = -1;
		pIVar9 = (object)pIVar4.__7__wrap2;
		if (pIVar9 != null) {
			pIVar10 = pIVar9.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			pIVar9.Dispose();
		}
		pIStack_60.__7__wrap2 = null;
		pIStack_60._points_5__2 = null;
		return false;
	}

	// Interpolate.<NewBezier>d__16<Vector3>$$<>m__Finally1: clean
	private void NewBezier_d__16_Vector3___m__Finally1()
	{
		object obj;

		this.__1__state = -1;
		obj = (object)this.__7__wrap2;
		if (obj == null) {
			return;
		}
		obj.Dispose();
		return;
	}

	// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current: clean
	private Vector3 NewBezier_d__16_Vector3__System_Collections_Generic_IEnumerator_UnityEngine_Vector3_get_Current()
	{
		return (Vector3)this.__2__current;
	}

	// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerator.Reset: 3 lines keep C-only constructs
	private void NewBezier_d__16_Vector3__System_Collections_IEnumerator_Reset()
	{
		Il2CppClass klass;
		NotSupportedException __this_00;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
		__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotSupportedException();
		throw (object)__this_00;
	}

	// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerator.get_Current: 2 lines keep C-only constructs
	private object NewBezier_d__16_Vector3__System_Collections_IEnumerator_get_Current()
	{
		object pIVar1;
		ulong local_18;

		local_18._0_4_ = this.__2__current.x;
		local_18._4_4_ = this.__2__current.y;
		return pIVar1;
	}

	// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator: 6 lines keep C-only constructs
	private System_Collections_Generic_IEnumerator_Vector3__o NewBezier_d__16_Vector3__System_Collections_Generic_IEnumerable_UnityEngine_Vector3_GetEnumerator()
	{
		int iVar1;
		int iVar2;
		Il2CppClass klass;
		_NewBezier_d__16<T> __this_00;

		if (this.__1__state == -2) {
			iVar1 = this.__l__initialThreadId;
			iVar2 = Environment.CurrentManagedThreadId;
			if (iVar1 == iVar2) {
				this.__1__state = 0;
				__this_00 = this;
				goto label_0475dc3e;
			}
		}
		klass = method.klass.rgctx_data._0_Interpolate__NewBezier_d__16_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (_NewBezier_d__16<T>)il2cpp_codegen_object_new(klass);
		__this_00 = new Object();
		__this_00.__1__state = 0;
		iVar2 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar2;
	label_0475dc3e: ;
		__this_00.ease = this.__3__ease;
		__this_00.nodes = this.__3__nodes;
		__this_00.toVector3 = this.__3__toVector3;
		__this_00.maxStep = this.__3__maxStep;
		__this_00.steps = this.__3__steps;
		return (System_Collections_Generic_IEnumerator_Vector3__o)__this_00;
	}

	// Interpolate.<NewBezier>d__16<Vector3>$$System.Collections.IEnumerable.GetEnumerator: 1 lines keep C-only constructs
	private IEnumerator NewBezier_d__16_Vector3__System_Collections_IEnumerable_GetEnumerator()
	{
		System_Collections_Generic_IEnumerator_Vector3__o pSVar1;

		pSVar1 = this.System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator();
		return (IEnumerator)pSVar1;
	}

	// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$.ctor: clean
	private void NewBezier_d__16___Il2CppFullySharedGenericType___ctor(int __1__state)
	{
		int iVar1;

		base();
		this.__1__state = __1__state;
		iVar1 = Environment.CurrentManagedThreadId;
		this.__l__initialThreadId = iVar1;
		return;
	}

	// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose: 1 lines keep C-only constructs
	private void NewBezier_d__16___Il2CppFullySharedGenericType__System_IDisposable_Dispose()
	{
		int iVar1;

		iVar1 = this.__1__state;
		if ((iVar1 == 1) || (iVar1 == -3)) {
			(*method.klass.rgctx_data._1_Interpolate__NewBezier_d__16_T____m__Finally1.methodPointer)();
			return;
		}
		return;
	}

	// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$MoveNext: 57 lines keep C-only constructs
	private bool NewBezier_d__16___Il2CppFullySharedGenericType__MoveNext()
	{
		float duration;
		int iVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		MethodInfo pMVar3;
		Il2CppMethodPointer pIVar4;
		ToVector3<T> pIVar5;
		Interpolate__NewBezier_d__16_T__RGCTXs pIVar6;
		InvokerMethod pIVar7;
		Function ease;
		_NewBezier_d__16<T> pIVar8;
		float elapsedTime;
		_NewBezier_d__16<T> pIVar9;
		bool bVar10;
		int iVar11;
		uint length;
		VirtualInvokeData pVVar12;
		Vector3[] pUVar13;
		object pIVar14;
		Il2CppClass pIVar15;
		ulong puVar16;
		ulong uVar17;
		byte puVar18;
		long lVar19;
		long lVar20;
		byte puVar21;
		ulong uVar22;
		Vector3 UVar23;
		ulong uStack_80;
		ulong local_78;
		MethodInfo_465DD20* local_70;
		_NewBezier_d__16<T>* local_68;
		ulong local_60;
		float local_58;
		ulong local_50;
		float local_44;
		MethodInfo_465DD20 local_40;
		_NewBezier_d__16<T> local_38;

		local_40 = method;
		local_38 = this;
		if (g_data_07541072 == false) {
			uStack_80 = 0x475dd54;
			uStack_80 = 0x475dd60;
			uStack_80 = 0x475dd6c;
			uStack_80 = 0x475dd78;
			uStack_80 = 0x475dd84;
			uStack_80 = 0x475dd90;
			g_data_07541072 = true;
		}
		lVar20 = -((ulong)(method.klass.rgctx_data._3_T._2).stack_slot_size + 0xf & 0xfffffffffffffff0);
		puVar21 = (byte)((long)&local_78 + lVar20);
		local_78 = 0;
		local_70 = &local_40;
		local_68 = &local_38;
		iVar1 = this.__1__state;
		puVar18 = puVar21;
		if (iVar1 != 1) {
			if (iVar1 != 0) {
				return false;
			}
			this.__1__state = -1;
			pIVar14 = (object)this.nodes;
			if (pIVar14 == null) {
				*(ulong)((long)&uStack_80 + lVar20) = 0x475e327;
				throw new NullReferenceException();
			}
			pIVar15 = pIVar14.klass;
			uVar22 = (ulong)(pIVar15._2).interface_offsets_count;
			if (uVar22 != 0) {
				pIVar2 = (pIVar15._1).interfaceOffsets;
				lVar19 = 0;
				do {
					if (*(ICollection*)((long)&pIVar2.interfaceType + lVar19) == typeof(ICollection)) {
						pVVar12 = pIVar15.vtable + (*(int)((long)&pIVar2.offset + lVar19) + 1);
						goto label_0475de68;
					}
					lVar19 = lVar19 + 0x10;
				} while (uVar22 * 0x10 != lVar19);
			}
			*(ulong)((long)&uStack_80 + lVar20) = 0x475de4c;
			puVar18 = (byte)((long)&local_78 + lVar20);
	label_0475de68: ;
			pMVar3 = pVVar12.method;
			pIVar4 = pVVar12.methodPtr;
			*(ulong)(puVar18 + -8) = 0x475de71;
			iVar11 = (*pIVar4)(pIVar14,pMVar3);
			if (iVar11 < 2) {
				return false;
			}
			pIVar14 = (object)local_38.nodes;
			if (pIVar14 == null) {
				*(ulong)(puVar18 + -8) = 0x475e331;
				throw new NullReferenceException();
			}
			pIVar15 = pIVar14.klass;
			uVar22 = (ulong)(pIVar15._2).interface_offsets_count;
			if (uVar22 != 0) {
				pIVar2 = (pIVar15._1).interfaceOffsets;
				lVar20 = 0;
				do {
					if (*(ICollection*)((long)&pIVar2.interfaceType + lVar20) == typeof(ICollection)) {
						pVVar12 = pIVar15.vtable + (*(int)((long)&pIVar2.offset + lVar20) + 1);
						goto label_0475dee8;
					}
					lVar20 = lVar20 + 0x10;
				} while (uVar22 * 0x10 != lVar20);
			}
			*(ulong)(puVar18 + -8) = 0x475decc;
	label_0475dee8: ;
			pMVar3 = pVVar12.method;
			pIVar4 = pVVar12.methodPtr;
			*(ulong)(puVar18 + -8) = 0x475def1;
			length = (*pIVar4)(pIVar14,pMVar3);
			*(ulong)(puVar18 + -8) = 0x475df02;
			pUVar13 = (Vector3[])new Vector3[length];
			local_38._points_5__2 = pUVar13;
			pIVar8 = &local_38.fields;
			*(ulong)(puVar18 + -8) = 0x475df16;
			pIVar14 = (object)local_38.steps;
			if (pIVar14 == null) {
				*(ulong)(puVar18 + -8) = 0x475e336;
				throw new NullReferenceException();
			}
			pIVar15 = pIVar14.klass;
			uVar22 = (ulong)(pIVar15._2).interface_offsets_count;
			if (uVar22 != 0) {
				pIVar2 = (pIVar15._1).interfaceOffsets;
				lVar20 = 0;
				do {
					if (*(IEnumerable<float>*)((long)&pIVar2.interfaceType + lVar20) == typeof(IEnumerable<float>)) {
						pVVar12 = pIVar15.vtable + *(int)((long)&pIVar2.offset + lVar20);
						goto label_0475df81;
					}
					lVar20 = lVar20 + 0x10;
				} while (uVar22 * 0x10 != lVar20);
			}
			*(ulong)(puVar18 + -8) = 0x475df69;
	label_0475df81: ;
			pMVar3 = pVVar12.method;
			pIVar4 = pVVar12.methodPtr;
			*(ulong)(puVar18 + -8) = 0x475df8a;
			pIVar14 = (*pIVar4)(pIVar14,pMVar3);
			local_38.__7__wrap2 = (IEnumerator<float>)pIVar14;
			pIVar8 = &local_38.fields;
			*(ulong)(puVar18 + -8) = 0x475df9e;
			this = local_38;
		}
		this.__1__state = -3;
		pIVar14 = (object)this.__7__wrap2;
		if (pIVar14 == null) {
			*(ulong)(puVar18 + -8) = 0x475e322;
			throw new NullReferenceException();
		}
		pIVar15 = pIVar14.klass;
		uVar22 = (ulong)(pIVar15._2).interface_offsets_count;
		if (uVar22 != 0) {
			pIVar2 = (pIVar15._1).interfaceOffsets;
			lVar20 = 0;
			do {
				if (*(IEnumerator*)((long)&pIVar2.interfaceType + lVar20) == typeof(IEnumerator)) {
					pVVar12 = pIVar15.vtable + *(int)((long)&pIVar2.offset + lVar20);
					goto label_0475e011;
				}
				lVar20 = lVar20 + 0x10;
			} while (uVar22 * 0x10 != lVar20);
		}
		*(ulong)(puVar18 + -8) = 0x475dff9;
	label_0475e011: ;
		pMVar3 = pVVar12.method;
		pIVar4 = pVVar12.methodPtr;
		*(ulong)(puVar18 + -8) = 0x475e01a;
		bVar10 = (*pIVar4)(pIVar14,pMVar3);
		pIVar9 = local_38;
		if (!bVar10) {
			pIVar4 = local_40.klass.rgctx_data._1_Interpolate__NewBezier_d__16_T____m__Finally1.methodPointer;
			*(ulong)(puVar18 + -8) = 0x475e094;
			(*pIVar4)(pIVar9);
			local_38.__7__wrap2 = null;
			pIVar8 = &local_38.fields;
			*(ulong)(puVar18 + -8) = 0x475e0ab;
			local_38._points_5__2 = null;
			pIVar8 = &local_38.fields;
			*(ulong)(puVar18 + -8) = 0x475e0c4;
			return false;
		}
		pIVar14 = (object)local_38.__7__wrap2;
		if (pIVar14 == null) {
			*(ulong)(puVar18 + -8) = 0x475e32c;
			throw new NullReferenceException();
		}
		pIVar15 = pIVar14.klass;
		uVar22 = (ulong)(pIVar15._2).interface_offsets_count;
		if (uVar22 != 0) {
			pIVar2 = (pIVar15._1).interfaceOffsets;
			lVar20 = 0;
			do {
				if (*(IEnumerator<float>*)((long)&pIVar2.interfaceType + lVar20) == typeof(IEnumerator<float>)) {
					pVVar12 = pIVar15.vtable + *(int)((long)&pIVar2.offset + lVar20);
					goto label_0475e0db;
				}
				lVar20 = lVar20 + 0x10;
			} while (uVar22 * 0x10 != lVar20);
		}
		*(ulong)(puVar18 + -8) = 0x475e079;
	label_0475e0db: ;
		pMVar3 = pVVar12.method;
		pIVar4 = pVVar12.methodPtr;
		*(ulong)(puVar18 + -8) = 0x475e0e4;
		local_44 = (*pIVar4)(pIVar14,pMVar3);
		pIVar14 = (object)local_38.nodes;
		if (pIVar14 != null) {
			uVar22 = 0;
			do {
				pIVar15 = pIVar14.klass;
				uVar17 = (ulong)(pIVar15._2).interface_offsets_count;
				if (uVar17 != 0) {
					pIVar2 = (pIVar15._1).interfaceOffsets;
					lVar20 = 0;
					do {
						if (*(ICollection*)((long)&pIVar2.interfaceType + lVar20) == typeof(ICollection)) {
							pVVar12 = pIVar15.vtable + (*(int)((long)&pIVar2.offset + lVar20) + 1);
							goto label_0475e177;
						}
						lVar20 = lVar20 + 0x10;
					} while (uVar17 * 0x10 != lVar20);
				}
				*(ulong)(puVar18 + -8) = 0x475e14c;
	label_0475e177: ;
				pMVar3 = pVVar12.method;
				pIVar4 = pVVar12.methodPtr;
				*(ulong)(puVar18 + -8) = 0x475e180;
				iVar11 = (*pIVar4)(pIVar14,pMVar3);
				elapsedTime = local_44;
				if ((long)iVar11 <= (long)uVar22) {
					ease = local_38.ease;
					pUVar13 = local_38._points_5__2;
					duration = local_38.maxStep;
					*(ulong)(puVar18 + -8) = 0x475e2e2;
					UVar23 = (Vector3)Interpolate.Bezier(ease, pUVar13, elapsedTime, duration);
					local_38.__2__current = UVar23;
					local_38.__1__state = 1;
					return true;
				}
				pIVar14 = (object)local_38.nodes;
				if (pIVar14 == null) {
					*(ulong)(puVar18 + -8) = 0x475e31d;
					throw new NullReferenceException();
				}
				pUVar13 = local_38._points_5__2;
				pIVar5 = local_38.toVector3;
				pIVar15 = pIVar14.klass;
				uVar17 = (ulong)(pIVar15._2).interface_offsets_count;
				if (uVar17 != 0) {
					pIVar2 = (pIVar15._1).interfaceOffsets;
					lVar20 = 0;
					do {
						if (*(IList*)((long)&pIVar2.interfaceType + lVar20) == typeof(IList)) {
							pVVar12 = pIVar15.vtable + *(int)((long)&pIVar2.offset + lVar20);
							goto label_0475e203;
						}
						lVar20 = lVar20 + 0x10;
					} while (uVar17 * 0x10 != lVar20);
				}
				*(ulong)(puVar18 + -8) = 0x475e1e9;
	label_0475e203: ;
				pMVar3 = pVVar12.method;
				pIVar4 = pVVar12.methodPtr;
				*(ulong)(puVar18 + -8) = 0x475e20f;
				pIVar14 = (*pIVar4)(pIVar14,(int32_t)uVar22,pMVar3);
				pIVar15 = local_40.klass.rgctx_data._3_T;
				if (((pIVar15._2).bitflags1 & 1) == 0) {
					*(ulong)(puVar18 + -8) = 0x475e236;
					pIVar15 = il2cpp_codegen_class_init_checked(pIVar15);
				}
				*(ulong)(puVar18 + -8) = 0x475e244;
				puVar16 = (ulong)il2cpp_runtime_helper_030d6290(pIVar14, pIVar15, puVar21);
				if (pIVar5 == null) {
					*(ulong)(puVar18 + -8) = 0x475e313;
					throw new NullReferenceException();
				}
				pIVar6 = local_40.klass.rgctx_data;
				if (-1 < (int)(pIVar6._3_T._1).byval_arg.bits) {
					puVar16 = (ulong)*puVar16;
				}
				pMVar3 = pIVar6._4_Interpolate_ToVector3_T__Invoke;
				pIVar4 = pMVar3.methodPointer;
				pIVar7 = pMVar3.invoker_method;
				local_50 = puVar16;
				*(ulong)(puVar18 + -8) = 0x475e282;
				(*pIVar7)(pIVar4,pMVar3,pIVar5,&local_50,&local_60);
				if (pUVar13 == null) {
					*(ulong)(puVar18 + -8) = 0x475e318;
					throw new NullReferenceException();
				}
				if ((uint)pUVar13.Length <= uVar22) {
					*(ulong)(puVar18 + -8) = 0x475e30e;
					throw new IndexOutOfRangeException();
				}
				pUVar13[uVar22].x = (float)(undefined4)local_60;
				pUVar13[uVar22].y = (float)local_60._4_4_;
				pUVar13[uVar22].z = local_58;
				uVar22 = uVar22 + 1;
				pIVar14 = (object)local_38.nodes;
			} while (pIVar14 != null);
		}
		*(ulong)(puVar18 + -8) = 0x475e2c9;
		throw new NullReferenceException();
	}

	// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$<>m__Finally1: clean
	private void NewBezier_d__16___Il2CppFullySharedGenericType___m__Finally1()
	{
		object obj;

		this.__1__state = -1;
		obj = (object)this.__7__wrap2;
		if (obj == null) {
			return;
		}
		obj.Dispose();
		return;
	}

	// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current: clean
	private Vector3 NewBezier_d__16___Il2CppFullySharedGenericType__System_Collections_Generic_IEnumerator_UnityEngine_Vector3_get_Current()
	{
		return (Vector3)this.__2__current;
	}

	// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset: 3 lines keep C-only constructs
	private void NewBezier_d__16___Il2CppFullySharedGenericType__System_Collections_IEnumerator_Reset()
	{
		Il2CppClass klass;
		NotSupportedException __this_00;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
		__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotSupportedException();
		throw (object)__this_00;
	}

	// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current: 2 lines keep C-only constructs
	private object NewBezier_d__16___Il2CppFullySharedGenericType__System_Collections_IEnumerator_get_Current()
	{
		object pIVar1;
		ulong local_18;

		local_18._0_4_ = this.__2__current.x;
		local_18._4_4_ = this.__2__current.y;
		return pIVar1;
	}

	// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator: 7 lines keep C-only constructs
	private System_Collections_Generic_IEnumerator_Vector3__o NewBezier_d__16___Il2CppFullySharedGenericType__System_Collections_Generic_IEnumerable_UnityEngine_Vector3_GetEnumerator()
	{
		int iVar1;
		int iVar2;
		Il2CppClass klass;
		_NewBezier_d__16<T> pIVar3;

		if (this.__1__state == -2) {
			iVar1 = this.__l__initialThreadId;
			iVar2 = Environment.CurrentManagedThreadId;
			if (iVar1 == iVar2) {
				this.__1__state = 0;
				pIVar3 = this;
				goto label_0475e56f;
			}
		}
		klass = method.klass.rgctx_data._0_Interpolate__NewBezier_d__16_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		pIVar3 = (_NewBezier_d__16<T>)il2cpp_codegen_object_new(klass);
		(*method.klass.rgctx_data._6_Interpolate__NewBezier_d__16_T___ctor.methodPointer)(pIVar3,0);
		if (pIVar3 == null) {
			throw new NullReferenceException();
		}
	label_0475e56f: ;
		pIVar3.ease = this.__3__ease;
		pIVar3.nodes = this.__3__nodes;
		pIVar3.toVector3 = this.__3__toVector3;
		pIVar3.maxStep = this.__3__maxStep;
		pIVar3.steps = this.__3__steps;
		return (System_Collections_Generic_IEnumerator_Vector3__o)pIVar3;
	}

	// Interpolate.<NewBezier>d__16<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator: 1 lines keep C-only constructs
	private IEnumerator NewBezier_d__16___Il2CppFullySharedGenericType__System_Collections_IEnumerable_GetEnumerator()
	{
		IEnumerator pSVar1;

		pSVar1 = (IEnumerator)(*method.klass.rgctx_data. _7_Interpolate__NewBezier_d__16_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator .methodPointer)();
		return pSVar1;
	}

	// Interpolate.<NewCatmullRom>d__20<object>$$.ctor: clean
	private void NewCatmullRom_d__20_object___ctor(int __1__state)
	{
		int iVar1;

		base();
		this.__1__state = __1__state;
		iVar1 = Environment.CurrentManagedThreadId;
		this.__l__initialThreadId = iVar1;
		return;
	}

	// Interpolate.<NewCatmullRom>d__20<object>$$System.IDisposable.Dispose: clean
	private void NewCatmullRom_d__20_object__System_IDisposable_Dispose()
	{
		return;
	}

	// Interpolate.<NewCatmullRom>d__20<object>$$MoveNext: 31 lines keep C-only constructs
	private bool NewCatmullRom_d__20_object__MoveNext()
	{
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		ToVector3<T> pIVar2;
		ulong uVar3;
		ulong uVar4;
		sbyte cVar5;
		int iVar6;
		int iVar7;
		VirtualInvokeData pVVar8;
		object pIVar9;
		Il2CppClass pIVar10;
		object pIVar11;
		ulong uVar12;
		int iVar13;
		int iVar14;
		int iVar15;
		long lVar16;
		ulong uVar17;
		float in_XMM1_Da;
		float fVar18;
		float fVar19;
		float fVar20;
		Vector3 UVar21;
		Vector3 start;
		Vector3 next;
		Vector3 end;

		iVar7 = this.__1__state;
		if (iVar7 == 2) {
			this.__1__state = -1;
			iVar7 = this._stepCount_5__8;
			iVar14 = this._step_5__9 + 1;
			this._step_5__9 = iVar14;
			goto label_0475e945;
		}
		if (iVar7 == 1) {
			this.__1__state = -1;
			pIVar9 = (object)this.nodes;
			if (pIVar9 != null) {
				pIVar10 = pIVar9.klass;
				uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
				iVar6 = pIVar9.get_Item();
				this._last_5__2 = iVar6 + -1;
				this._current_5__3 = 0;
				iVar14 = 0;
				cVar5 = this.loop;
				iVar7 = this._last_5__2;
				if ((bool)cVar5 != false) goto label_0475e8da;
	label_0475e82b: ;
				if (iVar7 <= iVar14) {
					return false;
				}
				if (iVar14 != 0) goto label_0475e8f3;
				this._previous_5__4 = 0;
				this._start_5__5 = 0;
				iVar13 = 0;
				if (iVar7 != 0) goto label_0475e918;
				do {
					iVar7 = iVar13;
					iVar14 = iVar7;
					do {
						if (this == null) goto label_0475e913;
						while(true) {
							this._end_5__6 = iVar14;
							iVar13 = 0;
							if (cVar5 == false) {
								iVar13 = iVar7;
							}
							if (iVar14 != iVar7) {
								iVar13 = iVar14 + 1;
							}
							this._next_5__7 = iVar13;
							iVar7 = this.slices + 1;
							this._stepCount_5__8 = iVar7;
							this._step_5__9 = 1;
							iVar14 = 1;
	label_0475e945: ;
							if (iVar14 <= iVar7) {
								pIVar9 = (object)this.nodes;
								if (pIVar9 == null) goto label_0475e913;
								pIVar2 = this.toVector3;
								iVar6 = this._previous_5__4;
								pIVar10 = pIVar9.klass;
								uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
								if (uVar12 == 0) goto label_0475e9af;
								pIVar1 = (pIVar10._1).interfaceOffsets;
								lVar16 = 0;
								goto label_0475e9a0;
							}
							iVar14 = this._current_5__3 + 1;
							this._current_5__3 = iVar14;
							cVar5 = this.loop;
							iVar7 = this._last_5__2;
							if ((bool)cVar5 == false) goto label_0475e82b;
	label_0475e8da: ;
							iVar15 = iVar7;
							if (iVar7 < iVar14) {
								this._current_5__3 = 0;
								iVar13 = 0;
							}
							else {
								iVar13 = 0;
								if (iVar14 != 0) {
	label_0475e8f3: ;
									iVar15 = iVar14 + -1;
									iVar13 = iVar14;
								}
							}
							this._previous_5__4 = iVar15;
							this._start_5__5 = iVar13;
							if (iVar13 == iVar7) break;
	label_0475e918: ;
							iVar14 = iVar13 + 1;
						}
						iVar14 = 0;
						iVar13 = iVar7;
					} while (cVar5 != false);
				} while(true);
			}
			goto label_0475e913;
		}
		if (iVar7 != 0) {
			return false;
		}
		this.__1__state = -1;
		pIVar9 = (object)this.nodes;
		if (pIVar9 == null) goto label_0475e913;
		pIVar10 = pIVar9.klass;
		uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
		iVar6 = pIVar9.get_Item();
		if (iVar6 < 2) {
			return false;
		}
		pIVar9 = (object)this.nodes;
		if (pIVar9 == null) goto label_0475e913;
		pIVar2 = this.toVector3;
		pIVar10 = pIVar9.klass;
		uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
		pIVar9 = pIVar9.get_Item(0);
		if (pIVar2 == null) goto label_0475e913;
		pIVar10 = method.klass.rgctx_data._2_T;
		if (((pIVar10._2).bitflags1 & 1) == 0) {
			pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
		}
		if (pIVar9 == null) {
			pIVar11 = null;
		}
		else {
			pIVar11 = il2cpp_vm_Object_IsInst(pIVar9, pIVar10);
			if (pIVar11 == null) goto label_0475ecc3;
		}
		uVar17 = (*(code)pIVar2.invoke_impl)(pIVar2.method_code,pIVar11,pIVar2.method);
		iVar6 = 1;
	label_0475ed2a: ;
		this.__2__current.x = (float)(int)uVar17;
		this.__2__current.y = (float)(int)((ulong)uVar17 >> 0x20);
		this.__2__current.z = in_XMM1_Da;
		this.__1__state = iVar6;
		return true;
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar12 * 0x10 != lVar16)) break;
	label_0475e9a0: ;
			if (*(IList*)((long)&pIVar1.interfaceType + lVar16) == typeof(IList)) {
				pVVar8 = pIVar10.vtable + *(int)((long)&pIVar1.offset + lVar16);
				goto label_0475e9d1;
			}
		}
	label_0475e9af: ;
	label_0475e9d1: ;
		pIVar9 = pIVar9.get_Item(iVar6);
		if (pIVar2 == null) goto label_0475e913;
		pIVar10 = method.klass.rgctx_data._2_T;
		if (((pIVar10._2).bitflags1 & 1) == 0) {
			pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
		}
		if (pIVar9 == null) {
			pIVar11 = null;
		}
		else {
			pIVar11 = il2cpp_vm_Object_IsInst(pIVar9, pIVar10);
			if (pIVar11 == null) goto label_0475ecc3;
		}
		uVar17 = (*(code)pIVar2.invoke_impl)(pIVar2.method_code,pIVar11,pIVar2.method);
		pIVar9 = (object)this.nodes;
		if (pIVar9 != null) {
			pIVar2 = this.toVector3;
			iVar6 = this._start_5__5;
			pIVar10 = pIVar9.klass;
			uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
			fVar18 = in_XMM1_Da;
			pIVar9 = pIVar9.get_Item(iVar6);
			if (pIVar2 == null) goto label_0475e913;
			pIVar10 = method.klass.rgctx_data._2_T;
			if (((pIVar10._2).bitflags1 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			if (pIVar9 == null) {
				pIVar11 = null;
			}
			else {
				pIVar11 = il2cpp_vm_Object_IsInst(pIVar9, pIVar10);
				if (pIVar11 == null) goto label_0475ecc3;
			}
			uVar4 = (*(code)pIVar2.invoke_impl)(pIVar2.method_code,pIVar11,pIVar2.method);
			pIVar9 = (object)this.nodes;
			if (pIVar9 == null) goto label_0475e913;
			pIVar2 = this.toVector3;
			iVar6 = this._end_5__6;
			pIVar10 = pIVar9.klass;
			uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
			fVar19 = fVar18;
			pIVar9 = pIVar9.get_Item(iVar6);
			if (pIVar2 == null) goto label_0475e913;
			pIVar10 = method.klass.rgctx_data._2_T;
			if (((pIVar10._2).bitflags1 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			if (pIVar9 == null) {
				pIVar11 = null;
			}
			else {
				pIVar11 = il2cpp_vm_Object_IsInst(pIVar9, pIVar10);
				if (pIVar11 == null) goto label_0475ecc3;
			}
			uVar3 = (*(code)pIVar2.invoke_impl)(pIVar2.method_code,pIVar11,pIVar2.method);
			pIVar9 = (object)this.nodes;
			if (pIVar9 != null) {
				pIVar2 = this.toVector3;
				iVar6 = this._next_5__7;
				pIVar10 = pIVar9.klass;
				uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
				fVar20 = fVar19;
				pIVar9 = pIVar9.get_Item(iVar6);
				if (pIVar2 != null) {
					pIVar10 = method.klass.rgctx_data._2_T;
					if (((pIVar10._2).bitflags1 & 1) == 0) {
						pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
					}
					if (pIVar9 == null) {
						pIVar11 = null;
					}
					else {
						pIVar11 = il2cpp_vm_Object_IsInst(pIVar9, pIVar10);
						if (pIVar11 == null) {
	label_0475ecc3: ;
							throw new InvalidCastException();
						}
					}
					next._0_8_ =(*(code)pIVar2.invoke_impl)(pIVar2.method_code,pIVar11,pIVar2.method);
					UVar21.z = in_XMM1_Da;
					UVar21.x = (float)(int)uVar17;
					UVar21.y = (float)(int)((ulong)uVar17 >> 0x20);
					start.z = fVar18;
					start.x = (float)(int)uVar4;
					start.y = (float)(int)((ulong)uVar4 >> 0x20);
					next.z = fVar20;
					end.z = fVar19;
					end.x = (float)(int)uVar3;
					end.y = (float)(int)((ulong)uVar3 >> 0x20);
					UVar21 = Interpolate.CatmullRom(UVar21, start, end, next, (float)this._step_5__9, (float)this._stepCount_5__8);
					in_XMM1_Da = UVar21.z;
					uVar17 = UVar21._0_8_;
					iVar6 = 2;
					goto label_0475ed2a;
				}
			}
		}
	label_0475e913: ;
		throw new NullReferenceException();
	}

	// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current: clean
	private Vector3 NewCatmullRom_d__20_object__System_Collections_Generic_IEnumerator_UnityEngine_Vector3_get_Current()
	{
		return (Vector3)this.__2__current;
	}

	// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerator.Reset: 3 lines keep C-only constructs
	private void NewCatmullRom_d__20_object__System_Collections_IEnumerator_Reset()
	{
		Il2CppClass klass;
		NotSupportedException __this_00;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
		__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotSupportedException();
		throw (object)__this_00;
	}

	// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerator.get_Current: 2 lines keep C-only constructs
	private object NewCatmullRom_d__20_object__System_Collections_IEnumerator_get_Current()
	{
		object pIVar1;
		ulong local_18;

		local_18._0_4_ = this.__2__current.x;
		local_18._4_4_ = this.__2__current.y;
		return pIVar1;
	}

	// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator: 6 lines keep C-only constructs
	private System_Collections_Generic_IEnumerator_Vector3__o NewCatmullRom_d__20_object__System_Collections_Generic_IEnumerable_UnityEngine_Vector3_GetEnumerator()
	{
		int iVar1;
		int iVar2;
		Il2CppClass klass;
		_NewCatmullRom_d__20<T> __this_00;

		if (this.__1__state == -2) {
			iVar1 = this.__l__initialThreadId;
			iVar2 = Environment.CurrentManagedThreadId;
			if (iVar1 == iVar2) {
				this.__1__state = 0;
				__this_00 = this;
				goto label_0475ee5e;
			}
		}
		klass = method.klass.rgctx_data._0_Interpolate__NewCatmullRom_d__20_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (_NewCatmullRom_d__20<T>)il2cpp_codegen_object_new(klass);
		__this_00 = new Object();
		__this_00.__1__state = 0;
		iVar2 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar2;
	label_0475ee5e: ;
		__this_00.nodes = this.__3__nodes;
		__this_00.toVector3 = this.__3__toVector3;
		__this_00.slices = this.__3__slices;
		__this_00.loop = this.__3__loop;
		return (System_Collections_Generic_IEnumerator_Vector3__o)__this_00;
	}

	// Interpolate.<NewCatmullRom>d__20<object>$$System.Collections.IEnumerable.GetEnumerator: 1 lines keep C-only constructs
	private IEnumerator NewCatmullRom_d__20_object__System_Collections_IEnumerable_GetEnumerator()
	{
		System_Collections_Generic_IEnumerator_Vector3__o pSVar1;

		pSVar1 = this.System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator();
		return (IEnumerator)pSVar1;
	}

	// Interpolate.<NewCatmullRom>d__20<Vector3>$$.ctor: clean
	private void NewCatmullRom_d__20_Vector3___ctor(int __1__state)
	{
		int iVar1;

		base();
		this.__1__state = __1__state;
		iVar1 = Environment.CurrentManagedThreadId;
		this.__l__initialThreadId = iVar1;
		return;
	}

	// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.IDisposable.Dispose: clean
	private void NewCatmullRom_d__20_Vector3__System_IDisposable_Dispose()
	{
		return;
	}

	// Interpolate.<NewCatmullRom>d__20<Vector3>$$MoveNext: 31 lines keep C-only constructs
	private bool NewCatmullRom_d__20_Vector3__MoveNext()
	{
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		ToVector3<T> pIVar2;
		ulong uVar3;
		ulong uVar4;
		sbyte cVar5;
		int iVar6;
		int iVar7;
		VirtualInvokeData pVVar8;
		object pIVar9;
		Il2CppClass pIVar10;
		ulong puVar11;
		ulong uVar12;
		int iVar13;
		int iVar14;
		int iVar15;
		long lVar16;
		ulong uVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		Vector3 UVar21;
		Vector3 start;
		Vector3 next;
		Vector3 end;

		iVar7 = this.__1__state;
		if (iVar7 == 2) {
			this.__1__state = -1;
			iVar7 = this._stepCount_5__8;
			iVar14 = this._step_5__9 + 1;
			this._step_5__9 = iVar14;
			goto label_04a502fb;
		}
		if (iVar7 == 1) {
			this.__1__state = -1;
			pIVar9 = (object)this.nodes;
			if (pIVar9 == null) goto label_04a502c9;
			pIVar10 = pIVar9.klass;
			uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
			iVar6 = pIVar9.get_Item();
			this._last_5__2 = iVar6 + -1;
			this._current_5__3 = 0;
			iVar14 = 0;
			cVar5 = this.loop;
			iVar7 = this._last_5__2;
			if ((bool)cVar5 != false) goto label_04a50290;
	label_04a501db: ;
			if (iVar14 < iVar7) {
				if (iVar14 != 0) goto label_04a502a9;
				this._previous_5__4 = 0;
				this._start_5__5 = 0;
				iVar13 = 0;
				if (iVar7 != 0) goto label_04a502ce;
				do {
					iVar7 = iVar13;
					iVar14 = iVar7;
					do {
						if (this == null) goto label_04a502c9;
						while(true) {
							this._end_5__6 = iVar14;
							iVar13 = 0;
							if (cVar5 == false) {
								iVar13 = iVar7;
							}
							if (iVar14 != iVar7) {
								iVar13 = iVar14 + 1;
							}
							this._next_5__7 = iVar13;
							iVar7 = this.slices + 1;
							this._stepCount_5__8 = iVar7;
							this._step_5__9 = 1;
							iVar14 = 1;
	label_04a502fb: ;
							if (iVar14 <= iVar7) {
								pIVar9 = (object)this.nodes;
								if (pIVar9 == null) goto label_04a502c9;
								pIVar2 = this.toVector3;
								iVar6 = this._previous_5__4;
								pIVar10 = pIVar9.klass;
								uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
								if (uVar12 == 0) goto label_04a5036f;
								pIVar1 = (pIVar10._1).interfaceOffsets;
								lVar16 = 0;
								goto label_04a50360;
							}
							iVar14 = this._current_5__3 + 1;
							this._current_5__3 = iVar14;
							cVar5 = this.loop;
							iVar7 = this._last_5__2;
							if ((bool)cVar5 == false) goto label_04a501db;
	label_04a50290: ;
							iVar15 = iVar7;
							if (iVar7 < iVar14) {
								this._current_5__3 = 0;
								iVar13 = 0;
							}
							else {
								iVar13 = 0;
								if (iVar14 != 0) {
	label_04a502a9: ;
									iVar15 = iVar14 + -1;
									iVar13 = iVar14;
								}
							}
							this._previous_5__4 = iVar15;
							this._start_5__5 = iVar13;
							if (iVar13 == iVar7) break;
	label_04a502ce: ;
							iVar14 = iVar13 + 1;
						}
						iVar14 = 0;
						iVar13 = iVar7;
					} while (cVar5 != false);
				} while(true);
			}
		}
		else if (iVar7 == 0) {
			this.__1__state = -1;
			pIVar9 = (object)this.nodes;
			if (pIVar9 != null) {
				pIVar10 = pIVar9.klass;
				uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
				iVar6 = pIVar9.get_Item();
				if (iVar6 < 2) {
					return false;
				}
				pIVar9 = (object)this.nodes;
				if (pIVar9 != null) {
					pIVar2 = this.toVector3;
					pIVar10 = pIVar9.klass;
					uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
					pIVar9 = pIVar9.get_Item(0);
					if (pIVar2 != null) {
						pIVar10 = method.klass.rgctx_data._2_T;
						if (((pIVar10._2).bitflags1 & 1) == 0) {
							pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
						}
						if (pIVar9 != null) {
							if ((pIVar9.klass._1).element_class == (pIVar10._1).element_class) {
								puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
								UVar21.z = *(float)(puVar11 + 1);
								uVar17 = (*(code)pIVar2.invoke_impl)((int)*puVar11,pIVar2.method_code,pIVar2.method);
								iVar6 = 1;
	label_04a506ee: ;
								this.__2__current.x = (float)(int)uVar17;
								this.__2__current.y = (float)(int)((ulong)uVar17 >> 0x20);
								this.__2__current.z = UVar21.z;
								this.__1__state = iVar6;
								return true;
							}
							goto label_04a5070b;
						}
					}
				}
			}
			goto label_04a502c9;
		}
		return false;
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar12 * 0x10 != lVar16)) break;
	label_04a50360: ;
			if (*(IList*)((long)&pIVar1.interfaceType + lVar16) == typeof(IList)) {
				pVVar8 = pIVar10.vtable + *(int)((long)&pIVar1.offset + lVar16);
				goto label_04a50391;
			}
		}
	label_04a5036f: ;
	label_04a50391: ;
		pIVar9 = pIVar9.get_Item(iVar6);
		if (pIVar2 != null) {
			pIVar10 = method.klass.rgctx_data._2_T;
			if (((pIVar10._2).bitflags1 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			if (pIVar9 != null) {
				if ((pIVar9.klass._1).element_class != (pIVar10._1).element_class) goto label_04a5070b;
				puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
				UVar21.z = *(float)(puVar11 + 1);
				uVar17 = (*(code)pIVar2.invoke_impl)((int)*puVar11,pIVar2.method_code,pIVar2.method);
				pIVar9 = (object)this.nodes;
				if (pIVar9 != null) {
					pIVar2 = this.toVector3;
					iVar6 = this._start_5__5;
					pIVar10 = pIVar9.klass;
					uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
					pIVar9 = pIVar9.get_Item(iVar6);
					if (pIVar2 != null) {
						pIVar10 = method.klass.rgctx_data._2_T;
						if (((pIVar10._2).bitflags1 & 1) == 0) {
							pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
						}
						if (pIVar9 != null) {
							if ((pIVar9.klass._1).element_class != (pIVar10._1).element_class) goto label_04a5070b;
							puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
							fVar18 = *(float)(puVar11 + 1);
							uVar4 = (*(code)pIVar2.invoke_impl)((int)*puVar11,pIVar2.method_code,pIVar2.method);
							pIVar9 = (object)this.nodes;
							if (pIVar9 != null) {
								pIVar2 = this.toVector3;
								iVar6 = this._end_5__6;
								pIVar10 = pIVar9.klass;
								uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
								pIVar9 = pIVar9.get_Item(iVar6);
								if (pIVar2 != null) {
									pIVar10 = method.klass.rgctx_data._2_T;
									if (((pIVar10._2).bitflags1 & 1) == 0) {
										pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
									}
									if (pIVar9 != null) {
										if ((pIVar9.klass._1).element_class != (pIVar10._1).element_class) {
	label_04a5070b: ;
											throw new InvalidCastException();
										}
										puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
										fVar19 = *(float)(puVar11 + 1);
										uVar3 = (*(code)pIVar2.invoke_impl)((int)*puVar11,pIVar2.method_code,pIVar2.method);
										pIVar9 = (object)this.nodes;
										if (pIVar9 != null) {
											pIVar2 = this.toVector3;
											iVar6 = this._next_5__7;
											pIVar10 = pIVar9.klass;
											uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
											pIVar9 = pIVar9.get_Item(iVar6);
											if (pIVar2 != null) {
												pIVar10 = method.klass.rgctx_data._2_T;
												if (((pIVar10._2).bitflags1 & 1) == 0) {
													pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
												}
												if (pIVar9 != null) {
													if ((pIVar9.klass._1).element_class == (pIVar10._1).element_class) {
														puVar11 = il2cpp_vm_Object_Unbox(pIVar9);
														fVar20 = *(float)(puVar11 + 1);
														next._0_8_ =(*(code)pIVar2.invoke_impl)((int)*puVar11,pIVar2.method_code,pIVar2.method);
														UVar21.z = UVar21.z;
														UVar21.x = (float)(int)uVar17;
														UVar21.y = (float)(int)((ulong)uVar17 >> 0x20);
														start.z = fVar18;
														start.x = (float)(int)uVar4;
														start.y = (float)(int)((ulong)uVar4 >> 0x20);
														next.z = fVar20;
														end.z = fVar19;
														end.x = (float)(int)uVar3;
														end.y = (float)(int)((ulong)uVar3 >> 0x20);
														UVar21 = Interpolate.CatmullRom(UVar21, start, end, next, (float)this._step_5__9, (float)this._stepCount_5__8);
														UVar21.z = UVar21.z;
														uVar17 = UVar21._0_8_;
														iVar6 = 2;
														goto label_04a506ee;
													}
													goto label_04a5070b;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_04a502c9: ;
		throw new NullReferenceException();
	}

	// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current: clean
	private Vector3 NewCatmullRom_d__20_Vector3__System_Collections_Generic_IEnumerator_UnityEngine_Vector3_get_Current()
	{
		return (Vector3)this.__2__current;
	}

	// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerator.Reset: 3 lines keep C-only constructs
	private void NewCatmullRom_d__20_Vector3__System_Collections_IEnumerator_Reset()
	{
		Il2CppClass klass;
		NotSupportedException __this_00;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
		__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotSupportedException();
		throw (object)__this_00;
	}

	// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerator.get_Current: 2 lines keep C-only constructs
	private object NewCatmullRom_d__20_Vector3__System_Collections_IEnumerator_get_Current()
	{
		object pIVar1;
		ulong local_18;

		local_18._0_4_ = this.__2__current.x;
		local_18._4_4_ = this.__2__current.y;
		return pIVar1;
	}

	// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator: 6 lines keep C-only constructs
	private System_Collections_Generic_IEnumerator_Vector3__o NewCatmullRom_d__20_Vector3__System_Collections_Generic_IEnumerable_UnityEngine_Vector3_GetEnumerator()
	{
		int iVar1;
		int iVar2;
		Il2CppClass klass;
		_NewCatmullRom_d__20<T> __this_00;

		if (this.__1__state == -2) {
			iVar1 = this.__l__initialThreadId;
			iVar2 = Environment.CurrentManagedThreadId;
			if (iVar1 == iVar2) {
				this.__1__state = 0;
				__this_00 = this;
				goto label_04a5082e;
			}
		}
		klass = method.klass.rgctx_data._0_Interpolate__NewCatmullRom_d__20_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (_NewCatmullRom_d__20<T>)il2cpp_codegen_object_new(klass);
		__this_00 = new Object();
		__this_00.__1__state = 0;
		iVar2 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar2;
	label_04a5082e: ;
		__this_00.nodes = this.__3__nodes;
		__this_00.toVector3 = this.__3__toVector3;
		__this_00.slices = this.__3__slices;
		__this_00.loop = this.__3__loop;
		return (System_Collections_Generic_IEnumerator_Vector3__o)__this_00;
	}

	// Interpolate.<NewCatmullRom>d__20<Vector3>$$System.Collections.IEnumerable.GetEnumerator: 1 lines keep C-only constructs
	private IEnumerator NewCatmullRom_d__20_Vector3__System_Collections_IEnumerable_GetEnumerator()
	{
		System_Collections_Generic_IEnumerator_Vector3__o pSVar1;

		pSVar1 = this.System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator();
		return (IEnumerator)pSVar1;
	}

	// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$.ctor: clean
	private void NewCatmullRom_d__20___Il2CppFullySharedGenericType___ctor(int __1__state)
	{
		int iVar1;

		base();
		this.__1__state = __1__state;
		iVar1 = Environment.CurrentManagedThreadId;
		this.__l__initialThreadId = iVar1;
		return;
	}

	// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose: clean
	private void NewCatmullRom_d__20___Il2CppFullySharedGenericType__System_IDisposable_Dispose()
	{
		return;
	}

	// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$MoveNext: 77 lines keep C-only constructs
	private bool NewCatmullRom_d__20___Il2CppFullySharedGenericType__MoveNext()
	{
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		MethodInfo pMVar2;
		Il2CppMethodPointer pIVar3;
		ToVector3<T> pIVar4;
		Interpolate__NewCatmullRom_d__20_T__RGCTXs pIVar5;
		InvokerMethod pIVar6;
		long lVar7;
		long lVar8;
		long lVar9;
		float fVar10;
		MethodInfo_49508D0 pMVar11;
		sbyte cVar12;
		int iVar13;
		int iVar14;
		ulong uVar15;
		VirtualInvokeData pVVar16;
		object pIVar17;
		Il2CppClass pIVar18;
		ulong puVar19;
		long lVar20;
		ulong uVar21;
		int iVar22;
		int iVar23;
		int iVar24;
		long lVar25;
		long lVar26;
		long lVar27;
		float fVar28;
		float fVar29;
		Vector3 previous;
		Vector3 UVar30;
		Vector3 start;
		Vector3 end;
		float[] afStack_b8 = new float[2];
		long[] local_a8 = new long[3];
		long local_80;
		long local_78;
		float local_5c;
		float local_58;
		float local_54;
		MethodInfo_49508D0 local_50;
		long local_48;
		float local_40;
		ulong local_38;

		if (g_data_0754162d == false) {
			g_data_0754162d = true;
		}
		uVar15 = (ulong)(method.klass.rgctx_data._2_T._2).stack_slot_size + 0xf & 0xfffffffffffffff0;
		lVar27 = (long)local_a8 - uVar15;
		lVar20 = (lVar27 - uVar15) - uVar15;
		lVar26 = lVar20 - uVar15;
		iVar14 = this.__1__state;
		local_50 = method;
		if (iVar14 == 2) {
			this.__1__state = -1;
			iVar14 = this._stepCount_5__8;
			iVar23 = this._step_5__9 + 1;
			this._step_5__9 = iVar23;
			local_78 = lVar20;
			goto label_04a50c65;
		}
		if (iVar14 == 1) {
			this.__1__state = -1;
			pIVar17 = (object)this.nodes;
			local_78 = lVar20;
			if (pIVar17 == null) goto label_04a510fd;
			pIVar18 = pIVar17.klass;
			uVar21 = (ulong)(pIVar18._2).interface_offsets_count;
			if (uVar21 != 0) {
				pIVar1 = (pIVar18._1).interfaceOffsets;
				lVar25 = 0;
				do {
					if (*(ICollection*)((long)&pIVar1.interfaceType + lVar25) == typeof(ICollection)) {
						pVVar16 = pIVar18.vtable + (*(int)((long)&pIVar1.offset + lVar25) + 1);
						goto label_04a50b05;
					}
					lVar25 = lVar25 + 0x10;
				} while (uVar21 * 0x10 != lVar25);
			}
			*(ulong)(lVar26 + -8) = 0x4a50a60;
	label_04a50b05: ;
			pMVar2 = pVVar16.method;
			pIVar3 = pVVar16.methodPtr;
			*(ulong)(lVar26 + -8) = 0x4a50b0e;
			iVar13 = (*pIVar3)(pIVar17,pMVar2);
			this._last_5__2 = iVar13 + -1;
			this._current_5__3 = 0;
			iVar23 = 0;
			cVar12 = this.loop;
			iVar14 = this._last_5__2;
			if ((bool)cVar12 != false) goto label_04a50bfa;
	label_04a50b2b: ;
			if (iVar23 < iVar14) {
				if (iVar23 != 0) goto label_04a50c13;
				this._previous_5__4 = 0;
				this._start_5__5 = 0;
				iVar22 = 0;
				if (iVar14 != 0) goto label_04a50c38;
				do {
					iVar14 = iVar22;
					iVar23 = iVar14;
					do {
						if (this == null) goto label_04a510fd;
						while(true) {
							this._end_5__6 = iVar23;
							iVar22 = 0;
							if (cVar12 == false) {
								iVar22 = iVar14;
							}
							if (iVar23 != iVar14) {
								iVar22 = iVar23 + 1;
							}
							this._next_5__7 = iVar22;
							iVar14 = this.slices + 1;
							this._stepCount_5__8 = iVar14;
							this._step_5__9 = 1;
							iVar23 = 1;
	label_04a50c65: ;
							if (iVar23 <= iVar14) {
								pIVar17 = (object)this.nodes;
								local_a8[2] = lVar27;
								local_80 = lVar26;
								if (pIVar17 == null) goto label_04a510fd;
								pIVar4 = this.toVector3;
								iVar13 = this._previous_5__4;
								pIVar18 = pIVar17.klass;
								uVar21 = (ulong)(pIVar18._2).interface_offsets_count;
								if (uVar21 == 0) goto label_04a50cdf;
								pIVar1 = (pIVar18._1).interfaceOffsets;
								lVar20 = 0;
								goto label_04a50cd0;
							}
							iVar23 = this._current_5__3 + 1;
							this._current_5__3 = iVar23;
							cVar12 = this.loop;
							iVar14 = this._last_5__2;
							if ((bool)cVar12 == false) goto label_04a50b2b;
	label_04a50bfa: ;
							iVar24 = iVar14;
							if (iVar14 < iVar23) {
								this._current_5__3 = 0;
								iVar22 = 0;
							}
							else {
								iVar22 = 0;
								if (iVar23 != 0) {
	label_04a50c13: ;
									iVar24 = iVar23 + -1;
									iVar22 = iVar23;
								}
							}
							this._previous_5__4 = iVar24;
							this._start_5__5 = iVar22;
							if (iVar22 == iVar14) break;
	label_04a50c38: ;
							iVar23 = iVar22 + 1;
						}
						iVar23 = 0;
						iVar22 = iVar14;
					} while (cVar12 != false);
				} while(true);
			}
		}
		else if (iVar14 == 0) {
			this.__1__state = -1;
			pIVar17 = (object)this.nodes;
			if (pIVar17 != null) {
				pIVar18 = pIVar17.klass;
				uVar15 = (ulong)(pIVar18._2).interface_offsets_count;
				if (uVar15 != 0) {
					pIVar1 = (pIVar18._1).interfaceOffsets;
					lVar20 = 0;
					do {
						if (*(ICollection*)((long)&pIVar1.interfaceType + lVar20) == typeof(ICollection)) {
							pVVar16 = pIVar18.vtable + (*(int)((long)&pIVar1.offset + lVar20) + 1);
							goto label_04a50a7f;
						}
						lVar20 = lVar20 + 0x10;
					} while (uVar15 * 0x10 != lVar20);
				}
				*(ulong)(lVar26 + -8) = 0x4a509d0;
	label_04a50a7f: ;
				pMVar2 = pVVar16.method;
				pIVar3 = pVVar16.methodPtr;
				*(ulong)(lVar26 + -8) = 0x4a50a88;
				iVar13 = (*pIVar3)(pIVar17,pMVar2);
				if (iVar13 < 2) {
					return false;
				}
				pIVar17 = (object)this.nodes;
				if (pIVar17 != null) {
					pIVar4 = this.toVector3;
					pIVar18 = pIVar17.klass;
					uVar15 = (ulong)(pIVar18._2).interface_offsets_count;
					if (uVar15 != 0) {
						pIVar1 = (pIVar18._1).interfaceOffsets;
						lVar20 = 0;
						do {
							if (*(IList*)((long)&pIVar1.interfaceType + lVar20) == typeof(IList)) {
								pVVar16 = pIVar18.vtable + *(int)((long)&pIVar1.offset + lVar20);
								goto label_04a50b68;
							}
							lVar20 = lVar20 + 0x10;
						} while (uVar15 * 0x10 != lVar20);
					}
					*(ulong)(lVar26 + -8) = 0x4a50ae9;
	label_04a50b68: ;
					pMVar2 = pVVar16.method;
					pIVar3 = pVVar16.methodPtr;
					*(ulong)(lVar26 + -8) = 0x4a50b73;
					pIVar17 = (*pIVar3)(pIVar17,0,pMVar2);
					pIVar18 = local_50.klass.rgctx_data._2_T;
					if (((pIVar18._2).bitflags1 & 1) == 0) {
						*(ulong)(lVar26 + -8) = 0x4a50b9a;
						pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
					}
					*(ulong)(lVar26 + -8) = 0x4a50ba8;
					puVar19 = (ulong)il2cpp_runtime_helper_030d6290(pIVar17, pIVar18, lVar27);
					if (pIVar4 != null) {
						pIVar5 = local_50.klass.rgctx_data;
						pMVar2 = pIVar5._3_Interpolate_ToVector3_T__Invoke;
						pIVar3 = pMVar2.methodPointer;
						if (-1 < (int)(pIVar5._2_T._1).byval_arg.bits) {
							puVar19 = (ulong)*puVar19;
						}
						pIVar6 = pMVar2.invoker_method;
						local_38 = puVar19;
						*(ulong)(lVar26 + -8) = 0x4a50be6;
						(*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
						fVar28 = (float)local_48;
						fVar29 = (float)((ulong)local_48 >> 0x20);
						iVar13 = 1;
	label_04a510e0: ;
						this.__2__current.x = fVar28;
						this.__2__current.y = fVar29;
						this.__2__current.z = local_40;
						this.__1__state = iVar13;
						return true;
					}
				}
			}
			goto label_04a510fd;
		}
		return false;
		while (true) {
			lVar20 = lVar20 + 0x10;
			if (!(uVar21 * 0x10 != lVar20)) break;
	label_04a50cd0: ;
			if (*(IList*)((long)&pIVar1.interfaceType + lVar20) == typeof(IList)) {
				pVVar16 = pIVar18.vtable + *(int)((long)&pIVar1.offset + lVar20);
				goto label_04a50d01;
			}
		}
	label_04a50cdf: ;
		*(ulong)(lVar26 + -8) = 0x4a50ce9;
	label_04a50d01: ;
		pMVar2 = pVVar16.method;
		pIVar3 = pVVar16.methodPtr;
		*(ulong)(lVar26 + -8) = 0x4a50d0d;
		pIVar17 = (*pIVar3)(pIVar17,iVar13,pMVar2);
		pIVar18 = local_50.klass.rgctx_data._2_T;
		if (((pIVar18._2).bitflags1 & 1) == 0) {
			*(ulong)(lVar26 + -8) = 0x4a50d34;
			pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
		}
		lVar20 = local_a8[2];
		*(ulong)(lVar26 + -8) = 0x4a50d46;
		puVar19 = (ulong)il2cpp_runtime_helper_030d6290(pIVar17, pIVar18, lVar20);
		if (pIVar4 != null) {
			pIVar5 = local_50.klass.rgctx_data;
			pMVar2 = pIVar5._3_Interpolate_ToVector3_T__Invoke;
			pIVar3 = pMVar2.methodPointer;
			if (-1 < (int)(pIVar5._2_T._1).byval_arg.bits) {
				puVar19 = (ulong)*puVar19;
			}
			pIVar6 = pMVar2.invoker_method;
			local_38 = puVar19;
			*(ulong)(lVar26 + -8) = 0x4a50d85;
			(*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
			pIVar17 = (object)this.nodes;
			if (pIVar17 != null) {
				local_a8[2] = local_48;
				local_5c = local_40;
				pIVar4 = this.toVector3;
				iVar13 = this._start_5__5;
				pIVar18 = pIVar17.klass;
				uVar21 = (ulong)(pIVar18._2).interface_offsets_count;
				if (uVar21 != 0) {
					pIVar1 = (pIVar18._1).interfaceOffsets;
					lVar20 = 0;
					do {
						if (*(IList*)((long)&pIVar1.interfaceType + lVar20) == typeof(IList)) {
							pVVar16 = pIVar18.vtable + *(int)((long)&pIVar1.offset + lVar20);
							goto label_04a50e11;
						}
						lVar20 = lVar20 + 0x10;
					} while (uVar21 * 0x10 != lVar20);
				}
				*(ulong)(lVar26 + -8) = 0x4a50df9;
	label_04a50e11: ;
				pMVar2 = pVVar16.method;
				pIVar3 = pVVar16.methodPtr;
				*(ulong)(lVar26 + -8) = 0x4a50e1d;
				pIVar17 = (*pIVar3)(pIVar17,iVar13,pMVar2);
				pMVar11 = local_50;
				pIVar18 = local_50.klass.rgctx_data._2_T;
				if (((pIVar18._2).bitflags1 & 1) == 0) {
					*(ulong)(lVar26 + -8) = 0x4a50e44;
					pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
				}
				*(ulong)(lVar26 + -8) = 0x4a50e52;
				puVar19 = (ulong)il2cpp_runtime_helper_030d6290(pIVar17, pIVar18, lVar27 - uVar15);
				if (pIVar4 != null) {
					pIVar5 = pMVar11.klass.rgctx_data;
					pMVar2 = pIVar5._3_Interpolate_ToVector3_T__Invoke;
					pIVar3 = pMVar2.methodPointer;
					if (-1 < (int)(pIVar5._2_T._1).byval_arg.bits) {
						puVar19 = (ulong)*puVar19;
					}
					pIVar6 = pMVar2.invoker_method;
					local_38 = puVar19;
					*(ulong)(lVar26 + -8) = 0x4a50e8c;
					(*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
					pIVar17 = (object)this.nodes;
					if (pIVar17 != null) {
						local_a8[0] = local_48;
						local_a8[1] = 0;
						local_58 = local_40;
						pIVar4 = this.toVector3;
						iVar13 = this._end_5__6;
						pIVar18 = pIVar17.klass;
						uVar15 = (ulong)(pIVar18._2).interface_offsets_count;
						if (uVar15 != 0) {
							pIVar1 = (pIVar18._1).interfaceOffsets;
							lVar20 = 0;
							do {
								if (*(IList*)((long)&pIVar1.interfaceType + lVar20) == typeof(IList)) {
									pVVar16 = pIVar18.vtable + *(int)((long)&pIVar1.offset + lVar20);
									goto label_04a50f11;
								}
								lVar20 = lVar20 + 0x10;
							} while (uVar15 * 0x10 != lVar20);
						}
						*(ulong)(lVar26 + -8) = 0x4a50ef9;
	label_04a50f11: ;
						pMVar2 = pVVar16.method;
						pIVar3 = pVVar16.methodPtr;
						*(ulong)(lVar26 + -8) = 0x4a50f1d;
						pIVar17 = (*pIVar3)(pIVar17,iVar13,pMVar2);
						pIVar18 = pMVar11.klass.rgctx_data._2_T;
						if (((pIVar18._2).bitflags1 & 1) == 0) {
							*(ulong)(lVar26 + -8) = 0x4a50f40;
							pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
						}
						lVar20 = local_78;
						*(ulong)(lVar26 + -8) = 0x4a50f4f;
						puVar19 = (ulong)il2cpp_runtime_helper_030d6290(pIVar17, pIVar18, lVar20);
						if (pIVar4 != null) {
							pIVar5 = pMVar11.klass.rgctx_data;
							pMVar2 = pIVar5._3_Interpolate_ToVector3_T__Invoke;
							pIVar3 = pMVar2.methodPointer;
							if (-1 < (int)(pIVar5._2_T._1).byval_arg.bits) {
								puVar19 = (ulong)*puVar19;
							}
							pIVar6 = pMVar2.invoker_method;
							local_38 = puVar19;
							*(ulong)(lVar26 + -8) = 0x4a50f89;
							(*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
							pIVar17 = (object)this.nodes;
							if (pIVar17 != null) {
								local_78 = local_48;
								local_54 = local_40;
								pIVar4 = this.toVector3;
								iVar13 = this._next_5__7;
								pIVar18 = pIVar17.klass;
								uVar15 = (ulong)(pIVar18._2).interface_offsets_count;
								if (uVar15 != 0) {
									pIVar1 = (pIVar18._1).interfaceOffsets;
									lVar20 = 0;
									do {
										if (*(IList*)((long)&pIVar1.interfaceType + lVar20) == typeof(IList)) {
											pVVar16 = pIVar18.vtable + *(int)((long)&pIVar1.offset + lVar20);
											goto label_04a51011;
										}
										lVar20 = lVar20 + 0x10;
									} while (uVar15 * 0x10 != lVar20);
								}
								*(ulong)(lVar26 + -8) = 0x4a50ff9;
	label_04a51011: ;
								pMVar2 = pVVar16.method;
								pIVar3 = pVVar16.methodPtr;
								*(ulong)(lVar26 + -8) = 0x4a5101d;
								pIVar17 = (*pIVar3)(pIVar17,iVar13,pMVar2);
								pIVar18 = pMVar11.klass.rgctx_data._2_T;
								if (((pIVar18._2).bitflags1 & 1) == 0) {
									*(ulong)(lVar26 + -8) = 0x4a51040;
									pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
								}
								lVar20 = local_80;
								*(ulong)(lVar26 + -8) = 0x4a5104f;
								puVar19 = (ulong)il2cpp_runtime_helper_030d6290(pIVar17, pIVar18, lVar20);
								if (pIVar4 != null) {
									pIVar5 = pMVar11.klass.rgctx_data;
									pMVar2 = pIVar5._3_Interpolate_ToVector3_T__Invoke;
									pIVar3 = pMVar2.methodPointer;
									if (-1 < (int)(pIVar5._2_T._1).byval_arg.bits) {
										puVar19 = (ulong)*puVar19;
									}
									pIVar6 = pMVar2.invoker_method;
									local_38 = puVar19;
									*(ulong)(lVar26 + -8) = 0x4a51089;
									(*pIVar6)(pIVar3,pMVar2,pIVar4,&local_38,&local_48);
									iVar14 = this._step_5__9;
									UVar30.z = local_40;
									UVar30.x = (float)(undefined4)local_48;
									UVar30.y = (float)local_48._4_4_;
									*(float)(lVar26 + -8) = (float)this._stepCount_5__8;
									*(float)(lVar26 + -0x10) = (float)iVar14;
									fVar10 = local_54;
									fVar29 = local_58;
									fVar28 = local_5c;
									lVar8 = local_78;
									lVar25 = local_a8[2];
									lVar20 = local_a8[0];
									*(ulong)(lVar26 + -0x18) = 0x4a510d7;
									lVar9 = local_78;
									lVar7 = local_a8[2];
									lVar27 = local_a8[0];
									previous.z = fVar28;
									local_a8[2]._0_4_ = (undefined4)lVar25;
									local_a8[2]._4_4_ = SUB84(lVar25, 4);
									previous.x = (float)(undefined4)local_a8[2];
									previous.y = (float)local_a8[2]._4_4_;
									start.z = fVar29;
									local_a8[0]._0_4_ = (undefined4)lVar20;
									local_a8[0]._4_4_ = SUB84(lVar20, 4);
									start.x = (float)(undefined4)local_a8[0];
									start.y = (float)local_a8[0]._4_4_;
									end.z = fVar10;
									local_78._0_4_ = (undefined4)lVar8;
									local_78._4_4_ = SUB84(lVar8, 4);
									end.x = (float)(undefined4)local_78;
									end.y = (float)local_78._4_4_;
									local_a8[0] = lVar27;
									local_a8[2] = lVar7;
									local_78 = lVar9;
									UVar30 = Interpolate.CatmullRom(previous, start, end, UVar30, *(float)(lVar26 + -0x10), *(float)(lVar26 + -8));
									local_40 = UVar30.z;
									fVar28 = UVar30.x;
									fVar29 = UVar30.y;
									iVar13 = 2;
									goto label_04a510e0;
								}
							}
						}
					}
				}
			}
		}
	label_04a510fd: ;
		*(ulong)(lVar26 + -8) = 0x4a51102;
		throw new NullReferenceException();
	}

	// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current: clean
	private Vector3 NewCatmullRom_d__20___Il2CppFullySharedGenericType__System_Collections_Generic_IEnumerator_UnityEngine_Vector3_get_Current()
	{
		return (Vector3)this.__2__current;
	}

	// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset: 3 lines keep C-only constructs
	private void NewCatmullRom_d__20___Il2CppFullySharedGenericType__System_Collections_IEnumerator_Reset()
	{
		Il2CppClass klass;
		NotSupportedException __this_00;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
		__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotSupportedException();
		throw (object)__this_00;
	}

	// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current: 2 lines keep C-only constructs
	private object NewCatmullRom_d__20___Il2CppFullySharedGenericType__System_Collections_IEnumerator_get_Current()
	{
		object pIVar1;
		ulong local_18;

		local_18._0_4_ = this.__2__current.x;
		local_18._4_4_ = this.__2__current.y;
		return pIVar1;
	}

	// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator: 7 lines keep C-only constructs
	private System_Collections_Generic_IEnumerator_Vector3__o NewCatmullRom_d__20___Il2CppFullySharedGenericType__System_Collections_Generic_IEnumerable_UnityEngine_Vector3_GetEnumerator()
	{
		int iVar1;
		int iVar2;
		Il2CppClass klass;
		_NewCatmullRom_d__20<T> pIVar3;

		if (this.__1__state == -2) {
			iVar1 = this.__l__initialThreadId;
			iVar2 = Environment.CurrentManagedThreadId;
			if (iVar1 == iVar2) {
				this.__1__state = 0;
				pIVar3 = this;
				goto label_04a5121f;
			}
		}
		klass = method.klass.rgctx_data._0_Interpolate__NewCatmullRom_d__20_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		pIVar3 = (_NewCatmullRom_d__20<T>)il2cpp_codegen_object_new(klass);
		(*method.klass.rgctx_data._4_Interpolate__NewCatmullRom_d__20_T___ctor.methodPointer)(pIVar3,0);
		if (pIVar3 == null) {
			throw new NullReferenceException();
		}
	label_04a5121f: ;
		pIVar3.nodes = this.__3__nodes;
		pIVar3.toVector3 = this.__3__toVector3;
		pIVar3.slices = this.__3__slices;
		pIVar3.loop = this.__3__loop;
		return (System_Collections_Generic_IEnumerator_Vector3__o)pIVar3;
	}

	// Interpolate.<NewCatmullRom>d__20<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator: 1 lines keep C-only constructs
	private IEnumerator NewCatmullRom_d__20___Il2CppFullySharedGenericType__System_Collections_IEnumerable_GetEnumerator()
	{
		IEnumerator pSVar1;

		pSVar1 = (IEnumerator)(*method.klass.rgctx_data. _5_Interpolate__NewCatmullRom_d__20_T__System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator .methodPointer)();
		return pSVar1;
	}

	// Interpolate.Function$$.ctor: 4 lines keep C-only constructs
	private void Function__ctor(object @object)
	{
		sbyte cVar1;
		sbyte cVar2;
		object ex;

		this.method_ptr = *(IntPtr)(method + 8);
		this.method = method;
		this.m_target = @object;
		cVar1 = *(sbyte)(method + 0x52);
		this.method_code = (intptr_t)this;
		cVar2 = il2cpp_runtime_helper_030d61c0();
		if (cVar2 == false) {
			if (@object == null) {
				ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
				throw ex;
			}
		}
		else if (cVar1 == '\x04') {
			this.invoke_impl = (intptr_t)&label_02fce3a0;
			goto label_05849ed6;
		}
		this.invoke_impl = this.method_ptr;
		this.method_code = (intptr_t)this.m_target;
	label_05849ed6: ;
		this.extra_arg = (intptr_t)il2cpp_runtime_helper_02fce310;
		return;
	}

	// Interpolate.Function$$Invoke: 2 lines keep C-only constructs
	private float Function_Invoke(float a, float b, float c, float d)
	{
		code *vtableDispatch;
		ulong in_RDX;
		float fVar1;

		vtableDispatch = (code)this.invoke_impl;
		fVar1 = (float)(*vtableDispatch)(this.method_code,this.method,in_RDX,vtableDispatch) ;
		return fVar1;
	}

	// Interpolate.Function$$BeginInvoke: 1 lines keep C-only constructs
	private IAsyncResult Function_BeginInvoke(float a, float b, float c, float d, AsyncCallback callback, object @object)
	{
		IAsyncResult pSVar1;
		float local_4c;
		object local_48;

		local_4c = a;
		local_48 = (object)local_4c;
		pSVar1 = (IAsyncResult)il2cpp_runtime_helper_031591c0(this, &local_48, callback, @object);
		return pSVar1;
	}

	// Interpolate.Function$$EndInvoke: 1 lines keep C-only constructs
	private float Function_EndInvoke(IAsyncResult result)
	{
		object obj;
		float pfVar1;

		obj = (object)il2cpp_runtime_helper_03159300(result, 0);
		if (obj == null) {
			throw new NullReferenceException();
		}
		return *pfVar1;
	}
}
