// ==================== AoTTG2 cross-reference ====================
// Type: Interpolate
// Update status: CHANGED in this game update
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
				return default(float);
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
				return null;
			}
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x57495F0", Offset = "0x57485F0", VA = "0x57495F0")]
		[DebuggerHidden]
		public _003CNewCounter_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x574AF30", Offset = "0x5749F30", VA = "0x574AF30", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x574AF40", Offset = "0x5749F40", VA = "0x574AF40", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x574AFA0", Offset = "0x5749FA0", VA = "0x574AFA0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x574B010", Offset = "0x574A010", VA = "0x574B010", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x574B0B0", Offset = "0x574A0B0", VA = "0x574B0B0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x5749940", Offset = "0x5748940", VA = "0x5749940")]
		[DebuggerHidden]
		public _003CNewEase_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x574B150", Offset = "0x574A150", VA = "0x574B150", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x574B200", Offset = "0x574A200", VA = "0x574B200", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x574B660", Offset = "0x574A660", VA = "0x574B660")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x574B710", Offset = "0x574A710", VA = "0x574B710", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return default(float);
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
				return null;
			}
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x5749540", Offset = "0x5748540", VA = "0x5749540")]
		[DebuggerHidden]
		public _003CNewTimer_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x574B760", Offset = "0x574A760", VA = "0x574B760", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x574B770", Offset = "0x574A770", VA = "0x574B770", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x574B810", Offset = "0x574A810", VA = "0x574B810", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x574B880", Offset = "0x574A880", VA = "0x574B880", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x574B910", Offset = "0x574A910", VA = "0x574B910", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x57494A0", Offset = "0x57484A0", VA = "0x57494A0")]
	private static Vector3 Identity(Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x57494B0", Offset = "0x57484B0", VA = "0x57494B0")]
	private static Vector3 TransformDotPosition(Transform t)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x57494D0", Offset = "0x57484D0", VA = "0x57494D0")]
	[IteratorStateMachine(typeof(_003CNewTimer_003Ed__3))]
	private static IEnumerable<float> NewTimer(float duration)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x5749570", Offset = "0x5748570", VA = "0x5749570")]
	[IteratorStateMachine(typeof(_003CNewCounter_003Ed__6))]
	private static IEnumerable<float> NewCounter(int start, int end, int step)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x5749620", Offset = "0x5748620", VA = "0x5749620")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5749810", Offset = "0x5748810", VA = "0x5749810")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, int slices)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5749740", Offset = "0x5748740", VA = "0x5749740")]
	[IteratorStateMachine(typeof(_003CNewEase_003Ed__9))]
	private static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float total, IEnumerable<float> driver)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x5749960", Offset = "0x5748960", VA = "0x5749960")]
	private static Vector3 Ease(Function ease, Vector3 start, Vector3 distance, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x5749A20", Offset = "0x5748A20", VA = "0x5749A20")]
	public static Function Ease(EaseType type)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x5749F10", Offset = "0x5748F10", VA = "0x5749F10")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, float duration)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x574A000", Offset = "0x5749000", VA = "0x574A000")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, int slices)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x574A100", Offset = "0x5749100", VA = "0x574A100")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, float duration)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x574A1F0", Offset = "0x57491F0", VA = "0x574A1F0")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, int slices)
	{
		return null;
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
		return default(Vector3);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x574A470", Offset = "0x5749470", VA = "0x574A470")]
	public static IEnumerable<Vector3> NewCatmullRom(Transform[] nodes, int slices, bool loop)
	{
		return null;
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x574A510", Offset = "0x5749510", VA = "0x574A510")]
	public static IEnumerable<Vector3> NewCatmullRom(Vector3[] points, int slices, bool loop)
	{
		return null;
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
		return default(Vector3);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x574A690", Offset = "0x5749690", VA = "0x574A690")]
	private static float Linear(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x574A6B0", Offset = "0x57496B0", VA = "0x574A6B0")]
	private static float EaseInQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x574A6E0", Offset = "0x57496E0", VA = "0x574A6E0")]
	private static float EaseOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x574A710", Offset = "0x5749710", VA = "0x574A710")]
	private static float EaseInOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x574A790", Offset = "0x5749790", VA = "0x574A790")]
	private static float EaseInCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x574A7C0", Offset = "0x57497C0", VA = "0x574A7C0")]
	private static float EaseOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x574A800", Offset = "0x5749800", VA = "0x574A800")]
	private static float EaseInOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x574A880", Offset = "0x5749880", VA = "0x574A880")]
	private static float EaseInQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x574A8B0", Offset = "0x57498B0", VA = "0x574A8B0")]
	private static float EaseOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x574A8F0", Offset = "0x57498F0", VA = "0x574A8F0")]
	private static float EaseInOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x574A970", Offset = "0x5749970", VA = "0x574A970")]
	private static float EaseInQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x574A9A0", Offset = "0x57499A0", VA = "0x574A9A0")]
	private static float EaseOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x574A9E0", Offset = "0x57499E0", VA = "0x574A9E0")]
	private static float EaseInOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x574AA70", Offset = "0x5749A70", VA = "0x574AA70")]
	private static float EaseInSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x574AAB0", Offset = "0x5749AB0", VA = "0x574AAB0")]
	private static float EaseOutSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x574AAF0", Offset = "0x5749AF0", VA = "0x574AAF0")]
	private static float EaseInOutSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x574AB40", Offset = "0x5749B40", VA = "0x574AB40")]
	private static float EaseInExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x574AB80", Offset = "0x5749B80", VA = "0x574AB80")]
	private static float EaseOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x574ABC0", Offset = "0x5749BC0", VA = "0x574ABC0")]
	private static float EaseInOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x574AC70", Offset = "0x5749C70", VA = "0x574AC70")]
	private static float EaseInCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x574ACE0", Offset = "0x5749CE0", VA = "0x574ACE0")]
	private static float EaseOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x574AD50", Offset = "0x5749D50", VA = "0x574AD50")]
	private static float EaseInOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x574AE20", Offset = "0x5749E20", VA = "0x574AE20")]
	public Interpolate()
	{
	}
}
