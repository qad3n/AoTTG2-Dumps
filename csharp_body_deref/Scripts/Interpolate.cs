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
			[Address(RVA = "0x3C6BB10", Offset = "0x3C6BB10", VA = "0x3C6BB10", Slot = "6")]
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
			[Address(RVA = "0x3C6BB60", Offset = "0x3C6BB60", VA = "0x3C6BB60", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600009E")]
		[Address(RVA = "0x3C6A0D0", Offset = "0x3C6A0D0", VA = "0x3C6A0D0")]
		[DebuggerHidden]
		public _003CNewCounter_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600009F")]
		[Address(RVA = "0x3C6BAB0", Offset = "0x3C6BAB0", VA = "0x3C6BAB0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3C6BAC0", Offset = "0x3C6BAC0", VA = "0x3C6BAC0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x3C6BB20", Offset = "0x3C6BB20", VA = "0x3C6BB20", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x3C6BB80", Offset = "0x3C6BB80", VA = "0x3C6BB80", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x3C6BC20", Offset = "0x3C6BC20", VA = "0x3C6BC20", Slot = "5")]
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
			[Address(RVA = "0x3C6C2B0", Offset = "0x3C6C2B0", VA = "0x3C6C2B0", Slot = "4")]
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
			[Address(RVA = "0x3C6C300", Offset = "0x3C6C300", VA = "0x3C6C300", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x3C6A470", Offset = "0x3C6A470", VA = "0x3C6A470")]
		[DebuggerHidden]
		public _003CNewEase_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x3C6BC30", Offset = "0x3C6BC30", VA = "0x3C6BC30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x3C6BCE0", Offset = "0x3C6BCE0", VA = "0x3C6BCE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3C6C210", Offset = "0x3C6C210", VA = "0x3C6C210")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x3C6C2C0", Offset = "0x3C6C2C0", VA = "0x3C6C2C0", Slot = "8")]
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
			[Address(RVA = "0x3C6C3E0", Offset = "0x3C6C3E0", VA = "0x3C6C3E0", Slot = "6")]
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
			[Address(RVA = "0x3C6C430", Offset = "0x3C6C430", VA = "0x3C6C430", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x3C6A020", Offset = "0x3C6A020", VA = "0x3C6A020")]
		[DebuggerHidden]
		public _003CNewTimer_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x3C6C310", Offset = "0x3C6C310", VA = "0x3C6C310", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x3C6C320", Offset = "0x3C6C320", VA = "0x3C6C320", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x3C6C3F0", Offset = "0x3C6C3F0", VA = "0x3C6C3F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x3C6C450", Offset = "0x3C6C450", VA = "0x3C6C450", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x3C6C4E0", Offset = "0x3C6C4E0", VA = "0x3C6C4E0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3C69F70", Offset = "0x3C69F70", VA = "0x3C69F70")]
	private static Vector3 Identity(Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3C69F80", Offset = "0x3C69F80", VA = "0x3C69F80")]
	private static Vector3 TransformDotPosition(Transform t)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3C69FA0", Offset = "0x3C69FA0", VA = "0x3C69FA0")]
	[IteratorStateMachine(typeof(_003CNewTimer_003Ed__3))]
	private static IEnumerable<float> NewTimer(float duration)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3C6A050", Offset = "0x3C6A050", VA = "0x3C6A050")]
	[IteratorStateMachine(typeof(_003CNewCounter_003Ed__6))]
	private static IEnumerable<float> NewCounter(int start, int end, int step)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3C6A100", Offset = "0x3C6A100", VA = "0x3C6A100")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3C6A320", Offset = "0x3C6A320", VA = "0x3C6A320")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, int slices)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3C6A240", Offset = "0x3C6A240", VA = "0x3C6A240")]
	[IteratorStateMachine(typeof(_003CNewEase_003Ed__9))]
	private static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float total, IEnumerable<float> driver)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3C6A490", Offset = "0x3C6A490", VA = "0x3C6A490")]
	private static Vector3 Ease(Function ease, Vector3 start, Vector3 distance, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3C6A550", Offset = "0x3C6A550", VA = "0x3C6A550")]
	public static Function Ease(EaseType type)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3C6AA50", Offset = "0x3C6AA50", VA = "0x3C6AA50")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3C6AB50", Offset = "0x3C6AB50", VA = "0x3C6AB50")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, int slices)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3C6AC50", Offset = "0x3C6AC50", VA = "0x3C6AC50")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3C6AD50", Offset = "0x3C6AD50", VA = "0x3C6AD50")]
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
	[Address(RVA = "0x3C6AE50", Offset = "0x3C6AE50", VA = "0x3C6AE50")]
	private static Vector3 Bezier(Function ease, Vector3[] points, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3C6AFD0", Offset = "0x3C6AFD0", VA = "0x3C6AFD0")]
	public static IEnumerable<Vector3> NewCatmullRom(Transform[] nodes, int slices, bool loop)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3C6B070", Offset = "0x3C6B070", VA = "0x3C6B070")]
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
	[Address(RVA = "0x3C6B110", Offset = "0x3C6B110", VA = "0x3C6B110")]
	private static Vector3 CatmullRom(Vector3 previous, Vector3 start, Vector3 end, Vector3 next, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3C6B210", Offset = "0x3C6B210", VA = "0x3C6B210")]
	private static float Linear(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3C6B230", Offset = "0x3C6B230", VA = "0x3C6B230")]
	private static float EaseInQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3C6B260", Offset = "0x3C6B260", VA = "0x3C6B260")]
	private static float EaseOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3C6B290", Offset = "0x3C6B290", VA = "0x3C6B290")]
	private static float EaseInOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3C6B310", Offset = "0x3C6B310", VA = "0x3C6B310")]
	private static float EaseInCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3C6B340", Offset = "0x3C6B340", VA = "0x3C6B340")]
	private static float EaseOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3C6B380", Offset = "0x3C6B380", VA = "0x3C6B380")]
	private static float EaseInOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3C6B400", Offset = "0x3C6B400", VA = "0x3C6B400")]
	private static float EaseInQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3C6B430", Offset = "0x3C6B430", VA = "0x3C6B430")]
	private static float EaseOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3C6B470", Offset = "0x3C6B470", VA = "0x3C6B470")]
	private static float EaseInOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3C6B4F0", Offset = "0x3C6B4F0", VA = "0x3C6B4F0")]
	private static float EaseInQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3C6B520", Offset = "0x3C6B520", VA = "0x3C6B520")]
	private static float EaseOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3C6B560", Offset = "0x3C6B560", VA = "0x3C6B560")]
	private static float EaseInOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x3C6B5F0", Offset = "0x3C6B5F0", VA = "0x3C6B5F0")]
	private static float EaseInSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3C6B630", Offset = "0x3C6B630", VA = "0x3C6B630")]
	private static float EaseOutSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3C6B670", Offset = "0x3C6B670", VA = "0x3C6B670")]
	private static float EaseInOutSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3C6B6C0", Offset = "0x3C6B6C0", VA = "0x3C6B6C0")]
	private static float EaseInExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3C6B700", Offset = "0x3C6B700", VA = "0x3C6B700")]
	private static float EaseOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3C6B750", Offset = "0x3C6B750", VA = "0x3C6B750")]
	private static float EaseInOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3C6B7F0", Offset = "0x3C6B7F0", VA = "0x3C6B7F0")]
	private static float EaseInCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3C6B860", Offset = "0x3C6B860", VA = "0x3C6B860")]
	private static float EaseOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3C6B8D0", Offset = "0x3C6B8D0", VA = "0x3C6B8D0")]
	private static float EaseInOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3C6B9A0", Offset = "0x3C6B9A0", VA = "0x3C6B9A0")]
	public Interpolate()
	{
	}
}
