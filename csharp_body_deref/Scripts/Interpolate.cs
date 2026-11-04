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

[Token(Token = "0x2000018")]
public class Interpolate
{
	[Token(Token = "0x2000019")]
	public enum EaseType
	{
		[Token(Token = "0x400005D")]
		Linear,
		[Token(Token = "0x400005E")]
		EaseInQuad,
		[Token(Token = "0x400005F")]
		EaseOutQuad,
		[Token(Token = "0x4000060")]
		EaseInOutQuad,
		[Token(Token = "0x4000061")]
		EaseInCubic,
		[Token(Token = "0x4000062")]
		EaseOutCubic,
		[Token(Token = "0x4000063")]
		EaseInOutCubic,
		[Token(Token = "0x4000064")]
		EaseInQuart,
		[Token(Token = "0x4000065")]
		EaseOutQuart,
		[Token(Token = "0x4000066")]
		EaseInOutQuart,
		[Token(Token = "0x4000067")]
		EaseInQuint,
		[Token(Token = "0x4000068")]
		EaseOutQuint,
		[Token(Token = "0x4000069")]
		EaseInOutQuint,
		[Token(Token = "0x400006A")]
		EaseInSine,
		[Token(Token = "0x400006B")]
		EaseOutSine,
		[Token(Token = "0x400006C")]
		EaseInOutSine,
		[Token(Token = "0x400006D")]
		EaseInExpo,
		[Token(Token = "0x400006E")]
		EaseOutExpo,
		[Token(Token = "0x400006F")]
		EaseInOutExpo,
		[Token(Token = "0x4000070")]
		EaseInCirc,
		[Token(Token = "0x4000071")]
		EaseOutCirc,
		[Token(Token = "0x4000072")]
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
		[Token(Token = "0x4000073")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000074")]
		[FieldOffset(Offset = "0x0")]
		private Vector3 _003C_003E2__current;

		[Token(Token = "0x4000075")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000076")]
		[FieldOffset(Offset = "0x0")]
		private IList nodes;

		[Token(Token = "0x4000077")]
		[FieldOffset(Offset = "0x0")]
		public IList _003C_003E3__nodes;

		[Token(Token = "0x4000078")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerable<float> steps;

		[Token(Token = "0x4000079")]
		[FieldOffset(Offset = "0x0")]
		public IEnumerable<float> _003C_003E3__steps;

		[Token(Token = "0x400007A")]
		[FieldOffset(Offset = "0x0")]
		private ToVector3<T> toVector3;

		[Token(Token = "0x400007B")]
		[FieldOffset(Offset = "0x0")]
		public ToVector3<T> _003C_003E3__toVector3;

		[Token(Token = "0x400007C")]
		[FieldOffset(Offset = "0x0")]
		private Function ease;

		[Token(Token = "0x400007D")]
		[FieldOffset(Offset = "0x0")]
		public Function _003C_003E3__ease;

		[Token(Token = "0x400007E")]
		[FieldOffset(Offset = "0x0")]
		private float maxStep;

		[Token(Token = "0x400007F")]
		[FieldOffset(Offset = "0x0")]
		public float _003C_003E3__maxStep;

		[Token(Token = "0x4000080")]
		[FieldOffset(Offset = "0x0")]
		private Vector3[] _003Cpoints_003E5__2;

		[Token(Token = "0x4000081")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<float> _003C_003E7__wrap2;

		[Token(Token = "0x17000008")]
		private Vector3 System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EVector3_003E_002ECurrent
		{
			[Token(Token = "0x60000A3")]
			[DebuggerHidden]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x17000009")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000A5")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600009F")]
		[DebuggerHidden]
		public _003CNewBezier_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000A0")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000A1")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000A2")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000A4")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000A6")]
		[DebuggerHidden]
		private IEnumerator<Vector3> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EVector3_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000A7")]
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
		[Token(Token = "0x4000082")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000083")]
		[FieldOffset(Offset = "0x0")]
		private Vector3 _003C_003E2__current;

		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000085")]
		[FieldOffset(Offset = "0x0")]
		private IList nodes;

		[Token(Token = "0x4000086")]
		[FieldOffset(Offset = "0x0")]
		public IList _003C_003E3__nodes;

		[Token(Token = "0x4000087")]
		[FieldOffset(Offset = "0x0")]
		private ToVector3<T> toVector3;

		[Token(Token = "0x4000088")]
		[FieldOffset(Offset = "0x0")]
		public ToVector3<T> _003C_003E3__toVector3;

		[Token(Token = "0x4000089")]
		[FieldOffset(Offset = "0x0")]
		private bool loop;

		[Token(Token = "0x400008A")]
		[FieldOffset(Offset = "0x0")]
		public bool _003C_003E3__loop;

		[Token(Token = "0x400008B")]
		[FieldOffset(Offset = "0x0")]
		private int slices;

		[Token(Token = "0x400008C")]
		[FieldOffset(Offset = "0x0")]
		public int _003C_003E3__slices;

		[Token(Token = "0x400008D")]
		[FieldOffset(Offset = "0x0")]
		private int _003Clast_003E5__2;

		[Token(Token = "0x400008E")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ccurrent_003E5__3;

		[Token(Token = "0x400008F")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cprevious_003E5__4;

		[Token(Token = "0x4000090")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cstart_003E5__5;

		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cend_003E5__6;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cnext_003E5__7;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x0")]
		private int _003CstepCount_003E5__8;

		[Token(Token = "0x4000094")]
		[FieldOffset(Offset = "0x0")]
		private int _003Cstep_003E5__9;

		[Token(Token = "0x1700000A")]
		private Vector3 System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EVector3_003E_002ECurrent
		{
			[Token(Token = "0x60000AB")]
			[DebuggerHidden]
			get
			{
				return default(Vector3);
			}
		}

		[Token(Token = "0x1700000B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000AD")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A8")]
		[DebuggerHidden]
		public _003CNewCatmullRom_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000A9")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000AA")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000AC")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000AE")]
		[DebuggerHidden]
		private IEnumerator<Vector3> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EVector3_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000AF")]
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
		[Token(Token = "0x4000095")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000096")]
		[FieldOffset(Offset = "0x14")]
		private float _003C_003E2__current;

		[Token(Token = "0x4000097")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000098")]
		[FieldOffset(Offset = "0x1C")]
		private int start;

		[Token(Token = "0x4000099")]
		[FieldOffset(Offset = "0x20")]
		public int _003C_003E3__start;

		[Token(Token = "0x400009A")]
		[FieldOffset(Offset = "0x24")]
		private int step;

		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x28")]
		public int _003C_003E3__step;

		[Token(Token = "0x400009C")]
		[FieldOffset(Offset = "0x2C")]
		private int end;

		[Token(Token = "0x400009D")]
		[FieldOffset(Offset = "0x30")]
		public int _003C_003E3__end;

		[Token(Token = "0x400009E")]
		[FieldOffset(Offset = "0x34")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700000C")]
		private float System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ESingle_003E_002ECurrent
		{
			[Token(Token = "0x60000B3")]
			[Address(RVA = "0x15477E0", Offset = "0x1545DE0", VA = "0x1815477E0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700000D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000B5")]
			[Address(RVA = "0x1DB00F0", Offset = "0x1DAE6F0", VA = "0x181DB00F0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x8E81F0", Offset = "0x8E67F0", VA = "0x1808E81F0")]
		[DebuggerHidden]
		public _003CNewCounter_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x1DAFFC0", Offset = "0x1DAE5C0", VA = "0x181DAFFC0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x1DB00B0", Offset = "0x1DAE6B0", VA = "0x181DB00B0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x1DB0010", Offset = "0x1DAE610", VA = "0x181DB0010", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x1DB0010", Offset = "0x1DAE610", VA = "0x181DB0010", Slot = "5")]
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
		[Token(Token = "0x400009F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000A0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000A1")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 end;

		[Token(Token = "0x40000A2")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 start;

		[Token(Token = "0x40000A3")]
		[FieldOffset(Offset = "0x38")]
		public IEnumerable<float> driver;

		[Token(Token = "0x40000A4")]
		[FieldOffset(Offset = "0x40")]
		public Function ease;

		[Token(Token = "0x40000A5")]
		[FieldOffset(Offset = "0x48")]
		public float total;

		[Token(Token = "0x40000A6")]
		[FieldOffset(Offset = "0x4C")]
		private Vector3 _003Cdistance_003E5__2;

		[Token(Token = "0x40000A7")]
		[FieldOffset(Offset = "0x58")]
		private IEnumerator<float> _003C_003E7__wrap2;

		[Token(Token = "0x1700000E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000BC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000BE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CNewEase_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x1DB0540", Offset = "0x1DAEB40", VA = "0x181DB0540", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x1DB0120", Offset = "0x1DAE720", VA = "0x181DB0120", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x1DB05D0", Offset = "0x1DAEBD0", VA = "0x181DB05D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x1DB0500", Offset = "0x1DAEB00", VA = "0x181DB0500", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000020")]
	[CompilerGenerated]
	private sealed class _003CNewTimer_003Ed__3 : IEnumerable<float>, IEnumerable, IEnumerator<float>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000A8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x14")]
		private float _003C_003E2__current;

		[Token(Token = "0x40000AA")]
		[FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40000AB")]
		[FieldOffset(Offset = "0x1C")]
		private float duration;

		[Token(Token = "0x40000AC")]
		[FieldOffset(Offset = "0x20")]
		public float _003C_003E3__duration;

		[Token(Token = "0x40000AD")]
		[FieldOffset(Offset = "0x24")]
		private float _003CelapsedTime_003E5__2;

		[Token(Token = "0x17000010")]
		private float System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ESingle_003E_002ECurrent
		{
			[Token(Token = "0x60000C2")]
			[Address(RVA = "0x15477E0", Offset = "0x1545DE0", VA = "0x1815477E0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000011")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000C4")]
			[Address(RVA = "0x1DB00F0", Offset = "0x1DAE6F0", VA = "0x181DB00F0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x8E81F0", Offset = "0x8E67F0", VA = "0x1808E81F0")]
		[DebuggerHidden]
		public _003CNewTimer_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x1DB0620", Offset = "0x1DAEC20", VA = "0x181DB0620", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x1DB0750", Offset = "0x1DAED50", VA = "0x181DB0750", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x1DB06B0", Offset = "0x1DAECB0", VA = "0x181DB06B0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<float> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESingle_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x1DB06B0", Offset = "0x1DAECB0", VA = "0x181DB06B0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
	private static Vector3 Identity(Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x1DA2BA0", Offset = "0x1DA11A0", VA = "0x181DA2BA0")]
	private static Vector3 TransformDotPosition(Transform t)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x1DA2B30", Offset = "0x1DA1130", VA = "0x181DA2B30")]
	[IteratorStateMachine(typeof(_003CNewTimer_003Ed__3))]
	private static IEnumerable<float> NewTimer(float duration)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x1DA2800", Offset = "0x1DA0E00", VA = "0x181DA2800")]
	[IteratorStateMachine(typeof(_003CNewCounter_003Ed__6))]
	private static IEnumerable<float> NewCounter(int start, int end, int step)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x1DA2870", Offset = "0x1DA0E70", VA = "0x181DA2870")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x1DA2A20", Offset = "0x1DA1020", VA = "0x181DA2A20")]
	public static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, int slices)
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x1DA2970", Offset = "0x1DA0F70", VA = "0x181DA2970")]
	[IteratorStateMachine(typeof(_003CNewEase_003Ed__9))]
	private static IEnumerator NewEase(Function ease, Vector3 start, Vector3 end, float total, IEnumerable<float> driver)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x1DA1E00", Offset = "0x1DA0400", VA = "0x181DA1E00")]
	private static Vector3 Ease(Function ease, Vector3 start, Vector3 distance, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x1DA1F10", Offset = "0x1DA0510", VA = "0x181DA1F10")]
	public static Function Ease(EaseType type)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x1DA25F0", Offset = "0x1DA0BF0", VA = "0x181DA25F0")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x1DA24F0", Offset = "0x1DA0AF0", VA = "0x181DA24F0")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Transform[] nodes, int slices)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x1DA2400", Offset = "0x1DA0A00", VA = "0x181DA2400")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x1DA2300", Offset = "0x1DA0900", VA = "0x181DA2300")]
	public static IEnumerable<Vector3> NewBezier(Function ease, Vector3[] points, int slices)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[IteratorStateMachine(typeof(_003CNewBezier_003Ed__16<>))]
	private static IEnumerable<Vector3> NewBezier<T>(Function ease, IList nodes, ToVector3<T> toVector3, float maxStep, IEnumerable<float> steps)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x1DA12A0", Offset = "0x1D9F8A0", VA = "0x181DA12A0")]
	private static Vector3 Bezier(Function ease, Vector3[] points, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x1DA2770", Offset = "0x1DA0D70", VA = "0x181DA2770")]
	public static IEnumerable<Vector3> NewCatmullRom(Transform[] nodes, int slices, bool loop)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x1DA26E0", Offset = "0x1DA0CE0", VA = "0x181DA26E0")]
	public static IEnumerable<Vector3> NewCatmullRom(Vector3[] points, int slices, bool loop)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	[IteratorStateMachine(typeof(_003CNewCatmullRom_003Ed__20<>))]
	private static IEnumerable<Vector3> NewCatmullRom<T>(IList nodes, ToVector3<T> toVector3, int slices, bool loop)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x1DA1460", Offset = "0x1D9FA60", VA = "0x181DA1460")]
	private static Vector3 CatmullRom(Vector3 previous, Vector3 start, Vector3 end, Vector3 next, float elapsedTime, float duration)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x1DA22E0", Offset = "0x1DA08E0", VA = "0x181DA22E0")]
	private static float Linear(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x1DA1AD0", Offset = "0x1DA00D0", VA = "0x181DA1AD0")]
	private static float EaseInQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x1DA1CF0", Offset = "0x1DA02F0", VA = "0x181DA1CF0")]
	private static float EaseOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x1DA1890", Offset = "0x1D9FE90", VA = "0x181DA1890")]
	private static float EaseInOutQuad(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x1DA1610", Offset = "0x1D9FC10", VA = "0x181DA1610")]
	private static float EaseInCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x1DA1C50", Offset = "0x1DA0250", VA = "0x181DA1C50")]
	private static float EaseOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x1DA1780", Offset = "0x1D9FD80", VA = "0x181DA1780")]
	private static float EaseInOutCubic(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x1DA1B10", Offset = "0x1DA0110", VA = "0x181DA1B10")]
	private static float EaseInQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x1DA1D30", Offset = "0x1DA0330", VA = "0x181DA1D30")]
	private static float EaseOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x1DA1930", Offset = "0x1D9FF30", VA = "0x181DA1930")]
	private static float EaseInOutQuart(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x1DA1B40", Offset = "0x1DA0140", VA = "0x181DA1B40")]
	private static float EaseInQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x1DA1D70", Offset = "0x1DA0370", VA = "0x181DA1D70")]
	private static float EaseOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x1DA19D0", Offset = "0x1D9FFD0", VA = "0x181DA19D0")]
	private static float EaseInOutQuint(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x1DA1B80", Offset = "0x1DA0180", VA = "0x181DA1B80")]
	private static float EaseInSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x1DA1DB0", Offset = "0x1DA03B0", VA = "0x181DA1DB0")]
	private static float EaseOutSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x1DA1A70", Offset = "0x1DA0070", VA = "0x181DA1A70")]
	private static float EaseInOutSine(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x1DA1650", Offset = "0x1D9FC50", VA = "0x181DA1650")]
	private static float EaseInExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x1DA1C90", Offset = "0x1DA0290", VA = "0x181DA1C90")]
	private static float EaseOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x1DA17F0", Offset = "0x1D9FDF0", VA = "0x181DA17F0")]
	private static float EaseInOutExpo(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x1DA1590", Offset = "0x1D9FB90", VA = "0x181DA1590")]
	private static float EaseInCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x1DA1BE0", Offset = "0x1DA01E0", VA = "0x181DA1BE0")]
	private static float EaseOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x1DA16B0", Offset = "0x1D9FCB0", VA = "0x181DA16B0")]
	private static float EaseInOutCirc(float start, float distance, float elapsedTime, float duration)
	{
		return default(float);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Interpolate()
	{
	}
}
