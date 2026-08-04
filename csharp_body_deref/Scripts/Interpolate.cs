// ==================== AoTTG2 cross-reference ====================
// Type: Interpolate
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Interpolate.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Interpolate.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000016")]
public class Interpolate
{
	[Token(Token = "0x2000017")]
	public enum EaseType
	{
		[Token(Token = "0x400004D")]
		Linear,
		[Token(Token = "0x400004E")]
		EaseInQuad,
		[Token(Token = "0x400004F")]
		EaseOutQuad,
		[Token(Token = "0x4000050")]
		EaseInOutQuad,
		[Token(Token = "0x4000051")]
		EaseInCubic,
		[Token(Token = "0x4000052")]
		EaseOutCubic,
		[Token(Token = "0x4000053")]
		EaseInOutCubic,
		[Token(Token = "0x4000054")]
		EaseInQuart,
		[Token(Token = "0x4000055")]
		EaseOutQuart,
		[Token(Token = "0x4000056")]
		EaseInOutQuart,
		[Token(Token = "0x4000057")]
		EaseInQuint,
		[Token(Token = "0x4000058")]
		EaseOutQuint,
		[Token(Token = "0x4000059")]
		EaseInOutQuint,
		[Token(Token = "0x400005A")]
		EaseInSine,
		[Token(Token = "0x400005B")]
		EaseOutSine,
		[Token(Token = "0x400005C")]
		EaseInOutSine,
		[Token(Token = "0x400005D")]
		EaseInExpo,
		[Token(Token = "0x400005E")]
		EaseOutExpo,
		[Token(Token = "0x400005F")]
		EaseInOutExpo,
		[Token(Token = "0x4000060")]
		EaseInCirc,
		[Token(Token = "0x4000061")]
		EaseOutCirc,
		[Token(Token = "0x4000062")]
		EaseInOutCirc
	}

	[Token(Token = "0x2000018")]
	public delegate Vector3 ToVector3<T>(T v);

	[Token(Token = "0x2000019")]
	public delegate float Function(float a, float b, float c, float d);

	[Token(Token = "0x200001A")]
	[CompilerGenerated]
	private sealed class _003CNewBezier_003Ed__16<T> : IEnumerable<Vector3>, IEnumerable, IEnumerator<Vector3>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000063")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000064")]
		[FieldOffset(Offset = "0x0")]
		private Vector3 _003C_003E2__current;

		[Token(Token = "0x4000065")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000066")]
		[FieldOffset(Offset = "0x0")]
		private IList nodes;

		[Token(Token = "0x4000067")]
		[FieldOffset(Offset = "0x0")]
		public IList _003C_003E3__nodes;

		[Token(Token = "0x4000068")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<float> steps;

		[Token(Token = "0x4000069")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<float> _003C_003E3__steps;

		[Token(Token = "0x400006A")]
		[FieldOffset(Offset = "0x0")]
		private ToVector3<T> toVector3;

		[Token(Token = "0x400006B")]
		[FieldOffset(Offset = "0x0")]
		public ToVector3<T> _003C_003E3__toVector3;

		[Token(Token = "0x400006C")]
		[FieldOffset(Offset = "0x0")]
		private Function ease;

		[Token(Token = "0x400006D")]
		[FieldOffset(Offset = "0x0")]
		public Function _003C_003E3__ease;

		[Token(Token = "0x400006E")]
		[FieldOffset(Offset = "0x0")]
		private float maxStep;

		[Token(Token = "0x400006F")]
		[FieldOffset(Offset = "0x0")]
		public float _003C_003E3__maxStep;

		[Token(Token = "0x4000070")]
		[FieldOffset(Offset = "0x0")]
		private Vector3[] _003Cpoints_003E5__2;

		[Token(Token = "0x4000071")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<float> _003C_003E7__wrap2;

		[Token(Token = "0x17000006")]
		private Vector3 System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EVector3_003E_002ECurrent
		{
			[Token(Token = "0x6000091")]
			[DebuggerHidden]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x17000007")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000093")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600008D")]
		[DebuggerHidden]
		public _003CNewBezier_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600008E")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600008F")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000090")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000092")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000094")]
		[DebuggerHidden]
		private IEnumerator<Vector3> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EVector3_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000095")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200001B")]
	[CompilerGenerated]
	private sealed class _003CNewCatmullRom_003Ed__20<T> : IEnumerable<Vector3>, IEnumerable, IEnumerator<Vector3>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000072")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000073")]
		[FieldOffset(Offset = "0x0")]
		private Vector3 _003C_003E2__current;

		[Token(Token = "0x4000074")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000075")]
		[FieldOffset(Offset = "0x0")]
		private IList nodes;

		[Token(Token = "0x4000076")]
		[FieldOffset(Offset = "0x0")]
		public IList _003C_003E3__nodes;

		[Token(Token = "0x4000077")]
		[FieldOffset(Offset = "0x0")]
		private ToVector3<T> toVector3;

		[Token(Token = "0x4000078")]
		[FieldOffset(Offset = "0x0")]
		public ToVector3<T> _003C_003E3__toVector3;

		[Token(Token = "0x4000079")]
		[FieldOffset(Offset = "0x0")]
		private bool loop;

		[Token(Token = "0x400007A")]
		[FieldOffset(Offset = "0x0")]
		public bool _003C_003E3__loop;

		[Token(Token = "0x400007B")]
		[FieldOffset(Offset = "0x0")]
		private int slices;

		[Token(Token = "0x400007C")]
		[FieldOffset(Offset = "0x0")]
		public int _003C_003E3__slices;

		[Token(Token = "0x400007D")]
		[FieldOffset(Offset = "0x0")]
		private int _003Clast_003E5__2;

		[Token(Token = "0x400007E")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ccurrent_003E5__3;

		[Token(Token = "0x400007F")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cprevious_003E5__4;

		[Token(Token = "0x4000080")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cstart_003E5__5;

		[Token(Token = "0x4000081")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cend_003E5__6;

		[Token(Token = "0x4000082")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cnext_003E5__7;

		[Token(Token = "0x4000083")]
		[FieldOffset(Offset = "0x0")]
		private int _003CstepCount_003E5__8;

		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cstep_003E5__9;

		[Token(Token = "0x17000008")]
		private Vector3 System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EVector3_003E_002ECurrent
		{
			[Token(Token = "0x6000099")]
			[DebuggerHidden]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x17000009")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600009B")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000096")]
		[DebuggerHidden]
		public _003CNewCatmullRom_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000097")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000098")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600009A")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600009C")]
		[DebuggerHidden]
		private IEnumerator<Vector3> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EVector3_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600009D")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200001C")]
	[CompilerGenerated]
	private sealed class _003CNewCounter_003Ed__6 : IEnumerable<float>, IEnumerable, IEnumerator<float>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000085")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000086")]
		[FieldOffset(Offset = "0x14")]
		private float _003C_003E2__current;

		[Token(Token = "0x4000087")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000088")]
		[FieldOffset(Offset = "0x1C")]
		private int start;

		[Token(Token = "0x4000089")]
		[FieldOffset(Offset = "0x20")]
		public int _003C_003E3__start;

		[Token(Token = "0x400008A")]
		[FieldOffset(Offset = "0x24")]
		private int step;

		[Token(Token = "0x400008B")]
		[FieldOffset(Offset = "0x28")]
		public int _003C_003E3__step;

		[Token(Token = "0x400008C")]
		[FieldOffset(Offset = "0x2C")]
		private int end;

		[Token(Token = "0x400008D")]
		[FieldOffset(Offset = "0x30")]
		public int _003C_003E3__end;

		[Token(Token = "0x400008E")]
		[FieldOffset(Offset = "0x34")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700000A")]
		private float System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ESingle_003E_002ECurrent
		{
			[Token(Token = "0x60000A1")]
			[Address(RVA = "0x3F61460", Offset = "0x3F61460", VA = "0x3F61460", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700000B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000A3")]
			[Address(RVA = "0x3F614B0", Offset = "0x3F614B0", VA = "0x3F614B0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600009E")]
		[Address(RVA = "0x3F5FA20", Offset = "0x3F5FA20", VA = "0x3F5FA20")]
		[DebuggerHidden]
		public _003CNewCounter_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600009F")]
		[Address(RVA = "0x3F61400", Offset = "0x3F61400", VA = "0x3F61400", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3F61410", Offset = "0x3F61410", VA = "0x3F61410", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x3F61470", Offset = "0x3F61470", VA = "0x3F61470", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x3F614D0", Offset = "0x3F614D0", VA = "0x3F614D0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x3F61570", Offset = "0x3F61570", VA = "0x3F61570", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200001D")]
	[CompilerGenerated]
	private sealed class _003CNewEase_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400008F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000090")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 end;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 start;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x38")]
		public IEnumerable<float> driver;

		[Token(Token = "0x4000094")]
		[FieldOffset(Offset = "0x40")]
		public Function ease;

		[Token(Token = "0x4000095")]
		[FieldOffset(Offset = "0x48")]
		public float total;

		[Token(Token = "0x4000096")]
		[FieldOffset(Offset = "0x4C")]
		private Vector3 _003Cdistance_003E5__2;

		[Token(Token = "0x4000097")]
		[FieldOffset(Offset = "0x58")]
		private IEnumerator<float> _003C_003E7__wrap2;

		[Token(Token = "0x1700000C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000AA")]
			[Address(RVA = "0x3F61C00", Offset = "0x3F61C00", VA = "0x3F61C00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000AC")]
			[Address(RVA = "0x3F61C50", Offset = "0x3F61C50", VA = "0x3F61C50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x3F5FDC0", Offset = "0x3F5FDC0", VA = "0x3F5FDC0")]
		[DebuggerHidden]
		public _003CNewEase_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x3F61580", Offset = "0x3F61580", VA = "0x3F61580", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x3F61630", Offset = "0x3F61630", VA = "0x3F61630", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3F61B60", Offset = "0x3F61B60", VA = "0x3F61B60")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x3F61C10", Offset = "0x3F61C10", VA = "0x3F61C10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200001E")]
	[CompilerGenerated]
	private sealed class _003CNewTimer_003Ed__3 : IEnumerable<float>, IEnumerable, IEnumerator<float>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000098")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000099")]
		[FieldOffset(Offset = "0x14")]
		private float _003C_003E2__current;

		[Token(Token = "0x400009A")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x1C")]
		private float duration;

		[Token(Token = "0x400009C")]
		[FieldOffset(Offset = "0x20")]
		public float _003C_003E3__duration;

		[Token(Token = "0x400009D")]
		[FieldOffset(Offset = "0x24")]
		private float _003CelapsedTime_003E5__2;

		[Token(Token = "0x1700000E")]
		private float System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ESingle_003E_002ECurrent
		{
			[Token(Token = "0x60000B0")]
			[Address(RVA = "0x3F61D30", Offset = "0x3F61D30", VA = "0x3F61D30", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700000F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000B2")]
			[Address(RVA = "0x3F61D80", Offset = "0x3F61D80", VA = "0x3F61D80", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x3F5F970", Offset = "0x3F5F970", VA = "0x3F5F970")]
		[DebuggerHidden]
		public _003CNewTimer_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x3F61C60", Offset = "0x3F61C60", VA = "0x3F61C60", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x3F61C70", Offset = "0x3F61C70", VA = "0x3F61C70", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x3F61D40", Offset = "0x3F61D40", VA = "0x3F61D40", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x3F61DA0", Offset = "0x3F61DA0", VA = "0x3F61DA0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x3F61E30", Offset = "0x3F61E30", VA = "0x3F61E30", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3F5F8C0", Offset = "0x3F5F8C0", VA = "0x3F5F8C0")]
	private static Vector3 Identity(Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3F5F8D0", Offset = "0x3F5F8D0", VA = "0x3F5F8D0")]
	private static Vector3 TransformDotPosition(Transform t)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3F5F8F0", Offset = "0x3F5F8F0", VA = "0x3F5F8F0")]
	[IteratorStateMachine(typeof(_003CNewTimer_003Ed__3))]
	private static IEnumerable<float> NewTimer(float duration)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3F5F9A0", Offset = "0x3F5F9A0", VA = "0x3F5F9A0")]
	[IteratorStateMachine(typeof(_003CNewCounter_003Ed__6))]
	private static IEnumerable<float> NewCounter(int start, int end, int step)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3F5FA50", Offset = "0x3F5FA50", VA = "0x3F5FA50")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3F5FC70", Offset = "0x3F5FC70", VA = "0x3F5FC70")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, int slices)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3F5FB90", Offset = "0x3F5FB90", VA = "0x3F5FB90")]
	[IteratorStateMachine(typeof(_003CNewEase_003Ed__9))]
	private static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float total, IEnumerable<float> driver)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3F5FDE0", Offset = "0x3F5FDE0", VA = "0x3F5FDE0")]
	private static Vector3 Ease(Function ease, Vector3 start, Vector3 distance, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3F5FEA0", Offset = "0x3F5FEA0", VA = "0x3F5FEA0")]
	public static Function Ease(EaseType type)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3F603A0", Offset = "0x3F603A0", VA = "0x3F603A0")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3F604A0", Offset = "0x3F604A0", VA = "0x3F604A0")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, int slices)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3F605A0", Offset = "0x3F605A0", VA = "0x3F605A0")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3F606A0", Offset = "0x3F606A0", VA = "0x3F606A0")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, int slices)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[IteratorStateMachine(typeof(_003CNewBezier_003Ed__16<>))]
	private static IEnumerable<Vector3> NewBezier<T>(Function ease, IList nodes, ToVector3<T> toVector3, float maxStep, IEnumerable<float> steps)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3F607A0", Offset = "0x3F607A0", VA = "0x3F607A0")]
	private static Vector3 Bezier(Function ease, Vector3[] points, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3F60920", Offset = "0x3F60920", VA = "0x3F60920")]
	public static IEnumerable<Vector3> NewCatmullRom(Transform[] nodes, int slices, bool loop)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3F609C0", Offset = "0x3F609C0", VA = "0x3F609C0")]
	public static IEnumerable<Vector3> NewCatmullRom(Vector3[] points, int slices, bool loop)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[IteratorStateMachine(typeof(_003CNewCatmullRom_003Ed__20<>))]
	private static IEnumerable<Vector3> NewCatmullRom<T>(IList nodes, ToVector3<T> toVector3, int slices, bool loop)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x3F60A60", Offset = "0x3F60A60", VA = "0x3F60A60")]
	private static Vector3 CatmullRom(Vector3 previous, Vector3 start, Vector3 end, Vector3 next, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3F60B60", Offset = "0x3F60B60", VA = "0x3F60B60")]
	private static float Linear(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3F60B80", Offset = "0x3F60B80", VA = "0x3F60B80")]
	private static float EaseInQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3F60BB0", Offset = "0x3F60BB0", VA = "0x3F60BB0")]
	private static float EaseOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3F60BE0", Offset = "0x3F60BE0", VA = "0x3F60BE0")]
	private static float EaseInOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3F60C60", Offset = "0x3F60C60", VA = "0x3F60C60")]
	private static float EaseInCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3F60C90", Offset = "0x3F60C90", VA = "0x3F60C90")]
	private static float EaseOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3F60CD0", Offset = "0x3F60CD0", VA = "0x3F60CD0")]
	private static float EaseInOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3F60D50", Offset = "0x3F60D50", VA = "0x3F60D50")]
	private static float EaseInQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3F60D80", Offset = "0x3F60D80", VA = "0x3F60D80")]
	private static float EaseOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3F60DC0", Offset = "0x3F60DC0", VA = "0x3F60DC0")]
	private static float EaseInOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3F60E40", Offset = "0x3F60E40", VA = "0x3F60E40")]
	private static float EaseInQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3F60E70", Offset = "0x3F60E70", VA = "0x3F60E70")]
	private static float EaseOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3F60EB0", Offset = "0x3F60EB0", VA = "0x3F60EB0")]
	private static float EaseInOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x3F60F40", Offset = "0x3F60F40", VA = "0x3F60F40")]
	private static float EaseInSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3F60F80", Offset = "0x3F60F80", VA = "0x3F60F80")]
	private static float EaseOutSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3F60FC0", Offset = "0x3F60FC0", VA = "0x3F60FC0")]
	private static float EaseInOutSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3F61010", Offset = "0x3F61010", VA = "0x3F61010")]
	private static float EaseInExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3F61050", Offset = "0x3F61050", VA = "0x3F61050")]
	private static float EaseOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3F610A0", Offset = "0x3F610A0", VA = "0x3F610A0")]
	private static float EaseInOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3F61140", Offset = "0x3F61140", VA = "0x3F61140")]
	private static float EaseInCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3F611B0", Offset = "0x3F611B0", VA = "0x3F611B0")]
	private static float EaseOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3F61220", Offset = "0x3F61220", VA = "0x3F61220")]
	private static float EaseInOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3F612F0", Offset = "0x3F612F0", VA = "0x3F612F0")]
	public Interpolate()
	{
	}
}
