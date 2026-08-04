// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.math
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Token(Token = "0x2000007")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public static class math
{
	[Token(Token = "0x2000008")]
	public enum RotationOrder : byte
	{
		[Token(Token = "0x4000021")]
		XYZ = 0,
		[Token(Token = "0x4000022")]
		XZY = 1,
		[Token(Token = "0x4000023")]
		YXZ = 2,
		[Token(Token = "0x4000024")]
		YZX = 3,
		[Token(Token = "0x4000025")]
		ZXY = 4,
		[Token(Token = "0x4000026")]
		ZYX = 5,
		[Token(Token = "0x4000027")]
		Default = 4
	}

	[Token(Token = "0x2000009")]
	public enum ShuffleComponent : byte
	{
		[Token(Token = "0x4000029")]
		LeftX,
		[Token(Token = "0x400002A")]
		LeftY,
		[Token(Token = "0x400002B")]
		LeftZ,
		[Token(Token = "0x400002C")]
		LeftW,
		[Token(Token = "0x400002D")]
		RightX,
		[Token(Token = "0x400002E")]
		RightY,
		[Token(Token = "0x400002F")]
		RightZ,
		[Token(Token = "0x4000030")]
		RightW
	}

	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x200000A")]
	internal struct IntFloatUnion
	{
		[Token(Token = "0x4000031")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int intValue;

		[Token(Token = "0x4000032")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public float floatValue;
	}

	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x200000B")]
	internal struct LongDoubleUnion
	{
		[Token(Token = "0x4000033")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public long longValue;

		[Token(Token = "0x4000034")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public double doubleValue;
	}

	[Token(Token = "0x400000A")]
	public const double E_DBL = Math.E;

	[Token(Token = "0x400000B")]
	public const double LOG2E_DBL = 1.4426950408889634;

	[Token(Token = "0x400000C")]
	public const double LOG10E_DBL = 0.4342944819032518;

	[Token(Token = "0x400000D")]
	public const double LN2_DBL = 0.6931471805599453;

	[Token(Token = "0x400000E")]
	public const double LN10_DBL = 2.302585092994046;

	[Token(Token = "0x400000F")]
	public const double PI_DBL = Math.PI;

	[Token(Token = "0x4000010")]
	public const double SQRT2_DBL = 1.4142135623730951;

	[Token(Token = "0x4000011")]
	public const double EPSILON_DBL = 2.220446049250313E-16;

	[Token(Token = "0x4000012")]
	public const double INFINITY_DBL = double.PositiveInfinity;

	[Token(Token = "0x4000013")]
	public const double NAN_DBL = double.NaN;

	[Token(Token = "0x4000014")]
	public const float FLT_MIN_NORMAL = 1.1754944E-38f;

	[Token(Token = "0x4000015")]
	public const double DBL_MIN_NORMAL = 2.2250738585072014E-308;

	[Token(Token = "0x4000016")]
	public const float E = (float)Math.E;

	[Token(Token = "0x4000017")]
	public const float LOG2E = 1.442695f;

	[Token(Token = "0x4000018")]
	public const float LOG10E = 0.4342945f;

	[Token(Token = "0x4000019")]
	public const float LN2 = 0.6931472f;

	[Token(Token = "0x400001A")]
	public const float LN10 = 2.3025851f;

	[Token(Token = "0x400001B")]
	public const float PI = (float)Math.PI;

	[Token(Token = "0x400001C")]
	public const float SQRT2 = 1.4142135f;

	[Token(Token = "0x400001D")]
	public const float EPSILON = 1.1920929E-07f;

	[Token(Token = "0x400001E")]
	public const float INFINITY = float.PositiveInfinity;

	[Token(Token = "0x400001F")]
	public const float NAN = float.NaN;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4A1FF60", Offset = "0x4A1FF60", VA = "0x4A1FF60")]
	public static bool2 bool2(bool x, bool y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4A1FF70", Offset = "0x4A1FF70", VA = "0x4A1FF70")]
	public static bool2 bool2(bool2 xy)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4A1FF80", Offset = "0x4A1FF80", VA = "0x4A1FF80")]
	public static bool2 bool2(bool v)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4A1FF90", Offset = "0x4A1FF90", VA = "0x4A1FF90")]
	public static uint hash(bool2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4A1FFC0", Offset = "0x4A1FFC0", VA = "0x4A1FFC0")]
	public static uint2 hashwide(bool2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4A20000", Offset = "0x4A20000", VA = "0x4A20000")]
	public static bool shuffle(bool2 left, bool2 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4A20010", Offset = "0x4A20010", VA = "0x4A20010")]
	public static bool2 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4A20050", Offset = "0x4A20050", VA = "0x4A20050")]
	public static bool3 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4A200B0", Offset = "0x4A200B0", VA = "0x4A200B0")]
	public static bool4 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4A20130", Offset = "0x4A20130", VA = "0x4A20130")]
	internal static bool select_shuffle_component(bool2 a, bool2 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4A20200", Offset = "0x4A20200", VA = "0x4A20200")]
	public static bool2x2 bool2x2(bool2 c0, bool2 c1)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4A20210", Offset = "0x4A20210", VA = "0x4A20210")]
	public static bool2x2 bool2x2(bool m00, bool m01, bool m10, bool m11)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4A20230", Offset = "0x4A20230", VA = "0x4A20230")]
	public static bool2x2 bool2x2(bool v)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4A20240", Offset = "0x4A20240", VA = "0x4A20240")]
	public static bool2x2 transpose(bool2x2 v)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4A20260", Offset = "0x4A20260", VA = "0x4A20260")]
	public static uint hash(bool2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4A202E0", Offset = "0x4A202E0", VA = "0x4A202E0")]
	public static uint2 hashwide(bool2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4A20360", Offset = "0x4A20360", VA = "0x4A20360")]
	public static bool2x3 bool2x3(bool2 c0, bool2 c1, bool2 c2)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4A20380", Offset = "0x4A20380", VA = "0x4A20380")]
	public static bool2x3 bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4A203B0", Offset = "0x4A203B0", VA = "0x4A203B0")]
	public static bool2x3 bool2x3(bool v)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4A203D0", Offset = "0x4A203D0", VA = "0x4A203D0")]
	public static bool3x2 transpose(bool2x3 v)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4A20430", Offset = "0x4A20430", VA = "0x4A20430")]
	public static uint hash(bool2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4A20500", Offset = "0x4A20500", VA = "0x4A20500")]
	public static uint2 hashwide(bool2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4A205E0", Offset = "0x4A205E0", VA = "0x4A205E0")]
	public static bool2x4 bool2x4(bool2 c0, bool2 c1, bool2 c2, bool2 c3)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4A20600", Offset = "0x4A20600", VA = "0x4A20600")]
	public static bool2x4 bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4A20650", Offset = "0x4A20650", VA = "0x4A20650")]
	public static bool2x4 bool2x4(bool v)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4A20680", Offset = "0x4A20680", VA = "0x4A20680")]
	public static bool4x2 transpose(bool2x4 v)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4A206E0", Offset = "0x4A206E0", VA = "0x4A206E0")]
	public static uint hash(bool2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4A20800", Offset = "0x4A20800", VA = "0x4A20800")]
	public static uint2 hashwide(bool2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4A20930", Offset = "0x4A20930", VA = "0x4A20930")]
	public static bool3 bool3(bool x, bool y, bool z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4A20940", Offset = "0x4A20940", VA = "0x4A20940")]
	public static bool3 bool3(bool x, bool2 yz)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4A20960", Offset = "0x4A20960", VA = "0x4A20960")]
	public static bool3 bool3(bool2 xy, bool z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4A20980", Offset = "0x4A20980", VA = "0x4A20980")]
	public static bool3 bool3(bool3 xyz)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4A20990", Offset = "0x4A20990", VA = "0x4A20990")]
	public static bool3 bool3(bool v)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4A209A0", Offset = "0x4A209A0", VA = "0x4A209A0")]
	public static uint hash(bool3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4A209E0", Offset = "0x4A209E0", VA = "0x4A209E0")]
	public static uint3 hashwide(bool3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4A20A30", Offset = "0x4A20A30", VA = "0x4A20A30")]
	public static bool shuffle(bool3 left, bool3 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4A20A40", Offset = "0x4A20A40", VA = "0x4A20A40")]
	public static bool2 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4A20A80", Offset = "0x4A20A80", VA = "0x4A20A80")]
	public static bool3 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4A20AE0", Offset = "0x4A20AE0", VA = "0x4A20AE0")]
	public static bool4 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4A20B60", Offset = "0x4A20B60", VA = "0x4A20B60")]
	internal static bool select_shuffle_component(bool3 a, bool3 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4A20C40", Offset = "0x4A20C40", VA = "0x4A20C40")]
	public static bool3x2 bool3x2(bool3 c0, bool3 c1)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4A20C50", Offset = "0x4A20C50", VA = "0x4A20C50")]
	public static bool3x2 bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4A20C80", Offset = "0x4A20C80", VA = "0x4A20C80")]
	public static bool3x2 bool3x2(bool v)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4A20CA0", Offset = "0x4A20CA0", VA = "0x4A20CA0")]
	public static bool2x3 transpose(bool3x2 v)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4A20CF0", Offset = "0x4A20CF0", VA = "0x4A20CF0")]
	public static uint hash(bool3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4A20DB0", Offset = "0x4A20DB0", VA = "0x4A20DB0")]
	public static uint3 hashwide(bool3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4A20E70", Offset = "0x4A20E70", VA = "0x4A20E70")]
	public static bool3x3 bool3x3(bool3 c0, bool3 c1, bool3 c2)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4A20EA0", Offset = "0x4A20EA0", VA = "0x4A20EA0")]
	public static bool3x3 bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4A20EF0", Offset = "0x4A20EF0", VA = "0x4A20EF0")]
	public static bool3x3 bool3x3(bool v)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4A20F20", Offset = "0x4A20F20", VA = "0x4A20F20")]
	public static bool3x3 transpose(bool3x3 v)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4A20FA0", Offset = "0x4A20FA0", VA = "0x4A20FA0")]
	public static uint hash(bool3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4A210D0", Offset = "0x4A210D0", VA = "0x4A210D0")]
	public static uint3 hashwide(bool3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4A21200", Offset = "0x4A21200", VA = "0x4A21200")]
	public static bool3x4 bool3x4(bool3 c0, bool3 c1, bool3 c2, bool3 c3)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4A21240", Offset = "0x4A21240", VA = "0x4A21240")]
	public static bool3x4 bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4A212C0", Offset = "0x4A212C0", VA = "0x4A212C0")]
	public static bool3x4 bool3x4(bool v)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4A21300", Offset = "0x4A21300", VA = "0x4A21300")]
	public static bool4x3 transpose(bool3x4 v)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4A213A0", Offset = "0x4A213A0", VA = "0x4A213A0")]
	public static uint hash(bool3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4A21530", Offset = "0x4A21530", VA = "0x4A21530")]
	public static uint3 hashwide(bool3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4A216C0", Offset = "0x4A216C0", VA = "0x4A216C0")]
	public static bool4 bool4(bool x, bool y, bool z, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4A216E0", Offset = "0x4A216E0", VA = "0x4A216E0")]
	public static bool4 bool4(bool x, bool y, bool2 zw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4A21700", Offset = "0x4A21700", VA = "0x4A21700")]
	public static bool4 bool4(bool x, bool2 yz, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4A21720", Offset = "0x4A21720", VA = "0x4A21720")]
	public static bool4 bool4(bool x, bool3 yzw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4A21740", Offset = "0x4A21740", VA = "0x4A21740")]
	public static bool4 bool4(bool2 xy, bool z, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4A21760", Offset = "0x4A21760", VA = "0x4A21760")]
	public static bool4 bool4(bool2 xy, bool2 zw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4A21780", Offset = "0x4A21780", VA = "0x4A21780")]
	public static bool4 bool4(bool3 xyz, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4A21790", Offset = "0x4A21790", VA = "0x4A21790")]
	public static bool4 bool4(bool4 xyzw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4A217A0", Offset = "0x4A217A0", VA = "0x4A217A0")]
	public static bool4 bool4(bool v)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4A217B0", Offset = "0x4A217B0", VA = "0x4A217B0")]
	public static uint hash(bool4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4A21800", Offset = "0x4A21800", VA = "0x4A21800")]
	public static uint4 hashwide(bool4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4A21870", Offset = "0x4A21870", VA = "0x4A21870")]
	public static bool shuffle(bool4 left, bool4 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4A21880", Offset = "0x4A21880", VA = "0x4A21880")]
	public static bool2 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4A218C0", Offset = "0x4A218C0", VA = "0x4A218C0")]
	public static bool3 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4A21920", Offset = "0x4A21920", VA = "0x4A21920")]
	public static bool4 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4A219A0", Offset = "0x4A219A0", VA = "0x4A219A0")]
	internal static bool select_shuffle_component(bool4 a, bool4 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4A21A90", Offset = "0x4A21A90", VA = "0x4A21A90")]
	public static bool4x2 bool4x2(bool4 c0, bool4 c1)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4A21AA0", Offset = "0x4A21AA0", VA = "0x4A21AA0")]
	public static bool4x2 bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4A21AE0", Offset = "0x4A21AE0", VA = "0x4A21AE0")]
	public static bool4x2 bool4x2(bool v)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4A21B00", Offset = "0x4A21B00", VA = "0x4A21B00")]
	public static bool2x4 transpose(bool4x2 v)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4A21B70", Offset = "0x4A21B70", VA = "0x4A21B70")]
	public static uint hash(bool4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4A21C70", Offset = "0x4A21C70", VA = "0x4A21C70")]
	public static uint4 hashwide(bool4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4A21D80", Offset = "0x4A21D80", VA = "0x4A21D80")]
	public static bool4x3 bool4x3(bool4 c0, bool4 c1, bool4 c2)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4A21D90", Offset = "0x4A21D90", VA = "0x4A21D90")]
	public static bool4x3 bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4A21E00", Offset = "0x4A21E00", VA = "0x4A21E00")]
	public static bool4x3 bool4x3(bool v)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4A21E20", Offset = "0x4A21E20", VA = "0x4A21E20")]
	public static bool3x4 transpose(bool4x3 v)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4A21ED0", Offset = "0x4A21ED0", VA = "0x4A21ED0")]
	public static uint hash(bool4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4A22070", Offset = "0x4A22070", VA = "0x4A22070")]
	public static uint4 hashwide(bool4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4A22200", Offset = "0x4A22200", VA = "0x4A22200")]
	public static bool4x4 bool4x4(bool4 c0, bool4 c1, bool4 c2, bool4 c3)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4A22220", Offset = "0x4A22220", VA = "0x4A22220")]
	public static bool4x4 bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31, bool m32, bool m33)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4A22320", Offset = "0x4A22320", VA = "0x4A22320")]
	public static bool4x4 bool4x4(bool v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4A22340", Offset = "0x4A22340", VA = "0x4A22340")]
	public static bool4x4 transpose(bool4x4 v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4A22420", Offset = "0x4A22420", VA = "0x4A22420")]
	public static uint hash(bool4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4A22650", Offset = "0x4A22650", VA = "0x4A22650")]
	public static uint4 hashwide(bool4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4A22880", Offset = "0x4A22880", VA = "0x4A22880")]
	public static double2 double2(double x, double y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4A22890", Offset = "0x4A22890", VA = "0x4A22890")]
	public static double2 double2(double2 xy)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4A228A0", Offset = "0x4A228A0", VA = "0x4A228A0")]
	public static double2 double2(double v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4A228B0", Offset = "0x4A228B0", VA = "0x4A228B0")]
	public static double2 double2(bool v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4A228D0", Offset = "0x4A228D0", VA = "0x4A228D0")]
	public static double2 double2(bool2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4A22900", Offset = "0x4A22900", VA = "0x4A22900")]
	public static double2 double2(int v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4A22910", Offset = "0x4A22910", VA = "0x4A22910")]
	public static double2 double2(int2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4A22920", Offset = "0x4A22920", VA = "0x4A22920")]
	public static double2 double2(uint v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4A22930", Offset = "0x4A22930", VA = "0x4A22930")]
	public static double2 double2(uint2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4A22950", Offset = "0x4A22950", VA = "0x4A22950")]
	public static double2 double2(half v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4A229C0", Offset = "0x4A229C0", VA = "0x4A229C0")]
	public static double2 double2(half2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4A22A80", Offset = "0x4A22A80", VA = "0x4A22A80")]
	public static double2 double2(float v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4A22A90", Offset = "0x4A22A90", VA = "0x4A22A90")]
	public static double2 double2(float2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4A22AA0", Offset = "0x4A22AA0", VA = "0x4A22AA0")]
	public static uint hash(double2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4A22AF0", Offset = "0x4A22AF0", VA = "0x4A22AF0")]
	public static uint2 hashwide(double2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4A22B40", Offset = "0x4A22B40", VA = "0x4A22B40")]
	public static double shuffle(double2 left, double2 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4A22B50", Offset = "0x4A22B50", VA = "0x4A22B50")]
	public static double2 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4A22BB0", Offset = "0x4A22BB0", VA = "0x4A22BB0")]
	public static double3 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4A22C60", Offset = "0x4A22C60", VA = "0x4A22C60")]
	public static double4 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4A22D40", Offset = "0x4A22D40", VA = "0x4A22D40")]
	internal static double select_shuffle_component(double2 a, double2 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4A22E00", Offset = "0x4A22E00", VA = "0x4A22E00")]
	public static double2x2 double2x2(double2 c0, double2 c1)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4A22E20", Offset = "0x4A22E20", VA = "0x4A22E20")]
	public static double2x2 double2x2(double m00, double m01, double m10, double m11)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4A22E40", Offset = "0x4A22E40", VA = "0x4A22E40")]
	public static double2x2 double2x2(double v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4A22E60", Offset = "0x4A22E60", VA = "0x4A22E60")]
	public static double2x2 double2x2(bool v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4A22E90", Offset = "0x4A22E90", VA = "0x4A22E90")]
	public static double2x2 double2x2(bool2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4A22F00", Offset = "0x4A22F00", VA = "0x4A22F00")]
	public static double2x2 double2x2(int v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4A22F20", Offset = "0x4A22F20", VA = "0x4A22F20")]
	public static double2x2 double2x2(int2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4A22F60", Offset = "0x4A22F60", VA = "0x4A22F60")]
	public static double2x2 double2x2(uint v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4A22F80", Offset = "0x4A22F80", VA = "0x4A22F80")]
	public static double2x2 double2x2(uint2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4A22FC0", Offset = "0x4A22FC0", VA = "0x4A22FC0")]
	public static double2x2 double2x2(float v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4A22FE0", Offset = "0x4A22FE0", VA = "0x4A22FE0")]
	public static double2x2 double2x2(float2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4A23000", Offset = "0x4A23000", VA = "0x4A23000")]
	public static double2x2 transpose(double2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4A23030", Offset = "0x4A23030", VA = "0x4A23030")]
	public static double2x2 inverse(double2x2 m)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4A23090", Offset = "0x4A23090", VA = "0x4A23090")]
	public static double determinant(double2x2 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4A230B0", Offset = "0x4A230B0", VA = "0x4A230B0")]
	public static uint hash(double2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4A23140", Offset = "0x4A23140", VA = "0x4A23140")]
	public static uint2 hashwide(double2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4A231E0", Offset = "0x4A231E0", VA = "0x4A231E0")]
	public static double2x3 double2x3(double2 c0, double2 c1, double2 c2)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4A23210", Offset = "0x4A23210", VA = "0x4A23210")]
	public static double2x3 double2x3(double m00, double m01, double m02, double m10, double m11, double m12)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4A23240", Offset = "0x4A23240", VA = "0x4A23240")]
	public static double2x3 double2x3(double v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4A23270", Offset = "0x4A23270", VA = "0x4A23270")]
	public static double2x3 double2x3(bool v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4A232B0", Offset = "0x4A232B0", VA = "0x4A232B0")]
	public static double2x3 double2x3(bool2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4A23350", Offset = "0x4A23350", VA = "0x4A23350")]
	public static double2x3 double2x3(int v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4A23380", Offset = "0x4A23380", VA = "0x4A23380")]
	public static double2x3 double2x3(int2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4A233E0", Offset = "0x4A233E0", VA = "0x4A233E0")]
	public static double2x3 double2x3(uint v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4A23410", Offset = "0x4A23410", VA = "0x4A23410")]
	public static double2x3 double2x3(uint2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4A23480", Offset = "0x4A23480", VA = "0x4A23480")]
	public static double2x3 double2x3(float v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4A234B0", Offset = "0x4A234B0", VA = "0x4A234B0")]
	public static double2x3 double2x3(float2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4A234D0", Offset = "0x4A234D0", VA = "0x4A234D0")]
	public static double3x2 transpose(double2x3 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4A23510", Offset = "0x4A23510", VA = "0x4A23510")]
	public static uint hash(double2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x4A235F0", Offset = "0x4A235F0", VA = "0x4A235F0")]
	public static uint2 hashwide(double2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x4A236E0", Offset = "0x4A236E0", VA = "0x4A236E0")]
	public static double2x4 double2x4(double2 c0, double2 c1, double2 c2, double2 c3)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4A23710", Offset = "0x4A23710", VA = "0x4A23710")]
	public static double2x4 double2x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x4A23740", Offset = "0x4A23740", VA = "0x4A23740")]
	public static double2x4 double2x4(double v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4A23770", Offset = "0x4A23770", VA = "0x4A23770")]
	public static double2x4 double2x4(bool v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4A237B0", Offset = "0x4A237B0", VA = "0x4A237B0")]
	public static double2x4 double2x4(bool2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x4A23880", Offset = "0x4A23880", VA = "0x4A23880")]
	public static double2x4 double2x4(int v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4A238B0", Offset = "0x4A238B0", VA = "0x4A238B0")]
	public static double2x4 double2x4(int2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4A23940", Offset = "0x4A23940", VA = "0x4A23940")]
	public static double2x4 double2x4(uint v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4A23980", Offset = "0x4A23980", VA = "0x4A23980")]
	public static double2x4 double2x4(uint2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4A23A20", Offset = "0x4A23A20", VA = "0x4A23A20")]
	public static double2x4 double2x4(float v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4A23A50", Offset = "0x4A23A50", VA = "0x4A23A50")]
	public static double2x4 double2x4(float2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4A23A80", Offset = "0x4A23A80", VA = "0x4A23A80")]
	public static double4x2 transpose(double2x4 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4A23AD0", Offset = "0x4A23AD0", VA = "0x4A23AD0")]
	public static uint hash(double2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4A23BF0", Offset = "0x4A23BF0", VA = "0x4A23BF0")]
	public static uint2 hashwide(double2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4A23D20", Offset = "0x4A23D20", VA = "0x4A23D20")]
	public static double3 double3(double x, double y, double z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4A23D40", Offset = "0x4A23D40", VA = "0x4A23D40")]
	public static double3 double3(double x, double2 yz)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4A23D60", Offset = "0x4A23D60", VA = "0x4A23D60")]
	public static double3 double3(double2 xy, double z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4A23D80", Offset = "0x4A23D80", VA = "0x4A23D80")]
	public static double3 double3(double3 xyz)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4A23DA0", Offset = "0x4A23DA0", VA = "0x4A23DA0")]
	public static double3 double3(double v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4A23DC0", Offset = "0x4A23DC0", VA = "0x4A23DC0")]
	public static double3 double3(bool v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4A23DF0", Offset = "0x4A23DF0", VA = "0x4A23DF0")]
	public static double3 double3(bool3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4A23E60", Offset = "0x4A23E60", VA = "0x4A23E60")]
	public static double3 double3(int v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4A23E80", Offset = "0x4A23E80", VA = "0x4A23E80")]
	public static double3 double3(int3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4A23EB0", Offset = "0x4A23EB0", VA = "0x4A23EB0")]
	public static double3 double3(uint v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4A23ED0", Offset = "0x4A23ED0", VA = "0x4A23ED0")]
	public static double3 double3(uint3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4A23F00", Offset = "0x4A23F00", VA = "0x4A23F00")]
	public static double3 double3(half v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4A23F80", Offset = "0x4A23F80", VA = "0x4A23F80")]
	public static double3 double3(half3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4A240C0", Offset = "0x4A240C0", VA = "0x4A240C0")]
	public static double3 double3(float v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4A240E0", Offset = "0x4A240E0", VA = "0x4A240E0")]
	public static double3 double3(float3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4A24100", Offset = "0x4A24100", VA = "0x4A24100")]
	public static uint hash(double3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4A24160", Offset = "0x4A24160", VA = "0x4A24160")]
	public static uint3 hashwide(double3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4A241D0", Offset = "0x4A241D0", VA = "0x4A241D0")]
	public static double shuffle(double3 left, double3 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4A241E0", Offset = "0x4A241E0", VA = "0x4A241E0")]
	public static double2 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4A24260", Offset = "0x4A24260", VA = "0x4A24260")]
	public static double3 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4A24340", Offset = "0x4A24340", VA = "0x4A24340")]
	public static double4 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4A24480", Offset = "0x4A24480", VA = "0x4A24480")]
	internal static double select_shuffle_component(double3 a, double3 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4A24550", Offset = "0x4A24550", VA = "0x4A24550")]
	public static double3x2 double3x2(double3 c0, double3 c1)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4A24580", Offset = "0x4A24580", VA = "0x4A24580")]
	public static double3x2 double3x2(double m00, double m01, double m10, double m11, double m20, double m21)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4A245B0", Offset = "0x4A245B0", VA = "0x4A245B0")]
	public static double3x2 double3x2(double v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4A245E0", Offset = "0x4A245E0", VA = "0x4A245E0")]
	public static double3x2 double3x2(bool v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4A24620", Offset = "0x4A24620", VA = "0x4A24620")]
	public static double3x2 double3x2(bool3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4A24700", Offset = "0x4A24700", VA = "0x4A24700")]
	public static double3x2 double3x2(int v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4A24730", Offset = "0x4A24730", VA = "0x4A24730")]
	public static double3x2 double3x2(int3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4A24790", Offset = "0x4A24790", VA = "0x4A24790")]
	public static double3x2 double3x2(uint v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x4A247C0", Offset = "0x4A247C0", VA = "0x4A247C0")]
	public static double3x2 double3x2(uint3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4A24830", Offset = "0x4A24830", VA = "0x4A24830")]
	public static double3x2 double3x2(float v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x4A24860", Offset = "0x4A24860", VA = "0x4A24860")]
	public static double3x2 double3x2(float3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4A248A0", Offset = "0x4A248A0", VA = "0x4A248A0")]
	public static double2x3 transpose(double3x2 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4A248E0", Offset = "0x4A248E0", VA = "0x4A248E0")]
	public static uint hash(double3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4A249A0", Offset = "0x4A249A0", VA = "0x4A249A0")]
	public static uint3 hashwide(double3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4A24A70", Offset = "0x4A24A70", VA = "0x4A24A70")]
	public static double3x3 double3x3(double3 c0, double3 c1, double3 c2)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x4A24AB0", Offset = "0x4A24AB0", VA = "0x4A24AB0")]
	public static double3x3 double3x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4A24AF0", Offset = "0x4A24AF0", VA = "0x4A24AF0")]
	public static double3x3 double3x3(double v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4A24B20", Offset = "0x4A24B20", VA = "0x4A24B20")]
	public static double3x3 double3x3(bool v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4A24B70", Offset = "0x4A24B70", VA = "0x4A24B70")]
	public static double3x3 double3x3(bool3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4A24CC0", Offset = "0x4A24CC0", VA = "0x4A24CC0")]
	public static double3x3 double3x3(int v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4A24D00", Offset = "0x4A24D00", VA = "0x4A24D00")]
	public static double3x3 double3x3(int3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4A24D90", Offset = "0x4A24D90", VA = "0x4A24D90")]
	public static double3x3 double3x3(uint v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4A24DD0", Offset = "0x4A24DD0", VA = "0x4A24DD0")]
	public static double3x3 double3x3(uint3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4A24E70", Offset = "0x4A24E70", VA = "0x4A24E70")]
	public static double3x3 double3x3(float v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4A24EB0", Offset = "0x4A24EB0", VA = "0x4A24EB0")]
	public static double3x3 double3x3(float3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4A24F10", Offset = "0x4A24F10", VA = "0x4A24F10")]
	public static double3x3 transpose(double3x3 v)
	{
		return default(double3x3);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4A24F70", Offset = "0x4A24F70", VA = "0x4A24F70")]
	public static double3x3 inverse(double3x3 m)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4A250C0", Offset = "0x4A250C0", VA = "0x4A250C0")]
	public static double determinant(double3x3 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4A25140", Offset = "0x4A25140", VA = "0x4A25140")]
	public static uint hash(double3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4A25270", Offset = "0x4A25270", VA = "0x4A25270")]
	public static uint3 hashwide(double3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4A253A0", Offset = "0x4A253A0", VA = "0x4A253A0")]
	public static double3x4 double3x4(double3 c0, double3 c1, double3 c2, double3 c3)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4A253F0", Offset = "0x4A253F0", VA = "0x4A253F0")]
	public static double3x4 double3x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4A25450", Offset = "0x4A25450", VA = "0x4A25450")]
	public static double3x4 double3x4(double v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4A25490", Offset = "0x4A25490", VA = "0x4A25490")]
	public static double3x4 double3x4(bool v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4A254E0", Offset = "0x4A254E0", VA = "0x4A254E0")]
	public static double3x4 double3x4(bool3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4A25690", Offset = "0x4A25690", VA = "0x4A25690")]
	public static double3x4 double3x4(int v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4A256E0", Offset = "0x4A256E0", VA = "0x4A256E0")]
	public static double3x4 double3x4(int3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4A25790", Offset = "0x4A25790", VA = "0x4A25790")]
	public static double3x4 double3x4(uint v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4A257E0", Offset = "0x4A257E0", VA = "0x4A257E0")]
	public static double3x4 double3x4(uint3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4A258C0", Offset = "0x4A258C0", VA = "0x4A258C0")]
	public static double3x4 double3x4(float v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4A25910", Offset = "0x4A25910", VA = "0x4A25910")]
	public static double3x4 double3x4(float3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4A25980", Offset = "0x4A25980", VA = "0x4A25980")]
	public static double4x3 transpose(double3x4 v)
	{
		return default(double4x3);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4A25A00", Offset = "0x4A25A00", VA = "0x4A25A00")]
	public static double3x4 fastinverse(double3x4 m)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4A25AF0", Offset = "0x4A25AF0", VA = "0x4A25AF0")]
	public static uint hash(double3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4A25C80", Offset = "0x4A25C80", VA = "0x4A25C80")]
	public static uint3 hashwide(double3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4A25E20", Offset = "0x4A25E20", VA = "0x4A25E20")]
	public static double4 double4(double x, double y, double z, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4A25E40", Offset = "0x4A25E40", VA = "0x4A25E40")]
	public static double4 double4(double x, double y, double2 zw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4A25E60", Offset = "0x4A25E60", VA = "0x4A25E60")]
	public static double4 double4(double x, double2 yz, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4A25E80", Offset = "0x4A25E80", VA = "0x4A25E80")]
	public static double4 double4(double x, double3 yzw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4A25EA0", Offset = "0x4A25EA0", VA = "0x4A25EA0")]
	public static double4 double4(double2 xy, double z, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000121")]
	[Address(RVA = "0x4A25EC0", Offset = "0x4A25EC0", VA = "0x4A25EC0")]
	public static double4 double4(double2 xy, double2 zw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000122")]
	[Address(RVA = "0x4A25EE0", Offset = "0x4A25EE0", VA = "0x4A25EE0")]
	public static double4 double4(double3 xyz, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000123")]
	[Address(RVA = "0x4A25F00", Offset = "0x4A25F00", VA = "0x4A25F00")]
	public static double4 double4(double4 xyzw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000124")]
	[Address(RVA = "0x4A25F20", Offset = "0x4A25F20", VA = "0x4A25F20")]
	public static double4 double4(double v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000125")]
	[Address(RVA = "0x4A25F40", Offset = "0x4A25F40", VA = "0x4A25F40")]
	public static double4 double4(bool v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000126")]
	[Address(RVA = "0x4A25F70", Offset = "0x4A25F70", VA = "0x4A25F70")]
	public static double4 double4(bool4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000127")]
	[Address(RVA = "0x4A26000", Offset = "0x4A26000", VA = "0x4A26000")]
	public static double4 double4(int v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4A26020", Offset = "0x4A26020", VA = "0x4A26020")]
	public static double4 double4(int4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000129")]
	[Address(RVA = "0x4A26060", Offset = "0x4A26060", VA = "0x4A26060")]
	public static double4 double4(uint v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4A26080", Offset = "0x4A26080", VA = "0x4A26080")]
	public static double4 double4(uint4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4A260C0", Offset = "0x4A260C0", VA = "0x4A260C0")]
	public static double4 double4(half v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4A26140", Offset = "0x4A26140", VA = "0x4A26140")]
	public static double4 double4(half4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4A262E0", Offset = "0x4A262E0", VA = "0x4A262E0")]
	public static double4 double4(float v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4A26300", Offset = "0x4A26300", VA = "0x4A26300")]
	public static double4 double4(float4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4A26320", Offset = "0x4A26320", VA = "0x4A26320")]
	public static uint hash(double4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4A263A0", Offset = "0x4A263A0", VA = "0x4A263A0")]
	public static uint4 hashwide(double4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4A26430", Offset = "0x4A26430", VA = "0x4A26430")]
	public static double shuffle(double4 left, double4 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4A26510", Offset = "0x4A26510", VA = "0x4A26510")]
	public static double2 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4A266C0", Offset = "0x4A266C0", VA = "0x4A266C0")]
	public static double3 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4A26920", Offset = "0x4A26920", VA = "0x4A26920")]
	public static double4 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4A26C20", Offset = "0x4A26C20", VA = "0x4A26C20")]
	internal static double select_shuffle_component(double4 a, double4 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000136")]
	[Address(RVA = "0x4A26D00", Offset = "0x4A26D00", VA = "0x4A26D00")]
	public static double4x2 double4x2(double4 c0, double4 c1)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4A26D30", Offset = "0x4A26D30", VA = "0x4A26D30")]
	public static double4x2 double4x2(double m00, double m01, double m10, double m11, double m20, double m21, double m30, double m31)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4A26D60", Offset = "0x4A26D60", VA = "0x4A26D60")]
	public static double4x2 double4x2(double v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4A26D90", Offset = "0x4A26D90", VA = "0x4A26D90")]
	public static double4x2 double4x2(bool v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4A26DD0", Offset = "0x4A26DD0", VA = "0x4A26DD0")]
	public static double4x2 double4x2(bool4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4A26ED0", Offset = "0x4A26ED0", VA = "0x4A26ED0")]
	public static double4x2 double4x2(int v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4A26F00", Offset = "0x4A26F00", VA = "0x4A26F00")]
	public static double4x2 double4x2(int4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4A26F80", Offset = "0x4A26F80", VA = "0x4A26F80")]
	public static double4x2 double4x2(uint v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013E")]
	[Address(RVA = "0x4A26FC0", Offset = "0x4A26FC0", VA = "0x4A26FC0")]
	public static double4x2 double4x2(uint4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4A27050", Offset = "0x4A27050", VA = "0x4A27050")]
	public static double4x2 double4x2(float v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000140")]
	[Address(RVA = "0x4A27080", Offset = "0x4A27080", VA = "0x4A27080")]
	public static double4x2 double4x2(float4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000141")]
	[Address(RVA = "0x4A270B0", Offset = "0x4A270B0", VA = "0x4A270B0")]
	public static double2x4 transpose(double4x2 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000142")]
	[Address(RVA = "0x4A27100", Offset = "0x4A27100", VA = "0x4A27100")]
	public static uint hash(double4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000143")]
	[Address(RVA = "0x4A27210", Offset = "0x4A27210", VA = "0x4A27210")]
	public static uint4 hashwide(double4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4A27350", Offset = "0x4A27350", VA = "0x4A27350")]
	public static double4x3 double4x3(double4 c0, double4 c1, double4 c2)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4A27390", Offset = "0x4A27390", VA = "0x4A27390")]
	public static double4x3 double4x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22, double m30, double m31, double m32)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4A273F0", Offset = "0x4A273F0", VA = "0x4A273F0")]
	public static double4x3 double4x3(double v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4A27430", Offset = "0x4A27430", VA = "0x4A27430")]
	public static double4x3 double4x3(bool v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4A27480", Offset = "0x4A27480", VA = "0x4A27480")]
	public static double4x3 double4x3(bool4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000149")]
	[Address(RVA = "0x4A275E0", Offset = "0x4A275E0", VA = "0x4A275E0")]
	public static double4x3 double4x3(int v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4A27630", Offset = "0x4A27630", VA = "0x4A27630")]
	public static double4x3 double4x3(int4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4A276F0", Offset = "0x4A276F0", VA = "0x4A276F0")]
	public static double4x3 double4x3(uint v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4A27740", Offset = "0x4A27740", VA = "0x4A27740")]
	public static double4x3 double4x3(uint4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4A27820", Offset = "0x4A27820", VA = "0x4A27820")]
	public static double4x3 double4x3(float v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4A27870", Offset = "0x4A27870", VA = "0x4A27870")]
	public static double4x3 double4x3(float4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014F")]
	[Address(RVA = "0x4A278B0", Offset = "0x4A278B0", VA = "0x4A278B0")]
	public static double3x4 transpose(double4x3 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000150")]
	[Address(RVA = "0x4A27930", Offset = "0x4A27930", VA = "0x4A27930")]
	public static uint hash(double4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000151")]
	[Address(RVA = "0x4A27AF0", Offset = "0x4A27AF0", VA = "0x4A27AF0")]
	public static uint4 hashwide(double4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000152")]
	[Address(RVA = "0x4A27CD0", Offset = "0x4A27CD0", VA = "0x4A27CD0")]
	public static double4x4 double4x4(double4 c0, double4 c1, double4 c2, double4 c3)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000153")]
	[Address(RVA = "0x4A27D20", Offset = "0x4A27D20", VA = "0x4A27D20")]
	public static double4x4 double4x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000154")]
	[Address(RVA = "0x4A27DC0", Offset = "0x4A27DC0", VA = "0x4A27DC0")]
	public static double4x4 double4x4(double v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000155")]
	[Address(RVA = "0x4A27E20", Offset = "0x4A27E20", VA = "0x4A27E20")]
	public static double4x4 double4x4(bool v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000156")]
	[Address(RVA = "0x4A27E90", Offset = "0x4A27E90", VA = "0x4A27E90")]
	public static double4x4 double4x4(bool4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000157")]
	[Address(RVA = "0x4A27ED0", Offset = "0x4A27ED0", VA = "0x4A27ED0")]
	public static double4x4 double4x4(int v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000158")]
	[Address(RVA = "0x4A27F30", Offset = "0x4A27F30", VA = "0x4A27F30")]
	public static double4x4 double4x4(int4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000159")]
	[Address(RVA = "0x4A28040", Offset = "0x4A28040", VA = "0x4A28040")]
	public static double4x4 double4x4(uint v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015A")]
	[Address(RVA = "0x4A280A0", Offset = "0x4A280A0", VA = "0x4A280A0")]
	public static double4x4 double4x4(uint4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015B")]
	[Address(RVA = "0x4A281D0", Offset = "0x4A281D0", VA = "0x4A281D0")]
	public static double4x4 double4x4(float v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015C")]
	[Address(RVA = "0x4A28230", Offset = "0x4A28230", VA = "0x4A28230")]
	public static double4x4 double4x4(float4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015D")]
	[Address(RVA = "0x4A28280", Offset = "0x4A28280", VA = "0x4A28280")]
	public static double3 rotate(double4x4 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015E")]
	[Address(RVA = "0x4A28300", Offset = "0x4A28300", VA = "0x4A28300")]
	public static double3 transform(double4x4 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015F")]
	[Address(RVA = "0x4A28380", Offset = "0x4A28380", VA = "0x4A28380")]
	public static double4x4 transpose(double4x4 v)
	{
		return default(double4x4);
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x4A28420", Offset = "0x4A28420", VA = "0x4A28420")]
	public static double4x4 inverse(double4x4 m)
	{
		return default(double4x4);
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x4A28840", Offset = "0x4A28840", VA = "0x4A28840")]
	public static double4x4 fastinverse(double4x4 m)
	{
		return default(double4x4);
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x4A28960", Offset = "0x4A28960", VA = "0x4A28960")]
	public static double determinant(double4x4 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000163")]
	[Address(RVA = "0x4A28AC0", Offset = "0x4A28AC0", VA = "0x4A28AC0")]
	public static uint hash(double4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4A28D30", Offset = "0x4A28D30", VA = "0x4A28D30")]
	public static uint4 hashwide(double4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4A28FA0", Offset = "0x4A28FA0", VA = "0x4A28FA0")]
	public static float2 float2(float x, float y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4A28FB0", Offset = "0x4A28FB0", VA = "0x4A28FB0")]
	public static float2 float2(float2 xy)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4A28FC0", Offset = "0x4A28FC0", VA = "0x4A28FC0")]
	public static float2 float2(float v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4A28FD0", Offset = "0x4A28FD0", VA = "0x4A28FD0")]
	public static float2 float2(bool v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4A28FF0", Offset = "0x4A28FF0", VA = "0x4A28FF0")]
	public static float2 float2(bool2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4A29030", Offset = "0x4A29030", VA = "0x4A29030")]
	public static float2 float2(int v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016B")]
	[Address(RVA = "0x4A29040", Offset = "0x4A29040", VA = "0x4A29040")]
	public static float2 float2(int2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4A29050", Offset = "0x4A29050", VA = "0x4A29050")]
	public static float2 float2(uint v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4A29060", Offset = "0x4A29060", VA = "0x4A29060")]
	public static float2 float2(uint2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4A29080", Offset = "0x4A29080", VA = "0x4A29080")]
	public static float2 float2(half v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4A290F0", Offset = "0x4A290F0", VA = "0x4A290F0")]
	public static float2 float2(half2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4A291B0", Offset = "0x4A291B0", VA = "0x4A291B0")]
	public static float2 float2(double v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4A291C0", Offset = "0x4A291C0", VA = "0x4A291C0")]
	public static float2 float2(double2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4A291D0", Offset = "0x4A291D0", VA = "0x4A291D0")]
	public static uint hash(float2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000173")]
	[Address(RVA = "0x4A29200", Offset = "0x4A29200", VA = "0x4A29200")]
	public static uint2 hashwide(float2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4A29240", Offset = "0x4A29240", VA = "0x4A29240")]
	public static float shuffle(float2 left, float2 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4A29300", Offset = "0x4A29300", VA = "0x4A29300")]
	public static float2 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4A29420", Offset = "0x4A29420", VA = "0x4A29420")]
	public static float3 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4A295D0", Offset = "0x4A295D0", VA = "0x4A295D0")]
	public static float4 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4A29800", Offset = "0x4A29800", VA = "0x4A29800")]
	internal static float select_shuffle_component(float2 a, float2 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4A298C0", Offset = "0x4A298C0", VA = "0x4A298C0")]
	public static float2x2 float2x2(float2 c0, float2 c1)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4A298D0", Offset = "0x4A298D0", VA = "0x4A298D0")]
	public static float2x2 float2x2(float m00, float m01, float m10, float m11)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017B")]
	[Address(RVA = "0x4A298E0", Offset = "0x4A298E0", VA = "0x4A298E0")]
	public static float2x2 float2x2(float v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4A298F0", Offset = "0x4A298F0", VA = "0x4A298F0")]
	public static float2x2 float2x2(bool v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017D")]
	[Address(RVA = "0x4A29910", Offset = "0x4A29910", VA = "0x4A29910")]
	public static float2x2 float2x2(bool2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017E")]
	[Address(RVA = "0x4A29970", Offset = "0x4A29970", VA = "0x4A29970")]
	public static float2x2 float2x2(int v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4A29980", Offset = "0x4A29980", VA = "0x4A29980")]
	public static float2x2 float2x2(int2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4A299B0", Offset = "0x4A299B0", VA = "0x4A299B0")]
	public static float2x2 float2x2(uint v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000181")]
	[Address(RVA = "0x4A299D0", Offset = "0x4A299D0", VA = "0x4A299D0")]
	public static float2x2 float2x2(uint2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4A29A10", Offset = "0x4A29A10", VA = "0x4A29A10")]
	public static float2x2 float2x2(double v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000183")]
	[Address(RVA = "0x4A29A20", Offset = "0x4A29A20", VA = "0x4A29A20")]
	public static float2x2 float2x2(double2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000184")]
	[Address(RVA = "0x4A29A30", Offset = "0x4A29A30", VA = "0x4A29A30")]
	public static float2x2 transpose(float2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000185")]
	[Address(RVA = "0x4A29A50", Offset = "0x4A29A50", VA = "0x4A29A50")]
	public static float2x2 inverse(float2x2 m)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000186")]
	[Address(RVA = "0x4A29AB0", Offset = "0x4A29AB0", VA = "0x4A29AB0")]
	public static float determinant(float2x2 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000187")]
	[Address(RVA = "0x4A29AD0", Offset = "0x4A29AD0", VA = "0x4A29AD0")]
	public static uint hash(float2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000188")]
	[Address(RVA = "0x4A29B40", Offset = "0x4A29B40", VA = "0x4A29B40")]
	public static uint2 hashwide(float2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000189")]
	[Address(RVA = "0x4A29BC0", Offset = "0x4A29BC0", VA = "0x4A29BC0")]
	public static float2x3 float2x3(float2 c0, float2 c1, float2 c2)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018A")]
	[Address(RVA = "0x4A29BD0", Offset = "0x4A29BD0", VA = "0x4A29BD0")]
	public static float2x3 float2x3(float m00, float m01, float m02, float m10, float m11, float m12)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018B")]
	[Address(RVA = "0x4A29C00", Offset = "0x4A29C00", VA = "0x4A29C00")]
	public static float2x3 float2x3(float v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018C")]
	[Address(RVA = "0x4A29C20", Offset = "0x4A29C20", VA = "0x4A29C20")]
	public static float2x3 float2x3(bool v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4A29C50", Offset = "0x4A29C50", VA = "0x4A29C50")]
	public static float2x3 float2x3(bool2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018E")]
	[Address(RVA = "0x4A29CE0", Offset = "0x4A29CE0", VA = "0x4A29CE0")]
	public static float2x3 float2x3(int v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018F")]
	[Address(RVA = "0x4A29D00", Offset = "0x4A29D00", VA = "0x4A29D00")]
	public static float2x3 float2x3(int2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000190")]
	[Address(RVA = "0x4A29D50", Offset = "0x4A29D50", VA = "0x4A29D50")]
	public static float2x3 float2x3(uint v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000191")]
	[Address(RVA = "0x4A29D80", Offset = "0x4A29D80", VA = "0x4A29D80")]
	public static float2x3 float2x3(uint2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x4A29E00", Offset = "0x4A29E00", VA = "0x4A29E00")]
	public static float2x3 float2x3(double v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4A29E20", Offset = "0x4A29E20", VA = "0x4A29E20")]
	public static float2x3 float2x3(double2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000194")]
	[Address(RVA = "0x4A29E50", Offset = "0x4A29E50", VA = "0x4A29E50")]
	public static float3x2 transpose(float2x3 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4A29E80", Offset = "0x4A29E80", VA = "0x4A29E80")]
	public static uint hash(float2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4A29F50", Offset = "0x4A29F50", VA = "0x4A29F50")]
	public static uint2 hashwide(float2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4A2A020", Offset = "0x4A2A020", VA = "0x4A2A020")]
	public static float2x4 float2x4(float2 c0, float2 c1, float2 c2, float2 c3)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4A2A040", Offset = "0x4A2A040", VA = "0x4A2A040")]
	public static float2x4 float2x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000199")]
	[Address(RVA = "0x4A2A070", Offset = "0x4A2A070", VA = "0x4A2A070")]
	public static float2x4 float2x4(float v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019A")]
	[Address(RVA = "0x4A2A080", Offset = "0x4A2A080", VA = "0x4A2A080")]
	public static float2x4 float2x4(bool v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019B")]
	[Address(RVA = "0x4A2A0B0", Offset = "0x4A2A0B0", VA = "0x4A2A0B0")]
	public static float2x4 float2x4(bool2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019C")]
	[Address(RVA = "0x4A2A180", Offset = "0x4A2A180", VA = "0x4A2A180")]
	public static float2x4 float2x4(int v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019D")]
	[Address(RVA = "0x4A2A1A0", Offset = "0x4A2A1A0", VA = "0x4A2A1A0")]
	public static float2x4 float2x4(int2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019E")]
	[Address(RVA = "0x4A2A210", Offset = "0x4A2A210", VA = "0x4A2A210")]
	public static float2x4 float2x4(uint v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019F")]
	[Address(RVA = "0x4A2A230", Offset = "0x4A2A230", VA = "0x4A2A230")]
	public static float2x4 float2x4(uint2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4A2A2D0", Offset = "0x4A2A2D0", VA = "0x4A2A2D0")]
	public static float2x4 float2x4(double v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x4A2A2F0", Offset = "0x4A2A2F0", VA = "0x4A2A2F0")]
	public static float2x4 float2x4(double2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x4A2A320", Offset = "0x4A2A320", VA = "0x4A2A320")]
	public static float4x2 transpose(float2x4 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x4A2A370", Offset = "0x4A2A370", VA = "0x4A2A370")]
	public static uint hash(float2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x4A2A480", Offset = "0x4A2A480", VA = "0x4A2A480")]
	public static uint2 hashwide(float2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4A2A5A0", Offset = "0x4A2A5A0", VA = "0x4A2A5A0")]
	public static float3 float3(float x, float y, float z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4A2A5B0", Offset = "0x4A2A5B0", VA = "0x4A2A5B0")]
	public static float3 float3(float x, float2 yz)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x4A2A5C0", Offset = "0x4A2A5C0", VA = "0x4A2A5C0")]
	public static float3 float3(float2 xy, float z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x4A2A5D0", Offset = "0x4A2A5D0", VA = "0x4A2A5D0")]
	public static float3 float3(float3 xyz)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x4A2A5E0", Offset = "0x4A2A5E0", VA = "0x4A2A5E0")]
	public static float3 float3(float v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4A2A5F0", Offset = "0x4A2A5F0", VA = "0x4A2A5F0")]
	public static float3 float3(bool v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4A2A610", Offset = "0x4A2A610", VA = "0x4A2A610")]
	public static float3 float3(bool3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4A2A660", Offset = "0x4A2A660", VA = "0x4A2A660")]
	public static float3 float3(int v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4A2A670", Offset = "0x4A2A670", VA = "0x4A2A670")]
	public static float3 float3(int3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4A2A690", Offset = "0x4A2A690", VA = "0x4A2A690")]
	public static float3 float3(uint v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x4A2A6B0", Offset = "0x4A2A6B0", VA = "0x4A2A6B0")]
	public static float3 float3(uint3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4A2A6E0", Offset = "0x4A2A6E0", VA = "0x4A2A6E0")]
	public static float3 float3(half v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4A2A750", Offset = "0x4A2A750", VA = "0x4A2A750")]
	public static float3 float3(half3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4A2A870", Offset = "0x4A2A870", VA = "0x4A2A870")]
	public static float3 float3(double v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4A2A880", Offset = "0x4A2A880", VA = "0x4A2A880")]
	public static float3 float3(double3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x4A2A8A0", Offset = "0x4A2A8A0", VA = "0x4A2A8A0")]
	public static uint hash(float3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x4A2A8E0", Offset = "0x4A2A8E0", VA = "0x4A2A8E0")]
	public static uint3 hashwide(float3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x4A2A930", Offset = "0x4A2A930", VA = "0x4A2A930")]
	public static float shuffle(float3 left, float3 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4A2AA00", Offset = "0x4A2AA00", VA = "0x4A2AA00")]
	public static float2 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4A2AB40", Offset = "0x4A2AB40", VA = "0x4A2AB40")]
	public static float3 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4A2AD20", Offset = "0x4A2AD20", VA = "0x4A2AD20")]
	public static float4 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4A2AF90", Offset = "0x4A2AF90", VA = "0x4A2AF90")]
	internal static float select_shuffle_component(float3 a, float3 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4A2B060", Offset = "0x4A2B060", VA = "0x4A2B060")]
	public static float3x2 float3x2(float3 c0, float3 c1)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4A2B080", Offset = "0x4A2B080", VA = "0x4A2B080")]
	public static float3x2 float3x2(float m00, float m01, float m10, float m11, float m20, float m21)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4A2B0B0", Offset = "0x4A2B0B0", VA = "0x4A2B0B0")]
	public static float3x2 float3x2(float v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4A2B0D0", Offset = "0x4A2B0D0", VA = "0x4A2B0D0")]
	public static float3x2 float3x2(bool v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4A2B110", Offset = "0x4A2B110", VA = "0x4A2B110")]
	public static float3x2 float3x2(bool3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4A2B1C0", Offset = "0x4A2B1C0", VA = "0x4A2B1C0")]
	public static float3x2 float3x2(int v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4A2B1E0", Offset = "0x4A2B1E0", VA = "0x4A2B1E0")]
	public static float3x2 float3x2(int3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4A2B230", Offset = "0x4A2B230", VA = "0x4A2B230")]
	public static float3x2 float3x2(uint v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4A2B260", Offset = "0x4A2B260", VA = "0x4A2B260")]
	public static float3x2 float3x2(uint3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4A2B2E0", Offset = "0x4A2B2E0", VA = "0x4A2B2E0")]
	public static float3x2 float3x2(double v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4A2B300", Offset = "0x4A2B300", VA = "0x4A2B300")]
	public static float3x2 float3x2(double3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4A2B340", Offset = "0x4A2B340", VA = "0x4A2B340")]
	public static float2x3 transpose(float3x2 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x4A2B370", Offset = "0x4A2B370", VA = "0x4A2B370")]
	public static uint hash(float3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x4A2B400", Offset = "0x4A2B400", VA = "0x4A2B400")]
	public static uint3 hashwide(float3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x4A2B4B0", Offset = "0x4A2B4B0", VA = "0x4A2B4B0")]
	public static float3x3 float3x3(float3 c0, float3 c1, float3 c2)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x4A2B4D0", Offset = "0x4A2B4D0", VA = "0x4A2B4D0")]
	public static float3x3 float3x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x4A2B510", Offset = "0x4A2B510", VA = "0x4A2B510")]
	public static float3x3 float3x3(float v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x4A2B540", Offset = "0x4A2B540", VA = "0x4A2B540")]
	public static float3x3 float3x3(bool v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x4A2B580", Offset = "0x4A2B580", VA = "0x4A2B580")]
	public static float3x3 float3x3(bool3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x4A2B6C0", Offset = "0x4A2B6C0", VA = "0x4A2B6C0")]
	public static float3x3 float3x3(int v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4A2B6F0", Offset = "0x4A2B6F0", VA = "0x4A2B6F0")]
	public static float3x3 float3x3(int3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4A2B770", Offset = "0x4A2B770", VA = "0x4A2B770")]
	public static float3x3 float3x3(uint v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4A2B7A0", Offset = "0x4A2B7A0", VA = "0x4A2B7A0")]
	public static float3x3 float3x3(uint3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4A2B860", Offset = "0x4A2B860", VA = "0x4A2B860")]
	public static float3x3 float3x3(double v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4A2B890", Offset = "0x4A2B890", VA = "0x4A2B890")]
	public static float3x3 float3x3(double3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4A2B8F0", Offset = "0x4A2B8F0", VA = "0x4A2B8F0")]
	public static float3x3 transpose(float3x3 v)
	{
		return default(float3x3);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4A2B940", Offset = "0x4A2B940", VA = "0x4A2B940")]
	public static float3x3 inverse(float3x3 m)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4A2BA90", Offset = "0x4A2BA90", VA = "0x4A2BA90")]
	public static float determinant(float3x3 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4A2BB00", Offset = "0x4A2BB00", VA = "0x4A2BB00")]
	public static uint hash(float3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4A2BBF0", Offset = "0x4A2BBF0", VA = "0x4A2BBF0")]
	public static uint3 hashwide(float3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4A2BCF0", Offset = "0x4A2BCF0", VA = "0x4A2BCF0")]
	public static float3x4 float3x4(float3 c0, float3 c1, float3 c2, float3 c3)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4A2BD20", Offset = "0x4A2BD20", VA = "0x4A2BD20")]
	public static float3x4 float3x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4A2BD80", Offset = "0x4A2BD80", VA = "0x4A2BD80")]
	public static float3x4 float3x4(float v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4A2BDB0", Offset = "0x4A2BDB0", VA = "0x4A2BDB0")]
	public static float3x4 float3x4(bool v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4A2BE00", Offset = "0x4A2BE00", VA = "0x4A2BE00")]
	public static float3x4 float3x4(bool3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4A2BFC0", Offset = "0x4A2BFC0", VA = "0x4A2BFC0")]
	public static float3x4 float3x4(int v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4A2C000", Offset = "0x4A2C000", VA = "0x4A2C000")]
	public static float3x4 float3x4(int3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4A2C0B0", Offset = "0x4A2C0B0", VA = "0x4A2C0B0")]
	public static float3x4 float3x4(uint v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4A2C0F0", Offset = "0x4A2C0F0", VA = "0x4A2C0F0")]
	public static float3x4 float3x4(uint3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4A2C1F0", Offset = "0x4A2C1F0", VA = "0x4A2C1F0")]
	public static float3x4 float3x4(double v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4A2C230", Offset = "0x4A2C230", VA = "0x4A2C230")]
	public static float3x4 float3x4(double3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4A2C2B0", Offset = "0x4A2C2B0", VA = "0x4A2C2B0")]
	public static float4x3 transpose(float3x4 v)
	{
		return default(float4x3);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4A2C320", Offset = "0x4A2C320", VA = "0x4A2C320")]
	public static float3x4 fastinverse(float3x4 m)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4A2C3E0", Offset = "0x4A2C3E0", VA = "0x4A2C3E0")]
	public static uint hash(float3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4A2C520", Offset = "0x4A2C520", VA = "0x4A2C520")]
	public static uint3 hashwide(float3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4A2C670", Offset = "0x4A2C670", VA = "0x4A2C670")]
	public static float4 float4(float x, float y, float z, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4A2C680", Offset = "0x4A2C680", VA = "0x4A2C680")]
	public static float4 float4(float x, float y, float2 zw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4A2C690", Offset = "0x4A2C690", VA = "0x4A2C690")]
	public static float4 float4(float x, float2 yz, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4A2C6A0", Offset = "0x4A2C6A0", VA = "0x4A2C6A0")]
	public static float4 float4(float x, float3 yzw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4A2C6B0", Offset = "0x4A2C6B0", VA = "0x4A2C6B0")]
	public static float4 float4(float2 xy, float z, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4A2C6C0", Offset = "0x4A2C6C0", VA = "0x4A2C6C0")]
	public static float4 float4(float2 xy, float2 zw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4A2C6D0", Offset = "0x4A2C6D0", VA = "0x4A2C6D0")]
	public static float4 float4(float3 xyz, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4A2C6E0", Offset = "0x4A2C6E0", VA = "0x4A2C6E0")]
	public static float4 float4(float4 xyzw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4A2C6F0", Offset = "0x4A2C6F0", VA = "0x4A2C6F0")]
	public static float4 float4(float v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x4A2C700", Offset = "0x4A2C700", VA = "0x4A2C700")]
	public static float4 float4(bool v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4A2C720", Offset = "0x4A2C720", VA = "0x4A2C720")]
	public static float4 float4(bool4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4A2C790", Offset = "0x4A2C790", VA = "0x4A2C790")]
	public static float4 float4(int v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4A2C7A0", Offset = "0x4A2C7A0", VA = "0x4A2C7A0")]
	public static float4 float4(int4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4A2C7D0", Offset = "0x4A2C7D0", VA = "0x4A2C7D0")]
	public static float4 float4(uint v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x4A2C7F0", Offset = "0x4A2C7F0", VA = "0x4A2C7F0")]
	public static float4 float4(uint4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4A2C830", Offset = "0x4A2C830", VA = "0x4A2C830")]
	public static float4 float4(half v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4A2C8A0", Offset = "0x4A2C8A0", VA = "0x4A2C8A0")]
	public static float4 float4(half4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4A2CA20", Offset = "0x4A2CA20", VA = "0x4A2CA20")]
	public static float4 float4(double v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4A2CA30", Offset = "0x4A2CA30", VA = "0x4A2CA30")]
	public static float4 float4(double4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4A2CA40", Offset = "0x4A2CA40", VA = "0x4A2CA40")]
	public static uint hash(float4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x4A2CAA0", Offset = "0x4A2CAA0", VA = "0x4A2CAA0")]
	public static uint4 hashwide(float4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x4A2CB00", Offset = "0x4A2CB00", VA = "0x4A2CB00")]
	public static float shuffle(float4 left, float4 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4A2CBE0", Offset = "0x4A2CBE0", VA = "0x4A2CBE0")]
	public static float2 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x4A2CD60", Offset = "0x4A2CD60", VA = "0x4A2CD60")]
	public static float3 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4A2CFD0", Offset = "0x4A2CFD0", VA = "0x4A2CFD0")]
	public static float4 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000201")]
	[Address(RVA = "0x4A2D300", Offset = "0x4A2D300", VA = "0x4A2D300")]
	internal static float select_shuffle_component(float4 a, float4 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000202")]
	[Address(RVA = "0x4A2D3E0", Offset = "0x4A2D3E0", VA = "0x4A2D3E0")]
	public static float4x2 float4x2(float4 c0, float4 c1)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4A2D400", Offset = "0x4A2D400", VA = "0x4A2D400")]
	public static float4x2 float4x2(float m00, float m01, float m10, float m11, float m20, float m21, float m30, float m31)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4A2D430", Offset = "0x4A2D430", VA = "0x4A2D430")]
	public static float4x2 float4x2(float v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4A2D440", Offset = "0x4A2D440", VA = "0x4A2D440")]
	public static float4x2 float4x2(bool v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4A2D470", Offset = "0x4A2D470", VA = "0x4A2D470")]
	public static float4x2 float4x2(bool4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4A2D550", Offset = "0x4A2D550", VA = "0x4A2D550")]
	public static float4x2 float4x2(int v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4A2D570", Offset = "0x4A2D570", VA = "0x4A2D570")]
	public static float4x2 float4x2(int4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4A2D5E0", Offset = "0x4A2D5E0", VA = "0x4A2D5E0")]
	public static float4x2 float4x2(uint v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4A2D600", Offset = "0x4A2D600", VA = "0x4A2D600")]
	public static float4x2 float4x2(uint4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4A2D6A0", Offset = "0x4A2D6A0", VA = "0x4A2D6A0")]
	public static float4x2 float4x2(double v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4A2D6C0", Offset = "0x4A2D6C0", VA = "0x4A2D6C0")]
	public static float4x2 float4x2(double4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4A2D6F0", Offset = "0x4A2D6F0", VA = "0x4A2D6F0")]
	public static float2x4 transpose(float4x2 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4A2D740", Offset = "0x4A2D740", VA = "0x4A2D740")]
	public static uint hash(float4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4A2D830", Offset = "0x4A2D830", VA = "0x4A2D830")]
	public static uint4 hashwide(float4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4A2D940", Offset = "0x4A2D940", VA = "0x4A2D940")]
	public static float4x3 float4x3(float4 c0, float4 c1, float4 c2)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4A2D960", Offset = "0x4A2D960", VA = "0x4A2D960")]
	public static float4x3 float4x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float m30, float m31, float m32)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4A2D9C0", Offset = "0x4A2D9C0", VA = "0x4A2D9C0")]
	public static float4x3 float4x3(float v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4A2D9E0", Offset = "0x4A2D9E0", VA = "0x4A2D9E0")]
	public static float4x3 float4x3(bool v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4A2DA10", Offset = "0x4A2DA10", VA = "0x4A2DA10")]
	public static float4x3 float4x3(bool4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4A2DB90", Offset = "0x4A2DB90", VA = "0x4A2DB90")]
	public static float4x3 float4x3(int v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4A2DBB0", Offset = "0x4A2DBB0", VA = "0x4A2DBB0")]
	public static float4x3 float4x3(int4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4A2DC60", Offset = "0x4A2DC60", VA = "0x4A2DC60")]
	public static float4x3 float4x3(uint v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4A2DC80", Offset = "0x4A2DC80", VA = "0x4A2DC80")]
	public static float4x3 float4x3(uint4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4A2DD80", Offset = "0x4A2DD80", VA = "0x4A2DD80")]
	public static float4x3 float4x3(double v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4A2DDA0", Offset = "0x4A2DDA0", VA = "0x4A2DDA0")]
	public static float4x3 float4x3(double4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4A2DDF0", Offset = "0x4A2DDF0", VA = "0x4A2DDF0")]
	public static float3x4 transpose(float4x3 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4A2DE60", Offset = "0x4A2DE60", VA = "0x4A2DE60")]
	public static uint hash(float4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4A2DFE0", Offset = "0x4A2DFE0", VA = "0x4A2DFE0")]
	public static uint4 hashwide(float4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4A2E170", Offset = "0x4A2E170", VA = "0x4A2E170")]
	public static float4x4 float4x4(float4 c0, float4 c1, float4 c2, float4 c3)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4A2E190", Offset = "0x4A2E190", VA = "0x4A2E190")]
	public static float4x4 float4x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4A2E230", Offset = "0x4A2E230", VA = "0x4A2E230")]
	public static float4x4 float4x4(float v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4A2E250", Offset = "0x4A2E250", VA = "0x4A2E250")]
	public static float4x4 float4x4(bool v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4A2E280", Offset = "0x4A2E280", VA = "0x4A2E280")]
	public static float4x4 float4x4(bool4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4A2E480", Offset = "0x4A2E480", VA = "0x4A2E480")]
	public static float4x4 float4x4(int v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4A2E4A0", Offset = "0x4A2E4A0", VA = "0x4A2E4A0")]
	public static float4x4 float4x4(int4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4A2E590", Offset = "0x4A2E590", VA = "0x4A2E590")]
	public static float4x4 float4x4(uint v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4A2E5C0", Offset = "0x4A2E5C0", VA = "0x4A2E5C0")]
	public static float4x4 float4x4(uint4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4A2E710", Offset = "0x4A2E710", VA = "0x4A2E710")]
	public static float4x4 float4x4(double v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4A2E730", Offset = "0x4A2E730", VA = "0x4A2E730")]
	public static float4x4 float4x4(double4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4A2E790", Offset = "0x4A2E790", VA = "0x4A2E790")]
	public static float3 rotate(float4x4 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4A2E7F0", Offset = "0x4A2E7F0", VA = "0x4A2E7F0")]
	public static float3 transform(float4x4 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4A2E860", Offset = "0x4A2E860", VA = "0x4A2E860")]
	public static float4x4 transpose(float4x4 v)
	{
		return default(float4x4);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4A2E8E0", Offset = "0x4A2E8E0", VA = "0x4A2E8E0")]
	public static float4x4 inverse(float4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4A2EC70", Offset = "0x4A2EC70", VA = "0x4A2EC70")]
	public static float4x4 fastinverse(float4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4A2ED90", Offset = "0x4A2ED90", VA = "0x4A2ED90")]
	public static float determinant(float4x4 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4A2EEE0", Offset = "0x4A2EEE0", VA = "0x4A2EEE0")]
	public static uint hash(float4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4A2F0F0", Offset = "0x4A2F0F0", VA = "0x4A2F0F0")]
	public static uint4 hashwide(float4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4A2F310", Offset = "0x4A2F310", VA = "0x4A2F310")]
	public static half half(half x)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4A2F320", Offset = "0x4A2F320", VA = "0x4A2F320")]
	public static half half(float v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4A2F380", Offset = "0x4A2F380", VA = "0x4A2F380")]
	public static half half(double v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4A2F3E0", Offset = "0x4A2F3E0", VA = "0x4A2F3E0")]
	public static uint hash(half v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4A2F3F0", Offset = "0x4A2F3F0", VA = "0x4A2F3F0")]
	public static half2 half2(half x, half y)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4A2F400", Offset = "0x4A2F400", VA = "0x4A2F400")]
	public static half2 half2(half2 xy)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000237")]
	[Address(RVA = "0x4A2F410", Offset = "0x4A2F410", VA = "0x4A2F410")]
	public static half2 half2(half v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4A2F420", Offset = "0x4A2F420", VA = "0x4A2F420")]
	public static half2 half2(float v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4A2F480", Offset = "0x4A2F480", VA = "0x4A2F480")]
	public static half2 half2(float2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023A")]
	[Address(RVA = "0x4A2F540", Offset = "0x4A2F540", VA = "0x4A2F540")]
	public static half2 half2(double v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023B")]
	[Address(RVA = "0x4A2F5B0", Offset = "0x4A2F5B0", VA = "0x4A2F5B0")]
	public static half2 half2(double2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4A2F670", Offset = "0x4A2F670", VA = "0x4A2F670")]
	public static uint hash(half2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4A2F6A0", Offset = "0x4A2F6A0", VA = "0x4A2F6A0")]
	public static uint2 hashwide(half2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4A2F6E0", Offset = "0x4A2F6E0", VA = "0x4A2F6E0")]
	public static half3 half3(half x, half y, half z)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4A2F700", Offset = "0x4A2F700", VA = "0x4A2F700")]
	public static half3 half3(half x, half2 yz)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4A2F720", Offset = "0x4A2F720", VA = "0x4A2F720")]
	public static half3 half3(half2 xy, half z)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000241")]
	[Address(RVA = "0x4A2F730", Offset = "0x4A2F730", VA = "0x4A2F730")]
	public static half3 half3(half3 xyz)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4A2F740", Offset = "0x4A2F740", VA = "0x4A2F740")]
	public static half3 half3(half v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4A2F760", Offset = "0x4A2F760", VA = "0x4A2F760")]
	public static half3 half3(float v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4A2F7D0", Offset = "0x4A2F7D0", VA = "0x4A2F7D0")]
	public static half3 half3(float3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4A2F8E0", Offset = "0x4A2F8E0", VA = "0x4A2F8E0")]
	public static half3 half3(double v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4A2F950", Offset = "0x4A2F950", VA = "0x4A2F950")]
	public static half3 half3(double3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4A2FA80", Offset = "0x4A2FA80", VA = "0x4A2FA80")]
	public static uint hash(half3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4A2FAC0", Offset = "0x4A2FAC0", VA = "0x4A2FAC0")]
	public static uint3 hashwide(half3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4A2FB10", Offset = "0x4A2FB10", VA = "0x4A2FB10")]
	public static half4 half4(half x, half y, half z, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024A")]
	[Address(RVA = "0x4A2FB30", Offset = "0x4A2FB30", VA = "0x4A2FB30")]
	public static half4 half4(half x, half y, half2 zw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4A2FB60", Offset = "0x4A2FB60", VA = "0x4A2FB60")]
	public static half4 half4(half x, half2 yz, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4A2FB80", Offset = "0x4A2FB80", VA = "0x4A2FB80")]
	public static half4 half4(half x, half3 yzw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4A2FBB0", Offset = "0x4A2FBB0", VA = "0x4A2FBB0")]
	public static half4 half4(half2 xy, half z, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4A2FBD0", Offset = "0x4A2FBD0", VA = "0x4A2FBD0")]
	public static half4 half4(half2 xy, half2 zw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4A2FBF0", Offset = "0x4A2FBF0", VA = "0x4A2FBF0")]
	public static half4 half4(half3 xyz, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4A2FC10", Offset = "0x4A2FC10", VA = "0x4A2FC10")]
	public static half4 half4(half4 xyzw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4A2FC20", Offset = "0x4A2FC20", VA = "0x4A2FC20")]
	public static half4 half4(half v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4A2FC40", Offset = "0x4A2FC40", VA = "0x4A2FC40")]
	public static half4 half4(float v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4A2FCB0", Offset = "0x4A2FCB0", VA = "0x4A2FCB0")]
	public static half4 half4(float4 v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4A2FE20", Offset = "0x4A2FE20", VA = "0x4A2FE20")]
	public static half4 half4(double v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4A2FE90", Offset = "0x4A2FE90", VA = "0x4A2FE90")]
	public static half4 half4(double4 v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4A30020", Offset = "0x4A30020", VA = "0x4A30020")]
	public static uint hash(half4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4A30080", Offset = "0x4A30080", VA = "0x4A30080")]
	public static uint4 hashwide(half4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4A300F0", Offset = "0x4A300F0", VA = "0x4A300F0")]
	public static int2 int2(int x, int y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000259")]
	[Address(RVA = "0x4A30100", Offset = "0x4A30100", VA = "0x4A30100")]
	public static int2 int2(int2 xy)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4A30110", Offset = "0x4A30110", VA = "0x4A30110")]
	public static int2 int2(int v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4A30120", Offset = "0x4A30120", VA = "0x4A30120")]
	public static int2 int2(bool v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4A30130", Offset = "0x4A30130", VA = "0x4A30130")]
	public static int2 int2(bool2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4A30150", Offset = "0x4A30150", VA = "0x4A30150")]
	public static int2 int2(uint v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4A30160", Offset = "0x4A30160", VA = "0x4A30160")]
	public static int2 int2(uint2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4A30170", Offset = "0x4A30170", VA = "0x4A30170")]
	public static int2 int2(float v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000260")]
	[Address(RVA = "0x4A30180", Offset = "0x4A30180", VA = "0x4A30180")]
	public static int2 int2(float2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000261")]
	[Address(RVA = "0x4A301A0", Offset = "0x4A301A0", VA = "0x4A301A0")]
	public static int2 int2(double v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000262")]
	[Address(RVA = "0x4A301B0", Offset = "0x4A301B0", VA = "0x4A301B0")]
	public static int2 int2(double2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000263")]
	[Address(RVA = "0x4A301C0", Offset = "0x4A301C0", VA = "0x4A301C0")]
	public static uint hash(int2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000264")]
	[Address(RVA = "0x4A301F0", Offset = "0x4A301F0", VA = "0x4A301F0")]
	public static uint2 hashwide(int2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000265")]
	[Address(RVA = "0x4A30230", Offset = "0x4A30230", VA = "0x4A30230")]
	public static int shuffle(int2 left, int2 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000266")]
	[Address(RVA = "0x4A30240", Offset = "0x4A30240", VA = "0x4A30240")]
	public static int2 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000267")]
	[Address(RVA = "0x4A30280", Offset = "0x4A30280", VA = "0x4A30280")]
	public static int3 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000268")]
	[Address(RVA = "0x4A302F0", Offset = "0x4A302F0", VA = "0x4A302F0")]
	public static int4 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000269")]
	[Address(RVA = "0x4A30380", Offset = "0x4A30380", VA = "0x4A30380")]
	internal static int select_shuffle_component(int2 a, int2 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4A30450", Offset = "0x4A30450", VA = "0x4A30450")]
	public static int2x2 int2x2(int2 c0, int2 c1)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026B")]
	[Address(RVA = "0x4A30460", Offset = "0x4A30460", VA = "0x4A30460")]
	public static int2x2 int2x2(int m00, int m01, int m10, int m11)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026C")]
	[Address(RVA = "0x4A30480", Offset = "0x4A30480", VA = "0x4A30480")]
	public static int2x2 int2x2(int v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026D")]
	[Address(RVA = "0x4A30490", Offset = "0x4A30490", VA = "0x4A30490")]
	public static int2x2 int2x2(bool v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4A304B0", Offset = "0x4A304B0", VA = "0x4A304B0")]
	public static int2x2 int2x2(bool2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026F")]
	[Address(RVA = "0x4A30500", Offset = "0x4A30500", VA = "0x4A30500")]
	public static int2x2 int2x2(uint v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4A30510", Offset = "0x4A30510", VA = "0x4A30510")]
	public static int2x2 int2x2(uint2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4A30520", Offset = "0x4A30520", VA = "0x4A30520")]
	public static int2x2 int2x2(float v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000272")]
	[Address(RVA = "0x4A30540", Offset = "0x4A30540", VA = "0x4A30540")]
	public static int2x2 int2x2(float2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000273")]
	[Address(RVA = "0x4A30570", Offset = "0x4A30570", VA = "0x4A30570")]
	public static int2x2 int2x2(double v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000274")]
	[Address(RVA = "0x4A30590", Offset = "0x4A30590", VA = "0x4A30590")]
	public static int2x2 int2x2(double2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000275")]
	[Address(RVA = "0x4A305C0", Offset = "0x4A305C0", VA = "0x4A305C0")]
	public static int2x2 transpose(int2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4A305E0", Offset = "0x4A305E0", VA = "0x4A305E0")]
	public static int determinant(int2x2 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4A30600", Offset = "0x4A30600", VA = "0x4A30600")]
	public static uint hash(int2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4A30650", Offset = "0x4A30650", VA = "0x4A30650")]
	public static uint2 hashwide(int2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4A306B0", Offset = "0x4A306B0", VA = "0x4A306B0")]
	public static int2x3 int2x3(int2 c0, int2 c1, int2 c2)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4A306C0", Offset = "0x4A306C0", VA = "0x4A306C0")]
	public static int2x3 int2x3(int m00, int m01, int m02, int m10, int m11, int m12)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027B")]
	[Address(RVA = "0x4A306F0", Offset = "0x4A306F0", VA = "0x4A306F0")]
	public static int2x3 int2x3(int v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4A30710", Offset = "0x4A30710", VA = "0x4A30710")]
	public static int2x3 int2x3(bool v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4A30740", Offset = "0x4A30740", VA = "0x4A30740")]
	public static int2x3 int2x3(bool2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4A307C0", Offset = "0x4A307C0", VA = "0x4A307C0")]
	public static int2x3 int2x3(uint v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4A307E0", Offset = "0x4A307E0", VA = "0x4A307E0")]
	public static int2x3 int2x3(uint2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4A30800", Offset = "0x4A30800", VA = "0x4A30800")]
	public static int2x3 int2x3(float v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4A30820", Offset = "0x4A30820", VA = "0x4A30820")]
	public static int2x3 int2x3(float2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4A30880", Offset = "0x4A30880", VA = "0x4A30880")]
	public static int2x3 int2x3(double v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4A308A0", Offset = "0x4A308A0", VA = "0x4A308A0")]
	public static int2x3 int2x3(double2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000284")]
	[Address(RVA = "0x4A308F0", Offset = "0x4A308F0", VA = "0x4A308F0")]
	public static int3x2 transpose(int2x3 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000285")]
	[Address(RVA = "0x4A30920", Offset = "0x4A30920", VA = "0x4A30920")]
	public static uint hash(int2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000286")]
	[Address(RVA = "0x4A309A0", Offset = "0x4A309A0", VA = "0x4A309A0")]
	public static uint2 hashwide(int2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000287")]
	[Address(RVA = "0x4A30A40", Offset = "0x4A30A40", VA = "0x4A30A40")]
	public static int2x4 int2x4(int2 c0, int2 c1, int2 c2, int2 c3)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000288")]
	[Address(RVA = "0x4A30A60", Offset = "0x4A30A60", VA = "0x4A30A60")]
	public static int2x4 int2x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000289")]
	[Address(RVA = "0x4A30AB0", Offset = "0x4A30AB0", VA = "0x4A30AB0")]
	public static int2x4 int2x4(int v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028A")]
	[Address(RVA = "0x4A30AD0", Offset = "0x4A30AD0", VA = "0x4A30AD0")]
	public static int2x4 int2x4(bool v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028B")]
	[Address(RVA = "0x4A30B00", Offset = "0x4A30B00", VA = "0x4A30B00")]
	public static int2x4 int2x4(bool2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028C")]
	[Address(RVA = "0x4A30B80", Offset = "0x4A30B80", VA = "0x4A30B80")]
	public static int2x4 int2x4(uint v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028D")]
	[Address(RVA = "0x4A30BA0", Offset = "0x4A30BA0", VA = "0x4A30BA0")]
	public static int2x4 int2x4(uint2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028E")]
	[Address(RVA = "0x4A30BC0", Offset = "0x4A30BC0", VA = "0x4A30BC0")]
	public static int2x4 int2x4(float v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028F")]
	[Address(RVA = "0x4A30BF0", Offset = "0x4A30BF0", VA = "0x4A30BF0")]
	public static int2x4 int2x4(float2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000290")]
	[Address(RVA = "0x4A30C70", Offset = "0x4A30C70", VA = "0x4A30C70")]
	public static int2x4 int2x4(double v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000291")]
	[Address(RVA = "0x4A30CA0", Offset = "0x4A30CA0", VA = "0x4A30CA0")]
	public static int2x4 int2x4(double2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000292")]
	[Address(RVA = "0x4A30D10", Offset = "0x4A30D10", VA = "0x4A30D10")]
	public static int4x2 transpose(int2x4 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000293")]
	[Address(RVA = "0x4A30D60", Offset = "0x4A30D60", VA = "0x4A30D60")]
	public static uint hash(int2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000294")]
	[Address(RVA = "0x4A30E20", Offset = "0x4A30E20", VA = "0x4A30E20")]
	public static uint2 hashwide(int2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000295")]
	[Address(RVA = "0x4A30EF0", Offset = "0x4A30EF0", VA = "0x4A30EF0")]
	public static int3 int3(int x, int y, int z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000296")]
	[Address(RVA = "0x4A30F00", Offset = "0x4A30F00", VA = "0x4A30F00")]
	public static int3 int3(int x, int2 yz)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000297")]
	[Address(RVA = "0x4A30F20", Offset = "0x4A30F20", VA = "0x4A30F20")]
	public static int3 int3(int2 xy, int z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000298")]
	[Address(RVA = "0x4A30F30", Offset = "0x4A30F30", VA = "0x4A30F30")]
	public static int3 int3(int3 xyz)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x4A30F40", Offset = "0x4A30F40", VA = "0x4A30F40")]
	public static int3 int3(int v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029A")]
	[Address(RVA = "0x4A30F50", Offset = "0x4A30F50", VA = "0x4A30F50")]
	public static int3 int3(bool v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029B")]
	[Address(RVA = "0x4A30F60", Offset = "0x4A30F60", VA = "0x4A30F60")]
	public static int3 int3(bool3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029C")]
	[Address(RVA = "0x4A30F90", Offset = "0x4A30F90", VA = "0x4A30F90")]
	public static int3 int3(uint v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029D")]
	[Address(RVA = "0x4A30FA0", Offset = "0x4A30FA0", VA = "0x4A30FA0")]
	public static int3 int3(uint3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029E")]
	[Address(RVA = "0x4A30FB0", Offset = "0x4A30FB0", VA = "0x4A30FB0")]
	public static int3 int3(float v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029F")]
	[Address(RVA = "0x4A30FC0", Offset = "0x4A30FC0", VA = "0x4A30FC0")]
	public static int3 int3(float3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x4A30FE0", Offset = "0x4A30FE0", VA = "0x4A30FE0")]
	public static int3 int3(double v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x4A30FF0", Offset = "0x4A30FF0", VA = "0x4A30FF0")]
	public static int3 int3(double3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x4A31010", Offset = "0x4A31010", VA = "0x4A31010")]
	public static uint hash(int3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x4A31040", Offset = "0x4A31040", VA = "0x4A31040")]
	public static uint3 hashwide(int3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x4A31080", Offset = "0x4A31080", VA = "0x4A31080")]
	public static int shuffle(int3 left, int3 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x4A31090", Offset = "0x4A31090", VA = "0x4A31090")]
	public static int2 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x4A310F0", Offset = "0x4A310F0", VA = "0x4A310F0")]
	public static int3 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x4A31170", Offset = "0x4A31170", VA = "0x4A31170")]
	public static int4 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x4A31220", Offset = "0x4A31220", VA = "0x4A31220")]
	internal static int select_shuffle_component(int3 a, int3 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x4A312F0", Offset = "0x4A312F0", VA = "0x4A312F0")]
	public static int3x2 int3x2(int3 c0, int3 c1)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x4A31310", Offset = "0x4A31310", VA = "0x4A31310")]
	public static int3x2 int3x2(int m00, int m01, int m10, int m11, int m20, int m21)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x4A31330", Offset = "0x4A31330", VA = "0x4A31330")]
	public static int3x2 int3x2(int v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x4A31350", Offset = "0x4A31350", VA = "0x4A31350")]
	public static int3x2 int3x2(bool v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x4A31380", Offset = "0x4A31380", VA = "0x4A31380")]
	public static int3x2 int3x2(bool3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x4A313E0", Offset = "0x4A313E0", VA = "0x4A313E0")]
	public static int3x2 int3x2(uint v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x4A31400", Offset = "0x4A31400", VA = "0x4A31400")]
	public static int3x2 int3x2(uint3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x4A31430", Offset = "0x4A31430", VA = "0x4A31430")]
	public static int3x2 int3x2(float v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x4A31450", Offset = "0x4A31450", VA = "0x4A31450")]
	public static int3x2 int3x2(float3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x4A314A0", Offset = "0x4A314A0", VA = "0x4A314A0")]
	public static int3x2 int3x2(double v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x4A314C0", Offset = "0x4A314C0", VA = "0x4A314C0")]
	public static int3x2 int3x2(double3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4A31510", Offset = "0x4A31510", VA = "0x4A31510")]
	public static int2x3 transpose(int3x2 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4A31540", Offset = "0x4A31540", VA = "0x4A31540")]
	public static uint hash(int3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4A315B0", Offset = "0x4A315B0", VA = "0x4A315B0")]
	public static uint3 hashwide(int3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4A31640", Offset = "0x4A31640", VA = "0x4A31640")]
	public static int3x3 int3x3(int3 c0, int3 c1, int3 c2)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4A31670", Offset = "0x4A31670", VA = "0x4A31670")]
	public static int3x3 int3x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4A316B0", Offset = "0x4A316B0", VA = "0x4A316B0")]
	public static int3x3 int3x3(int v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4A316E0", Offset = "0x4A316E0", VA = "0x4A316E0")]
	public static int3x3 int3x3(bool v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4A31710", Offset = "0x4A31710", VA = "0x4A31710")]
	public static int3x3 int3x3(bool3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4A317A0", Offset = "0x4A317A0", VA = "0x4A317A0")]
	public static int3x3 int3x3(uint v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4A317D0", Offset = "0x4A317D0", VA = "0x4A317D0")]
	public static int3x3 int3x3(uint3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4A31810", Offset = "0x4A31810", VA = "0x4A31810")]
	public static int3x3 int3x3(float v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4A31840", Offset = "0x4A31840", VA = "0x4A31840")]
	public static int3x3 int3x3(float3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x4A318C0", Offset = "0x4A318C0", VA = "0x4A318C0")]
	public static int3x3 int3x3(double v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4A318F0", Offset = "0x4A318F0", VA = "0x4A318F0")]
	public static int3x3 int3x3(double3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4A31960", Offset = "0x4A31960", VA = "0x4A31960")]
	public static int3x3 transpose(int3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x4A319B0", Offset = "0x4A319B0", VA = "0x4A319B0")]
	public static int determinant(int3x3 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x4A31A10", Offset = "0x4A31A10", VA = "0x4A31A10")]
	public static uint hash(int3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x4A31AC0", Offset = "0x4A31AC0", VA = "0x4A31AC0")]
	public static uint3 hashwide(int3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x4A31B80", Offset = "0x4A31B80", VA = "0x4A31B80")]
	public static int3x4 int3x4(int3 c0, int3 c1, int3 c2, int3 c3)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x4A31BC0", Offset = "0x4A31BC0", VA = "0x4A31BC0")]
	public static int3x4 int3x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x4A31C20", Offset = "0x4A31C20", VA = "0x4A31C20")]
	public static int3x4 int3x4(int v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x4A31C50", Offset = "0x4A31C50", VA = "0x4A31C50")]
	public static int3x4 int3x4(bool v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x4A31C90", Offset = "0x4A31C90", VA = "0x4A31C90")]
	public static int3x4 int3x4(bool3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x4A31D40", Offset = "0x4A31D40", VA = "0x4A31D40")]
	public static int3x4 int3x4(uint v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x4A31D70", Offset = "0x4A31D70", VA = "0x4A31D70")]
	public static int3x4 int3x4(uint3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4A31DC0", Offset = "0x4A31DC0", VA = "0x4A31DC0")]
	public static int3x4 int3x4(float v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4A31DF0", Offset = "0x4A31DF0", VA = "0x4A31DF0")]
	public static int3x4 int3x4(float3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4A31E90", Offset = "0x4A31E90", VA = "0x4A31E90")]
	public static int3x4 int3x4(double v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x4A31EC0", Offset = "0x4A31EC0", VA = "0x4A31EC0")]
	public static int3x4 int3x4(double3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4A31F60", Offset = "0x4A31F60", VA = "0x4A31F60")]
	public static int4x3 transpose(int3x4 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4A31FD0", Offset = "0x4A31FD0", VA = "0x4A31FD0")]
	public static uint hash(int3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4A320C0", Offset = "0x4A320C0", VA = "0x4A320C0")]
	public static uint3 hashwide(int3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x4A321C0", Offset = "0x4A321C0", VA = "0x4A321C0")]
	public static int4 int4(int x, int y, int z, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4A321E0", Offset = "0x4A321E0", VA = "0x4A321E0")]
	public static int4 int4(int x, int y, int2 zw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4A321F0", Offset = "0x4A321F0", VA = "0x4A321F0")]
	public static int4 int4(int x, int2 yz, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4A32200", Offset = "0x4A32200", VA = "0x4A32200")]
	public static int4 int4(int x, int3 yzw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x4A32210", Offset = "0x4A32210", VA = "0x4A32210")]
	public static int4 int4(int2 xy, int z, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x4A32220", Offset = "0x4A32220", VA = "0x4A32220")]
	public static int4 int4(int2 xy, int2 zw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4A32230", Offset = "0x4A32230", VA = "0x4A32230")]
	public static int4 int4(int3 xyz, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x4A32240", Offset = "0x4A32240", VA = "0x4A32240")]
	public static int4 int4(int4 xyzw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x4A32250", Offset = "0x4A32250", VA = "0x4A32250")]
	public static int4 int4(int v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x4A32260", Offset = "0x4A32260", VA = "0x4A32260")]
	public static int4 int4(bool v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x4A32270", Offset = "0x4A32270", VA = "0x4A32270")]
	public static int4 int4(bool4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x4A322A0", Offset = "0x4A322A0", VA = "0x4A322A0")]
	public static int4 int4(uint v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x4A322B0", Offset = "0x4A322B0", VA = "0x4A322B0")]
	public static int4 int4(uint4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x4A322C0", Offset = "0x4A322C0", VA = "0x4A322C0")]
	public static int4 int4(float v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x4A322E0", Offset = "0x4A322E0", VA = "0x4A322E0")]
	public static int4 int4(float4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x4A32310", Offset = "0x4A32310", VA = "0x4A32310")]
	public static int4 int4(double v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x4A32330", Offset = "0x4A32330", VA = "0x4A32330")]
	public static int4 int4(double4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4A32360", Offset = "0x4A32360", VA = "0x4A32360")]
	public static uint hash(int4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4A323A0", Offset = "0x4A323A0", VA = "0x4A323A0")]
	public static uint4 hashwide(int4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x4A32400", Offset = "0x4A32400", VA = "0x4A32400")]
	public static int shuffle(int4 left, int4 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4A32410", Offset = "0x4A32410", VA = "0x4A32410")]
	public static int2 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x4A32470", Offset = "0x4A32470", VA = "0x4A32470")]
	public static int3 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4A324F0", Offset = "0x4A324F0", VA = "0x4A324F0")]
	public static int4 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4A325A0", Offset = "0x4A325A0", VA = "0x4A325A0")]
	internal static int select_shuffle_component(int4 a, int4 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4A32690", Offset = "0x4A32690", VA = "0x4A32690")]
	public static int4x2 int4x2(int4 c0, int4 c1)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x4A326B0", Offset = "0x4A326B0", VA = "0x4A326B0")]
	public static int4x2 int4x2(int m00, int m01, int m10, int m11, int m20, int m21, int m30, int m31)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4A326E0", Offset = "0x4A326E0", VA = "0x4A326E0")]
	public static int4x2 int4x2(int v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x4A32700", Offset = "0x4A32700", VA = "0x4A32700")]
	public static int4x2 int4x2(bool v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4A32730", Offset = "0x4A32730", VA = "0x4A32730")]
	public static int4x2 int4x2(bool4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4A327B0", Offset = "0x4A327B0", VA = "0x4A327B0")]
	public static int4x2 int4x2(uint v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4A327D0", Offset = "0x4A327D0", VA = "0x4A327D0")]
	public static int4x2 int4x2(uint4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x4A327F0", Offset = "0x4A327F0", VA = "0x4A327F0")]
	public static int4x2 int4x2(float v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x4A32820", Offset = "0x4A32820", VA = "0x4A32820")]
	public static int4x2 int4x2(float4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x4A328A0", Offset = "0x4A328A0", VA = "0x4A328A0")]
	public static int4x2 int4x2(double v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x4A328D0", Offset = "0x4A328D0", VA = "0x4A328D0")]
	public static int4x2 int4x2(double4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x4A32940", Offset = "0x4A32940", VA = "0x4A32940")]
	public static int2x4 transpose(int4x2 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x4A32970", Offset = "0x4A32970", VA = "0x4A32970")]
	public static uint hash(int4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x4A32A20", Offset = "0x4A32A20", VA = "0x4A32A20")]
	public static uint4 hashwide(int4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x4A32AE0", Offset = "0x4A32AE0", VA = "0x4A32AE0")]
	public static int4x3 int4x3(int4 c0, int4 c1, int4 c2)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x4A32B00", Offset = "0x4A32B00", VA = "0x4A32B00")]
	public static int4x3 int4x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22, int m30, int m31, int m32)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x4A32B60", Offset = "0x4A32B60", VA = "0x4A32B60")]
	public static int4x3 int4x3(int v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x4A32B90", Offset = "0x4A32B90", VA = "0x4A32B90")]
	public static int4x3 int4x3(bool v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x4A32BC0", Offset = "0x4A32BC0", VA = "0x4A32BC0")]
	public static int4x3 int4x3(bool4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x4A32C70", Offset = "0x4A32C70", VA = "0x4A32C70")]
	public static int4x3 int4x3(uint v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4A32CA0", Offset = "0x4A32CA0", VA = "0x4A32CA0")]
	public static int4x3 int4x3(uint4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4A32CC0", Offset = "0x4A32CC0", VA = "0x4A32CC0")]
	public static int4x3 int4x3(float v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4A32CF0", Offset = "0x4A32CF0", VA = "0x4A32CF0")]
	public static int4x3 int4x3(float4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000303")]
	[Address(RVA = "0x4A32DB0", Offset = "0x4A32DB0", VA = "0x4A32DB0")]
	public static int4x3 int4x3(double v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000304")]
	[Address(RVA = "0x4A32DE0", Offset = "0x4A32DE0", VA = "0x4A32DE0")]
	public static int4x3 int4x3(double4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000305")]
	[Address(RVA = "0x4A32E90", Offset = "0x4A32E90", VA = "0x4A32E90")]
	public static int3x4 transpose(int4x3 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000306")]
	[Address(RVA = "0x4A32F00", Offset = "0x4A32F00", VA = "0x4A32F00")]
	public static uint hash(int4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000307")]
	[Address(RVA = "0x4A33020", Offset = "0x4A33020", VA = "0x4A33020")]
	public static uint4 hashwide(int4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000308")]
	[Address(RVA = "0x4A33150", Offset = "0x4A33150", VA = "0x4A33150")]
	public static int4x4 int4x4(int4 c0, int4 c1, int4 c2, int4 c3)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000309")]
	[Address(RVA = "0x4A33180", Offset = "0x4A33180", VA = "0x4A33180")]
	public static int4x4 int4x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23, int m30, int m31, int m32, int m33)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4A331F0", Offset = "0x4A331F0", VA = "0x4A331F0")]
	public static int4x4 int4x4(int v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4A33220", Offset = "0x4A33220", VA = "0x4A33220")]
	public static int4x4 int4x4(bool v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4A33260", Offset = "0x4A33260", VA = "0x4A33260")]
	public static int4x4 int4x4(bool4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4A33340", Offset = "0x4A33340", VA = "0x4A33340")]
	public static int4x4 int4x4(uint v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030E")]
	[Address(RVA = "0x4A33370", Offset = "0x4A33370", VA = "0x4A33370")]
	public static int4x4 int4x4(uint4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030F")]
	[Address(RVA = "0x4A333A0", Offset = "0x4A333A0", VA = "0x4A333A0")]
	public static int4x4 int4x4(float v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000310")]
	[Address(RVA = "0x4A333E0", Offset = "0x4A333E0", VA = "0x4A333E0")]
	public static int4x4 int4x4(float4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000311")]
	[Address(RVA = "0x4A334D0", Offset = "0x4A334D0", VA = "0x4A334D0")]
	public static int4x4 int4x4(double v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000312")]
	[Address(RVA = "0x4A33510", Offset = "0x4A33510", VA = "0x4A33510")]
	public static int4x4 int4x4(double4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000313")]
	[Address(RVA = "0x4A33600", Offset = "0x4A33600", VA = "0x4A33600")]
	public static int4x4 transpose(int4x4 v)
	{
		return default(int4x4);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4A33680", Offset = "0x4A33680", VA = "0x4A33680")]
	public static int determinant(int4x4 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000315")]
	[Address(RVA = "0x4A33790", Offset = "0x4A33790", VA = "0x4A33790")]
	public static uint hash(int4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4A33900", Offset = "0x4A33900", VA = "0x4A33900")]
	public static uint4 hashwide(int4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000317")]
	[Address(RVA = "0x4A33AA0", Offset = "0x4A33AA0", VA = "0x4A33AA0")]
	public static int asint(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000318")]
	[Address(RVA = "0x4A33AB0", Offset = "0x4A33AB0", VA = "0x4A33AB0")]
	public static int2 asint(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000319")]
	[Address(RVA = "0x4A33AC0", Offset = "0x4A33AC0", VA = "0x4A33AC0")]
	public static int3 asint(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4A33AD0", Offset = "0x4A33AD0", VA = "0x4A33AD0")]
	public static int4 asint(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031B")]
	[Address(RVA = "0x4A33AE0", Offset = "0x4A33AE0", VA = "0x4A33AE0")]
	public static int asint(float x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031C")]
	[Address(RVA = "0x4A33AF0", Offset = "0x4A33AF0", VA = "0x4A33AF0")]
	public static int2 asint(float2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031D")]
	[Address(RVA = "0x4A33B10", Offset = "0x4A33B10", VA = "0x4A33B10")]
	public static int3 asint(float3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031E")]
	[Address(RVA = "0x4A33B30", Offset = "0x4A33B30", VA = "0x4A33B30")]
	public static int4 asint(float4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031F")]
	[Address(RVA = "0x4A33B60", Offset = "0x4A33B60", VA = "0x4A33B60")]
	public static uint asuint(int x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4A33B70", Offset = "0x4A33B70", VA = "0x4A33B70")]
	public static uint2 asuint(int2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4A33B80", Offset = "0x4A33B80", VA = "0x4A33B80")]
	public static uint3 asuint(int3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000322")]
	[Address(RVA = "0x4A33B90", Offset = "0x4A33B90", VA = "0x4A33B90")]
	public static uint4 asuint(int4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4A33BA0", Offset = "0x4A33BA0", VA = "0x4A33BA0")]
	public static uint asuint(float x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000324")]
	[Address(RVA = "0x4A33BB0", Offset = "0x4A33BB0", VA = "0x4A33BB0")]
	public static uint2 asuint(float2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000325")]
	[Address(RVA = "0x4A33BD0", Offset = "0x4A33BD0", VA = "0x4A33BD0")]
	public static uint3 asuint(float3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4A33BF0", Offset = "0x4A33BF0", VA = "0x4A33BF0")]
	public static uint4 asuint(float4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000327")]
	[Address(RVA = "0x4A33C20", Offset = "0x4A33C20", VA = "0x4A33C20")]
	public static long aslong(ulong x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000328")]
	[Address(RVA = "0x4A33C30", Offset = "0x4A33C30", VA = "0x4A33C30")]
	public static long aslong(double x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000329")]
	[Address(RVA = "0x4A33C40", Offset = "0x4A33C40", VA = "0x4A33C40")]
	public static ulong asulong(long x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032A")]
	[Address(RVA = "0x4A33C50", Offset = "0x4A33C50", VA = "0x4A33C50")]
	public static ulong asulong(double x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032B")]
	[Address(RVA = "0x4A33C60", Offset = "0x4A33C60", VA = "0x4A33C60")]
	public static float asfloat(int x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032C")]
	[Address(RVA = "0x4A33C70", Offset = "0x4A33C70", VA = "0x4A33C70")]
	public static float2 asfloat(int2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032D")]
	[Address(RVA = "0x4A33C90", Offset = "0x4A33C90", VA = "0x4A33C90")]
	public static float3 asfloat(int3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032E")]
	[Address(RVA = "0x4A33CB0", Offset = "0x4A33CB0", VA = "0x4A33CB0")]
	public static float4 asfloat(int4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032F")]
	[Address(RVA = "0x4A33CE0", Offset = "0x4A33CE0", VA = "0x4A33CE0")]
	public static float asfloat(uint x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000330")]
	[Address(RVA = "0x4A33CF0", Offset = "0x4A33CF0", VA = "0x4A33CF0")]
	public static float2 asfloat(uint2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000331")]
	[Address(RVA = "0x4A33D10", Offset = "0x4A33D10", VA = "0x4A33D10")]
	public static float3 asfloat(uint3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000332")]
	[Address(RVA = "0x4A33D30", Offset = "0x4A33D30", VA = "0x4A33D30")]
	public static float4 asfloat(uint4 x)
	{
		return default(float4);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x4A33D60", Offset = "0x4A33D60", VA = "0x4A33D60")]
	public static int bitmask(bool4 value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000334")]
	[Address(RVA = "0x4A33D90", Offset = "0x4A33D90", VA = "0x4A33D90")]
	public static double asdouble(long x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000335")]
	[Address(RVA = "0x4A33DA0", Offset = "0x4A33DA0", VA = "0x4A33DA0")]
	public static double asdouble(ulong x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000336")]
	[Address(RVA = "0x4A33DB0", Offset = "0x4A33DB0", VA = "0x4A33DB0")]
	public static bool isfinite(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000337")]
	[Address(RVA = "0x4A33DD0", Offset = "0x4A33DD0", VA = "0x4A33DD0")]
	public static bool2 isfinite(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000338")]
	[Address(RVA = "0x4A33E10", Offset = "0x4A33E10", VA = "0x4A33E10")]
	public static bool3 isfinite(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000339")]
	[Address(RVA = "0x4A33E70", Offset = "0x4A33E70", VA = "0x4A33E70")]
	public static bool4 isfinite(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033A")]
	[Address(RVA = "0x4A33EF0", Offset = "0x4A33EF0", VA = "0x4A33EF0")]
	public static bool isfinite(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4A33F10", Offset = "0x4A33F10", VA = "0x4A33F10")]
	public static bool2 isfinite(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033C")]
	[Address(RVA = "0x4A33F40", Offset = "0x4A33F40", VA = "0x4A33F40")]
	public static bool3 isfinite(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033D")]
	[Address(RVA = "0x4A33FA0", Offset = "0x4A33FA0", VA = "0x4A33FA0")]
	public static bool4 isfinite(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033E")]
	[Address(RVA = "0x4A34020", Offset = "0x4A34020", VA = "0x4A34020")]
	public static bool isinf(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033F")]
	[Address(RVA = "0x4A34040", Offset = "0x4A34040", VA = "0x4A34040")]
	public static bool2 isinf(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000340")]
	[Address(RVA = "0x4A34080", Offset = "0x4A34080", VA = "0x4A34080")]
	public static bool3 isinf(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000341")]
	[Address(RVA = "0x4A340E0", Offset = "0x4A340E0", VA = "0x4A340E0")]
	public static bool4 isinf(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000342")]
	[Address(RVA = "0x4A34160", Offset = "0x4A34160", VA = "0x4A34160")]
	public static bool isinf(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000343")]
	[Address(RVA = "0x4A34180", Offset = "0x4A34180", VA = "0x4A34180")]
	public static bool2 isinf(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4A341B0", Offset = "0x4A341B0", VA = "0x4A341B0")]
	public static bool3 isinf(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000345")]
	[Address(RVA = "0x4A34210", Offset = "0x4A34210", VA = "0x4A34210")]
	public static bool4 isinf(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4A34290", Offset = "0x4A34290", VA = "0x4A34290")]
	public static bool isnan(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4A342B0", Offset = "0x4A342B0", VA = "0x4A342B0")]
	public static bool2 isnan(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000348")]
	[Address(RVA = "0x4A342F0", Offset = "0x4A342F0", VA = "0x4A342F0")]
	public static bool3 isnan(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000349")]
	[Address(RVA = "0x4A34340", Offset = "0x4A34340", VA = "0x4A34340")]
	public static bool4 isnan(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4A343B0", Offset = "0x4A343B0", VA = "0x4A343B0")]
	public static bool isnan(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4A343E0", Offset = "0x4A343E0", VA = "0x4A343E0")]
	public static bool2 isnan(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4A34420", Offset = "0x4A34420", VA = "0x4A34420")]
	public static bool3 isnan(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034D")]
	[Address(RVA = "0x4A34470", Offset = "0x4A34470", VA = "0x4A34470")]
	public static bool4 isnan(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034E")]
	[Address(RVA = "0x4A344E0", Offset = "0x4A344E0", VA = "0x4A344E0")]
	public static bool ispow2(int x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4A344F0", Offset = "0x4A344F0", VA = "0x4A344F0")]
	public static bool2 ispow2(int2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4A34530", Offset = "0x4A34530", VA = "0x4A34530")]
	public static bool3 ispow2(int3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000351")]
	[Address(RVA = "0x4A34580", Offset = "0x4A34580", VA = "0x4A34580")]
	public static bool4 ispow2(int4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000352")]
	[Address(RVA = "0x4A345F0", Offset = "0x4A345F0", VA = "0x4A345F0")]
	public static bool ispow2(uint x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000353")]
	[Address(RVA = "0x4A34600", Offset = "0x4A34600", VA = "0x4A34600")]
	public static bool2 ispow2(uint2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000354")]
	[Address(RVA = "0x4A34640", Offset = "0x4A34640", VA = "0x4A34640")]
	public static bool3 ispow2(uint3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000355")]
	[Address(RVA = "0x4A34690", Offset = "0x4A34690", VA = "0x4A34690")]
	public static bool4 ispow2(uint4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000356")]
	[Address(RVA = "0x4A34700", Offset = "0x4A34700", VA = "0x4A34700")]
	public static int min(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000357")]
	[Address(RVA = "0x4A34710", Offset = "0x4A34710", VA = "0x4A34710")]
	public static int2 min(int2 x, int2 y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000358")]
	[Address(RVA = "0x4A34740", Offset = "0x4A34740", VA = "0x4A34740")]
	public static int3 min(int3 x, int3 y)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000359")]
	[Address(RVA = "0x4A34770", Offset = "0x4A34770", VA = "0x4A34770")]
	public static int4 min(int4 x, int4 y)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035A")]
	[Address(RVA = "0x4A347C0", Offset = "0x4A347C0", VA = "0x4A347C0")]
	public static uint min(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035B")]
	[Address(RVA = "0x4A347D0", Offset = "0x4A347D0", VA = "0x4A347D0")]
	public static uint2 min(uint2 x, uint2 y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035C")]
	[Address(RVA = "0x4A34800", Offset = "0x4A34800", VA = "0x4A34800")]
	public static uint3 min(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035D")]
	[Address(RVA = "0x4A34830", Offset = "0x4A34830", VA = "0x4A34830")]
	public static uint4 min(uint4 x, uint4 y)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035E")]
	[Address(RVA = "0x4A34880", Offset = "0x4A34880", VA = "0x4A34880")]
	public static long min(long x, long y)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035F")]
	[Address(RVA = "0x4A34890", Offset = "0x4A34890", VA = "0x4A34890")]
	public static ulong min(ulong x, ulong y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000360")]
	[Address(RVA = "0x4A348A0", Offset = "0x4A348A0", VA = "0x4A348A0")]
	public static float min(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000361")]
	[Address(RVA = "0x4A348E0", Offset = "0x4A348E0", VA = "0x4A348E0")]
	public static float2 min(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000362")]
	[Address(RVA = "0x4A34950", Offset = "0x4A34950", VA = "0x4A34950")]
	public static float3 min(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000363")]
	[Address(RVA = "0x4A349F0", Offset = "0x4A349F0", VA = "0x4A349F0")]
	public static float4 min(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000364")]
	[Address(RVA = "0x4A34AC0", Offset = "0x4A34AC0", VA = "0x4A34AC0")]
	public static double min(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000365")]
	[Address(RVA = "0x4A34B00", Offset = "0x4A34B00", VA = "0x4A34B00")]
	public static double2 min(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000366")]
	[Address(RVA = "0x4A34B70", Offset = "0x4A34B70", VA = "0x4A34B70")]
	public static double3 min(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000367")]
	[Address(RVA = "0x4A34C30", Offset = "0x4A34C30", VA = "0x4A34C30")]
	public static double4 min(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000368")]
	[Address(RVA = "0x4A34D30", Offset = "0x4A34D30", VA = "0x4A34D30")]
	public static int max(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000369")]
	[Address(RVA = "0x4A34D40", Offset = "0x4A34D40", VA = "0x4A34D40")]
	public static int2 max(int2 x, int2 y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036A")]
	[Address(RVA = "0x4A34D70", Offset = "0x4A34D70", VA = "0x4A34D70")]
	public static int3 max(int3 x, int3 y)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036B")]
	[Address(RVA = "0x4A34DA0", Offset = "0x4A34DA0", VA = "0x4A34DA0")]
	public static int4 max(int4 x, int4 y)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036C")]
	[Address(RVA = "0x4A34DF0", Offset = "0x4A34DF0", VA = "0x4A34DF0")]
	public static uint max(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036D")]
	[Address(RVA = "0x4A34E00", Offset = "0x4A34E00", VA = "0x4A34E00")]
	public static uint2 max(uint2 x, uint2 y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036E")]
	[Address(RVA = "0x4A34E30", Offset = "0x4A34E30", VA = "0x4A34E30")]
	public static uint3 max(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036F")]
	[Address(RVA = "0x4A34E60", Offset = "0x4A34E60", VA = "0x4A34E60")]
	public static uint4 max(uint4 x, uint4 y)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000370")]
	[Address(RVA = "0x4A34EB0", Offset = "0x4A34EB0", VA = "0x4A34EB0")]
	public static long max(long x, long y)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000371")]
	[Address(RVA = "0x4A34EC0", Offset = "0x4A34EC0", VA = "0x4A34EC0")]
	public static ulong max(ulong x, ulong y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000372")]
	[Address(RVA = "0x4A34ED0", Offset = "0x4A34ED0", VA = "0x4A34ED0")]
	public static float max(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000373")]
	[Address(RVA = "0x4A34F00", Offset = "0x4A34F00", VA = "0x4A34F00")]
	public static float2 max(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000374")]
	[Address(RVA = "0x4A34F70", Offset = "0x4A34F70", VA = "0x4A34F70")]
	public static float3 max(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000375")]
	[Address(RVA = "0x4A35000", Offset = "0x4A35000", VA = "0x4A35000")]
	public static float4 max(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000376")]
	[Address(RVA = "0x4A350D0", Offset = "0x4A350D0", VA = "0x4A350D0")]
	public static double max(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000377")]
	[Address(RVA = "0x4A35110", Offset = "0x4A35110", VA = "0x4A35110")]
	public static double2 max(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000378")]
	[Address(RVA = "0x4A35180", Offset = "0x4A35180", VA = "0x4A35180")]
	public static double3 max(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000379")]
	[Address(RVA = "0x4A35240", Offset = "0x4A35240", VA = "0x4A35240")]
	public static double4 max(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037A")]
	[Address(RVA = "0x4A35340", Offset = "0x4A35340", VA = "0x4A35340")]
	public static float lerp(float x, float y, float s)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037B")]
	[Address(RVA = "0x4A35350", Offset = "0x4A35350", VA = "0x4A35350")]
	public static float2 lerp(float2 x, float2 y, float s)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037C")]
	[Address(RVA = "0x4A35360", Offset = "0x4A35360", VA = "0x4A35360")]
	public static float3 lerp(float3 x, float3 y, float s)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037D")]
	[Address(RVA = "0x4A35380", Offset = "0x4A35380", VA = "0x4A35380")]
	public static float4 lerp(float4 x, float4 y, float s)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037E")]
	[Address(RVA = "0x4A353A0", Offset = "0x4A353A0", VA = "0x4A353A0")]
	public static float2 lerp(float2 x, float2 y, float2 s)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037F")]
	[Address(RVA = "0x4A353B0", Offset = "0x4A353B0", VA = "0x4A353B0")]
	public static float3 lerp(float3 x, float3 y, float3 s)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000380")]
	[Address(RVA = "0x4A353D0", Offset = "0x4A353D0", VA = "0x4A353D0")]
	public static float4 lerp(float4 x, float4 y, float4 s)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000381")]
	[Address(RVA = "0x4A353F0", Offset = "0x4A353F0", VA = "0x4A353F0")]
	public static double lerp(double x, double y, double s)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000382")]
	[Address(RVA = "0x4A35400", Offset = "0x4A35400", VA = "0x4A35400")]
	public static double2 lerp(double2 x, double2 y, double s)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000383")]
	[Address(RVA = "0x4A35430", Offset = "0x4A35430", VA = "0x4A35430")]
	public static double3 lerp(double3 x, double3 y, double s)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000384")]
	[Address(RVA = "0x4A35480", Offset = "0x4A35480", VA = "0x4A35480")]
	public static double4 lerp(double4 x, double4 y, double s)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000385")]
	[Address(RVA = "0x4A354D0", Offset = "0x4A354D0", VA = "0x4A354D0")]
	public static double2 lerp(double2 x, double2 y, double2 s)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000386")]
	[Address(RVA = "0x4A35500", Offset = "0x4A35500", VA = "0x4A35500")]
	public static double3 lerp(double3 x, double3 y, double3 s)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000387")]
	[Address(RVA = "0x4A35550", Offset = "0x4A35550", VA = "0x4A35550")]
	public static double4 lerp(double4 x, double4 y, double4 s)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000388")]
	[Address(RVA = "0x4A355A0", Offset = "0x4A355A0", VA = "0x4A355A0")]
	public static float unlerp(float a, float b, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000389")]
	[Address(RVA = "0x4A355B0", Offset = "0x4A355B0", VA = "0x4A355B0")]
	public static float2 unlerp(float2 a, float2 b, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038A")]
	[Address(RVA = "0x4A355C0", Offset = "0x4A355C0", VA = "0x4A355C0")]
	public static float3 unlerp(float3 a, float3 b, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038B")]
	[Address(RVA = "0x4A355E0", Offset = "0x4A355E0", VA = "0x4A355E0")]
	public static float4 unlerp(float4 a, float4 b, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038C")]
	[Address(RVA = "0x4A35600", Offset = "0x4A35600", VA = "0x4A35600")]
	public static double unlerp(double a, double b, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038D")]
	[Address(RVA = "0x4A35620", Offset = "0x4A35620", VA = "0x4A35620")]
	public static double2 unlerp(double2 a, double2 b, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038E")]
	[Address(RVA = "0x4A35650", Offset = "0x4A35650", VA = "0x4A35650")]
	public static double3 unlerp(double3 a, double3 b, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038F")]
	[Address(RVA = "0x4A356A0", Offset = "0x4A356A0", VA = "0x4A356A0")]
	public static double4 unlerp(double4 a, double4 b, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000390")]
	[Address(RVA = "0x4A356F0", Offset = "0x4A356F0", VA = "0x4A356F0")]
	public static float remap(float a, float b, float c, float d, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000391")]
	[Address(RVA = "0x4A35710", Offset = "0x4A35710", VA = "0x4A35710")]
	public static float2 remap(float2 a, float2 b, float2 c, float2 d, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000392")]
	[Address(RVA = "0x4A35730", Offset = "0x4A35730", VA = "0x4A35730")]
	public static float3 remap(float3 a, float3 b, float3 c, float3 d, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000393")]
	[Address(RVA = "0x4A35780", Offset = "0x4A35780", VA = "0x4A35780")]
	public static float4 remap(float4 a, float4 b, float4 c, float4 d, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000394")]
	[Address(RVA = "0x4A357D0", Offset = "0x4A357D0", VA = "0x4A357D0")]
	public static double remap(double a, double b, double c, double d, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000395")]
	[Address(RVA = "0x4A357F0", Offset = "0x4A357F0", VA = "0x4A357F0")]
	public static double2 remap(double2 a, double2 b, double2 c, double2 d, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000396")]
	[Address(RVA = "0x4A35830", Offset = "0x4A35830", VA = "0x4A35830")]
	public static double3 remap(double3 a, double3 b, double3 c, double3 d, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000397")]
	[Address(RVA = "0x4A358B0", Offset = "0x4A358B0", VA = "0x4A358B0")]
	public static double4 remap(double4 a, double4 b, double4 c, double4 d, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000398")]
	[Address(RVA = "0x4A35940", Offset = "0x4A35940", VA = "0x4A35940")]
	public static int mad(int a, int b, int c)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000399")]
	[Address(RVA = "0x4A35950", Offset = "0x4A35950", VA = "0x4A35950")]
	public static int2 mad(int2 a, int2 b, int2 c)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4A35990", Offset = "0x4A35990", VA = "0x4A35990")]
	public static int3 mad(int3 a, int3 b, int3 c)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039B")]
	[Address(RVA = "0x4A359D0", Offset = "0x4A359D0", VA = "0x4A359D0")]
	public static int4 mad(int4 a, int4 b, int4 c)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039C")]
	[Address(RVA = "0x4A35A40", Offset = "0x4A35A40", VA = "0x4A35A40")]
	public static uint mad(uint a, uint b, uint c)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039D")]
	[Address(RVA = "0x4A35A50", Offset = "0x4A35A50", VA = "0x4A35A50")]
	public static uint2 mad(uint2 a, uint2 b, uint2 c)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4A35A90", Offset = "0x4A35A90", VA = "0x4A35A90")]
	public static uint3 mad(uint3 a, uint3 b, uint3 c)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4A35AD0", Offset = "0x4A35AD0", VA = "0x4A35AD0")]
	public static uint4 mad(uint4 a, uint4 b, uint4 c)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4A35B40", Offset = "0x4A35B40", VA = "0x4A35B40")]
	public static long mad(long a, long b, long c)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x4A35B50", Offset = "0x4A35B50", VA = "0x4A35B50")]
	public static ulong mad(ulong a, ulong b, ulong c)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x4A35B60", Offset = "0x4A35B60", VA = "0x4A35B60")]
	public static float mad(float a, float b, float c)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x4A35B70", Offset = "0x4A35B70", VA = "0x4A35B70")]
	public static float2 mad(float2 a, float2 b, float2 c)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x4A35B80", Offset = "0x4A35B80", VA = "0x4A35B80")]
	public static float3 mad(float3 a, float3 b, float3 c)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x4A35B90", Offset = "0x4A35B90", VA = "0x4A35B90")]
	public static float4 mad(float4 a, float4 b, float4 c)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x4A35BA0", Offset = "0x4A35BA0", VA = "0x4A35BA0")]
	public static double mad(double a, double b, double c)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x4A35BB0", Offset = "0x4A35BB0", VA = "0x4A35BB0")]
	public static double2 mad(double2 a, double2 b, double2 c)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x4A35BD0", Offset = "0x4A35BD0", VA = "0x4A35BD0")]
	public static double3 mad(double3 a, double3 b, double3 c)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x4A35C10", Offset = "0x4A35C10", VA = "0x4A35C10")]
	public static double4 mad(double4 a, double4 b, double4 c)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x4A35C50", Offset = "0x4A35C50", VA = "0x4A35C50")]
	public static int clamp(int x, int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x4A35C60", Offset = "0x4A35C60", VA = "0x4A35C60")]
	public static int2 clamp(int2 x, int2 a, int2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4A35CA0", Offset = "0x4A35CA0", VA = "0x4A35CA0")]
	public static int3 clamp(int3 x, int3 a, int3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x4A35CF0", Offset = "0x4A35CF0", VA = "0x4A35CF0")]
	public static int4 clamp(int4 x, int4 a, int4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x4A35D70", Offset = "0x4A35D70", VA = "0x4A35D70")]
	public static uint clamp(uint x, uint a, uint b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x4A35D80", Offset = "0x4A35D80", VA = "0x4A35D80")]
	public static uint2 clamp(uint2 x, uint2 a, uint2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x4A35DC0", Offset = "0x4A35DC0", VA = "0x4A35DC0")]
	public static uint3 clamp(uint3 x, uint3 a, uint3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x4A35E10", Offset = "0x4A35E10", VA = "0x4A35E10")]
	public static uint4 clamp(uint4 x, uint4 a, uint4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x4A35E90", Offset = "0x4A35E90", VA = "0x4A35E90")]
	public static long clamp(long x, long a, long b)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x4A35EB0", Offset = "0x4A35EB0", VA = "0x4A35EB0")]
	public static ulong clamp(ulong x, ulong a, ulong b)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4A35ED0", Offset = "0x4A35ED0", VA = "0x4A35ED0")]
	public static float clamp(float x, float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4A35F30", Offset = "0x4A35F30", VA = "0x4A35F30")]
	public static float2 clamp(float2 x, float2 a, float2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4A35FF0", Offset = "0x4A35FF0", VA = "0x4A35FF0")]
	public static float3 clamp(float3 x, float3 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x4A360C0", Offset = "0x4A360C0", VA = "0x4A360C0")]
	public static float4 clamp(float4 x, float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x4A361E0", Offset = "0x4A361E0", VA = "0x4A361E0")]
	public static double clamp(double x, double a, double b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x4A36250", Offset = "0x4A36250", VA = "0x4A36250")]
	public static double2 clamp(double2 x, double2 a, double2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x4A362E0", Offset = "0x4A362E0", VA = "0x4A362E0")]
	public static double3 clamp(double3 x, double3 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4A36430", Offset = "0x4A36430", VA = "0x4A36430")]
	public static double4 clamp(double4 x, double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4A36600", Offset = "0x4A36600", VA = "0x4A36600")]
	public static float saturate(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x4A36660", Offset = "0x4A36660", VA = "0x4A36660")]
	public static float2 saturate(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x4A36720", Offset = "0x4A36720", VA = "0x4A36720")]
	public static float3 saturate(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x4A36830", Offset = "0x4A36830", VA = "0x4A36830")]
	public static float4 saturate(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4A36990", Offset = "0x4A36990", VA = "0x4A36990")]
	public static double saturate(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x4A36A00", Offset = "0x4A36A00", VA = "0x4A36A00")]
	public static double2 saturate(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4A36AC0", Offset = "0x4A36AC0", VA = "0x4A36AC0")]
	public static double3 saturate(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x4A36BD0", Offset = "0x4A36BD0", VA = "0x4A36BD0")]
	public static double4 saturate(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x4A36D50", Offset = "0x4A36D50", VA = "0x4A36D50")]
	public static int abs(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4A36D60", Offset = "0x4A36D60", VA = "0x4A36D60")]
	public static int2 abs(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x4A36DA0", Offset = "0x4A36DA0", VA = "0x4A36DA0")]
	public static int3 abs(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x4A36DF0", Offset = "0x4A36DF0", VA = "0x4A36DF0")]
	public static int4 abs(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x4A36E60", Offset = "0x4A36E60", VA = "0x4A36E60")]
	public static long abs(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x4A36E70", Offset = "0x4A36E70", VA = "0x4A36E70")]
	public static float abs(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x4A36E80", Offset = "0x4A36E80", VA = "0x4A36E80")]
	public static float2 abs(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x4A36E90", Offset = "0x4A36E90", VA = "0x4A36E90")]
	public static float3 abs(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4A36EA0", Offset = "0x4A36EA0", VA = "0x4A36EA0")]
	public static float4 abs(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x4A36EB0", Offset = "0x4A36EB0", VA = "0x4A36EB0")]
	public static double abs(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x4A36EC0", Offset = "0x4A36EC0", VA = "0x4A36EC0")]
	public static double2 abs(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x4A36ED0", Offset = "0x4A36ED0", VA = "0x4A36ED0")]
	public static double3 abs(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x4A36F00", Offset = "0x4A36F00", VA = "0x4A36F00")]
	public static double4 abs(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x4A36F20", Offset = "0x4A36F20", VA = "0x4A36F20")]
	public static int dot(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x4A36F30", Offset = "0x4A36F30", VA = "0x4A36F30")]
	public static int dot(int2 x, int2 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x4A36F50", Offset = "0x4A36F50", VA = "0x4A36F50")]
	public static int dot(int3 x, int3 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4A36F70", Offset = "0x4A36F70", VA = "0x4A36F70")]
	public static int dot(int4 x, int4 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x4A36FA0", Offset = "0x4A36FA0", VA = "0x4A36FA0")]
	public static uint dot(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x4A36FB0", Offset = "0x4A36FB0", VA = "0x4A36FB0")]
	public static uint dot(uint2 x, uint2 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x4A36FD0", Offset = "0x4A36FD0", VA = "0x4A36FD0")]
	public static uint dot(uint3 x, uint3 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x4A36FF0", Offset = "0x4A36FF0", VA = "0x4A36FF0")]
	public static uint dot(uint4 x, uint4 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x4A37020", Offset = "0x4A37020", VA = "0x4A37020")]
	public static float dot(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x4A37030", Offset = "0x4A37030", VA = "0x4A37030")]
	public static float dot(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4A37050", Offset = "0x4A37050", VA = "0x4A37050")]
	public static float dot(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x4A37070", Offset = "0x4A37070", VA = "0x4A37070")]
	public static float dot(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4A370A0", Offset = "0x4A370A0", VA = "0x4A370A0")]
	public static double dot(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4A370B0", Offset = "0x4A370B0", VA = "0x4A370B0")]
	public static double dot(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4A370C0", Offset = "0x4A370C0", VA = "0x4A370C0")]
	public static double dot(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x4A370F0", Offset = "0x4A370F0", VA = "0x4A370F0")]
	public static double dot(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4A37130", Offset = "0x4A37130", VA = "0x4A37130")]
	public static float tan(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4A37190", Offset = "0x4A37190", VA = "0x4A37190")]
	public static float2 tan(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4A37270", Offset = "0x4A37270", VA = "0x4A37270")]
	public static float3 tan(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x4A373D0", Offset = "0x4A373D0", VA = "0x4A373D0")]
	public static float4 tan(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4A375B0", Offset = "0x4A375B0", VA = "0x4A375B0")]
	public static double tan(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4A37620", Offset = "0x4A37620", VA = "0x4A37620")]
	public static double2 tan(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4A37710", Offset = "0x4A37710", VA = "0x4A37710")]
	public static double3 tan(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x4A37890", Offset = "0x4A37890", VA = "0x4A37890")]
	public static double4 tan(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4A37A80", Offset = "0x4A37A80", VA = "0x4A37A80")]
	public static float tanh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x4A37AE0", Offset = "0x4A37AE0", VA = "0x4A37AE0")]
	public static float2 tanh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x4A37BC0", Offset = "0x4A37BC0", VA = "0x4A37BC0")]
	public static float3 tanh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x4A37D20", Offset = "0x4A37D20", VA = "0x4A37D20")]
	public static float4 tanh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4A37F00", Offset = "0x4A37F00", VA = "0x4A37F00")]
	public static double tanh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4A37F70", Offset = "0x4A37F70", VA = "0x4A37F70")]
	public static double2 tanh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4A38060", Offset = "0x4A38060", VA = "0x4A38060")]
	public static double3 tanh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x4A381E0", Offset = "0x4A381E0", VA = "0x4A381E0")]
	public static double4 tanh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x4A383D0", Offset = "0x4A383D0", VA = "0x4A383D0")]
	public static float atan(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x4A38430", Offset = "0x4A38430", VA = "0x4A38430")]
	public static float2 atan(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x4A38510", Offset = "0x4A38510", VA = "0x4A38510")]
	public static float3 atan(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x4A38670", Offset = "0x4A38670", VA = "0x4A38670")]
	public static float4 atan(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x4A38850", Offset = "0x4A38850", VA = "0x4A38850")]
	public static double atan(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x4A388C0", Offset = "0x4A388C0", VA = "0x4A388C0")]
	public static double2 atan(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x4A389B0", Offset = "0x4A389B0", VA = "0x4A389B0")]
	public static double3 atan(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x4A38B30", Offset = "0x4A38B30", VA = "0x4A38B30")]
	public static double4 atan(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x4A38D20", Offset = "0x4A38D20", VA = "0x4A38D20")]
	public static float atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x4A38DA0", Offset = "0x4A38DA0", VA = "0x4A38DA0")]
	public static float2 atan2(float2 y, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x4A38EB0", Offset = "0x4A38EB0", VA = "0x4A38EB0")]
	public static float3 atan2(float3 y, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x4A39040", Offset = "0x4A39040", VA = "0x4A39040")]
	public static float4 atan2(float4 y, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x4A39260", Offset = "0x4A39260", VA = "0x4A39260")]
	public static double atan2(double y, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x4A392F0", Offset = "0x4A392F0", VA = "0x4A392F0")]
	public static double2 atan2(double2 y, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4A39400", Offset = "0x4A39400", VA = "0x4A39400")]
	public static double3 atan2(double3 y, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000400")]
	[Address(RVA = "0x4A395E0", Offset = "0x4A395E0", VA = "0x4A395E0")]
	public static double4 atan2(double4 y, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000401")]
	[Address(RVA = "0x4A39850", Offset = "0x4A39850", VA = "0x4A39850")]
	public static float cos(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4A398B0", Offset = "0x4A398B0", VA = "0x4A398B0")]
	public static float2 cos(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000403")]
	[Address(RVA = "0x4A39990", Offset = "0x4A39990", VA = "0x4A39990")]
	public static float3 cos(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000404")]
	[Address(RVA = "0x4A39AF0", Offset = "0x4A39AF0", VA = "0x4A39AF0")]
	public static float4 cos(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000405")]
	[Address(RVA = "0x4A39CD0", Offset = "0x4A39CD0", VA = "0x4A39CD0")]
	public static double cos(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000406")]
	[Address(RVA = "0x4A39D40", Offset = "0x4A39D40", VA = "0x4A39D40")]
	public static double2 cos(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000407")]
	[Address(RVA = "0x4A39E30", Offset = "0x4A39E30", VA = "0x4A39E30")]
	public static double3 cos(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000408")]
	[Address(RVA = "0x4A39FB0", Offset = "0x4A39FB0", VA = "0x4A39FB0")]
	public static double4 cos(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000409")]
	[Address(RVA = "0x4A3A1A0", Offset = "0x4A3A1A0", VA = "0x4A3A1A0")]
	public static float cosh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040A")]
	[Address(RVA = "0x4A3A200", Offset = "0x4A3A200", VA = "0x4A3A200")]
	public static float2 cosh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040B")]
	[Address(RVA = "0x4A3A2E0", Offset = "0x4A3A2E0", VA = "0x4A3A2E0")]
	public static float3 cosh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040C")]
	[Address(RVA = "0x4A3A440", Offset = "0x4A3A440", VA = "0x4A3A440")]
	public static float4 cosh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040D")]
	[Address(RVA = "0x4A3A620", Offset = "0x4A3A620", VA = "0x4A3A620")]
	public static double cosh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040E")]
	[Address(RVA = "0x4A3A690", Offset = "0x4A3A690", VA = "0x4A3A690")]
	public static double2 cosh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040F")]
	[Address(RVA = "0x4A3A780", Offset = "0x4A3A780", VA = "0x4A3A780")]
	public static double3 cosh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000410")]
	[Address(RVA = "0x4A3A900", Offset = "0x4A3A900", VA = "0x4A3A900")]
	public static double4 cosh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000411")]
	[Address(RVA = "0x4A3AAF0", Offset = "0x4A3AAF0", VA = "0x4A3AAF0")]
	public static float acos(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000412")]
	[Address(RVA = "0x4A3AB50", Offset = "0x4A3AB50", VA = "0x4A3AB50")]
	public static float2 acos(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000413")]
	[Address(RVA = "0x4A3AC30", Offset = "0x4A3AC30", VA = "0x4A3AC30")]
	public static float3 acos(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000414")]
	[Address(RVA = "0x4A3AD90", Offset = "0x4A3AD90", VA = "0x4A3AD90")]
	public static float4 acos(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000415")]
	[Address(RVA = "0x4A3AF70", Offset = "0x4A3AF70", VA = "0x4A3AF70")]
	public static double acos(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000416")]
	[Address(RVA = "0x4A3AFE0", Offset = "0x4A3AFE0", VA = "0x4A3AFE0")]
	public static double2 acos(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000417")]
	[Address(RVA = "0x4A3B0D0", Offset = "0x4A3B0D0", VA = "0x4A3B0D0")]
	public static double3 acos(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000418")]
	[Address(RVA = "0x4A3B250", Offset = "0x4A3B250", VA = "0x4A3B250")]
	public static double4 acos(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000419")]
	[Address(RVA = "0x4A3B440", Offset = "0x4A3B440", VA = "0x4A3B440")]
	public static float sin(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4A3B4A0", Offset = "0x4A3B4A0", VA = "0x4A3B4A0")]
	public static float2 sin(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041B")]
	[Address(RVA = "0x4A3B580", Offset = "0x4A3B580", VA = "0x4A3B580")]
	public static float3 sin(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041C")]
	[Address(RVA = "0x4A3B6E0", Offset = "0x4A3B6E0", VA = "0x4A3B6E0")]
	public static float4 sin(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4A3B8C0", Offset = "0x4A3B8C0", VA = "0x4A3B8C0")]
	public static double sin(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041E")]
	[Address(RVA = "0x4A3B930", Offset = "0x4A3B930", VA = "0x4A3B930")]
	public static double2 sin(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041F")]
	[Address(RVA = "0x4A3BA20", Offset = "0x4A3BA20", VA = "0x4A3BA20")]
	public static double3 sin(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000420")]
	[Address(RVA = "0x4A3BBA0", Offset = "0x4A3BBA0", VA = "0x4A3BBA0")]
	public static double4 sin(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000421")]
	[Address(RVA = "0x4A3BD90", Offset = "0x4A3BD90", VA = "0x4A3BD90")]
	public static float sinh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4A3BDF0", Offset = "0x4A3BDF0", VA = "0x4A3BDF0")]
	public static float2 sinh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4A3BED0", Offset = "0x4A3BED0", VA = "0x4A3BED0")]
	public static float3 sinh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4A3C030", Offset = "0x4A3C030", VA = "0x4A3C030")]
	public static float4 sinh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000425")]
	[Address(RVA = "0x4A3C210", Offset = "0x4A3C210", VA = "0x4A3C210")]
	public static double sinh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4A3C280", Offset = "0x4A3C280", VA = "0x4A3C280")]
	public static double2 sinh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4A3C370", Offset = "0x4A3C370", VA = "0x4A3C370")]
	public static double3 sinh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4A3C4F0", Offset = "0x4A3C4F0", VA = "0x4A3C4F0")]
	public static double4 sinh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4A3C6E0", Offset = "0x4A3C6E0", VA = "0x4A3C6E0")]
	public static float asin(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4A3C740", Offset = "0x4A3C740", VA = "0x4A3C740")]
	public static float2 asin(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042B")]
	[Address(RVA = "0x4A3C820", Offset = "0x4A3C820", VA = "0x4A3C820")]
	public static float3 asin(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042C")]
	[Address(RVA = "0x4A3C980", Offset = "0x4A3C980", VA = "0x4A3C980")]
	public static float4 asin(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4A3CB60", Offset = "0x4A3CB60", VA = "0x4A3CB60")]
	public static double asin(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4A3CBD0", Offset = "0x4A3CBD0", VA = "0x4A3CBD0")]
	public static double2 asin(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4A3CCC0", Offset = "0x4A3CCC0", VA = "0x4A3CCC0")]
	public static double3 asin(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4A3CE40", Offset = "0x4A3CE40", VA = "0x4A3CE40")]
	public static double4 asin(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4A3D030", Offset = "0x4A3D030", VA = "0x4A3D030")]
	public static float floor(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000432")]
	[Address(RVA = "0x4A3D0A0", Offset = "0x4A3D0A0", VA = "0x4A3D0A0")]
	public static float2 floor(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000433")]
	[Address(RVA = "0x4A3D190", Offset = "0x4A3D190", VA = "0x4A3D190")]
	public static float3 floor(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000434")]
	[Address(RVA = "0x4A3D2F0", Offset = "0x4A3D2F0", VA = "0x4A3D2F0")]
	public static float4 floor(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4A3D4D0", Offset = "0x4A3D4D0", VA = "0x4A3D4D0")]
	public static double floor(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000436")]
	[Address(RVA = "0x4A3D540", Offset = "0x4A3D540", VA = "0x4A3D540")]
	public static double2 floor(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000437")]
	[Address(RVA = "0x4A3D620", Offset = "0x4A3D620", VA = "0x4A3D620")]
	public static double3 floor(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000438")]
	[Address(RVA = "0x4A3D7C0", Offset = "0x4A3D7C0", VA = "0x4A3D7C0")]
	public static double4 floor(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000439")]
	[Address(RVA = "0x4A3D9F0", Offset = "0x4A3D9F0", VA = "0x4A3D9F0")]
	public static float ceil(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043A")]
	[Address(RVA = "0x4A3DA60", Offset = "0x4A3DA60", VA = "0x4A3DA60")]
	public static float2 ceil(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043B")]
	[Address(RVA = "0x4A3DB50", Offset = "0x4A3DB50", VA = "0x4A3DB50")]
	public static float3 ceil(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043C")]
	[Address(RVA = "0x4A3DCB0", Offset = "0x4A3DCB0", VA = "0x4A3DCB0")]
	public static float4 ceil(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043D")]
	[Address(RVA = "0x4A3DE90", Offset = "0x4A3DE90", VA = "0x4A3DE90")]
	public static double ceil(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043E")]
	[Address(RVA = "0x4A3DF00", Offset = "0x4A3DF00", VA = "0x4A3DF00")]
	public static double2 ceil(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043F")]
	[Address(RVA = "0x4A3DFE0", Offset = "0x4A3DFE0", VA = "0x4A3DFE0")]
	public static double3 ceil(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000440")]
	[Address(RVA = "0x4A3E180", Offset = "0x4A3E180", VA = "0x4A3E180")]
	public static double4 ceil(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000441")]
	[Address(RVA = "0x4A3E3B0", Offset = "0x4A3E3B0", VA = "0x4A3E3B0")]
	public static float round(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000442")]
	[Address(RVA = "0x4A3E4B0", Offset = "0x4A3E4B0", VA = "0x4A3E4B0")]
	public static float2 round(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000443")]
	[Address(RVA = "0x4A3E6E0", Offset = "0x4A3E6E0", VA = "0x4A3E6E0")]
	public static float3 round(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000444")]
	[Address(RVA = "0x4A3EA60", Offset = "0x4A3EA60", VA = "0x4A3EA60")]
	public static float4 round(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000445")]
	[Address(RVA = "0x4A3EF20", Offset = "0x4A3EF20", VA = "0x4A3EF20")]
	public static double round(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000446")]
	[Address(RVA = "0x4A3F000", Offset = "0x4A3F000", VA = "0x4A3F000")]
	public static double2 round(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000447")]
	[Address(RVA = "0x4A3F250", Offset = "0x4A3F250", VA = "0x4A3F250")]
	public static double3 round(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000448")]
	[Address(RVA = "0x4A3F570", Offset = "0x4A3F570", VA = "0x4A3F570")]
	public static double4 round(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000449")]
	[Address(RVA = "0x4A3F990", Offset = "0x4A3F990", VA = "0x4A3F990")]
	public static float trunc(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044A")]
	[Address(RVA = "0x4A3F9F0", Offset = "0x4A3F9F0", VA = "0x4A3F9F0")]
	public static float2 trunc(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044B")]
	[Address(RVA = "0x4A3FAE0", Offset = "0x4A3FAE0", VA = "0x4A3FAE0")]
	public static float3 trunc(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044C")]
	[Address(RVA = "0x4A3FC40", Offset = "0x4A3FC40", VA = "0x4A3FC40")]
	public static float4 trunc(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4A3FE20", Offset = "0x4A3FE20", VA = "0x4A3FE20")]
	public static double trunc(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044E")]
	[Address(RVA = "0x4A3FE90", Offset = "0x4A3FE90", VA = "0x4A3FE90")]
	public static double2 trunc(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4A3FF60", Offset = "0x4A3FF60", VA = "0x4A3FF60")]
	public static double3 trunc(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4A400E0", Offset = "0x4A400E0", VA = "0x4A400E0")]
	public static double4 trunc(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000451")]
	[Address(RVA = "0x4A402E0", Offset = "0x4A402E0", VA = "0x4A402E0")]
	public static float frac(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000452")]
	[Address(RVA = "0x4A40350", Offset = "0x4A40350", VA = "0x4A40350")]
	public static float2 frac(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000453")]
	[Address(RVA = "0x4A40450", Offset = "0x4A40450", VA = "0x4A40450")]
	public static float3 frac(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000454")]
	[Address(RVA = "0x4A40490", Offset = "0x4A40490", VA = "0x4A40490")]
	public static float4 frac(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000455")]
	[Address(RVA = "0x4A40690", Offset = "0x4A40690", VA = "0x4A40690")]
	public static double frac(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000456")]
	[Address(RVA = "0x4A40700", Offset = "0x4A40700", VA = "0x4A40700")]
	public static double2 frac(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000457")]
	[Address(RVA = "0x4A407F0", Offset = "0x4A407F0", VA = "0x4A407F0")]
	public static double3 frac(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000458")]
	[Address(RVA = "0x4A40970", Offset = "0x4A40970", VA = "0x4A40970")]
	public static double4 frac(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4A409E0", Offset = "0x4A409E0", VA = "0x4A409E0")]
	public static float rcp(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045A")]
	[Address(RVA = "0x4A409F0", Offset = "0x4A409F0", VA = "0x4A409F0")]
	public static float2 rcp(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4A40A00", Offset = "0x4A40A00", VA = "0x4A40A00")]
	public static float3 rcp(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045C")]
	[Address(RVA = "0x4A40A20", Offset = "0x4A40A20", VA = "0x4A40A20")]
	public static float4 rcp(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045D")]
	[Address(RVA = "0x4A40A40", Offset = "0x4A40A40", VA = "0x4A40A40")]
	public static double rcp(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045E")]
	[Address(RVA = "0x4A40A60", Offset = "0x4A40A60", VA = "0x4A40A60")]
	public static double2 rcp(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045F")]
	[Address(RVA = "0x4A40A80", Offset = "0x4A40A80", VA = "0x4A40A80")]
	public static double3 rcp(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000460")]
	[Address(RVA = "0x4A40AB0", Offset = "0x4A40AB0", VA = "0x4A40AB0")]
	public static double4 rcp(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000461")]
	[Address(RVA = "0x4A40AE0", Offset = "0x4A40AE0", VA = "0x4A40AE0")]
	public static float sign(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000462")]
	[Address(RVA = "0x4A40B10", Offset = "0x4A40B10", VA = "0x4A40B10")]
	public static float2 sign(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000463")]
	[Address(RVA = "0x4A40B40", Offset = "0x4A40B40", VA = "0x4A40B40")]
	public static float3 sign(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000464")]
	[Address(RVA = "0x4A40BA0", Offset = "0x4A40BA0", VA = "0x4A40BA0")]
	public static float4 sign(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000465")]
	[Address(RVA = "0x4A40BF0", Offset = "0x4A40BF0", VA = "0x4A40BF0")]
	public static double sign(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000466")]
	[Address(RVA = "0x4A40C30", Offset = "0x4A40C30", VA = "0x4A40C30")]
	public static double2 sign(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4A40CA0", Offset = "0x4A40CA0", VA = "0x4A40CA0")]
	public static double3 sign(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000468")]
	[Address(RVA = "0x4A40D60", Offset = "0x4A40D60", VA = "0x4A40D60")]
	public static double4 sign(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000469")]
	[Address(RVA = "0x4A40E60", Offset = "0x4A40E60", VA = "0x4A40E60")]
	public static float pow(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046A")]
	[Address(RVA = "0x4A40EE0", Offset = "0x4A40EE0", VA = "0x4A40EE0")]
	public static float2 pow(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046B")]
	[Address(RVA = "0x4A40FF0", Offset = "0x4A40FF0", VA = "0x4A40FF0")]
	public static float3 pow(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4A41190", Offset = "0x4A41190", VA = "0x4A41190")]
	public static float4 pow(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4A413C0", Offset = "0x4A413C0", VA = "0x4A413C0")]
	public static double pow(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046E")]
	[Address(RVA = "0x4A41460", Offset = "0x4A41460", VA = "0x4A41460")]
	public static double2 pow(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046F")]
	[Address(RVA = "0x4A41570", Offset = "0x4A41570", VA = "0x4A41570")]
	public static double3 pow(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4A41750", Offset = "0x4A41750", VA = "0x4A41750")]
	public static double4 pow(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4A419D0", Offset = "0x4A419D0", VA = "0x4A419D0")]
	public static float exp(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000472")]
	[Address(RVA = "0x4A41A30", Offset = "0x4A41A30", VA = "0x4A41A30")]
	public static float2 exp(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000473")]
	[Address(RVA = "0x4A41B10", Offset = "0x4A41B10", VA = "0x4A41B10")]
	public static float3 exp(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000474")]
	[Address(RVA = "0x4A41C70", Offset = "0x4A41C70", VA = "0x4A41C70")]
	public static float4 exp(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000475")]
	[Address(RVA = "0x4A41E50", Offset = "0x4A41E50", VA = "0x4A41E50")]
	public static double exp(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000476")]
	[Address(RVA = "0x4A41EC0", Offset = "0x4A41EC0", VA = "0x4A41EC0")]
	public static double2 exp(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4A41FB0", Offset = "0x4A41FB0", VA = "0x4A41FB0")]
	public static double3 exp(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000478")]
	[Address(RVA = "0x4A42130", Offset = "0x4A42130", VA = "0x4A42130")]
	public static double4 exp(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000479")]
	[Address(RVA = "0x4A42320", Offset = "0x4A42320", VA = "0x4A42320")]
	public static float exp2(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047A")]
	[Address(RVA = "0x4A42390", Offset = "0x4A42390", VA = "0x4A42390")]
	public static float2 exp2(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047B")]
	[Address(RVA = "0x4A42480", Offset = "0x4A42480", VA = "0x4A42480")]
	public static float3 exp2(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047C")]
	[Address(RVA = "0x4A425F0", Offset = "0x4A425F0", VA = "0x4A425F0")]
	public static float4 exp2(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047D")]
	[Address(RVA = "0x4A427F0", Offset = "0x4A427F0", VA = "0x4A427F0")]
	public static double exp2(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047E")]
	[Address(RVA = "0x4A42870", Offset = "0x4A42870", VA = "0x4A42870")]
	public static double2 exp2(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047F")]
	[Address(RVA = "0x4A42960", Offset = "0x4A42960", VA = "0x4A42960")]
	public static double3 exp2(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000480")]
	[Address(RVA = "0x4A42AF0", Offset = "0x4A42AF0", VA = "0x4A42AF0")]
	public static double4 exp2(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000481")]
	[Address(RVA = "0x4A42D00", Offset = "0x4A42D00", VA = "0x4A42D00")]
	public static float exp10(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000482")]
	[Address(RVA = "0x4A42D70", Offset = "0x4A42D70", VA = "0x4A42D70")]
	public static float2 exp10(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000483")]
	[Address(RVA = "0x4A42E60", Offset = "0x4A42E60", VA = "0x4A42E60")]
	public static float3 exp10(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4A42FD0", Offset = "0x4A42FD0", VA = "0x4A42FD0")]
	public static float4 exp10(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4A431D0", Offset = "0x4A431D0", VA = "0x4A431D0")]
	public static double exp10(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4A43250", Offset = "0x4A43250", VA = "0x4A43250")]
	public static double2 exp10(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000487")]
	[Address(RVA = "0x4A43340", Offset = "0x4A43340", VA = "0x4A43340")]
	public static double3 exp10(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4A434D0", Offset = "0x4A434D0", VA = "0x4A434D0")]
	public static double4 exp10(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4A436E0", Offset = "0x4A436E0", VA = "0x4A436E0")]
	public static float log(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4A43740", Offset = "0x4A43740", VA = "0x4A43740")]
	public static float2 log(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4A43820", Offset = "0x4A43820", VA = "0x4A43820")]
	public static float3 log(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4A43980", Offset = "0x4A43980", VA = "0x4A43980")]
	public static float4 log(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4A43B60", Offset = "0x4A43B60", VA = "0x4A43B60")]
	public static double log(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4A43BD0", Offset = "0x4A43BD0", VA = "0x4A43BD0")]
	public static double2 log(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4A43CC0", Offset = "0x4A43CC0", VA = "0x4A43CC0")]
	public static double3 log(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4A43E40", Offset = "0x4A43E40", VA = "0x4A43E40")]
	public static double4 log(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4A44030", Offset = "0x4A44030", VA = "0x4A44030")]
	public static float log2(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4A440A0", Offset = "0x4A440A0", VA = "0x4A440A0")]
	public static float2 log2(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4A441A0", Offset = "0x4A441A0", VA = "0x4A441A0")]
	public static float3 log2(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4A44320", Offset = "0x4A44320", VA = "0x4A44320")]
	public static float4 log2(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4A44520", Offset = "0x4A44520", VA = "0x4A44520")]
	public static double log2(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000496")]
	[Address(RVA = "0x4A445A0", Offset = "0x4A445A0", VA = "0x4A445A0")]
	public static double2 log2(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4A44690", Offset = "0x4A44690", VA = "0x4A44690")]
	public static double3 log2(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4A44820", Offset = "0x4A44820", VA = "0x4A44820")]
	public static double4 log2(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4A44A40", Offset = "0x4A44A40", VA = "0x4A44A40")]
	public static float log10(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4A44AA0", Offset = "0x4A44AA0", VA = "0x4A44AA0")]
	public static float2 log10(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4A44B80", Offset = "0x4A44B80", VA = "0x4A44B80")]
	public static float3 log10(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4A44CE0", Offset = "0x4A44CE0", VA = "0x4A44CE0")]
	public static float4 log10(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4A44EC0", Offset = "0x4A44EC0", VA = "0x4A44EC0")]
	public static double log10(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4A44F30", Offset = "0x4A44F30", VA = "0x4A44F30")]
	public static double2 log10(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4A45020", Offset = "0x4A45020", VA = "0x4A45020")]
	public static double3 log10(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4A451A0", Offset = "0x4A451A0", VA = "0x4A451A0")]
	public static double4 log10(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4A45390", Offset = "0x4A45390", VA = "0x4A45390")]
	public static float fmod(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4A453A0", Offset = "0x4A453A0", VA = "0x4A453A0")]
	public static float2 fmod(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4A453F0", Offset = "0x4A453F0", VA = "0x4A453F0")]
	public static float3 fmod(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4A45460", Offset = "0x4A45460", VA = "0x4A45460")]
	public static float4 fmod(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4A45500", Offset = "0x4A45500", VA = "0x4A45500")]
	public static double fmod(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4A45510", Offset = "0x4A45510", VA = "0x4A45510")]
	public static double2 fmod(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4A45550", Offset = "0x4A45550", VA = "0x4A45550")]
	public static double3 fmod(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x4A455F0", Offset = "0x4A455F0", VA = "0x4A455F0")]
	public static double4 fmod(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4A456D0", Offset = "0x4A456D0", VA = "0x4A456D0")]
	public static float modf(float x, out float i)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x4A45750", Offset = "0x4A45750", VA = "0x4A45750")]
	public static float2 modf(float2 x, out float2 i)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4A45860", Offset = "0x4A45860", VA = "0x4A45860")]
	public static float3 modf(float3 x, out float3 i)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x4A458A0", Offset = "0x4A458A0", VA = "0x4A458A0")]
	public static float4 modf(float4 x, out float4 i)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4A458E0", Offset = "0x4A458E0", VA = "0x4A458E0")]
	public static double modf(double x, out double i)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x4A45960", Offset = "0x4A45960", VA = "0x4A45960")]
	public static double2 modf(double2 x, out double2 i)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4A45A60", Offset = "0x4A45A60", VA = "0x4A45A60")]
	public static double3 modf(double3 x, out double3 i)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x4A45AE0", Offset = "0x4A45AE0", VA = "0x4A45AE0")]
	public static double4 modf(double4 x, out double4 i)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4A45B70", Offset = "0x4A45B70", VA = "0x4A45B70")]
	public static float sqrt(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4A45BF0", Offset = "0x4A45BF0", VA = "0x4A45BF0")]
	public static float2 sqrt(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4A45D00", Offset = "0x4A45D00", VA = "0x4A45D00")]
	public static float3 sqrt(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4A45E70", Offset = "0x4A45E70", VA = "0x4A45E70")]
	public static float4 sqrt(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4A46070", Offset = "0x4A46070", VA = "0x4A46070")]
	public static double sqrt(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4A460F0", Offset = "0x4A460F0", VA = "0x4A460F0")]
	public static double2 sqrt(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4A461F0", Offset = "0x4A461F0", VA = "0x4A461F0")]
	public static double3 sqrt(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4A463C0", Offset = "0x4A463C0", VA = "0x4A463C0")]
	public static double4 sqrt(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4A46610", Offset = "0x4A46610", VA = "0x4A46610")]
	public static float rsqrt(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4A466A0", Offset = "0x4A466A0", VA = "0x4A466A0")]
	public static float2 rsqrt(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4A467C0", Offset = "0x4A467C0", VA = "0x4A467C0")]
	public static float3 rsqrt(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x4A467F0", Offset = "0x4A467F0", VA = "0x4A467F0")]
	public static float4 rsqrt(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x4A46A00", Offset = "0x4A46A00", VA = "0x4A46A00")]
	public static double rsqrt(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x4A46A90", Offset = "0x4A46A90", VA = "0x4A46A90")]
	public static double2 rsqrt(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x4A46BA0", Offset = "0x4A46BA0", VA = "0x4A46BA0")]
	public static double3 rsqrt(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x4A46D50", Offset = "0x4A46D50", VA = "0x4A46D50")]
	public static double4 rsqrt(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x4A46DB0", Offset = "0x4A46DB0", VA = "0x4A46DB0")]
	public static float2 normalize(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x4A46E60", Offset = "0x4A46E60", VA = "0x4A46E60")]
	public static float3 normalize(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x4A46F40", Offset = "0x4A46F40", VA = "0x4A46F40")]
	public static float4 normalize(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x4A47030", Offset = "0x4A47030", VA = "0x4A47030")]
	public static double2 normalize(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4A470F0", Offset = "0x4A470F0", VA = "0x4A470F0")]
	public static double3 normalize(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x4A471E0", Offset = "0x4A471E0", VA = "0x4A471E0")]
	public static double4 normalize(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x4A472E0", Offset = "0x4A472E0", VA = "0x4A472E0")]
	public static float2 normalizesafe(float2 x, [Optional] float2 defaultvalue)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x4A473C0", Offset = "0x4A473C0", VA = "0x4A473C0")]
	public static float3 normalizesafe(float3 x, [Optional] float3 defaultvalue)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x4A47500", Offset = "0x4A47500", VA = "0x4A47500")]
	public static float4 normalizesafe(float4 x, [Optional] float4 defaultvalue)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x4A47640", Offset = "0x4A47640", VA = "0x4A47640")]
	public static double2 normalizesafe(double2 x, [Optional] double2 defaultvalue)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x4A47770", Offset = "0x4A47770", VA = "0x4A47770")]
	public static double3 normalizesafe(double3 x, [Optional] double3 defaultvalue)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x4A478E0", Offset = "0x4A478E0", VA = "0x4A478E0")]
	public static double4 normalizesafe(double4 x, [Optional] double4 defaultvalue)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x4A47A30", Offset = "0x4A47A30", VA = "0x4A47A30")]
	public static float length(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x4A47A40", Offset = "0x4A47A40", VA = "0x4A47A40")]
	public static float length(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4A47AD0", Offset = "0x4A47AD0", VA = "0x4A47AD0")]
	public static float length(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x4A47B70", Offset = "0x4A47B70", VA = "0x4A47B70")]
	public static float length(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x4A47C20", Offset = "0x4A47C20", VA = "0x4A47C20")]
	public static double length(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x4A47C30", Offset = "0x4A47C30", VA = "0x4A47C30")]
	public static double length(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x4A47CC0", Offset = "0x4A47CC0", VA = "0x4A47CC0")]
	public static double length(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x4A47D70", Offset = "0x4A47D70", VA = "0x4A47D70")]
	public static double length(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x4A47E30", Offset = "0x4A47E30", VA = "0x4A47E30")]
	public static float lengthsq(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x4A47E40", Offset = "0x4A47E40", VA = "0x4A47E40")]
	public static float lengthsq(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x4A47E60", Offset = "0x4A47E60", VA = "0x4A47E60")]
	public static float lengthsq(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x4A47E80", Offset = "0x4A47E80", VA = "0x4A47E80")]
	public static float lengthsq(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4A47EB0", Offset = "0x4A47EB0", VA = "0x4A47EB0")]
	public static double lengthsq(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x4A47EC0", Offset = "0x4A47EC0", VA = "0x4A47EC0")]
	public static double lengthsq(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x4A47ED0", Offset = "0x4A47ED0", VA = "0x4A47ED0")]
	public static double lengthsq(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x4A47F00", Offset = "0x4A47F00", VA = "0x4A47F00")]
	public static double lengthsq(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x4A47F30", Offset = "0x4A47F30", VA = "0x4A47F30")]
	public static float distance(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x4A47F40", Offset = "0x4A47F40", VA = "0x4A47F40")]
	public static float distance(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x4A47FE0", Offset = "0x4A47FE0", VA = "0x4A47FE0")]
	public static float distance(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x4A48090", Offset = "0x4A48090", VA = "0x4A48090")]
	public static float distance(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x4A48150", Offset = "0x4A48150", VA = "0x4A48150")]
	public static double distance(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x4A48170", Offset = "0x4A48170", VA = "0x4A48170")]
	public static double distance(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x4A48210", Offset = "0x4A48210", VA = "0x4A48210")]
	public static double distance(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x4A482D0", Offset = "0x4A482D0", VA = "0x4A482D0")]
	public static double distance(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x4A483A0", Offset = "0x4A483A0", VA = "0x4A483A0")]
	public static float distancesq(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x4A483B0", Offset = "0x4A483B0", VA = "0x4A483B0")]
	public static float distancesq(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x4A483D0", Offset = "0x4A483D0", VA = "0x4A483D0")]
	public static float distancesq(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x4A48400", Offset = "0x4A48400", VA = "0x4A48400")]
	public static float distancesq(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x4A48440", Offset = "0x4A48440", VA = "0x4A48440")]
	public static double distancesq(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x4A48450", Offset = "0x4A48450", VA = "0x4A48450")]
	public static double distancesq(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x4A48470", Offset = "0x4A48470", VA = "0x4A48470")]
	public static double distancesq(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x4A484B0", Offset = "0x4A484B0", VA = "0x4A484B0")]
	public static double distancesq(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x4A48500", Offset = "0x4A48500", VA = "0x4A48500")]
	public static float3 cross(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x4A48550", Offset = "0x4A48550", VA = "0x4A48550")]
	public static double3 cross(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x4A485A0", Offset = "0x4A485A0", VA = "0x4A485A0")]
	public static float smoothstep(float a, float b, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x4A48620", Offset = "0x4A48620", VA = "0x4A48620")]
	public static float2 smoothstep(float2 a, float2 b, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x4A48700", Offset = "0x4A48700", VA = "0x4A48700")]
	public static float3 smoothstep(float3 a, float3 b, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x4A48850", Offset = "0x4A48850", VA = "0x4A48850")]
	public static float4 smoothstep(float4 a, float4 b, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x4A489E0", Offset = "0x4A489E0", VA = "0x4A489E0")]
	public static double smoothstep(double a, double b, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x4A48A80", Offset = "0x4A48A80", VA = "0x4A48A80")]
	public static double2 smoothstep(double2 a, double2 b, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x4A48B70", Offset = "0x4A48B70", VA = "0x4A48B70")]
	public static double3 smoothstep(double3 a, double3 b, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x4A48D10", Offset = "0x4A48D10", VA = "0x4A48D10")]
	public static double4 smoothstep(double4 a, double4 b, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x4A48EC0", Offset = "0x4A48EC0", VA = "0x4A48EC0")]
	public static bool any(bool2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x4A48ED0", Offset = "0x4A48ED0", VA = "0x4A48ED0")]
	public static bool any(bool3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x4A48EE0", Offset = "0x4A48EE0", VA = "0x4A48EE0")]
	public static bool any(bool4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x4A48EF0", Offset = "0x4A48EF0", VA = "0x4A48EF0")]
	public static bool any(int2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x4A48F00", Offset = "0x4A48F00", VA = "0x4A48F00")]
	public static bool any(int3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x4A48F20", Offset = "0x4A48F20", VA = "0x4A48F20")]
	public static bool any(int4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x4A48F40", Offset = "0x4A48F40", VA = "0x4A48F40")]
	public static bool any(uint2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x4A48F50", Offset = "0x4A48F50", VA = "0x4A48F50")]
	public static bool any(uint3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x4A48F70", Offset = "0x4A48F70", VA = "0x4A48F70")]
	public static bool any(uint4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4A48F90", Offset = "0x4A48F90", VA = "0x4A48F90")]
	public static bool any(float2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000501")]
	[Address(RVA = "0x4A48FB0", Offset = "0x4A48FB0", VA = "0x4A48FB0")]
	public static bool any(float3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4A48FE0", Offset = "0x4A48FE0", VA = "0x4A48FE0")]
	public static bool any(float4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4A49020", Offset = "0x4A49020", VA = "0x4A49020")]
	public static bool any(double2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000504")]
	[Address(RVA = "0x4A49040", Offset = "0x4A49040", VA = "0x4A49040")]
	public static bool any(double3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000505")]
	[Address(RVA = "0x4A49080", Offset = "0x4A49080", VA = "0x4A49080")]
	public static bool any(double4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000506")]
	[Address(RVA = "0x4A490D0", Offset = "0x4A490D0", VA = "0x4A490D0")]
	public static bool all(bool2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000507")]
	[Address(RVA = "0x4A490E0", Offset = "0x4A490E0", VA = "0x4A490E0")]
	public static bool all(bool3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000508")]
	[Address(RVA = "0x4A490F0", Offset = "0x4A490F0", VA = "0x4A490F0")]
	public static bool all(bool4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000509")]
	[Address(RVA = "0x4A49100", Offset = "0x4A49100", VA = "0x4A49100")]
	public static bool all(int2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050A")]
	[Address(RVA = "0x4A49110", Offset = "0x4A49110", VA = "0x4A49110")]
	public static bool all(int3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050B")]
	[Address(RVA = "0x4A49130", Offset = "0x4A49130", VA = "0x4A49130")]
	public static bool all(int4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050C")]
	[Address(RVA = "0x4A49150", Offset = "0x4A49150", VA = "0x4A49150")]
	public static bool all(uint2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050D")]
	[Address(RVA = "0x4A49160", Offset = "0x4A49160", VA = "0x4A49160")]
	public static bool all(uint3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050E")]
	[Address(RVA = "0x4A49180", Offset = "0x4A49180", VA = "0x4A49180")]
	public static bool all(uint4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050F")]
	[Address(RVA = "0x4A491A0", Offset = "0x4A491A0", VA = "0x4A491A0")]
	public static bool all(float2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000510")]
	[Address(RVA = "0x4A491C0", Offset = "0x4A491C0", VA = "0x4A491C0")]
	public static bool all(float3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000511")]
	[Address(RVA = "0x4A491F0", Offset = "0x4A491F0", VA = "0x4A491F0")]
	public static bool all(float4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000512")]
	[Address(RVA = "0x4A49230", Offset = "0x4A49230", VA = "0x4A49230")]
	public static bool all(double2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000513")]
	[Address(RVA = "0x4A49250", Offset = "0x4A49250", VA = "0x4A49250")]
	public static bool all(double3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000514")]
	[Address(RVA = "0x4A49290", Offset = "0x4A49290", VA = "0x4A49290")]
	public static bool all(double4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000515")]
	[Address(RVA = "0x4A492E0", Offset = "0x4A492E0", VA = "0x4A492E0")]
	public static int select(int a, int b, bool c)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000516")]
	[Address(RVA = "0x4A492F0", Offset = "0x4A492F0", VA = "0x4A492F0")]
	public static int2 select(int2 a, int2 b, bool c)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4A49300", Offset = "0x4A49300", VA = "0x4A49300")]
	public static int3 select(int3 a, int3 b, bool c)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4A49310", Offset = "0x4A49310", VA = "0x4A49310")]
	public static int4 select(int4 a, int4 b, bool c)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4A49330", Offset = "0x4A49330", VA = "0x4A49330")]
	public static int2 select(int2 a, int2 b, bool2 c)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051A")]
	[Address(RVA = "0x4A49360", Offset = "0x4A49360", VA = "0x4A49360")]
	public static int3 select(int3 a, int3 b, bool3 c)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051B")]
	[Address(RVA = "0x4A493A0", Offset = "0x4A493A0", VA = "0x4A493A0")]
	public static int4 select(int4 a, int4 b, bool4 c)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051C")]
	[Address(RVA = "0x4A493F0", Offset = "0x4A493F0", VA = "0x4A493F0")]
	public static uint select(uint a, uint b, bool c)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4A49400", Offset = "0x4A49400", VA = "0x4A49400")]
	public static uint2 select(uint2 a, uint2 b, bool c)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4A49410", Offset = "0x4A49410", VA = "0x4A49410")]
	public static uint3 select(uint3 a, uint3 b, bool c)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4A49420", Offset = "0x4A49420", VA = "0x4A49420")]
	public static uint4 select(uint4 a, uint4 b, bool c)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4A49440", Offset = "0x4A49440", VA = "0x4A49440")]
	public static uint2 select(uint2 a, uint2 b, bool2 c)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4A49470", Offset = "0x4A49470", VA = "0x4A49470")]
	public static uint3 select(uint3 a, uint3 b, bool3 c)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000522")]
	[Address(RVA = "0x4A494B0", Offset = "0x4A494B0", VA = "0x4A494B0")]
	public static uint4 select(uint4 a, uint4 b, bool4 c)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000523")]
	[Address(RVA = "0x4A49500", Offset = "0x4A49500", VA = "0x4A49500")]
	public static long select(long a, long b, bool c)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000524")]
	[Address(RVA = "0x4A49510", Offset = "0x4A49510", VA = "0x4A49510")]
	public static ulong select(ulong a, ulong b, bool c)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000525")]
	[Address(RVA = "0x4A49520", Offset = "0x4A49520", VA = "0x4A49520")]
	public static float select(float a, float b, bool c)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000526")]
	[Address(RVA = "0x4A49530", Offset = "0x4A49530", VA = "0x4A49530")]
	public static float2 select(float2 a, float2 b, bool c)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000527")]
	[Address(RVA = "0x4A49540", Offset = "0x4A49540", VA = "0x4A49540")]
	public static float3 select(float3 a, float3 b, bool c)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000528")]
	[Address(RVA = "0x4A49560", Offset = "0x4A49560", VA = "0x4A49560")]
	public static float4 select(float4 a, float4 b, bool c)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000529")]
	[Address(RVA = "0x4A49580", Offset = "0x4A49580", VA = "0x4A49580")]
	public static float2 select(float2 a, float2 b, bool2 c)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052A")]
	[Address(RVA = "0x4A495B0", Offset = "0x4A495B0", VA = "0x4A495B0")]
	public static float3 select(float3 a, float3 b, bool3 c)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052B")]
	[Address(RVA = "0x4A495F0", Offset = "0x4A495F0", VA = "0x4A495F0")]
	public static float4 select(float4 a, float4 b, bool4 c)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4A49650", Offset = "0x4A49650", VA = "0x4A49650")]
	public static double select(double a, double b, bool c)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4A49660", Offset = "0x4A49660", VA = "0x4A49660")]
	public static double2 select(double2 a, double2 b, bool c)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052E")]
	[Address(RVA = "0x4A49680", Offset = "0x4A49680", VA = "0x4A49680")]
	public static double3 select(double3 a, double3 b, bool c)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4A496B0", Offset = "0x4A496B0", VA = "0x4A496B0")]
	public static double4 select(double4 a, double4 b, bool c)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000530")]
	[Address(RVA = "0x4A496E0", Offset = "0x4A496E0", VA = "0x4A496E0")]
	public static double2 select(double2 a, double2 b, bool2 c)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000531")]
	[Address(RVA = "0x4A49700", Offset = "0x4A49700", VA = "0x4A49700")]
	public static double3 select(double3 a, double3 b, bool3 c)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000532")]
	[Address(RVA = "0x4A49750", Offset = "0x4A49750", VA = "0x4A49750")]
	public static double4 select(double4 a, double4 b, bool4 c)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4A497B0", Offset = "0x4A497B0", VA = "0x4A497B0")]
	public static float step(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000534")]
	[Address(RVA = "0x4A497D0", Offset = "0x4A497D0", VA = "0x4A497D0")]
	public static float2 step(float2 y, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000535")]
	[Address(RVA = "0x4A497E0", Offset = "0x4A497E0", VA = "0x4A497E0")]
	public static float3 step(float3 y, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000536")]
	[Address(RVA = "0x4A49810", Offset = "0x4A49810", VA = "0x4A49810")]
	public static float4 step(float4 y, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000537")]
	[Address(RVA = "0x4A49830", Offset = "0x4A49830", VA = "0x4A49830")]
	public static double step(double y, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000538")]
	[Address(RVA = "0x4A49850", Offset = "0x4A49850", VA = "0x4A49850")]
	public static double2 step(double2 y, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4A49870", Offset = "0x4A49870", VA = "0x4A49870")]
	public static double3 step(double3 y, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053A")]
	[Address(RVA = "0x4A49900", Offset = "0x4A49900", VA = "0x4A49900")]
	public static double4 step(double4 y, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053B")]
	[Address(RVA = "0x4A499A0", Offset = "0x4A499A0", VA = "0x4A499A0")]
	public static float2 reflect(float2 i, float2 n)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053C")]
	[Address(RVA = "0x4A499E0", Offset = "0x4A499E0", VA = "0x4A499E0")]
	public static float3 reflect(float3 i, float3 n)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4A49A30", Offset = "0x4A49A30", VA = "0x4A49A30")]
	public static float4 reflect(float4 i, float4 n)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053E")]
	[Address(RVA = "0x4A49A90", Offset = "0x4A49A90", VA = "0x4A49A90")]
	public static double2 reflect(double2 i, double2 n)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053F")]
	[Address(RVA = "0x4A49AD0", Offset = "0x4A49AD0", VA = "0x4A49AD0")]
	public static double3 reflect(double3 i, double3 n)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000540")]
	[Address(RVA = "0x4A49B50", Offset = "0x4A49B50", VA = "0x4A49B50")]
	public static double4 reflect(double4 i, double4 n)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4A49BE0", Offset = "0x4A49BE0", VA = "0x4A49BE0")]
	public static float2 refract(float2 i, float2 n, float eta)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4A49D00", Offset = "0x4A49D00", VA = "0x4A49D00")]
	public static float3 refract(float3 i, float3 n, float eta)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000543")]
	[Address(RVA = "0x4A49E80", Offset = "0x4A49E80", VA = "0x4A49E80")]
	public static float4 refract(float4 i, float4 n, float eta)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000544")]
	[Address(RVA = "0x4A49FE0", Offset = "0x4A49FE0", VA = "0x4A49FE0")]
	public static double2 refract(double2 i, double2 n, double eta)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000545")]
	[Address(RVA = "0x4A4A150", Offset = "0x4A4A150", VA = "0x4A4A150")]
	public static double3 refract(double3 i, double3 n, double eta)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4A4A350", Offset = "0x4A4A350", VA = "0x4A4A350")]
	public static double4 refract(double4 i, double4 n, double eta)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4A4A510", Offset = "0x4A4A510", VA = "0x4A4A510")]
	public static float2 project(float2 a, float2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4A4A550", Offset = "0x4A4A550", VA = "0x4A4A550")]
	public static float3 project(float3 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4A4A5B0", Offset = "0x4A4A5B0", VA = "0x4A4A5B0")]
	public static float4 project(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4A4A630", Offset = "0x4A4A630", VA = "0x4A4A630")]
	public static float2 projectsafe(float2 a, float2 b, [Optional] float2 defaultValue)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4A4A6B0", Offset = "0x4A4A6B0", VA = "0x4A4A6B0")]
	public static float3 projectsafe(float3 a, float3 b, [Optional] float3 defaultValue)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054C")]
	[Address(RVA = "0x4A4A760", Offset = "0x4A4A760", VA = "0x4A4A760")]
	public static float4 projectsafe(float4 a, float4 b, [Optional] float4 defaultValue)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054D")]
	[Address(RVA = "0x4A4A850", Offset = "0x4A4A850", VA = "0x4A4A850")]
	public static double2 project(double2 a, double2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054E")]
	[Address(RVA = "0x4A4A8A0", Offset = "0x4A4A8A0", VA = "0x4A4A8A0")]
	public static double3 project(double3 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054F")]
	[Address(RVA = "0x4A4A920", Offset = "0x4A4A920", VA = "0x4A4A920")]
	public static double4 project(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000550")]
	[Address(RVA = "0x4A4A9C0", Offset = "0x4A4A9C0", VA = "0x4A4A9C0")]
	public static double2 projectsafe(double2 a, double2 b, [Optional] double2 defaultValue)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000551")]
	[Address(RVA = "0x4A4AA50", Offset = "0x4A4AA50", VA = "0x4A4AA50")]
	public static double3 projectsafe(double3 a, double3 b, [Optional] double3 defaultValue)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000552")]
	[Address(RVA = "0x4A4AB40", Offset = "0x4A4AB40", VA = "0x4A4AB40")]
	public static double4 projectsafe(double4 a, double4 b, [Optional] double4 defaultValue)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000553")]
	[Address(RVA = "0x4A4AC80", Offset = "0x4A4AC80", VA = "0x4A4AC80")]
	public static float2 faceforward(float2 n, float2 i, float2 ng)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4A4ACA0", Offset = "0x4A4ACA0", VA = "0x4A4ACA0")]
	public static float3 faceforward(float3 n, float3 i, float3 ng)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000555")]
	[Address(RVA = "0x4A4ACE0", Offset = "0x4A4ACE0", VA = "0x4A4ACE0")]
	public static float4 faceforward(float4 n, float4 i, float4 ng)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000556")]
	[Address(RVA = "0x4A4AD20", Offset = "0x4A4AD20", VA = "0x4A4AD20")]
	public static double2 faceforward(double2 n, double2 i, double2 ng)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000557")]
	[Address(RVA = "0x4A4AD70", Offset = "0x4A4AD70", VA = "0x4A4AD70")]
	public static double3 faceforward(double3 n, double3 i, double3 ng)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000558")]
	[Address(RVA = "0x4A4AE00", Offset = "0x4A4AE00", VA = "0x4A4AE00")]
	public static double4 faceforward(double4 n, double4 i, double4 ng)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000559")]
	[Address(RVA = "0x4A4AE70", Offset = "0x4A4AE70", VA = "0x4A4AE70")]
	public static void sincos(float x, out float s, out float c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055A")]
	[Address(RVA = "0x4A4AF70", Offset = "0x4A4AF70", VA = "0x4A4AF70")]
	public static void sincos(float2 x, out float2 s, out float2 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055B")]
	[Address(RVA = "0x4A4B140", Offset = "0x4A4B140", VA = "0x4A4B140")]
	public static void sincos(float3 x, out float3 s, out float3 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055C")]
	[Address(RVA = "0x4A4B190", Offset = "0x4A4B190", VA = "0x4A4B190")]
	public static void sincos(float4 x, out float4 s, out float4 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055D")]
	[Address(RVA = "0x4A4B530", Offset = "0x4A4B530", VA = "0x4A4B530")]
	public static void sincos(double x, out double s, out double c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055E")]
	[Address(RVA = "0x4A4B600", Offset = "0x4A4B600", VA = "0x4A4B600")]
	public static void sincos(double2 x, out double2 s, out double2 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055F")]
	[Address(RVA = "0x4A4B7C0", Offset = "0x4A4B7C0", VA = "0x4A4B7C0")]
	public static void sincos(double3 x, out double3 s, out double3 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000560")]
	[Address(RVA = "0x4A4BA60", Offset = "0x4A4BA60", VA = "0x4A4BA60")]
	public static void sincos(double4 x, out double4 s, out double4 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000561")]
	[Address(RVA = "0x4A4BB00", Offset = "0x4A4BB00", VA = "0x4A4BB00")]
	public static int countbits(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000562")]
	[Address(RVA = "0x4A4BB40", Offset = "0x4A4BB40", VA = "0x4A4BB40")]
	public static int2 countbits(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000563")]
	[Address(RVA = "0x4A4BC00", Offset = "0x4A4BC00", VA = "0x4A4BC00")]
	public static int3 countbits(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000564")]
	[Address(RVA = "0x4A4BCF0", Offset = "0x4A4BCF0", VA = "0x4A4BCF0")]
	public static int4 countbits(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000565")]
	[Address(RVA = "0x4A4BE00", Offset = "0x4A4BE00", VA = "0x4A4BE00")]
	public static int countbits(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000566")]
	[Address(RVA = "0x4A4BE40", Offset = "0x4A4BE40", VA = "0x4A4BE40")]
	public static int2 countbits(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000567")]
	[Address(RVA = "0x4A4BF00", Offset = "0x4A4BF00", VA = "0x4A4BF00")]
	public static int3 countbits(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000568")]
	[Address(RVA = "0x4A4BFF0", Offset = "0x4A4BFF0", VA = "0x4A4BFF0")]
	public static int4 countbits(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000569")]
	[Address(RVA = "0x4A4C100", Offset = "0x4A4C100", VA = "0x4A4C100")]
	public static int countbits(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4A4C160", Offset = "0x4A4C160", VA = "0x4A4C160")]
	public static int countbits(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4A4C1C0", Offset = "0x4A4C1C0", VA = "0x4A4C1C0")]
	public static int lzcnt(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4A4C200", Offset = "0x4A4C200", VA = "0x4A4C200")]
	public static int2 lzcnt(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4A4C290", Offset = "0x4A4C290", VA = "0x4A4C290")]
	public static int3 lzcnt(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4A4C350", Offset = "0x4A4C350", VA = "0x4A4C350")]
	public static int4 lzcnt(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4A4C440", Offset = "0x4A4C440", VA = "0x4A4C440")]
	public static int lzcnt(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4A4C480", Offset = "0x4A4C480", VA = "0x4A4C480")]
	public static int2 lzcnt(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4A4C510", Offset = "0x4A4C510", VA = "0x4A4C510")]
	public static int3 lzcnt(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4A4C5D0", Offset = "0x4A4C5D0", VA = "0x4A4C5D0")]
	public static int4 lzcnt(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4A4C6C0", Offset = "0x4A4C6C0", VA = "0x4A4C6C0")]
	public static int lzcnt(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4A4C710", Offset = "0x4A4C710", VA = "0x4A4C710")]
	public static int lzcnt(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4A4C760", Offset = "0x4A4C760", VA = "0x4A4C760")]
	public static int tzcnt(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4A4C7A0", Offset = "0x4A4C7A0", VA = "0x4A4C7A0")]
	public static int2 tzcnt(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4A4C830", Offset = "0x4A4C830", VA = "0x4A4C830")]
	public static int3 tzcnt(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000578")]
	[Address(RVA = "0x4A4C900", Offset = "0x4A4C900", VA = "0x4A4C900")]
	public static int4 tzcnt(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000579")]
	[Address(RVA = "0x4A4CA00", Offset = "0x4A4CA00", VA = "0x4A4CA00")]
	public static int tzcnt(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057A")]
	[Address(RVA = "0x4A4CA40", Offset = "0x4A4CA40", VA = "0x4A4CA40")]
	public static int2 tzcnt(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057B")]
	[Address(RVA = "0x4A4CAD0", Offset = "0x4A4CAD0", VA = "0x4A4CAD0")]
	public static int3 tzcnt(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057C")]
	[Address(RVA = "0x4A4CBA0", Offset = "0x4A4CBA0", VA = "0x4A4CBA0")]
	public static int4 tzcnt(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057D")]
	[Address(RVA = "0x4A4CCA0", Offset = "0x4A4CCA0", VA = "0x4A4CCA0")]
	public static int tzcnt(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057E")]
	[Address(RVA = "0x4A4CD00", Offset = "0x4A4CD00", VA = "0x4A4CD00")]
	public static int tzcnt(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057F")]
	[Address(RVA = "0x4A4CD60", Offset = "0x4A4CD60", VA = "0x4A4CD60")]
	public static int reversebits(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000580")]
	[Address(RVA = "0x4A4CDC0", Offset = "0x4A4CDC0", VA = "0x4A4CDC0")]
	public static int2 reversebits(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000581")]
	[Address(RVA = "0x4A4CEF0", Offset = "0x4A4CEF0", VA = "0x4A4CEF0")]
	public static int3 reversebits(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000582")]
	[Address(RVA = "0x4A4D080", Offset = "0x4A4D080", VA = "0x4A4D080")]
	public static int4 reversebits(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000583")]
	[Address(RVA = "0x4A4D1F0", Offset = "0x4A4D1F0", VA = "0x4A4D1F0")]
	public static uint reversebits(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000584")]
	[Address(RVA = "0x4A4D250", Offset = "0x4A4D250", VA = "0x4A4D250")]
	public static uint2 reversebits(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000585")]
	[Address(RVA = "0x4A4D380", Offset = "0x4A4D380", VA = "0x4A4D380")]
	public static uint3 reversebits(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000586")]
	[Address(RVA = "0x4A4D510", Offset = "0x4A4D510", VA = "0x4A4D510")]
	public static uint4 reversebits(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000587")]
	[Address(RVA = "0x4A4D680", Offset = "0x4A4D680", VA = "0x4A4D680")]
	public static long reversebits(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4A4D740", Offset = "0x4A4D740", VA = "0x4A4D740")]
	public static ulong reversebits(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4A4D800", Offset = "0x4A4D800", VA = "0x4A4D800")]
	public static int rol(int x, int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058A")]
	[Address(RVA = "0x4A4D810", Offset = "0x4A4D810", VA = "0x4A4D810")]
	public static int2 rol(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058B")]
	[Address(RVA = "0x4A4D840", Offset = "0x4A4D840", VA = "0x4A4D840")]
	public static int3 rol(int3 x, int n)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4A4D870", Offset = "0x4A4D870", VA = "0x4A4D870")]
	public static int4 rol(int4 x, int n)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4A4D8C0", Offset = "0x4A4D8C0", VA = "0x4A4D8C0")]
	public static uint rol(uint x, int n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4A4D8D0", Offset = "0x4A4D8D0", VA = "0x4A4D8D0")]
	public static uint2 rol(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4A4D900", Offset = "0x4A4D900", VA = "0x4A4D900")]
	public static uint3 rol(uint3 x, int n)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4A4D930", Offset = "0x4A4D930", VA = "0x4A4D930")]
	public static uint4 rol(uint4 x, int n)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4A4D980", Offset = "0x4A4D980", VA = "0x4A4D980")]
	public static long rol(long x, int n)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000592")]
	[Address(RVA = "0x4A4D990", Offset = "0x4A4D990", VA = "0x4A4D990")]
	public static ulong rol(ulong x, int n)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000593")]
	[Address(RVA = "0x4A4D9A0", Offset = "0x4A4D9A0", VA = "0x4A4D9A0")]
	public static int ror(int x, int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000594")]
	[Address(RVA = "0x4A4D9B0", Offset = "0x4A4D9B0", VA = "0x4A4D9B0")]
	public static int2 ror(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000595")]
	[Address(RVA = "0x4A4D9E0", Offset = "0x4A4D9E0", VA = "0x4A4D9E0")]
	public static int3 ror(int3 x, int n)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4A4DA10", Offset = "0x4A4DA10", VA = "0x4A4DA10")]
	public static int4 ror(int4 x, int n)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000597")]
	[Address(RVA = "0x4A4DA60", Offset = "0x4A4DA60", VA = "0x4A4DA60")]
	public static uint ror(uint x, int n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4A4DA70", Offset = "0x4A4DA70", VA = "0x4A4DA70")]
	public static uint2 ror(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000599")]
	[Address(RVA = "0x4A4DAA0", Offset = "0x4A4DAA0", VA = "0x4A4DAA0")]
	public static uint3 ror(uint3 x, int n)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059A")]
	[Address(RVA = "0x4A4DAD0", Offset = "0x4A4DAD0", VA = "0x4A4DAD0")]
	public static uint4 ror(uint4 x, int n)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059B")]
	[Address(RVA = "0x4A4DB20", Offset = "0x4A4DB20", VA = "0x4A4DB20")]
	public static long ror(long x, int n)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4A4DB30", Offset = "0x4A4DB30", VA = "0x4A4DB30")]
	public static ulong ror(ulong x, int n)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4A4DB40", Offset = "0x4A4DB40", VA = "0x4A4DB40")]
	public static int ceilpow2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059E")]
	[Address(RVA = "0x4A4DB70", Offset = "0x4A4DB70", VA = "0x4A4DB70")]
	public static int2 ceilpow2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059F")]
	[Address(RVA = "0x4A4DC10", Offset = "0x4A4DC10", VA = "0x4A4DC10")]
	public static int3 ceilpow2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x4A4DCE0", Offset = "0x4A4DCE0", VA = "0x4A4DCE0")]
	public static int4 ceilpow2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4A4DE10", Offset = "0x4A4DE10", VA = "0x4A4DE10")]
	public static uint ceilpow2(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x4A4DE40", Offset = "0x4A4DE40", VA = "0x4A4DE40")]
	public static uint2 ceilpow2(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x4A4DF00", Offset = "0x4A4DF00", VA = "0x4A4DF00")]
	public static uint3 ceilpow2(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x4A4DFE0", Offset = "0x4A4DFE0", VA = "0x4A4DFE0")]
	public static uint4 ceilpow2(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4A4E0F0", Offset = "0x4A4E0F0", VA = "0x4A4E0F0")]
	public static long ceilpow2(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4A4E140", Offset = "0x4A4E140", VA = "0x4A4E140")]
	public static ulong ceilpow2(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4A4E190", Offset = "0x4A4E190", VA = "0x4A4E190")]
	public static int ceillog2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4A4E1D0", Offset = "0x4A4E1D0", VA = "0x4A4E1D0")]
	public static int2 ceillog2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x4A4E250", Offset = "0x4A4E250", VA = "0x4A4E250")]
	public static int3 ceillog2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x4A4E300", Offset = "0x4A4E300", VA = "0x4A4E300")]
	public static int4 ceillog2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x4A4E400", Offset = "0x4A4E400", VA = "0x4A4E400")]
	public static int ceillog2(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x4A4E440", Offset = "0x4A4E440", VA = "0x4A4E440")]
	public static int2 ceillog2(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x4A4E4C0", Offset = "0x4A4E4C0", VA = "0x4A4E4C0")]
	public static int3 ceillog2(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4A4E570", Offset = "0x4A4E570", VA = "0x4A4E570")]
	public static int4 ceillog2(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x4A4E670", Offset = "0x4A4E670", VA = "0x4A4E670")]
	public static int floorlog2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x4A4E6B0", Offset = "0x4A4E6B0", VA = "0x4A4E6B0")]
	public static int2 floorlog2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x4A4E740", Offset = "0x4A4E740", VA = "0x4A4E740")]
	public static int3 floorlog2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x4A4E800", Offset = "0x4A4E800", VA = "0x4A4E800")]
	public static int4 floorlog2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x4A4E8F0", Offset = "0x4A4E8F0", VA = "0x4A4E8F0")]
	public static int floorlog2(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x4A4E930", Offset = "0x4A4E930", VA = "0x4A4E930")]
	public static int2 floorlog2(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x4A4E9C0", Offset = "0x4A4E9C0", VA = "0x4A4E9C0")]
	public static int3 floorlog2(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x4A4EA80", Offset = "0x4A4EA80", VA = "0x4A4EA80")]
	public static int4 floorlog2(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x4A4EB70", Offset = "0x4A4EB70", VA = "0x4A4EB70")]
	public static float radians(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x4A4EB80", Offset = "0x4A4EB80", VA = "0x4A4EB80")]
	public static float2 radians(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x4A4EB90", Offset = "0x4A4EB90", VA = "0x4A4EB90")]
	public static float3 radians(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x4A4EBA0", Offset = "0x4A4EBA0", VA = "0x4A4EBA0")]
	public static float4 radians(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x4A4EBB0", Offset = "0x4A4EBB0", VA = "0x4A4EBB0")]
	public static double radians(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x4A4EBC0", Offset = "0x4A4EBC0", VA = "0x4A4EBC0")]
	public static double2 radians(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x4A4EBE0", Offset = "0x4A4EBE0", VA = "0x4A4EBE0")]
	public static double3 radians(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4A4EC10", Offset = "0x4A4EC10", VA = "0x4A4EC10")]
	public static double4 radians(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x4A4EC40", Offset = "0x4A4EC40", VA = "0x4A4EC40")]
	public static float degrees(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x4A4EC50", Offset = "0x4A4EC50", VA = "0x4A4EC50")]
	public static float2 degrees(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x4A4EC60", Offset = "0x4A4EC60", VA = "0x4A4EC60")]
	public static float3 degrees(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x4A4EC70", Offset = "0x4A4EC70", VA = "0x4A4EC70")]
	public static float4 degrees(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x4A4EC80", Offset = "0x4A4EC80", VA = "0x4A4EC80")]
	public static double degrees(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x4A4EC90", Offset = "0x4A4EC90", VA = "0x4A4EC90")]
	public static double2 degrees(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x4A4ECB0", Offset = "0x4A4ECB0", VA = "0x4A4ECB0")]
	public static double3 degrees(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x4A4ECE0", Offset = "0x4A4ECE0", VA = "0x4A4ECE0")]
	public static double4 degrees(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x4A4ED10", Offset = "0x4A4ED10", VA = "0x4A4ED10")]
	public static int cmin(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x4A4ED20", Offset = "0x4A4ED20", VA = "0x4A4ED20")]
	public static int cmin(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x4A4ED40", Offset = "0x4A4ED40", VA = "0x4A4ED40")]
	public static int cmin(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4A4ED60", Offset = "0x4A4ED60", VA = "0x4A4ED60")]
	public static uint cmin(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x4A4ED70", Offset = "0x4A4ED70", VA = "0x4A4ED70")]
	public static uint cmin(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x4A4ED90", Offset = "0x4A4ED90", VA = "0x4A4ED90")]
	public static uint cmin(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x4A4EDB0", Offset = "0x4A4EDB0", VA = "0x4A4EDB0")]
	public static float cmin(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x4A4EDF0", Offset = "0x4A4EDF0", VA = "0x4A4EDF0")]
	public static float cmin(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x4A4EE40", Offset = "0x4A4EE40", VA = "0x4A4EE40")]
	public static float cmin(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x4A4EED0", Offset = "0x4A4EED0", VA = "0x4A4EED0")]
	public static double cmin(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x4A4EF10", Offset = "0x4A4EF10", VA = "0x4A4EF10")]
	public static double cmin(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x4A4EF80", Offset = "0x4A4EF80", VA = "0x4A4EF80")]
	public static double cmin(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x4A4F030", Offset = "0x4A4F030", VA = "0x4A4F030")]
	public static int cmax(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x4A4F040", Offset = "0x4A4F040", VA = "0x4A4F040")]
	public static int cmax(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x4A4F060", Offset = "0x4A4F060", VA = "0x4A4F060")]
	public static int cmax(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x4A4F080", Offset = "0x4A4F080", VA = "0x4A4F080")]
	public static uint cmax(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x4A4F090", Offset = "0x4A4F090", VA = "0x4A4F090")]
	public static uint cmax(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x4A4F0B0", Offset = "0x4A4F0B0", VA = "0x4A4F0B0")]
	public static uint cmax(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x4A4F0D0", Offset = "0x4A4F0D0", VA = "0x4A4F0D0")]
	public static float cmax(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x4A4F100", Offset = "0x4A4F100", VA = "0x4A4F100")]
	public static float cmax(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x4A4F140", Offset = "0x4A4F140", VA = "0x4A4F140")]
	public static float cmax(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x4A4F1C0", Offset = "0x4A4F1C0", VA = "0x4A4F1C0")]
	public static double cmax(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x4A4F200", Offset = "0x4A4F200", VA = "0x4A4F200")]
	public static double cmax(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4A4F270", Offset = "0x4A4F270", VA = "0x4A4F270")]
	public static double cmax(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4A4F320", Offset = "0x4A4F320", VA = "0x4A4F320")]
	public static int csum(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4A4F330", Offset = "0x4A4F330", VA = "0x4A4F330")]
	public static int csum(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x4A4F340", Offset = "0x4A4F340", VA = "0x4A4F340")]
	public static int csum(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x4A4F360", Offset = "0x4A4F360", VA = "0x4A4F360")]
	public static uint csum(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4A4F370", Offset = "0x4A4F370", VA = "0x4A4F370")]
	public static uint csum(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4A4F380", Offset = "0x4A4F380", VA = "0x4A4F380")]
	public static uint csum(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x4A4F3A0", Offset = "0x4A4F3A0", VA = "0x4A4F3A0")]
	public static float csum(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4A4F3B0", Offset = "0x4A4F3B0", VA = "0x4A4F3B0")]
	public static float csum(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4A4F3D0", Offset = "0x4A4F3D0", VA = "0x4A4F3D0")]
	public static float csum(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4A4F3F0", Offset = "0x4A4F3F0", VA = "0x4A4F3F0")]
	public static double csum(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x4A4F400", Offset = "0x4A4F400", VA = "0x4A4F400")]
	public static double csum(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4A4F420", Offset = "0x4A4F420", VA = "0x4A4F420")]
	public static double csum(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4A4F450", Offset = "0x4A4F450", VA = "0x4A4F450")]
	public unsafe static int compress(int* output, int index, int4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4A4F4C0", Offset = "0x4A4F4C0", VA = "0x4A4F4C0")]
	public unsafe static int compress(uint* output, int index, uint4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4A4F530", Offset = "0x4A4F530", VA = "0x4A4F530")]
	public unsafe static int compress(float* output, int index, float4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x4A4F5B0", Offset = "0x4A4F5B0", VA = "0x4A4F5B0")]
	public static float f16tof32(uint x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x4A4F610", Offset = "0x4A4F610", VA = "0x4A4F610")]
	public static float2 f16tof32(uint2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4A4F710", Offset = "0x4A4F710", VA = "0x4A4F710")]
	public static float3 f16tof32(uint3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x4A4F870", Offset = "0x4A4F870", VA = "0x4A4F870")]
	public static float4 f16tof32(uint4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4A4FA60", Offset = "0x4A4FA60", VA = "0x4A4FA60")]
	public static uint f32tof16(float x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x4A4FAC0", Offset = "0x4A4FAC0", VA = "0x4A4FAC0")]
	public static uint2 f32tof16(float2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x4A4FB80", Offset = "0x4A4FB80", VA = "0x4A4FB80")]
	public static uint3 f32tof16(float3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4A4FC90", Offset = "0x4A4FC90", VA = "0x4A4FC90")]
	public static uint4 f32tof16(float4 x)
	{
		return default(uint4);
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x4A4FE10", Offset = "0x4A4FE10", VA = "0x4A4FE10")]
	public unsafe static uint hash(void* pBuffer, int numBytes, uint seed = 0u)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x4A50040", Offset = "0x4A50040", VA = "0x4A50040")]
	public static float3 up()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x4A50050", Offset = "0x4A50050", VA = "0x4A50050")]
	public static float3 down()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4A50060", Offset = "0x4A50060", VA = "0x4A50060")]
	public static float3 forward()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x4A50070", Offset = "0x4A50070", VA = "0x4A50070")]
	public static float3 back()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x4A50080", Offset = "0x4A50080", VA = "0x4A50080")]
	public static float3 left()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x4A50090", Offset = "0x4A50090", VA = "0x4A50090")]
	public static float3 right()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x4A500A0", Offset = "0x4A500A0", VA = "0x4A500A0")]
	internal static float4 unpacklo(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x4A500C0", Offset = "0x4A500C0", VA = "0x4A500C0")]
	internal static double4 unpacklo(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x4A500F0", Offset = "0x4A500F0", VA = "0x4A500F0")]
	internal static float4 unpackhi(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000600")]
	[Address(RVA = "0x4A50110", Offset = "0x4A50110", VA = "0x4A50110")]
	internal static double4 unpackhi(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000601")]
	[Address(RVA = "0x4A50140", Offset = "0x4A50140", VA = "0x4A50140")]
	internal static float4 movelh(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000602")]
	[Address(RVA = "0x4A50150", Offset = "0x4A50150", VA = "0x4A50150")]
	internal static double4 movelh(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4A50170", Offset = "0x4A50170", VA = "0x4A50170")]
	internal static float4 movehl(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000604")]
	[Address(RVA = "0x4A50180", Offset = "0x4A50180", VA = "0x4A50180")]
	internal static double4 movehl(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000605")]
	[Address(RVA = "0x4A501A0", Offset = "0x4A501A0", VA = "0x4A501A0")]
	internal static uint fold_to_uint(double x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000606")]
	[Address(RVA = "0x4A501B0", Offset = "0x4A501B0", VA = "0x4A501B0")]
	internal static uint2 fold_to_uint(double2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000607")]
	[Address(RVA = "0x4A501E0", Offset = "0x4A501E0", VA = "0x4A501E0")]
	internal static uint3 fold_to_uint(double3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000608")]
	[Address(RVA = "0x4A50220", Offset = "0x4A50220", VA = "0x4A50220")]
	internal static uint4 fold_to_uint(double4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000609")]
	[Address(RVA = "0x4A50280", Offset = "0x4A50280", VA = "0x4A50280")]
	public static float3x3 float3x3(float4x4 f4x4)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060A")]
	[Address(RVA = "0x4A502E0", Offset = "0x4A502E0", VA = "0x4A502E0")]
	public static float3x3 float3x3(quaternion rotation)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060B")]
	[Address(RVA = "0x4A50310", Offset = "0x4A50310", VA = "0x4A50310")]
	public static float4x4 float4x4(float3x3 rotation, float3 translation)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060C")]
	[Address(RVA = "0x4A50360", Offset = "0x4A50360", VA = "0x4A50360")]
	public static float4x4 float4x4(quaternion rotation, float3 translation)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060D")]
	[Address(RVA = "0x4A50390", Offset = "0x4A50390", VA = "0x4A50390")]
	public static float4x4 float4x4(RigidTransform transform)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060E")]
	[Address(RVA = "0x4A503D0", Offset = "0x4A503D0", VA = "0x4A503D0")]
	public static float3x3 orthonormalize(float3x3 i)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060F")]
	[Address(RVA = "0x4A506E0", Offset = "0x4A506E0", VA = "0x4A506E0")]
	public static float mul(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000610")]
	[Address(RVA = "0x4A506F0", Offset = "0x4A506F0", VA = "0x4A506F0")]
	public static float mul(float2 a, float2 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000611")]
	[Address(RVA = "0x4A50710", Offset = "0x4A50710", VA = "0x4A50710")]
	public static float2 mul(float2 a, float2x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000612")]
	[Address(RVA = "0x4A50740", Offset = "0x4A50740", VA = "0x4A50740")]
	public static float3 mul(float2 a, float2x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000613")]
	[Address(RVA = "0x4A50790", Offset = "0x4A50790", VA = "0x4A50790")]
	public static float4 mul(float2 a, float2x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000614")]
	[Address(RVA = "0x4A507F0", Offset = "0x4A507F0", VA = "0x4A507F0")]
	public static float mul(float3 a, float3 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000615")]
	[Address(RVA = "0x4A50810", Offset = "0x4A50810", VA = "0x4A50810")]
	public static float2 mul(float3 a, float3x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000616")]
	[Address(RVA = "0x4A50860", Offset = "0x4A50860", VA = "0x4A50860")]
	public static float3 mul(float3 a, float3x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000617")]
	[Address(RVA = "0x4A508D0", Offset = "0x4A508D0", VA = "0x4A508D0")]
	public static float4 mul(float3 a, float3x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000618")]
	[Address(RVA = "0x4A50950", Offset = "0x4A50950", VA = "0x4A50950")]
	public static float mul(float4 a, float4 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000619")]
	[Address(RVA = "0x4A50980", Offset = "0x4A50980", VA = "0x4A50980")]
	public static float2 mul(float4 a, float4x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061A")]
	[Address(RVA = "0x4A509E0", Offset = "0x4A509E0", VA = "0x4A509E0")]
	public static float3 mul(float4 a, float4x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061B")]
	[Address(RVA = "0x4A50A70", Offset = "0x4A50A70", VA = "0x4A50A70")]
	public static float4 mul(float4 a, float4x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061C")]
	[Address(RVA = "0x4A50B30", Offset = "0x4A50B30", VA = "0x4A50B30")]
	public static float2 mul(float2x2 a, float2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4A50B50", Offset = "0x4A50B50", VA = "0x4A50B50")]
	public static float2x2 mul(float2x2 a, float2x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061E")]
	[Address(RVA = "0x4A50B80", Offset = "0x4A50B80", VA = "0x4A50B80")]
	public static float2x3 mul(float2x2 a, float2x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061F")]
	[Address(RVA = "0x4A50BF0", Offset = "0x4A50BF0", VA = "0x4A50BF0")]
	public static float2x4 mul(float2x2 a, float2x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000620")]
	[Address(RVA = "0x4A50C80", Offset = "0x4A50C80", VA = "0x4A50C80")]
	public static float2 mul(float2x3 a, float3 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000621")]
	[Address(RVA = "0x4A50CC0", Offset = "0x4A50CC0", VA = "0x4A50CC0")]
	public static float2x2 mul(float2x3 a, float3x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000622")]
	[Address(RVA = "0x4A50D30", Offset = "0x4A50D30", VA = "0x4A50D30")]
	public static float2x3 mul(float2x3 a, float3x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000623")]
	[Address(RVA = "0x4A50DE0", Offset = "0x4A50DE0", VA = "0x4A50DE0")]
	public static float2x4 mul(float2x3 a, float3x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4A50EC0", Offset = "0x4A50EC0", VA = "0x4A50EC0")]
	public static float2 mul(float2x4 a, float4 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000625")]
	[Address(RVA = "0x4A50F10", Offset = "0x4A50F10", VA = "0x4A50F10")]
	public static float2x2 mul(float2x4 a, float4x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000626")]
	[Address(RVA = "0x4A50F90", Offset = "0x4A50F90", VA = "0x4A50F90")]
	public static float2x3 mul(float2x4 a, float4x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000627")]
	[Address(RVA = "0x4A51070", Offset = "0x4A51070", VA = "0x4A51070")]
	public static float2x4 mul(float2x4 a, float4x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4A51190", Offset = "0x4A51190", VA = "0x4A51190")]
	public static float3 mul(float3x2 a, float2 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000629")]
	[Address(RVA = "0x4A511D0", Offset = "0x4A511D0", VA = "0x4A511D0")]
	public static float3x2 mul(float3x2 a, float2x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062A")]
	[Address(RVA = "0x4A51250", Offset = "0x4A51250", VA = "0x4A51250")]
	public static float3x3 mul(float3x2 a, float2x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4A51320", Offset = "0x4A51320", VA = "0x4A51320")]
	public static float3x4 mul(float3x2 a, float2x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062C")]
	[Address(RVA = "0x4A51430", Offset = "0x4A51430", VA = "0x4A51430")]
	public static float3 mul(float3x3 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062D")]
	[Address(RVA = "0x4A51490", Offset = "0x4A51490", VA = "0x4A51490")]
	public static float3x2 mul(float3x3 a, float3x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062E")]
	[Address(RVA = "0x4A51560", Offset = "0x4A51560", VA = "0x4A51560")]
	public static float3x3 mul(float3x3 a, float3x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062F")]
	[Address(RVA = "0x4A51690", Offset = "0x4A51690", VA = "0x4A51690")]
	public static float3x4 mul(float3x3 a, float3x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000630")]
	[Address(RVA = "0x4A51820", Offset = "0x4A51820", VA = "0x4A51820")]
	public static float3 mul(float3x4 a, float4 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000631")]
	[Address(RVA = "0x4A518A0", Offset = "0x4A518A0", VA = "0x4A518A0")]
	public static float3x2 mul(float3x4 a, float4x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000632")]
	[Address(RVA = "0x4A519B0", Offset = "0x4A519B0", VA = "0x4A519B0")]
	public static float3x3 mul(float3x4 a, float4x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000633")]
	[Address(RVA = "0x4A51B50", Offset = "0x4A51B50", VA = "0x4A51B50")]
	public static float3x4 mul(float3x4 a, float4x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000634")]
	[Address(RVA = "0x4A51D60", Offset = "0x4A51D60", VA = "0x4A51D60")]
	public static float4 mul(float4x2 a, float2 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000635")]
	[Address(RVA = "0x4A51DA0", Offset = "0x4A51DA0", VA = "0x4A51DA0")]
	public static float4x2 mul(float4x2 a, float2x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000636")]
	[Address(RVA = "0x4A51E10", Offset = "0x4A51E10", VA = "0x4A51E10")]
	public static float4x3 mul(float4x2 a, float2x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000637")]
	[Address(RVA = "0x4A51ED0", Offset = "0x4A51ED0", VA = "0x4A51ED0")]
	public static float4x4 mul(float4x2 a, float2x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000638")]
	[Address(RVA = "0x4A51FC0", Offset = "0x4A51FC0", VA = "0x4A51FC0")]
	public static float4 mul(float4x3 a, float3 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000639")]
	[Address(RVA = "0x4A52020", Offset = "0x4A52020", VA = "0x4A52020")]
	public static float4x2 mul(float4x3 a, float3x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063A")]
	[Address(RVA = "0x4A520E0", Offset = "0x4A520E0", VA = "0x4A520E0")]
	public static float4x3 mul(float4x3 a, float3x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063B")]
	[Address(RVA = "0x4A521F0", Offset = "0x4A521F0", VA = "0x4A521F0")]
	public static float4x4 mul(float4x3 a, float3x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063C")]
	[Address(RVA = "0x4A52360", Offset = "0x4A52360", VA = "0x4A52360")]
	public static float4 mul(float4x4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063D")]
	[Address(RVA = "0x4A523E0", Offset = "0x4A523E0", VA = "0x4A523E0")]
	public static float4x2 mul(float4x4 a, float4x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063E")]
	[Address(RVA = "0x4A524F0", Offset = "0x4A524F0", VA = "0x4A524F0")]
	public static float4x3 mul(float4x4 a, float4x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063F")]
	[Address(RVA = "0x4A52660", Offset = "0x4A52660", VA = "0x4A52660")]
	public static float4x4 mul(float4x4 a, float4x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000640")]
	[Address(RVA = "0x4A52850", Offset = "0x4A52850", VA = "0x4A52850")]
	public static double mul(double a, double b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000641")]
	[Address(RVA = "0x4A52860", Offset = "0x4A52860", VA = "0x4A52860")]
	public static double mul(double2 a, double2 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000642")]
	[Address(RVA = "0x4A52870", Offset = "0x4A52870", VA = "0x4A52870")]
	public static double2 mul(double2 a, double2x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000643")]
	[Address(RVA = "0x4A528A0", Offset = "0x4A528A0", VA = "0x4A528A0")]
	public static double3 mul(double2 a, double2x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000644")]
	[Address(RVA = "0x4A52900", Offset = "0x4A52900", VA = "0x4A52900")]
	public static double4 mul(double2 a, double2x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000645")]
	[Address(RVA = "0x4A52960", Offset = "0x4A52960", VA = "0x4A52960")]
	public static double mul(double3 a, double3 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000646")]
	[Address(RVA = "0x4A52990", Offset = "0x4A52990", VA = "0x4A52990")]
	public static double2 mul(double3 a, double3x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000647")]
	[Address(RVA = "0x4A529E0", Offset = "0x4A529E0", VA = "0x4A529E0")]
	public static double3 mul(double3 a, double3x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000648")]
	[Address(RVA = "0x4A52A70", Offset = "0x4A52A70", VA = "0x4A52A70")]
	public static double4 mul(double3 a, double3x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4A52B10", Offset = "0x4A52B10", VA = "0x4A52B10")]
	public static double mul(double4 a, double4 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064A")]
	[Address(RVA = "0x4A52B50", Offset = "0x4A52B50", VA = "0x4A52B50")]
	public static double2 mul(double4 a, double4x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4A52BC0", Offset = "0x4A52BC0", VA = "0x4A52BC0")]
	public static double3 mul(double4 a, double4x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064C")]
	[Address(RVA = "0x4A52C80", Offset = "0x4A52C80", VA = "0x4A52C80")]
	public static double4 mul(double4 a, double4x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4A52D60", Offset = "0x4A52D60", VA = "0x4A52D60")]
	public static double2 mul(double2x2 a, double2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064E")]
	[Address(RVA = "0x4A52D90", Offset = "0x4A52D90", VA = "0x4A52D90")]
	public static double2x2 mul(double2x2 a, double2x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064F")]
	[Address(RVA = "0x4A52DF0", Offset = "0x4A52DF0", VA = "0x4A52DF0")]
	public static double2x3 mul(double2x2 a, double2x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000650")]
	[Address(RVA = "0x4A52E70", Offset = "0x4A52E70", VA = "0x4A52E70")]
	public static double2x4 mul(double2x2 a, double2x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000651")]
	[Address(RVA = "0x4A52F20", Offset = "0x4A52F20", VA = "0x4A52F20")]
	public static double2 mul(double2x3 a, double3 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000652")]
	[Address(RVA = "0x4A52F70", Offset = "0x4A52F70", VA = "0x4A52F70")]
	public static double2x2 mul(double2x3 a, double3x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000653")]
	[Address(RVA = "0x4A53000", Offset = "0x4A53000", VA = "0x4A53000")]
	public static double2x3 mul(double2x3 a, double3x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000654")]
	[Address(RVA = "0x4A530C0", Offset = "0x4A530C0", VA = "0x4A530C0")]
	public static double2x4 mul(double2x3 a, double3x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000655")]
	[Address(RVA = "0x4A531C0", Offset = "0x4A531C0", VA = "0x4A531C0")]
	public static double2 mul(double2x4 a, double4 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000656")]
	[Address(RVA = "0x4A53220", Offset = "0x4A53220", VA = "0x4A53220")]
	public static double2x2 mul(double2x4 a, double4x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000657")]
	[Address(RVA = "0x4A532D0", Offset = "0x4A532D0", VA = "0x4A532D0")]
	public static double2x3 mul(double2x4 a, double4x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000658")]
	[Address(RVA = "0x4A533E0", Offset = "0x4A533E0", VA = "0x4A533E0")]
	public static double2x4 mul(double2x4 a, double4x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000659")]
	[Address(RVA = "0x4A53540", Offset = "0x4A53540", VA = "0x4A53540")]
	public static double3 mul(double3x2 a, double2 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065A")]
	[Address(RVA = "0x4A53590", Offset = "0x4A53590", VA = "0x4A53590")]
	public static double3x2 mul(double3x2 a, double2x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065B")]
	[Address(RVA = "0x4A53640", Offset = "0x4A53640", VA = "0x4A53640")]
	public static double3x3 mul(double3x2 a, double2x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065C")]
	[Address(RVA = "0x4A53740", Offset = "0x4A53740", VA = "0x4A53740")]
	public static double3x4 mul(double3x2 a, double2x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065D")]
	[Address(RVA = "0x4A53860", Offset = "0x4A53860", VA = "0x4A53860")]
	public static double3 mul(double3x3 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065E")]
	[Address(RVA = "0x4A538D0", Offset = "0x4A538D0", VA = "0x4A538D0")]
	public static double3x2 mul(double3x3 a, double3x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065F")]
	[Address(RVA = "0x4A539D0", Offset = "0x4A539D0", VA = "0x4A539D0")]
	public static double3x3 mul(double3x3 a, double3x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000660")]
	[Address(RVA = "0x4A53B60", Offset = "0x4A53B60", VA = "0x4A53B60")]
	public static double3x4 mul(double3x3 a, double3x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000661")]
	[Address(RVA = "0x4A53D30", Offset = "0x4A53D30", VA = "0x4A53D30")]
	public static double3 mul(double3x4 a, double4 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000662")]
	[Address(RVA = "0x4A53DD0", Offset = "0x4A53DD0", VA = "0x4A53DD0")]
	public static double3x2 mul(double3x4 a, double4x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000663")]
	[Address(RVA = "0x4A53F30", Offset = "0x4A53F30", VA = "0x4A53F30")]
	public static double3x3 mul(double3x4 a, double4x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000664")]
	[Address(RVA = "0x4A54150", Offset = "0x4A54150", VA = "0x4A54150")]
	public static double3x4 mul(double3x4 a, double4x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000665")]
	[Address(RVA = "0x4A543D0", Offset = "0x4A543D0", VA = "0x4A543D0")]
	public static double4 mul(double4x2 a, double2 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000666")]
	[Address(RVA = "0x4A54410", Offset = "0x4A54410", VA = "0x4A54410")]
	public static double4x2 mul(double4x2 a, double2x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000667")]
	[Address(RVA = "0x4A544B0", Offset = "0x4A544B0", VA = "0x4A544B0")]
	public static double4x3 mul(double4x2 a, double2x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4A54590", Offset = "0x4A54590", VA = "0x4A54590")]
	public static double4x4 mul(double4x2 a, double2x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4A546C0", Offset = "0x4A546C0", VA = "0x4A546C0")]
	public static double4 mul(double4x3 a, double3 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4A54730", Offset = "0x4A54730", VA = "0x4A54730")]
	public static double4x2 mul(double4x3 a, double3x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066B")]
	[Address(RVA = "0x4A54820", Offset = "0x4A54820", VA = "0x4A54820")]
	public static double4x3 mul(double4x3 a, double3x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066C")]
	[Address(RVA = "0x4A54980", Offset = "0x4A54980", VA = "0x4A54980")]
	public static double4x4 mul(double4x3 a, double3x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066D")]
	[Address(RVA = "0x4A54B50", Offset = "0x4A54B50", VA = "0x4A54B50")]
	public static double4 mul(double4x4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4A54BF0", Offset = "0x4A54BF0", VA = "0x4A54BF0")]
	public static double4x2 mul(double4x4 a, double4x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4A54D30", Offset = "0x4A54D30", VA = "0x4A54D30")]
	public static double4x3 mul(double4x4 a, double4x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4A54F10", Offset = "0x4A54F10", VA = "0x4A54F10")]
	public static double4x4 mul(double4x4 a, double4x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000671")]
	[Address(RVA = "0x4A55180", Offset = "0x4A55180", VA = "0x4A55180")]
	public static int mul(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000672")]
	[Address(RVA = "0x4A55190", Offset = "0x4A55190", VA = "0x4A55190")]
	public static int mul(int2 a, int2 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000673")]
	[Address(RVA = "0x4A551B0", Offset = "0x4A551B0", VA = "0x4A551B0")]
	public static int2 mul(int2 a, int2x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000674")]
	[Address(RVA = "0x4A551E0", Offset = "0x4A551E0", VA = "0x4A551E0")]
	public static int3 mul(int2 a, int2x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000675")]
	[Address(RVA = "0x4A55220", Offset = "0x4A55220", VA = "0x4A55220")]
	public static int4 mul(int2 a, int2x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000676")]
	[Address(RVA = "0x4A55280", Offset = "0x4A55280", VA = "0x4A55280")]
	public static int mul(int3 a, int3 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000677")]
	[Address(RVA = "0x4A552A0", Offset = "0x4A552A0", VA = "0x4A552A0")]
	public static int2 mul(int3 a, int3x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4A552E0", Offset = "0x4A552E0", VA = "0x4A552E0")]
	public static int3 mul(int3 a, int3x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000679")]
	[Address(RVA = "0x4A55340", Offset = "0x4A55340", VA = "0x4A55340")]
	public static int4 mul(int3 a, int3x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067A")]
	[Address(RVA = "0x4A553C0", Offset = "0x4A553C0", VA = "0x4A553C0")]
	public static int mul(int4 a, int4 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067B")]
	[Address(RVA = "0x4A553F0", Offset = "0x4A553F0", VA = "0x4A553F0")]
	public static int2 mul(int4 a, int4x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067C")]
	[Address(RVA = "0x4A55450", Offset = "0x4A55450", VA = "0x4A55450")]
	public static int3 mul(int4 a, int4x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067D")]
	[Address(RVA = "0x4A554D0", Offset = "0x4A554D0", VA = "0x4A554D0")]
	public static int4 mul(int4 a, int4x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067E")]
	[Address(RVA = "0x4A55580", Offset = "0x4A55580", VA = "0x4A55580")]
	public static int2 mul(int2x2 a, int2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067F")]
	[Address(RVA = "0x4A555C0", Offset = "0x4A555C0", VA = "0x4A555C0")]
	public static int2x2 mul(int2x2 a, int2x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000680")]
	[Address(RVA = "0x4A55630", Offset = "0x4A55630", VA = "0x4A55630")]
	public static int2x3 mul(int2x2 a, int2x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000681")]
	[Address(RVA = "0x4A55710", Offset = "0x4A55710", VA = "0x4A55710")]
	public static int2x4 mul(int2x2 a, int2x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000682")]
	[Address(RVA = "0x4A55850", Offset = "0x4A55850", VA = "0x4A55850")]
	public static int2 mul(int2x3 a, int3 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000683")]
	[Address(RVA = "0x4A558D0", Offset = "0x4A558D0", VA = "0x4A558D0")]
	public static int2x2 mul(int2x3 a, int3x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000684")]
	[Address(RVA = "0x4A559C0", Offset = "0x4A559C0", VA = "0x4A559C0")]
	public static int2x3 mul(int2x3 a, int3x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000685")]
	[Address(RVA = "0x4A55B50", Offset = "0x4A55B50", VA = "0x4A55B50")]
	public static int2x4 mul(int2x3 a, int3x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000686")]
	[Address(RVA = "0x4A55D70", Offset = "0x4A55D70", VA = "0x4A55D70")]
	public static int2 mul(int2x4 a, int4 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4A55E10", Offset = "0x4A55E10", VA = "0x4A55E10")]
	public static int2x2 mul(int2x4 a, int4x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000688")]
	[Address(RVA = "0x4A55F70", Offset = "0x4A55F70", VA = "0x4A55F70")]
	public static int2x3 mul(int2x4 a, int4x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000689")]
	[Address(RVA = "0x4A561A0", Offset = "0x4A561A0", VA = "0x4A561A0")]
	public static int2x4 mul(int2x4 a, int4x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068A")]
	[Address(RVA = "0x4A564D0", Offset = "0x4A564D0", VA = "0x4A564D0")]
	public static int3 mul(int3x2 a, int2 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068B")]
	[Address(RVA = "0x4A56530", Offset = "0x4A56530", VA = "0x4A56530")]
	public static int3x2 mul(int3x2 a, int2x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068C")]
	[Address(RVA = "0x4A56600", Offset = "0x4A56600", VA = "0x4A56600")]
	public static int3x3 mul(int3x2 a, int2x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068D")]
	[Address(RVA = "0x4A56750", Offset = "0x4A56750", VA = "0x4A56750")]
	public static int3x4 mul(int3x2 a, int2x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068E")]
	[Address(RVA = "0x4A56920", Offset = "0x4A56920", VA = "0x4A56920")]
	public static int3 mul(int3x3 a, int3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068F")]
	[Address(RVA = "0x4A569B0", Offset = "0x4A569B0", VA = "0x4A569B0")]
	public static int3x2 mul(int3x3 a, int3x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000690")]
	[Address(RVA = "0x4A56B00", Offset = "0x4A56B00", VA = "0x4A56B00")]
	public static int3x3 mul(int3x3 a, int3x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000691")]
	[Address(RVA = "0x4A56D20", Offset = "0x4A56D20", VA = "0x4A56D20")]
	public static int3x4 mul(int3x3 a, int3x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000692")]
	[Address(RVA = "0x4A57010", Offset = "0x4A57010", VA = "0x4A57010")]
	public static int3 mul(int3x4 a, int4 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000693")]
	[Address(RVA = "0x4A570E0", Offset = "0x4A570E0", VA = "0x4A570E0")]
	public static int3x2 mul(int3x4 a, int4x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000694")]
	[Address(RVA = "0x4A572B0", Offset = "0x4A572B0", VA = "0x4A572B0")]
	public static int3x3 mul(int3x4 a, int4x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000695")]
	[Address(RVA = "0x4A57590", Offset = "0x4A57590", VA = "0x4A57590")]
	public static int3x4 mul(int3x4 a, int4x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000696")]
	[Address(RVA = "0x4A57990", Offset = "0x4A57990", VA = "0x4A57990")]
	public static int4 mul(int4x2 a, int2 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000697")]
	[Address(RVA = "0x4A57A30", Offset = "0x4A57A30", VA = "0x4A57A30")]
	public static int4x2 mul(int4x2 a, int2x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000698")]
	[Address(RVA = "0x4A57B60", Offset = "0x4A57B60", VA = "0x4A57B60")]
	public static int4x3 mul(int4x2 a, int2x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000699")]
	[Address(RVA = "0x4A57D50", Offset = "0x4A57D50", VA = "0x4A57D50")]
	public static int4x4 mul(int4x2 a, int2x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069A")]
	[Address(RVA = "0x4A58010", Offset = "0x4A58010", VA = "0x4A58010")]
	public static int4 mul(int4x3 a, int3 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069B")]
	[Address(RVA = "0x4A580F0", Offset = "0x4A580F0", VA = "0x4A580F0")]
	public static int4x2 mul(int4x3 a, int3x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069C")]
	[Address(RVA = "0x4A582F0", Offset = "0x4A582F0", VA = "0x4A582F0")]
	public static int4x3 mul(int4x3 a, int3x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069D")]
	[Address(RVA = "0x4A58620", Offset = "0x4A58620", VA = "0x4A58620")]
	public static int4x4 mul(int4x3 a, int3x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069E")]
	[Address(RVA = "0x4A58AB0", Offset = "0x4A58AB0", VA = "0x4A58AB0")]
	public static int4 mul(int4x4 a, int4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069F")]
	[Address(RVA = "0x4A58BF0", Offset = "0x4A58BF0", VA = "0x4A58BF0")]
	public static int4x2 mul(int4x4 a, int4x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x4A58ED0", Offset = "0x4A58ED0", VA = "0x4A58ED0")]
	public static int4x3 mul(int4x4 a, int4x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x4A59360", Offset = "0x4A59360", VA = "0x4A59360")]
	public static int4x4 mul(int4x4 a, int4x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x4A599A0", Offset = "0x4A599A0", VA = "0x4A599A0")]
	public static uint mul(uint a, uint b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x4A599B0", Offset = "0x4A599B0", VA = "0x4A599B0")]
	public static uint mul(uint2 a, uint2 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x4A599D0", Offset = "0x4A599D0", VA = "0x4A599D0")]
	public static uint2 mul(uint2 a, uint2x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x4A59A00", Offset = "0x4A59A00", VA = "0x4A59A00")]
	public static uint3 mul(uint2 a, uint2x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x4A59A40", Offset = "0x4A59A40", VA = "0x4A59A40")]
	public static uint4 mul(uint2 a, uint2x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x4A59AA0", Offset = "0x4A59AA0", VA = "0x4A59AA0")]
	public static uint mul(uint3 a, uint3 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x4A59AC0", Offset = "0x4A59AC0", VA = "0x4A59AC0")]
	public static uint2 mul(uint3 a, uint3x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x4A59B00", Offset = "0x4A59B00", VA = "0x4A59B00")]
	public static uint3 mul(uint3 a, uint3x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x4A59B60", Offset = "0x4A59B60", VA = "0x4A59B60")]
	public static uint4 mul(uint3 a, uint3x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x4A59BE0", Offset = "0x4A59BE0", VA = "0x4A59BE0")]
	public static uint mul(uint4 a, uint4 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x4A59C10", Offset = "0x4A59C10", VA = "0x4A59C10")]
	public static uint2 mul(uint4 a, uint4x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x4A59C70", Offset = "0x4A59C70", VA = "0x4A59C70")]
	public static uint3 mul(uint4 a, uint4x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x4A59CF0", Offset = "0x4A59CF0", VA = "0x4A59CF0")]
	public static uint4 mul(uint4 a, uint4x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x4A59DA0", Offset = "0x4A59DA0", VA = "0x4A59DA0")]
	public static uint2 mul(uint2x2 a, uint2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x4A59DE0", Offset = "0x4A59DE0", VA = "0x4A59DE0")]
	public static uint2x2 mul(uint2x2 a, uint2x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x4A59E50", Offset = "0x4A59E50", VA = "0x4A59E50")]
	public static uint2x3 mul(uint2x2 a, uint2x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x4A59F30", Offset = "0x4A59F30", VA = "0x4A59F30")]
	public static uint2x4 mul(uint2x2 a, uint2x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x4A5A070", Offset = "0x4A5A070", VA = "0x4A5A070")]
	public static uint2 mul(uint2x3 a, uint3 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x4A5A0F0", Offset = "0x4A5A0F0", VA = "0x4A5A0F0")]
	public static uint2x2 mul(uint2x3 a, uint3x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x4A5A1E0", Offset = "0x4A5A1E0", VA = "0x4A5A1E0")]
	public static uint2x3 mul(uint2x3 a, uint3x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x4A5A370", Offset = "0x4A5A370", VA = "0x4A5A370")]
	public static uint2x4 mul(uint2x3 a, uint3x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4A5A590", Offset = "0x4A5A590", VA = "0x4A5A590")]
	public static uint2 mul(uint2x4 a, uint4 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x4A5A630", Offset = "0x4A5A630", VA = "0x4A5A630")]
	public static uint2x2 mul(uint2x4 a, uint4x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x4A5A790", Offset = "0x4A5A790", VA = "0x4A5A790")]
	public static uint2x3 mul(uint2x4 a, uint4x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x4A5A9C0", Offset = "0x4A5A9C0", VA = "0x4A5A9C0")]
	public static uint2x4 mul(uint2x4 a, uint4x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x4A5ACF0", Offset = "0x4A5ACF0", VA = "0x4A5ACF0")]
	public static uint3 mul(uint3x2 a, uint2 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x4A5AD50", Offset = "0x4A5AD50", VA = "0x4A5AD50")]
	public static uint3x2 mul(uint3x2 a, uint2x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x4A5AE20", Offset = "0x4A5AE20", VA = "0x4A5AE20")]
	public static uint3x3 mul(uint3x2 a, uint2x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x4A5AF70", Offset = "0x4A5AF70", VA = "0x4A5AF70")]
	public static uint3x4 mul(uint3x2 a, uint2x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x4A5B140", Offset = "0x4A5B140", VA = "0x4A5B140")]
	public static uint3 mul(uint3x3 a, uint3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x4A5B1D0", Offset = "0x4A5B1D0", VA = "0x4A5B1D0")]
	public static uint3x2 mul(uint3x3 a, uint3x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x4A5B320", Offset = "0x4A5B320", VA = "0x4A5B320")]
	public static uint3x3 mul(uint3x3 a, uint3x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x4A5B540", Offset = "0x4A5B540", VA = "0x4A5B540")]
	public static uint3x4 mul(uint3x3 a, uint3x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x4A5B830", Offset = "0x4A5B830", VA = "0x4A5B830")]
	public static uint3 mul(uint3x4 a, uint4 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x4A5B900", Offset = "0x4A5B900", VA = "0x4A5B900")]
	public static uint3x2 mul(uint3x4 a, uint4x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x4A5BAD0", Offset = "0x4A5BAD0", VA = "0x4A5BAD0")]
	public static uint3x3 mul(uint3x4 a, uint4x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x4A5BDB0", Offset = "0x4A5BDB0", VA = "0x4A5BDB0")]
	public static uint3x4 mul(uint3x4 a, uint4x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4A5C1B0", Offset = "0x4A5C1B0", VA = "0x4A5C1B0")]
	public static uint4 mul(uint4x2 a, uint2 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x4A5C250", Offset = "0x4A5C250", VA = "0x4A5C250")]
	public static uint4x2 mul(uint4x2 a, uint2x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x4A5C380", Offset = "0x4A5C380", VA = "0x4A5C380")]
	public static uint4x3 mul(uint4x2 a, uint2x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x4A5C570", Offset = "0x4A5C570", VA = "0x4A5C570")]
	public static uint4x4 mul(uint4x2 a, uint2x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x4A5C830", Offset = "0x4A5C830", VA = "0x4A5C830")]
	public static uint4 mul(uint4x3 a, uint3 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x4A5C910", Offset = "0x4A5C910", VA = "0x4A5C910")]
	public static uint4x2 mul(uint4x3 a, uint3x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x4A5CB10", Offset = "0x4A5CB10", VA = "0x4A5CB10")]
	public static uint4x3 mul(uint4x3 a, uint3x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x4A5CE40", Offset = "0x4A5CE40", VA = "0x4A5CE40")]
	public static uint4x4 mul(uint4x3 a, uint3x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x4A5D2D0", Offset = "0x4A5D2D0", VA = "0x4A5D2D0")]
	public static uint4 mul(uint4x4 a, uint4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x4A5D410", Offset = "0x4A5D410", VA = "0x4A5D410")]
	public static uint4x2 mul(uint4x4 a, uint4x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x4A5D6F0", Offset = "0x4A5D6F0", VA = "0x4A5D6F0")]
	public static uint4x3 mul(uint4x4 a, uint4x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x4A5DB80", Offset = "0x4A5DB80", VA = "0x4A5DB80")]
	public static uint4x4 mul(uint4x4 a, uint4x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x4A5E1C0", Offset = "0x4A5E1C0", VA = "0x4A5E1C0")]
	public static quaternion quaternion(float x, float y, float z, float w)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x4A5E1D0", Offset = "0x4A5E1D0", VA = "0x4A5E1D0")]
	public static quaternion quaternion(float4 value)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x4A5E1E0", Offset = "0x4A5E1E0", VA = "0x4A5E1E0")]
	public static quaternion quaternion(float3x3 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x4A5E230", Offset = "0x4A5E230", VA = "0x4A5E230")]
	public static quaternion quaternion(float4x4 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x4A5E290", Offset = "0x4A5E290", VA = "0x4A5E290")]
	public static quaternion conjugate(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x4A5E2B0", Offset = "0x4A5E2B0", VA = "0x4A5E2B0")]
	public static quaternion inverse(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x4A5E320", Offset = "0x4A5E320", VA = "0x4A5E320")]
	public static float dot(quaternion a, quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x4A5E350", Offset = "0x4A5E350", VA = "0x4A5E350")]
	public static float length(quaternion q)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x4A5E400", Offset = "0x4A5E400", VA = "0x4A5E400")]
	public static float lengthsq(quaternion q)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x4A5E430", Offset = "0x4A5E430", VA = "0x4A5E430")]
	public static quaternion normalize(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x4A5E520", Offset = "0x4A5E520", VA = "0x4A5E520")]
	public static quaternion normalizesafe(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x4A5E6C0", Offset = "0x4A5E6C0", VA = "0x4A5E6C0")]
	public static quaternion normalizesafe(quaternion q, quaternion defaultvalue)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x4A5E800", Offset = "0x4A5E800", VA = "0x4A5E800")]
	public static quaternion unitexp(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x4A5E9B0", Offset = "0x4A5E9B0", VA = "0x4A5E9B0")]
	public static quaternion exp(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x4A5EC10", Offset = "0x4A5EC10", VA = "0x4A5EC10")]
	public static quaternion unitlog(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x4A5EDE0", Offset = "0x4A5EDE0", VA = "0x4A5EDE0")]
	public static quaternion log(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x4A5F090", Offset = "0x4A5F090", VA = "0x4A5F090")]
	public static quaternion mul(quaternion a, quaternion b)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x4A5F150", Offset = "0x4A5F150", VA = "0x4A5F150")]
	public static float3 mul(quaternion q, float3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x4A5F200", Offset = "0x4A5F200", VA = "0x4A5F200")]
	public static float3 rotate(quaternion q, float3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x4A5F2B0", Offset = "0x4A5F2B0", VA = "0x4A5F2B0")]
	public static quaternion nlerp(quaternion q1, quaternion q2, float t)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x4A5F3F0", Offset = "0x4A5F3F0", VA = "0x4A5F3F0")]
	public static quaternion slerp(quaternion q1, quaternion q2, float t)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x4A5F830", Offset = "0x4A5F830", VA = "0x4A5F830")]
	public static uint hash(quaternion q)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x4A5F890", Offset = "0x4A5F890", VA = "0x4A5F890")]
	public static uint4 hashwide(quaternion q)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x4A5F8F0", Offset = "0x4A5F8F0", VA = "0x4A5F8F0")]
	public static float3 forward(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4A5F990", Offset = "0x4A5F990", VA = "0x4A5F990")]
	public static RigidTransform RigidTransform(quaternion rot, float3 pos)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4A5F9B0", Offset = "0x4A5F9B0", VA = "0x4A5F9B0")]
	public static RigidTransform RigidTransform(float3x3 rotation, float3 translation)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x4A5FA30", Offset = "0x4A5FA30", VA = "0x4A5FA30")]
	public static RigidTransform RigidTransform(float4x4 transform)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x4A5FAF0", Offset = "0x4A5FAF0", VA = "0x4A5FAF0")]
	public static RigidTransform inverse(RigidTransform t)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x4A5FC40", Offset = "0x4A5FC40", VA = "0x4A5FC40")]
	public static RigidTransform mul(RigidTransform a, RigidTransform b)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x4A5FDF0", Offset = "0x4A5FDF0", VA = "0x4A5FDF0")]
	public static float4 mul(RigidTransform a, float4 pos)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x4A5FED0", Offset = "0x4A5FED0", VA = "0x4A5FED0")]
	public static float3 rotate(RigidTransform a, float3 dir)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x4A5FF90", Offset = "0x4A5FF90", VA = "0x4A5FF90")]
	public static float3 transform(RigidTransform a, float3 pos)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x4A60070", Offset = "0x4A60070", VA = "0x4A60070")]
	public static uint hash(RigidTransform t)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x4A60120", Offset = "0x4A60120", VA = "0x4A60120")]
	public static uint4 hashwide(RigidTransform t)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x4A60230", Offset = "0x4A60230", VA = "0x4A60230")]
	public static uint2 uint2(uint x, uint y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x4A60240", Offset = "0x4A60240", VA = "0x4A60240")]
	public static uint2 uint2(uint2 xy)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x4A60250", Offset = "0x4A60250", VA = "0x4A60250")]
	public static uint2 uint2(uint v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4A60260", Offset = "0x4A60260", VA = "0x4A60260")]
	public static uint2 uint2(bool v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x4A60270", Offset = "0x4A60270", VA = "0x4A60270")]
	public static uint2 uint2(bool2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x4A60290", Offset = "0x4A60290", VA = "0x4A60290")]
	public static uint2 uint2(int v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x4A602A0", Offset = "0x4A602A0", VA = "0x4A602A0")]
	public static uint2 uint2(int2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x4A602B0", Offset = "0x4A602B0", VA = "0x4A602B0")]
	public static uint2 uint2(float v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x4A602D0", Offset = "0x4A602D0", VA = "0x4A602D0")]
	public static uint2 uint2(float2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x4A60300", Offset = "0x4A60300", VA = "0x4A60300")]
	public static uint2 uint2(double v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x4A60320", Offset = "0x4A60320", VA = "0x4A60320")]
	public static uint2 uint2(double2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000700")]
	[Address(RVA = "0x4A60350", Offset = "0x4A60350", VA = "0x4A60350")]
	public static uint hash(uint2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000701")]
	[Address(RVA = "0x4A60380", Offset = "0x4A60380", VA = "0x4A60380")]
	public static uint2 hashwide(uint2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000702")]
	[Address(RVA = "0x4A603C0", Offset = "0x4A603C0", VA = "0x4A603C0")]
	public static uint shuffle(uint2 left, uint2 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000703")]
	[Address(RVA = "0x4A603D0", Offset = "0x4A603D0", VA = "0x4A603D0")]
	public static uint2 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000704")]
	[Address(RVA = "0x4A60410", Offset = "0x4A60410", VA = "0x4A60410")]
	public static uint3 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000705")]
	[Address(RVA = "0x4A60480", Offset = "0x4A60480", VA = "0x4A60480")]
	public static uint4 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000706")]
	[Address(RVA = "0x4A60510", Offset = "0x4A60510", VA = "0x4A60510")]
	internal static uint select_shuffle_component(uint2 a, uint2 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000707")]
	[Address(RVA = "0x4A605E0", Offset = "0x4A605E0", VA = "0x4A605E0")]
	public static uint2x2 uint2x2(uint2 c0, uint2 c1)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000708")]
	[Address(RVA = "0x4A605F0", Offset = "0x4A605F0", VA = "0x4A605F0")]
	public static uint2x2 uint2x2(uint m00, uint m01, uint m10, uint m11)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000709")]
	[Address(RVA = "0x4A60610", Offset = "0x4A60610", VA = "0x4A60610")]
	public static uint2x2 uint2x2(uint v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070A")]
	[Address(RVA = "0x4A60620", Offset = "0x4A60620", VA = "0x4A60620")]
	public static uint2x2 uint2x2(bool v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070B")]
	[Address(RVA = "0x4A60640", Offset = "0x4A60640", VA = "0x4A60640")]
	public static uint2x2 uint2x2(bool2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070C")]
	[Address(RVA = "0x4A60690", Offset = "0x4A60690", VA = "0x4A60690")]
	public static uint2x2 uint2x2(int v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070D")]
	[Address(RVA = "0x4A606A0", Offset = "0x4A606A0", VA = "0x4A606A0")]
	public static uint2x2 uint2x2(int2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070E")]
	[Address(RVA = "0x4A606B0", Offset = "0x4A606B0", VA = "0x4A606B0")]
	public static uint2x2 uint2x2(float v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070F")]
	[Address(RVA = "0x4A606D0", Offset = "0x4A606D0", VA = "0x4A606D0")]
	public static uint2x2 uint2x2(float2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000710")]
	[Address(RVA = "0x4A60730", Offset = "0x4A60730", VA = "0x4A60730")]
	public static uint2x2 uint2x2(double v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000711")]
	[Address(RVA = "0x4A60760", Offset = "0x4A60760", VA = "0x4A60760")]
	public static uint2x2 uint2x2(double2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000712")]
	[Address(RVA = "0x4A607D0", Offset = "0x4A607D0", VA = "0x4A607D0")]
	public static uint2x2 transpose(uint2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000713")]
	[Address(RVA = "0x4A607F0", Offset = "0x4A607F0", VA = "0x4A607F0")]
	public static uint hash(uint2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000714")]
	[Address(RVA = "0x4A60840", Offset = "0x4A60840", VA = "0x4A60840")]
	public static uint2 hashwide(uint2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000715")]
	[Address(RVA = "0x4A608A0", Offset = "0x4A608A0", VA = "0x4A608A0")]
	public static uint2x3 uint2x3(uint2 c0, uint2 c1, uint2 c2)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000716")]
	[Address(RVA = "0x4A608B0", Offset = "0x4A608B0", VA = "0x4A608B0")]
	public static uint2x3 uint2x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000717")]
	[Address(RVA = "0x4A608E0", Offset = "0x4A608E0", VA = "0x4A608E0")]
	public static uint2x3 uint2x3(uint v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000718")]
	[Address(RVA = "0x4A60900", Offset = "0x4A60900", VA = "0x4A60900")]
	public static uint2x3 uint2x3(bool v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000719")]
	[Address(RVA = "0x4A60930", Offset = "0x4A60930", VA = "0x4A60930")]
	public static uint2x3 uint2x3(bool2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071A")]
	[Address(RVA = "0x4A609B0", Offset = "0x4A609B0", VA = "0x4A609B0")]
	public static uint2x3 uint2x3(int v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071B")]
	[Address(RVA = "0x4A609D0", Offset = "0x4A609D0", VA = "0x4A609D0")]
	public static uint2x3 uint2x3(int2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071C")]
	[Address(RVA = "0x4A609F0", Offset = "0x4A609F0", VA = "0x4A609F0")]
	public static uint2x3 uint2x3(float v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071D")]
	[Address(RVA = "0x4A60A20", Offset = "0x4A60A20", VA = "0x4A60A20")]
	public static uint2x3 uint2x3(float2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071E")]
	[Address(RVA = "0x4A60AD0", Offset = "0x4A60AD0", VA = "0x4A60AD0")]
	public static uint2x3 uint2x3(double v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071F")]
	[Address(RVA = "0x4A60B00", Offset = "0x4A60B00", VA = "0x4A60B00")]
	public static uint2x3 uint2x3(double2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000720")]
	[Address(RVA = "0x4A60BB0", Offset = "0x4A60BB0", VA = "0x4A60BB0")]
	public static uint3x2 transpose(uint2x3 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000721")]
	[Address(RVA = "0x4A60BE0", Offset = "0x4A60BE0", VA = "0x4A60BE0")]
	public static uint hash(uint2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000722")]
	[Address(RVA = "0x4A60C70", Offset = "0x4A60C70", VA = "0x4A60C70")]
	public static uint2 hashwide(uint2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000723")]
	[Address(RVA = "0x4A60D00", Offset = "0x4A60D00", VA = "0x4A60D00")]
	public static uint2x4 uint2x4(uint2 c0, uint2 c1, uint2 c2, uint2 c3)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000724")]
	[Address(RVA = "0x4A60D20", Offset = "0x4A60D20", VA = "0x4A60D20")]
	public static uint2x4 uint2x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000725")]
	[Address(RVA = "0x4A60D70", Offset = "0x4A60D70", VA = "0x4A60D70")]
	public static uint2x4 uint2x4(uint v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000726")]
	[Address(RVA = "0x4A60D90", Offset = "0x4A60D90", VA = "0x4A60D90")]
	public static uint2x4 uint2x4(bool v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000727")]
	[Address(RVA = "0x4A60DC0", Offset = "0x4A60DC0", VA = "0x4A60DC0")]
	public static uint2x4 uint2x4(bool2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000728")]
	[Address(RVA = "0x4A60E40", Offset = "0x4A60E40", VA = "0x4A60E40")]
	public static uint2x4 uint2x4(int v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000729")]
	[Address(RVA = "0x4A60E60", Offset = "0x4A60E60", VA = "0x4A60E60")]
	public static uint2x4 uint2x4(int2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072A")]
	[Address(RVA = "0x4A60E80", Offset = "0x4A60E80", VA = "0x4A60E80")]
	public static uint2x4 uint2x4(float v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072B")]
	[Address(RVA = "0x4A60EB0", Offset = "0x4A60EB0", VA = "0x4A60EB0")]
	public static uint2x4 uint2x4(float2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072C")]
	[Address(RVA = "0x4A60F90", Offset = "0x4A60F90", VA = "0x4A60F90")]
	public static uint2x4 uint2x4(double v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072D")]
	[Address(RVA = "0x4A60FC0", Offset = "0x4A60FC0", VA = "0x4A60FC0")]
	public static uint2x4 uint2x4(double2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072E")]
	[Address(RVA = "0x4A610B0", Offset = "0x4A610B0", VA = "0x4A610B0")]
	public static uint4x2 transpose(uint2x4 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072F")]
	[Address(RVA = "0x4A61100", Offset = "0x4A61100", VA = "0x4A61100")]
	public static uint hash(uint2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000730")]
	[Address(RVA = "0x4A611B0", Offset = "0x4A611B0", VA = "0x4A611B0")]
	public static uint2 hashwide(uint2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000731")]
	[Address(RVA = "0x4A61270", Offset = "0x4A61270", VA = "0x4A61270")]
	public static uint3 uint3(uint x, uint y, uint z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000732")]
	[Address(RVA = "0x4A61280", Offset = "0x4A61280", VA = "0x4A61280")]
	public static uint3 uint3(uint x, uint2 yz)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000733")]
	[Address(RVA = "0x4A612A0", Offset = "0x4A612A0", VA = "0x4A612A0")]
	public static uint3 uint3(uint2 xy, uint z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000734")]
	[Address(RVA = "0x4A612B0", Offset = "0x4A612B0", VA = "0x4A612B0")]
	public static uint3 uint3(uint3 xyz)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000735")]
	[Address(RVA = "0x4A612C0", Offset = "0x4A612C0", VA = "0x4A612C0")]
	public static uint3 uint3(uint v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000736")]
	[Address(RVA = "0x4A612D0", Offset = "0x4A612D0", VA = "0x4A612D0")]
	public static uint3 uint3(bool v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000737")]
	[Address(RVA = "0x4A612E0", Offset = "0x4A612E0", VA = "0x4A612E0")]
	public static uint3 uint3(bool3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000738")]
	[Address(RVA = "0x4A61310", Offset = "0x4A61310", VA = "0x4A61310")]
	public static uint3 uint3(int v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000739")]
	[Address(RVA = "0x4A61320", Offset = "0x4A61320", VA = "0x4A61320")]
	public static uint3 uint3(int3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073A")]
	[Address(RVA = "0x4A61330", Offset = "0x4A61330", VA = "0x4A61330")]
	public static uint3 uint3(float v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073B")]
	[Address(RVA = "0x4A61350", Offset = "0x4A61350", VA = "0x4A61350")]
	public static uint3 uint3(float3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073C")]
	[Address(RVA = "0x4A61390", Offset = "0x4A61390", VA = "0x4A61390")]
	public static uint3 uint3(double v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073D")]
	[Address(RVA = "0x4A613B0", Offset = "0x4A613B0", VA = "0x4A613B0")]
	public static uint3 uint3(double3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073E")]
	[Address(RVA = "0x4A61400", Offset = "0x4A61400", VA = "0x4A61400")]
	public static uint hash(uint3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073F")]
	[Address(RVA = "0x4A61440", Offset = "0x4A61440", VA = "0x4A61440")]
	public static uint3 hashwide(uint3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000740")]
	[Address(RVA = "0x4A61480", Offset = "0x4A61480", VA = "0x4A61480")]
	public static uint shuffle(uint3 left, uint3 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000741")]
	[Address(RVA = "0x4A61490", Offset = "0x4A61490", VA = "0x4A61490")]
	public static uint2 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000742")]
	[Address(RVA = "0x4A614F0", Offset = "0x4A614F0", VA = "0x4A614F0")]
	public static uint3 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000743")]
	[Address(RVA = "0x4A61570", Offset = "0x4A61570", VA = "0x4A61570")]
	public static uint4 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000744")]
	[Address(RVA = "0x4A61620", Offset = "0x4A61620", VA = "0x4A61620")]
	internal static uint select_shuffle_component(uint3 a, uint3 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000745")]
	[Address(RVA = "0x4A616F0", Offset = "0x4A616F0", VA = "0x4A616F0")]
	public static uint3x2 uint3x2(uint3 c0, uint3 c1)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000746")]
	[Address(RVA = "0x4A61710", Offset = "0x4A61710", VA = "0x4A61710")]
	public static uint3x2 uint3x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000747")]
	[Address(RVA = "0x4A61730", Offset = "0x4A61730", VA = "0x4A61730")]
	public static uint3x2 uint3x2(uint v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4A61750", Offset = "0x4A61750", VA = "0x4A61750")]
	public static uint3x2 uint3x2(bool v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000749")]
	[Address(RVA = "0x4A61780", Offset = "0x4A61780", VA = "0x4A61780")]
	public static uint3x2 uint3x2(bool3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074A")]
	[Address(RVA = "0x4A617E0", Offset = "0x4A617E0", VA = "0x4A617E0")]
	public static uint3x2 uint3x2(int v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074B")]
	[Address(RVA = "0x4A61800", Offset = "0x4A61800", VA = "0x4A61800")]
	public static uint3x2 uint3x2(int3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074C")]
	[Address(RVA = "0x4A61830", Offset = "0x4A61830", VA = "0x4A61830")]
	public static uint3x2 uint3x2(float v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074D")]
	[Address(RVA = "0x4A61860", Offset = "0x4A61860", VA = "0x4A61860")]
	public static uint3x2 uint3x2(float3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074E")]
	[Address(RVA = "0x4A61900", Offset = "0x4A61900", VA = "0x4A61900")]
	public static uint3x2 uint3x2(double v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074F")]
	[Address(RVA = "0x4A61930", Offset = "0x4A61930", VA = "0x4A61930")]
	public static uint3x2 uint3x2(double3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000750")]
	[Address(RVA = "0x4A619E0", Offset = "0x4A619E0", VA = "0x4A619E0")]
	public static uint2x3 transpose(uint3x2 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000751")]
	[Address(RVA = "0x4A61A10", Offset = "0x4A61A10", VA = "0x4A61A10")]
	public static uint hash(uint3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000752")]
	[Address(RVA = "0x4A61A80", Offset = "0x4A61A80", VA = "0x4A61A80")]
	public static uint3 hashwide(uint3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000753")]
	[Address(RVA = "0x4A61B10", Offset = "0x4A61B10", VA = "0x4A61B10")]
	public static uint3x3 uint3x3(uint3 c0, uint3 c1, uint3 c2)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000754")]
	[Address(RVA = "0x4A61B40", Offset = "0x4A61B40", VA = "0x4A61B40")]
	public static uint3x3 uint3x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000755")]
	[Address(RVA = "0x4A61B80", Offset = "0x4A61B80", VA = "0x4A61B80")]
	public static uint3x3 uint3x3(uint v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000756")]
	[Address(RVA = "0x4A61BB0", Offset = "0x4A61BB0", VA = "0x4A61BB0")]
	public static uint3x3 uint3x3(bool v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000757")]
	[Address(RVA = "0x4A61BE0", Offset = "0x4A61BE0", VA = "0x4A61BE0")]
	public static uint3x3 uint3x3(bool3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000758")]
	[Address(RVA = "0x4A61C70", Offset = "0x4A61C70", VA = "0x4A61C70")]
	public static uint3x3 uint3x3(int v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000759")]
	[Address(RVA = "0x4A61CA0", Offset = "0x4A61CA0", VA = "0x4A61CA0")]
	public static uint3x3 uint3x3(int3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075A")]
	[Address(RVA = "0x4A61CE0", Offset = "0x4A61CE0", VA = "0x4A61CE0")]
	public static uint3x3 uint3x3(float v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075B")]
	[Address(RVA = "0x4A61D20", Offset = "0x4A61D20", VA = "0x4A61D20")]
	public static uint3x3 uint3x3(float3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075C")]
	[Address(RVA = "0x4A61E10", Offset = "0x4A61E10", VA = "0x4A61E10")]
	public static uint3x3 uint3x3(double v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075D")]
	[Address(RVA = "0x4A61E50", Offset = "0x4A61E50", VA = "0x4A61E50")]
	public static uint3x3 uint3x3(double3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075E")]
	[Address(RVA = "0x4A61F50", Offset = "0x4A61F50", VA = "0x4A61F50")]
	public static uint3x3 transpose(uint3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075F")]
	[Address(RVA = "0x4A61FA0", Offset = "0x4A61FA0", VA = "0x4A61FA0")]
	public static uint hash(uint3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000760")]
	[Address(RVA = "0x4A62050", Offset = "0x4A62050", VA = "0x4A62050")]
	public static uint3 hashwide(uint3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000761")]
	[Address(RVA = "0x4A62120", Offset = "0x4A62120", VA = "0x4A62120")]
	public static uint3x4 uint3x4(uint3 c0, uint3 c1, uint3 c2, uint3 c3)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000762")]
	[Address(RVA = "0x4A62160", Offset = "0x4A62160", VA = "0x4A62160")]
	public static uint3x4 uint3x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000763")]
	[Address(RVA = "0x4A621C0", Offset = "0x4A621C0", VA = "0x4A621C0")]
	public static uint3x4 uint3x4(uint v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000764")]
	[Address(RVA = "0x4A621F0", Offset = "0x4A621F0", VA = "0x4A621F0")]
	public static uint3x4 uint3x4(bool v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000765")]
	[Address(RVA = "0x4A62230", Offset = "0x4A62230", VA = "0x4A62230")]
	public static uint3x4 uint3x4(bool3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000766")]
	[Address(RVA = "0x4A622E0", Offset = "0x4A622E0", VA = "0x4A622E0")]
	public static uint3x4 uint3x4(int v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000767")]
	[Address(RVA = "0x4A62310", Offset = "0x4A62310", VA = "0x4A62310")]
	public static uint3x4 uint3x4(int3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000768")]
	[Address(RVA = "0x4A62360", Offset = "0x4A62360", VA = "0x4A62360")]
	public static uint3x4 uint3x4(float v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000769")]
	[Address(RVA = "0x4A623A0", Offset = "0x4A623A0", VA = "0x4A623A0")]
	public static uint3x4 uint3x4(float3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076A")]
	[Address(RVA = "0x4A624F0", Offset = "0x4A624F0", VA = "0x4A624F0")]
	public static uint3x4 uint3x4(double v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076B")]
	[Address(RVA = "0x4A62530", Offset = "0x4A62530", VA = "0x4A62530")]
	public static uint3x4 uint3x4(double3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076C")]
	[Address(RVA = "0x4A62690", Offset = "0x4A62690", VA = "0x4A62690")]
	public static uint4x3 transpose(uint3x4 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076D")]
	[Address(RVA = "0x4A62700", Offset = "0x4A62700", VA = "0x4A62700")]
	public static uint hash(uint3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076E")]
	[Address(RVA = "0x4A627F0", Offset = "0x4A627F0", VA = "0x4A627F0")]
	public static uint3 hashwide(uint3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076F")]
	[Address(RVA = "0x4A628F0", Offset = "0x4A628F0", VA = "0x4A628F0")]
	public static uint4 uint4(uint x, uint y, uint z, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000770")]
	[Address(RVA = "0x4A62910", Offset = "0x4A62910", VA = "0x4A62910")]
	public static uint4 uint4(uint x, uint y, uint2 zw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000771")]
	[Address(RVA = "0x4A62920", Offset = "0x4A62920", VA = "0x4A62920")]
	public static uint4 uint4(uint x, uint2 yz, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000772")]
	[Address(RVA = "0x4A62930", Offset = "0x4A62930", VA = "0x4A62930")]
	public static uint4 uint4(uint x, uint3 yzw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000773")]
	[Address(RVA = "0x4A62940", Offset = "0x4A62940", VA = "0x4A62940")]
	public static uint4 uint4(uint2 xy, uint z, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000774")]
	[Address(RVA = "0x4A62950", Offset = "0x4A62950", VA = "0x4A62950")]
	public static uint4 uint4(uint2 xy, uint2 zw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000775")]
	[Address(RVA = "0x4A62960", Offset = "0x4A62960", VA = "0x4A62960")]
	public static uint4 uint4(uint3 xyz, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000776")]
	[Address(RVA = "0x4A62970", Offset = "0x4A62970", VA = "0x4A62970")]
	public static uint4 uint4(uint4 xyzw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000777")]
	[Address(RVA = "0x4A62980", Offset = "0x4A62980", VA = "0x4A62980")]
	public static uint4 uint4(uint v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000778")]
	[Address(RVA = "0x4A62990", Offset = "0x4A62990", VA = "0x4A62990")]
	public static uint4 uint4(bool v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000779")]
	[Address(RVA = "0x4A629A0", Offset = "0x4A629A0", VA = "0x4A629A0")]
	public static uint4 uint4(bool4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077A")]
	[Address(RVA = "0x4A629D0", Offset = "0x4A629D0", VA = "0x4A629D0")]
	public static uint4 uint4(int v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077B")]
	[Address(RVA = "0x4A629E0", Offset = "0x4A629E0", VA = "0x4A629E0")]
	public static uint4 uint4(int4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077C")]
	[Address(RVA = "0x4A629F0", Offset = "0x4A629F0", VA = "0x4A629F0")]
	public static uint4 uint4(float v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077D")]
	[Address(RVA = "0x4A62A10", Offset = "0x4A62A10", VA = "0x4A62A10")]
	public static uint4 uint4(float4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077E")]
	[Address(RVA = "0x4A62A70", Offset = "0x4A62A70", VA = "0x4A62A70")]
	public static uint4 uint4(double v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077F")]
	[Address(RVA = "0x4A62AA0", Offset = "0x4A62AA0", VA = "0x4A62AA0")]
	public static uint4 uint4(double4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000780")]
	[Address(RVA = "0x4A62B10", Offset = "0x4A62B10", VA = "0x4A62B10")]
	public static uint hash(uint4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000781")]
	[Address(RVA = "0x4A62B60", Offset = "0x4A62B60", VA = "0x4A62B60")]
	public static uint4 hashwide(uint4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000782")]
	[Address(RVA = "0x4A62BC0", Offset = "0x4A62BC0", VA = "0x4A62BC0")]
	public static uint shuffle(uint4 left, uint4 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000783")]
	[Address(RVA = "0x4A62BD0", Offset = "0x4A62BD0", VA = "0x4A62BD0")]
	public static uint2 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000784")]
	[Address(RVA = "0x4A62C30", Offset = "0x4A62C30", VA = "0x4A62C30")]
	public static uint3 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000785")]
	[Address(RVA = "0x4A62CB0", Offset = "0x4A62CB0", VA = "0x4A62CB0")]
	public static uint4 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000786")]
	[Address(RVA = "0x4A62D60", Offset = "0x4A62D60", VA = "0x4A62D60")]
	internal static uint select_shuffle_component(uint4 a, uint4 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000787")]
	[Address(RVA = "0x4A62E50", Offset = "0x4A62E50", VA = "0x4A62E50")]
	public static uint4x2 uint4x2(uint4 c0, uint4 c1)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000788")]
	[Address(RVA = "0x4A62E70", Offset = "0x4A62E70", VA = "0x4A62E70")]
	public static uint4x2 uint4x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21, uint m30, uint m31)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000789")]
	[Address(RVA = "0x4A62EA0", Offset = "0x4A62EA0", VA = "0x4A62EA0")]
	public static uint4x2 uint4x2(uint v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078A")]
	[Address(RVA = "0x4A62EC0", Offset = "0x4A62EC0", VA = "0x4A62EC0")]
	public static uint4x2 uint4x2(bool v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078B")]
	[Address(RVA = "0x4A62EF0", Offset = "0x4A62EF0", VA = "0x4A62EF0")]
	public static uint4x2 uint4x2(bool4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078C")]
	[Address(RVA = "0x4A62F70", Offset = "0x4A62F70", VA = "0x4A62F70")]
	public static uint4x2 uint4x2(int v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078D")]
	[Address(RVA = "0x4A62F90", Offset = "0x4A62F90", VA = "0x4A62F90")]
	public static uint4x2 uint4x2(int4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078E")]
	[Address(RVA = "0x4A62FB0", Offset = "0x4A62FB0", VA = "0x4A62FB0")]
	public static uint4x2 uint4x2(float v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078F")]
	[Address(RVA = "0x4A62FE0", Offset = "0x4A62FE0", VA = "0x4A62FE0")]
	public static uint4x2 uint4x2(float4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000790")]
	[Address(RVA = "0x4A630C0", Offset = "0x4A630C0", VA = "0x4A630C0")]
	public static uint4x2 uint4x2(double v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000791")]
	[Address(RVA = "0x4A630F0", Offset = "0x4A630F0", VA = "0x4A630F0")]
	public static uint4x2 uint4x2(double4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000792")]
	[Address(RVA = "0x4A631E0", Offset = "0x4A631E0", VA = "0x4A631E0")]
	public static uint2x4 transpose(uint4x2 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000793")]
	[Address(RVA = "0x4A63210", Offset = "0x4A63210", VA = "0x4A63210")]
	public static uint hash(uint4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000794")]
	[Address(RVA = "0x4A632C0", Offset = "0x4A632C0", VA = "0x4A632C0")]
	public static uint4 hashwide(uint4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000795")]
	[Address(RVA = "0x4A63380", Offset = "0x4A63380", VA = "0x4A63380")]
	public static uint4x3 uint4x3(uint4 c0, uint4 c1, uint4 c2)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000796")]
	[Address(RVA = "0x4A633A0", Offset = "0x4A633A0", VA = "0x4A633A0")]
	public static uint4x3 uint4x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22, uint m30, uint m31, uint m32)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000797")]
	[Address(RVA = "0x4A63400", Offset = "0x4A63400", VA = "0x4A63400")]
	public static uint4x3 uint4x3(uint v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000798")]
	[Address(RVA = "0x4A63430", Offset = "0x4A63430", VA = "0x4A63430")]
	public static uint4x3 uint4x3(bool v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000799")]
	[Address(RVA = "0x4A63460", Offset = "0x4A63460", VA = "0x4A63460")]
	public static uint4x3 uint4x3(bool4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079A")]
	[Address(RVA = "0x4A63510", Offset = "0x4A63510", VA = "0x4A63510")]
	public static uint4x3 uint4x3(int v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079B")]
	[Address(RVA = "0x4A63540", Offset = "0x4A63540", VA = "0x4A63540")]
	public static uint4x3 uint4x3(int4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079C")]
	[Address(RVA = "0x4A63560", Offset = "0x4A63560", VA = "0x4A63560")]
	public static uint4x3 uint4x3(float v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079D")]
	[Address(RVA = "0x4A635A0", Offset = "0x4A635A0", VA = "0x4A635A0")]
	public static uint4x3 uint4x3(float4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079E")]
	[Address(RVA = "0x4A636F0", Offset = "0x4A636F0", VA = "0x4A636F0")]
	public static uint4x3 uint4x3(double v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079F")]
	[Address(RVA = "0x4A63730", Offset = "0x4A63730", VA = "0x4A63730")]
	public static uint4x3 uint4x3(double4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x4A63890", Offset = "0x4A63890", VA = "0x4A63890")]
	public static uint3x4 transpose(uint4x3 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x4A63900", Offset = "0x4A63900", VA = "0x4A63900")]
	public static uint hash(uint4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x4A63A20", Offset = "0x4A63A20", VA = "0x4A63A20")]
	public static uint4 hashwide(uint4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x4A63B40", Offset = "0x4A63B40", VA = "0x4A63B40")]
	public static uint4x4 uint4x4(uint4 c0, uint4 c1, uint4 c2, uint4 c3)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x4A63B70", Offset = "0x4A63B70", VA = "0x4A63B70")]
	public static uint4x4 uint4x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23, uint m30, uint m31, uint m32, uint m33)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x4A63BE0", Offset = "0x4A63BE0", VA = "0x4A63BE0")]
	public static uint4x4 uint4x4(uint v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x4A63C10", Offset = "0x4A63C10", VA = "0x4A63C10")]
	public static uint4x4 uint4x4(bool v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x4A63C50", Offset = "0x4A63C50", VA = "0x4A63C50")]
	public static uint4x4 uint4x4(bool4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x4A63D30", Offset = "0x4A63D30", VA = "0x4A63D30")]
	public static uint4x4 uint4x4(int v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x4A63D60", Offset = "0x4A63D60", VA = "0x4A63D60")]
	public static uint4x4 uint4x4(int4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x4A63D90", Offset = "0x4A63D90", VA = "0x4A63D90")]
	public static uint4x4 uint4x4(float v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x4A63DD0", Offset = "0x4A63DD0", VA = "0x4A63DD0")]
	public static uint4x4 uint4x4(float4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x4A63F90", Offset = "0x4A63F90", VA = "0x4A63F90")]
	public static uint4x4 uint4x4(double v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x4A63FD0", Offset = "0x4A63FD0", VA = "0x4A63FD0")]
	public static uint4x4 uint4x4(double4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x4A641B0", Offset = "0x4A641B0", VA = "0x4A641B0")]
	public static uint4x4 transpose(uint4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x4A64230", Offset = "0x4A64230", VA = "0x4A64230")]
	public static uint hash(uint4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x4A643A0", Offset = "0x4A643A0", VA = "0x4A643A0")]
	public static uint4 hashwide(uint4x4 v)
	{
		return default(uint4);
	}
}
