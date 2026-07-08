using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Token(Token = "0x200000A")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public static class math
{
	[Token(Token = "0x200000B")]
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

	[Token(Token = "0x200000C")]
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
	[Token(Token = "0x200000D")]
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
	[Token(Token = "0x200000E")]
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
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x46FAE60", Offset = "0x46FAE60", VA = "0x46FAE60")]
	public static bool2 bool2(bool x, bool y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x46FAE70", Offset = "0x46FAE70", VA = "0x46FAE70")]
	public static bool2 bool2(bool2 xy)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x46FAE80", Offset = "0x46FAE80", VA = "0x46FAE80")]
	public static bool2 bool2(bool v)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x46FAE90", Offset = "0x46FAE90", VA = "0x46FAE90")]
	public static uint hash(bool2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x46FAEC0", Offset = "0x46FAEC0", VA = "0x46FAEC0")]
	public static uint2 hashwide(bool2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x46FAF00", Offset = "0x46FAF00", VA = "0x46FAF00")]
	public static bool shuffle(bool2 left, bool2 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x46FAF10", Offset = "0x46FAF10", VA = "0x46FAF10")]
	public static bool2 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006C")]
	[Address(RVA = "0x46FAF50", Offset = "0x46FAF50", VA = "0x46FAF50")]
	public static bool3 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x46FAFB0", Offset = "0x46FAFB0", VA = "0x46FAFB0")]
	public static bool4 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006E")]
	[Address(RVA = "0x46FB030", Offset = "0x46FB030", VA = "0x46FB030")]
	internal static bool select_shuffle_component(bool2 a, bool2 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x46FB100", Offset = "0x46FB100", VA = "0x46FB100")]
	public static bool2x2 bool2x2(bool2 c0, bool2 c1)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x46FB110", Offset = "0x46FB110", VA = "0x46FB110")]
	public static bool2x2 bool2x2(bool m00, bool m01, bool m10, bool m11)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x46FB130", Offset = "0x46FB130", VA = "0x46FB130")]
	public static bool2x2 bool2x2(bool v)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x46FB140", Offset = "0x46FB140", VA = "0x46FB140")]
	public static bool2x2 transpose(bool2x2 v)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x46FB160", Offset = "0x46FB160", VA = "0x46FB160")]
	public static uint hash(bool2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x46FB1E0", Offset = "0x46FB1E0", VA = "0x46FB1E0")]
	public static uint2 hashwide(bool2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x46FB260", Offset = "0x46FB260", VA = "0x46FB260")]
	public static bool2x3 bool2x3(bool2 c0, bool2 c1, bool2 c2)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x46FB280", Offset = "0x46FB280", VA = "0x46FB280")]
	public static bool2x3 bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x46FB2B0", Offset = "0x46FB2B0", VA = "0x46FB2B0")]
	public static bool2x3 bool2x3(bool v)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x46FB2D0", Offset = "0x46FB2D0", VA = "0x46FB2D0")]
	public static bool3x2 transpose(bool2x3 v)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x46FB330", Offset = "0x46FB330", VA = "0x46FB330")]
	public static uint hash(bool2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x46FB400", Offset = "0x46FB400", VA = "0x46FB400")]
	public static uint2 hashwide(bool2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x46FB4E0", Offset = "0x46FB4E0", VA = "0x46FB4E0")]
	public static bool2x4 bool2x4(bool2 c0, bool2 c1, bool2 c2, bool2 c3)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x46FB500", Offset = "0x46FB500", VA = "0x46FB500")]
	public static bool2x4 bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x46FB550", Offset = "0x46FB550", VA = "0x46FB550")]
	public static bool2x4 bool2x4(bool v)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x46FB580", Offset = "0x46FB580", VA = "0x46FB580")]
	public static bool4x2 transpose(bool2x4 v)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x46FB5E0", Offset = "0x46FB5E0", VA = "0x46FB5E0")]
	public static uint hash(bool2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x46FB700", Offset = "0x46FB700", VA = "0x46FB700")]
	public static uint2 hashwide(bool2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x46FB830", Offset = "0x46FB830", VA = "0x46FB830")]
	public static bool3 bool3(bool x, bool y, bool z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x46FB840", Offset = "0x46FB840", VA = "0x46FB840")]
	public static bool3 bool3(bool x, bool2 yz)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x46FB860", Offset = "0x46FB860", VA = "0x46FB860")]
	public static bool3 bool3(bool2 xy, bool z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x46FB880", Offset = "0x46FB880", VA = "0x46FB880")]
	public static bool3 bool3(bool3 xyz)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x46FB890", Offset = "0x46FB890", VA = "0x46FB890")]
	public static bool3 bool3(bool v)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x46FB8A0", Offset = "0x46FB8A0", VA = "0x46FB8A0")]
	public static uint hash(bool3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x46FB8E0", Offset = "0x46FB8E0", VA = "0x46FB8E0")]
	public static uint3 hashwide(bool3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x46FB930", Offset = "0x46FB930", VA = "0x46FB930")]
	public static bool shuffle(bool3 left, bool3 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x46FB940", Offset = "0x46FB940", VA = "0x46FB940")]
	public static bool2 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x46FB980", Offset = "0x46FB980", VA = "0x46FB980")]
	public static bool3 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x46FB9E0", Offset = "0x46FB9E0", VA = "0x46FB9E0")]
	public static bool4 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x46FBA60", Offset = "0x46FBA60", VA = "0x46FBA60")]
	internal static bool select_shuffle_component(bool3 a, bool3 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x46FBB40", Offset = "0x46FBB40", VA = "0x46FBB40")]
	public static bool3x2 bool3x2(bool3 c0, bool3 c1)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x46FBB50", Offset = "0x46FBB50", VA = "0x46FBB50")]
	public static bool3x2 bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x46FBB80", Offset = "0x46FBB80", VA = "0x46FBB80")]
	public static bool3x2 bool3x2(bool v)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x46FBBA0", Offset = "0x46FBBA0", VA = "0x46FBBA0")]
	public static bool2x3 transpose(bool3x2 v)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x46FBBF0", Offset = "0x46FBBF0", VA = "0x46FBBF0")]
	public static uint hash(bool3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x46FBCB0", Offset = "0x46FBCB0", VA = "0x46FBCB0")]
	public static uint3 hashwide(bool3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x46FBD70", Offset = "0x46FBD70", VA = "0x46FBD70")]
	public static bool3x3 bool3x3(bool3 c0, bool3 c1, bool3 c2)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x46FBDA0", Offset = "0x46FBDA0", VA = "0x46FBDA0")]
	public static bool3x3 bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x46FBDF0", Offset = "0x46FBDF0", VA = "0x46FBDF0")]
	public static bool3x3 bool3x3(bool v)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x46FBE20", Offset = "0x46FBE20", VA = "0x46FBE20")]
	public static bool3x3 transpose(bool3x3 v)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x46FBEA0", Offset = "0x46FBEA0", VA = "0x46FBEA0")]
	public static uint hash(bool3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x46FBFD0", Offset = "0x46FBFD0", VA = "0x46FBFD0")]
	public static uint3 hashwide(bool3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x46FC100", Offset = "0x46FC100", VA = "0x46FC100")]
	public static bool3x4 bool3x4(bool3 c0, bool3 c1, bool3 c2, bool3 c3)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x46FC140", Offset = "0x46FC140", VA = "0x46FC140")]
	public static bool3x4 bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x46FC1C0", Offset = "0x46FC1C0", VA = "0x46FC1C0")]
	public static bool3x4 bool3x4(bool v)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x46FC200", Offset = "0x46FC200", VA = "0x46FC200")]
	public static bool4x3 transpose(bool3x4 v)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x46FC2A0", Offset = "0x46FC2A0", VA = "0x46FC2A0")]
	public static uint hash(bool3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x46FC430", Offset = "0x46FC430", VA = "0x46FC430")]
	public static uint3 hashwide(bool3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x46FC5C0", Offset = "0x46FC5C0", VA = "0x46FC5C0")]
	public static bool4 bool4(bool x, bool y, bool z, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x46FC5E0", Offset = "0x46FC5E0", VA = "0x46FC5E0")]
	public static bool4 bool4(bool x, bool y, bool2 zw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x46FC600", Offset = "0x46FC600", VA = "0x46FC600")]
	public static bool4 bool4(bool x, bool2 yz, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x46FC620", Offset = "0x46FC620", VA = "0x46FC620")]
	public static bool4 bool4(bool x, bool3 yzw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x46FC640", Offset = "0x46FC640", VA = "0x46FC640")]
	public static bool4 bool4(bool2 xy, bool z, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x46FC660", Offset = "0x46FC660", VA = "0x46FC660")]
	public static bool4 bool4(bool2 xy, bool2 zw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x46FC680", Offset = "0x46FC680", VA = "0x46FC680")]
	public static bool4 bool4(bool3 xyz, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x46FC690", Offset = "0x46FC690", VA = "0x46FC690")]
	public static bool4 bool4(bool4 xyzw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x46FC6A0", Offset = "0x46FC6A0", VA = "0x46FC6A0")]
	public static bool4 bool4(bool v)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x46FC6B0", Offset = "0x46FC6B0", VA = "0x46FC6B0")]
	public static uint hash(bool4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x46FC700", Offset = "0x46FC700", VA = "0x46FC700")]
	public static uint4 hashwide(bool4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x46FC770", Offset = "0x46FC770", VA = "0x46FC770")]
	public static bool shuffle(bool4 left, bool4 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x46FC780", Offset = "0x46FC780", VA = "0x46FC780")]
	public static bool2 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x46FC7C0", Offset = "0x46FC7C0", VA = "0x46FC7C0")]
	public static bool3 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x46FC820", Offset = "0x46FC820", VA = "0x46FC820")]
	public static bool4 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x46FC8A0", Offset = "0x46FC8A0", VA = "0x46FC8A0")]
	internal static bool select_shuffle_component(bool4 a, bool4 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x46FC990", Offset = "0x46FC990", VA = "0x46FC990")]
	public static bool4x2 bool4x2(bool4 c0, bool4 c1)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x46FC9A0", Offset = "0x46FC9A0", VA = "0x46FC9A0")]
	public static bool4x2 bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x46FC9E0", Offset = "0x46FC9E0", VA = "0x46FC9E0")]
	public static bool4x2 bool4x2(bool v)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x46FCA00", Offset = "0x46FCA00", VA = "0x46FCA00")]
	public static bool2x4 transpose(bool4x2 v)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x46FCA70", Offset = "0x46FCA70", VA = "0x46FCA70")]
	public static uint hash(bool4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x46FCB70", Offset = "0x46FCB70", VA = "0x46FCB70")]
	public static uint4 hashwide(bool4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x46FCC80", Offset = "0x46FCC80", VA = "0x46FCC80")]
	public static bool4x3 bool4x3(bool4 c0, bool4 c1, bool4 c2)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x46FCC90", Offset = "0x46FCC90", VA = "0x46FCC90")]
	public static bool4x3 bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x46FCD00", Offset = "0x46FCD00", VA = "0x46FCD00")]
	public static bool4x3 bool4x3(bool v)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x46FCD20", Offset = "0x46FCD20", VA = "0x46FCD20")]
	public static bool3x4 transpose(bool4x3 v)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x46FCDD0", Offset = "0x46FCDD0", VA = "0x46FCDD0")]
	public static uint hash(bool4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x46FCF70", Offset = "0x46FCF70", VA = "0x46FCF70")]
	public static uint4 hashwide(bool4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x46FD100", Offset = "0x46FD100", VA = "0x46FD100")]
	public static bool4x4 bool4x4(bool4 c0, bool4 c1, bool4 c2, bool4 c3)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x46FD120", Offset = "0x46FD120", VA = "0x46FD120")]
	public static bool4x4 bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31, bool m32, bool m33)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x46FD220", Offset = "0x46FD220", VA = "0x46FD220")]
	public static bool4x4 bool4x4(bool v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x46FD240", Offset = "0x46FD240", VA = "0x46FD240")]
	public static bool4x4 transpose(bool4x4 v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x46FD320", Offset = "0x46FD320", VA = "0x46FD320")]
	public static uint hash(bool4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x46FD550", Offset = "0x46FD550", VA = "0x46FD550")]
	public static uint4 hashwide(bool4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x46FD780", Offset = "0x46FD780", VA = "0x46FD780")]
	public static double2 double2(double x, double y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x46FD790", Offset = "0x46FD790", VA = "0x46FD790")]
	public static double2 double2(double2 xy)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x46FD7A0", Offset = "0x46FD7A0", VA = "0x46FD7A0")]
	public static double2 double2(double v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x46FD7B0", Offset = "0x46FD7B0", VA = "0x46FD7B0")]
	public static double2 double2(bool v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x46FD7D0", Offset = "0x46FD7D0", VA = "0x46FD7D0")]
	public static double2 double2(bool2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x46FD800", Offset = "0x46FD800", VA = "0x46FD800")]
	public static double2 double2(int v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x46FD810", Offset = "0x46FD810", VA = "0x46FD810")]
	public static double2 double2(int2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x46FD820", Offset = "0x46FD820", VA = "0x46FD820")]
	public static double2 double2(uint v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x46FD830", Offset = "0x46FD830", VA = "0x46FD830")]
	public static double2 double2(uint2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x46FD850", Offset = "0x46FD850", VA = "0x46FD850")]
	public static double2 double2(half v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x46FD8C0", Offset = "0x46FD8C0", VA = "0x46FD8C0")]
	public static double2 double2(half2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x46FD980", Offset = "0x46FD980", VA = "0x46FD980")]
	public static double2 double2(float v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x46FD990", Offset = "0x46FD990", VA = "0x46FD990")]
	public static double2 double2(float2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x46FD9A0", Offset = "0x46FD9A0", VA = "0x46FD9A0")]
	public static uint hash(double2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x46FD9F0", Offset = "0x46FD9F0", VA = "0x46FD9F0")]
	public static uint2 hashwide(double2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x46FDA40", Offset = "0x46FDA40", VA = "0x46FDA40")]
	public static double shuffle(double2 left, double2 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x46FDA50", Offset = "0x46FDA50", VA = "0x46FDA50")]
	public static double2 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x46FDAB0", Offset = "0x46FDAB0", VA = "0x46FDAB0")]
	public static double3 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x46FDB60", Offset = "0x46FDB60", VA = "0x46FDB60")]
	public static double4 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x46FDC40", Offset = "0x46FDC40", VA = "0x46FDC40")]
	internal static double select_shuffle_component(double2 a, double2 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x46FDD00", Offset = "0x46FDD00", VA = "0x46FDD00")]
	public static double2x2 double2x2(double2 c0, double2 c1)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x46FDD20", Offset = "0x46FDD20", VA = "0x46FDD20")]
	public static double2x2 double2x2(double m00, double m01, double m10, double m11)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x46FDD40", Offset = "0x46FDD40", VA = "0x46FDD40")]
	public static double2x2 double2x2(double v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x46FDD60", Offset = "0x46FDD60", VA = "0x46FDD60")]
	public static double2x2 double2x2(bool v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x46FDD90", Offset = "0x46FDD90", VA = "0x46FDD90")]
	public static double2x2 double2x2(bool2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x46FDE00", Offset = "0x46FDE00", VA = "0x46FDE00")]
	public static double2x2 double2x2(int v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x46FDE20", Offset = "0x46FDE20", VA = "0x46FDE20")]
	public static double2x2 double2x2(int2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x46FDE60", Offset = "0x46FDE60", VA = "0x46FDE60")]
	public static double2x2 double2x2(uint v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x46FDE80", Offset = "0x46FDE80", VA = "0x46FDE80")]
	public static double2x2 double2x2(uint2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x46FDEC0", Offset = "0x46FDEC0", VA = "0x46FDEC0")]
	public static double2x2 double2x2(float v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x46FDEE0", Offset = "0x46FDEE0", VA = "0x46FDEE0")]
	public static double2x2 double2x2(float2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x46FDF00", Offset = "0x46FDF00", VA = "0x46FDF00")]
	public static double2x2 transpose(double2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x46FDF30", Offset = "0x46FDF30", VA = "0x46FDF30")]
	public static double2x2 inverse(double2x2 m)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x46FDF90", Offset = "0x46FDF90", VA = "0x46FDF90")]
	public static double determinant(double2x2 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x46FDFB0", Offset = "0x46FDFB0", VA = "0x46FDFB0")]
	public static uint hash(double2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x46FE040", Offset = "0x46FE040", VA = "0x46FE040")]
	public static uint2 hashwide(double2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x46FE0E0", Offset = "0x46FE0E0", VA = "0x46FE0E0")]
	public static double2x3 double2x3(double2 c0, double2 c1, double2 c2)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x46FE110", Offset = "0x46FE110", VA = "0x46FE110")]
	public static double2x3 double2x3(double m00, double m01, double m02, double m10, double m11, double m12)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x46FE140", Offset = "0x46FE140", VA = "0x46FE140")]
	public static double2x3 double2x3(double v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x46FE170", Offset = "0x46FE170", VA = "0x46FE170")]
	public static double2x3 double2x3(bool v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x46FE1B0", Offset = "0x46FE1B0", VA = "0x46FE1B0")]
	public static double2x3 double2x3(bool2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x46FE250", Offset = "0x46FE250", VA = "0x46FE250")]
	public static double2x3 double2x3(int v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x46FE280", Offset = "0x46FE280", VA = "0x46FE280")]
	public static double2x3 double2x3(int2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x46FE2E0", Offset = "0x46FE2E0", VA = "0x46FE2E0")]
	public static double2x3 double2x3(uint v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x46FE310", Offset = "0x46FE310", VA = "0x46FE310")]
	public static double2x3 double2x3(uint2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x46FE380", Offset = "0x46FE380", VA = "0x46FE380")]
	public static double2x3 double2x3(float v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x46FE3B0", Offset = "0x46FE3B0", VA = "0x46FE3B0")]
	public static double2x3 double2x3(float2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x46FE3D0", Offset = "0x46FE3D0", VA = "0x46FE3D0")]
	public static double3x2 transpose(double2x3 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x46FE410", Offset = "0x46FE410", VA = "0x46FE410")]
	public static uint hash(double2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x46FE4F0", Offset = "0x46FE4F0", VA = "0x46FE4F0")]
	public static uint2 hashwide(double2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x46FE5E0", Offset = "0x46FE5E0", VA = "0x46FE5E0")]
	public static double2x4 double2x4(double2 c0, double2 c1, double2 c2, double2 c3)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x46FE610", Offset = "0x46FE610", VA = "0x46FE610")]
	public static double2x4 double2x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x46FE640", Offset = "0x46FE640", VA = "0x46FE640")]
	public static double2x4 double2x4(double v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x46FE670", Offset = "0x46FE670", VA = "0x46FE670")]
	public static double2x4 double2x4(bool v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x46FE6B0", Offset = "0x46FE6B0", VA = "0x46FE6B0")]
	public static double2x4 double2x4(bool2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x46FE780", Offset = "0x46FE780", VA = "0x46FE780")]
	public static double2x4 double2x4(int v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x46FE7B0", Offset = "0x46FE7B0", VA = "0x46FE7B0")]
	public static double2x4 double2x4(int2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x46FE840", Offset = "0x46FE840", VA = "0x46FE840")]
	public static double2x4 double2x4(uint v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x46FE880", Offset = "0x46FE880", VA = "0x46FE880")]
	public static double2x4 double2x4(uint2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x46FE920", Offset = "0x46FE920", VA = "0x46FE920")]
	public static double2x4 double2x4(float v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x46FE950", Offset = "0x46FE950", VA = "0x46FE950")]
	public static double2x4 double2x4(float2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x46FE980", Offset = "0x46FE980", VA = "0x46FE980")]
	public static double4x2 transpose(double2x4 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x46FE9D0", Offset = "0x46FE9D0", VA = "0x46FE9D0")]
	public static uint hash(double2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000100")]
	[Address(RVA = "0x46FEAF0", Offset = "0x46FEAF0", VA = "0x46FEAF0")]
	public static uint2 hashwide(double2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000101")]
	[Address(RVA = "0x46FEC20", Offset = "0x46FEC20", VA = "0x46FEC20")]
	public static double3 double3(double x, double y, double z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000102")]
	[Address(RVA = "0x46FEC40", Offset = "0x46FEC40", VA = "0x46FEC40")]
	public static double3 double3(double x, double2 yz)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000103")]
	[Address(RVA = "0x46FEC60", Offset = "0x46FEC60", VA = "0x46FEC60")]
	public static double3 double3(double2 xy, double z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000104")]
	[Address(RVA = "0x46FEC80", Offset = "0x46FEC80", VA = "0x46FEC80")]
	public static double3 double3(double3 xyz)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000105")]
	[Address(RVA = "0x46FECA0", Offset = "0x46FECA0", VA = "0x46FECA0")]
	public static double3 double3(double v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000106")]
	[Address(RVA = "0x46FECC0", Offset = "0x46FECC0", VA = "0x46FECC0")]
	public static double3 double3(bool v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000107")]
	[Address(RVA = "0x46FECF0", Offset = "0x46FECF0", VA = "0x46FECF0")]
	public static double3 double3(bool3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000108")]
	[Address(RVA = "0x46FED60", Offset = "0x46FED60", VA = "0x46FED60")]
	public static double3 double3(int v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000109")]
	[Address(RVA = "0x46FED80", Offset = "0x46FED80", VA = "0x46FED80")]
	public static double3 double3(int3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010A")]
	[Address(RVA = "0x46FEDB0", Offset = "0x46FEDB0", VA = "0x46FEDB0")]
	public static double3 double3(uint v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010B")]
	[Address(RVA = "0x46FEDD0", Offset = "0x46FEDD0", VA = "0x46FEDD0")]
	public static double3 double3(uint3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010C")]
	[Address(RVA = "0x46FEE00", Offset = "0x46FEE00", VA = "0x46FEE00")]
	public static double3 double3(half v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010D")]
	[Address(RVA = "0x46FEE80", Offset = "0x46FEE80", VA = "0x46FEE80")]
	public static double3 double3(half3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010E")]
	[Address(RVA = "0x46FEFC0", Offset = "0x46FEFC0", VA = "0x46FEFC0")]
	public static double3 double3(float v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010F")]
	[Address(RVA = "0x46FEFE0", Offset = "0x46FEFE0", VA = "0x46FEFE0")]
	public static double3 double3(float3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000110")]
	[Address(RVA = "0x46FF000", Offset = "0x46FF000", VA = "0x46FF000")]
	public static uint hash(double3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000111")]
	[Address(RVA = "0x46FF060", Offset = "0x46FF060", VA = "0x46FF060")]
	public static uint3 hashwide(double3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x46FF0D0", Offset = "0x46FF0D0", VA = "0x46FF0D0")]
	public static double shuffle(double3 left, double3 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x46FF0E0", Offset = "0x46FF0E0", VA = "0x46FF0E0")]
	public static double2 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000114")]
	[Address(RVA = "0x46FF160", Offset = "0x46FF160", VA = "0x46FF160")]
	public static double3 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x46FF240", Offset = "0x46FF240", VA = "0x46FF240")]
	public static double4 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x46FF380", Offset = "0x46FF380", VA = "0x46FF380")]
	internal static double select_shuffle_component(double3 a, double3 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x46FF450", Offset = "0x46FF450", VA = "0x46FF450")]
	public static double3x2 double3x2(double3 c0, double3 c1)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000118")]
	[Address(RVA = "0x46FF480", Offset = "0x46FF480", VA = "0x46FF480")]
	public static double3x2 double3x2(double m00, double m01, double m10, double m11, double m20, double m21)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000119")]
	[Address(RVA = "0x46FF4B0", Offset = "0x46FF4B0", VA = "0x46FF4B0")]
	public static double3x2 double3x2(double v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x46FF4E0", Offset = "0x46FF4E0", VA = "0x46FF4E0")]
	public static double3x2 double3x2(bool v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x46FF520", Offset = "0x46FF520", VA = "0x46FF520")]
	public static double3x2 double3x2(bool3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011C")]
	[Address(RVA = "0x46FF600", Offset = "0x46FF600", VA = "0x46FF600")]
	public static double3x2 double3x2(int v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011D")]
	[Address(RVA = "0x46FF630", Offset = "0x46FF630", VA = "0x46FF630")]
	public static double3x2 double3x2(int3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011E")]
	[Address(RVA = "0x46FF690", Offset = "0x46FF690", VA = "0x46FF690")]
	public static double3x2 double3x2(uint v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011F")]
	[Address(RVA = "0x46FF6C0", Offset = "0x46FF6C0", VA = "0x46FF6C0")]
	public static double3x2 double3x2(uint3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000120")]
	[Address(RVA = "0x46FF730", Offset = "0x46FF730", VA = "0x46FF730")]
	public static double3x2 double3x2(float v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000121")]
	[Address(RVA = "0x46FF760", Offset = "0x46FF760", VA = "0x46FF760")]
	public static double3x2 double3x2(float3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000122")]
	[Address(RVA = "0x46FF7A0", Offset = "0x46FF7A0", VA = "0x46FF7A0")]
	public static double2x3 transpose(double3x2 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000123")]
	[Address(RVA = "0x46FF7E0", Offset = "0x46FF7E0", VA = "0x46FF7E0")]
	public static uint hash(double3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000124")]
	[Address(RVA = "0x46FF8A0", Offset = "0x46FF8A0", VA = "0x46FF8A0")]
	public static uint3 hashwide(double3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000125")]
	[Address(RVA = "0x46FF970", Offset = "0x46FF970", VA = "0x46FF970")]
	public static double3x3 double3x3(double3 c0, double3 c1, double3 c2)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000126")]
	[Address(RVA = "0x46FF9B0", Offset = "0x46FF9B0", VA = "0x46FF9B0")]
	public static double3x3 double3x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000127")]
	[Address(RVA = "0x46FF9F0", Offset = "0x46FF9F0", VA = "0x46FF9F0")]
	public static double3x3 double3x3(double v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000128")]
	[Address(RVA = "0x46FFA20", Offset = "0x46FFA20", VA = "0x46FFA20")]
	public static double3x3 double3x3(bool v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000129")]
	[Address(RVA = "0x46FFA70", Offset = "0x46FFA70", VA = "0x46FFA70")]
	public static double3x3 double3x3(bool3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012A")]
	[Address(RVA = "0x46FFBC0", Offset = "0x46FFBC0", VA = "0x46FFBC0")]
	public static double3x3 double3x3(int v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012B")]
	[Address(RVA = "0x46FFC00", Offset = "0x46FFC00", VA = "0x46FFC00")]
	public static double3x3 double3x3(int3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012C")]
	[Address(RVA = "0x46FFC90", Offset = "0x46FFC90", VA = "0x46FFC90")]
	public static double3x3 double3x3(uint v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012D")]
	[Address(RVA = "0x46FFCD0", Offset = "0x46FFCD0", VA = "0x46FFCD0")]
	public static double3x3 double3x3(uint3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012E")]
	[Address(RVA = "0x46FFD70", Offset = "0x46FFD70", VA = "0x46FFD70")]
	public static double3x3 double3x3(float v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012F")]
	[Address(RVA = "0x46FFDB0", Offset = "0x46FFDB0", VA = "0x46FFDB0")]
	public static double3x3 double3x3(float3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000130")]
	[Address(RVA = "0x46FFE10", Offset = "0x46FFE10", VA = "0x46FFE10")]
	public static double3x3 transpose(double3x3 v)
	{
		return default(double3x3);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x46FFE70", Offset = "0x46FFE70", VA = "0x46FFE70")]
	public static double3x3 inverse(double3x3 m)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000132")]
	[Address(RVA = "0x46FFFC0", Offset = "0x46FFFC0", VA = "0x46FFFC0")]
	public static double determinant(double3x3 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4700040", Offset = "0x4700040", VA = "0x4700040")]
	public static uint hash(double3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4700170", Offset = "0x4700170", VA = "0x4700170")]
	public static uint3 hashwide(double3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000135")]
	[Address(RVA = "0x47002A0", Offset = "0x47002A0", VA = "0x47002A0")]
	public static double3x4 double3x4(double3 c0, double3 c1, double3 c2, double3 c3)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000136")]
	[Address(RVA = "0x47002F0", Offset = "0x47002F0", VA = "0x47002F0")]
	public static double3x4 double3x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4700350", Offset = "0x4700350", VA = "0x4700350")]
	public static double3x4 double3x4(double v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4700390", Offset = "0x4700390", VA = "0x4700390")]
	public static double3x4 double3x4(bool v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x47003E0", Offset = "0x47003E0", VA = "0x47003E0")]
	public static double3x4 double3x4(bool3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4700590", Offset = "0x4700590", VA = "0x4700590")]
	public static double3x4 double3x4(int v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013B")]
	[Address(RVA = "0x47005E0", Offset = "0x47005E0", VA = "0x47005E0")]
	public static double3x4 double3x4(int3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4700690", Offset = "0x4700690", VA = "0x4700690")]
	public static double3x4 double3x4(uint v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x47006E0", Offset = "0x47006E0", VA = "0x47006E0")]
	public static double3x4 double3x4(uint3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013E")]
	[Address(RVA = "0x47007C0", Offset = "0x47007C0", VA = "0x47007C0")]
	public static double3x4 double3x4(float v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4700810", Offset = "0x4700810", VA = "0x4700810")]
	public static double3x4 double3x4(float3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000140")]
	[Address(RVA = "0x4700880", Offset = "0x4700880", VA = "0x4700880")]
	public static double4x3 transpose(double3x4 v)
	{
		return default(double4x3);
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x4700900", Offset = "0x4700900", VA = "0x4700900")]
	public static double3x4 fastinverse(double3x4 m)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000142")]
	[Address(RVA = "0x47009F0", Offset = "0x47009F0", VA = "0x47009F0")]
	public static uint hash(double3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000143")]
	[Address(RVA = "0x4700B80", Offset = "0x4700B80", VA = "0x4700B80")]
	public static uint3 hashwide(double3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4700D20", Offset = "0x4700D20", VA = "0x4700D20")]
	public static double4 double4(double x, double y, double z, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4700D40", Offset = "0x4700D40", VA = "0x4700D40")]
	public static double4 double4(double x, double y, double2 zw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4700D60", Offset = "0x4700D60", VA = "0x4700D60")]
	public static double4 double4(double x, double2 yz, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4700D80", Offset = "0x4700D80", VA = "0x4700D80")]
	public static double4 double4(double x, double3 yzw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4700DA0", Offset = "0x4700DA0", VA = "0x4700DA0")]
	public static double4 double4(double2 xy, double z, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000149")]
	[Address(RVA = "0x4700DC0", Offset = "0x4700DC0", VA = "0x4700DC0")]
	public static double4 double4(double2 xy, double2 zw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4700DE0", Offset = "0x4700DE0", VA = "0x4700DE0")]
	public static double4 double4(double3 xyz, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4700E00", Offset = "0x4700E00", VA = "0x4700E00")]
	public static double4 double4(double4 xyzw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4700E20", Offset = "0x4700E20", VA = "0x4700E20")]
	public static double4 double4(double v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4700E40", Offset = "0x4700E40", VA = "0x4700E40")]
	public static double4 double4(bool v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4700E70", Offset = "0x4700E70", VA = "0x4700E70")]
	public static double4 double4(bool4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014F")]
	[Address(RVA = "0x4700F00", Offset = "0x4700F00", VA = "0x4700F00")]
	public static double4 double4(int v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000150")]
	[Address(RVA = "0x4700F20", Offset = "0x4700F20", VA = "0x4700F20")]
	public static double4 double4(int4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000151")]
	[Address(RVA = "0x4700F60", Offset = "0x4700F60", VA = "0x4700F60")]
	public static double4 double4(uint v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000152")]
	[Address(RVA = "0x4700F80", Offset = "0x4700F80", VA = "0x4700F80")]
	public static double4 double4(uint4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000153")]
	[Address(RVA = "0x4700FC0", Offset = "0x4700FC0", VA = "0x4700FC0")]
	public static double4 double4(half v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000154")]
	[Address(RVA = "0x4701040", Offset = "0x4701040", VA = "0x4701040")]
	public static double4 double4(half4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000155")]
	[Address(RVA = "0x47011E0", Offset = "0x47011E0", VA = "0x47011E0")]
	public static double4 double4(float v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000156")]
	[Address(RVA = "0x4701200", Offset = "0x4701200", VA = "0x4701200")]
	public static double4 double4(float4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000157")]
	[Address(RVA = "0x4701220", Offset = "0x4701220", VA = "0x4701220")]
	public static uint hash(double4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000158")]
	[Address(RVA = "0x47012A0", Offset = "0x47012A0", VA = "0x47012A0")]
	public static uint4 hashwide(double4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000159")]
	[Address(RVA = "0x4701330", Offset = "0x4701330", VA = "0x4701330")]
	public static double shuffle(double4 left, double4 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015A")]
	[Address(RVA = "0x4701410", Offset = "0x4701410", VA = "0x4701410")]
	public static double2 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015B")]
	[Address(RVA = "0x47015C0", Offset = "0x47015C0", VA = "0x47015C0")]
	public static double3 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015C")]
	[Address(RVA = "0x4701820", Offset = "0x4701820", VA = "0x4701820")]
	public static double4 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015D")]
	[Address(RVA = "0x4701B20", Offset = "0x4701B20", VA = "0x4701B20")]
	internal static double select_shuffle_component(double4 a, double4 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015E")]
	[Address(RVA = "0x4701C00", Offset = "0x4701C00", VA = "0x4701C00")]
	public static double4x2 double4x2(double4 c0, double4 c1)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015F")]
	[Address(RVA = "0x4701C30", Offset = "0x4701C30", VA = "0x4701C30")]
	public static double4x2 double4x2(double m00, double m01, double m10, double m11, double m20, double m21, double m30, double m31)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000160")]
	[Address(RVA = "0x4701C60", Offset = "0x4701C60", VA = "0x4701C60")]
	public static double4x2 double4x2(double v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000161")]
	[Address(RVA = "0x4701C90", Offset = "0x4701C90", VA = "0x4701C90")]
	public static double4x2 double4x2(bool v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000162")]
	[Address(RVA = "0x4701CD0", Offset = "0x4701CD0", VA = "0x4701CD0")]
	public static double4x2 double4x2(bool4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000163")]
	[Address(RVA = "0x4701DD0", Offset = "0x4701DD0", VA = "0x4701DD0")]
	public static double4x2 double4x2(int v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4701E00", Offset = "0x4701E00", VA = "0x4701E00")]
	public static double4x2 double4x2(int4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4701E80", Offset = "0x4701E80", VA = "0x4701E80")]
	public static double4x2 double4x2(uint v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4701EC0", Offset = "0x4701EC0", VA = "0x4701EC0")]
	public static double4x2 double4x2(uint4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4701F50", Offset = "0x4701F50", VA = "0x4701F50")]
	public static double4x2 double4x2(float v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4701F80", Offset = "0x4701F80", VA = "0x4701F80")]
	public static double4x2 double4x2(float4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4701FB0", Offset = "0x4701FB0", VA = "0x4701FB0")]
	public static double2x4 transpose(double4x2 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4702000", Offset = "0x4702000", VA = "0x4702000")]
	public static uint hash(double4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016B")]
	[Address(RVA = "0x4702110", Offset = "0x4702110", VA = "0x4702110")]
	public static uint4 hashwide(double4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4702250", Offset = "0x4702250", VA = "0x4702250")]
	public static double4x3 double4x3(double4 c0, double4 c1, double4 c2)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4702290", Offset = "0x4702290", VA = "0x4702290")]
	public static double4x3 double4x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22, double m30, double m31, double m32)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x47022F0", Offset = "0x47022F0", VA = "0x47022F0")]
	public static double4x3 double4x3(double v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4702330", Offset = "0x4702330", VA = "0x4702330")]
	public static double4x3 double4x3(bool v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4702380", Offset = "0x4702380", VA = "0x4702380")]
	public static double4x3 double4x3(bool4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000171")]
	[Address(RVA = "0x47024E0", Offset = "0x47024E0", VA = "0x47024E0")]
	public static double4x3 double4x3(int v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4702530", Offset = "0x4702530", VA = "0x4702530")]
	public static double4x3 double4x3(int4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000173")]
	[Address(RVA = "0x47025F0", Offset = "0x47025F0", VA = "0x47025F0")]
	public static double4x3 double4x3(uint v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4702640", Offset = "0x4702640", VA = "0x4702640")]
	public static double4x3 double4x3(uint4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4702720", Offset = "0x4702720", VA = "0x4702720")]
	public static double4x3 double4x3(float v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4702770", Offset = "0x4702770", VA = "0x4702770")]
	public static double4x3 double4x3(float4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000177")]
	[Address(RVA = "0x47027B0", Offset = "0x47027B0", VA = "0x47027B0")]
	public static double3x4 transpose(double4x3 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4702830", Offset = "0x4702830", VA = "0x4702830")]
	public static uint hash(double4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000179")]
	[Address(RVA = "0x47029F0", Offset = "0x47029F0", VA = "0x47029F0")]
	public static uint4 hashwide(double4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4702BD0", Offset = "0x4702BD0", VA = "0x4702BD0")]
	public static double4x4 double4x4(double4 c0, double4 c1, double4 c2, double4 c3)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017B")]
	[Address(RVA = "0x4702C20", Offset = "0x4702C20", VA = "0x4702C20")]
	public static double4x4 double4x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4702CC0", Offset = "0x4702CC0", VA = "0x4702CC0")]
	public static double4x4 double4x4(double v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017D")]
	[Address(RVA = "0x4702D20", Offset = "0x4702D20", VA = "0x4702D20")]
	public static double4x4 double4x4(bool v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017E")]
	[Address(RVA = "0x4702D90", Offset = "0x4702D90", VA = "0x4702D90")]
	public static double4x4 double4x4(bool4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4702DD0", Offset = "0x4702DD0", VA = "0x4702DD0")]
	public static double4x4 double4x4(int v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4702E30", Offset = "0x4702E30", VA = "0x4702E30")]
	public static double4x4 double4x4(int4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000181")]
	[Address(RVA = "0x4702F40", Offset = "0x4702F40", VA = "0x4702F40")]
	public static double4x4 double4x4(uint v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4702FA0", Offset = "0x4702FA0", VA = "0x4702FA0")]
	public static double4x4 double4x4(uint4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000183")]
	[Address(RVA = "0x47030D0", Offset = "0x47030D0", VA = "0x47030D0")]
	public static double4x4 double4x4(float v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000184")]
	[Address(RVA = "0x4703130", Offset = "0x4703130", VA = "0x4703130")]
	public static double4x4 double4x4(float4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000185")]
	[Address(RVA = "0x4703180", Offset = "0x4703180", VA = "0x4703180")]
	public static double3 rotate(double4x4 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000186")]
	[Address(RVA = "0x4703200", Offset = "0x4703200", VA = "0x4703200")]
	public static double3 transform(double4x4 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000187")]
	[Address(RVA = "0x4703280", Offset = "0x4703280", VA = "0x4703280")]
	public static double4x4 transpose(double4x4 v)
	{
		return default(double4x4);
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x4703320", Offset = "0x4703320", VA = "0x4703320")]
	public static double4x4 inverse(double4x4 m)
	{
		return default(double4x4);
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x4703740", Offset = "0x4703740", VA = "0x4703740")]
	public static double4x4 fastinverse(double4x4 m)
	{
		return default(double4x4);
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x4703860", Offset = "0x4703860", VA = "0x4703860")]
	public static double determinant(double4x4 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018B")]
	[Address(RVA = "0x47039C0", Offset = "0x47039C0", VA = "0x47039C0")]
	public static uint hash(double4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018C")]
	[Address(RVA = "0x4703C30", Offset = "0x4703C30", VA = "0x4703C30")]
	public static uint4 hashwide(double4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4703EA0", Offset = "0x4703EA0", VA = "0x4703EA0")]
	public static float2 float2(float x, float y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018E")]
	[Address(RVA = "0x4703EB0", Offset = "0x4703EB0", VA = "0x4703EB0")]
	public static float2 float2(float2 xy)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018F")]
	[Address(RVA = "0x4703EC0", Offset = "0x4703EC0", VA = "0x4703EC0")]
	public static float2 float2(float v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000190")]
	[Address(RVA = "0x4703ED0", Offset = "0x4703ED0", VA = "0x4703ED0")]
	public static float2 float2(bool v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000191")]
	[Address(RVA = "0x4703EF0", Offset = "0x4703EF0", VA = "0x4703EF0")]
	public static float2 float2(bool2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x4703F30", Offset = "0x4703F30", VA = "0x4703F30")]
	public static float2 float2(int v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4703F40", Offset = "0x4703F40", VA = "0x4703F40")]
	public static float2 float2(int2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000194")]
	[Address(RVA = "0x4703F50", Offset = "0x4703F50", VA = "0x4703F50")]
	public static float2 float2(uint v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4703F60", Offset = "0x4703F60", VA = "0x4703F60")]
	public static float2 float2(uint2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4703F80", Offset = "0x4703F80", VA = "0x4703F80")]
	public static float2 float2(half v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4703FF0", Offset = "0x4703FF0", VA = "0x4703FF0")]
	public static float2 float2(half2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000198")]
	[Address(RVA = "0x47040B0", Offset = "0x47040B0", VA = "0x47040B0")]
	public static float2 float2(double v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000199")]
	[Address(RVA = "0x47040C0", Offset = "0x47040C0", VA = "0x47040C0")]
	public static float2 float2(double2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019A")]
	[Address(RVA = "0x47040D0", Offset = "0x47040D0", VA = "0x47040D0")]
	public static uint hash(float2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019B")]
	[Address(RVA = "0x4704100", Offset = "0x4704100", VA = "0x4704100")]
	public static uint2 hashwide(float2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019C")]
	[Address(RVA = "0x4704140", Offset = "0x4704140", VA = "0x4704140")]
	public static float shuffle(float2 left, float2 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019D")]
	[Address(RVA = "0x4704200", Offset = "0x4704200", VA = "0x4704200")]
	public static float2 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019E")]
	[Address(RVA = "0x4704320", Offset = "0x4704320", VA = "0x4704320")]
	public static float3 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019F")]
	[Address(RVA = "0x47044D0", Offset = "0x47044D0", VA = "0x47044D0")]
	public static float4 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4704700", Offset = "0x4704700", VA = "0x4704700")]
	internal static float select_shuffle_component(float2 a, float2 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x47047C0", Offset = "0x47047C0", VA = "0x47047C0")]
	public static float2x2 float2x2(float2 c0, float2 c1)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x47047D0", Offset = "0x47047D0", VA = "0x47047D0")]
	public static float2x2 float2x2(float m00, float m01, float m10, float m11)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x47047E0", Offset = "0x47047E0", VA = "0x47047E0")]
	public static float2x2 float2x2(float v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x47047F0", Offset = "0x47047F0", VA = "0x47047F0")]
	public static float2x2 float2x2(bool v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4704810", Offset = "0x4704810", VA = "0x4704810")]
	public static float2x2 float2x2(bool2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4704870", Offset = "0x4704870", VA = "0x4704870")]
	public static float2x2 float2x2(int v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x4704880", Offset = "0x4704880", VA = "0x4704880")]
	public static float2x2 float2x2(int2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x47048B0", Offset = "0x47048B0", VA = "0x47048B0")]
	public static float2x2 float2x2(uint v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x47048D0", Offset = "0x47048D0", VA = "0x47048D0")]
	public static float2x2 float2x2(uint2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4704910", Offset = "0x4704910", VA = "0x4704910")]
	public static float2x2 float2x2(double v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4704920", Offset = "0x4704920", VA = "0x4704920")]
	public static float2x2 float2x2(double2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4704930", Offset = "0x4704930", VA = "0x4704930")]
	public static float2x2 transpose(float2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4704950", Offset = "0x4704950", VA = "0x4704950")]
	public static float2x2 inverse(float2x2 m)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x47049B0", Offset = "0x47049B0", VA = "0x47049B0")]
	public static float determinant(float2x2 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x47049D0", Offset = "0x47049D0", VA = "0x47049D0")]
	public static uint hash(float2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4704A40", Offset = "0x4704A40", VA = "0x4704A40")]
	public static uint2 hashwide(float2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4704AC0", Offset = "0x4704AC0", VA = "0x4704AC0")]
	public static float2x3 float2x3(float2 c0, float2 c1, float2 c2)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4704AD0", Offset = "0x4704AD0", VA = "0x4704AD0")]
	public static float2x3 float2x3(float m00, float m01, float m02, float m10, float m11, float m12)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4704B00", Offset = "0x4704B00", VA = "0x4704B00")]
	public static float2x3 float2x3(float v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x4704B20", Offset = "0x4704B20", VA = "0x4704B20")]
	public static float2x3 float2x3(bool v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x4704B50", Offset = "0x4704B50", VA = "0x4704B50")]
	public static float2x3 float2x3(bool2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x4704BE0", Offset = "0x4704BE0", VA = "0x4704BE0")]
	public static float2x3 float2x3(int v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4704C00", Offset = "0x4704C00", VA = "0x4704C00")]
	public static float2x3 float2x3(int2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4704C50", Offset = "0x4704C50", VA = "0x4704C50")]
	public static float2x3 float2x3(uint v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4704C80", Offset = "0x4704C80", VA = "0x4704C80")]
	public static float2x3 float2x3(uint2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4704D00", Offset = "0x4704D00", VA = "0x4704D00")]
	public static float2x3 float2x3(double v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4704D20", Offset = "0x4704D20", VA = "0x4704D20")]
	public static float2x3 float2x3(double2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4704D50", Offset = "0x4704D50", VA = "0x4704D50")]
	public static float3x2 transpose(float2x3 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4704D80", Offset = "0x4704D80", VA = "0x4704D80")]
	public static uint hash(float2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4704E50", Offset = "0x4704E50", VA = "0x4704E50")]
	public static uint2 hashwide(float2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4704F20", Offset = "0x4704F20", VA = "0x4704F20")]
	public static float2x4 float2x4(float2 c0, float2 c1, float2 c2, float2 c3)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4704F40", Offset = "0x4704F40", VA = "0x4704F40")]
	public static float2x4 float2x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4704F70", Offset = "0x4704F70", VA = "0x4704F70")]
	public static float2x4 float2x4(float v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4704F80", Offset = "0x4704F80", VA = "0x4704F80")]
	public static float2x4 float2x4(bool v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4704FB0", Offset = "0x4704FB0", VA = "0x4704FB0")]
	public static float2x4 float2x4(bool2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4705080", Offset = "0x4705080", VA = "0x4705080")]
	public static float2x4 float2x4(int v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x47050A0", Offset = "0x47050A0", VA = "0x47050A0")]
	public static float2x4 float2x4(int2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4705110", Offset = "0x4705110", VA = "0x4705110")]
	public static float2x4 float2x4(uint v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x4705130", Offset = "0x4705130", VA = "0x4705130")]
	public static float2x4 float2x4(uint2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x47051D0", Offset = "0x47051D0", VA = "0x47051D0")]
	public static float2x4 float2x4(double v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x47051F0", Offset = "0x47051F0", VA = "0x47051F0")]
	public static float2x4 float2x4(double2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x4705220", Offset = "0x4705220", VA = "0x4705220")]
	public static float4x2 transpose(float2x4 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x4705270", Offset = "0x4705270", VA = "0x4705270")]
	public static uint hash(float2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x4705380", Offset = "0x4705380", VA = "0x4705380")]
	public static uint2 hashwide(float2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x47054A0", Offset = "0x47054A0", VA = "0x47054A0")]
	public static float3 float3(float x, float y, float z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x47054B0", Offset = "0x47054B0", VA = "0x47054B0")]
	public static float3 float3(float x, float2 yz)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x47054C0", Offset = "0x47054C0", VA = "0x47054C0")]
	public static float3 float3(float2 xy, float z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x47054D0", Offset = "0x47054D0", VA = "0x47054D0")]
	public static float3 float3(float3 xyz)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x47054E0", Offset = "0x47054E0", VA = "0x47054E0")]
	public static float3 float3(float v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x47054F0", Offset = "0x47054F0", VA = "0x47054F0")]
	public static float3 float3(bool v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4705510", Offset = "0x4705510", VA = "0x4705510")]
	public static float3 float3(bool3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4705560", Offset = "0x4705560", VA = "0x4705560")]
	public static float3 float3(int v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4705570", Offset = "0x4705570", VA = "0x4705570")]
	public static float3 float3(int3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4705590", Offset = "0x4705590", VA = "0x4705590")]
	public static float3 float3(uint v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x47055B0", Offset = "0x47055B0", VA = "0x47055B0")]
	public static float3 float3(uint3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x47055E0", Offset = "0x47055E0", VA = "0x47055E0")]
	public static float3 float3(half v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4705650", Offset = "0x4705650", VA = "0x4705650")]
	public static float3 float3(half3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4705770", Offset = "0x4705770", VA = "0x4705770")]
	public static float3 float3(double v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4705780", Offset = "0x4705780", VA = "0x4705780")]
	public static float3 float3(double3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x47057A0", Offset = "0x47057A0", VA = "0x47057A0")]
	public static uint hash(float3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x47057E0", Offset = "0x47057E0", VA = "0x47057E0")]
	public static uint3 hashwide(float3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4705830", Offset = "0x4705830", VA = "0x4705830")]
	public static float shuffle(float3 left, float3 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4705900", Offset = "0x4705900", VA = "0x4705900")]
	public static float2 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4705A40", Offset = "0x4705A40", VA = "0x4705A40")]
	public static float3 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4705C20", Offset = "0x4705C20", VA = "0x4705C20")]
	public static float4 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4705E90", Offset = "0x4705E90", VA = "0x4705E90")]
	internal static float select_shuffle_component(float3 a, float3 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4705F60", Offset = "0x4705F60", VA = "0x4705F60")]
	public static float3x2 float3x2(float3 c0, float3 c1)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4705F80", Offset = "0x4705F80", VA = "0x4705F80")]
	public static float3x2 float3x2(float m00, float m01, float m10, float m11, float m20, float m21)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4705FB0", Offset = "0x4705FB0", VA = "0x4705FB0")]
	public static float3x2 float3x2(float v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4705FD0", Offset = "0x4705FD0", VA = "0x4705FD0")]
	public static float3x2 float3x2(bool v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4706010", Offset = "0x4706010", VA = "0x4706010")]
	public static float3x2 float3x2(bool3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x47060C0", Offset = "0x47060C0", VA = "0x47060C0")]
	public static float3x2 float3x2(int v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x47060E0", Offset = "0x47060E0", VA = "0x47060E0")]
	public static float3x2 float3x2(int3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4706130", Offset = "0x4706130", VA = "0x4706130")]
	public static float3x2 float3x2(uint v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4706160", Offset = "0x4706160", VA = "0x4706160")]
	public static float3x2 float3x2(uint3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x47061E0", Offset = "0x47061E0", VA = "0x47061E0")]
	public static float3x2 float3x2(double v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4706200", Offset = "0x4706200", VA = "0x4706200")]
	public static float3x2 float3x2(double3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4706240", Offset = "0x4706240", VA = "0x4706240")]
	public static float2x3 transpose(float3x2 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4706270", Offset = "0x4706270", VA = "0x4706270")]
	public static uint hash(float3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4706300", Offset = "0x4706300", VA = "0x4706300")]
	public static uint3 hashwide(float3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x47063B0", Offset = "0x47063B0", VA = "0x47063B0")]
	public static float3x3 float3x3(float3 c0, float3 c1, float3 c2)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x47063D0", Offset = "0x47063D0", VA = "0x47063D0")]
	public static float3x3 float3x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4706410", Offset = "0x4706410", VA = "0x4706410")]
	public static float3x3 float3x3(float v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4706440", Offset = "0x4706440", VA = "0x4706440")]
	public static float3x3 float3x3(bool v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4706480", Offset = "0x4706480", VA = "0x4706480")]
	public static float3x3 float3x3(bool3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x47065C0", Offset = "0x47065C0", VA = "0x47065C0")]
	public static float3x3 float3x3(int v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x47065F0", Offset = "0x47065F0", VA = "0x47065F0")]
	public static float3x3 float3x3(int3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4706670", Offset = "0x4706670", VA = "0x4706670")]
	public static float3x3 float3x3(uint v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x47066A0", Offset = "0x47066A0", VA = "0x47066A0")]
	public static float3x3 float3x3(uint3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4706760", Offset = "0x4706760", VA = "0x4706760")]
	public static float3x3 float3x3(double v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4706790", Offset = "0x4706790", VA = "0x4706790")]
	public static float3x3 float3x3(double3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x47067F0", Offset = "0x47067F0", VA = "0x47067F0")]
	public static float3x3 transpose(float3x3 v)
	{
		return default(float3x3);
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x4706840", Offset = "0x4706840", VA = "0x4706840")]
	public static float3x3 inverse(float3x3 m)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4706990", Offset = "0x4706990", VA = "0x4706990")]
	public static float determinant(float3x3 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x4706A00", Offset = "0x4706A00", VA = "0x4706A00")]
	public static uint hash(float3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4706AF0", Offset = "0x4706AF0", VA = "0x4706AF0")]
	public static uint3 hashwide(float3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000201")]
	[Address(RVA = "0x4706BF0", Offset = "0x4706BF0", VA = "0x4706BF0")]
	public static float3x4 float3x4(float3 c0, float3 c1, float3 c2, float3 c3)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000202")]
	[Address(RVA = "0x4706C20", Offset = "0x4706C20", VA = "0x4706C20")]
	public static float3x4 float3x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4706C80", Offset = "0x4706C80", VA = "0x4706C80")]
	public static float3x4 float3x4(float v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4706CB0", Offset = "0x4706CB0", VA = "0x4706CB0")]
	public static float3x4 float3x4(bool v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4706D00", Offset = "0x4706D00", VA = "0x4706D00")]
	public static float3x4 float3x4(bool3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4706EC0", Offset = "0x4706EC0", VA = "0x4706EC0")]
	public static float3x4 float3x4(int v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4706F00", Offset = "0x4706F00", VA = "0x4706F00")]
	public static float3x4 float3x4(int3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4706FB0", Offset = "0x4706FB0", VA = "0x4706FB0")]
	public static float3x4 float3x4(uint v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4706FF0", Offset = "0x4706FF0", VA = "0x4706FF0")]
	public static float3x4 float3x4(uint3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020A")]
	[Address(RVA = "0x47070F0", Offset = "0x47070F0", VA = "0x47070F0")]
	public static float3x4 float3x4(double v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4707130", Offset = "0x4707130", VA = "0x4707130")]
	public static float3x4 float3x4(double3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020C")]
	[Address(RVA = "0x47071B0", Offset = "0x47071B0", VA = "0x47071B0")]
	public static float4x3 transpose(float3x4 v)
	{
		return default(float4x3);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4707220", Offset = "0x4707220", VA = "0x4707220")]
	public static float3x4 fastinverse(float3x4 m)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020E")]
	[Address(RVA = "0x47072E0", Offset = "0x47072E0", VA = "0x47072E0")]
	public static uint hash(float3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4707420", Offset = "0x4707420", VA = "0x4707420")]
	public static uint3 hashwide(float3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4707570", Offset = "0x4707570", VA = "0x4707570")]
	public static float4 float4(float x, float y, float z, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4707580", Offset = "0x4707580", VA = "0x4707580")]
	public static float4 float4(float x, float y, float2 zw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4707590", Offset = "0x4707590", VA = "0x4707590")]
	public static float4 float4(float x, float2 yz, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000213")]
	[Address(RVA = "0x47075A0", Offset = "0x47075A0", VA = "0x47075A0")]
	public static float4 float4(float x, float3 yzw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000214")]
	[Address(RVA = "0x47075B0", Offset = "0x47075B0", VA = "0x47075B0")]
	public static float4 float4(float2 xy, float z, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000215")]
	[Address(RVA = "0x47075C0", Offset = "0x47075C0", VA = "0x47075C0")]
	public static float4 float4(float2 xy, float2 zw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000216")]
	[Address(RVA = "0x47075D0", Offset = "0x47075D0", VA = "0x47075D0")]
	public static float4 float4(float3 xyz, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000217")]
	[Address(RVA = "0x47075E0", Offset = "0x47075E0", VA = "0x47075E0")]
	public static float4 float4(float4 xyzw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000218")]
	[Address(RVA = "0x47075F0", Offset = "0x47075F0", VA = "0x47075F0")]
	public static float4 float4(float v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4707600", Offset = "0x4707600", VA = "0x4707600")]
	public static float4 float4(bool v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4707620", Offset = "0x4707620", VA = "0x4707620")]
	public static float4 float4(bool4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4707690", Offset = "0x4707690", VA = "0x4707690")]
	public static float4 float4(int v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x47076A0", Offset = "0x47076A0", VA = "0x47076A0")]
	public static float4 float4(int4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x47076D0", Offset = "0x47076D0", VA = "0x47076D0")]
	public static float4 float4(uint v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021E")]
	[Address(RVA = "0x47076F0", Offset = "0x47076F0", VA = "0x47076F0")]
	public static float4 float4(uint4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4707730", Offset = "0x4707730", VA = "0x4707730")]
	public static float4 float4(half v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000220")]
	[Address(RVA = "0x47077A0", Offset = "0x47077A0", VA = "0x47077A0")]
	public static float4 float4(half4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4707920", Offset = "0x4707920", VA = "0x4707920")]
	public static float4 float4(double v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4707930", Offset = "0x4707930", VA = "0x4707930")]
	public static float4 float4(double4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4707940", Offset = "0x4707940", VA = "0x4707940")]
	public static uint hash(float4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000224")]
	[Address(RVA = "0x47079A0", Offset = "0x47079A0", VA = "0x47079A0")]
	public static uint4 hashwide(float4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4707A00", Offset = "0x4707A00", VA = "0x4707A00")]
	public static float shuffle(float4 left, float4 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4707AE0", Offset = "0x4707AE0", VA = "0x4707AE0")]
	public static float2 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4707C60", Offset = "0x4707C60", VA = "0x4707C60")]
	public static float3 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4707ED0", Offset = "0x4707ED0", VA = "0x4707ED0")]
	public static float4 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4708200", Offset = "0x4708200", VA = "0x4708200")]
	internal static float select_shuffle_component(float4 a, float4 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022A")]
	[Address(RVA = "0x47082E0", Offset = "0x47082E0", VA = "0x47082E0")]
	public static float4x2 float4x2(float4 c0, float4 c1)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4708300", Offset = "0x4708300", VA = "0x4708300")]
	public static float4x2 float4x2(float m00, float m01, float m10, float m11, float m20, float m21, float m30, float m31)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4708330", Offset = "0x4708330", VA = "0x4708330")]
	public static float4x2 float4x2(float v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4708340", Offset = "0x4708340", VA = "0x4708340")]
	public static float4x2 float4x2(bool v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4708370", Offset = "0x4708370", VA = "0x4708370")]
	public static float4x2 float4x2(bool4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4708450", Offset = "0x4708450", VA = "0x4708450")]
	public static float4x2 float4x2(int v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4708470", Offset = "0x4708470", VA = "0x4708470")]
	public static float4x2 float4x2(int4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000231")]
	[Address(RVA = "0x47084E0", Offset = "0x47084E0", VA = "0x47084E0")]
	public static float4x2 float4x2(uint v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4708500", Offset = "0x4708500", VA = "0x4708500")]
	public static float4x2 float4x2(uint4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000233")]
	[Address(RVA = "0x47085A0", Offset = "0x47085A0", VA = "0x47085A0")]
	public static float4x2 float4x2(double v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000234")]
	[Address(RVA = "0x47085C0", Offset = "0x47085C0", VA = "0x47085C0")]
	public static float4x2 float4x2(double4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000235")]
	[Address(RVA = "0x47085F0", Offset = "0x47085F0", VA = "0x47085F0")]
	public static float2x4 transpose(float4x2 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4708640", Offset = "0x4708640", VA = "0x4708640")]
	public static uint hash(float4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000237")]
	[Address(RVA = "0x4708730", Offset = "0x4708730", VA = "0x4708730")]
	public static uint4 hashwide(float4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4708840", Offset = "0x4708840", VA = "0x4708840")]
	public static float4x3 float4x3(float4 c0, float4 c1, float4 c2)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4708860", Offset = "0x4708860", VA = "0x4708860")]
	public static float4x3 float4x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float m30, float m31, float m32)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023A")]
	[Address(RVA = "0x47088C0", Offset = "0x47088C0", VA = "0x47088C0")]
	public static float4x3 float4x3(float v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023B")]
	[Address(RVA = "0x47088E0", Offset = "0x47088E0", VA = "0x47088E0")]
	public static float4x3 float4x3(bool v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4708910", Offset = "0x4708910", VA = "0x4708910")]
	public static float4x3 float4x3(bool4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4708A90", Offset = "0x4708A90", VA = "0x4708A90")]
	public static float4x3 float4x3(int v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4708AB0", Offset = "0x4708AB0", VA = "0x4708AB0")]
	public static float4x3 float4x3(int4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4708B60", Offset = "0x4708B60", VA = "0x4708B60")]
	public static float4x3 float4x3(uint v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4708B80", Offset = "0x4708B80", VA = "0x4708B80")]
	public static float4x3 float4x3(uint4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000241")]
	[Address(RVA = "0x4708C80", Offset = "0x4708C80", VA = "0x4708C80")]
	public static float4x3 float4x3(double v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4708CA0", Offset = "0x4708CA0", VA = "0x4708CA0")]
	public static float4x3 float4x3(double4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4708CF0", Offset = "0x4708CF0", VA = "0x4708CF0")]
	public static float3x4 transpose(float4x3 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4708D60", Offset = "0x4708D60", VA = "0x4708D60")]
	public static uint hash(float4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4708EE0", Offset = "0x4708EE0", VA = "0x4708EE0")]
	public static uint4 hashwide(float4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4709070", Offset = "0x4709070", VA = "0x4709070")]
	public static float4x4 float4x4(float4 c0, float4 c1, float4 c2, float4 c3)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4709090", Offset = "0x4709090", VA = "0x4709090")]
	public static float4x4 float4x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4709130", Offset = "0x4709130", VA = "0x4709130")]
	public static float4x4 float4x4(float v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4709150", Offset = "0x4709150", VA = "0x4709150")]
	public static float4x4 float4x4(bool v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024A")]
	[Address(RVA = "0x4709180", Offset = "0x4709180", VA = "0x4709180")]
	public static float4x4 float4x4(bool4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4709380", Offset = "0x4709380", VA = "0x4709380")]
	public static float4x4 float4x4(int v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024C")]
	[Address(RVA = "0x47093A0", Offset = "0x47093A0", VA = "0x47093A0")]
	public static float4x4 float4x4(int4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4709490", Offset = "0x4709490", VA = "0x4709490")]
	public static float4x4 float4x4(uint v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024E")]
	[Address(RVA = "0x47094C0", Offset = "0x47094C0", VA = "0x47094C0")]
	public static float4x4 float4x4(uint4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4709610", Offset = "0x4709610", VA = "0x4709610")]
	public static float4x4 float4x4(double v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4709630", Offset = "0x4709630", VA = "0x4709630")]
	public static float4x4 float4x4(double4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4709690", Offset = "0x4709690", VA = "0x4709690")]
	public static float3 rotate(float4x4 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000252")]
	[Address(RVA = "0x47096F0", Offset = "0x47096F0", VA = "0x47096F0")]
	public static float3 transform(float4x4 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4709760", Offset = "0x4709760", VA = "0x4709760")]
	public static float4x4 transpose(float4x4 v)
	{
		return default(float4x4);
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x47097E0", Offset = "0x47097E0", VA = "0x47097E0")]
	public static float4x4 inverse(float4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4709B70", Offset = "0x4709B70", VA = "0x4709B70")]
	public static float4x4 fastinverse(float4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4709C90", Offset = "0x4709C90", VA = "0x4709C90")]
	public static float determinant(float4x4 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4709DE0", Offset = "0x4709DE0", VA = "0x4709DE0")]
	public static uint hash(float4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4709FF0", Offset = "0x4709FF0", VA = "0x4709FF0")]
	public static uint4 hashwide(float4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000259")]
	[Address(RVA = "0x470A210", Offset = "0x470A210", VA = "0x470A210")]
	public static half half(half x)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025A")]
	[Address(RVA = "0x470A220", Offset = "0x470A220", VA = "0x470A220")]
	public static half half(float v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025B")]
	[Address(RVA = "0x470A280", Offset = "0x470A280", VA = "0x470A280")]
	public static half half(double v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025C")]
	[Address(RVA = "0x470A2E0", Offset = "0x470A2E0", VA = "0x470A2E0")]
	public static uint hash(half v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025D")]
	[Address(RVA = "0x470A2F0", Offset = "0x470A2F0", VA = "0x470A2F0")]
	public static half2 half2(half x, half y)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025E")]
	[Address(RVA = "0x470A300", Offset = "0x470A300", VA = "0x470A300")]
	public static half2 half2(half2 xy)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025F")]
	[Address(RVA = "0x470A310", Offset = "0x470A310", VA = "0x470A310")]
	public static half2 half2(half v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000260")]
	[Address(RVA = "0x470A320", Offset = "0x470A320", VA = "0x470A320")]
	public static half2 half2(float v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000261")]
	[Address(RVA = "0x470A380", Offset = "0x470A380", VA = "0x470A380")]
	public static half2 half2(float2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000262")]
	[Address(RVA = "0x470A440", Offset = "0x470A440", VA = "0x470A440")]
	public static half2 half2(double v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000263")]
	[Address(RVA = "0x470A4B0", Offset = "0x470A4B0", VA = "0x470A4B0")]
	public static half2 half2(double2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000264")]
	[Address(RVA = "0x470A570", Offset = "0x470A570", VA = "0x470A570")]
	public static uint hash(half2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000265")]
	[Address(RVA = "0x470A5A0", Offset = "0x470A5A0", VA = "0x470A5A0")]
	public static uint2 hashwide(half2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000266")]
	[Address(RVA = "0x470A5E0", Offset = "0x470A5E0", VA = "0x470A5E0")]
	public static half3 half3(half x, half y, half z)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000267")]
	[Address(RVA = "0x470A600", Offset = "0x470A600", VA = "0x470A600")]
	public static half3 half3(half x, half2 yz)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000268")]
	[Address(RVA = "0x470A620", Offset = "0x470A620", VA = "0x470A620")]
	public static half3 half3(half2 xy, half z)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000269")]
	[Address(RVA = "0x470A630", Offset = "0x470A630", VA = "0x470A630")]
	public static half3 half3(half3 xyz)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026A")]
	[Address(RVA = "0x470A640", Offset = "0x470A640", VA = "0x470A640")]
	public static half3 half3(half v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026B")]
	[Address(RVA = "0x470A660", Offset = "0x470A660", VA = "0x470A660")]
	public static half3 half3(float v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026C")]
	[Address(RVA = "0x470A6D0", Offset = "0x470A6D0", VA = "0x470A6D0")]
	public static half3 half3(float3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026D")]
	[Address(RVA = "0x470A7E0", Offset = "0x470A7E0", VA = "0x470A7E0")]
	public static half3 half3(double v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026E")]
	[Address(RVA = "0x470A850", Offset = "0x470A850", VA = "0x470A850")]
	public static half3 half3(double3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026F")]
	[Address(RVA = "0x470A980", Offset = "0x470A980", VA = "0x470A980")]
	public static uint hash(half3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000270")]
	[Address(RVA = "0x470A9C0", Offset = "0x470A9C0", VA = "0x470A9C0")]
	public static uint3 hashwide(half3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000271")]
	[Address(RVA = "0x470AA10", Offset = "0x470AA10", VA = "0x470AA10")]
	public static half4 half4(half x, half y, half z, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000272")]
	[Address(RVA = "0x470AA30", Offset = "0x470AA30", VA = "0x470AA30")]
	public static half4 half4(half x, half y, half2 zw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000273")]
	[Address(RVA = "0x470AA60", Offset = "0x470AA60", VA = "0x470AA60")]
	public static half4 half4(half x, half2 yz, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000274")]
	[Address(RVA = "0x470AA80", Offset = "0x470AA80", VA = "0x470AA80")]
	public static half4 half4(half x, half3 yzw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000275")]
	[Address(RVA = "0x470AAB0", Offset = "0x470AAB0", VA = "0x470AAB0")]
	public static half4 half4(half2 xy, half z, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000276")]
	[Address(RVA = "0x470AAD0", Offset = "0x470AAD0", VA = "0x470AAD0")]
	public static half4 half4(half2 xy, half2 zw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000277")]
	[Address(RVA = "0x470AAF0", Offset = "0x470AAF0", VA = "0x470AAF0")]
	public static half4 half4(half3 xyz, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000278")]
	[Address(RVA = "0x470AB10", Offset = "0x470AB10", VA = "0x470AB10")]
	public static half4 half4(half4 xyzw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000279")]
	[Address(RVA = "0x470AB20", Offset = "0x470AB20", VA = "0x470AB20")]
	public static half4 half4(half v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027A")]
	[Address(RVA = "0x470AB40", Offset = "0x470AB40", VA = "0x470AB40")]
	public static half4 half4(float v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027B")]
	[Address(RVA = "0x470ABB0", Offset = "0x470ABB0", VA = "0x470ABB0")]
	public static half4 half4(float4 v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027C")]
	[Address(RVA = "0x470AD20", Offset = "0x470AD20", VA = "0x470AD20")]
	public static half4 half4(double v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027D")]
	[Address(RVA = "0x470AD90", Offset = "0x470AD90", VA = "0x470AD90")]
	public static half4 half4(double4 v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027E")]
	[Address(RVA = "0x470AF20", Offset = "0x470AF20", VA = "0x470AF20")]
	public static uint hash(half4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027F")]
	[Address(RVA = "0x470AF80", Offset = "0x470AF80", VA = "0x470AF80")]
	public static uint4 hashwide(half4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000280")]
	[Address(RVA = "0x470AFF0", Offset = "0x470AFF0", VA = "0x470AFF0")]
	public static int2 int2(int x, int y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000281")]
	[Address(RVA = "0x470B000", Offset = "0x470B000", VA = "0x470B000")]
	public static int2 int2(int2 xy)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000282")]
	[Address(RVA = "0x470B010", Offset = "0x470B010", VA = "0x470B010")]
	public static int2 int2(int v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000283")]
	[Address(RVA = "0x470B020", Offset = "0x470B020", VA = "0x470B020")]
	public static int2 int2(bool v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000284")]
	[Address(RVA = "0x470B030", Offset = "0x470B030", VA = "0x470B030")]
	public static int2 int2(bool2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000285")]
	[Address(RVA = "0x470B050", Offset = "0x470B050", VA = "0x470B050")]
	public static int2 int2(uint v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000286")]
	[Address(RVA = "0x470B060", Offset = "0x470B060", VA = "0x470B060")]
	public static int2 int2(uint2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000287")]
	[Address(RVA = "0x470B070", Offset = "0x470B070", VA = "0x470B070")]
	public static int2 int2(float v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000288")]
	[Address(RVA = "0x470B080", Offset = "0x470B080", VA = "0x470B080")]
	public static int2 int2(float2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000289")]
	[Address(RVA = "0x470B0A0", Offset = "0x470B0A0", VA = "0x470B0A0")]
	public static int2 int2(double v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028A")]
	[Address(RVA = "0x470B0B0", Offset = "0x470B0B0", VA = "0x470B0B0")]
	public static int2 int2(double2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028B")]
	[Address(RVA = "0x470B0C0", Offset = "0x470B0C0", VA = "0x470B0C0")]
	public static uint hash(int2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028C")]
	[Address(RVA = "0x470B0F0", Offset = "0x470B0F0", VA = "0x470B0F0")]
	public static uint2 hashwide(int2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028D")]
	[Address(RVA = "0x470B130", Offset = "0x470B130", VA = "0x470B130")]
	public static int shuffle(int2 left, int2 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028E")]
	[Address(RVA = "0x470B140", Offset = "0x470B140", VA = "0x470B140")]
	public static int2 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028F")]
	[Address(RVA = "0x470B180", Offset = "0x470B180", VA = "0x470B180")]
	public static int3 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000290")]
	[Address(RVA = "0x470B1F0", Offset = "0x470B1F0", VA = "0x470B1F0")]
	public static int4 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000291")]
	[Address(RVA = "0x470B280", Offset = "0x470B280", VA = "0x470B280")]
	internal static int select_shuffle_component(int2 a, int2 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000292")]
	[Address(RVA = "0x470B350", Offset = "0x470B350", VA = "0x470B350")]
	public static int2x2 int2x2(int2 c0, int2 c1)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000293")]
	[Address(RVA = "0x470B360", Offset = "0x470B360", VA = "0x470B360")]
	public static int2x2 int2x2(int m00, int m01, int m10, int m11)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000294")]
	[Address(RVA = "0x470B380", Offset = "0x470B380", VA = "0x470B380")]
	public static int2x2 int2x2(int v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000295")]
	[Address(RVA = "0x470B390", Offset = "0x470B390", VA = "0x470B390")]
	public static int2x2 int2x2(bool v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000296")]
	[Address(RVA = "0x470B3B0", Offset = "0x470B3B0", VA = "0x470B3B0")]
	public static int2x2 int2x2(bool2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000297")]
	[Address(RVA = "0x470B400", Offset = "0x470B400", VA = "0x470B400")]
	public static int2x2 int2x2(uint v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000298")]
	[Address(RVA = "0x470B410", Offset = "0x470B410", VA = "0x470B410")]
	public static int2x2 int2x2(uint2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x470B420", Offset = "0x470B420", VA = "0x470B420")]
	public static int2x2 int2x2(float v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029A")]
	[Address(RVA = "0x470B440", Offset = "0x470B440", VA = "0x470B440")]
	public static int2x2 int2x2(float2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029B")]
	[Address(RVA = "0x470B470", Offset = "0x470B470", VA = "0x470B470")]
	public static int2x2 int2x2(double v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029C")]
	[Address(RVA = "0x470B490", Offset = "0x470B490", VA = "0x470B490")]
	public static int2x2 int2x2(double2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029D")]
	[Address(RVA = "0x470B4C0", Offset = "0x470B4C0", VA = "0x470B4C0")]
	public static int2x2 transpose(int2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029E")]
	[Address(RVA = "0x470B4E0", Offset = "0x470B4E0", VA = "0x470B4E0")]
	public static int determinant(int2x2 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029F")]
	[Address(RVA = "0x470B500", Offset = "0x470B500", VA = "0x470B500")]
	public static uint hash(int2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x470B550", Offset = "0x470B550", VA = "0x470B550")]
	public static uint2 hashwide(int2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x470B5B0", Offset = "0x470B5B0", VA = "0x470B5B0")]
	public static int2x3 int2x3(int2 c0, int2 c1, int2 c2)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x470B5C0", Offset = "0x470B5C0", VA = "0x470B5C0")]
	public static int2x3 int2x3(int m00, int m01, int m02, int m10, int m11, int m12)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x470B5F0", Offset = "0x470B5F0", VA = "0x470B5F0")]
	public static int2x3 int2x3(int v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x470B610", Offset = "0x470B610", VA = "0x470B610")]
	public static int2x3 int2x3(bool v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x470B640", Offset = "0x470B640", VA = "0x470B640")]
	public static int2x3 int2x3(bool2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x470B6C0", Offset = "0x470B6C0", VA = "0x470B6C0")]
	public static int2x3 int2x3(uint v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x470B6E0", Offset = "0x470B6E0", VA = "0x470B6E0")]
	public static int2x3 int2x3(uint2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x470B700", Offset = "0x470B700", VA = "0x470B700")]
	public static int2x3 int2x3(float v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x470B720", Offset = "0x470B720", VA = "0x470B720")]
	public static int2x3 int2x3(float2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x470B780", Offset = "0x470B780", VA = "0x470B780")]
	public static int2x3 int2x3(double v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x470B7A0", Offset = "0x470B7A0", VA = "0x470B7A0")]
	public static int2x3 int2x3(double2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x470B7F0", Offset = "0x470B7F0", VA = "0x470B7F0")]
	public static int3x2 transpose(int2x3 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x470B820", Offset = "0x470B820", VA = "0x470B820")]
	public static uint hash(int2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x470B8A0", Offset = "0x470B8A0", VA = "0x470B8A0")]
	public static uint2 hashwide(int2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x470B940", Offset = "0x470B940", VA = "0x470B940")]
	public static int2x4 int2x4(int2 c0, int2 c1, int2 c2, int2 c3)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x470B960", Offset = "0x470B960", VA = "0x470B960")]
	public static int2x4 int2x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x470B9B0", Offset = "0x470B9B0", VA = "0x470B9B0")]
	public static int2x4 int2x4(int v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x470B9D0", Offset = "0x470B9D0", VA = "0x470B9D0")]
	public static int2x4 int2x4(bool v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x470BA00", Offset = "0x470BA00", VA = "0x470BA00")]
	public static int2x4 int2x4(bool2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x470BA80", Offset = "0x470BA80", VA = "0x470BA80")]
	public static int2x4 int2x4(uint v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x470BAA0", Offset = "0x470BAA0", VA = "0x470BAA0")]
	public static int2x4 int2x4(uint2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x470BAC0", Offset = "0x470BAC0", VA = "0x470BAC0")]
	public static int2x4 int2x4(float v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x470BAF0", Offset = "0x470BAF0", VA = "0x470BAF0")]
	public static int2x4 int2x4(float2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x470BB70", Offset = "0x470BB70", VA = "0x470BB70")]
	public static int2x4 int2x4(double v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x470BBA0", Offset = "0x470BBA0", VA = "0x470BBA0")]
	public static int2x4 int2x4(double2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x470BC10", Offset = "0x470BC10", VA = "0x470BC10")]
	public static int4x2 transpose(int2x4 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x470BC60", Offset = "0x470BC60", VA = "0x470BC60")]
	public static uint hash(int2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x470BD20", Offset = "0x470BD20", VA = "0x470BD20")]
	public static uint2 hashwide(int2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x470BDF0", Offset = "0x470BDF0", VA = "0x470BDF0")]
	public static int3 int3(int x, int y, int z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x470BE00", Offset = "0x470BE00", VA = "0x470BE00")]
	public static int3 int3(int x, int2 yz)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x470BE20", Offset = "0x470BE20", VA = "0x470BE20")]
	public static int3 int3(int2 xy, int z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x470BE30", Offset = "0x470BE30", VA = "0x470BE30")]
	public static int3 int3(int3 xyz)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x470BE40", Offset = "0x470BE40", VA = "0x470BE40")]
	public static int3 int3(int v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x470BE50", Offset = "0x470BE50", VA = "0x470BE50")]
	public static int3 int3(bool v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x470BE60", Offset = "0x470BE60", VA = "0x470BE60")]
	public static int3 int3(bool3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x470BE90", Offset = "0x470BE90", VA = "0x470BE90")]
	public static int3 int3(uint v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x470BEA0", Offset = "0x470BEA0", VA = "0x470BEA0")]
	public static int3 int3(uint3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x470BEB0", Offset = "0x470BEB0", VA = "0x470BEB0")]
	public static int3 int3(float v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x470BEC0", Offset = "0x470BEC0", VA = "0x470BEC0")]
	public static int3 int3(float3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x470BEE0", Offset = "0x470BEE0", VA = "0x470BEE0")]
	public static int3 int3(double v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x470BEF0", Offset = "0x470BEF0", VA = "0x470BEF0")]
	public static int3 int3(double3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x470BF10", Offset = "0x470BF10", VA = "0x470BF10")]
	public static uint hash(int3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x470BF40", Offset = "0x470BF40", VA = "0x470BF40")]
	public static uint3 hashwide(int3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x470BF80", Offset = "0x470BF80", VA = "0x470BF80")]
	public static int shuffle(int3 left, int3 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x470BF90", Offset = "0x470BF90", VA = "0x470BF90")]
	public static int2 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x470BFF0", Offset = "0x470BFF0", VA = "0x470BFF0")]
	public static int3 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x470C070", Offset = "0x470C070", VA = "0x470C070")]
	public static int4 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x470C120", Offset = "0x470C120", VA = "0x470C120")]
	internal static int select_shuffle_component(int3 a, int3 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x470C1F0", Offset = "0x470C1F0", VA = "0x470C1F0")]
	public static int3x2 int3x2(int3 c0, int3 c1)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x470C210", Offset = "0x470C210", VA = "0x470C210")]
	public static int3x2 int3x2(int m00, int m01, int m10, int m11, int m20, int m21)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x470C230", Offset = "0x470C230", VA = "0x470C230")]
	public static int3x2 int3x2(int v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x470C250", Offset = "0x470C250", VA = "0x470C250")]
	public static int3x2 int3x2(bool v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x470C280", Offset = "0x470C280", VA = "0x470C280")]
	public static int3x2 int3x2(bool3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x470C2E0", Offset = "0x470C2E0", VA = "0x470C2E0")]
	public static int3x2 int3x2(uint v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x470C300", Offset = "0x470C300", VA = "0x470C300")]
	public static int3x2 int3x2(uint3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x470C330", Offset = "0x470C330", VA = "0x470C330")]
	public static int3x2 int3x2(float v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x470C350", Offset = "0x470C350", VA = "0x470C350")]
	public static int3x2 int3x2(float3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x470C3A0", Offset = "0x470C3A0", VA = "0x470C3A0")]
	public static int3x2 int3x2(double v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x470C3C0", Offset = "0x470C3C0", VA = "0x470C3C0")]
	public static int3x2 int3x2(double3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x470C410", Offset = "0x470C410", VA = "0x470C410")]
	public static int2x3 transpose(int3x2 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x470C440", Offset = "0x470C440", VA = "0x470C440")]
	public static uint hash(int3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x470C4B0", Offset = "0x470C4B0", VA = "0x470C4B0")]
	public static uint3 hashwide(int3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x470C540", Offset = "0x470C540", VA = "0x470C540")]
	public static int3x3 int3x3(int3 c0, int3 c1, int3 c2)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x470C570", Offset = "0x470C570", VA = "0x470C570")]
	public static int3x3 int3x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x470C5B0", Offset = "0x470C5B0", VA = "0x470C5B0")]
	public static int3x3 int3x3(int v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x470C5E0", Offset = "0x470C5E0", VA = "0x470C5E0")]
	public static int3x3 int3x3(bool v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x470C610", Offset = "0x470C610", VA = "0x470C610")]
	public static int3x3 int3x3(bool3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x470C6A0", Offset = "0x470C6A0", VA = "0x470C6A0")]
	public static int3x3 int3x3(uint v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x470C6D0", Offset = "0x470C6D0", VA = "0x470C6D0")]
	public static int3x3 int3x3(uint3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x470C710", Offset = "0x470C710", VA = "0x470C710")]
	public static int3x3 int3x3(float v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x470C740", Offset = "0x470C740", VA = "0x470C740")]
	public static int3x3 int3x3(float3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x470C7C0", Offset = "0x470C7C0", VA = "0x470C7C0")]
	public static int3x3 int3x3(double v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x470C7F0", Offset = "0x470C7F0", VA = "0x470C7F0")]
	public static int3x3 int3x3(double3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x470C860", Offset = "0x470C860", VA = "0x470C860")]
	public static int3x3 transpose(int3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x470C8B0", Offset = "0x470C8B0", VA = "0x470C8B0")]
	public static int determinant(int3x3 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x470C910", Offset = "0x470C910", VA = "0x470C910")]
	public static uint hash(int3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x470C9C0", Offset = "0x470C9C0", VA = "0x470C9C0")]
	public static uint3 hashwide(int3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x470CA80", Offset = "0x470CA80", VA = "0x470CA80")]
	public static int3x4 int3x4(int3 c0, int3 c1, int3 c2, int3 c3)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x470CAC0", Offset = "0x470CAC0", VA = "0x470CAC0")]
	public static int3x4 int3x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x470CB20", Offset = "0x470CB20", VA = "0x470CB20")]
	public static int3x4 int3x4(int v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x470CB50", Offset = "0x470CB50", VA = "0x470CB50")]
	public static int3x4 int3x4(bool v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x470CB90", Offset = "0x470CB90", VA = "0x470CB90")]
	public static int3x4 int3x4(bool3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x470CC40", Offset = "0x470CC40", VA = "0x470CC40")]
	public static int3x4 int3x4(uint v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x470CC70", Offset = "0x470CC70", VA = "0x470CC70")]
	public static int3x4 int3x4(uint3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x470CCC0", Offset = "0x470CCC0", VA = "0x470CCC0")]
	public static int3x4 int3x4(float v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x470CCF0", Offset = "0x470CCF0", VA = "0x470CCF0")]
	public static int3x4 int3x4(float3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x470CD90", Offset = "0x470CD90", VA = "0x470CD90")]
	public static int3x4 int3x4(double v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x470CDC0", Offset = "0x470CDC0", VA = "0x470CDC0")]
	public static int3x4 int3x4(double3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x470CE60", Offset = "0x470CE60", VA = "0x470CE60")]
	public static int4x3 transpose(int3x4 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x470CED0", Offset = "0x470CED0", VA = "0x470CED0")]
	public static uint hash(int3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x470CFC0", Offset = "0x470CFC0", VA = "0x470CFC0")]
	public static uint3 hashwide(int3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x470D0C0", Offset = "0x470D0C0", VA = "0x470D0C0")]
	public static int4 int4(int x, int y, int z, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x470D0E0", Offset = "0x470D0E0", VA = "0x470D0E0")]
	public static int4 int4(int x, int y, int2 zw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x470D0F0", Offset = "0x470D0F0", VA = "0x470D0F0")]
	public static int4 int4(int x, int2 yz, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x470D100", Offset = "0x470D100", VA = "0x470D100")]
	public static int4 int4(int x, int3 yzw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000300")]
	[Address(RVA = "0x470D110", Offset = "0x470D110", VA = "0x470D110")]
	public static int4 int4(int2 xy, int z, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000301")]
	[Address(RVA = "0x470D120", Offset = "0x470D120", VA = "0x470D120")]
	public static int4 int4(int2 xy, int2 zw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000302")]
	[Address(RVA = "0x470D130", Offset = "0x470D130", VA = "0x470D130")]
	public static int4 int4(int3 xyz, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000303")]
	[Address(RVA = "0x470D140", Offset = "0x470D140", VA = "0x470D140")]
	public static int4 int4(int4 xyzw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000304")]
	[Address(RVA = "0x470D150", Offset = "0x470D150", VA = "0x470D150")]
	public static int4 int4(int v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000305")]
	[Address(RVA = "0x470D160", Offset = "0x470D160", VA = "0x470D160")]
	public static int4 int4(bool v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000306")]
	[Address(RVA = "0x470D170", Offset = "0x470D170", VA = "0x470D170")]
	public static int4 int4(bool4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000307")]
	[Address(RVA = "0x470D1A0", Offset = "0x470D1A0", VA = "0x470D1A0")]
	public static int4 int4(uint v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000308")]
	[Address(RVA = "0x470D1B0", Offset = "0x470D1B0", VA = "0x470D1B0")]
	public static int4 int4(uint4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000309")]
	[Address(RVA = "0x470D1C0", Offset = "0x470D1C0", VA = "0x470D1C0")]
	public static int4 int4(float v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030A")]
	[Address(RVA = "0x470D1E0", Offset = "0x470D1E0", VA = "0x470D1E0")]
	public static int4 int4(float4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030B")]
	[Address(RVA = "0x470D210", Offset = "0x470D210", VA = "0x470D210")]
	public static int4 int4(double v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030C")]
	[Address(RVA = "0x470D230", Offset = "0x470D230", VA = "0x470D230")]
	public static int4 int4(double4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030D")]
	[Address(RVA = "0x470D260", Offset = "0x470D260", VA = "0x470D260")]
	public static uint hash(int4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030E")]
	[Address(RVA = "0x470D2A0", Offset = "0x470D2A0", VA = "0x470D2A0")]
	public static uint4 hashwide(int4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030F")]
	[Address(RVA = "0x470D300", Offset = "0x470D300", VA = "0x470D300")]
	public static int shuffle(int4 left, int4 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000310")]
	[Address(RVA = "0x470D310", Offset = "0x470D310", VA = "0x470D310")]
	public static int2 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000311")]
	[Address(RVA = "0x470D370", Offset = "0x470D370", VA = "0x470D370")]
	public static int3 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000312")]
	[Address(RVA = "0x470D3F0", Offset = "0x470D3F0", VA = "0x470D3F0")]
	public static int4 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000313")]
	[Address(RVA = "0x470D4A0", Offset = "0x470D4A0", VA = "0x470D4A0")]
	internal static int select_shuffle_component(int4 a, int4 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000314")]
	[Address(RVA = "0x470D590", Offset = "0x470D590", VA = "0x470D590")]
	public static int4x2 int4x2(int4 c0, int4 c1)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000315")]
	[Address(RVA = "0x470D5B0", Offset = "0x470D5B0", VA = "0x470D5B0")]
	public static int4x2 int4x2(int m00, int m01, int m10, int m11, int m20, int m21, int m30, int m31)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000316")]
	[Address(RVA = "0x470D5E0", Offset = "0x470D5E0", VA = "0x470D5E0")]
	public static int4x2 int4x2(int v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000317")]
	[Address(RVA = "0x470D600", Offset = "0x470D600", VA = "0x470D600")]
	public static int4x2 int4x2(bool v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000318")]
	[Address(RVA = "0x470D630", Offset = "0x470D630", VA = "0x470D630")]
	public static int4x2 int4x2(bool4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000319")]
	[Address(RVA = "0x470D6B0", Offset = "0x470D6B0", VA = "0x470D6B0")]
	public static int4x2 int4x2(uint v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031A")]
	[Address(RVA = "0x470D6D0", Offset = "0x470D6D0", VA = "0x470D6D0")]
	public static int4x2 int4x2(uint4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031B")]
	[Address(RVA = "0x470D6F0", Offset = "0x470D6F0", VA = "0x470D6F0")]
	public static int4x2 int4x2(float v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031C")]
	[Address(RVA = "0x470D720", Offset = "0x470D720", VA = "0x470D720")]
	public static int4x2 int4x2(float4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031D")]
	[Address(RVA = "0x470D7A0", Offset = "0x470D7A0", VA = "0x470D7A0")]
	public static int4x2 int4x2(double v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031E")]
	[Address(RVA = "0x470D7D0", Offset = "0x470D7D0", VA = "0x470D7D0")]
	public static int4x2 int4x2(double4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031F")]
	[Address(RVA = "0x470D840", Offset = "0x470D840", VA = "0x470D840")]
	public static int2x4 transpose(int4x2 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000320")]
	[Address(RVA = "0x470D870", Offset = "0x470D870", VA = "0x470D870")]
	public static uint hash(int4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000321")]
	[Address(RVA = "0x470D920", Offset = "0x470D920", VA = "0x470D920")]
	public static uint4 hashwide(int4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000322")]
	[Address(RVA = "0x470D9E0", Offset = "0x470D9E0", VA = "0x470D9E0")]
	public static int4x3 int4x3(int4 c0, int4 c1, int4 c2)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000323")]
	[Address(RVA = "0x470DA00", Offset = "0x470DA00", VA = "0x470DA00")]
	public static int4x3 int4x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22, int m30, int m31, int m32)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000324")]
	[Address(RVA = "0x470DA60", Offset = "0x470DA60", VA = "0x470DA60")]
	public static int4x3 int4x3(int v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000325")]
	[Address(RVA = "0x470DA90", Offset = "0x470DA90", VA = "0x470DA90")]
	public static int4x3 int4x3(bool v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000326")]
	[Address(RVA = "0x470DAC0", Offset = "0x470DAC0", VA = "0x470DAC0")]
	public static int4x3 int4x3(bool4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000327")]
	[Address(RVA = "0x470DB70", Offset = "0x470DB70", VA = "0x470DB70")]
	public static int4x3 int4x3(uint v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000328")]
	[Address(RVA = "0x470DBA0", Offset = "0x470DBA0", VA = "0x470DBA0")]
	public static int4x3 int4x3(uint4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000329")]
	[Address(RVA = "0x470DBC0", Offset = "0x470DBC0", VA = "0x470DBC0")]
	public static int4x3 int4x3(float v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032A")]
	[Address(RVA = "0x470DBF0", Offset = "0x470DBF0", VA = "0x470DBF0")]
	public static int4x3 int4x3(float4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032B")]
	[Address(RVA = "0x470DCB0", Offset = "0x470DCB0", VA = "0x470DCB0")]
	public static int4x3 int4x3(double v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032C")]
	[Address(RVA = "0x470DCE0", Offset = "0x470DCE0", VA = "0x470DCE0")]
	public static int4x3 int4x3(double4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032D")]
	[Address(RVA = "0x470DD90", Offset = "0x470DD90", VA = "0x470DD90")]
	public static int3x4 transpose(int4x3 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032E")]
	[Address(RVA = "0x470DE00", Offset = "0x470DE00", VA = "0x470DE00")]
	public static uint hash(int4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032F")]
	[Address(RVA = "0x470DF20", Offset = "0x470DF20", VA = "0x470DF20")]
	public static uint4 hashwide(int4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000330")]
	[Address(RVA = "0x470E050", Offset = "0x470E050", VA = "0x470E050")]
	public static int4x4 int4x4(int4 c0, int4 c1, int4 c2, int4 c3)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000331")]
	[Address(RVA = "0x470E080", Offset = "0x470E080", VA = "0x470E080")]
	public static int4x4 int4x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23, int m30, int m31, int m32, int m33)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000332")]
	[Address(RVA = "0x470E0F0", Offset = "0x470E0F0", VA = "0x470E0F0")]
	public static int4x4 int4x4(int v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000333")]
	[Address(RVA = "0x470E120", Offset = "0x470E120", VA = "0x470E120")]
	public static int4x4 int4x4(bool v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000334")]
	[Address(RVA = "0x470E160", Offset = "0x470E160", VA = "0x470E160")]
	public static int4x4 int4x4(bool4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000335")]
	[Address(RVA = "0x470E240", Offset = "0x470E240", VA = "0x470E240")]
	public static int4x4 int4x4(uint v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000336")]
	[Address(RVA = "0x470E270", Offset = "0x470E270", VA = "0x470E270")]
	public static int4x4 int4x4(uint4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000337")]
	[Address(RVA = "0x470E2A0", Offset = "0x470E2A0", VA = "0x470E2A0")]
	public static int4x4 int4x4(float v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000338")]
	[Address(RVA = "0x470E2E0", Offset = "0x470E2E0", VA = "0x470E2E0")]
	public static int4x4 int4x4(float4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000339")]
	[Address(RVA = "0x470E3D0", Offset = "0x470E3D0", VA = "0x470E3D0")]
	public static int4x4 int4x4(double v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033A")]
	[Address(RVA = "0x470E410", Offset = "0x470E410", VA = "0x470E410")]
	public static int4x4 int4x4(double4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033B")]
	[Address(RVA = "0x470E500", Offset = "0x470E500", VA = "0x470E500")]
	public static int4x4 transpose(int4x4 v)
	{
		return default(int4x4);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x470E580", Offset = "0x470E580", VA = "0x470E580")]
	public static int determinant(int4x4 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033D")]
	[Address(RVA = "0x470E690", Offset = "0x470E690", VA = "0x470E690")]
	public static uint hash(int4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033E")]
	[Address(RVA = "0x470E800", Offset = "0x470E800", VA = "0x470E800")]
	public static uint4 hashwide(int4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033F")]
	[Address(RVA = "0x470E9A0", Offset = "0x470E9A0", VA = "0x470E9A0")]
	public static int asint(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000340")]
	[Address(RVA = "0x470E9B0", Offset = "0x470E9B0", VA = "0x470E9B0")]
	public static int2 asint(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000341")]
	[Address(RVA = "0x470E9C0", Offset = "0x470E9C0", VA = "0x470E9C0")]
	public static int3 asint(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000342")]
	[Address(RVA = "0x470E9D0", Offset = "0x470E9D0", VA = "0x470E9D0")]
	public static int4 asint(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000343")]
	[Address(RVA = "0x470E9E0", Offset = "0x470E9E0", VA = "0x470E9E0")]
	public static int asint(float x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000344")]
	[Address(RVA = "0x470E9F0", Offset = "0x470E9F0", VA = "0x470E9F0")]
	public static int2 asint(float2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000345")]
	[Address(RVA = "0x470EA10", Offset = "0x470EA10", VA = "0x470EA10")]
	public static int3 asint(float3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x470EA30", Offset = "0x470EA30", VA = "0x470EA30")]
	public static int4 asint(float4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000347")]
	[Address(RVA = "0x470EA60", Offset = "0x470EA60", VA = "0x470EA60")]
	public static uint asuint(int x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000348")]
	[Address(RVA = "0x470EA70", Offset = "0x470EA70", VA = "0x470EA70")]
	public static uint2 asuint(int2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000349")]
	[Address(RVA = "0x470EA80", Offset = "0x470EA80", VA = "0x470EA80")]
	public static uint3 asuint(int3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034A")]
	[Address(RVA = "0x470EA90", Offset = "0x470EA90", VA = "0x470EA90")]
	public static uint4 asuint(int4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034B")]
	[Address(RVA = "0x470EAA0", Offset = "0x470EAA0", VA = "0x470EAA0")]
	public static uint asuint(float x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034C")]
	[Address(RVA = "0x470EAB0", Offset = "0x470EAB0", VA = "0x470EAB0")]
	public static uint2 asuint(float2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034D")]
	[Address(RVA = "0x470EAD0", Offset = "0x470EAD0", VA = "0x470EAD0")]
	public static uint3 asuint(float3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034E")]
	[Address(RVA = "0x470EAF0", Offset = "0x470EAF0", VA = "0x470EAF0")]
	public static uint4 asuint(float4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034F")]
	[Address(RVA = "0x470EB20", Offset = "0x470EB20", VA = "0x470EB20")]
	public static long aslong(ulong x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000350")]
	[Address(RVA = "0x470EB30", Offset = "0x470EB30", VA = "0x470EB30")]
	public static long aslong(double x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000351")]
	[Address(RVA = "0x470EB40", Offset = "0x470EB40", VA = "0x470EB40")]
	public static ulong asulong(long x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000352")]
	[Address(RVA = "0x470EB50", Offset = "0x470EB50", VA = "0x470EB50")]
	public static ulong asulong(double x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000353")]
	[Address(RVA = "0x470EB60", Offset = "0x470EB60", VA = "0x470EB60")]
	public static float asfloat(int x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000354")]
	[Address(RVA = "0x470EB70", Offset = "0x470EB70", VA = "0x470EB70")]
	public static float2 asfloat(int2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000355")]
	[Address(RVA = "0x470EB90", Offset = "0x470EB90", VA = "0x470EB90")]
	public static float3 asfloat(int3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000356")]
	[Address(RVA = "0x470EBB0", Offset = "0x470EBB0", VA = "0x470EBB0")]
	public static float4 asfloat(int4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000357")]
	[Address(RVA = "0x470EBE0", Offset = "0x470EBE0", VA = "0x470EBE0")]
	public static float asfloat(uint x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000358")]
	[Address(RVA = "0x470EBF0", Offset = "0x470EBF0", VA = "0x470EBF0")]
	public static float2 asfloat(uint2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000359")]
	[Address(RVA = "0x470EC10", Offset = "0x470EC10", VA = "0x470EC10")]
	public static float3 asfloat(uint3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035A")]
	[Address(RVA = "0x470EC30", Offset = "0x470EC30", VA = "0x470EC30")]
	public static float4 asfloat(uint4 x)
	{
		return default(float4);
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x470EC60", Offset = "0x470EC60", VA = "0x470EC60")]
	public static int bitmask(bool4 value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035C")]
	[Address(RVA = "0x470EC90", Offset = "0x470EC90", VA = "0x470EC90")]
	public static double asdouble(long x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035D")]
	[Address(RVA = "0x470ECA0", Offset = "0x470ECA0", VA = "0x470ECA0")]
	public static double asdouble(ulong x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035E")]
	[Address(RVA = "0x470ECB0", Offset = "0x470ECB0", VA = "0x470ECB0")]
	public static bool isfinite(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035F")]
	[Address(RVA = "0x470ECD0", Offset = "0x470ECD0", VA = "0x470ECD0")]
	public static bool2 isfinite(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000360")]
	[Address(RVA = "0x470ED10", Offset = "0x470ED10", VA = "0x470ED10")]
	public static bool3 isfinite(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000361")]
	[Address(RVA = "0x470ED70", Offset = "0x470ED70", VA = "0x470ED70")]
	public static bool4 isfinite(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000362")]
	[Address(RVA = "0x470EDF0", Offset = "0x470EDF0", VA = "0x470EDF0")]
	public static bool isfinite(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000363")]
	[Address(RVA = "0x470EE10", Offset = "0x470EE10", VA = "0x470EE10")]
	public static bool2 isfinite(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000364")]
	[Address(RVA = "0x470EE40", Offset = "0x470EE40", VA = "0x470EE40")]
	public static bool3 isfinite(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000365")]
	[Address(RVA = "0x470EEA0", Offset = "0x470EEA0", VA = "0x470EEA0")]
	public static bool4 isfinite(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000366")]
	[Address(RVA = "0x470EF20", Offset = "0x470EF20", VA = "0x470EF20")]
	public static bool isinf(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000367")]
	[Address(RVA = "0x470EF40", Offset = "0x470EF40", VA = "0x470EF40")]
	public static bool2 isinf(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000368")]
	[Address(RVA = "0x470EF80", Offset = "0x470EF80", VA = "0x470EF80")]
	public static bool3 isinf(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000369")]
	[Address(RVA = "0x470EFE0", Offset = "0x470EFE0", VA = "0x470EFE0")]
	public static bool4 isinf(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036A")]
	[Address(RVA = "0x470F060", Offset = "0x470F060", VA = "0x470F060")]
	public static bool isinf(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036B")]
	[Address(RVA = "0x470F080", Offset = "0x470F080", VA = "0x470F080")]
	public static bool2 isinf(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036C")]
	[Address(RVA = "0x470F0B0", Offset = "0x470F0B0", VA = "0x470F0B0")]
	public static bool3 isinf(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036D")]
	[Address(RVA = "0x470F110", Offset = "0x470F110", VA = "0x470F110")]
	public static bool4 isinf(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036E")]
	[Address(RVA = "0x470F190", Offset = "0x470F190", VA = "0x470F190")]
	public static bool isnan(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036F")]
	[Address(RVA = "0x470F1B0", Offset = "0x470F1B0", VA = "0x470F1B0")]
	public static bool2 isnan(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000370")]
	[Address(RVA = "0x470F1F0", Offset = "0x470F1F0", VA = "0x470F1F0")]
	public static bool3 isnan(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000371")]
	[Address(RVA = "0x470F240", Offset = "0x470F240", VA = "0x470F240")]
	public static bool4 isnan(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000372")]
	[Address(RVA = "0x470F2B0", Offset = "0x470F2B0", VA = "0x470F2B0")]
	public static bool isnan(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000373")]
	[Address(RVA = "0x470F2E0", Offset = "0x470F2E0", VA = "0x470F2E0")]
	public static bool2 isnan(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000374")]
	[Address(RVA = "0x470F320", Offset = "0x470F320", VA = "0x470F320")]
	public static bool3 isnan(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000375")]
	[Address(RVA = "0x470F370", Offset = "0x470F370", VA = "0x470F370")]
	public static bool4 isnan(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000376")]
	[Address(RVA = "0x470F3E0", Offset = "0x470F3E0", VA = "0x470F3E0")]
	public static bool ispow2(int x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000377")]
	[Address(RVA = "0x470F3F0", Offset = "0x470F3F0", VA = "0x470F3F0")]
	public static bool2 ispow2(int2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000378")]
	[Address(RVA = "0x470F430", Offset = "0x470F430", VA = "0x470F430")]
	public static bool3 ispow2(int3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000379")]
	[Address(RVA = "0x470F480", Offset = "0x470F480", VA = "0x470F480")]
	public static bool4 ispow2(int4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037A")]
	[Address(RVA = "0x470F4F0", Offset = "0x470F4F0", VA = "0x470F4F0")]
	public static bool ispow2(uint x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037B")]
	[Address(RVA = "0x470F500", Offset = "0x470F500", VA = "0x470F500")]
	public static bool2 ispow2(uint2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037C")]
	[Address(RVA = "0x470F540", Offset = "0x470F540", VA = "0x470F540")]
	public static bool3 ispow2(uint3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037D")]
	[Address(RVA = "0x470F590", Offset = "0x470F590", VA = "0x470F590")]
	public static bool4 ispow2(uint4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037E")]
	[Address(RVA = "0x470F600", Offset = "0x470F600", VA = "0x470F600")]
	public static int min(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037F")]
	[Address(RVA = "0x470F610", Offset = "0x470F610", VA = "0x470F610")]
	public static int2 min(int2 x, int2 y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000380")]
	[Address(RVA = "0x470F640", Offset = "0x470F640", VA = "0x470F640")]
	public static int3 min(int3 x, int3 y)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000381")]
	[Address(RVA = "0x470F670", Offset = "0x470F670", VA = "0x470F670")]
	public static int4 min(int4 x, int4 y)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000382")]
	[Address(RVA = "0x470F6C0", Offset = "0x470F6C0", VA = "0x470F6C0")]
	public static uint min(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000383")]
	[Address(RVA = "0x470F6D0", Offset = "0x470F6D0", VA = "0x470F6D0")]
	public static uint2 min(uint2 x, uint2 y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000384")]
	[Address(RVA = "0x470F700", Offset = "0x470F700", VA = "0x470F700")]
	public static uint3 min(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000385")]
	[Address(RVA = "0x470F730", Offset = "0x470F730", VA = "0x470F730")]
	public static uint4 min(uint4 x, uint4 y)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000386")]
	[Address(RVA = "0x470F780", Offset = "0x470F780", VA = "0x470F780")]
	public static long min(long x, long y)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000387")]
	[Address(RVA = "0x470F790", Offset = "0x470F790", VA = "0x470F790")]
	public static ulong min(ulong x, ulong y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000388")]
	[Address(RVA = "0x470F7A0", Offset = "0x470F7A0", VA = "0x470F7A0")]
	public static float min(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000389")]
	[Address(RVA = "0x470F7E0", Offset = "0x470F7E0", VA = "0x470F7E0")]
	public static float2 min(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038A")]
	[Address(RVA = "0x470F850", Offset = "0x470F850", VA = "0x470F850")]
	public static float3 min(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038B")]
	[Address(RVA = "0x470F8F0", Offset = "0x470F8F0", VA = "0x470F8F0")]
	public static float4 min(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038C")]
	[Address(RVA = "0x470F9C0", Offset = "0x470F9C0", VA = "0x470F9C0")]
	public static double min(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038D")]
	[Address(RVA = "0x470FA00", Offset = "0x470FA00", VA = "0x470FA00")]
	public static double2 min(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038E")]
	[Address(RVA = "0x470FA70", Offset = "0x470FA70", VA = "0x470FA70")]
	public static double3 min(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038F")]
	[Address(RVA = "0x470FB30", Offset = "0x470FB30", VA = "0x470FB30")]
	public static double4 min(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000390")]
	[Address(RVA = "0x470FC30", Offset = "0x470FC30", VA = "0x470FC30")]
	public static int max(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000391")]
	[Address(RVA = "0x470FC40", Offset = "0x470FC40", VA = "0x470FC40")]
	public static int2 max(int2 x, int2 y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000392")]
	[Address(RVA = "0x470FC70", Offset = "0x470FC70", VA = "0x470FC70")]
	public static int3 max(int3 x, int3 y)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000393")]
	[Address(RVA = "0x470FCA0", Offset = "0x470FCA0", VA = "0x470FCA0")]
	public static int4 max(int4 x, int4 y)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000394")]
	[Address(RVA = "0x470FCF0", Offset = "0x470FCF0", VA = "0x470FCF0")]
	public static uint max(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000395")]
	[Address(RVA = "0x470FD00", Offset = "0x470FD00", VA = "0x470FD00")]
	public static uint2 max(uint2 x, uint2 y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000396")]
	[Address(RVA = "0x470FD30", Offset = "0x470FD30", VA = "0x470FD30")]
	public static uint3 max(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000397")]
	[Address(RVA = "0x470FD60", Offset = "0x470FD60", VA = "0x470FD60")]
	public static uint4 max(uint4 x, uint4 y)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000398")]
	[Address(RVA = "0x470FDB0", Offset = "0x470FDB0", VA = "0x470FDB0")]
	public static long max(long x, long y)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000399")]
	[Address(RVA = "0x470FDC0", Offset = "0x470FDC0", VA = "0x470FDC0")]
	public static ulong max(ulong x, ulong y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039A")]
	[Address(RVA = "0x470FDD0", Offset = "0x470FDD0", VA = "0x470FDD0")]
	public static float max(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039B")]
	[Address(RVA = "0x470FE00", Offset = "0x470FE00", VA = "0x470FE00")]
	public static float2 max(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039C")]
	[Address(RVA = "0x470FE70", Offset = "0x470FE70", VA = "0x470FE70")]
	public static float3 max(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039D")]
	[Address(RVA = "0x470FF00", Offset = "0x470FF00", VA = "0x470FF00")]
	public static float4 max(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039E")]
	[Address(RVA = "0x470FFD0", Offset = "0x470FFD0", VA = "0x470FFD0")]
	public static double max(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4710010", Offset = "0x4710010", VA = "0x4710010")]
	public static double2 max(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4710080", Offset = "0x4710080", VA = "0x4710080")]
	public static double3 max(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x4710140", Offset = "0x4710140", VA = "0x4710140")]
	public static double4 max(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x4710240", Offset = "0x4710240", VA = "0x4710240")]
	public static float lerp(float x, float y, float s)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x4710250", Offset = "0x4710250", VA = "0x4710250")]
	public static float2 lerp(float2 x, float2 y, float s)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x4710260", Offset = "0x4710260", VA = "0x4710260")]
	public static float3 lerp(float3 x, float3 y, float s)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x4710280", Offset = "0x4710280", VA = "0x4710280")]
	public static float4 lerp(float4 x, float4 y, float s)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x47102A0", Offset = "0x47102A0", VA = "0x47102A0")]
	public static float2 lerp(float2 x, float2 y, float2 s)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x47102B0", Offset = "0x47102B0", VA = "0x47102B0")]
	public static float3 lerp(float3 x, float3 y, float3 s)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x47102D0", Offset = "0x47102D0", VA = "0x47102D0")]
	public static float4 lerp(float4 x, float4 y, float4 s)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x47102F0", Offset = "0x47102F0", VA = "0x47102F0")]
	public static double lerp(double x, double y, double s)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x4710300", Offset = "0x4710300", VA = "0x4710300")]
	public static double2 lerp(double2 x, double2 y, double s)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x4710330", Offset = "0x4710330", VA = "0x4710330")]
	public static double3 lerp(double3 x, double3 y, double s)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4710380", Offset = "0x4710380", VA = "0x4710380")]
	public static double4 lerp(double4 x, double4 y, double s)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x47103D0", Offset = "0x47103D0", VA = "0x47103D0")]
	public static double2 lerp(double2 x, double2 y, double2 s)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x4710400", Offset = "0x4710400", VA = "0x4710400")]
	public static double3 lerp(double3 x, double3 y, double3 s)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x4710450", Offset = "0x4710450", VA = "0x4710450")]
	public static double4 lerp(double4 x, double4 y, double4 s)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x47104A0", Offset = "0x47104A0", VA = "0x47104A0")]
	public static float unlerp(float a, float b, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x47104B0", Offset = "0x47104B0", VA = "0x47104B0")]
	public static float2 unlerp(float2 a, float2 b, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x47104C0", Offset = "0x47104C0", VA = "0x47104C0")]
	public static float3 unlerp(float3 a, float3 b, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x47104E0", Offset = "0x47104E0", VA = "0x47104E0")]
	public static float4 unlerp(float4 a, float4 b, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4710500", Offset = "0x4710500", VA = "0x4710500")]
	public static double unlerp(double a, double b, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4710520", Offset = "0x4710520", VA = "0x4710520")]
	public static double2 unlerp(double2 a, double2 b, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4710550", Offset = "0x4710550", VA = "0x4710550")]
	public static double3 unlerp(double3 a, double3 b, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x47105A0", Offset = "0x47105A0", VA = "0x47105A0")]
	public static double4 unlerp(double4 a, double4 b, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x47105F0", Offset = "0x47105F0", VA = "0x47105F0")]
	public static float remap(float a, float b, float c, float d, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x4710610", Offset = "0x4710610", VA = "0x4710610")]
	public static float2 remap(float2 a, float2 b, float2 c, float2 d, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x4710630", Offset = "0x4710630", VA = "0x4710630")]
	public static float3 remap(float3 a, float3 b, float3 c, float3 d, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4710680", Offset = "0x4710680", VA = "0x4710680")]
	public static float4 remap(float4 a, float4 b, float4 c, float4 d, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x47106D0", Offset = "0x47106D0", VA = "0x47106D0")]
	public static double remap(double a, double b, double c, double d, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x47106F0", Offset = "0x47106F0", VA = "0x47106F0")]
	public static double2 remap(double2 a, double2 b, double2 c, double2 d, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x4710730", Offset = "0x4710730", VA = "0x4710730")]
	public static double3 remap(double3 a, double3 b, double3 c, double3 d, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x47107B0", Offset = "0x47107B0", VA = "0x47107B0")]
	public static double4 remap(double4 a, double4 b, double4 c, double4 d, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4710840", Offset = "0x4710840", VA = "0x4710840")]
	public static int mad(int a, int b, int c)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x4710850", Offset = "0x4710850", VA = "0x4710850")]
	public static int2 mad(int2 a, int2 b, int2 c)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4710890", Offset = "0x4710890", VA = "0x4710890")]
	public static int3 mad(int3 a, int3 b, int3 c)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x47108D0", Offset = "0x47108D0", VA = "0x47108D0")]
	public static int4 mad(int4 a, int4 b, int4 c)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x4710940", Offset = "0x4710940", VA = "0x4710940")]
	public static uint mad(uint a, uint b, uint c)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4710950", Offset = "0x4710950", VA = "0x4710950")]
	public static uint2 mad(uint2 a, uint2 b, uint2 c)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x4710990", Offset = "0x4710990", VA = "0x4710990")]
	public static uint3 mad(uint3 a, uint3 b, uint3 c)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x47109D0", Offset = "0x47109D0", VA = "0x47109D0")]
	public static uint4 mad(uint4 a, uint4 b, uint4 c)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x4710A40", Offset = "0x4710A40", VA = "0x4710A40")]
	public static long mad(long a, long b, long c)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x4710A50", Offset = "0x4710A50", VA = "0x4710A50")]
	public static ulong mad(ulong a, ulong b, ulong c)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x4710A60", Offset = "0x4710A60", VA = "0x4710A60")]
	public static float mad(float a, float b, float c)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x4710A70", Offset = "0x4710A70", VA = "0x4710A70")]
	public static float2 mad(float2 a, float2 b, float2 c)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4710A80", Offset = "0x4710A80", VA = "0x4710A80")]
	public static float3 mad(float3 a, float3 b, float3 c)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x4710A90", Offset = "0x4710A90", VA = "0x4710A90")]
	public static float4 mad(float4 a, float4 b, float4 c)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x4710AA0", Offset = "0x4710AA0", VA = "0x4710AA0")]
	public static double mad(double a, double b, double c)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x4710AB0", Offset = "0x4710AB0", VA = "0x4710AB0")]
	public static double2 mad(double2 a, double2 b, double2 c)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x4710AD0", Offset = "0x4710AD0", VA = "0x4710AD0")]
	public static double3 mad(double3 a, double3 b, double3 c)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x4710B10", Offset = "0x4710B10", VA = "0x4710B10")]
	public static double4 mad(double4 a, double4 b, double4 c)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x4710B50", Offset = "0x4710B50", VA = "0x4710B50")]
	public static int clamp(int x, int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x4710B60", Offset = "0x4710B60", VA = "0x4710B60")]
	public static int2 clamp(int2 x, int2 a, int2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4710BA0", Offset = "0x4710BA0", VA = "0x4710BA0")]
	public static int3 clamp(int3 x, int3 a, int3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x4710BF0", Offset = "0x4710BF0", VA = "0x4710BF0")]
	public static int4 clamp(int4 x, int4 a, int4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x4710C70", Offset = "0x4710C70", VA = "0x4710C70")]
	public static uint clamp(uint x, uint a, uint b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x4710C80", Offset = "0x4710C80", VA = "0x4710C80")]
	public static uint2 clamp(uint2 x, uint2 a, uint2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x4710CC0", Offset = "0x4710CC0", VA = "0x4710CC0")]
	public static uint3 clamp(uint3 x, uint3 a, uint3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x4710D10", Offset = "0x4710D10", VA = "0x4710D10")]
	public static uint4 clamp(uint4 x, uint4 a, uint4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x4710D90", Offset = "0x4710D90", VA = "0x4710D90")]
	public static long clamp(long x, long a, long b)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4710DB0", Offset = "0x4710DB0", VA = "0x4710DB0")]
	public static ulong clamp(ulong x, ulong a, ulong b)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x4710DD0", Offset = "0x4710DD0", VA = "0x4710DD0")]
	public static float clamp(float x, float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4710E30", Offset = "0x4710E30", VA = "0x4710E30")]
	public static float2 clamp(float2 x, float2 a, float2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4710EF0", Offset = "0x4710EF0", VA = "0x4710EF0")]
	public static float3 clamp(float3 x, float3 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4710FC0", Offset = "0x4710FC0", VA = "0x4710FC0")]
	public static float4 clamp(float4 x, float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x47110E0", Offset = "0x47110E0", VA = "0x47110E0")]
	public static double clamp(double x, double a, double b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4711150", Offset = "0x4711150", VA = "0x4711150")]
	public static double2 clamp(double2 x, double2 a, double2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x47111E0", Offset = "0x47111E0", VA = "0x47111E0")]
	public static double3 clamp(double3 x, double3 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4711330", Offset = "0x4711330", VA = "0x4711330")]
	public static double4 clamp(double4 x, double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x4711500", Offset = "0x4711500", VA = "0x4711500")]
	public static float saturate(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4711560", Offset = "0x4711560", VA = "0x4711560")]
	public static float2 saturate(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4711620", Offset = "0x4711620", VA = "0x4711620")]
	public static float3 saturate(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4711730", Offset = "0x4711730", VA = "0x4711730")]
	public static float4 saturate(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x4711890", Offset = "0x4711890", VA = "0x4711890")]
	public static double saturate(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4711900", Offset = "0x4711900", VA = "0x4711900")]
	public static double2 saturate(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x47119C0", Offset = "0x47119C0", VA = "0x47119C0")]
	public static double3 saturate(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x4711AD0", Offset = "0x4711AD0", VA = "0x4711AD0")]
	public static double4 saturate(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x4711C50", Offset = "0x4711C50", VA = "0x4711C50")]
	public static int abs(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4711C60", Offset = "0x4711C60", VA = "0x4711C60")]
	public static int2 abs(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4711CA0", Offset = "0x4711CA0", VA = "0x4711CA0")]
	public static int3 abs(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4711CF0", Offset = "0x4711CF0", VA = "0x4711CF0")]
	public static int4 abs(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x4711D60", Offset = "0x4711D60", VA = "0x4711D60")]
	public static long abs(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x4711D70", Offset = "0x4711D70", VA = "0x4711D70")]
	public static float abs(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x4711D80", Offset = "0x4711D80", VA = "0x4711D80")]
	public static float2 abs(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x4711D90", Offset = "0x4711D90", VA = "0x4711D90")]
	public static float3 abs(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x4711DA0", Offset = "0x4711DA0", VA = "0x4711DA0")]
	public static float4 abs(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x4711DB0", Offset = "0x4711DB0", VA = "0x4711DB0")]
	public static double abs(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x4711DC0", Offset = "0x4711DC0", VA = "0x4711DC0")]
	public static double2 abs(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x4711DD0", Offset = "0x4711DD0", VA = "0x4711DD0")]
	public static double3 abs(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x4711E00", Offset = "0x4711E00", VA = "0x4711E00")]
	public static double4 abs(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x4711E20", Offset = "0x4711E20", VA = "0x4711E20")]
	public static int dot(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x4711E30", Offset = "0x4711E30", VA = "0x4711E30")]
	public static int dot(int2 x, int2 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x4711E50", Offset = "0x4711E50", VA = "0x4711E50")]
	public static int dot(int3 x, int3 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x4711E70", Offset = "0x4711E70", VA = "0x4711E70")]
	public static int dot(int4 x, int4 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x4711EA0", Offset = "0x4711EA0", VA = "0x4711EA0")]
	public static uint dot(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x4711EB0", Offset = "0x4711EB0", VA = "0x4711EB0")]
	public static uint dot(uint2 x, uint2 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4711ED0", Offset = "0x4711ED0", VA = "0x4711ED0")]
	public static uint dot(uint3 x, uint3 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000400")]
	[Address(RVA = "0x4711EF0", Offset = "0x4711EF0", VA = "0x4711EF0")]
	public static uint dot(uint4 x, uint4 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000401")]
	[Address(RVA = "0x4711F20", Offset = "0x4711F20", VA = "0x4711F20")]
	public static float dot(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4711F30", Offset = "0x4711F30", VA = "0x4711F30")]
	public static float dot(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000403")]
	[Address(RVA = "0x4711F50", Offset = "0x4711F50", VA = "0x4711F50")]
	public static float dot(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000404")]
	[Address(RVA = "0x4711F70", Offset = "0x4711F70", VA = "0x4711F70")]
	public static float dot(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000405")]
	[Address(RVA = "0x4711FA0", Offset = "0x4711FA0", VA = "0x4711FA0")]
	public static double dot(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000406")]
	[Address(RVA = "0x4711FB0", Offset = "0x4711FB0", VA = "0x4711FB0")]
	public static double dot(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000407")]
	[Address(RVA = "0x4711FC0", Offset = "0x4711FC0", VA = "0x4711FC0")]
	public static double dot(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000408")]
	[Address(RVA = "0x4711FF0", Offset = "0x4711FF0", VA = "0x4711FF0")]
	public static double dot(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000409")]
	[Address(RVA = "0x4712030", Offset = "0x4712030", VA = "0x4712030")]
	public static float tan(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040A")]
	[Address(RVA = "0x4712090", Offset = "0x4712090", VA = "0x4712090")]
	public static float2 tan(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040B")]
	[Address(RVA = "0x4712170", Offset = "0x4712170", VA = "0x4712170")]
	public static float3 tan(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040C")]
	[Address(RVA = "0x47122D0", Offset = "0x47122D0", VA = "0x47122D0")]
	public static float4 tan(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040D")]
	[Address(RVA = "0x47124B0", Offset = "0x47124B0", VA = "0x47124B0")]
	public static double tan(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040E")]
	[Address(RVA = "0x4712520", Offset = "0x4712520", VA = "0x4712520")]
	public static double2 tan(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040F")]
	[Address(RVA = "0x4712610", Offset = "0x4712610", VA = "0x4712610")]
	public static double3 tan(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000410")]
	[Address(RVA = "0x4712790", Offset = "0x4712790", VA = "0x4712790")]
	public static double4 tan(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000411")]
	[Address(RVA = "0x4712980", Offset = "0x4712980", VA = "0x4712980")]
	public static float tanh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000412")]
	[Address(RVA = "0x47129E0", Offset = "0x47129E0", VA = "0x47129E0")]
	public static float2 tanh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000413")]
	[Address(RVA = "0x4712AC0", Offset = "0x4712AC0", VA = "0x4712AC0")]
	public static float3 tanh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000414")]
	[Address(RVA = "0x4712C20", Offset = "0x4712C20", VA = "0x4712C20")]
	public static float4 tanh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000415")]
	[Address(RVA = "0x4712E00", Offset = "0x4712E00", VA = "0x4712E00")]
	public static double tanh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000416")]
	[Address(RVA = "0x4712E70", Offset = "0x4712E70", VA = "0x4712E70")]
	public static double2 tanh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000417")]
	[Address(RVA = "0x4712F60", Offset = "0x4712F60", VA = "0x4712F60")]
	public static double3 tanh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000418")]
	[Address(RVA = "0x47130E0", Offset = "0x47130E0", VA = "0x47130E0")]
	public static double4 tanh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000419")]
	[Address(RVA = "0x47132D0", Offset = "0x47132D0", VA = "0x47132D0")]
	public static float atan(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4713330", Offset = "0x4713330", VA = "0x4713330")]
	public static float2 atan(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041B")]
	[Address(RVA = "0x4713410", Offset = "0x4713410", VA = "0x4713410")]
	public static float3 atan(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041C")]
	[Address(RVA = "0x4713570", Offset = "0x4713570", VA = "0x4713570")]
	public static float4 atan(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4713750", Offset = "0x4713750", VA = "0x4713750")]
	public static double atan(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041E")]
	[Address(RVA = "0x47137C0", Offset = "0x47137C0", VA = "0x47137C0")]
	public static double2 atan(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041F")]
	[Address(RVA = "0x47138B0", Offset = "0x47138B0", VA = "0x47138B0")]
	public static double3 atan(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000420")]
	[Address(RVA = "0x4713A30", Offset = "0x4713A30", VA = "0x4713A30")]
	public static double4 atan(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000421")]
	[Address(RVA = "0x4713C20", Offset = "0x4713C20", VA = "0x4713C20")]
	public static float atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4713CA0", Offset = "0x4713CA0", VA = "0x4713CA0")]
	public static float2 atan2(float2 y, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4713DB0", Offset = "0x4713DB0", VA = "0x4713DB0")]
	public static float3 atan2(float3 y, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4713F40", Offset = "0x4713F40", VA = "0x4713F40")]
	public static float4 atan2(float4 y, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000425")]
	[Address(RVA = "0x4714160", Offset = "0x4714160", VA = "0x4714160")]
	public static double atan2(double y, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000426")]
	[Address(RVA = "0x47141F0", Offset = "0x47141F0", VA = "0x47141F0")]
	public static double2 atan2(double2 y, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4714300", Offset = "0x4714300", VA = "0x4714300")]
	public static double3 atan2(double3 y, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000428")]
	[Address(RVA = "0x47144E0", Offset = "0x47144E0", VA = "0x47144E0")]
	public static double4 atan2(double4 y, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4714750", Offset = "0x4714750", VA = "0x4714750")]
	public static float cos(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042A")]
	[Address(RVA = "0x47147B0", Offset = "0x47147B0", VA = "0x47147B0")]
	public static float2 cos(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042B")]
	[Address(RVA = "0x4714890", Offset = "0x4714890", VA = "0x4714890")]
	public static float3 cos(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042C")]
	[Address(RVA = "0x47149F0", Offset = "0x47149F0", VA = "0x47149F0")]
	public static float4 cos(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4714BD0", Offset = "0x4714BD0", VA = "0x4714BD0")]
	public static double cos(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4714C40", Offset = "0x4714C40", VA = "0x4714C40")]
	public static double2 cos(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4714D30", Offset = "0x4714D30", VA = "0x4714D30")]
	public static double3 cos(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4714EB0", Offset = "0x4714EB0", VA = "0x4714EB0")]
	public static double4 cos(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000431")]
	[Address(RVA = "0x47150A0", Offset = "0x47150A0", VA = "0x47150A0")]
	public static float cosh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000432")]
	[Address(RVA = "0x4715100", Offset = "0x4715100", VA = "0x4715100")]
	public static float2 cosh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000433")]
	[Address(RVA = "0x47151E0", Offset = "0x47151E0", VA = "0x47151E0")]
	public static float3 cosh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000434")]
	[Address(RVA = "0x4715340", Offset = "0x4715340", VA = "0x4715340")]
	public static float4 cosh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4715520", Offset = "0x4715520", VA = "0x4715520")]
	public static double cosh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000436")]
	[Address(RVA = "0x4715590", Offset = "0x4715590", VA = "0x4715590")]
	public static double2 cosh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000437")]
	[Address(RVA = "0x4715680", Offset = "0x4715680", VA = "0x4715680")]
	public static double3 cosh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000438")]
	[Address(RVA = "0x4715800", Offset = "0x4715800", VA = "0x4715800")]
	public static double4 cosh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000439")]
	[Address(RVA = "0x47159F0", Offset = "0x47159F0", VA = "0x47159F0")]
	public static float acos(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043A")]
	[Address(RVA = "0x4715A50", Offset = "0x4715A50", VA = "0x4715A50")]
	public static float2 acos(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043B")]
	[Address(RVA = "0x4715B30", Offset = "0x4715B30", VA = "0x4715B30")]
	public static float3 acos(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043C")]
	[Address(RVA = "0x4715C90", Offset = "0x4715C90", VA = "0x4715C90")]
	public static float4 acos(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043D")]
	[Address(RVA = "0x4715E70", Offset = "0x4715E70", VA = "0x4715E70")]
	public static double acos(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043E")]
	[Address(RVA = "0x4715EE0", Offset = "0x4715EE0", VA = "0x4715EE0")]
	public static double2 acos(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043F")]
	[Address(RVA = "0x4715FD0", Offset = "0x4715FD0", VA = "0x4715FD0")]
	public static double3 acos(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000440")]
	[Address(RVA = "0x4716150", Offset = "0x4716150", VA = "0x4716150")]
	public static double4 acos(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000441")]
	[Address(RVA = "0x4716340", Offset = "0x4716340", VA = "0x4716340")]
	public static float sin(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000442")]
	[Address(RVA = "0x47163A0", Offset = "0x47163A0", VA = "0x47163A0")]
	public static float2 sin(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000443")]
	[Address(RVA = "0x4716480", Offset = "0x4716480", VA = "0x4716480")]
	public static float3 sin(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000444")]
	[Address(RVA = "0x47165E0", Offset = "0x47165E0", VA = "0x47165E0")]
	public static float4 sin(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000445")]
	[Address(RVA = "0x47167C0", Offset = "0x47167C0", VA = "0x47167C0")]
	public static double sin(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000446")]
	[Address(RVA = "0x4716830", Offset = "0x4716830", VA = "0x4716830")]
	public static double2 sin(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000447")]
	[Address(RVA = "0x4716920", Offset = "0x4716920", VA = "0x4716920")]
	public static double3 sin(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000448")]
	[Address(RVA = "0x4716AA0", Offset = "0x4716AA0", VA = "0x4716AA0")]
	public static double4 sin(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000449")]
	[Address(RVA = "0x4716C90", Offset = "0x4716C90", VA = "0x4716C90")]
	public static float sinh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044A")]
	[Address(RVA = "0x4716CF0", Offset = "0x4716CF0", VA = "0x4716CF0")]
	public static float2 sinh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044B")]
	[Address(RVA = "0x4716DD0", Offset = "0x4716DD0", VA = "0x4716DD0")]
	public static float3 sinh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044C")]
	[Address(RVA = "0x4716F30", Offset = "0x4716F30", VA = "0x4716F30")]
	public static float4 sinh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4717110", Offset = "0x4717110", VA = "0x4717110")]
	public static double sinh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044E")]
	[Address(RVA = "0x4717180", Offset = "0x4717180", VA = "0x4717180")]
	public static double2 sinh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4717270", Offset = "0x4717270", VA = "0x4717270")]
	public static double3 sinh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000450")]
	[Address(RVA = "0x47173F0", Offset = "0x47173F0", VA = "0x47173F0")]
	public static double4 sinh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000451")]
	[Address(RVA = "0x47175E0", Offset = "0x47175E0", VA = "0x47175E0")]
	public static float asin(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000452")]
	[Address(RVA = "0x4717640", Offset = "0x4717640", VA = "0x4717640")]
	public static float2 asin(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000453")]
	[Address(RVA = "0x4717720", Offset = "0x4717720", VA = "0x4717720")]
	public static float3 asin(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000454")]
	[Address(RVA = "0x4717880", Offset = "0x4717880", VA = "0x4717880")]
	public static float4 asin(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000455")]
	[Address(RVA = "0x4717A60", Offset = "0x4717A60", VA = "0x4717A60")]
	public static double asin(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000456")]
	[Address(RVA = "0x4717AD0", Offset = "0x4717AD0", VA = "0x4717AD0")]
	public static double2 asin(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000457")]
	[Address(RVA = "0x4717BC0", Offset = "0x4717BC0", VA = "0x4717BC0")]
	public static double3 asin(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000458")]
	[Address(RVA = "0x4717D40", Offset = "0x4717D40", VA = "0x4717D40")]
	public static double4 asin(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4717F30", Offset = "0x4717F30", VA = "0x4717F30")]
	public static float floor(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045A")]
	[Address(RVA = "0x4717FA0", Offset = "0x4717FA0", VA = "0x4717FA0")]
	public static float2 floor(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4718090", Offset = "0x4718090", VA = "0x4718090")]
	public static float3 floor(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045C")]
	[Address(RVA = "0x47181F0", Offset = "0x47181F0", VA = "0x47181F0")]
	public static float4 floor(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045D")]
	[Address(RVA = "0x47183D0", Offset = "0x47183D0", VA = "0x47183D0")]
	public static double floor(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045E")]
	[Address(RVA = "0x4718440", Offset = "0x4718440", VA = "0x4718440")]
	public static double2 floor(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045F")]
	[Address(RVA = "0x4718520", Offset = "0x4718520", VA = "0x4718520")]
	public static double3 floor(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000460")]
	[Address(RVA = "0x47186C0", Offset = "0x47186C0", VA = "0x47186C0")]
	public static double4 floor(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000461")]
	[Address(RVA = "0x47188F0", Offset = "0x47188F0", VA = "0x47188F0")]
	public static float ceil(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000462")]
	[Address(RVA = "0x4718960", Offset = "0x4718960", VA = "0x4718960")]
	public static float2 ceil(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000463")]
	[Address(RVA = "0x4718A50", Offset = "0x4718A50", VA = "0x4718A50")]
	public static float3 ceil(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000464")]
	[Address(RVA = "0x4718BB0", Offset = "0x4718BB0", VA = "0x4718BB0")]
	public static float4 ceil(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000465")]
	[Address(RVA = "0x4718D90", Offset = "0x4718D90", VA = "0x4718D90")]
	public static double ceil(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000466")]
	[Address(RVA = "0x4718E00", Offset = "0x4718E00", VA = "0x4718E00")]
	public static double2 ceil(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4718EE0", Offset = "0x4718EE0", VA = "0x4718EE0")]
	public static double3 ceil(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000468")]
	[Address(RVA = "0x4719080", Offset = "0x4719080", VA = "0x4719080")]
	public static double4 ceil(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000469")]
	[Address(RVA = "0x47192B0", Offset = "0x47192B0", VA = "0x47192B0")]
	public static float round(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046A")]
	[Address(RVA = "0x47193B0", Offset = "0x47193B0", VA = "0x47193B0")]
	public static float2 round(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046B")]
	[Address(RVA = "0x47195E0", Offset = "0x47195E0", VA = "0x47195E0")]
	public static float3 round(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4719960", Offset = "0x4719960", VA = "0x4719960")]
	public static float4 round(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4719E20", Offset = "0x4719E20", VA = "0x4719E20")]
	public static double round(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046E")]
	[Address(RVA = "0x4719F00", Offset = "0x4719F00", VA = "0x4719F00")]
	public static double2 round(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046F")]
	[Address(RVA = "0x471A150", Offset = "0x471A150", VA = "0x471A150")]
	public static double3 round(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000470")]
	[Address(RVA = "0x471A470", Offset = "0x471A470", VA = "0x471A470")]
	public static double4 round(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000471")]
	[Address(RVA = "0x471A890", Offset = "0x471A890", VA = "0x471A890")]
	public static float trunc(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000472")]
	[Address(RVA = "0x471A8F0", Offset = "0x471A8F0", VA = "0x471A8F0")]
	public static float2 trunc(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000473")]
	[Address(RVA = "0x471A9E0", Offset = "0x471A9E0", VA = "0x471A9E0")]
	public static float3 trunc(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000474")]
	[Address(RVA = "0x471AB40", Offset = "0x471AB40", VA = "0x471AB40")]
	public static float4 trunc(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000475")]
	[Address(RVA = "0x471AD20", Offset = "0x471AD20", VA = "0x471AD20")]
	public static double trunc(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000476")]
	[Address(RVA = "0x471AD90", Offset = "0x471AD90", VA = "0x471AD90")]
	public static double2 trunc(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000477")]
	[Address(RVA = "0x471AE60", Offset = "0x471AE60", VA = "0x471AE60")]
	public static double3 trunc(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000478")]
	[Address(RVA = "0x471AFE0", Offset = "0x471AFE0", VA = "0x471AFE0")]
	public static double4 trunc(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000479")]
	[Address(RVA = "0x471B1E0", Offset = "0x471B1E0", VA = "0x471B1E0")]
	public static float frac(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047A")]
	[Address(RVA = "0x471B250", Offset = "0x471B250", VA = "0x471B250")]
	public static float2 frac(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047B")]
	[Address(RVA = "0x471B350", Offset = "0x471B350", VA = "0x471B350")]
	public static float3 frac(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047C")]
	[Address(RVA = "0x471B390", Offset = "0x471B390", VA = "0x471B390")]
	public static float4 frac(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047D")]
	[Address(RVA = "0x471B590", Offset = "0x471B590", VA = "0x471B590")]
	public static double frac(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047E")]
	[Address(RVA = "0x471B600", Offset = "0x471B600", VA = "0x471B600")]
	public static double2 frac(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047F")]
	[Address(RVA = "0x471B6F0", Offset = "0x471B6F0", VA = "0x471B6F0")]
	public static double3 frac(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000480")]
	[Address(RVA = "0x471B870", Offset = "0x471B870", VA = "0x471B870")]
	public static double4 frac(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000481")]
	[Address(RVA = "0x471B8E0", Offset = "0x471B8E0", VA = "0x471B8E0")]
	public static float rcp(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000482")]
	[Address(RVA = "0x471B8F0", Offset = "0x471B8F0", VA = "0x471B8F0")]
	public static float2 rcp(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000483")]
	[Address(RVA = "0x471B900", Offset = "0x471B900", VA = "0x471B900")]
	public static float3 rcp(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000484")]
	[Address(RVA = "0x471B920", Offset = "0x471B920", VA = "0x471B920")]
	public static float4 rcp(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000485")]
	[Address(RVA = "0x471B940", Offset = "0x471B940", VA = "0x471B940")]
	public static double rcp(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000486")]
	[Address(RVA = "0x471B960", Offset = "0x471B960", VA = "0x471B960")]
	public static double2 rcp(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000487")]
	[Address(RVA = "0x471B980", Offset = "0x471B980", VA = "0x471B980")]
	public static double3 rcp(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000488")]
	[Address(RVA = "0x471B9B0", Offset = "0x471B9B0", VA = "0x471B9B0")]
	public static double4 rcp(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000489")]
	[Address(RVA = "0x471B9E0", Offset = "0x471B9E0", VA = "0x471B9E0")]
	public static float sign(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048A")]
	[Address(RVA = "0x471BA10", Offset = "0x471BA10", VA = "0x471BA10")]
	public static float2 sign(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048B")]
	[Address(RVA = "0x471BA40", Offset = "0x471BA40", VA = "0x471BA40")]
	public static float3 sign(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048C")]
	[Address(RVA = "0x471BAA0", Offset = "0x471BAA0", VA = "0x471BAA0")]
	public static float4 sign(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048D")]
	[Address(RVA = "0x471BAF0", Offset = "0x471BAF0", VA = "0x471BAF0")]
	public static double sign(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048E")]
	[Address(RVA = "0x471BB30", Offset = "0x471BB30", VA = "0x471BB30")]
	public static double2 sign(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048F")]
	[Address(RVA = "0x471BBA0", Offset = "0x471BBA0", VA = "0x471BBA0")]
	public static double3 sign(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000490")]
	[Address(RVA = "0x471BC60", Offset = "0x471BC60", VA = "0x471BC60")]
	public static double4 sign(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000491")]
	[Address(RVA = "0x471BD60", Offset = "0x471BD60", VA = "0x471BD60")]
	public static float pow(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000492")]
	[Address(RVA = "0x471BDE0", Offset = "0x471BDE0", VA = "0x471BDE0")]
	public static float2 pow(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000493")]
	[Address(RVA = "0x471BEF0", Offset = "0x471BEF0", VA = "0x471BEF0")]
	public static float3 pow(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000494")]
	[Address(RVA = "0x471C090", Offset = "0x471C090", VA = "0x471C090")]
	public static float4 pow(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000495")]
	[Address(RVA = "0x471C2C0", Offset = "0x471C2C0", VA = "0x471C2C0")]
	public static double pow(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000496")]
	[Address(RVA = "0x471C360", Offset = "0x471C360", VA = "0x471C360")]
	public static double2 pow(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000497")]
	[Address(RVA = "0x471C470", Offset = "0x471C470", VA = "0x471C470")]
	public static double3 pow(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000498")]
	[Address(RVA = "0x471C650", Offset = "0x471C650", VA = "0x471C650")]
	public static double4 pow(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000499")]
	[Address(RVA = "0x471C8D0", Offset = "0x471C8D0", VA = "0x471C8D0")]
	public static float exp(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049A")]
	[Address(RVA = "0x471C930", Offset = "0x471C930", VA = "0x471C930")]
	public static float2 exp(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049B")]
	[Address(RVA = "0x471CA10", Offset = "0x471CA10", VA = "0x471CA10")]
	public static float3 exp(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049C")]
	[Address(RVA = "0x471CB70", Offset = "0x471CB70", VA = "0x471CB70")]
	public static float4 exp(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049D")]
	[Address(RVA = "0x471CD50", Offset = "0x471CD50", VA = "0x471CD50")]
	public static double exp(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049E")]
	[Address(RVA = "0x471CDC0", Offset = "0x471CDC0", VA = "0x471CDC0")]
	public static double2 exp(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049F")]
	[Address(RVA = "0x471CEB0", Offset = "0x471CEB0", VA = "0x471CEB0")]
	public static double3 exp(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x471D030", Offset = "0x471D030", VA = "0x471D030")]
	public static double4 exp(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x471D220", Offset = "0x471D220", VA = "0x471D220")]
	public static float exp2(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x471D290", Offset = "0x471D290", VA = "0x471D290")]
	public static float2 exp2(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x471D380", Offset = "0x471D380", VA = "0x471D380")]
	public static float3 exp2(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x471D4F0", Offset = "0x471D4F0", VA = "0x471D4F0")]
	public static float4 exp2(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x471D6F0", Offset = "0x471D6F0", VA = "0x471D6F0")]
	public static double exp2(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x471D770", Offset = "0x471D770", VA = "0x471D770")]
	public static double2 exp2(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x471D860", Offset = "0x471D860", VA = "0x471D860")]
	public static double3 exp2(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x471D9F0", Offset = "0x471D9F0", VA = "0x471D9F0")]
	public static double4 exp2(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x471DC00", Offset = "0x471DC00", VA = "0x471DC00")]
	public static float exp10(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x471DC70", Offset = "0x471DC70", VA = "0x471DC70")]
	public static float2 exp10(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x471DD60", Offset = "0x471DD60", VA = "0x471DD60")]
	public static float3 exp10(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x471DED0", Offset = "0x471DED0", VA = "0x471DED0")]
	public static float4 exp10(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x471E0D0", Offset = "0x471E0D0", VA = "0x471E0D0")]
	public static double exp10(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x471E150", Offset = "0x471E150", VA = "0x471E150")]
	public static double2 exp10(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x471E240", Offset = "0x471E240", VA = "0x471E240")]
	public static double3 exp10(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x471E3D0", Offset = "0x471E3D0", VA = "0x471E3D0")]
	public static double4 exp10(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x471E5E0", Offset = "0x471E5E0", VA = "0x471E5E0")]
	public static float log(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x471E640", Offset = "0x471E640", VA = "0x471E640")]
	public static float2 log(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x471E720", Offset = "0x471E720", VA = "0x471E720")]
	public static float3 log(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x471E880", Offset = "0x471E880", VA = "0x471E880")]
	public static float4 log(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x471EA60", Offset = "0x471EA60", VA = "0x471EA60")]
	public static double log(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x471EAD0", Offset = "0x471EAD0", VA = "0x471EAD0")]
	public static double2 log(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x471EBC0", Offset = "0x471EBC0", VA = "0x471EBC0")]
	public static double3 log(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x471ED40", Offset = "0x471ED40", VA = "0x471ED40")]
	public static double4 log(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x471EF30", Offset = "0x471EF30", VA = "0x471EF30")]
	public static float log2(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x471EFA0", Offset = "0x471EFA0", VA = "0x471EFA0")]
	public static float2 log2(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x471F0A0", Offset = "0x471F0A0", VA = "0x471F0A0")]
	public static float3 log2(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x471F220", Offset = "0x471F220", VA = "0x471F220")]
	public static float4 log2(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x471F420", Offset = "0x471F420", VA = "0x471F420")]
	public static double log2(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x471F4A0", Offset = "0x471F4A0", VA = "0x471F4A0")]
	public static double2 log2(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x471F590", Offset = "0x471F590", VA = "0x471F590")]
	public static double3 log2(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x471F720", Offset = "0x471F720", VA = "0x471F720")]
	public static double4 log2(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x471F940", Offset = "0x471F940", VA = "0x471F940")]
	public static float log10(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x471F9A0", Offset = "0x471F9A0", VA = "0x471F9A0")]
	public static float2 log10(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x471FA80", Offset = "0x471FA80", VA = "0x471FA80")]
	public static float3 log10(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x471FBE0", Offset = "0x471FBE0", VA = "0x471FBE0")]
	public static float4 log10(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x471FDC0", Offset = "0x471FDC0", VA = "0x471FDC0")]
	public static double log10(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x471FE30", Offset = "0x471FE30", VA = "0x471FE30")]
	public static double2 log10(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x471FF20", Offset = "0x471FF20", VA = "0x471FF20")]
	public static double3 log10(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x47200A0", Offset = "0x47200A0", VA = "0x47200A0")]
	public static double4 log10(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x4720290", Offset = "0x4720290", VA = "0x4720290")]
	public static float fmod(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x47202A0", Offset = "0x47202A0", VA = "0x47202A0")]
	public static float2 fmod(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x47202F0", Offset = "0x47202F0", VA = "0x47202F0")]
	public static float3 fmod(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x4720360", Offset = "0x4720360", VA = "0x4720360")]
	public static float4 fmod(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x4720400", Offset = "0x4720400", VA = "0x4720400")]
	public static double fmod(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x4720410", Offset = "0x4720410", VA = "0x4720410")]
	public static double2 fmod(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4720450", Offset = "0x4720450", VA = "0x4720450")]
	public static double3 fmod(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x47204F0", Offset = "0x47204F0", VA = "0x47204F0")]
	public static double4 fmod(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x47205D0", Offset = "0x47205D0", VA = "0x47205D0")]
	public static float modf(float x, out float i)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x4720650", Offset = "0x4720650", VA = "0x4720650")]
	public static float2 modf(float2 x, out float2 i)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x4720760", Offset = "0x4720760", VA = "0x4720760")]
	public static float3 modf(float3 x, out float3 i)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x47207A0", Offset = "0x47207A0", VA = "0x47207A0")]
	public static float4 modf(float4 x, out float4 i)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x47207E0", Offset = "0x47207E0", VA = "0x47207E0")]
	public static double modf(double x, out double i)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x4720860", Offset = "0x4720860", VA = "0x4720860")]
	public static double2 modf(double2 x, out double2 i)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x4720960", Offset = "0x4720960", VA = "0x4720960")]
	public static double3 modf(double3 x, out double3 i)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x47209E0", Offset = "0x47209E0", VA = "0x47209E0")]
	public static double4 modf(double4 x, out double4 i)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4720A70", Offset = "0x4720A70", VA = "0x4720A70")]
	public static float sqrt(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x4720AF0", Offset = "0x4720AF0", VA = "0x4720AF0")]
	public static float2 sqrt(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x4720C00", Offset = "0x4720C00", VA = "0x4720C00")]
	public static float3 sqrt(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x4720D70", Offset = "0x4720D70", VA = "0x4720D70")]
	public static float4 sqrt(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x4720F70", Offset = "0x4720F70", VA = "0x4720F70")]
	public static double sqrt(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x4720FF0", Offset = "0x4720FF0", VA = "0x4720FF0")]
	public static double2 sqrt(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x47210F0", Offset = "0x47210F0", VA = "0x47210F0")]
	public static double3 sqrt(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x47212C0", Offset = "0x47212C0", VA = "0x47212C0")]
	public static double4 sqrt(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x4721510", Offset = "0x4721510", VA = "0x4721510")]
	public static float rsqrt(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x47215A0", Offset = "0x47215A0", VA = "0x47215A0")]
	public static float2 rsqrt(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x47216C0", Offset = "0x47216C0", VA = "0x47216C0")]
	public static float3 rsqrt(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x47216F0", Offset = "0x47216F0", VA = "0x47216F0")]
	public static float4 rsqrt(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x4721900", Offset = "0x4721900", VA = "0x4721900")]
	public static double rsqrt(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x4721990", Offset = "0x4721990", VA = "0x4721990")]
	public static double2 rsqrt(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x4721AA0", Offset = "0x4721AA0", VA = "0x4721AA0")]
	public static double3 rsqrt(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x4721C50", Offset = "0x4721C50", VA = "0x4721C50")]
	public static double4 rsqrt(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x4721CB0", Offset = "0x4721CB0", VA = "0x4721CB0")]
	public static float2 normalize(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x4721D60", Offset = "0x4721D60", VA = "0x4721D60")]
	public static float3 normalize(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x4721E40", Offset = "0x4721E40", VA = "0x4721E40")]
	public static float4 normalize(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x4721F30", Offset = "0x4721F30", VA = "0x4721F30")]
	public static double2 normalize(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x4721FF0", Offset = "0x4721FF0", VA = "0x4721FF0")]
	public static double3 normalize(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x47220E0", Offset = "0x47220E0", VA = "0x47220E0")]
	public static double4 normalize(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x47221E0", Offset = "0x47221E0", VA = "0x47221E0")]
	public static float2 normalizesafe(float2 x, [Optional] float2 defaultvalue)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x47222C0", Offset = "0x47222C0", VA = "0x47222C0")]
	public static float3 normalizesafe(float3 x, [Optional] float3 defaultvalue)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x4722400", Offset = "0x4722400", VA = "0x4722400")]
	public static float4 normalizesafe(float4 x, [Optional] float4 defaultvalue)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x4722540", Offset = "0x4722540", VA = "0x4722540")]
	public static double2 normalizesafe(double2 x, [Optional] double2 defaultvalue)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x4722670", Offset = "0x4722670", VA = "0x4722670")]
	public static double3 normalizesafe(double3 x, [Optional] double3 defaultvalue)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x47227E0", Offset = "0x47227E0", VA = "0x47227E0")]
	public static double4 normalizesafe(double4 x, [Optional] double4 defaultvalue)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x4722930", Offset = "0x4722930", VA = "0x4722930")]
	public static float length(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x4722940", Offset = "0x4722940", VA = "0x4722940")]
	public static float length(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x47229D0", Offset = "0x47229D0", VA = "0x47229D0")]
	public static float length(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x4722A70", Offset = "0x4722A70", VA = "0x4722A70")]
	public static float length(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x4722B20", Offset = "0x4722B20", VA = "0x4722B20")]
	public static double length(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x4722B30", Offset = "0x4722B30", VA = "0x4722B30")]
	public static double length(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x4722BC0", Offset = "0x4722BC0", VA = "0x4722BC0")]
	public static double length(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x4722C70", Offset = "0x4722C70", VA = "0x4722C70")]
	public static double length(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x4722D30", Offset = "0x4722D30", VA = "0x4722D30")]
	public static float lengthsq(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x4722D40", Offset = "0x4722D40", VA = "0x4722D40")]
	public static float lengthsq(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x4722D60", Offset = "0x4722D60", VA = "0x4722D60")]
	public static float lengthsq(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4722D80", Offset = "0x4722D80", VA = "0x4722D80")]
	public static float lengthsq(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000501")]
	[Address(RVA = "0x4722DB0", Offset = "0x4722DB0", VA = "0x4722DB0")]
	public static double lengthsq(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4722DC0", Offset = "0x4722DC0", VA = "0x4722DC0")]
	public static double lengthsq(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4722DD0", Offset = "0x4722DD0", VA = "0x4722DD0")]
	public static double lengthsq(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000504")]
	[Address(RVA = "0x4722E00", Offset = "0x4722E00", VA = "0x4722E00")]
	public static double lengthsq(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000505")]
	[Address(RVA = "0x4722E30", Offset = "0x4722E30", VA = "0x4722E30")]
	public static float distance(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000506")]
	[Address(RVA = "0x4722E40", Offset = "0x4722E40", VA = "0x4722E40")]
	public static float distance(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000507")]
	[Address(RVA = "0x4722EE0", Offset = "0x4722EE0", VA = "0x4722EE0")]
	public static float distance(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000508")]
	[Address(RVA = "0x4722F90", Offset = "0x4722F90", VA = "0x4722F90")]
	public static float distance(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000509")]
	[Address(RVA = "0x4723050", Offset = "0x4723050", VA = "0x4723050")]
	public static double distance(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050A")]
	[Address(RVA = "0x4723070", Offset = "0x4723070", VA = "0x4723070")]
	public static double distance(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050B")]
	[Address(RVA = "0x4723110", Offset = "0x4723110", VA = "0x4723110")]
	public static double distance(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050C")]
	[Address(RVA = "0x47231D0", Offset = "0x47231D0", VA = "0x47231D0")]
	public static double distance(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050D")]
	[Address(RVA = "0x47232A0", Offset = "0x47232A0", VA = "0x47232A0")]
	public static float distancesq(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050E")]
	[Address(RVA = "0x47232B0", Offset = "0x47232B0", VA = "0x47232B0")]
	public static float distancesq(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050F")]
	[Address(RVA = "0x47232D0", Offset = "0x47232D0", VA = "0x47232D0")]
	public static float distancesq(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000510")]
	[Address(RVA = "0x4723300", Offset = "0x4723300", VA = "0x4723300")]
	public static float distancesq(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000511")]
	[Address(RVA = "0x4723340", Offset = "0x4723340", VA = "0x4723340")]
	public static double distancesq(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000512")]
	[Address(RVA = "0x4723350", Offset = "0x4723350", VA = "0x4723350")]
	public static double distancesq(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000513")]
	[Address(RVA = "0x4723370", Offset = "0x4723370", VA = "0x4723370")]
	public static double distancesq(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000514")]
	[Address(RVA = "0x47233B0", Offset = "0x47233B0", VA = "0x47233B0")]
	public static double distancesq(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000515")]
	[Address(RVA = "0x4723400", Offset = "0x4723400", VA = "0x4723400")]
	public static float3 cross(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000516")]
	[Address(RVA = "0x4723450", Offset = "0x4723450", VA = "0x4723450")]
	public static double3 cross(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000517")]
	[Address(RVA = "0x47234A0", Offset = "0x47234A0", VA = "0x47234A0")]
	public static float smoothstep(float a, float b, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4723520", Offset = "0x4723520", VA = "0x4723520")]
	public static float2 smoothstep(float2 a, float2 b, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4723600", Offset = "0x4723600", VA = "0x4723600")]
	public static float3 smoothstep(float3 a, float3 b, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051A")]
	[Address(RVA = "0x4723750", Offset = "0x4723750", VA = "0x4723750")]
	public static float4 smoothstep(float4 a, float4 b, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051B")]
	[Address(RVA = "0x47238E0", Offset = "0x47238E0", VA = "0x47238E0")]
	public static double smoothstep(double a, double b, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051C")]
	[Address(RVA = "0x4723980", Offset = "0x4723980", VA = "0x4723980")]
	public static double2 smoothstep(double2 a, double2 b, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4723A70", Offset = "0x4723A70", VA = "0x4723A70")]
	public static double3 smoothstep(double3 a, double3 b, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4723C10", Offset = "0x4723C10", VA = "0x4723C10")]
	public static double4 smoothstep(double4 a, double4 b, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4723DC0", Offset = "0x4723DC0", VA = "0x4723DC0")]
	public static bool any(bool2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4723DD0", Offset = "0x4723DD0", VA = "0x4723DD0")]
	public static bool any(bool3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4723DE0", Offset = "0x4723DE0", VA = "0x4723DE0")]
	public static bool any(bool4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000522")]
	[Address(RVA = "0x4723DF0", Offset = "0x4723DF0", VA = "0x4723DF0")]
	public static bool any(int2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000523")]
	[Address(RVA = "0x4723E00", Offset = "0x4723E00", VA = "0x4723E00")]
	public static bool any(int3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000524")]
	[Address(RVA = "0x4723E20", Offset = "0x4723E20", VA = "0x4723E20")]
	public static bool any(int4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000525")]
	[Address(RVA = "0x4723E40", Offset = "0x4723E40", VA = "0x4723E40")]
	public static bool any(uint2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000526")]
	[Address(RVA = "0x4723E50", Offset = "0x4723E50", VA = "0x4723E50")]
	public static bool any(uint3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000527")]
	[Address(RVA = "0x4723E70", Offset = "0x4723E70", VA = "0x4723E70")]
	public static bool any(uint4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000528")]
	[Address(RVA = "0x4723E90", Offset = "0x4723E90", VA = "0x4723E90")]
	public static bool any(float2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000529")]
	[Address(RVA = "0x4723EB0", Offset = "0x4723EB0", VA = "0x4723EB0")]
	public static bool any(float3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052A")]
	[Address(RVA = "0x4723EE0", Offset = "0x4723EE0", VA = "0x4723EE0")]
	public static bool any(float4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052B")]
	[Address(RVA = "0x4723F20", Offset = "0x4723F20", VA = "0x4723F20")]
	public static bool any(double2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4723F40", Offset = "0x4723F40", VA = "0x4723F40")]
	public static bool any(double3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4723F80", Offset = "0x4723F80", VA = "0x4723F80")]
	public static bool any(double4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052E")]
	[Address(RVA = "0x4723FD0", Offset = "0x4723FD0", VA = "0x4723FD0")]
	public static bool all(bool2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4723FE0", Offset = "0x4723FE0", VA = "0x4723FE0")]
	public static bool all(bool3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000530")]
	[Address(RVA = "0x4723FF0", Offset = "0x4723FF0", VA = "0x4723FF0")]
	public static bool all(bool4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000531")]
	[Address(RVA = "0x4724000", Offset = "0x4724000", VA = "0x4724000")]
	public static bool all(int2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000532")]
	[Address(RVA = "0x4724010", Offset = "0x4724010", VA = "0x4724010")]
	public static bool all(int3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4724030", Offset = "0x4724030", VA = "0x4724030")]
	public static bool all(int4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000534")]
	[Address(RVA = "0x4724050", Offset = "0x4724050", VA = "0x4724050")]
	public static bool all(uint2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000535")]
	[Address(RVA = "0x4724060", Offset = "0x4724060", VA = "0x4724060")]
	public static bool all(uint3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000536")]
	[Address(RVA = "0x4724080", Offset = "0x4724080", VA = "0x4724080")]
	public static bool all(uint4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000537")]
	[Address(RVA = "0x47240A0", Offset = "0x47240A0", VA = "0x47240A0")]
	public static bool all(float2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000538")]
	[Address(RVA = "0x47240C0", Offset = "0x47240C0", VA = "0x47240C0")]
	public static bool all(float3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000539")]
	[Address(RVA = "0x47240F0", Offset = "0x47240F0", VA = "0x47240F0")]
	public static bool all(float4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053A")]
	[Address(RVA = "0x4724130", Offset = "0x4724130", VA = "0x4724130")]
	public static bool all(double2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053B")]
	[Address(RVA = "0x4724150", Offset = "0x4724150", VA = "0x4724150")]
	public static bool all(double3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053C")]
	[Address(RVA = "0x4724190", Offset = "0x4724190", VA = "0x4724190")]
	public static bool all(double4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053D")]
	[Address(RVA = "0x47241E0", Offset = "0x47241E0", VA = "0x47241E0")]
	public static int select(int a, int b, bool c)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053E")]
	[Address(RVA = "0x47241F0", Offset = "0x47241F0", VA = "0x47241F0")]
	public static int2 select(int2 a, int2 b, bool c)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053F")]
	[Address(RVA = "0x4724200", Offset = "0x4724200", VA = "0x4724200")]
	public static int3 select(int3 a, int3 b, bool c)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000540")]
	[Address(RVA = "0x4724210", Offset = "0x4724210", VA = "0x4724210")]
	public static int4 select(int4 a, int4 b, bool c)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4724230", Offset = "0x4724230", VA = "0x4724230")]
	public static int2 select(int2 a, int2 b, bool2 c)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4724260", Offset = "0x4724260", VA = "0x4724260")]
	public static int3 select(int3 a, int3 b, bool3 c)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000543")]
	[Address(RVA = "0x47242A0", Offset = "0x47242A0", VA = "0x47242A0")]
	public static int4 select(int4 a, int4 b, bool4 c)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000544")]
	[Address(RVA = "0x47242F0", Offset = "0x47242F0", VA = "0x47242F0")]
	public static uint select(uint a, uint b, bool c)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000545")]
	[Address(RVA = "0x4724300", Offset = "0x4724300", VA = "0x4724300")]
	public static uint2 select(uint2 a, uint2 b, bool c)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4724310", Offset = "0x4724310", VA = "0x4724310")]
	public static uint3 select(uint3 a, uint3 b, bool c)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4724320", Offset = "0x4724320", VA = "0x4724320")]
	public static uint4 select(uint4 a, uint4 b, bool c)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4724340", Offset = "0x4724340", VA = "0x4724340")]
	public static uint2 select(uint2 a, uint2 b, bool2 c)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4724370", Offset = "0x4724370", VA = "0x4724370")]
	public static uint3 select(uint3 a, uint3 b, bool3 c)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054A")]
	[Address(RVA = "0x47243B0", Offset = "0x47243B0", VA = "0x47243B0")]
	public static uint4 select(uint4 a, uint4 b, bool4 c)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4724400", Offset = "0x4724400", VA = "0x4724400")]
	public static long select(long a, long b, bool c)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054C")]
	[Address(RVA = "0x4724410", Offset = "0x4724410", VA = "0x4724410")]
	public static ulong select(ulong a, ulong b, bool c)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054D")]
	[Address(RVA = "0x4724420", Offset = "0x4724420", VA = "0x4724420")]
	public static float select(float a, float b, bool c)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054E")]
	[Address(RVA = "0x4724430", Offset = "0x4724430", VA = "0x4724430")]
	public static float2 select(float2 a, float2 b, bool c)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054F")]
	[Address(RVA = "0x4724440", Offset = "0x4724440", VA = "0x4724440")]
	public static float3 select(float3 a, float3 b, bool c)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000550")]
	[Address(RVA = "0x4724460", Offset = "0x4724460", VA = "0x4724460")]
	public static float4 select(float4 a, float4 b, bool c)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000551")]
	[Address(RVA = "0x4724480", Offset = "0x4724480", VA = "0x4724480")]
	public static float2 select(float2 a, float2 b, bool2 c)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000552")]
	[Address(RVA = "0x47244B0", Offset = "0x47244B0", VA = "0x47244B0")]
	public static float3 select(float3 a, float3 b, bool3 c)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000553")]
	[Address(RVA = "0x47244F0", Offset = "0x47244F0", VA = "0x47244F0")]
	public static float4 select(float4 a, float4 b, bool4 c)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4724550", Offset = "0x4724550", VA = "0x4724550")]
	public static double select(double a, double b, bool c)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000555")]
	[Address(RVA = "0x4724560", Offset = "0x4724560", VA = "0x4724560")]
	public static double2 select(double2 a, double2 b, bool c)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000556")]
	[Address(RVA = "0x4724580", Offset = "0x4724580", VA = "0x4724580")]
	public static double3 select(double3 a, double3 b, bool c)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000557")]
	[Address(RVA = "0x47245B0", Offset = "0x47245B0", VA = "0x47245B0")]
	public static double4 select(double4 a, double4 b, bool c)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000558")]
	[Address(RVA = "0x47245E0", Offset = "0x47245E0", VA = "0x47245E0")]
	public static double2 select(double2 a, double2 b, bool2 c)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000559")]
	[Address(RVA = "0x4724600", Offset = "0x4724600", VA = "0x4724600")]
	public static double3 select(double3 a, double3 b, bool3 c)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055A")]
	[Address(RVA = "0x4724650", Offset = "0x4724650", VA = "0x4724650")]
	public static double4 select(double4 a, double4 b, bool4 c)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055B")]
	[Address(RVA = "0x47246B0", Offset = "0x47246B0", VA = "0x47246B0")]
	public static float step(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055C")]
	[Address(RVA = "0x47246D0", Offset = "0x47246D0", VA = "0x47246D0")]
	public static float2 step(float2 y, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055D")]
	[Address(RVA = "0x47246E0", Offset = "0x47246E0", VA = "0x47246E0")]
	public static float3 step(float3 y, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055E")]
	[Address(RVA = "0x4724710", Offset = "0x4724710", VA = "0x4724710")]
	public static float4 step(float4 y, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055F")]
	[Address(RVA = "0x4724730", Offset = "0x4724730", VA = "0x4724730")]
	public static double step(double y, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000560")]
	[Address(RVA = "0x4724750", Offset = "0x4724750", VA = "0x4724750")]
	public static double2 step(double2 y, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000561")]
	[Address(RVA = "0x4724770", Offset = "0x4724770", VA = "0x4724770")]
	public static double3 step(double3 y, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000562")]
	[Address(RVA = "0x4724800", Offset = "0x4724800", VA = "0x4724800")]
	public static double4 step(double4 y, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000563")]
	[Address(RVA = "0x47248A0", Offset = "0x47248A0", VA = "0x47248A0")]
	public static float2 reflect(float2 i, float2 n)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000564")]
	[Address(RVA = "0x47248E0", Offset = "0x47248E0", VA = "0x47248E0")]
	public static float3 reflect(float3 i, float3 n)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000565")]
	[Address(RVA = "0x4724930", Offset = "0x4724930", VA = "0x4724930")]
	public static float4 reflect(float4 i, float4 n)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000566")]
	[Address(RVA = "0x4724990", Offset = "0x4724990", VA = "0x4724990")]
	public static double2 reflect(double2 i, double2 n)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000567")]
	[Address(RVA = "0x47249D0", Offset = "0x47249D0", VA = "0x47249D0")]
	public static double3 reflect(double3 i, double3 n)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000568")]
	[Address(RVA = "0x4724A50", Offset = "0x4724A50", VA = "0x4724A50")]
	public static double4 reflect(double4 i, double4 n)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000569")]
	[Address(RVA = "0x4724AE0", Offset = "0x4724AE0", VA = "0x4724AE0")]
	public static float2 refract(float2 i, float2 n, float eta)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4724C00", Offset = "0x4724C00", VA = "0x4724C00")]
	public static float3 refract(float3 i, float3 n, float eta)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4724D80", Offset = "0x4724D80", VA = "0x4724D80")]
	public static float4 refract(float4 i, float4 n, float eta)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4724EE0", Offset = "0x4724EE0", VA = "0x4724EE0")]
	public static double2 refract(double2 i, double2 n, double eta)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4725050", Offset = "0x4725050", VA = "0x4725050")]
	public static double3 refract(double3 i, double3 n, double eta)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4725250", Offset = "0x4725250", VA = "0x4725250")]
	public static double4 refract(double4 i, double4 n, double eta)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4725410", Offset = "0x4725410", VA = "0x4725410")]
	public static float2 project(float2 a, float2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4725450", Offset = "0x4725450", VA = "0x4725450")]
	public static float3 project(float3 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000571")]
	[Address(RVA = "0x47254B0", Offset = "0x47254B0", VA = "0x47254B0")]
	public static float4 project(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4725530", Offset = "0x4725530", VA = "0x4725530")]
	public static float2 projectsafe(float2 a, float2 b, [Optional] float2 defaultValue)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000573")]
	[Address(RVA = "0x47255B0", Offset = "0x47255B0", VA = "0x47255B0")]
	public static float3 projectsafe(float3 a, float3 b, [Optional] float3 defaultValue)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4725660", Offset = "0x4725660", VA = "0x4725660")]
	public static float4 projectsafe(float4 a, float4 b, [Optional] float4 defaultValue)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4725750", Offset = "0x4725750", VA = "0x4725750")]
	public static double2 project(double2 a, double2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000576")]
	[Address(RVA = "0x47257A0", Offset = "0x47257A0", VA = "0x47257A0")]
	public static double3 project(double3 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4725820", Offset = "0x4725820", VA = "0x4725820")]
	public static double4 project(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000578")]
	[Address(RVA = "0x47258C0", Offset = "0x47258C0", VA = "0x47258C0")]
	public static double2 projectsafe(double2 a, double2 b, [Optional] double2 defaultValue)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000579")]
	[Address(RVA = "0x4725950", Offset = "0x4725950", VA = "0x4725950")]
	public static double3 projectsafe(double3 a, double3 b, [Optional] double3 defaultValue)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057A")]
	[Address(RVA = "0x4725A40", Offset = "0x4725A40", VA = "0x4725A40")]
	public static double4 projectsafe(double4 a, double4 b, [Optional] double4 defaultValue)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057B")]
	[Address(RVA = "0x4725B80", Offset = "0x4725B80", VA = "0x4725B80")]
	public static float2 faceforward(float2 n, float2 i, float2 ng)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057C")]
	[Address(RVA = "0x4725BA0", Offset = "0x4725BA0", VA = "0x4725BA0")]
	public static float3 faceforward(float3 n, float3 i, float3 ng)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057D")]
	[Address(RVA = "0x4725BE0", Offset = "0x4725BE0", VA = "0x4725BE0")]
	public static float4 faceforward(float4 n, float4 i, float4 ng)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057E")]
	[Address(RVA = "0x4725C20", Offset = "0x4725C20", VA = "0x4725C20")]
	public static double2 faceforward(double2 n, double2 i, double2 ng)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057F")]
	[Address(RVA = "0x4725C70", Offset = "0x4725C70", VA = "0x4725C70")]
	public static double3 faceforward(double3 n, double3 i, double3 ng)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000580")]
	[Address(RVA = "0x4725D00", Offset = "0x4725D00", VA = "0x4725D00")]
	public static double4 faceforward(double4 n, double4 i, double4 ng)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000581")]
	[Address(RVA = "0x4725D70", Offset = "0x4725D70", VA = "0x4725D70")]
	public static void sincos(float x, out float s, out float c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000582")]
	[Address(RVA = "0x4725E70", Offset = "0x4725E70", VA = "0x4725E70")]
	public static void sincos(float2 x, out float2 s, out float2 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000583")]
	[Address(RVA = "0x4726040", Offset = "0x4726040", VA = "0x4726040")]
	public static void sincos(float3 x, out float3 s, out float3 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000584")]
	[Address(RVA = "0x4726090", Offset = "0x4726090", VA = "0x4726090")]
	public static void sincos(float4 x, out float4 s, out float4 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000585")]
	[Address(RVA = "0x4726430", Offset = "0x4726430", VA = "0x4726430")]
	public static void sincos(double x, out double s, out double c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000586")]
	[Address(RVA = "0x4726500", Offset = "0x4726500", VA = "0x4726500")]
	public static void sincos(double2 x, out double2 s, out double2 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000587")]
	[Address(RVA = "0x47266C0", Offset = "0x47266C0", VA = "0x47266C0")]
	public static void sincos(double3 x, out double3 s, out double3 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4726960", Offset = "0x4726960", VA = "0x4726960")]
	public static void sincos(double4 x, out double4 s, out double4 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4726A00", Offset = "0x4726A00", VA = "0x4726A00")]
	public static int countbits(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058A")]
	[Address(RVA = "0x4726A40", Offset = "0x4726A40", VA = "0x4726A40")]
	public static int2 countbits(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058B")]
	[Address(RVA = "0x4726B00", Offset = "0x4726B00", VA = "0x4726B00")]
	public static int3 countbits(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4726BF0", Offset = "0x4726BF0", VA = "0x4726BF0")]
	public static int4 countbits(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4726D00", Offset = "0x4726D00", VA = "0x4726D00")]
	public static int countbits(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4726D40", Offset = "0x4726D40", VA = "0x4726D40")]
	public static int2 countbits(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4726E00", Offset = "0x4726E00", VA = "0x4726E00")]
	public static int3 countbits(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4726EF0", Offset = "0x4726EF0", VA = "0x4726EF0")]
	public static int4 countbits(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4727000", Offset = "0x4727000", VA = "0x4727000")]
	public static int countbits(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000592")]
	[Address(RVA = "0x4727060", Offset = "0x4727060", VA = "0x4727060")]
	public static int countbits(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000593")]
	[Address(RVA = "0x47270C0", Offset = "0x47270C0", VA = "0x47270C0")]
	public static int lzcnt(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000594")]
	[Address(RVA = "0x4727100", Offset = "0x4727100", VA = "0x4727100")]
	public static int2 lzcnt(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000595")]
	[Address(RVA = "0x4727190", Offset = "0x4727190", VA = "0x4727190")]
	public static int3 lzcnt(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4727250", Offset = "0x4727250", VA = "0x4727250")]
	public static int4 lzcnt(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000597")]
	[Address(RVA = "0x4727340", Offset = "0x4727340", VA = "0x4727340")]
	public static int lzcnt(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4727380", Offset = "0x4727380", VA = "0x4727380")]
	public static int2 lzcnt(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000599")]
	[Address(RVA = "0x4727410", Offset = "0x4727410", VA = "0x4727410")]
	public static int3 lzcnt(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059A")]
	[Address(RVA = "0x47274D0", Offset = "0x47274D0", VA = "0x47274D0")]
	public static int4 lzcnt(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059B")]
	[Address(RVA = "0x47275C0", Offset = "0x47275C0", VA = "0x47275C0")]
	public static int lzcnt(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4727610", Offset = "0x4727610", VA = "0x4727610")]
	public static int lzcnt(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4727660", Offset = "0x4727660", VA = "0x4727660")]
	public static int tzcnt(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059E")]
	[Address(RVA = "0x47276A0", Offset = "0x47276A0", VA = "0x47276A0")]
	public static int2 tzcnt(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059F")]
	[Address(RVA = "0x4727730", Offset = "0x4727730", VA = "0x4727730")]
	public static int3 tzcnt(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x4727800", Offset = "0x4727800", VA = "0x4727800")]
	public static int4 tzcnt(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4727900", Offset = "0x4727900", VA = "0x4727900")]
	public static int tzcnt(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x4727940", Offset = "0x4727940", VA = "0x4727940")]
	public static int2 tzcnt(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x47279D0", Offset = "0x47279D0", VA = "0x47279D0")]
	public static int3 tzcnt(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x4727AA0", Offset = "0x4727AA0", VA = "0x4727AA0")]
	public static int4 tzcnt(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4727BA0", Offset = "0x4727BA0", VA = "0x4727BA0")]
	public static int tzcnt(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4727C00", Offset = "0x4727C00", VA = "0x4727C00")]
	public static int tzcnt(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4727C60", Offset = "0x4727C60", VA = "0x4727C60")]
	public static int reversebits(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4727CC0", Offset = "0x4727CC0", VA = "0x4727CC0")]
	public static int2 reversebits(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x4727DF0", Offset = "0x4727DF0", VA = "0x4727DF0")]
	public static int3 reversebits(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x4727F80", Offset = "0x4727F80", VA = "0x4727F80")]
	public static int4 reversebits(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x47280F0", Offset = "0x47280F0", VA = "0x47280F0")]
	public static uint reversebits(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x4728150", Offset = "0x4728150", VA = "0x4728150")]
	public static uint2 reversebits(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x4728280", Offset = "0x4728280", VA = "0x4728280")]
	public static uint3 reversebits(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4728410", Offset = "0x4728410", VA = "0x4728410")]
	public static uint4 reversebits(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x4728580", Offset = "0x4728580", VA = "0x4728580")]
	public static long reversebits(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x4728640", Offset = "0x4728640", VA = "0x4728640")]
	public static ulong reversebits(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x4728700", Offset = "0x4728700", VA = "0x4728700")]
	public static int rol(int x, int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x4728710", Offset = "0x4728710", VA = "0x4728710")]
	public static int2 rol(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x4728740", Offset = "0x4728740", VA = "0x4728740")]
	public static int3 rol(int3 x, int n)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x4728770", Offset = "0x4728770", VA = "0x4728770")]
	public static int4 rol(int4 x, int n)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x47287C0", Offset = "0x47287C0", VA = "0x47287C0")]
	public static uint rol(uint x, int n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x47287D0", Offset = "0x47287D0", VA = "0x47287D0")]
	public static uint2 rol(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x4728800", Offset = "0x4728800", VA = "0x4728800")]
	public static uint3 rol(uint3 x, int n)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x4728830", Offset = "0x4728830", VA = "0x4728830")]
	public static uint4 rol(uint4 x, int n)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x4728880", Offset = "0x4728880", VA = "0x4728880")]
	public static long rol(long x, int n)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x4728890", Offset = "0x4728890", VA = "0x4728890")]
	public static ulong rol(ulong x, int n)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x47288A0", Offset = "0x47288A0", VA = "0x47288A0")]
	public static int ror(int x, int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x47288B0", Offset = "0x47288B0", VA = "0x47288B0")]
	public static int2 ror(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x47288E0", Offset = "0x47288E0", VA = "0x47288E0")]
	public static int3 ror(int3 x, int n)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4728910", Offset = "0x4728910", VA = "0x4728910")]
	public static int4 ror(int4 x, int n)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x4728960", Offset = "0x4728960", VA = "0x4728960")]
	public static uint ror(uint x, int n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x4728970", Offset = "0x4728970", VA = "0x4728970")]
	public static uint2 ror(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x47289A0", Offset = "0x47289A0", VA = "0x47289A0")]
	public static uint3 ror(uint3 x, int n)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x47289D0", Offset = "0x47289D0", VA = "0x47289D0")]
	public static uint4 ror(uint4 x, int n)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x4728A20", Offset = "0x4728A20", VA = "0x4728A20")]
	public static long ror(long x, int n)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x4728A30", Offset = "0x4728A30", VA = "0x4728A30")]
	public static ulong ror(ulong x, int n)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x4728A40", Offset = "0x4728A40", VA = "0x4728A40")]
	public static int ceilpow2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x4728A70", Offset = "0x4728A70", VA = "0x4728A70")]
	public static int2 ceilpow2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x4728B10", Offset = "0x4728B10", VA = "0x4728B10")]
	public static int3 ceilpow2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x4728BE0", Offset = "0x4728BE0", VA = "0x4728BE0")]
	public static int4 ceilpow2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x4728D10", Offset = "0x4728D10", VA = "0x4728D10")]
	public static uint ceilpow2(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4728D40", Offset = "0x4728D40", VA = "0x4728D40")]
	public static uint2 ceilpow2(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x4728E00", Offset = "0x4728E00", VA = "0x4728E00")]
	public static uint3 ceilpow2(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x4728EE0", Offset = "0x4728EE0", VA = "0x4728EE0")]
	public static uint4 ceilpow2(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x4728FF0", Offset = "0x4728FF0", VA = "0x4728FF0")]
	public static long ceilpow2(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x4729040", Offset = "0x4729040", VA = "0x4729040")]
	public static ulong ceilpow2(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x4729090", Offset = "0x4729090", VA = "0x4729090")]
	public static int ceillog2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x47290D0", Offset = "0x47290D0", VA = "0x47290D0")]
	public static int2 ceillog2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x4729150", Offset = "0x4729150", VA = "0x4729150")]
	public static int3 ceillog2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x4729200", Offset = "0x4729200", VA = "0x4729200")]
	public static int4 ceillog2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x4729300", Offset = "0x4729300", VA = "0x4729300")]
	public static int ceillog2(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x4729340", Offset = "0x4729340", VA = "0x4729340")]
	public static int2 ceillog2(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x47293C0", Offset = "0x47293C0", VA = "0x47293C0")]
	public static int3 ceillog2(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x4729470", Offset = "0x4729470", VA = "0x4729470")]
	public static int4 ceillog2(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x4729570", Offset = "0x4729570", VA = "0x4729570")]
	public static int floorlog2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x47295B0", Offset = "0x47295B0", VA = "0x47295B0")]
	public static int2 floorlog2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x4729640", Offset = "0x4729640", VA = "0x4729640")]
	public static int3 floorlog2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x4729700", Offset = "0x4729700", VA = "0x4729700")]
	public static int4 floorlog2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x47297F0", Offset = "0x47297F0", VA = "0x47297F0")]
	public static int floorlog2(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x4729830", Offset = "0x4729830", VA = "0x4729830")]
	public static int2 floorlog2(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x47298C0", Offset = "0x47298C0", VA = "0x47298C0")]
	public static int3 floorlog2(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4729980", Offset = "0x4729980", VA = "0x4729980")]
	public static int4 floorlog2(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4729A70", Offset = "0x4729A70", VA = "0x4729A70")]
	public static float radians(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4729A80", Offset = "0x4729A80", VA = "0x4729A80")]
	public static float2 radians(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x4729A90", Offset = "0x4729A90", VA = "0x4729A90")]
	public static float3 radians(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x4729AA0", Offset = "0x4729AA0", VA = "0x4729AA0")]
	public static float4 radians(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4729AB0", Offset = "0x4729AB0", VA = "0x4729AB0")]
	public static double radians(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4729AC0", Offset = "0x4729AC0", VA = "0x4729AC0")]
	public static double2 radians(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x4729AE0", Offset = "0x4729AE0", VA = "0x4729AE0")]
	public static double3 radians(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4729B10", Offset = "0x4729B10", VA = "0x4729B10")]
	public static double4 radians(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4729B40", Offset = "0x4729B40", VA = "0x4729B40")]
	public static float degrees(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4729B50", Offset = "0x4729B50", VA = "0x4729B50")]
	public static float2 degrees(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x4729B60", Offset = "0x4729B60", VA = "0x4729B60")]
	public static float3 degrees(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4729B70", Offset = "0x4729B70", VA = "0x4729B70")]
	public static float4 degrees(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4729B80", Offset = "0x4729B80", VA = "0x4729B80")]
	public static double degrees(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4729B90", Offset = "0x4729B90", VA = "0x4729B90")]
	public static double2 degrees(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4729BB0", Offset = "0x4729BB0", VA = "0x4729BB0")]
	public static double3 degrees(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x4729BE0", Offset = "0x4729BE0", VA = "0x4729BE0")]
	public static double4 degrees(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x4729C10", Offset = "0x4729C10", VA = "0x4729C10")]
	public static int cmin(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4729C20", Offset = "0x4729C20", VA = "0x4729C20")]
	public static int cmin(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x4729C40", Offset = "0x4729C40", VA = "0x4729C40")]
	public static int cmin(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4729C60", Offset = "0x4729C60", VA = "0x4729C60")]
	public static uint cmin(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x4729C70", Offset = "0x4729C70", VA = "0x4729C70")]
	public static uint cmin(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x4729C90", Offset = "0x4729C90", VA = "0x4729C90")]
	public static uint cmin(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4729CB0", Offset = "0x4729CB0", VA = "0x4729CB0")]
	public static float cmin(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x4729CF0", Offset = "0x4729CF0", VA = "0x4729CF0")]
	public static float cmin(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x4729D40", Offset = "0x4729D40", VA = "0x4729D40")]
	public static float cmin(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x4729DD0", Offset = "0x4729DD0", VA = "0x4729DD0")]
	public static double cmin(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4729E10", Offset = "0x4729E10", VA = "0x4729E10")]
	public static double cmin(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x4729E80", Offset = "0x4729E80", VA = "0x4729E80")]
	public static double cmin(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x4729F30", Offset = "0x4729F30", VA = "0x4729F30")]
	public static int cmax(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x4729F40", Offset = "0x4729F40", VA = "0x4729F40")]
	public static int cmax(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x4729F60", Offset = "0x4729F60", VA = "0x4729F60")]
	public static int cmax(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x4729F80", Offset = "0x4729F80", VA = "0x4729F80")]
	public static uint cmax(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x4729F90", Offset = "0x4729F90", VA = "0x4729F90")]
	public static uint cmax(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000600")]
	[Address(RVA = "0x4729FB0", Offset = "0x4729FB0", VA = "0x4729FB0")]
	public static uint cmax(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000601")]
	[Address(RVA = "0x4729FD0", Offset = "0x4729FD0", VA = "0x4729FD0")]
	public static float cmax(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000602")]
	[Address(RVA = "0x472A000", Offset = "0x472A000", VA = "0x472A000")]
	public static float cmax(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000603")]
	[Address(RVA = "0x472A040", Offset = "0x472A040", VA = "0x472A040")]
	public static float cmax(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000604")]
	[Address(RVA = "0x472A0C0", Offset = "0x472A0C0", VA = "0x472A0C0")]
	public static double cmax(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000605")]
	[Address(RVA = "0x472A100", Offset = "0x472A100", VA = "0x472A100")]
	public static double cmax(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000606")]
	[Address(RVA = "0x472A170", Offset = "0x472A170", VA = "0x472A170")]
	public static double cmax(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000607")]
	[Address(RVA = "0x472A220", Offset = "0x472A220", VA = "0x472A220")]
	public static int csum(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000608")]
	[Address(RVA = "0x472A230", Offset = "0x472A230", VA = "0x472A230")]
	public static int csum(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000609")]
	[Address(RVA = "0x472A240", Offset = "0x472A240", VA = "0x472A240")]
	public static int csum(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060A")]
	[Address(RVA = "0x472A260", Offset = "0x472A260", VA = "0x472A260")]
	public static uint csum(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060B")]
	[Address(RVA = "0x472A270", Offset = "0x472A270", VA = "0x472A270")]
	public static uint csum(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060C")]
	[Address(RVA = "0x472A280", Offset = "0x472A280", VA = "0x472A280")]
	public static uint csum(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060D")]
	[Address(RVA = "0x472A2A0", Offset = "0x472A2A0", VA = "0x472A2A0")]
	public static float csum(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060E")]
	[Address(RVA = "0x472A2B0", Offset = "0x472A2B0", VA = "0x472A2B0")]
	public static float csum(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060F")]
	[Address(RVA = "0x472A2D0", Offset = "0x472A2D0", VA = "0x472A2D0")]
	public static float csum(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000610")]
	[Address(RVA = "0x472A2F0", Offset = "0x472A2F0", VA = "0x472A2F0")]
	public static double csum(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000611")]
	[Address(RVA = "0x472A300", Offset = "0x472A300", VA = "0x472A300")]
	public static double csum(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000612")]
	[Address(RVA = "0x472A320", Offset = "0x472A320", VA = "0x472A320")]
	public static double csum(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000613")]
	[Address(RVA = "0x472A350", Offset = "0x472A350", VA = "0x472A350")]
	public unsafe static int compress(int* output, int index, int4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000614")]
	[Address(RVA = "0x472A3C0", Offset = "0x472A3C0", VA = "0x472A3C0")]
	public unsafe static int compress(uint* output, int index, uint4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000615")]
	[Address(RVA = "0x472A430", Offset = "0x472A430", VA = "0x472A430")]
	public unsafe static int compress(float* output, int index, float4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000616")]
	[Address(RVA = "0x472A4B0", Offset = "0x472A4B0", VA = "0x472A4B0")]
	public static float f16tof32(uint x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000617")]
	[Address(RVA = "0x472A510", Offset = "0x472A510", VA = "0x472A510")]
	public static float2 f16tof32(uint2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000618")]
	[Address(RVA = "0x472A610", Offset = "0x472A610", VA = "0x472A610")]
	public static float3 f16tof32(uint3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000619")]
	[Address(RVA = "0x472A770", Offset = "0x472A770", VA = "0x472A770")]
	public static float4 f16tof32(uint4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061A")]
	[Address(RVA = "0x472A960", Offset = "0x472A960", VA = "0x472A960")]
	public static uint f32tof16(float x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061B")]
	[Address(RVA = "0x472A9C0", Offset = "0x472A9C0", VA = "0x472A9C0")]
	public static uint2 f32tof16(float2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061C")]
	[Address(RVA = "0x472AA80", Offset = "0x472AA80", VA = "0x472AA80")]
	public static uint3 f32tof16(float3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061D")]
	[Address(RVA = "0x472AB90", Offset = "0x472AB90", VA = "0x472AB90")]
	public static uint4 f32tof16(float4 x)
	{
		return default(uint4);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x472AD10", Offset = "0x472AD10", VA = "0x472AD10")]
	public unsafe static uint hash(void* pBuffer, int numBytes, uint seed = 0u)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061F")]
	[Address(RVA = "0x472AF40", Offset = "0x472AF40", VA = "0x472AF40")]
	public static float3 up()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000620")]
	[Address(RVA = "0x472AF50", Offset = "0x472AF50", VA = "0x472AF50")]
	public static float3 down()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000621")]
	[Address(RVA = "0x472AF60", Offset = "0x472AF60", VA = "0x472AF60")]
	public static float3 forward()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000622")]
	[Address(RVA = "0x472AF70", Offset = "0x472AF70", VA = "0x472AF70")]
	public static float3 back()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000623")]
	[Address(RVA = "0x472AF80", Offset = "0x472AF80", VA = "0x472AF80")]
	public static float3 left()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000624")]
	[Address(RVA = "0x472AF90", Offset = "0x472AF90", VA = "0x472AF90")]
	public static float3 right()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000625")]
	[Address(RVA = "0x472AFA0", Offset = "0x472AFA0", VA = "0x472AFA0")]
	internal static float4 unpacklo(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000626")]
	[Address(RVA = "0x472AFC0", Offset = "0x472AFC0", VA = "0x472AFC0")]
	internal static double4 unpacklo(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000627")]
	[Address(RVA = "0x472AFF0", Offset = "0x472AFF0", VA = "0x472AFF0")]
	internal static float4 unpackhi(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000628")]
	[Address(RVA = "0x472B010", Offset = "0x472B010", VA = "0x472B010")]
	internal static double4 unpackhi(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000629")]
	[Address(RVA = "0x472B040", Offset = "0x472B040", VA = "0x472B040")]
	internal static float4 movelh(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062A")]
	[Address(RVA = "0x472B050", Offset = "0x472B050", VA = "0x472B050")]
	internal static double4 movelh(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062B")]
	[Address(RVA = "0x472B070", Offset = "0x472B070", VA = "0x472B070")]
	internal static float4 movehl(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062C")]
	[Address(RVA = "0x472B080", Offset = "0x472B080", VA = "0x472B080")]
	internal static double4 movehl(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062D")]
	[Address(RVA = "0x472B0A0", Offset = "0x472B0A0", VA = "0x472B0A0")]
	internal static uint fold_to_uint(double x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062E")]
	[Address(RVA = "0x472B0B0", Offset = "0x472B0B0", VA = "0x472B0B0")]
	internal static uint2 fold_to_uint(double2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062F")]
	[Address(RVA = "0x472B0E0", Offset = "0x472B0E0", VA = "0x472B0E0")]
	internal static uint3 fold_to_uint(double3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000630")]
	[Address(RVA = "0x472B120", Offset = "0x472B120", VA = "0x472B120")]
	internal static uint4 fold_to_uint(double4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000631")]
	[Address(RVA = "0x472B180", Offset = "0x472B180", VA = "0x472B180")]
	public static float3x3 float3x3(float4x4 f4x4)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000632")]
	[Address(RVA = "0x472B1E0", Offset = "0x472B1E0", VA = "0x472B1E0")]
	public static float3x3 float3x3(quaternion rotation)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000633")]
	[Address(RVA = "0x472B210", Offset = "0x472B210", VA = "0x472B210")]
	public static float4x4 float4x4(float3x3 rotation, float3 translation)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000634")]
	[Address(RVA = "0x472B260", Offset = "0x472B260", VA = "0x472B260")]
	public static float4x4 float4x4(quaternion rotation, float3 translation)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000635")]
	[Address(RVA = "0x472B290", Offset = "0x472B290", VA = "0x472B290")]
	public static float4x4 float4x4(RigidTransform transform)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000636")]
	[Address(RVA = "0x472B2D0", Offset = "0x472B2D0", VA = "0x472B2D0")]
	public static float3x3 orthonormalize(float3x3 i)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000637")]
	[Address(RVA = "0x472B5E0", Offset = "0x472B5E0", VA = "0x472B5E0")]
	public static float mul(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000638")]
	[Address(RVA = "0x472B5F0", Offset = "0x472B5F0", VA = "0x472B5F0")]
	public static float mul(float2 a, float2 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000639")]
	[Address(RVA = "0x472B610", Offset = "0x472B610", VA = "0x472B610")]
	public static float2 mul(float2 a, float2x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063A")]
	[Address(RVA = "0x472B640", Offset = "0x472B640", VA = "0x472B640")]
	public static float3 mul(float2 a, float2x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063B")]
	[Address(RVA = "0x472B690", Offset = "0x472B690", VA = "0x472B690")]
	public static float4 mul(float2 a, float2x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063C")]
	[Address(RVA = "0x472B6F0", Offset = "0x472B6F0", VA = "0x472B6F0")]
	public static float mul(float3 a, float3 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063D")]
	[Address(RVA = "0x472B710", Offset = "0x472B710", VA = "0x472B710")]
	public static float2 mul(float3 a, float3x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063E")]
	[Address(RVA = "0x472B760", Offset = "0x472B760", VA = "0x472B760")]
	public static float3 mul(float3 a, float3x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063F")]
	[Address(RVA = "0x472B7D0", Offset = "0x472B7D0", VA = "0x472B7D0")]
	public static float4 mul(float3 a, float3x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000640")]
	[Address(RVA = "0x472B850", Offset = "0x472B850", VA = "0x472B850")]
	public static float mul(float4 a, float4 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000641")]
	[Address(RVA = "0x472B880", Offset = "0x472B880", VA = "0x472B880")]
	public static float2 mul(float4 a, float4x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000642")]
	[Address(RVA = "0x472B8E0", Offset = "0x472B8E0", VA = "0x472B8E0")]
	public static float3 mul(float4 a, float4x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000643")]
	[Address(RVA = "0x472B970", Offset = "0x472B970", VA = "0x472B970")]
	public static float4 mul(float4 a, float4x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000644")]
	[Address(RVA = "0x472BA30", Offset = "0x472BA30", VA = "0x472BA30")]
	public static float2 mul(float2x2 a, float2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000645")]
	[Address(RVA = "0x472BA50", Offset = "0x472BA50", VA = "0x472BA50")]
	public static float2x2 mul(float2x2 a, float2x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000646")]
	[Address(RVA = "0x472BA80", Offset = "0x472BA80", VA = "0x472BA80")]
	public static float2x3 mul(float2x2 a, float2x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000647")]
	[Address(RVA = "0x472BAF0", Offset = "0x472BAF0", VA = "0x472BAF0")]
	public static float2x4 mul(float2x2 a, float2x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000648")]
	[Address(RVA = "0x472BB80", Offset = "0x472BB80", VA = "0x472BB80")]
	public static float2 mul(float2x3 a, float3 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000649")]
	[Address(RVA = "0x472BBC0", Offset = "0x472BBC0", VA = "0x472BBC0")]
	public static float2x2 mul(float2x3 a, float3x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064A")]
	[Address(RVA = "0x472BC30", Offset = "0x472BC30", VA = "0x472BC30")]
	public static float2x3 mul(float2x3 a, float3x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064B")]
	[Address(RVA = "0x472BCE0", Offset = "0x472BCE0", VA = "0x472BCE0")]
	public static float2x4 mul(float2x3 a, float3x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064C")]
	[Address(RVA = "0x472BDC0", Offset = "0x472BDC0", VA = "0x472BDC0")]
	public static float2 mul(float2x4 a, float4 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064D")]
	[Address(RVA = "0x472BE10", Offset = "0x472BE10", VA = "0x472BE10")]
	public static float2x2 mul(float2x4 a, float4x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064E")]
	[Address(RVA = "0x472BE90", Offset = "0x472BE90", VA = "0x472BE90")]
	public static float2x3 mul(float2x4 a, float4x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064F")]
	[Address(RVA = "0x472BF70", Offset = "0x472BF70", VA = "0x472BF70")]
	public static float2x4 mul(float2x4 a, float4x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000650")]
	[Address(RVA = "0x472C090", Offset = "0x472C090", VA = "0x472C090")]
	public static float3 mul(float3x2 a, float2 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000651")]
	[Address(RVA = "0x472C0D0", Offset = "0x472C0D0", VA = "0x472C0D0")]
	public static float3x2 mul(float3x2 a, float2x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000652")]
	[Address(RVA = "0x472C150", Offset = "0x472C150", VA = "0x472C150")]
	public static float3x3 mul(float3x2 a, float2x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000653")]
	[Address(RVA = "0x472C220", Offset = "0x472C220", VA = "0x472C220")]
	public static float3x4 mul(float3x2 a, float2x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000654")]
	[Address(RVA = "0x472C330", Offset = "0x472C330", VA = "0x472C330")]
	public static float3 mul(float3x3 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000655")]
	[Address(RVA = "0x472C390", Offset = "0x472C390", VA = "0x472C390")]
	public static float3x2 mul(float3x3 a, float3x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000656")]
	[Address(RVA = "0x472C460", Offset = "0x472C460", VA = "0x472C460")]
	public static float3x3 mul(float3x3 a, float3x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000657")]
	[Address(RVA = "0x472C590", Offset = "0x472C590", VA = "0x472C590")]
	public static float3x4 mul(float3x3 a, float3x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000658")]
	[Address(RVA = "0x472C720", Offset = "0x472C720", VA = "0x472C720")]
	public static float3 mul(float3x4 a, float4 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000659")]
	[Address(RVA = "0x472C7A0", Offset = "0x472C7A0", VA = "0x472C7A0")]
	public static float3x2 mul(float3x4 a, float4x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065A")]
	[Address(RVA = "0x472C8B0", Offset = "0x472C8B0", VA = "0x472C8B0")]
	public static float3x3 mul(float3x4 a, float4x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065B")]
	[Address(RVA = "0x472CA50", Offset = "0x472CA50", VA = "0x472CA50")]
	public static float3x4 mul(float3x4 a, float4x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065C")]
	[Address(RVA = "0x472CC60", Offset = "0x472CC60", VA = "0x472CC60")]
	public static float4 mul(float4x2 a, float2 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065D")]
	[Address(RVA = "0x472CCA0", Offset = "0x472CCA0", VA = "0x472CCA0")]
	public static float4x2 mul(float4x2 a, float2x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065E")]
	[Address(RVA = "0x472CD10", Offset = "0x472CD10", VA = "0x472CD10")]
	public static float4x3 mul(float4x2 a, float2x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065F")]
	[Address(RVA = "0x472CDD0", Offset = "0x472CDD0", VA = "0x472CDD0")]
	public static float4x4 mul(float4x2 a, float2x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000660")]
	[Address(RVA = "0x472CEC0", Offset = "0x472CEC0", VA = "0x472CEC0")]
	public static float4 mul(float4x3 a, float3 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000661")]
	[Address(RVA = "0x472CF20", Offset = "0x472CF20", VA = "0x472CF20")]
	public static float4x2 mul(float4x3 a, float3x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000662")]
	[Address(RVA = "0x472CFE0", Offset = "0x472CFE0", VA = "0x472CFE0")]
	public static float4x3 mul(float4x3 a, float3x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000663")]
	[Address(RVA = "0x472D0F0", Offset = "0x472D0F0", VA = "0x472D0F0")]
	public static float4x4 mul(float4x3 a, float3x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000664")]
	[Address(RVA = "0x472D260", Offset = "0x472D260", VA = "0x472D260")]
	public static float4 mul(float4x4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000665")]
	[Address(RVA = "0x472D2E0", Offset = "0x472D2E0", VA = "0x472D2E0")]
	public static float4x2 mul(float4x4 a, float4x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000666")]
	[Address(RVA = "0x472D3F0", Offset = "0x472D3F0", VA = "0x472D3F0")]
	public static float4x3 mul(float4x4 a, float4x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000667")]
	[Address(RVA = "0x472D560", Offset = "0x472D560", VA = "0x472D560")]
	public static float4x4 mul(float4x4 a, float4x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000668")]
	[Address(RVA = "0x472D750", Offset = "0x472D750", VA = "0x472D750")]
	public static double mul(double a, double b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000669")]
	[Address(RVA = "0x472D760", Offset = "0x472D760", VA = "0x472D760")]
	public static double mul(double2 a, double2 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066A")]
	[Address(RVA = "0x472D770", Offset = "0x472D770", VA = "0x472D770")]
	public static double2 mul(double2 a, double2x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066B")]
	[Address(RVA = "0x472D7A0", Offset = "0x472D7A0", VA = "0x472D7A0")]
	public static double3 mul(double2 a, double2x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066C")]
	[Address(RVA = "0x472D800", Offset = "0x472D800", VA = "0x472D800")]
	public static double4 mul(double2 a, double2x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066D")]
	[Address(RVA = "0x472D860", Offset = "0x472D860", VA = "0x472D860")]
	public static double mul(double3 a, double3 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066E")]
	[Address(RVA = "0x472D890", Offset = "0x472D890", VA = "0x472D890")]
	public static double2 mul(double3 a, double3x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066F")]
	[Address(RVA = "0x472D8E0", Offset = "0x472D8E0", VA = "0x472D8E0")]
	public static double3 mul(double3 a, double3x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000670")]
	[Address(RVA = "0x472D970", Offset = "0x472D970", VA = "0x472D970")]
	public static double4 mul(double3 a, double3x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000671")]
	[Address(RVA = "0x472DA10", Offset = "0x472DA10", VA = "0x472DA10")]
	public static double mul(double4 a, double4 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000672")]
	[Address(RVA = "0x472DA50", Offset = "0x472DA50", VA = "0x472DA50")]
	public static double2 mul(double4 a, double4x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000673")]
	[Address(RVA = "0x472DAC0", Offset = "0x472DAC0", VA = "0x472DAC0")]
	public static double3 mul(double4 a, double4x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000674")]
	[Address(RVA = "0x472DB80", Offset = "0x472DB80", VA = "0x472DB80")]
	public static double4 mul(double4 a, double4x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000675")]
	[Address(RVA = "0x472DC60", Offset = "0x472DC60", VA = "0x472DC60")]
	public static double2 mul(double2x2 a, double2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000676")]
	[Address(RVA = "0x472DC90", Offset = "0x472DC90", VA = "0x472DC90")]
	public static double2x2 mul(double2x2 a, double2x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000677")]
	[Address(RVA = "0x472DCF0", Offset = "0x472DCF0", VA = "0x472DCF0")]
	public static double2x3 mul(double2x2 a, double2x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000678")]
	[Address(RVA = "0x472DD70", Offset = "0x472DD70", VA = "0x472DD70")]
	public static double2x4 mul(double2x2 a, double2x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000679")]
	[Address(RVA = "0x472DE20", Offset = "0x472DE20", VA = "0x472DE20")]
	public static double2 mul(double2x3 a, double3 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067A")]
	[Address(RVA = "0x472DE70", Offset = "0x472DE70", VA = "0x472DE70")]
	public static double2x2 mul(double2x3 a, double3x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067B")]
	[Address(RVA = "0x472DF00", Offset = "0x472DF00", VA = "0x472DF00")]
	public static double2x3 mul(double2x3 a, double3x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067C")]
	[Address(RVA = "0x472DFC0", Offset = "0x472DFC0", VA = "0x472DFC0")]
	public static double2x4 mul(double2x3 a, double3x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067D")]
	[Address(RVA = "0x472E0C0", Offset = "0x472E0C0", VA = "0x472E0C0")]
	public static double2 mul(double2x4 a, double4 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067E")]
	[Address(RVA = "0x472E120", Offset = "0x472E120", VA = "0x472E120")]
	public static double2x2 mul(double2x4 a, double4x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067F")]
	[Address(RVA = "0x472E1D0", Offset = "0x472E1D0", VA = "0x472E1D0")]
	public static double2x3 mul(double2x4 a, double4x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000680")]
	[Address(RVA = "0x472E2E0", Offset = "0x472E2E0", VA = "0x472E2E0")]
	public static double2x4 mul(double2x4 a, double4x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000681")]
	[Address(RVA = "0x472E440", Offset = "0x472E440", VA = "0x472E440")]
	public static double3 mul(double3x2 a, double2 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000682")]
	[Address(RVA = "0x472E490", Offset = "0x472E490", VA = "0x472E490")]
	public static double3x2 mul(double3x2 a, double2x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000683")]
	[Address(RVA = "0x472E540", Offset = "0x472E540", VA = "0x472E540")]
	public static double3x3 mul(double3x2 a, double2x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000684")]
	[Address(RVA = "0x472E640", Offset = "0x472E640", VA = "0x472E640")]
	public static double3x4 mul(double3x2 a, double2x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000685")]
	[Address(RVA = "0x472E760", Offset = "0x472E760", VA = "0x472E760")]
	public static double3 mul(double3x3 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000686")]
	[Address(RVA = "0x472E7D0", Offset = "0x472E7D0", VA = "0x472E7D0")]
	public static double3x2 mul(double3x3 a, double3x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000687")]
	[Address(RVA = "0x472E8D0", Offset = "0x472E8D0", VA = "0x472E8D0")]
	public static double3x3 mul(double3x3 a, double3x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000688")]
	[Address(RVA = "0x472EA60", Offset = "0x472EA60", VA = "0x472EA60")]
	public static double3x4 mul(double3x3 a, double3x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000689")]
	[Address(RVA = "0x472EC30", Offset = "0x472EC30", VA = "0x472EC30")]
	public static double3 mul(double3x4 a, double4 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068A")]
	[Address(RVA = "0x472ECD0", Offset = "0x472ECD0", VA = "0x472ECD0")]
	public static double3x2 mul(double3x4 a, double4x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068B")]
	[Address(RVA = "0x472EE30", Offset = "0x472EE30", VA = "0x472EE30")]
	public static double3x3 mul(double3x4 a, double4x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068C")]
	[Address(RVA = "0x472F050", Offset = "0x472F050", VA = "0x472F050")]
	public static double3x4 mul(double3x4 a, double4x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068D")]
	[Address(RVA = "0x472F2D0", Offset = "0x472F2D0", VA = "0x472F2D0")]
	public static double4 mul(double4x2 a, double2 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068E")]
	[Address(RVA = "0x472F310", Offset = "0x472F310", VA = "0x472F310")]
	public static double4x2 mul(double4x2 a, double2x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068F")]
	[Address(RVA = "0x472F3B0", Offset = "0x472F3B0", VA = "0x472F3B0")]
	public static double4x3 mul(double4x2 a, double2x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000690")]
	[Address(RVA = "0x472F490", Offset = "0x472F490", VA = "0x472F490")]
	public static double4x4 mul(double4x2 a, double2x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000691")]
	[Address(RVA = "0x472F5C0", Offset = "0x472F5C0", VA = "0x472F5C0")]
	public static double4 mul(double4x3 a, double3 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000692")]
	[Address(RVA = "0x472F630", Offset = "0x472F630", VA = "0x472F630")]
	public static double4x2 mul(double4x3 a, double3x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000693")]
	[Address(RVA = "0x472F720", Offset = "0x472F720", VA = "0x472F720")]
	public static double4x3 mul(double4x3 a, double3x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000694")]
	[Address(RVA = "0x472F880", Offset = "0x472F880", VA = "0x472F880")]
	public static double4x4 mul(double4x3 a, double3x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000695")]
	[Address(RVA = "0x472FA50", Offset = "0x472FA50", VA = "0x472FA50")]
	public static double4 mul(double4x4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000696")]
	[Address(RVA = "0x472FAF0", Offset = "0x472FAF0", VA = "0x472FAF0")]
	public static double4x2 mul(double4x4 a, double4x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000697")]
	[Address(RVA = "0x472FC30", Offset = "0x472FC30", VA = "0x472FC30")]
	public static double4x3 mul(double4x4 a, double4x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000698")]
	[Address(RVA = "0x472FE10", Offset = "0x472FE10", VA = "0x472FE10")]
	public static double4x4 mul(double4x4 a, double4x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000699")]
	[Address(RVA = "0x4730080", Offset = "0x4730080", VA = "0x4730080")]
	public static int mul(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069A")]
	[Address(RVA = "0x4730090", Offset = "0x4730090", VA = "0x4730090")]
	public static int mul(int2 a, int2 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069B")]
	[Address(RVA = "0x47300B0", Offset = "0x47300B0", VA = "0x47300B0")]
	public static int2 mul(int2 a, int2x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069C")]
	[Address(RVA = "0x47300E0", Offset = "0x47300E0", VA = "0x47300E0")]
	public static int3 mul(int2 a, int2x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069D")]
	[Address(RVA = "0x4730120", Offset = "0x4730120", VA = "0x4730120")]
	public static int4 mul(int2 a, int2x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069E")]
	[Address(RVA = "0x4730180", Offset = "0x4730180", VA = "0x4730180")]
	public static int mul(int3 a, int3 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069F")]
	[Address(RVA = "0x47301A0", Offset = "0x47301A0", VA = "0x47301A0")]
	public static int2 mul(int3 a, int3x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x47301E0", Offset = "0x47301E0", VA = "0x47301E0")]
	public static int3 mul(int3 a, int3x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x4730240", Offset = "0x4730240", VA = "0x4730240")]
	public static int4 mul(int3 a, int3x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x47302C0", Offset = "0x47302C0", VA = "0x47302C0")]
	public static int mul(int4 a, int4 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x47302F0", Offset = "0x47302F0", VA = "0x47302F0")]
	public static int2 mul(int4 a, int4x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x4730350", Offset = "0x4730350", VA = "0x4730350")]
	public static int3 mul(int4 a, int4x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x47303D0", Offset = "0x47303D0", VA = "0x47303D0")]
	public static int4 mul(int4 a, int4x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x4730480", Offset = "0x4730480", VA = "0x4730480")]
	public static int2 mul(int2x2 a, int2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x47304C0", Offset = "0x47304C0", VA = "0x47304C0")]
	public static int2x2 mul(int2x2 a, int2x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x4730530", Offset = "0x4730530", VA = "0x4730530")]
	public static int2x3 mul(int2x2 a, int2x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x4730610", Offset = "0x4730610", VA = "0x4730610")]
	public static int2x4 mul(int2x2 a, int2x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x4730750", Offset = "0x4730750", VA = "0x4730750")]
	public static int2 mul(int2x3 a, int3 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x47307D0", Offset = "0x47307D0", VA = "0x47307D0")]
	public static int2x2 mul(int2x3 a, int3x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x47308C0", Offset = "0x47308C0", VA = "0x47308C0")]
	public static int2x3 mul(int2x3 a, int3x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x4730A50", Offset = "0x4730A50", VA = "0x4730A50")]
	public static int2x4 mul(int2x3 a, int3x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x4730C70", Offset = "0x4730C70", VA = "0x4730C70")]
	public static int2 mul(int2x4 a, int4 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x4730D10", Offset = "0x4730D10", VA = "0x4730D10")]
	public static int2x2 mul(int2x4 a, int4x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x4730E70", Offset = "0x4730E70", VA = "0x4730E70")]
	public static int2x3 mul(int2x4 a, int4x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x47310A0", Offset = "0x47310A0", VA = "0x47310A0")]
	public static int2x4 mul(int2x4 a, int4x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x47313D0", Offset = "0x47313D0", VA = "0x47313D0")]
	public static int3 mul(int3x2 a, int2 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x4731430", Offset = "0x4731430", VA = "0x4731430")]
	public static int3x2 mul(int3x2 a, int2x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x4731500", Offset = "0x4731500", VA = "0x4731500")]
	public static int3x3 mul(int3x2 a, int2x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x4731650", Offset = "0x4731650", VA = "0x4731650")]
	public static int3x4 mul(int3x2 a, int2x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x4731820", Offset = "0x4731820", VA = "0x4731820")]
	public static int3 mul(int3x3 a, int3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x47318B0", Offset = "0x47318B0", VA = "0x47318B0")]
	public static int3x2 mul(int3x3 a, int3x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x4731A00", Offset = "0x4731A00", VA = "0x4731A00")]
	public static int3x3 mul(int3x3 a, int3x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x4731C20", Offset = "0x4731C20", VA = "0x4731C20")]
	public static int3x4 mul(int3x3 a, int3x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x4731F10", Offset = "0x4731F10", VA = "0x4731F10")]
	public static int3 mul(int3x4 a, int4 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x4731FE0", Offset = "0x4731FE0", VA = "0x4731FE0")]
	public static int3x2 mul(int3x4 a, int4x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x47321B0", Offset = "0x47321B0", VA = "0x47321B0")]
	public static int3x3 mul(int3x4 a, int4x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x4732490", Offset = "0x4732490", VA = "0x4732490")]
	public static int3x4 mul(int3x4 a, int4x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x4732890", Offset = "0x4732890", VA = "0x4732890")]
	public static int4 mul(int4x2 a, int2 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x4732930", Offset = "0x4732930", VA = "0x4732930")]
	public static int4x2 mul(int4x2 a, int2x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x4732A60", Offset = "0x4732A60", VA = "0x4732A60")]
	public static int4x3 mul(int4x2 a, int2x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x4732C50", Offset = "0x4732C50", VA = "0x4732C50")]
	public static int4x4 mul(int4x2 a, int2x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x4732F10", Offset = "0x4732F10", VA = "0x4732F10")]
	public static int4 mul(int4x3 a, int3 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x4732FF0", Offset = "0x4732FF0", VA = "0x4732FF0")]
	public static int4x2 mul(int4x3 a, int3x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x47331F0", Offset = "0x47331F0", VA = "0x47331F0")]
	public static int4x3 mul(int4x3 a, int3x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x4733520", Offset = "0x4733520", VA = "0x4733520")]
	public static int4x4 mul(int4x3 a, int3x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x47339B0", Offset = "0x47339B0", VA = "0x47339B0")]
	public static int4 mul(int4x4 a, int4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4733AF0", Offset = "0x4733AF0", VA = "0x4733AF0")]
	public static int4x2 mul(int4x4 a, int4x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x4733DD0", Offset = "0x4733DD0", VA = "0x4733DD0")]
	public static int4x3 mul(int4x4 a, int4x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x4734260", Offset = "0x4734260", VA = "0x4734260")]
	public static int4x4 mul(int4x4 a, int4x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x47348A0", Offset = "0x47348A0", VA = "0x47348A0")]
	public static uint mul(uint a, uint b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x47348B0", Offset = "0x47348B0", VA = "0x47348B0")]
	public static uint mul(uint2 a, uint2 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x47348D0", Offset = "0x47348D0", VA = "0x47348D0")]
	public static uint2 mul(uint2 a, uint2x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x4734900", Offset = "0x4734900", VA = "0x4734900")]
	public static uint3 mul(uint2 a, uint2x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x4734940", Offset = "0x4734940", VA = "0x4734940")]
	public static uint4 mul(uint2 a, uint2x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x47349A0", Offset = "0x47349A0", VA = "0x47349A0")]
	public static uint mul(uint3 a, uint3 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x47349C0", Offset = "0x47349C0", VA = "0x47349C0")]
	public static uint2 mul(uint3 a, uint3x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x4734A00", Offset = "0x4734A00", VA = "0x4734A00")]
	public static uint3 mul(uint3 a, uint3x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x4734A60", Offset = "0x4734A60", VA = "0x4734A60")]
	public static uint4 mul(uint3 a, uint3x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x4734AE0", Offset = "0x4734AE0", VA = "0x4734AE0")]
	public static uint mul(uint4 a, uint4 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x4734B10", Offset = "0x4734B10", VA = "0x4734B10")]
	public static uint2 mul(uint4 a, uint4x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x4734B70", Offset = "0x4734B70", VA = "0x4734B70")]
	public static uint3 mul(uint4 a, uint4x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x4734BF0", Offset = "0x4734BF0", VA = "0x4734BF0")]
	public static uint4 mul(uint4 a, uint4x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x4734CA0", Offset = "0x4734CA0", VA = "0x4734CA0")]
	public static uint2 mul(uint2x2 a, uint2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x4734CE0", Offset = "0x4734CE0", VA = "0x4734CE0")]
	public static uint2x2 mul(uint2x2 a, uint2x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x4734D50", Offset = "0x4734D50", VA = "0x4734D50")]
	public static uint2x3 mul(uint2x2 a, uint2x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x4734E30", Offset = "0x4734E30", VA = "0x4734E30")]
	public static uint2x4 mul(uint2x2 a, uint2x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x4734F70", Offset = "0x4734F70", VA = "0x4734F70")]
	public static uint2 mul(uint2x3 a, uint3 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x4734FF0", Offset = "0x4734FF0", VA = "0x4734FF0")]
	public static uint2x2 mul(uint2x3 a, uint3x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x47350E0", Offset = "0x47350E0", VA = "0x47350E0")]
	public static uint2x3 mul(uint2x3 a, uint3x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x4735270", Offset = "0x4735270", VA = "0x4735270")]
	public static uint2x4 mul(uint2x3 a, uint3x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x4735490", Offset = "0x4735490", VA = "0x4735490")]
	public static uint2 mul(uint2x4 a, uint4 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x4735530", Offset = "0x4735530", VA = "0x4735530")]
	public static uint2x2 mul(uint2x4 a, uint4x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x4735690", Offset = "0x4735690", VA = "0x4735690")]
	public static uint2x3 mul(uint2x4 a, uint4x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x47358C0", Offset = "0x47358C0", VA = "0x47358C0")]
	public static uint2x4 mul(uint2x4 a, uint4x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x4735BF0", Offset = "0x4735BF0", VA = "0x4735BF0")]
	public static uint3 mul(uint3x2 a, uint2 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x4735C50", Offset = "0x4735C50", VA = "0x4735C50")]
	public static uint3x2 mul(uint3x2 a, uint2x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x4735D20", Offset = "0x4735D20", VA = "0x4735D20")]
	public static uint3x3 mul(uint3x2 a, uint2x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x4735E70", Offset = "0x4735E70", VA = "0x4735E70")]
	public static uint3x4 mul(uint3x2 a, uint2x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x4736040", Offset = "0x4736040", VA = "0x4736040")]
	public static uint3 mul(uint3x3 a, uint3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x47360D0", Offset = "0x47360D0", VA = "0x47360D0")]
	public static uint3x2 mul(uint3x3 a, uint3x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x4736220", Offset = "0x4736220", VA = "0x4736220")]
	public static uint3x3 mul(uint3x3 a, uint3x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x4736440", Offset = "0x4736440", VA = "0x4736440")]
	public static uint3x4 mul(uint3x3 a, uint3x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4736730", Offset = "0x4736730", VA = "0x4736730")]
	public static uint3 mul(uint3x4 a, uint4 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4736800", Offset = "0x4736800", VA = "0x4736800")]
	public static uint3x2 mul(uint3x4 a, uint4x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x47369D0", Offset = "0x47369D0", VA = "0x47369D0")]
	public static uint3x3 mul(uint3x4 a, uint4x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x4736CB0", Offset = "0x4736CB0", VA = "0x4736CB0")]
	public static uint3x4 mul(uint3x4 a, uint4x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x47370B0", Offset = "0x47370B0", VA = "0x47370B0")]
	public static uint4 mul(uint4x2 a, uint2 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x4737150", Offset = "0x4737150", VA = "0x4737150")]
	public static uint4x2 mul(uint4x2 a, uint2x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x4737280", Offset = "0x4737280", VA = "0x4737280")]
	public static uint4x3 mul(uint4x2 a, uint2x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x4737470", Offset = "0x4737470", VA = "0x4737470")]
	public static uint4x4 mul(uint4x2 a, uint2x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x4737730", Offset = "0x4737730", VA = "0x4737730")]
	public static uint4 mul(uint4x3 a, uint3 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x4737810", Offset = "0x4737810", VA = "0x4737810")]
	public static uint4x2 mul(uint4x3 a, uint3x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x4737A10", Offset = "0x4737A10", VA = "0x4737A10")]
	public static uint4x3 mul(uint4x3 a, uint3x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x4737D40", Offset = "0x4737D40", VA = "0x4737D40")]
	public static uint4x4 mul(uint4x3 a, uint3x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x47381D0", Offset = "0x47381D0", VA = "0x47381D0")]
	public static uint4 mul(uint4x4 a, uint4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4738310", Offset = "0x4738310", VA = "0x4738310")]
	public static uint4x2 mul(uint4x4 a, uint4x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x47385F0", Offset = "0x47385F0", VA = "0x47385F0")]
	public static uint4x3 mul(uint4x4 a, uint4x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x4738A80", Offset = "0x4738A80", VA = "0x4738A80")]
	public static uint4x4 mul(uint4x4 a, uint4x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x47390C0", Offset = "0x47390C0", VA = "0x47390C0")]
	public static quaternion quaternion(float x, float y, float z, float w)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x47390D0", Offset = "0x47390D0", VA = "0x47390D0")]
	public static quaternion quaternion(float4 value)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x47390E0", Offset = "0x47390E0", VA = "0x47390E0")]
	public static quaternion quaternion(float3x3 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x4739130", Offset = "0x4739130", VA = "0x4739130")]
	public static quaternion quaternion(float4x4 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x4739190", Offset = "0x4739190", VA = "0x4739190")]
	public static quaternion conjugate(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000700")]
	[Address(RVA = "0x47391B0", Offset = "0x47391B0", VA = "0x47391B0")]
	public static quaternion inverse(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000701")]
	[Address(RVA = "0x4739220", Offset = "0x4739220", VA = "0x4739220")]
	public static float dot(quaternion a, quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000702")]
	[Address(RVA = "0x4739250", Offset = "0x4739250", VA = "0x4739250")]
	public static float length(quaternion q)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000703")]
	[Address(RVA = "0x4739300", Offset = "0x4739300", VA = "0x4739300")]
	public static float lengthsq(quaternion q)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000704")]
	[Address(RVA = "0x4739330", Offset = "0x4739330", VA = "0x4739330")]
	public static quaternion normalize(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000705")]
	[Address(RVA = "0x4739420", Offset = "0x4739420", VA = "0x4739420")]
	public static quaternion normalizesafe(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000706")]
	[Address(RVA = "0x47395C0", Offset = "0x47395C0", VA = "0x47395C0")]
	public static quaternion normalizesafe(quaternion q, quaternion defaultvalue)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000707")]
	[Address(RVA = "0x4739700", Offset = "0x4739700", VA = "0x4739700")]
	public static quaternion unitexp(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000708")]
	[Address(RVA = "0x47398B0", Offset = "0x47398B0", VA = "0x47398B0")]
	public static quaternion exp(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000709")]
	[Address(RVA = "0x4739B10", Offset = "0x4739B10", VA = "0x4739B10")]
	public static quaternion unitlog(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070A")]
	[Address(RVA = "0x4739CE0", Offset = "0x4739CE0", VA = "0x4739CE0")]
	public static quaternion log(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070B")]
	[Address(RVA = "0x4739F90", Offset = "0x4739F90", VA = "0x4739F90")]
	public static quaternion mul(quaternion a, quaternion b)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070C")]
	[Address(RVA = "0x473A050", Offset = "0x473A050", VA = "0x473A050")]
	public static float3 mul(quaternion q, float3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070D")]
	[Address(RVA = "0x473A100", Offset = "0x473A100", VA = "0x473A100")]
	public static float3 rotate(quaternion q, float3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070E")]
	[Address(RVA = "0x473A1B0", Offset = "0x473A1B0", VA = "0x473A1B0")]
	public static quaternion nlerp(quaternion q1, quaternion q2, float t)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070F")]
	[Address(RVA = "0x473A2F0", Offset = "0x473A2F0", VA = "0x473A2F0")]
	public static quaternion slerp(quaternion q1, quaternion q2, float t)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000710")]
	[Address(RVA = "0x473A730", Offset = "0x473A730", VA = "0x473A730")]
	public static uint hash(quaternion q)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000711")]
	[Address(RVA = "0x473A790", Offset = "0x473A790", VA = "0x473A790")]
	public static uint4 hashwide(quaternion q)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000712")]
	[Address(RVA = "0x473A7F0", Offset = "0x473A7F0", VA = "0x473A7F0")]
	public static float3 forward(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000713")]
	[Address(RVA = "0x473A890", Offset = "0x473A890", VA = "0x473A890")]
	public static RigidTransform RigidTransform(quaternion rot, float3 pos)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000714")]
	[Address(RVA = "0x473A8B0", Offset = "0x473A8B0", VA = "0x473A8B0")]
	public static RigidTransform RigidTransform(float3x3 rotation, float3 translation)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000715")]
	[Address(RVA = "0x473A930", Offset = "0x473A930", VA = "0x473A930")]
	public static RigidTransform RigidTransform(float4x4 transform)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000716")]
	[Address(RVA = "0x473A9F0", Offset = "0x473A9F0", VA = "0x473A9F0")]
	public static RigidTransform inverse(RigidTransform t)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000717")]
	[Address(RVA = "0x473AB40", Offset = "0x473AB40", VA = "0x473AB40")]
	public static RigidTransform mul(RigidTransform a, RigidTransform b)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000718")]
	[Address(RVA = "0x473ACF0", Offset = "0x473ACF0", VA = "0x473ACF0")]
	public static float4 mul(RigidTransform a, float4 pos)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000719")]
	[Address(RVA = "0x473ADD0", Offset = "0x473ADD0", VA = "0x473ADD0")]
	public static float3 rotate(RigidTransform a, float3 dir)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071A")]
	[Address(RVA = "0x473AE90", Offset = "0x473AE90", VA = "0x473AE90")]
	public static float3 transform(RigidTransform a, float3 pos)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071B")]
	[Address(RVA = "0x473AF70", Offset = "0x473AF70", VA = "0x473AF70")]
	public static uint hash(RigidTransform t)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071C")]
	[Address(RVA = "0x473B020", Offset = "0x473B020", VA = "0x473B020")]
	public static uint4 hashwide(RigidTransform t)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071D")]
	[Address(RVA = "0x473B130", Offset = "0x473B130", VA = "0x473B130")]
	public static uint2 uint2(uint x, uint y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071E")]
	[Address(RVA = "0x473B140", Offset = "0x473B140", VA = "0x473B140")]
	public static uint2 uint2(uint2 xy)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071F")]
	[Address(RVA = "0x473B150", Offset = "0x473B150", VA = "0x473B150")]
	public static uint2 uint2(uint v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000720")]
	[Address(RVA = "0x473B160", Offset = "0x473B160", VA = "0x473B160")]
	public static uint2 uint2(bool v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000721")]
	[Address(RVA = "0x473B170", Offset = "0x473B170", VA = "0x473B170")]
	public static uint2 uint2(bool2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000722")]
	[Address(RVA = "0x473B190", Offset = "0x473B190", VA = "0x473B190")]
	public static uint2 uint2(int v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000723")]
	[Address(RVA = "0x473B1A0", Offset = "0x473B1A0", VA = "0x473B1A0")]
	public static uint2 uint2(int2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000724")]
	[Address(RVA = "0x473B1B0", Offset = "0x473B1B0", VA = "0x473B1B0")]
	public static uint2 uint2(float v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000725")]
	[Address(RVA = "0x473B1D0", Offset = "0x473B1D0", VA = "0x473B1D0")]
	public static uint2 uint2(float2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000726")]
	[Address(RVA = "0x473B200", Offset = "0x473B200", VA = "0x473B200")]
	public static uint2 uint2(double v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000727")]
	[Address(RVA = "0x473B220", Offset = "0x473B220", VA = "0x473B220")]
	public static uint2 uint2(double2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000728")]
	[Address(RVA = "0x473B250", Offset = "0x473B250", VA = "0x473B250")]
	public static uint hash(uint2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000729")]
	[Address(RVA = "0x473B280", Offset = "0x473B280", VA = "0x473B280")]
	public static uint2 hashwide(uint2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072A")]
	[Address(RVA = "0x473B2C0", Offset = "0x473B2C0", VA = "0x473B2C0")]
	public static uint shuffle(uint2 left, uint2 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072B")]
	[Address(RVA = "0x473B2D0", Offset = "0x473B2D0", VA = "0x473B2D0")]
	public static uint2 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072C")]
	[Address(RVA = "0x473B310", Offset = "0x473B310", VA = "0x473B310")]
	public static uint3 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072D")]
	[Address(RVA = "0x473B380", Offset = "0x473B380", VA = "0x473B380")]
	public static uint4 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072E")]
	[Address(RVA = "0x473B410", Offset = "0x473B410", VA = "0x473B410")]
	internal static uint select_shuffle_component(uint2 a, uint2 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072F")]
	[Address(RVA = "0x473B4E0", Offset = "0x473B4E0", VA = "0x473B4E0")]
	public static uint2x2 uint2x2(uint2 c0, uint2 c1)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000730")]
	[Address(RVA = "0x473B4F0", Offset = "0x473B4F0", VA = "0x473B4F0")]
	public static uint2x2 uint2x2(uint m00, uint m01, uint m10, uint m11)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000731")]
	[Address(RVA = "0x473B510", Offset = "0x473B510", VA = "0x473B510")]
	public static uint2x2 uint2x2(uint v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000732")]
	[Address(RVA = "0x473B520", Offset = "0x473B520", VA = "0x473B520")]
	public static uint2x2 uint2x2(bool v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000733")]
	[Address(RVA = "0x473B540", Offset = "0x473B540", VA = "0x473B540")]
	public static uint2x2 uint2x2(bool2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000734")]
	[Address(RVA = "0x473B590", Offset = "0x473B590", VA = "0x473B590")]
	public static uint2x2 uint2x2(int v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000735")]
	[Address(RVA = "0x473B5A0", Offset = "0x473B5A0", VA = "0x473B5A0")]
	public static uint2x2 uint2x2(int2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000736")]
	[Address(RVA = "0x473B5B0", Offset = "0x473B5B0", VA = "0x473B5B0")]
	public static uint2x2 uint2x2(float v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000737")]
	[Address(RVA = "0x473B5D0", Offset = "0x473B5D0", VA = "0x473B5D0")]
	public static uint2x2 uint2x2(float2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000738")]
	[Address(RVA = "0x473B630", Offset = "0x473B630", VA = "0x473B630")]
	public static uint2x2 uint2x2(double v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000739")]
	[Address(RVA = "0x473B660", Offset = "0x473B660", VA = "0x473B660")]
	public static uint2x2 uint2x2(double2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073A")]
	[Address(RVA = "0x473B6D0", Offset = "0x473B6D0", VA = "0x473B6D0")]
	public static uint2x2 transpose(uint2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073B")]
	[Address(RVA = "0x473B6F0", Offset = "0x473B6F0", VA = "0x473B6F0")]
	public static uint hash(uint2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073C")]
	[Address(RVA = "0x473B740", Offset = "0x473B740", VA = "0x473B740")]
	public static uint2 hashwide(uint2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073D")]
	[Address(RVA = "0x473B7A0", Offset = "0x473B7A0", VA = "0x473B7A0")]
	public static uint2x3 uint2x3(uint2 c0, uint2 c1, uint2 c2)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073E")]
	[Address(RVA = "0x473B7B0", Offset = "0x473B7B0", VA = "0x473B7B0")]
	public static uint2x3 uint2x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073F")]
	[Address(RVA = "0x473B7E0", Offset = "0x473B7E0", VA = "0x473B7E0")]
	public static uint2x3 uint2x3(uint v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000740")]
	[Address(RVA = "0x473B800", Offset = "0x473B800", VA = "0x473B800")]
	public static uint2x3 uint2x3(bool v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000741")]
	[Address(RVA = "0x473B830", Offset = "0x473B830", VA = "0x473B830")]
	public static uint2x3 uint2x3(bool2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000742")]
	[Address(RVA = "0x473B8B0", Offset = "0x473B8B0", VA = "0x473B8B0")]
	public static uint2x3 uint2x3(int v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000743")]
	[Address(RVA = "0x473B8D0", Offset = "0x473B8D0", VA = "0x473B8D0")]
	public static uint2x3 uint2x3(int2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000744")]
	[Address(RVA = "0x473B8F0", Offset = "0x473B8F0", VA = "0x473B8F0")]
	public static uint2x3 uint2x3(float v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000745")]
	[Address(RVA = "0x473B920", Offset = "0x473B920", VA = "0x473B920")]
	public static uint2x3 uint2x3(float2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000746")]
	[Address(RVA = "0x473B9D0", Offset = "0x473B9D0", VA = "0x473B9D0")]
	public static uint2x3 uint2x3(double v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000747")]
	[Address(RVA = "0x473BA00", Offset = "0x473BA00", VA = "0x473BA00")]
	public static uint2x3 uint2x3(double2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000748")]
	[Address(RVA = "0x473BAB0", Offset = "0x473BAB0", VA = "0x473BAB0")]
	public static uint3x2 transpose(uint2x3 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000749")]
	[Address(RVA = "0x473BAE0", Offset = "0x473BAE0", VA = "0x473BAE0")]
	public static uint hash(uint2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074A")]
	[Address(RVA = "0x473BB70", Offset = "0x473BB70", VA = "0x473BB70")]
	public static uint2 hashwide(uint2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074B")]
	[Address(RVA = "0x473BC00", Offset = "0x473BC00", VA = "0x473BC00")]
	public static uint2x4 uint2x4(uint2 c0, uint2 c1, uint2 c2, uint2 c3)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074C")]
	[Address(RVA = "0x473BC20", Offset = "0x473BC20", VA = "0x473BC20")]
	public static uint2x4 uint2x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074D")]
	[Address(RVA = "0x473BC70", Offset = "0x473BC70", VA = "0x473BC70")]
	public static uint2x4 uint2x4(uint v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074E")]
	[Address(RVA = "0x473BC90", Offset = "0x473BC90", VA = "0x473BC90")]
	public static uint2x4 uint2x4(bool v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074F")]
	[Address(RVA = "0x473BCC0", Offset = "0x473BCC0", VA = "0x473BCC0")]
	public static uint2x4 uint2x4(bool2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000750")]
	[Address(RVA = "0x473BD40", Offset = "0x473BD40", VA = "0x473BD40")]
	public static uint2x4 uint2x4(int v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000751")]
	[Address(RVA = "0x473BD60", Offset = "0x473BD60", VA = "0x473BD60")]
	public static uint2x4 uint2x4(int2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000752")]
	[Address(RVA = "0x473BD80", Offset = "0x473BD80", VA = "0x473BD80")]
	public static uint2x4 uint2x4(float v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000753")]
	[Address(RVA = "0x473BDB0", Offset = "0x473BDB0", VA = "0x473BDB0")]
	public static uint2x4 uint2x4(float2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000754")]
	[Address(RVA = "0x473BE90", Offset = "0x473BE90", VA = "0x473BE90")]
	public static uint2x4 uint2x4(double v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000755")]
	[Address(RVA = "0x473BEC0", Offset = "0x473BEC0", VA = "0x473BEC0")]
	public static uint2x4 uint2x4(double2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000756")]
	[Address(RVA = "0x473BFB0", Offset = "0x473BFB0", VA = "0x473BFB0")]
	public static uint4x2 transpose(uint2x4 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000757")]
	[Address(RVA = "0x473C000", Offset = "0x473C000", VA = "0x473C000")]
	public static uint hash(uint2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000758")]
	[Address(RVA = "0x473C0B0", Offset = "0x473C0B0", VA = "0x473C0B0")]
	public static uint2 hashwide(uint2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000759")]
	[Address(RVA = "0x473C170", Offset = "0x473C170", VA = "0x473C170")]
	public static uint3 uint3(uint x, uint y, uint z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075A")]
	[Address(RVA = "0x473C180", Offset = "0x473C180", VA = "0x473C180")]
	public static uint3 uint3(uint x, uint2 yz)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075B")]
	[Address(RVA = "0x473C1A0", Offset = "0x473C1A0", VA = "0x473C1A0")]
	public static uint3 uint3(uint2 xy, uint z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075C")]
	[Address(RVA = "0x473C1B0", Offset = "0x473C1B0", VA = "0x473C1B0")]
	public static uint3 uint3(uint3 xyz)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075D")]
	[Address(RVA = "0x473C1C0", Offset = "0x473C1C0", VA = "0x473C1C0")]
	public static uint3 uint3(uint v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075E")]
	[Address(RVA = "0x473C1D0", Offset = "0x473C1D0", VA = "0x473C1D0")]
	public static uint3 uint3(bool v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075F")]
	[Address(RVA = "0x473C1E0", Offset = "0x473C1E0", VA = "0x473C1E0")]
	public static uint3 uint3(bool3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000760")]
	[Address(RVA = "0x473C210", Offset = "0x473C210", VA = "0x473C210")]
	public static uint3 uint3(int v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000761")]
	[Address(RVA = "0x473C220", Offset = "0x473C220", VA = "0x473C220")]
	public static uint3 uint3(int3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000762")]
	[Address(RVA = "0x473C230", Offset = "0x473C230", VA = "0x473C230")]
	public static uint3 uint3(float v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000763")]
	[Address(RVA = "0x473C250", Offset = "0x473C250", VA = "0x473C250")]
	public static uint3 uint3(float3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000764")]
	[Address(RVA = "0x473C290", Offset = "0x473C290", VA = "0x473C290")]
	public static uint3 uint3(double v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000765")]
	[Address(RVA = "0x473C2B0", Offset = "0x473C2B0", VA = "0x473C2B0")]
	public static uint3 uint3(double3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000766")]
	[Address(RVA = "0x473C300", Offset = "0x473C300", VA = "0x473C300")]
	public static uint hash(uint3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000767")]
	[Address(RVA = "0x473C340", Offset = "0x473C340", VA = "0x473C340")]
	public static uint3 hashwide(uint3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000768")]
	[Address(RVA = "0x473C380", Offset = "0x473C380", VA = "0x473C380")]
	public static uint shuffle(uint3 left, uint3 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000769")]
	[Address(RVA = "0x473C390", Offset = "0x473C390", VA = "0x473C390")]
	public static uint2 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076A")]
	[Address(RVA = "0x473C3F0", Offset = "0x473C3F0", VA = "0x473C3F0")]
	public static uint3 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076B")]
	[Address(RVA = "0x473C470", Offset = "0x473C470", VA = "0x473C470")]
	public static uint4 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076C")]
	[Address(RVA = "0x473C520", Offset = "0x473C520", VA = "0x473C520")]
	internal static uint select_shuffle_component(uint3 a, uint3 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076D")]
	[Address(RVA = "0x473C5F0", Offset = "0x473C5F0", VA = "0x473C5F0")]
	public static uint3x2 uint3x2(uint3 c0, uint3 c1)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076E")]
	[Address(RVA = "0x473C610", Offset = "0x473C610", VA = "0x473C610")]
	public static uint3x2 uint3x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076F")]
	[Address(RVA = "0x473C630", Offset = "0x473C630", VA = "0x473C630")]
	public static uint3x2 uint3x2(uint v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000770")]
	[Address(RVA = "0x473C650", Offset = "0x473C650", VA = "0x473C650")]
	public static uint3x2 uint3x2(bool v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000771")]
	[Address(RVA = "0x473C680", Offset = "0x473C680", VA = "0x473C680")]
	public static uint3x2 uint3x2(bool3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000772")]
	[Address(RVA = "0x473C6E0", Offset = "0x473C6E0", VA = "0x473C6E0")]
	public static uint3x2 uint3x2(int v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000773")]
	[Address(RVA = "0x473C700", Offset = "0x473C700", VA = "0x473C700")]
	public static uint3x2 uint3x2(int3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000774")]
	[Address(RVA = "0x473C730", Offset = "0x473C730", VA = "0x473C730")]
	public static uint3x2 uint3x2(float v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000775")]
	[Address(RVA = "0x473C760", Offset = "0x473C760", VA = "0x473C760")]
	public static uint3x2 uint3x2(float3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000776")]
	[Address(RVA = "0x473C800", Offset = "0x473C800", VA = "0x473C800")]
	public static uint3x2 uint3x2(double v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000777")]
	[Address(RVA = "0x473C830", Offset = "0x473C830", VA = "0x473C830")]
	public static uint3x2 uint3x2(double3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000778")]
	[Address(RVA = "0x473C8E0", Offset = "0x473C8E0", VA = "0x473C8E0")]
	public static uint2x3 transpose(uint3x2 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000779")]
	[Address(RVA = "0x473C910", Offset = "0x473C910", VA = "0x473C910")]
	public static uint hash(uint3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077A")]
	[Address(RVA = "0x473C980", Offset = "0x473C980", VA = "0x473C980")]
	public static uint3 hashwide(uint3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077B")]
	[Address(RVA = "0x473CA10", Offset = "0x473CA10", VA = "0x473CA10")]
	public static uint3x3 uint3x3(uint3 c0, uint3 c1, uint3 c2)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077C")]
	[Address(RVA = "0x473CA40", Offset = "0x473CA40", VA = "0x473CA40")]
	public static uint3x3 uint3x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077D")]
	[Address(RVA = "0x473CA80", Offset = "0x473CA80", VA = "0x473CA80")]
	public static uint3x3 uint3x3(uint v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077E")]
	[Address(RVA = "0x473CAB0", Offset = "0x473CAB0", VA = "0x473CAB0")]
	public static uint3x3 uint3x3(bool v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077F")]
	[Address(RVA = "0x473CAE0", Offset = "0x473CAE0", VA = "0x473CAE0")]
	public static uint3x3 uint3x3(bool3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000780")]
	[Address(RVA = "0x473CB70", Offset = "0x473CB70", VA = "0x473CB70")]
	public static uint3x3 uint3x3(int v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000781")]
	[Address(RVA = "0x473CBA0", Offset = "0x473CBA0", VA = "0x473CBA0")]
	public static uint3x3 uint3x3(int3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000782")]
	[Address(RVA = "0x473CBE0", Offset = "0x473CBE0", VA = "0x473CBE0")]
	public static uint3x3 uint3x3(float v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000783")]
	[Address(RVA = "0x473CC20", Offset = "0x473CC20", VA = "0x473CC20")]
	public static uint3x3 uint3x3(float3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000784")]
	[Address(RVA = "0x473CD10", Offset = "0x473CD10", VA = "0x473CD10")]
	public static uint3x3 uint3x3(double v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000785")]
	[Address(RVA = "0x473CD50", Offset = "0x473CD50", VA = "0x473CD50")]
	public static uint3x3 uint3x3(double3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000786")]
	[Address(RVA = "0x473CE50", Offset = "0x473CE50", VA = "0x473CE50")]
	public static uint3x3 transpose(uint3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000787")]
	[Address(RVA = "0x473CEA0", Offset = "0x473CEA0", VA = "0x473CEA0")]
	public static uint hash(uint3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000788")]
	[Address(RVA = "0x473CF50", Offset = "0x473CF50", VA = "0x473CF50")]
	public static uint3 hashwide(uint3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000789")]
	[Address(RVA = "0x473D020", Offset = "0x473D020", VA = "0x473D020")]
	public static uint3x4 uint3x4(uint3 c0, uint3 c1, uint3 c2, uint3 c3)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078A")]
	[Address(RVA = "0x473D060", Offset = "0x473D060", VA = "0x473D060")]
	public static uint3x4 uint3x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078B")]
	[Address(RVA = "0x473D0C0", Offset = "0x473D0C0", VA = "0x473D0C0")]
	public static uint3x4 uint3x4(uint v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078C")]
	[Address(RVA = "0x473D0F0", Offset = "0x473D0F0", VA = "0x473D0F0")]
	public static uint3x4 uint3x4(bool v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078D")]
	[Address(RVA = "0x473D130", Offset = "0x473D130", VA = "0x473D130")]
	public static uint3x4 uint3x4(bool3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078E")]
	[Address(RVA = "0x473D1E0", Offset = "0x473D1E0", VA = "0x473D1E0")]
	public static uint3x4 uint3x4(int v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078F")]
	[Address(RVA = "0x473D210", Offset = "0x473D210", VA = "0x473D210")]
	public static uint3x4 uint3x4(int3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000790")]
	[Address(RVA = "0x473D260", Offset = "0x473D260", VA = "0x473D260")]
	public static uint3x4 uint3x4(float v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000791")]
	[Address(RVA = "0x473D2A0", Offset = "0x473D2A0", VA = "0x473D2A0")]
	public static uint3x4 uint3x4(float3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000792")]
	[Address(RVA = "0x473D3F0", Offset = "0x473D3F0", VA = "0x473D3F0")]
	public static uint3x4 uint3x4(double v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000793")]
	[Address(RVA = "0x473D430", Offset = "0x473D430", VA = "0x473D430")]
	public static uint3x4 uint3x4(double3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000794")]
	[Address(RVA = "0x473D590", Offset = "0x473D590", VA = "0x473D590")]
	public static uint4x3 transpose(uint3x4 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000795")]
	[Address(RVA = "0x473D600", Offset = "0x473D600", VA = "0x473D600")]
	public static uint hash(uint3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000796")]
	[Address(RVA = "0x473D6F0", Offset = "0x473D6F0", VA = "0x473D6F0")]
	public static uint3 hashwide(uint3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000797")]
	[Address(RVA = "0x473D7F0", Offset = "0x473D7F0", VA = "0x473D7F0")]
	public static uint4 uint4(uint x, uint y, uint z, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000798")]
	[Address(RVA = "0x473D810", Offset = "0x473D810", VA = "0x473D810")]
	public static uint4 uint4(uint x, uint y, uint2 zw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000799")]
	[Address(RVA = "0x473D820", Offset = "0x473D820", VA = "0x473D820")]
	public static uint4 uint4(uint x, uint2 yz, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079A")]
	[Address(RVA = "0x473D830", Offset = "0x473D830", VA = "0x473D830")]
	public static uint4 uint4(uint x, uint3 yzw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079B")]
	[Address(RVA = "0x473D840", Offset = "0x473D840", VA = "0x473D840")]
	public static uint4 uint4(uint2 xy, uint z, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079C")]
	[Address(RVA = "0x473D850", Offset = "0x473D850", VA = "0x473D850")]
	public static uint4 uint4(uint2 xy, uint2 zw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079D")]
	[Address(RVA = "0x473D860", Offset = "0x473D860", VA = "0x473D860")]
	public static uint4 uint4(uint3 xyz, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079E")]
	[Address(RVA = "0x473D870", Offset = "0x473D870", VA = "0x473D870")]
	public static uint4 uint4(uint4 xyzw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079F")]
	[Address(RVA = "0x473D880", Offset = "0x473D880", VA = "0x473D880")]
	public static uint4 uint4(uint v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x473D890", Offset = "0x473D890", VA = "0x473D890")]
	public static uint4 uint4(bool v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x473D8A0", Offset = "0x473D8A0", VA = "0x473D8A0")]
	public static uint4 uint4(bool4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x473D8D0", Offset = "0x473D8D0", VA = "0x473D8D0")]
	public static uint4 uint4(int v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x473D8E0", Offset = "0x473D8E0", VA = "0x473D8E0")]
	public static uint4 uint4(int4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x473D8F0", Offset = "0x473D8F0", VA = "0x473D8F0")]
	public static uint4 uint4(float v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x473D910", Offset = "0x473D910", VA = "0x473D910")]
	public static uint4 uint4(float4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x473D970", Offset = "0x473D970", VA = "0x473D970")]
	public static uint4 uint4(double v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x473D9A0", Offset = "0x473D9A0", VA = "0x473D9A0")]
	public static uint4 uint4(double4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x473DA10", Offset = "0x473DA10", VA = "0x473DA10")]
	public static uint hash(uint4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x473DA60", Offset = "0x473DA60", VA = "0x473DA60")]
	public static uint4 hashwide(uint4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x473DAC0", Offset = "0x473DAC0", VA = "0x473DAC0")]
	public static uint shuffle(uint4 left, uint4 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x473DAD0", Offset = "0x473DAD0", VA = "0x473DAD0")]
	public static uint2 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x473DB30", Offset = "0x473DB30", VA = "0x473DB30")]
	public static uint3 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x473DBB0", Offset = "0x473DBB0", VA = "0x473DBB0")]
	public static uint4 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x473DC60", Offset = "0x473DC60", VA = "0x473DC60")]
	internal static uint select_shuffle_component(uint4 a, uint4 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x473DD50", Offset = "0x473DD50", VA = "0x473DD50")]
	public static uint4x2 uint4x2(uint4 c0, uint4 c1)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x473DD70", Offset = "0x473DD70", VA = "0x473DD70")]
	public static uint4x2 uint4x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21, uint m30, uint m31)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x473DDA0", Offset = "0x473DDA0", VA = "0x473DDA0")]
	public static uint4x2 uint4x2(uint v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x473DDC0", Offset = "0x473DDC0", VA = "0x473DDC0")]
	public static uint4x2 uint4x2(bool v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x473DDF0", Offset = "0x473DDF0", VA = "0x473DDF0")]
	public static uint4x2 uint4x2(bool4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x473DE70", Offset = "0x473DE70", VA = "0x473DE70")]
	public static uint4x2 uint4x2(int v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x473DE90", Offset = "0x473DE90", VA = "0x473DE90")]
	public static uint4x2 uint4x2(int4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x473DEB0", Offset = "0x473DEB0", VA = "0x473DEB0")]
	public static uint4x2 uint4x2(float v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x473DEE0", Offset = "0x473DEE0", VA = "0x473DEE0")]
	public static uint4x2 uint4x2(float4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x473DFC0", Offset = "0x473DFC0", VA = "0x473DFC0")]
	public static uint4x2 uint4x2(double v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x473DFF0", Offset = "0x473DFF0", VA = "0x473DFF0")]
	public static uint4x2 uint4x2(double4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x473E0E0", Offset = "0x473E0E0", VA = "0x473E0E0")]
	public static uint2x4 transpose(uint4x2 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x473E110", Offset = "0x473E110", VA = "0x473E110")]
	public static uint hash(uint4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x473E1C0", Offset = "0x473E1C0", VA = "0x473E1C0")]
	public static uint4 hashwide(uint4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x473E280", Offset = "0x473E280", VA = "0x473E280")]
	public static uint4x3 uint4x3(uint4 c0, uint4 c1, uint4 c2)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x473E2A0", Offset = "0x473E2A0", VA = "0x473E2A0")]
	public static uint4x3 uint4x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22, uint m30, uint m31, uint m32)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x473E300", Offset = "0x473E300", VA = "0x473E300")]
	public static uint4x3 uint4x3(uint v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x473E330", Offset = "0x473E330", VA = "0x473E330")]
	public static uint4x3 uint4x3(bool v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x473E360", Offset = "0x473E360", VA = "0x473E360")]
	public static uint4x3 uint4x3(bool4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x473E410", Offset = "0x473E410", VA = "0x473E410")]
	public static uint4x3 uint4x3(int v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x473E440", Offset = "0x473E440", VA = "0x473E440")]
	public static uint4x3 uint4x3(int4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x473E460", Offset = "0x473E460", VA = "0x473E460")]
	public static uint4x3 uint4x3(float v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x473E4A0", Offset = "0x473E4A0", VA = "0x473E4A0")]
	public static uint4x3 uint4x3(float4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x473E5F0", Offset = "0x473E5F0", VA = "0x473E5F0")]
	public static uint4x3 uint4x3(double v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x473E630", Offset = "0x473E630", VA = "0x473E630")]
	public static uint4x3 uint4x3(double4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x473E790", Offset = "0x473E790", VA = "0x473E790")]
	public static uint3x4 transpose(uint4x3 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x473E800", Offset = "0x473E800", VA = "0x473E800")]
	public static uint hash(uint4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x473E920", Offset = "0x473E920", VA = "0x473E920")]
	public static uint4 hashwide(uint4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x473EA40", Offset = "0x473EA40", VA = "0x473EA40")]
	public static uint4x4 uint4x4(uint4 c0, uint4 c1, uint4 c2, uint4 c3)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x473EA70", Offset = "0x473EA70", VA = "0x473EA70")]
	public static uint4x4 uint4x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23, uint m30, uint m31, uint m32, uint m33)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x473EAE0", Offset = "0x473EAE0", VA = "0x473EAE0")]
	public static uint4x4 uint4x4(uint v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x473EB10", Offset = "0x473EB10", VA = "0x473EB10")]
	public static uint4x4 uint4x4(bool v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x473EB50", Offset = "0x473EB50", VA = "0x473EB50")]
	public static uint4x4 uint4x4(bool4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x473EC30", Offset = "0x473EC30", VA = "0x473EC30")]
	public static uint4x4 uint4x4(int v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x473EC60", Offset = "0x473EC60", VA = "0x473EC60")]
	public static uint4x4 uint4x4(int4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x473EC90", Offset = "0x473EC90", VA = "0x473EC90")]
	public static uint4x4 uint4x4(float v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x473ECD0", Offset = "0x473ECD0", VA = "0x473ECD0")]
	public static uint4x4 uint4x4(float4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x473EE90", Offset = "0x473EE90", VA = "0x473EE90")]
	public static uint4x4 uint4x4(double v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x473EED0", Offset = "0x473EED0", VA = "0x473EED0")]
	public static uint4x4 uint4x4(double4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x473F0B0", Offset = "0x473F0B0", VA = "0x473F0B0")]
	public static uint4x4 transpose(uint4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x473F130", Offset = "0x473F130", VA = "0x473F130")]
	public static uint hash(uint4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x473F2A0", Offset = "0x473F2A0", VA = "0x473F2A0")]
	public static uint4 hashwide(uint4x4 v)
	{
		return default(uint4);
	}
}
