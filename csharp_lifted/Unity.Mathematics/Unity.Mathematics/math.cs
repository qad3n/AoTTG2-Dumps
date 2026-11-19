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
		[Token(Token = "0x4000026")]
		XYZ = 0,
		[Token(Token = "0x4000027")]
		XZY = 1,
		[Token(Token = "0x4000028")]
		YXZ = 2,
		[Token(Token = "0x4000029")]
		YZX = 3,
		[Token(Token = "0x400002A")]
		ZXY = 4,
		[Token(Token = "0x400002B")]
		ZYX = 5,
		[Token(Token = "0x400002C")]
		Default = ZXY
	}

	[Token(Token = "0x2000009")]
	public enum ShuffleComponent : byte
	{
		[Token(Token = "0x400002E")]
		LeftX,
		[Token(Token = "0x400002F")]
		LeftY,
		[Token(Token = "0x4000030")]
		LeftZ,
		[Token(Token = "0x4000031")]
		LeftW,
		[Token(Token = "0x4000032")]
		RightX,
		[Token(Token = "0x4000033")]
		RightY,
		[Token(Token = "0x4000034")]
		RightZ,
		[Token(Token = "0x4000035")]
		RightW
	}

	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x200000A")]
	internal struct LongDoubleUnion
	{
		[Token(Token = "0x4000036")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public long longValue;

		[Token(Token = "0x4000037")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public double doubleValue;
	}

	[Token(Token = "0x4000005")]
	public const double E_DBL = Math.E;

	[Token(Token = "0x4000006")]
	public const double LOG2E_DBL = 1.4426950408889634;

	[Token(Token = "0x4000007")]
	public const double LOG10E_DBL = 0.4342944819032518;

	[Token(Token = "0x4000008")]
	public const double LN2_DBL = 0.6931471805599453;

	[Token(Token = "0x4000009")]
	public const double LN10_DBL = 2.302585092994046;

	[Token(Token = "0x400000A")]
	public const double PI_DBL = Math.PI;

	[Token(Token = "0x400000B")]
	public const double PI2_DBL = Math.PI * 2.0;

	[Token(Token = "0x400000C")]
	public const double PIHALF_DBL = Math.PI / 2.0;

	[Token(Token = "0x400000D")]
	public const double TAU_DBL = Math.PI * 2.0;

	[Token(Token = "0x400000E")]
	public const double TODEGREES_DBL = 180.0 / Math.PI;

	[Token(Token = "0x400000F")]
	public const double TORADIANS_DBL = Math.PI / 180.0;

	[Token(Token = "0x4000010")]
	public const double SQRT2_DBL = 1.4142135623730951;

	[Token(Token = "0x4000011")]
	public const double EPSILON_DBL = 2.220446049250313E-16;

	[Token(Token = "0x4000012")]
	public const double INFINITY_DBL = 1.0 / 0.0;

	[Token(Token = "0x4000013")]
	public const double NAN_DBL = 0.0 / 0.0;

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
	public const float PI2 = (float)Math.PI * 2f;

	[Token(Token = "0x400001D")]
	public const float PIHALF = (float)Math.PI / 2f;

	[Token(Token = "0x400001E")]
	public const float TAU = (float)Math.PI * 2f;

	[Token(Token = "0x400001F")]
	public const float TODEGREES = 57.29578f;

	[Token(Token = "0x4000020")]
	public const float TORADIANS = (float)Math.PI / 180f;

	[Token(Token = "0x4000021")]
	public const float SQRT2 = 1.4142135f;

	[Token(Token = "0x4000022")]
	public const float EPSILON = 1.1920929E-07f;

	[Token(Token = "0x4000023")]
	public const float INFINITY = 1f / 0f;

	[Token(Token = "0x4000024")]
	public const float NAN = 0f / 0f;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x638F440", Offset = "0x638E440", VA = "0x638F440")]
	public static AffineTransform AffineTransform(float3 translation, quaternion rotation)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x638F4C0", Offset = "0x638E4C0", VA = "0x638F4C0")]
	public static AffineTransform AffineTransform(float3 translation, quaternion rotation, float3 scale)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x638F5A0", Offset = "0x638E5A0", VA = "0x638F5A0")]
	public static AffineTransform AffineTransform(float3 translation, float3x3 rotationScale)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x638F5D0", Offset = "0x638E5D0", VA = "0x638F5D0")]
	public static AffineTransform AffineTransform(float3x3 rotationScale)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x638F650", Offset = "0x638E650", VA = "0x638F650")]
	public static AffineTransform AffineTransform(float4x4 m)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x638F6B0", Offset = "0x638E6B0", VA = "0x638F6B0")]
	public static AffineTransform AffineTransform(float3x4 m)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x638F710", Offset = "0x638E710", VA = "0x638F710")]
	public static AffineTransform AffineTransform(RigidTransform rigid)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x638F780", Offset = "0x638E780", VA = "0x638F780")]
	public static float4x4 float4x4(AffineTransform transform)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x638F7E0", Offset = "0x638E7E0", VA = "0x638F7E0")]
	public static float3x4 float3x4(AffineTransform transform)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x638F840", Offset = "0x638E840", VA = "0x638F840")]
	public static AffineTransform mul(AffineTransform a, AffineTransform b)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x638F9E0", Offset = "0x638E9E0", VA = "0x638F9E0")]
	public static AffineTransform mul(float3x3 a, AffineTransform b)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x638FB70", Offset = "0x638EB70", VA = "0x638FB70")]
	public static AffineTransform mul(AffineTransform a, float3x3 b)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x638FCB0", Offset = "0x638ECB0", VA = "0x638FCB0")]
	public static float4 mul(AffineTransform a, float4 pos)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x638FD60", Offset = "0x638ED60", VA = "0x638FD60")]
	public static float3 rotate(AffineTransform a, float3 dir)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x638FDC0", Offset = "0x638EDC0", VA = "0x638FDC0")]
	public static float3 transform(AffineTransform a, float3 pos)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x638FE30", Offset = "0x638EE30", VA = "0x638FE30")]
	public static AffineTransform inverse(AffineTransform a)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x638FF10", Offset = "0x638EF10", VA = "0x638FF10")]
	public static void decompose(AffineTransform a, out float3 translation, out quaternion rotation, out float3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x6390070", Offset = "0x638F070", VA = "0x6390070")]
	public static uint hash(AffineTransform a)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x6390130", Offset = "0x638F130", VA = "0x6390130")]
	public static uint4 hashwide(AffineTransform a)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x6390270", Offset = "0x638F270", VA = "0x6390270")]
	public static bool2 bool2(bool x, bool y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x6390280", Offset = "0x638F280", VA = "0x6390280")]
	public static bool2 bool2(bool2 xy)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x6390290", Offset = "0x638F290", VA = "0x6390290")]
	public static bool2 bool2(bool v)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x63902A0", Offset = "0x638F2A0", VA = "0x63902A0")]
	public static uint hash(bool2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x63902D0", Offset = "0x638F2D0", VA = "0x63902D0")]
	public static uint2 hashwide(bool2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x6390310", Offset = "0x638F310", VA = "0x6390310")]
	public static bool shuffle(bool2 left, bool2 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x6390320", Offset = "0x638F320", VA = "0x6390320")]
	public static bool2 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x6390360", Offset = "0x638F360", VA = "0x6390360")]
	public static bool3 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x63903C0", Offset = "0x638F3C0", VA = "0x63903C0")]
	public static bool4 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x6390440", Offset = "0x638F440", VA = "0x6390440")]
	internal static bool select_shuffle_component(bool2 a, bool2 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x6390510", Offset = "0x638F510", VA = "0x6390510")]
	public static bool2x2 bool2x2(bool2 c0, bool2 c1)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x6390520", Offset = "0x638F520", VA = "0x6390520")]
	public static bool2x2 bool2x2(bool m00, bool m01, bool m10, bool m11)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x6390540", Offset = "0x638F540", VA = "0x6390540")]
	public static bool2x2 bool2x2(bool v)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x6390550", Offset = "0x638F550", VA = "0x6390550")]
	public static bool2x2 transpose(bool2x2 v)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x6390570", Offset = "0x638F570", VA = "0x6390570")]
	public static uint hash(bool2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x63905F0", Offset = "0x638F5F0", VA = "0x63905F0")]
	public static uint2 hashwide(bool2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x6390670", Offset = "0x638F670", VA = "0x6390670")]
	public static bool2x3 bool2x3(bool2 c0, bool2 c1, bool2 c2)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x6390690", Offset = "0x638F690", VA = "0x6390690")]
	public static bool2x3 bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x63906C0", Offset = "0x638F6C0", VA = "0x63906C0")]
	public static bool2x3 bool2x3(bool v)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x63906E0", Offset = "0x638F6E0", VA = "0x63906E0")]
	public static bool3x2 transpose(bool2x3 v)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x6390740", Offset = "0x638F740", VA = "0x6390740")]
	public static uint hash(bool2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x6390810", Offset = "0x638F810", VA = "0x6390810")]
	public static uint2 hashwide(bool2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x63908F0", Offset = "0x638F8F0", VA = "0x63908F0")]
	public static bool2x4 bool2x4(bool2 c0, bool2 c1, bool2 c2, bool2 c3)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x6390910", Offset = "0x638F910", VA = "0x6390910")]
	public static bool2x4 bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x6390960", Offset = "0x638F960", VA = "0x6390960")]
	public static bool2x4 bool2x4(bool v)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x6390980", Offset = "0x638F980", VA = "0x6390980")]
	public static bool4x2 transpose(bool2x4 v)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x63909E0", Offset = "0x638F9E0", VA = "0x63909E0")]
	public static uint hash(bool2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x6390B00", Offset = "0x638FB00", VA = "0x6390B00")]
	public static uint2 hashwide(bool2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x6390C10", Offset = "0x638FC10", VA = "0x6390C10")]
	public static bool3 bool3(bool x, bool y, bool z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x6390C20", Offset = "0x638FC20", VA = "0x6390C20")]
	public static bool3 bool3(bool x, bool2 yz)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x6390C40", Offset = "0x638FC40", VA = "0x6390C40")]
	public static bool3 bool3(bool2 xy, bool z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x6390C60", Offset = "0x638FC60", VA = "0x6390C60")]
	public static bool3 bool3(bool3 xyz)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006C")]
	[Address(RVA = "0x6390C70", Offset = "0x638FC70", VA = "0x6390C70")]
	public static bool3 bool3(bool v)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x6390C80", Offset = "0x638FC80", VA = "0x6390C80")]
	public static uint hash(bool3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006E")]
	[Address(RVA = "0x6390CC0", Offset = "0x638FCC0", VA = "0x6390CC0")]
	public static uint3 hashwide(bool3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x6390D10", Offset = "0x638FD10", VA = "0x6390D10")]
	public static bool shuffle(bool3 left, bool3 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x6390D20", Offset = "0x638FD20", VA = "0x6390D20")]
	public static bool2 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x6390D60", Offset = "0x638FD60", VA = "0x6390D60")]
	public static bool3 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x6390DC0", Offset = "0x638FDC0", VA = "0x6390DC0")]
	public static bool4 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x6390E40", Offset = "0x638FE40", VA = "0x6390E40")]
	internal static bool select_shuffle_component(bool3 a, bool3 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x6390F20", Offset = "0x638FF20", VA = "0x6390F20")]
	public static bool3x2 bool3x2(bool3 c0, bool3 c1)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x6390F30", Offset = "0x638FF30", VA = "0x6390F30")]
	public static bool3x2 bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x6390F60", Offset = "0x638FF60", VA = "0x6390F60")]
	public static bool3x2 bool3x2(bool v)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x6390F80", Offset = "0x638FF80", VA = "0x6390F80")]
	public static bool2x3 transpose(bool3x2 v)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x6390FD0", Offset = "0x638FFD0", VA = "0x6390FD0")]
	public static uint hash(bool3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x6391090", Offset = "0x6390090", VA = "0x6391090")]
	public static uint3 hashwide(bool3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x6391150", Offset = "0x6390150", VA = "0x6391150")]
	public static bool3x3 bool3x3(bool3 c0, bool3 c1, bool3 c2)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x6391180", Offset = "0x6390180", VA = "0x6391180")]
	public static bool3x3 bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x63911D0", Offset = "0x63901D0", VA = "0x63911D0")]
	public static bool3x3 bool3x3(bool v)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x6391200", Offset = "0x6390200", VA = "0x6391200")]
	public static bool3x3 transpose(bool3x3 v)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x6391280", Offset = "0x6390280", VA = "0x6391280")]
	public static uint hash(bool3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x63913A0", Offset = "0x63903A0", VA = "0x63913A0")]
	public static uint3 hashwide(bool3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x63914D0", Offset = "0x63904D0", VA = "0x63914D0")]
	public static bool3x4 bool3x4(bool3 c0, bool3 c1, bool3 c2, bool3 c3)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x6391510", Offset = "0x6390510", VA = "0x6391510")]
	public static bool3x4 bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x6391590", Offset = "0x6390590", VA = "0x6391590")]
	public static bool3x4 bool3x4(bool v)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x63915D0", Offset = "0x63905D0", VA = "0x63915D0")]
	public static bool4x3 transpose(bool3x4 v)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x6391670", Offset = "0x6390670", VA = "0x6391670")]
	public static uint hash(bool3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x6391800", Offset = "0x6390800", VA = "0x6391800")]
	public static uint3 hashwide(bool3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x6391980", Offset = "0x6390980", VA = "0x6391980")]
	public static bool4 bool4(bool x, bool y, bool z, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x63919A0", Offset = "0x63909A0", VA = "0x63919A0")]
	public static bool4 bool4(bool x, bool y, bool2 zw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x63919C0", Offset = "0x63909C0", VA = "0x63919C0")]
	public static bool4 bool4(bool x, bool2 yz, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x63919E0", Offset = "0x63909E0", VA = "0x63919E0")]
	public static bool4 bool4(bool x, bool3 yzw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x63919F0", Offset = "0x63909F0", VA = "0x63919F0")]
	public static bool4 bool4(bool2 xy, bool z, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x6391A10", Offset = "0x6390A10", VA = "0x6391A10")]
	public static bool4 bool4(bool2 xy, bool2 zw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x6391A40", Offset = "0x6390A40", VA = "0x6391A40")]
	public static bool4 bool4(bool3 xyz, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x6391A60", Offset = "0x6390A60", VA = "0x6391A60")]
	public static bool4 bool4(bool4 xyzw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x6391A70", Offset = "0x6390A70", VA = "0x6391A70")]
	public static bool4 bool4(bool v)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x6391A80", Offset = "0x6390A80", VA = "0x6391A80")]
	public static uint hash(bool4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x6391AD0", Offset = "0x6390AD0", VA = "0x6391AD0")]
	public static uint4 hashwide(bool4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x6391B60", Offset = "0x6390B60", VA = "0x6391B60")]
	public static bool shuffle(bool4 left, bool4 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x6391B70", Offset = "0x6390B70", VA = "0x6391B70")]
	public static bool2 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x6391BB0", Offset = "0x6390BB0", VA = "0x6391BB0")]
	public static bool3 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x6391C10", Offset = "0x6390C10", VA = "0x6391C10")]
	public static bool4 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x6391C90", Offset = "0x6390C90", VA = "0x6391C90")]
	internal static bool select_shuffle_component(bool4 a, bool4 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x6391D80", Offset = "0x6390D80", VA = "0x6391D80")]
	public static bool4x2 bool4x2(bool4 c0, bool4 c1)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x6391D90", Offset = "0x6390D90", VA = "0x6391D90")]
	public static bool4x2 bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x6391DD0", Offset = "0x6390DD0", VA = "0x6391DD0")]
	public static bool4x2 bool4x2(bool v)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x6391DF0", Offset = "0x6390DF0", VA = "0x6391DF0")]
	public static bool2x4 transpose(bool4x2 v)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x6391E70", Offset = "0x6390E70", VA = "0x6391E70")]
	public static uint hash(bool4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x6391F70", Offset = "0x6390F70", VA = "0x6391F70")]
	public static uint4 hashwide(bool4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x6392090", Offset = "0x6391090", VA = "0x6392090")]
	public static bool4x3 bool4x3(bool4 c0, bool4 c1, bool4 c2)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x63920A0", Offset = "0x63910A0", VA = "0x63920A0")]
	public static bool4x3 bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x6392110", Offset = "0x6391110", VA = "0x6392110")]
	public static bool4x3 bool4x3(bool v)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x6392130", Offset = "0x6391130", VA = "0x6392130")]
	public static bool3x4 transpose(bool4x3 v)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x63921E0", Offset = "0x63911E0", VA = "0x63921E0")]
	public static uint hash(bool4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x6392370", Offset = "0x6391370", VA = "0x6392370")]
	public static uint4 hashwide(bool4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x6392500", Offset = "0x6391500", VA = "0x6392500")]
	public static bool4x4 bool4x4(bool4 c0, bool4 c1, bool4 c2, bool4 c3)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x6392520", Offset = "0x6391520", VA = "0x6392520")]
	public static bool4x4 bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31, bool m32, bool m33)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x63925C0", Offset = "0x63915C0", VA = "0x63925C0")]
	public static bool4x4 bool4x4(bool v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x63925E0", Offset = "0x63915E0", VA = "0x63925E0")]
	public static bool4x4 transpose(bool4x4 v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x63926C0", Offset = "0x63916C0", VA = "0x63926C0")]
	public static uint hash(bool4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x63928E0", Offset = "0x63918E0", VA = "0x63928E0")]
	public static uint4 hashwide(bool4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x6392B00", Offset = "0x6391B00", VA = "0x6392B00")]
	public static double2 double2(double x, double y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x6392B10", Offset = "0x6391B10", VA = "0x6392B10")]
	public static double2 double2(double2 xy)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x6392B20", Offset = "0x6391B20", VA = "0x6392B20")]
	public static double2 double2(double v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x6392B30", Offset = "0x6391B30", VA = "0x6392B30")]
	public static double2 double2(bool v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x6392B50", Offset = "0x6391B50", VA = "0x6392B50")]
	public static double2 double2(bool2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x6392B80", Offset = "0x6391B80", VA = "0x6392B80")]
	public static double2 double2(int v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x6392B90", Offset = "0x6391B90", VA = "0x6392B90")]
	public static double2 double2(int2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x6392BA0", Offset = "0x6391BA0", VA = "0x6392BA0")]
	public static double2 double2(uint v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x6392BB0", Offset = "0x6391BB0", VA = "0x6392BB0")]
	public static double2 double2(uint2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x6392BD0", Offset = "0x6391BD0", VA = "0x6392BD0")]
	public static double2 double2(half v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x6392C30", Offset = "0x6391C30", VA = "0x6392C30")]
	public static double2 double2(half2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x6392CC0", Offset = "0x6391CC0", VA = "0x6392CC0")]
	public static double2 double2(float v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x6392CD0", Offset = "0x6391CD0", VA = "0x6392CD0")]
	public static double2 double2(float2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x6392CE0", Offset = "0x6391CE0", VA = "0x6392CE0")]
	public static uint hash(double2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x6392D30", Offset = "0x6391D30", VA = "0x6392D30")]
	public static uint2 hashwide(double2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x6392D80", Offset = "0x6391D80", VA = "0x6392D80")]
	public static double shuffle(double2 left, double2 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x6392D90", Offset = "0x6391D90", VA = "0x6392D90")]
	public static double2 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x6392DF0", Offset = "0x6391DF0", VA = "0x6392DF0")]
	public static double3 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x6392EA0", Offset = "0x6391EA0", VA = "0x6392EA0")]
	public static double4 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x6392F80", Offset = "0x6391F80", VA = "0x6392F80")]
	internal static double select_shuffle_component(double2 a, double2 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x6393040", Offset = "0x6392040", VA = "0x6393040")]
	public static double2x2 double2x2(double2 c0, double2 c1)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x6393060", Offset = "0x6392060", VA = "0x6393060")]
	public static double2x2 double2x2(double m00, double m01, double m10, double m11)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x6393080", Offset = "0x6392080", VA = "0x6393080")]
	public static double2x2 double2x2(double v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x63930A0", Offset = "0x63920A0", VA = "0x63930A0")]
	public static double2x2 double2x2(bool v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x63930D0", Offset = "0x63920D0", VA = "0x63930D0")]
	public static double2x2 double2x2(bool2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x6393140", Offset = "0x6392140", VA = "0x6393140")]
	public static double2x2 double2x2(int v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x6393160", Offset = "0x6392160", VA = "0x6393160")]
	public static double2x2 double2x2(int2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x63931A0", Offset = "0x63921A0", VA = "0x63931A0")]
	public static double2x2 double2x2(uint v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x63931C0", Offset = "0x63921C0", VA = "0x63931C0")]
	public static double2x2 double2x2(uint2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x6393200", Offset = "0x6392200", VA = "0x6393200")]
	public static double2x2 double2x2(float v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x6393220", Offset = "0x6392220", VA = "0x6393220")]
	public static double2x2 double2x2(float2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x6393240", Offset = "0x6392240", VA = "0x6393240")]
	public static double2x2 transpose(double2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x6393270", Offset = "0x6392270", VA = "0x6393270")]
	public static double2x2 inverse(double2x2 m)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x63932E0", Offset = "0x63922E0", VA = "0x63932E0")]
	public static double determinant(double2x2 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x6393300", Offset = "0x6392300", VA = "0x6393300")]
	public static uint hash(double2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x6393380", Offset = "0x6392380", VA = "0x6393380")]
	public static uint2 hashwide(double2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x6393410", Offset = "0x6392410", VA = "0x6393410")]
	public static double2x3 double2x3(double2 c0, double2 c1, double2 c2)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x6393440", Offset = "0x6392440", VA = "0x6393440")]
	public static double2x3 double2x3(double m00, double m01, double m02, double m10, double m11, double m12)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x6393470", Offset = "0x6392470", VA = "0x6393470")]
	public static double2x3 double2x3(double v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x63934A0", Offset = "0x63924A0", VA = "0x63934A0")]
	public static double2x3 double2x3(bool v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x63934E0", Offset = "0x63924E0", VA = "0x63934E0")]
	public static double2x3 double2x3(bool2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x6393580", Offset = "0x6392580", VA = "0x6393580")]
	public static double2x3 double2x3(int v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x63935B0", Offset = "0x63925B0", VA = "0x63935B0")]
	public static double2x3 double2x3(int2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x6393610", Offset = "0x6392610", VA = "0x6393610")]
	public static double2x3 double2x3(uint v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x6393640", Offset = "0x6392640", VA = "0x6393640")]
	public static double2x3 double2x3(uint2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x63936B0", Offset = "0x63926B0", VA = "0x63936B0")]
	public static double2x3 double2x3(float v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x63936E0", Offset = "0x63926E0", VA = "0x63936E0")]
	public static double2x3 double2x3(float2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x6393700", Offset = "0x6392700", VA = "0x6393700")]
	public static double3x2 transpose(double2x3 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x6393750", Offset = "0x6392750", VA = "0x6393750")]
	public static uint hash(double2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x6393800", Offset = "0x6392800", VA = "0x6393800")]
	public static uint2 hashwide(double2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x63938C0", Offset = "0x63928C0", VA = "0x63938C0")]
	public static double2x4 double2x4(double2 c0, double2 c1, double2 c2, double2 c3)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x63938F0", Offset = "0x63928F0", VA = "0x63938F0")]
	public static double2x4 double2x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x6393920", Offset = "0x6392920", VA = "0x6393920")]
	public static double2x4 double2x4(double v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x6393950", Offset = "0x6392950", VA = "0x6393950")]
	public static double2x4 double2x4(bool v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x6393990", Offset = "0x6392990", VA = "0x6393990")]
	public static double2x4 double2x4(bool2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x6393A50", Offset = "0x6392A50", VA = "0x6393A50")]
	public static double2x4 double2x4(int v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x6393A80", Offset = "0x6392A80", VA = "0x6393A80")]
	public static double2x4 double2x4(int2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x6393B00", Offset = "0x6392B00", VA = "0x6393B00")]
	public static double2x4 double2x4(uint v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x6393B40", Offset = "0x6392B40", VA = "0x6393B40")]
	public static double2x4 double2x4(uint2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x6393BD0", Offset = "0x6392BD0", VA = "0x6393BD0")]
	public static double2x4 double2x4(float v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x6393C00", Offset = "0x6392C00", VA = "0x6393C00")]
	public static double2x4 double2x4(float2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x6393C30", Offset = "0x6392C30", VA = "0x6393C30")]
	public static double4x2 transpose(double2x4 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x6393C90", Offset = "0x6392C90", VA = "0x6393C90")]
	public static uint hash(double2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x6393D70", Offset = "0x6392D70", VA = "0x6393D70")]
	public static uint2 hashwide(double2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x6393E70", Offset = "0x6392E70", VA = "0x6393E70")]
	public static double3 double3(double x, double y, double z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x6393E90", Offset = "0x6392E90", VA = "0x6393E90")]
	public static double3 double3(double x, double2 yz)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x6393EB0", Offset = "0x6392EB0", VA = "0x6393EB0")]
	public static double3 double3(double2 xy, double z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x6393ED0", Offset = "0x6392ED0", VA = "0x6393ED0")]
	public static double3 double3(double3 xyz)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x6393EF0", Offset = "0x6392EF0", VA = "0x6393EF0")]
	public static double3 double3(double v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x6393F10", Offset = "0x6392F10", VA = "0x6393F10")]
	public static double3 double3(bool v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x6393F40", Offset = "0x6392F40", VA = "0x6393F40")]
	public static double3 double3(bool3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x6393FB0", Offset = "0x6392FB0", VA = "0x6393FB0")]
	public static double3 double3(int v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x6393FD0", Offset = "0x6392FD0", VA = "0x6393FD0")]
	public static double3 double3(int3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x6394000", Offset = "0x6393000", VA = "0x6394000")]
	public static double3 double3(uint v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x6394020", Offset = "0x6393020", VA = "0x6394020")]
	public static double3 double3(uint3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x6394050", Offset = "0x6393050", VA = "0x6394050")]
	public static double3 double3(half v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x63940C0", Offset = "0x63930C0", VA = "0x63940C0")]
	public static double3 double3(half3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x63941B0", Offset = "0x63931B0", VA = "0x63941B0")]
	public static double3 double3(float v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x63941D0", Offset = "0x63931D0", VA = "0x63941D0")]
	public static double3 double3(float3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x63941F0", Offset = "0x63931F0", VA = "0x63941F0")]
	public static uint hash(double3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x6394250", Offset = "0x6393250", VA = "0x6394250")]
	public static uint3 hashwide(double3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x63942D0", Offset = "0x63932D0", VA = "0x63942D0")]
	public static double shuffle(double3 left, double3 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x63942E0", Offset = "0x63932E0", VA = "0x63942E0")]
	public static double2 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x6394360", Offset = "0x6393360", VA = "0x6394360")]
	public static double3 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x6394440", Offset = "0x6393440", VA = "0x6394440")]
	public static double4 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x6394580", Offset = "0x6393580", VA = "0x6394580")]
	internal static double select_shuffle_component(double3 a, double3 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x6394650", Offset = "0x6393650", VA = "0x6394650")]
	public static double3x2 double3x2(double3 c0, double3 c1)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x6394680", Offset = "0x6393680", VA = "0x6394680")]
	public static double3x2 double3x2(double m00, double m01, double m10, double m11, double m20, double m21)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000100")]
	[Address(RVA = "0x63946B0", Offset = "0x63936B0", VA = "0x63946B0")]
	public static double3x2 double3x2(double v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000101")]
	[Address(RVA = "0x63946E0", Offset = "0x63936E0", VA = "0x63946E0")]
	public static double3x2 double3x2(bool v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000102")]
	[Address(RVA = "0x6394760", Offset = "0x6393760", VA = "0x6394760")]
	public static double3x2 double3x2(bool3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000103")]
	[Address(RVA = "0x6394820", Offset = "0x6393820", VA = "0x6394820")]
	public static double3x2 double3x2(int v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000104")]
	[Address(RVA = "0x6394850", Offset = "0x6393850", VA = "0x6394850")]
	public static double3x2 double3x2(int3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000105")]
	[Address(RVA = "0x63948B0", Offset = "0x63938B0", VA = "0x63948B0")]
	public static double3x2 double3x2(uint v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000106")]
	[Address(RVA = "0x63948E0", Offset = "0x63938E0", VA = "0x63948E0")]
	public static double3x2 double3x2(uint3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000107")]
	[Address(RVA = "0x6394950", Offset = "0x6393950", VA = "0x6394950")]
	public static double3x2 double3x2(float v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000108")]
	[Address(RVA = "0x6394980", Offset = "0x6393980", VA = "0x6394980")]
	public static double3x2 double3x2(float3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000109")]
	[Address(RVA = "0x63949C0", Offset = "0x63939C0", VA = "0x63949C0")]
	public static double2x3 transpose(double3x2 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010A")]
	[Address(RVA = "0x6394A10", Offset = "0x6393A10", VA = "0x6394A10")]
	public static uint hash(double3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010B")]
	[Address(RVA = "0x6394AC0", Offset = "0x6393AC0", VA = "0x6394AC0")]
	public static uint3 hashwide(double3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010C")]
	[Address(RVA = "0x6394B80", Offset = "0x6393B80", VA = "0x6394B80")]
	public static double3x3 double3x3(double3 c0, double3 c1, double3 c2)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010D")]
	[Address(RVA = "0x6394BC0", Offset = "0x6393BC0", VA = "0x6394BC0")]
	public static double3x3 double3x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010E")]
	[Address(RVA = "0x6394C00", Offset = "0x6393C00", VA = "0x6394C00")]
	public static double3x3 double3x3(double v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010F")]
	[Address(RVA = "0x6394C30", Offset = "0x6393C30", VA = "0x6394C30")]
	public static double3x3 double3x3(bool v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000110")]
	[Address(RVA = "0x6394CE0", Offset = "0x6393CE0", VA = "0x6394CE0")]
	public static double3x3 double3x3(bool3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000111")]
	[Address(RVA = "0x6394E30", Offset = "0x6393E30", VA = "0x6394E30")]
	public static double3x3 double3x3(int v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x6394E70", Offset = "0x6393E70", VA = "0x6394E70")]
	public static double3x3 double3x3(int3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x6394F00", Offset = "0x6393F00", VA = "0x6394F00")]
	public static double3x3 double3x3(uint v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000114")]
	[Address(RVA = "0x6394F40", Offset = "0x6393F40", VA = "0x6394F40")]
	public static double3x3 double3x3(uint3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x6394FE0", Offset = "0x6393FE0", VA = "0x6394FE0")]
	public static double3x3 double3x3(float v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x6395020", Offset = "0x6394020", VA = "0x6395020")]
	public static double3x3 double3x3(float3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x6395080", Offset = "0x6394080", VA = "0x6395080")]
	public static double3x3 transpose(double3x3 v)
	{
		return default(double3x3);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x63950F0", Offset = "0x63940F0", VA = "0x63950F0")]
	public static double3x3 inverse(double3x3 m)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000119")]
	[Address(RVA = "0x6395240", Offset = "0x6394240", VA = "0x6395240")]
	public static double determinant(double3x3 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x63952C0", Offset = "0x63942C0", VA = "0x63952C0")]
	public static uint hash(double3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x63953C0", Offset = "0x63943C0", VA = "0x63953C0")]
	public static uint3 hashwide(double3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011C")]
	[Address(RVA = "0x63954D0", Offset = "0x63944D0", VA = "0x63954D0")]
	public static double3x4 double3x4(double3 c0, double3 c1, double3 c2, double3 c3)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011D")]
	[Address(RVA = "0x6395520", Offset = "0x6394520", VA = "0x6395520")]
	public static double3x4 double3x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011E")]
	[Address(RVA = "0x6395580", Offset = "0x6394580", VA = "0x6395580")]
	public static double3x4 double3x4(double v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011F")]
	[Address(RVA = "0x63955C0", Offset = "0x63945C0", VA = "0x63955C0")]
	public static double3x4 double3x4(bool v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000120")]
	[Address(RVA = "0x63956A0", Offset = "0x63946A0", VA = "0x63956A0")]
	public static double3x4 double3x4(bool3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000121")]
	[Address(RVA = "0x6395870", Offset = "0x6394870", VA = "0x6395870")]
	public static double3x4 double3x4(int v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000122")]
	[Address(RVA = "0x63958C0", Offset = "0x63948C0", VA = "0x63958C0")]
	public static double3x4 double3x4(int3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000123")]
	[Address(RVA = "0x6395970", Offset = "0x6394970", VA = "0x6395970")]
	public static double3x4 double3x4(uint v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000124")]
	[Address(RVA = "0x63959C0", Offset = "0x63949C0", VA = "0x63959C0")]
	public static double3x4 double3x4(uint3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000125")]
	[Address(RVA = "0x6395AA0", Offset = "0x6394AA0", VA = "0x6395AA0")]
	public static double3x4 double3x4(float v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000126")]
	[Address(RVA = "0x6395AF0", Offset = "0x6394AF0", VA = "0x6395AF0")]
	public static double3x4 double3x4(float3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000127")]
	[Address(RVA = "0x6395B60", Offset = "0x6394B60", VA = "0x6395B60")]
	public static double4x3 transpose(double3x4 v)
	{
		return default(double4x3);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x6395BF0", Offset = "0x6394BF0", VA = "0x6395BF0")]
	public static double3x4 fastinverse(double3x4 m)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000129")]
	[Address(RVA = "0x6395CD0", Offset = "0x6394CD0", VA = "0x6395CD0")]
	public static uint hash(double3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012A")]
	[Address(RVA = "0x6395E20", Offset = "0x6394E20", VA = "0x6395E20")]
	public static uint3 hashwide(double3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012B")]
	[Address(RVA = "0x6395F90", Offset = "0x6394F90", VA = "0x6395F90")]
	public static double4 double4(double x, double y, double z, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012C")]
	[Address(RVA = "0x6395FB0", Offset = "0x6394FB0", VA = "0x6395FB0")]
	public static double4 double4(double x, double y, double2 zw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012D")]
	[Address(RVA = "0x6395FD0", Offset = "0x6394FD0", VA = "0x6395FD0")]
	public static double4 double4(double x, double2 yz, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012E")]
	[Address(RVA = "0x6395FF0", Offset = "0x6394FF0", VA = "0x6395FF0")]
	public static double4 double4(double x, double3 yzw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012F")]
	[Address(RVA = "0x6396010", Offset = "0x6395010", VA = "0x6396010")]
	public static double4 double4(double2 xy, double z, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000130")]
	[Address(RVA = "0x6396030", Offset = "0x6395030", VA = "0x6396030")]
	public static double4 double4(double2 xy, double2 zw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000131")]
	[Address(RVA = "0x6396050", Offset = "0x6395050", VA = "0x6396050")]
	public static double4 double4(double3 xyz, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000132")]
	[Address(RVA = "0x6396070", Offset = "0x6395070", VA = "0x6396070")]
	public static double4 double4(double4 xyzw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000133")]
	[Address(RVA = "0x6396090", Offset = "0x6395090", VA = "0x6396090")]
	public static double4 double4(double v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000134")]
	[Address(RVA = "0x63960B0", Offset = "0x63950B0", VA = "0x63960B0")]
	public static double4 double4(bool v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000135")]
	[Address(RVA = "0x63960E0", Offset = "0x63950E0", VA = "0x63960E0")]
	public static double4 double4(bool4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000136")]
	[Address(RVA = "0x6396140", Offset = "0x6395140", VA = "0x6396140")]
	public static double4 double4(int v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000137")]
	[Address(RVA = "0x6396160", Offset = "0x6395160", VA = "0x6396160")]
	public static double4 double4(int4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x63961A0", Offset = "0x63951A0", VA = "0x63961A0")]
	public static double4 double4(uint v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x63961C0", Offset = "0x63951C0", VA = "0x63961C0")]
	public static double4 double4(uint4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013A")]
	[Address(RVA = "0x6396200", Offset = "0x6395200", VA = "0x6396200")]
	public static double4 double4(half v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013B")]
	[Address(RVA = "0x6396270", Offset = "0x6395270", VA = "0x6396270")]
	public static double4 double4(half4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013C")]
	[Address(RVA = "0x6396380", Offset = "0x6395380", VA = "0x6396380")]
	public static double4 double4(float v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x63963A0", Offset = "0x63953A0", VA = "0x63963A0")]
	public static double4 double4(float4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013E")]
	[Address(RVA = "0x63963C0", Offset = "0x63953C0", VA = "0x63963C0")]
	public static uint hash(double4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013F")]
	[Address(RVA = "0x6396440", Offset = "0x6395440", VA = "0x6396440")]
	public static uint4 hashwide(double4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000140")]
	[Address(RVA = "0x63964E0", Offset = "0x63954E0", VA = "0x63964E0")]
	public static double shuffle(double4 left, double4 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000141")]
	[Address(RVA = "0x63965C0", Offset = "0x63955C0", VA = "0x63965C0")]
	public static double2 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000142")]
	[Address(RVA = "0x6396740", Offset = "0x6395740", VA = "0x6396740")]
	public static double3 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000143")]
	[Address(RVA = "0x6396930", Offset = "0x6395930", VA = "0x6396930")]
	public static double4 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000144")]
	[Address(RVA = "0x6396B90", Offset = "0x6395B90", VA = "0x6396B90")]
	internal static double select_shuffle_component(double4 a, double4 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000145")]
	[Address(RVA = "0x6396C70", Offset = "0x6395C70", VA = "0x6396C70")]
	public static double4x2 double4x2(double4 c0, double4 c1)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000146")]
	[Address(RVA = "0x6396CA0", Offset = "0x6395CA0", VA = "0x6396CA0")]
	public static double4x2 double4x2(double m00, double m01, double m10, double m11, double m20, double m21, double m30, double m31)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x6396CD0", Offset = "0x6395CD0", VA = "0x6396CD0")]
	public static double4x2 double4x2(double v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000148")]
	[Address(RVA = "0x6396D00", Offset = "0x6395D00", VA = "0x6396D00")]
	public static double4x2 double4x2(bool v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000149")]
	[Address(RVA = "0x6396D70", Offset = "0x6395D70", VA = "0x6396D70")]
	public static double4x2 double4x2(bool4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014A")]
	[Address(RVA = "0x6396E20", Offset = "0x6395E20", VA = "0x6396E20")]
	public static double4x2 double4x2(int v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014B")]
	[Address(RVA = "0x6396E50", Offset = "0x6395E50", VA = "0x6396E50")]
	public static double4x2 double4x2(int4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014C")]
	[Address(RVA = "0x6396ED0", Offset = "0x6395ED0", VA = "0x6396ED0")]
	public static double4x2 double4x2(uint v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x6396F10", Offset = "0x6395F10", VA = "0x6396F10")]
	public static double4x2 double4x2(uint4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014E")]
	[Address(RVA = "0x6396FA0", Offset = "0x6395FA0", VA = "0x6396FA0")]
	public static double4x2 double4x2(float v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014F")]
	[Address(RVA = "0x6396FD0", Offset = "0x6395FD0", VA = "0x6396FD0")]
	public static double4x2 double4x2(float4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000150")]
	[Address(RVA = "0x6397000", Offset = "0x6396000", VA = "0x6397000")]
	public static double2x4 transpose(double4x2 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000151")]
	[Address(RVA = "0x6397060", Offset = "0x6396060", VA = "0x6397060")]
	public static uint hash(double4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000152")]
	[Address(RVA = "0x6397160", Offset = "0x6396160", VA = "0x6397160")]
	public static uint4 hashwide(double4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000153")]
	[Address(RVA = "0x6397270", Offset = "0x6396270", VA = "0x6397270")]
	public static double4x3 double4x3(double4 c0, double4 c1, double4 c2)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000154")]
	[Address(RVA = "0x63972B0", Offset = "0x63962B0", VA = "0x63972B0")]
	public static double4x3 double4x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22, double m30, double m31, double m32)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000155")]
	[Address(RVA = "0x6397310", Offset = "0x6396310", VA = "0x6397310")]
	public static double4x3 double4x3(double v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000156")]
	[Address(RVA = "0x6397350", Offset = "0x6396350", VA = "0x6397350")]
	public static double4x3 double4x3(bool v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000157")]
	[Address(RVA = "0x63973F0", Offset = "0x63963F0", VA = "0x63973F0")]
	public static double4x3 double4x3(bool4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000158")]
	[Address(RVA = "0x63974F0", Offset = "0x63964F0", VA = "0x63974F0")]
	public static double4x3 double4x3(int v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000159")]
	[Address(RVA = "0x6397540", Offset = "0x6396540", VA = "0x6397540")]
	public static double4x3 double4x3(int4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015A")]
	[Address(RVA = "0x6397600", Offset = "0x6396600", VA = "0x6397600")]
	public static double4x3 double4x3(uint v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015B")]
	[Address(RVA = "0x6397650", Offset = "0x6396650", VA = "0x6397650")]
	public static double4x3 double4x3(uint4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015C")]
	[Address(RVA = "0x6397730", Offset = "0x6396730", VA = "0x6397730")]
	public static double4x3 double4x3(float v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015D")]
	[Address(RVA = "0x6397780", Offset = "0x6396780", VA = "0x6397780")]
	public static double4x3 double4x3(float4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015E")]
	[Address(RVA = "0x63977C0", Offset = "0x63967C0", VA = "0x63977C0")]
	public static double3x4 transpose(double4x3 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015F")]
	[Address(RVA = "0x6397850", Offset = "0x6396850", VA = "0x6397850")]
	public static uint hash(double4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000160")]
	[Address(RVA = "0x63979D0", Offset = "0x63969D0", VA = "0x63979D0")]
	public static uint4 hashwide(double4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000161")]
	[Address(RVA = "0x6397B60", Offset = "0x6396B60", VA = "0x6397B60")]
	public static double4x4 double4x4(double4 c0, double4 c1, double4 c2, double4 c3)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000162")]
	[Address(RVA = "0x6397BB0", Offset = "0x6396BB0", VA = "0x6397BB0")]
	public static double4x4 double4x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000163")]
	[Address(RVA = "0x6397C50", Offset = "0x6396C50", VA = "0x6397C50")]
	public static double4x4 double4x4(double v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000164")]
	[Address(RVA = "0x6397CB0", Offset = "0x6396CB0", VA = "0x6397CB0")]
	public static double4x4 double4x4(bool v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000165")]
	[Address(RVA = "0x6397D70", Offset = "0x6396D70", VA = "0x6397D70")]
	public static double4x4 double4x4(bool4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x6397EC0", Offset = "0x6396EC0", VA = "0x6397EC0")]
	public static double4x4 double4x4(int v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000167")]
	[Address(RVA = "0x6397F20", Offset = "0x6396F20", VA = "0x6397F20")]
	public static double4x4 double4x4(int4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000168")]
	[Address(RVA = "0x6398030", Offset = "0x6397030", VA = "0x6398030")]
	public static double4x4 double4x4(uint v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000169")]
	[Address(RVA = "0x6398090", Offset = "0x6397090", VA = "0x6398090")]
	public static double4x4 double4x4(uint4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016A")]
	[Address(RVA = "0x63981C0", Offset = "0x63971C0", VA = "0x63981C0")]
	public static double4x4 double4x4(float v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016B")]
	[Address(RVA = "0x6398220", Offset = "0x6397220", VA = "0x6398220")]
	public static double4x4 double4x4(float4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016C")]
	[Address(RVA = "0x6398270", Offset = "0x6397270", VA = "0x6398270")]
	public static double3 rotate(double4x4 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x63982F0", Offset = "0x63972F0", VA = "0x63982F0")]
	public static double3 transform(double4x4 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x6398370", Offset = "0x6397370", VA = "0x6398370")]
	public static double4x4 transpose(double4x4 v)
	{
		return default(double4x4);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x6398440", Offset = "0x6397440", VA = "0x6398440")]
	public static double4x4 inverse(double4x4 m)
	{
		return default(double4x4);
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x6398860", Offset = "0x6397860", VA = "0x6398860")]
	public static double4x4 fastinverse(double4x4 m)
	{
		return default(double4x4);
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x6398960", Offset = "0x6397960", VA = "0x6398960")]
	public static double determinant(double4x4 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000172")]
	[Address(RVA = "0x6398AC0", Offset = "0x6397AC0", VA = "0x6398AC0")]
	public static uint hash(double4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000173")]
	[Address(RVA = "0x6398CC0", Offset = "0x6397CC0", VA = "0x6398CC0")]
	public static uint4 hashwide(double4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000174")]
	[Address(RVA = "0x6398EC0", Offset = "0x6397EC0", VA = "0x6398EC0")]
	public static float2 float2(float x, float y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000175")]
	[Address(RVA = "0x6398ED0", Offset = "0x6397ED0", VA = "0x6398ED0")]
	public static float2 float2(float2 xy)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000176")]
	[Address(RVA = "0x6398EE0", Offset = "0x6397EE0", VA = "0x6398EE0")]
	public static float2 float2(float v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000177")]
	[Address(RVA = "0x6398EF0", Offset = "0x6397EF0", VA = "0x6398EF0")]
	public static float2 float2(bool v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000178")]
	[Address(RVA = "0x6398F10", Offset = "0x6397F10", VA = "0x6398F10")]
	public static float2 float2(bool2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000179")]
	[Address(RVA = "0x6398F40", Offset = "0x6397F40", VA = "0x6398F40")]
	public static float2 float2(int v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017A")]
	[Address(RVA = "0x6398F50", Offset = "0x6397F50", VA = "0x6398F50")]
	public static float2 float2(int2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017B")]
	[Address(RVA = "0x6398F60", Offset = "0x6397F60", VA = "0x6398F60")]
	public static float2 float2(uint v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017C")]
	[Address(RVA = "0x6398F70", Offset = "0x6397F70", VA = "0x6398F70")]
	public static float2 float2(uint2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017D")]
	[Address(RVA = "0x6398F90", Offset = "0x6397F90", VA = "0x6398F90")]
	public static float2 float2(half v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017E")]
	[Address(RVA = "0x6398FF0", Offset = "0x6397FF0", VA = "0x6398FF0")]
	public static float2 float2(half2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017F")]
	[Address(RVA = "0x6399080", Offset = "0x6398080", VA = "0x6399080")]
	public static float2 float2(double v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000180")]
	[Address(RVA = "0x6399090", Offset = "0x6398090", VA = "0x6399090")]
	public static float2 float2(double2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000181")]
	[Address(RVA = "0x63990A0", Offset = "0x63980A0", VA = "0x63990A0")]
	public static uint hash(float2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000182")]
	[Address(RVA = "0x63990D0", Offset = "0x63980D0", VA = "0x63990D0")]
	public static uint2 hashwide(float2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000183")]
	[Address(RVA = "0x6399110", Offset = "0x6398110", VA = "0x6399110")]
	public static float shuffle(float2 left, float2 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000184")]
	[Address(RVA = "0x63991D0", Offset = "0x63981D0", VA = "0x63991D0")]
	public static float2 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000185")]
	[Address(RVA = "0x63992E0", Offset = "0x63982E0", VA = "0x63992E0")]
	public static float3 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000186")]
	[Address(RVA = "0x6399460", Offset = "0x6398460", VA = "0x6399460")]
	public static float4 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000187")]
	[Address(RVA = "0x6399640", Offset = "0x6398640", VA = "0x6399640")]
	internal static float select_shuffle_component(float2 a, float2 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000188")]
	[Address(RVA = "0x6399700", Offset = "0x6398700", VA = "0x6399700")]
	public static float2x2 float2x2(float2 c0, float2 c1)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000189")]
	[Address(RVA = "0x6399710", Offset = "0x6398710", VA = "0x6399710")]
	public static float2x2 float2x2(float m00, float m01, float m10, float m11)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018A")]
	[Address(RVA = "0x6399720", Offset = "0x6398720", VA = "0x6399720")]
	public static float2x2 float2x2(float v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018B")]
	[Address(RVA = "0x6399730", Offset = "0x6398730", VA = "0x6399730")]
	public static float2x2 float2x2(bool v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018C")]
	[Address(RVA = "0x6399750", Offset = "0x6398750", VA = "0x6399750")]
	public static float2x2 float2x2(bool2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018D")]
	[Address(RVA = "0x6399790", Offset = "0x6398790", VA = "0x6399790")]
	public static float2x2 float2x2(int v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018E")]
	[Address(RVA = "0x63997A0", Offset = "0x63987A0", VA = "0x63997A0")]
	public static float2x2 float2x2(int2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018F")]
	[Address(RVA = "0x63997D0", Offset = "0x63987D0", VA = "0x63997D0")]
	public static float2x2 float2x2(uint v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000190")]
	[Address(RVA = "0x63997E0", Offset = "0x63987E0", VA = "0x63997E0")]
	public static float2x2 float2x2(uint2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000191")]
	[Address(RVA = "0x6399810", Offset = "0x6398810", VA = "0x6399810")]
	public static float2x2 float2x2(double v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x6399820", Offset = "0x6398820", VA = "0x6399820")]
	public static float2x2 float2x2(double2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000193")]
	[Address(RVA = "0x6399840", Offset = "0x6398840", VA = "0x6399840")]
	public static float2x2 transpose(float2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000194")]
	[Address(RVA = "0x6399860", Offset = "0x6398860", VA = "0x6399860")]
	public static float2x2 inverse(float2x2 m)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000195")]
	[Address(RVA = "0x63998C0", Offset = "0x63988C0", VA = "0x63998C0")]
	public static float determinant(float2x2 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000196")]
	[Address(RVA = "0x63998E0", Offset = "0x63988E0", VA = "0x63998E0")]
	public static uint hash(float2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000197")]
	[Address(RVA = "0x6399930", Offset = "0x6398930", VA = "0x6399930")]
	public static uint2 hashwide(float2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000198")]
	[Address(RVA = "0x6399990", Offset = "0x6398990", VA = "0x6399990")]
	public static float2x3 float2x3(float2 c0, float2 c1, float2 c2)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000199")]
	[Address(RVA = "0x63999A0", Offset = "0x63989A0", VA = "0x63999A0")]
	public static float2x3 float2x3(float m00, float m01, float m02, float m10, float m11, float m12)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019A")]
	[Address(RVA = "0x63999D0", Offset = "0x63989D0", VA = "0x63999D0")]
	public static float2x3 float2x3(float v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019B")]
	[Address(RVA = "0x63999E0", Offset = "0x63989E0", VA = "0x63999E0")]
	public static float2x3 float2x3(bool v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019C")]
	[Address(RVA = "0x6399A10", Offset = "0x6398A10", VA = "0x6399A10")]
	public static float2x3 float2x3(bool2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019D")]
	[Address(RVA = "0x6399A90", Offset = "0x6398A90", VA = "0x6399A90")]
	public static float2x3 float2x3(int v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019E")]
	[Address(RVA = "0x6399AB0", Offset = "0x6398AB0", VA = "0x6399AB0")]
	public static float2x3 float2x3(int2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019F")]
	[Address(RVA = "0x6399B00", Offset = "0x6398B00", VA = "0x6399B00")]
	public static float2x3 float2x3(uint v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x6399B20", Offset = "0x6398B20", VA = "0x6399B20")]
	public static float2x3 float2x3(uint2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x6399B80", Offset = "0x6398B80", VA = "0x6399B80")]
	public static float2x3 float2x3(double v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x6399BA0", Offset = "0x6398BA0", VA = "0x6399BA0")]
	public static float2x3 float2x3(double2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x6399BD0", Offset = "0x6398BD0", VA = "0x6399BD0")]
	public static float3x2 transpose(float2x3 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x6399C00", Offset = "0x6398C00", VA = "0x6399C00")]
	public static uint hash(float2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x6399C80", Offset = "0x6398C80", VA = "0x6399C80")]
	public static uint2 hashwide(float2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x6399D00", Offset = "0x6398D00", VA = "0x6399D00")]
	public static float2x4 float2x4(float2 c0, float2 c1, float2 c2, float2 c3)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x6399D20", Offset = "0x6398D20", VA = "0x6399D20")]
	public static float2x4 float2x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x6399D50", Offset = "0x6398D50", VA = "0x6399D50")]
	public static float2x4 float2x4(float v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x6399D60", Offset = "0x6398D60", VA = "0x6399D60")]
	public static float2x4 float2x4(bool v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x6399D90", Offset = "0x6398D90", VA = "0x6399D90")]
	public static float2x4 float2x4(bool2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x6399E40", Offset = "0x6398E40", VA = "0x6399E40")]
	public static float2x4 float2x4(int v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x6399E60", Offset = "0x6398E60", VA = "0x6399E60")]
	public static float2x4 float2x4(int2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x6399ED0", Offset = "0x6398ED0", VA = "0x6399ED0")]
	public static float2x4 float2x4(uint v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x6399EF0", Offset = "0x6398EF0", VA = "0x6399EF0")]
	public static float2x4 float2x4(uint2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x6399F70", Offset = "0x6398F70", VA = "0x6399F70")]
	public static float2x4 float2x4(double v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x6399F90", Offset = "0x6398F90", VA = "0x6399F90")]
	public static float2x4 float2x4(double2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x6399FC0", Offset = "0x6398FC0", VA = "0x6399FC0")]
	public static float4x2 transpose(float2x4 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x639A020", Offset = "0x6399020", VA = "0x639A020")]
	public static uint hash(float2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x639A0B0", Offset = "0x63990B0", VA = "0x639A0B0")]
	public static uint2 hashwide(float2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x639A150", Offset = "0x6399150", VA = "0x639A150")]
	public static float3 float3(float x, float y, float z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x639A160", Offset = "0x6399160", VA = "0x639A160")]
	public static float3 float3(float x, float2 yz)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x639A170", Offset = "0x6399170", VA = "0x639A170")]
	public static float3 float3(float2 xy, float z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x639A180", Offset = "0x6399180", VA = "0x639A180")]
	public static float3 float3(float3 xyz)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x639A190", Offset = "0x6399190", VA = "0x639A190")]
	public static float3 float3(float v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x639A1A0", Offset = "0x63991A0", VA = "0x639A1A0")]
	public static float3 float3(bool v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x639A1C0", Offset = "0x63991C0", VA = "0x639A1C0")]
	public static float3 float3(bool3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x639A210", Offset = "0x6399210", VA = "0x639A210")]
	public static float3 float3(int v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x639A220", Offset = "0x6399220", VA = "0x639A220")]
	public static float3 float3(int3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x639A240", Offset = "0x6399240", VA = "0x639A240")]
	public static float3 float3(uint v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x639A250", Offset = "0x6399250", VA = "0x639A250")]
	public static float3 float3(uint3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x639A270", Offset = "0x6399270", VA = "0x639A270")]
	public static float3 float3(half v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x639A2D0", Offset = "0x63992D0", VA = "0x639A2D0")]
	public static float3 float3(half3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x639A3B0", Offset = "0x63993B0", VA = "0x639A3B0")]
	public static float3 float3(double v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x639A3C0", Offset = "0x63993C0", VA = "0x639A3C0")]
	public static float3 float3(double3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x639A3E0", Offset = "0x63993E0", VA = "0x639A3E0")]
	public static uint hash(float3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x639A420", Offset = "0x6399420", VA = "0x639A420")]
	public static uint3 hashwide(float3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x639A470", Offset = "0x6399470", VA = "0x639A470")]
	public static float shuffle(float3 left, float3 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x639A540", Offset = "0x6399540", VA = "0x639A540")]
	public static float2 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x639A670", Offset = "0x6399670", VA = "0x639A670")]
	public static float3 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x639A810", Offset = "0x6399810", VA = "0x639A810")]
	public static float4 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x639AA10", Offset = "0x6399A10", VA = "0x639AA10")]
	internal static float select_shuffle_component(float3 a, float3 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x639AAE0", Offset = "0x6399AE0", VA = "0x639AAE0")]
	public static float3x2 float3x2(float3 c0, float3 c1)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x639AB00", Offset = "0x6399B00", VA = "0x639AB00")]
	public static float3x2 float3x2(float m00, float m01, float m10, float m11, float m20, float m21)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x639AB30", Offset = "0x6399B30", VA = "0x639AB30")]
	public static float3x2 float3x2(float v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x639AB50", Offset = "0x6399B50", VA = "0x639AB50")]
	public static float3x2 float3x2(bool v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x639AB90", Offset = "0x6399B90", VA = "0x639AB90")]
	public static float3x2 float3x2(bool3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x639AC40", Offset = "0x6399C40", VA = "0x639AC40")]
	public static float3x2 float3x2(int v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x639AC60", Offset = "0x6399C60", VA = "0x639AC60")]
	public static float3x2 float3x2(int3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x639ACB0", Offset = "0x6399CB0", VA = "0x639ACB0")]
	public static float3x2 float3x2(uint v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x639ACE0", Offset = "0x6399CE0", VA = "0x639ACE0")]
	public static float3x2 float3x2(uint3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x639AD40", Offset = "0x6399D40", VA = "0x639AD40")]
	public static float3x2 float3x2(double v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x639AD60", Offset = "0x6399D60", VA = "0x639AD60")]
	public static float3x2 float3x2(double3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x639ADA0", Offset = "0x6399DA0", VA = "0x639ADA0")]
	public static float2x3 transpose(float3x2 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x639ADD0", Offset = "0x6399DD0", VA = "0x639ADD0")]
	public static uint hash(float3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x639AE40", Offset = "0x6399E40", VA = "0x639AE40")]
	public static uint3 hashwide(float3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x639AEC0", Offset = "0x6399EC0", VA = "0x639AEC0")]
	public static float3x3 float3x3(float3 c0, float3 c1, float3 c2)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x639AEE0", Offset = "0x6399EE0", VA = "0x639AEE0")]
	public static float3x3 float3x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x639AF20", Offset = "0x6399F20", VA = "0x639AF20")]
	public static float3x3 float3x3(float v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x639AF50", Offset = "0x6399F50", VA = "0x639AF50")]
	public static float3x3 float3x3(bool v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x639AF90", Offset = "0x6399F90", VA = "0x639AF90")]
	public static float3x3 float3x3(bool3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x639B0D0", Offset = "0x639A0D0", VA = "0x639B0D0")]
	public static float3x3 float3x3(int v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x639B100", Offset = "0x639A100", VA = "0x639B100")]
	public static float3x3 float3x3(int3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x639B180", Offset = "0x639A180", VA = "0x639B180")]
	public static float3x3 float3x3(uint v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x639B1B0", Offset = "0x639A1B0", VA = "0x639B1B0")]
	public static float3x3 float3x3(uint3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x639B250", Offset = "0x639A250", VA = "0x639B250")]
	public static float3x3 float3x3(double v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x639B280", Offset = "0x639A280", VA = "0x639B280")]
	public static float3x3 float3x3(double3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x639B2E0", Offset = "0x639A2E0", VA = "0x639B2E0")]
	public static float3x3 transpose(float3x3 v)
	{
		return default(float3x3);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x639B350", Offset = "0x639A350", VA = "0x639B350")]
	public static float3x3 inverse(float3x3 m)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x639B4B0", Offset = "0x639A4B0", VA = "0x639B4B0")]
	public static float determinant(float3x3 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x639B520", Offset = "0x639A520", VA = "0x639B520")]
	public static uint hash(float3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x639B5B0", Offset = "0x639A5B0", VA = "0x639B5B0")]
	public static uint3 hashwide(float3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x639B650", Offset = "0x639A650", VA = "0x639B650")]
	public static float3x4 float3x4(float3 c0, float3 c1, float3 c2, float3 c3)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x639B680", Offset = "0x639A680", VA = "0x639B680")]
	public static float3x4 float3x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x639B6E0", Offset = "0x639A6E0", VA = "0x639B6E0")]
	public static float3x4 float3x4(float v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x639B710", Offset = "0x639A710", VA = "0x639B710")]
	public static float3x4 float3x4(bool v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x639B760", Offset = "0x639A760", VA = "0x639B760")]
	public static float3x4 float3x4(bool3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x639B920", Offset = "0x639A920", VA = "0x639B920")]
	public static float3x4 float3x4(int v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x639B960", Offset = "0x639A960", VA = "0x639B960")]
	public static float3x4 float3x4(int3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x639BA10", Offset = "0x639AA10", VA = "0x639BA10")]
	public static float3x4 float3x4(uint v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x639BA50", Offset = "0x639AA50", VA = "0x639BA50")]
	public static float3x4 float3x4(uint3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x639BB20", Offset = "0x639AB20", VA = "0x639BB20")]
	public static float3x4 float3x4(double v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x639BB60", Offset = "0x639AB60", VA = "0x639BB60")]
	public static float3x4 float3x4(double3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x639BBE0", Offset = "0x639ABE0", VA = "0x639BBE0")]
	public static float4x3 transpose(float3x4 v)
	{
		return default(float4x3);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x639BC70", Offset = "0x639AC70", VA = "0x639BC70")]
	public static float3x4 fastinverse(float3x4 m)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x639BD40", Offset = "0x639AD40", VA = "0x639BD40")]
	public static uint hash(float3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x639BE00", Offset = "0x639AE00", VA = "0x639BE00")]
	public static uint3 hashwide(float3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x639BED0", Offset = "0x639AED0", VA = "0x639BED0")]
	public static float4 float4(float x, float y, float z, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x639BEE0", Offset = "0x639AEE0", VA = "0x639BEE0")]
	public static float4 float4(float x, float y, float2 zw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x639BEF0", Offset = "0x639AEF0", VA = "0x639BEF0")]
	public static float4 float4(float x, float2 yz, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x639BF00", Offset = "0x639AF00", VA = "0x639BF00")]
	public static float4 float4(float x, float3 yzw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x639BF10", Offset = "0x639AF10", VA = "0x639BF10")]
	public static float4 float4(float2 xy, float z, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x639BF20", Offset = "0x639AF20", VA = "0x639BF20")]
	public static float4 float4(float2 xy, float2 zw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x639BF30", Offset = "0x639AF30", VA = "0x639BF30")]
	public static float4 float4(float3 xyz, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x639BF40", Offset = "0x639AF40", VA = "0x639BF40")]
	public static float4 float4(float4 xyzw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x639BF50", Offset = "0x639AF50", VA = "0x639BF50")]
	public static float4 float4(float v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000200")]
	[Address(RVA = "0x639BF60", Offset = "0x639AF60", VA = "0x639BF60")]
	public static float4 float4(bool v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000201")]
	[Address(RVA = "0x639BF80", Offset = "0x639AF80", VA = "0x639BF80")]
	public static float4 float4(bool4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000202")]
	[Address(RVA = "0x639BFB0", Offset = "0x639AFB0", VA = "0x639BFB0")]
	public static float4 float4(int v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000203")]
	[Address(RVA = "0x639BFC0", Offset = "0x639AFC0", VA = "0x639BFC0")]
	public static float4 float4(int4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000204")]
	[Address(RVA = "0x639BFF0", Offset = "0x639AFF0", VA = "0x639BFF0")]
	public static float4 float4(uint v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000205")]
	[Address(RVA = "0x639C000", Offset = "0x639B000", VA = "0x639C000")]
	public static float4 float4(uint4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000206")]
	[Address(RVA = "0x639C030", Offset = "0x639B030", VA = "0x639C030")]
	public static float4 float4(half v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000207")]
	[Address(RVA = "0x639C090", Offset = "0x639B090", VA = "0x639C090")]
	public static float4 float4(half4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000208")]
	[Address(RVA = "0x639C190", Offset = "0x639B190", VA = "0x639C190")]
	public static float4 float4(double v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000209")]
	[Address(RVA = "0x639C1A0", Offset = "0x639B1A0", VA = "0x639C1A0")]
	public static float4 float4(double4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020A")]
	[Address(RVA = "0x639C1C0", Offset = "0x639B1C0", VA = "0x639C1C0")]
	public static uint hash(float4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020B")]
	[Address(RVA = "0x639C210", Offset = "0x639B210", VA = "0x639C210")]
	public static uint4 hashwide(float4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020C")]
	[Address(RVA = "0x639C270", Offset = "0x639B270", VA = "0x639C270")]
	public static float shuffle(float4 left, float4 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020D")]
	[Address(RVA = "0x639C350", Offset = "0x639B350", VA = "0x639C350")]
	public static float2 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020E")]
	[Address(RVA = "0x639C4A0", Offset = "0x639B4A0", VA = "0x639C4A0")]
	public static float3 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020F")]
	[Address(RVA = "0x639C680", Offset = "0x639B680", VA = "0x639C680")]
	public static float4 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000210")]
	[Address(RVA = "0x639C8D0", Offset = "0x639B8D0", VA = "0x639C8D0")]
	internal static float select_shuffle_component(float4 a, float4 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000211")]
	[Address(RVA = "0x639C9B0", Offset = "0x639B9B0", VA = "0x639C9B0")]
	public static float4x2 float4x2(float4 c0, float4 c1)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000212")]
	[Address(RVA = "0x639C9D0", Offset = "0x639B9D0", VA = "0x639C9D0")]
	public static float4x2 float4x2(float m00, float m01, float m10, float m11, float m20, float m21, float m30, float m31)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000213")]
	[Address(RVA = "0x639CA00", Offset = "0x639BA00", VA = "0x639CA00")]
	public static float4x2 float4x2(float v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000214")]
	[Address(RVA = "0x639CA10", Offset = "0x639BA10", VA = "0x639CA10")]
	public static float4x2 float4x2(bool v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000215")]
	[Address(RVA = "0x639CA40", Offset = "0x639BA40", VA = "0x639CA40")]
	public static float4x2 float4x2(bool4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000216")]
	[Address(RVA = "0x639CAC0", Offset = "0x639BAC0", VA = "0x639CAC0")]
	public static float4x2 float4x2(int v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000217")]
	[Address(RVA = "0x639CAE0", Offset = "0x639BAE0", VA = "0x639CAE0")]
	public static float4x2 float4x2(int4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000218")]
	[Address(RVA = "0x639CB50", Offset = "0x639BB50", VA = "0x639CB50")]
	public static float4x2 float4x2(uint v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000219")]
	[Address(RVA = "0x639CB70", Offset = "0x639BB70", VA = "0x639CB70")]
	public static float4x2 float4x2(uint4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x639CBF0", Offset = "0x639BBF0", VA = "0x639CBF0")]
	public static float4x2 float4x2(double v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021B")]
	[Address(RVA = "0x639CC10", Offset = "0x639BC10", VA = "0x639CC10")]
	public static float4x2 float4x2(double4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x639CC40", Offset = "0x639BC40", VA = "0x639CC40")]
	public static float2x4 transpose(float4x2 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x639CCA0", Offset = "0x639BCA0", VA = "0x639CCA0")]
	public static uint hash(float4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021E")]
	[Address(RVA = "0x639CD40", Offset = "0x639BD40", VA = "0x639CD40")]
	public static uint4 hashwide(float4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021F")]
	[Address(RVA = "0x639CDE0", Offset = "0x639BDE0", VA = "0x639CDE0")]
	public static float4x3 float4x3(float4 c0, float4 c1, float4 c2)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000220")]
	[Address(RVA = "0x639CE00", Offset = "0x639BE00", VA = "0x639CE00")]
	public static float4x3 float4x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float m30, float m31, float m32)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000221")]
	[Address(RVA = "0x639CE60", Offset = "0x639BE60", VA = "0x639CE60")]
	public static float4x3 float4x3(float v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000222")]
	[Address(RVA = "0x639CE80", Offset = "0x639BE80", VA = "0x639CE80")]
	public static float4x3 float4x3(bool v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000223")]
	[Address(RVA = "0x639CEB0", Offset = "0x639BEB0", VA = "0x639CEB0")]
	public static float4x3 float4x3(bool4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000224")]
	[Address(RVA = "0x639CF60", Offset = "0x639BF60", VA = "0x639CF60")]
	public static float4x3 float4x3(int v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000225")]
	[Address(RVA = "0x639CF80", Offset = "0x639BF80", VA = "0x639CF80")]
	public static float4x3 float4x3(int4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000226")]
	[Address(RVA = "0x639D030", Offset = "0x639C030", VA = "0x639D030")]
	public static float4x3 float4x3(uint v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000227")]
	[Address(RVA = "0x639D050", Offset = "0x639C050", VA = "0x639D050")]
	public static float4x3 float4x3(uint4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000228")]
	[Address(RVA = "0x639D120", Offset = "0x639C120", VA = "0x639D120")]
	public static float4x3 float4x3(double v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000229")]
	[Address(RVA = "0x639D140", Offset = "0x639C140", VA = "0x639D140")]
	public static float4x3 float4x3(double4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022A")]
	[Address(RVA = "0x639D190", Offset = "0x639C190", VA = "0x639D190")]
	public static float3x4 transpose(float4x3 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022B")]
	[Address(RVA = "0x639D220", Offset = "0x639C220", VA = "0x639D220")]
	public static uint hash(float4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022C")]
	[Address(RVA = "0x639D2F0", Offset = "0x639C2F0", VA = "0x639D2F0")]
	public static uint4 hashwide(float4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022D")]
	[Address(RVA = "0x639D3D0", Offset = "0x639C3D0", VA = "0x639D3D0")]
	public static float4x4 float4x4(float4 c0, float4 c1, float4 c2, float4 c3)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022E")]
	[Address(RVA = "0x639D3F0", Offset = "0x639C3F0", VA = "0x639D3F0")]
	public static float4x4 float4x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022F")]
	[Address(RVA = "0x639D490", Offset = "0x639C490", VA = "0x639D490")]
	public static float4x4 float4x4(float v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000230")]
	[Address(RVA = "0x639D4B0", Offset = "0x639C4B0", VA = "0x639D4B0")]
	public static float4x4 float4x4(bool v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000231")]
	[Address(RVA = "0x639D4E0", Offset = "0x639C4E0", VA = "0x639D4E0")]
	public static float4x4 float4x4(bool4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000232")]
	[Address(RVA = "0x639D5C0", Offset = "0x639C5C0", VA = "0x639D5C0")]
	public static float4x4 float4x4(int v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000233")]
	[Address(RVA = "0x639D5E0", Offset = "0x639C5E0", VA = "0x639D5E0")]
	public static float4x4 float4x4(int4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000234")]
	[Address(RVA = "0x639D6D0", Offset = "0x639C6D0", VA = "0x639D6D0")]
	public static float4x4 float4x4(uint v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000235")]
	[Address(RVA = "0x639D6F0", Offset = "0x639C6F0", VA = "0x639D6F0")]
	public static float4x4 float4x4(uint4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000236")]
	[Address(RVA = "0x639D800", Offset = "0x639C800", VA = "0x639D800")]
	public static float4x4 float4x4(double v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000237")]
	[Address(RVA = "0x639D820", Offset = "0x639C820", VA = "0x639D820")]
	public static float4x4 float4x4(double4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000238")]
	[Address(RVA = "0x639D880", Offset = "0x639C880", VA = "0x639D880")]
	public static float3 rotate(float4x4 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000239")]
	[Address(RVA = "0x639D8E0", Offset = "0x639C8E0", VA = "0x639D8E0")]
	public static float3 transform(float4x4 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023A")]
	[Address(RVA = "0x639D950", Offset = "0x639C950", VA = "0x639D950")]
	public static float4x4 transpose(float4x4 v)
	{
		return default(float4x4);
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x639DA20", Offset = "0x639CA20", VA = "0x639DA20")]
	public static float4x4 inverse(float4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x639DDB0", Offset = "0x639CDB0", VA = "0x639DDB0")]
	public static float4x4 fastinverse(float4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x639DEA0", Offset = "0x639CEA0", VA = "0x639DEA0")]
	public static float determinant(float4x4 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023E")]
	[Address(RVA = "0x639E000", Offset = "0x639D000", VA = "0x639E000")]
	public static uint hash(float4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023F")]
	[Address(RVA = "0x639E110", Offset = "0x639D110", VA = "0x639E110")]
	public static uint4 hashwide(float4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000240")]
	[Address(RVA = "0x639E230", Offset = "0x639D230", VA = "0x639E230")]
	public static half half(half x)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000241")]
	[Address(RVA = "0x639E240", Offset = "0x639D240", VA = "0x639E240")]
	public static half half(float v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000242")]
	[Address(RVA = "0x639E2A0", Offset = "0x639D2A0", VA = "0x639E2A0")]
	public static half half(double v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000243")]
	[Address(RVA = "0x639E300", Offset = "0x639D300", VA = "0x639E300")]
	public static uint hash(half v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000244")]
	[Address(RVA = "0x639E310", Offset = "0x639D310", VA = "0x639E310")]
	public static half2 half2(half x, half y)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000245")]
	[Address(RVA = "0x639E320", Offset = "0x639D320", VA = "0x639E320")]
	public static half2 half2(half2 xy)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000246")]
	[Address(RVA = "0x639E330", Offset = "0x639D330", VA = "0x639E330")]
	public static half2 half2(half v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000247")]
	[Address(RVA = "0x639E340", Offset = "0x639D340", VA = "0x639E340")]
	public static half2 half2(float v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000248")]
	[Address(RVA = "0x639E3A0", Offset = "0x639D3A0", VA = "0x639E3A0")]
	public static half2 half2(float2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000249")]
	[Address(RVA = "0x639E460", Offset = "0x639D460", VA = "0x639E460")]
	public static half2 half2(double v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024A")]
	[Address(RVA = "0x639E4D0", Offset = "0x639D4D0", VA = "0x639E4D0")]
	public static half2 half2(double2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024B")]
	[Address(RVA = "0x639E590", Offset = "0x639D590", VA = "0x639E590")]
	public static uint hash(half2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024C")]
	[Address(RVA = "0x639E5C0", Offset = "0x639D5C0", VA = "0x639E5C0")]
	public static uint2 hashwide(half2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024D")]
	[Address(RVA = "0x639E600", Offset = "0x639D600", VA = "0x639E600")]
	public static half3 half3(half x, half y, half z)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024E")]
	[Address(RVA = "0x639E620", Offset = "0x639D620", VA = "0x639E620")]
	public static half3 half3(half x, half2 yz)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024F")]
	[Address(RVA = "0x639E640", Offset = "0x639D640", VA = "0x639E640")]
	public static half3 half3(half2 xy, half z)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000250")]
	[Address(RVA = "0x639E660", Offset = "0x639D660", VA = "0x639E660")]
	public static half3 half3(half3 xyz)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000251")]
	[Address(RVA = "0x639E670", Offset = "0x639D670", VA = "0x639E670")]
	public static half3 half3(half v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000252")]
	[Address(RVA = "0x639E690", Offset = "0x639D690", VA = "0x639E690")]
	public static half3 half3(float v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000253")]
	[Address(RVA = "0x639E700", Offset = "0x639D700", VA = "0x639E700")]
	public static half3 half3(float3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000254")]
	[Address(RVA = "0x639E810", Offset = "0x639D810", VA = "0x639E810")]
	public static half3 half3(double v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000255")]
	[Address(RVA = "0x639E880", Offset = "0x639D880", VA = "0x639E880")]
	public static half3 half3(double3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000256")]
	[Address(RVA = "0x639E9B0", Offset = "0x639D9B0", VA = "0x639E9B0")]
	public static uint hash(half3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000257")]
	[Address(RVA = "0x639E9F0", Offset = "0x639D9F0", VA = "0x639E9F0")]
	public static uint3 hashwide(half3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000258")]
	[Address(RVA = "0x639EA40", Offset = "0x639DA40", VA = "0x639EA40")]
	public static half4 half4(half x, half y, half z, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000259")]
	[Address(RVA = "0x639EA60", Offset = "0x639DA60", VA = "0x639EA60")]
	public static half4 half4(half x, half y, half2 zw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025A")]
	[Address(RVA = "0x639EA90", Offset = "0x639DA90", VA = "0x639EA90")]
	public static half4 half4(half x, half2 yz, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025B")]
	[Address(RVA = "0x639EAB0", Offset = "0x639DAB0", VA = "0x639EAB0")]
	public static half4 half4(half x, half3 yzw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025C")]
	[Address(RVA = "0x639EAC0", Offset = "0x639DAC0", VA = "0x639EAC0")]
	public static half4 half4(half2 xy, half z, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025D")]
	[Address(RVA = "0x639EAE0", Offset = "0x639DAE0", VA = "0x639EAE0")]
	public static half4 half4(half2 xy, half2 zw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025E")]
	[Address(RVA = "0x639EB10", Offset = "0x639DB10", VA = "0x639EB10")]
	public static half4 half4(half3 xyz, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025F")]
	[Address(RVA = "0x639EB40", Offset = "0x639DB40", VA = "0x639EB40")]
	public static half4 half4(half4 xyzw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000260")]
	[Address(RVA = "0x639EB50", Offset = "0x639DB50", VA = "0x639EB50")]
	public static half4 half4(half v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000261")]
	[Address(RVA = "0x639EB70", Offset = "0x639DB70", VA = "0x639EB70")]
	public static half4 half4(float v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000262")]
	[Address(RVA = "0x639EBE0", Offset = "0x639DBE0", VA = "0x639EBE0")]
	public static half4 half4(float4 v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000263")]
	[Address(RVA = "0x639ED40", Offset = "0x639DD40", VA = "0x639ED40")]
	public static half4 half4(double v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000264")]
	[Address(RVA = "0x639EDB0", Offset = "0x639DDB0", VA = "0x639EDB0")]
	public static half4 half4(double4 v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000265")]
	[Address(RVA = "0x639EF20", Offset = "0x639DF20", VA = "0x639EF20")]
	public static uint hash(half4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000266")]
	[Address(RVA = "0x639EF80", Offset = "0x639DF80", VA = "0x639EF80")]
	public static uint4 hashwide(half4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000267")]
	[Address(RVA = "0x639EFF0", Offset = "0x639DFF0", VA = "0x639EFF0")]
	public static int2 int2(int x, int y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000268")]
	[Address(RVA = "0x639F000", Offset = "0x639E000", VA = "0x639F000")]
	public static int2 int2(int2 xy)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000269")]
	[Address(RVA = "0x639F010", Offset = "0x639E010", VA = "0x639F010")]
	public static int2 int2(int v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026A")]
	[Address(RVA = "0x639F020", Offset = "0x639E020", VA = "0x639F020")]
	public static int2 int2(bool v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026B")]
	[Address(RVA = "0x639F030", Offset = "0x639E030", VA = "0x639F030")]
	public static int2 int2(bool2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026C")]
	[Address(RVA = "0x639F050", Offset = "0x639E050", VA = "0x639F050")]
	public static int2 int2(uint v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026D")]
	[Address(RVA = "0x639F060", Offset = "0x639E060", VA = "0x639F060")]
	public static int2 int2(uint2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026E")]
	[Address(RVA = "0x639F070", Offset = "0x639E070", VA = "0x639F070")]
	public static int2 int2(float v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026F")]
	[Address(RVA = "0x639F080", Offset = "0x639E080", VA = "0x639F080")]
	public static int2 int2(float2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000270")]
	[Address(RVA = "0x639F0A0", Offset = "0x639E0A0", VA = "0x639F0A0")]
	public static int2 int2(double v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000271")]
	[Address(RVA = "0x639F0B0", Offset = "0x639E0B0", VA = "0x639F0B0")]
	public static int2 int2(double2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000272")]
	[Address(RVA = "0x639F0C0", Offset = "0x639E0C0", VA = "0x639F0C0")]
	public static uint hash(int2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000273")]
	[Address(RVA = "0x639F0F0", Offset = "0x639E0F0", VA = "0x639F0F0")]
	public static uint2 hashwide(int2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000274")]
	[Address(RVA = "0x639F130", Offset = "0x639E130", VA = "0x639F130")]
	public static int shuffle(int2 left, int2 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000275")]
	[Address(RVA = "0x639F140", Offset = "0x639E140", VA = "0x639F140")]
	public static int2 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000276")]
	[Address(RVA = "0x639F180", Offset = "0x639E180", VA = "0x639F180")]
	public static int3 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000277")]
	[Address(RVA = "0x639F1E0", Offset = "0x639E1E0", VA = "0x639F1E0")]
	public static int4 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000278")]
	[Address(RVA = "0x639F260", Offset = "0x639E260", VA = "0x639F260")]
	internal static int select_shuffle_component(int2 a, int2 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000279")]
	[Address(RVA = "0x639F330", Offset = "0x639E330", VA = "0x639F330")]
	public static int2x2 int2x2(int2 c0, int2 c1)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027A")]
	[Address(RVA = "0x639F340", Offset = "0x639E340", VA = "0x639F340")]
	public static int2x2 int2x2(int m00, int m01, int m10, int m11)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027B")]
	[Address(RVA = "0x639F360", Offset = "0x639E360", VA = "0x639F360")]
	public static int2x2 int2x2(int v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027C")]
	[Address(RVA = "0x639F370", Offset = "0x639E370", VA = "0x639F370")]
	public static int2x2 int2x2(bool v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027D")]
	[Address(RVA = "0x639F390", Offset = "0x639E390", VA = "0x639F390")]
	public static int2x2 int2x2(bool2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027E")]
	[Address(RVA = "0x639F3C0", Offset = "0x639E3C0", VA = "0x639F3C0")]
	public static int2x2 int2x2(uint v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027F")]
	[Address(RVA = "0x639F3D0", Offset = "0x639E3D0", VA = "0x639F3D0")]
	public static int2x2 int2x2(uint2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000280")]
	[Address(RVA = "0x639F3E0", Offset = "0x639E3E0", VA = "0x639F3E0")]
	public static int2x2 int2x2(float v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000281")]
	[Address(RVA = "0x639F400", Offset = "0x639E400", VA = "0x639F400")]
	public static int2x2 int2x2(float2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000282")]
	[Address(RVA = "0x639F430", Offset = "0x639E430", VA = "0x639F430")]
	public static int2x2 int2x2(double v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000283")]
	[Address(RVA = "0x639F450", Offset = "0x639E450", VA = "0x639F450")]
	public static int2x2 int2x2(double2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000284")]
	[Address(RVA = "0x639F490", Offset = "0x639E490", VA = "0x639F490")]
	public static int2x2 transpose(int2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000285")]
	[Address(RVA = "0x639F4B0", Offset = "0x639E4B0", VA = "0x639F4B0")]
	public static int determinant(int2x2 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000286")]
	[Address(RVA = "0x639F4D0", Offset = "0x639E4D0", VA = "0x639F4D0")]
	public static uint hash(int2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000287")]
	[Address(RVA = "0x639F510", Offset = "0x639E510", VA = "0x639F510")]
	public static uint2 hashwide(int2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000288")]
	[Address(RVA = "0x639F560", Offset = "0x639E560", VA = "0x639F560")]
	public static int2x3 int2x3(int2 c0, int2 c1, int2 c2)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000289")]
	[Address(RVA = "0x639F570", Offset = "0x639E570", VA = "0x639F570")]
	public static int2x3 int2x3(int m00, int m01, int m02, int m10, int m11, int m12)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028A")]
	[Address(RVA = "0x639F5A0", Offset = "0x639E5A0", VA = "0x639F5A0")]
	public static int2x3 int2x3(int v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028B")]
	[Address(RVA = "0x639F5C0", Offset = "0x639E5C0", VA = "0x639F5C0")]
	public static int2x3 int2x3(bool v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028C")]
	[Address(RVA = "0x639F5F0", Offset = "0x639E5F0", VA = "0x639F5F0")]
	public static int2x3 int2x3(bool2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028D")]
	[Address(RVA = "0x639F650", Offset = "0x639E650", VA = "0x639F650")]
	public static int2x3 int2x3(uint v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028E")]
	[Address(RVA = "0x639F670", Offset = "0x639E670", VA = "0x639F670")]
	public static int2x3 int2x3(uint2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028F")]
	[Address(RVA = "0x639F690", Offset = "0x639E690", VA = "0x639F690")]
	public static int2x3 int2x3(float v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000290")]
	[Address(RVA = "0x639F6B0", Offset = "0x639E6B0", VA = "0x639F6B0")]
	public static int2x3 int2x3(float2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000291")]
	[Address(RVA = "0x639F700", Offset = "0x639E700", VA = "0x639F700")]
	public static int2x3 int2x3(double v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000292")]
	[Address(RVA = "0x639F720", Offset = "0x639E720", VA = "0x639F720")]
	public static int2x3 int2x3(double2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000293")]
	[Address(RVA = "0x639F770", Offset = "0x639E770", VA = "0x639F770")]
	public static int3x2 transpose(int2x3 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000294")]
	[Address(RVA = "0x639F7A0", Offset = "0x639E7A0", VA = "0x639F7A0")]
	public static uint hash(int2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000295")]
	[Address(RVA = "0x639F810", Offset = "0x639E810", VA = "0x639F810")]
	public static uint2 hashwide(int2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000296")]
	[Address(RVA = "0x639F890", Offset = "0x639E890", VA = "0x639F890")]
	public static int2x4 int2x4(int2 c0, int2 c1, int2 c2, int2 c3)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000297")]
	[Address(RVA = "0x639F8B0", Offset = "0x639E8B0", VA = "0x639F8B0")]
	public static int2x4 int2x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000298")]
	[Address(RVA = "0x639F900", Offset = "0x639E900", VA = "0x639F900")]
	public static int2x4 int2x4(int v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x639F920", Offset = "0x639E920", VA = "0x639F920")]
	public static int2x4 int2x4(bool v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029A")]
	[Address(RVA = "0x639F950", Offset = "0x639E950", VA = "0x639F950")]
	public static int2x4 int2x4(bool2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029B")]
	[Address(RVA = "0x639F9D0", Offset = "0x639E9D0", VA = "0x639F9D0")]
	public static int2x4 int2x4(uint v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029C")]
	[Address(RVA = "0x639F9F0", Offset = "0x639E9F0", VA = "0x639F9F0")]
	public static int2x4 int2x4(uint2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029D")]
	[Address(RVA = "0x639FA10", Offset = "0x639EA10", VA = "0x639FA10")]
	public static int2x4 int2x4(float v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029E")]
	[Address(RVA = "0x639FA40", Offset = "0x639EA40", VA = "0x639FA40")]
	public static int2x4 int2x4(float2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029F")]
	[Address(RVA = "0x639FAA0", Offset = "0x639EAA0", VA = "0x639FAA0")]
	public static int2x4 int2x4(double v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x639FAD0", Offset = "0x639EAD0", VA = "0x639FAD0")]
	public static int2x4 int2x4(double2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x639FB30", Offset = "0x639EB30", VA = "0x639FB30")]
	public static int4x2 transpose(int2x4 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x639FB80", Offset = "0x639EB80", VA = "0x639FB80")]
	public static uint hash(int2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x639FC10", Offset = "0x639EC10", VA = "0x639FC10")]
	public static uint2 hashwide(int2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x639FCB0", Offset = "0x639ECB0", VA = "0x639FCB0")]
	public static int3 int3(int x, int y, int z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x639FCC0", Offset = "0x639ECC0", VA = "0x639FCC0")]
	public static int3 int3(int x, int2 yz)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x639FCE0", Offset = "0x639ECE0", VA = "0x639FCE0")]
	public static int3 int3(int2 xy, int z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x639FCF0", Offset = "0x639ECF0", VA = "0x639FCF0")]
	public static int3 int3(int3 xyz)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x639FD00", Offset = "0x639ED00", VA = "0x639FD00")]
	public static int3 int3(int v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x639FD10", Offset = "0x639ED10", VA = "0x639FD10")]
	public static int3 int3(bool v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x639FD20", Offset = "0x639ED20", VA = "0x639FD20")]
	public static int3 int3(bool3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x639FD50", Offset = "0x639ED50", VA = "0x639FD50")]
	public static int3 int3(uint v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x639FD60", Offset = "0x639ED60", VA = "0x639FD60")]
	public static int3 int3(uint3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x639FD70", Offset = "0x639ED70", VA = "0x639FD70")]
	public static int3 int3(float v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x639FD80", Offset = "0x639ED80", VA = "0x639FD80")]
	public static int3 int3(float3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x639FDA0", Offset = "0x639EDA0", VA = "0x639FDA0")]
	public static int3 int3(double v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x639FDB0", Offset = "0x639EDB0", VA = "0x639FDB0")]
	public static int3 int3(double3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x639FDD0", Offset = "0x639EDD0", VA = "0x639FDD0")]
	public static uint hash(int3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x639FE00", Offset = "0x639EE00", VA = "0x639FE00")]
	public static uint3 hashwide(int3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x639FE40", Offset = "0x639EE40", VA = "0x639FE40")]
	public static int shuffle(int3 left, int3 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x639FE50", Offset = "0x639EE50", VA = "0x639FE50")]
	public static int2 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x639FEB0", Offset = "0x639EEB0", VA = "0x639FEB0")]
	public static int3 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x639FF30", Offset = "0x639EF30", VA = "0x639FF30")]
	public static int4 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x639FFD0", Offset = "0x639EFD0", VA = "0x639FFD0")]
	internal static int select_shuffle_component(int3 a, int3 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x63A00A0", Offset = "0x639F0A0", VA = "0x63A00A0")]
	public static int3x2 int3x2(int3 c0, int3 c1)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x63A00C0", Offset = "0x639F0C0", VA = "0x63A00C0")]
	public static int3x2 int3x2(int m00, int m01, int m10, int m11, int m20, int m21)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x63A00E0", Offset = "0x639F0E0", VA = "0x63A00E0")]
	public static int3x2 int3x2(int v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x63A0100", Offset = "0x639F100", VA = "0x63A0100")]
	public static int3x2 int3x2(bool v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x63A0130", Offset = "0x639F130", VA = "0x63A0130")]
	public static int3x2 int3x2(bool3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x63A01A0", Offset = "0x639F1A0", VA = "0x63A01A0")]
	public static int3x2 int3x2(uint v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x63A01C0", Offset = "0x639F1C0", VA = "0x63A01C0")]
	public static int3x2 int3x2(uint3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x63A01F0", Offset = "0x639F1F0", VA = "0x63A01F0")]
	public static int3x2 int3x2(float v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x63A0210", Offset = "0x639F210", VA = "0x63A0210")]
	public static int3x2 int3x2(float3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x63A0260", Offset = "0x639F260", VA = "0x63A0260")]
	public static int3x2 int3x2(double v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x63A0280", Offset = "0x639F280", VA = "0x63A0280")]
	public static int3x2 int3x2(double3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x63A02D0", Offset = "0x639F2D0", VA = "0x63A02D0")]
	public static int2x3 transpose(int3x2 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x63A0310", Offset = "0x639F310", VA = "0x63A0310")]
	public static uint hash(int3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x63A0380", Offset = "0x639F380", VA = "0x63A0380")]
	public static uint3 hashwide(int3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x63A0400", Offset = "0x639F400", VA = "0x63A0400")]
	public static int3x3 int3x3(int3 c0, int3 c1, int3 c2)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x63A0430", Offset = "0x639F430", VA = "0x63A0430")]
	public static int3x3 int3x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x63A0470", Offset = "0x639F470", VA = "0x63A0470")]
	public static int3x3 int3x3(int v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x63A04A0", Offset = "0x639F4A0", VA = "0x63A04A0")]
	public static int3x3 int3x3(bool v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x63A04D0", Offset = "0x639F4D0", VA = "0x63A04D0")]
	public static int3x3 int3x3(bool3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x63A0560", Offset = "0x639F560", VA = "0x63A0560")]
	public static int3x3 int3x3(uint v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x63A0590", Offset = "0x639F590", VA = "0x63A0590")]
	public static int3x3 int3x3(uint3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x63A05D0", Offset = "0x639F5D0", VA = "0x63A05D0")]
	public static int3x3 int3x3(float v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x63A0600", Offset = "0x639F600", VA = "0x63A0600")]
	public static int3x3 int3x3(float3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x63A0680", Offset = "0x639F680", VA = "0x63A0680")]
	public static int3x3 int3x3(double v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x63A06B0", Offset = "0x639F6B0", VA = "0x63A06B0")]
	public static int3x3 int3x3(double3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x63A0720", Offset = "0x639F720", VA = "0x63A0720")]
	public static int3x3 transpose(int3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x63A0770", Offset = "0x639F770", VA = "0x63A0770")]
	public static int determinant(int3x3 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x63A07D0", Offset = "0x639F7D0", VA = "0x63A07D0")]
	public static uint hash(int3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x63A0860", Offset = "0x639F860", VA = "0x63A0860")]
	public static uint3 hashwide(int3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x63A0900", Offset = "0x639F900", VA = "0x63A0900")]
	public static int3x4 int3x4(int3 c0, int3 c1, int3 c2, int3 c3)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x63A0940", Offset = "0x639F940", VA = "0x63A0940")]
	public static int3x4 int3x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x63A09A0", Offset = "0x639F9A0", VA = "0x63A09A0")]
	public static int3x4 int3x4(int v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x63A09D0", Offset = "0x639F9D0", VA = "0x63A09D0")]
	public static int3x4 int3x4(bool v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x63A0A10", Offset = "0x639FA10", VA = "0x63A0A10")]
	public static int3x4 int3x4(bool3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x63A0AC0", Offset = "0x639FAC0", VA = "0x63A0AC0")]
	public static int3x4 int3x4(uint v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x63A0AF0", Offset = "0x639FAF0", VA = "0x63A0AF0")]
	public static int3x4 int3x4(uint3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x63A0B40", Offset = "0x639FB40", VA = "0x63A0B40")]
	public static int3x4 int3x4(float v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x63A0B70", Offset = "0x639FB70", VA = "0x63A0B70")]
	public static int3x4 int3x4(float3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x63A0C10", Offset = "0x639FC10", VA = "0x63A0C10")]
	public static int3x4 int3x4(double v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x63A0C40", Offset = "0x639FC40", VA = "0x63A0C40")]
	public static int3x4 int3x4(double3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x63A0CE0", Offset = "0x639FCE0", VA = "0x63A0CE0")]
	public static int4x3 transpose(int3x4 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x63A0D50", Offset = "0x639FD50", VA = "0x63A0D50")]
	public static uint hash(int3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x63A0E10", Offset = "0x639FE10", VA = "0x63A0E10")]
	public static uint3 hashwide(int3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x63A0EE0", Offset = "0x639FEE0", VA = "0x63A0EE0")]
	public static int4 int4(int x, int y, int z, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x63A0F00", Offset = "0x639FF00", VA = "0x63A0F00")]
	public static int4 int4(int x, int y, int2 zw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x63A0F10", Offset = "0x639FF10", VA = "0x63A0F10")]
	public static int4 int4(int x, int2 yz, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x63A0F20", Offset = "0x639FF20", VA = "0x63A0F20")]
	public static int4 int4(int x, int3 yzw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x63A0F30", Offset = "0x639FF30", VA = "0x63A0F30")]
	public static int4 int4(int2 xy, int z, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x63A0F40", Offset = "0x639FF40", VA = "0x63A0F40")]
	public static int4 int4(int2 xy, int2 zw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x63A0F50", Offset = "0x639FF50", VA = "0x63A0F50")]
	public static int4 int4(int3 xyz, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x63A0F60", Offset = "0x639FF60", VA = "0x63A0F60")]
	public static int4 int4(int4 xyzw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x63A0F70", Offset = "0x639FF70", VA = "0x63A0F70")]
	public static int4 int4(int v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x63A0F80", Offset = "0x639FF80", VA = "0x63A0F80")]
	public static int4 int4(bool v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x63A0F90", Offset = "0x639FF90", VA = "0x63A0F90")]
	public static int4 int4(bool4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x63A0FC0", Offset = "0x639FFC0", VA = "0x63A0FC0")]
	public static int4 int4(uint v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x63A0FD0", Offset = "0x639FFD0", VA = "0x63A0FD0")]
	public static int4 int4(uint4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x63A0FE0", Offset = "0x639FFE0", VA = "0x63A0FE0")]
	public static int4 int4(float v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x63A1000", Offset = "0x63A0000", VA = "0x63A1000")]
	public static int4 int4(float4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x63A1030", Offset = "0x63A0030", VA = "0x63A1030")]
	public static int4 int4(double v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x63A1050", Offset = "0x63A0050", VA = "0x63A1050")]
	public static int4 int4(double4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x63A1090", Offset = "0x63A0090", VA = "0x63A1090")]
	public static uint hash(int4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x63A10D0", Offset = "0x63A00D0", VA = "0x63A10D0")]
	public static uint4 hashwide(int4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x63A1130", Offset = "0x63A0130", VA = "0x63A1130")]
	public static int shuffle(int4 left, int4 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x63A1140", Offset = "0x63A0140", VA = "0x63A1140")]
	public static int2 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x63A11A0", Offset = "0x63A01A0", VA = "0x63A11A0")]
	public static int3 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x63A1220", Offset = "0x63A0220", VA = "0x63A1220")]
	public static int4 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x63A12D0", Offset = "0x63A02D0", VA = "0x63A12D0")]
	internal static int select_shuffle_component(int4 a, int4 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x63A13C0", Offset = "0x63A03C0", VA = "0x63A13C0")]
	public static int4x2 int4x2(int4 c0, int4 c1)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x63A13E0", Offset = "0x63A03E0", VA = "0x63A13E0")]
	public static int4x2 int4x2(int m00, int m01, int m10, int m11, int m20, int m21, int m30, int m31)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x63A1410", Offset = "0x63A0410", VA = "0x63A1410")]
	public static int4x2 int4x2(int v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x63A1430", Offset = "0x63A0430", VA = "0x63A1430")]
	public static int4x2 int4x2(bool v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x63A1460", Offset = "0x63A0460", VA = "0x63A1460")]
	public static int4x2 int4x2(bool4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000300")]
	[Address(RVA = "0x63A14E0", Offset = "0x63A04E0", VA = "0x63A14E0")]
	public static int4x2 int4x2(uint v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000301")]
	[Address(RVA = "0x63A1500", Offset = "0x63A0500", VA = "0x63A1500")]
	public static int4x2 int4x2(uint4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000302")]
	[Address(RVA = "0x63A1520", Offset = "0x63A0520", VA = "0x63A1520")]
	public static int4x2 int4x2(float v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000303")]
	[Address(RVA = "0x63A1550", Offset = "0x63A0550", VA = "0x63A1550")]
	public static int4x2 int4x2(float4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000304")]
	[Address(RVA = "0x63A15B0", Offset = "0x63A05B0", VA = "0x63A15B0")]
	public static int4x2 int4x2(double v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000305")]
	[Address(RVA = "0x63A15E0", Offset = "0x63A05E0", VA = "0x63A15E0")]
	public static int4x2 int4x2(double4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000306")]
	[Address(RVA = "0x63A1640", Offset = "0x63A0640", VA = "0x63A1640")]
	public static int2x4 transpose(int4x2 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000307")]
	[Address(RVA = "0x63A1690", Offset = "0x63A0690", VA = "0x63A1690")]
	public static uint hash(int4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000308")]
	[Address(RVA = "0x63A1720", Offset = "0x63A0720", VA = "0x63A1720")]
	public static uint4 hashwide(int4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000309")]
	[Address(RVA = "0x63A17C0", Offset = "0x63A07C0", VA = "0x63A17C0")]
	public static int4x3 int4x3(int4 c0, int4 c1, int4 c2)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030A")]
	[Address(RVA = "0x63A17E0", Offset = "0x63A07E0", VA = "0x63A17E0")]
	public static int4x3 int4x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22, int m30, int m31, int m32)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030B")]
	[Address(RVA = "0x63A1840", Offset = "0x63A0840", VA = "0x63A1840")]
	public static int4x3 int4x3(int v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030C")]
	[Address(RVA = "0x63A1870", Offset = "0x63A0870", VA = "0x63A1870")]
	public static int4x3 int4x3(bool v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030D")]
	[Address(RVA = "0x63A18A0", Offset = "0x63A08A0", VA = "0x63A18A0")]
	public static int4x3 int4x3(bool4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030E")]
	[Address(RVA = "0x63A1950", Offset = "0x63A0950", VA = "0x63A1950")]
	public static int4x3 int4x3(uint v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030F")]
	[Address(RVA = "0x63A1980", Offset = "0x63A0980", VA = "0x63A1980")]
	public static int4x3 int4x3(uint4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000310")]
	[Address(RVA = "0x63A19A0", Offset = "0x63A09A0", VA = "0x63A19A0")]
	public static int4x3 int4x3(float v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000311")]
	[Address(RVA = "0x63A19D0", Offset = "0x63A09D0", VA = "0x63A19D0")]
	public static int4x3 int4x3(float4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000312")]
	[Address(RVA = "0x63A1A50", Offset = "0x63A0A50", VA = "0x63A1A50")]
	public static int4x3 int4x3(double v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000313")]
	[Address(RVA = "0x63A1A80", Offset = "0x63A0A80", VA = "0x63A1A80")]
	public static int4x3 int4x3(double4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000314")]
	[Address(RVA = "0x63A1B00", Offset = "0x63A0B00", VA = "0x63A1B00")]
	public static int3x4 transpose(int4x3 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000315")]
	[Address(RVA = "0x63A1B70", Offset = "0x63A0B70", VA = "0x63A1B70")]
	public static uint hash(int4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000316")]
	[Address(RVA = "0x63A1C50", Offset = "0x63A0C50", VA = "0x63A1C50")]
	public static uint4 hashwide(int4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000317")]
	[Address(RVA = "0x63A1D30", Offset = "0x63A0D30", VA = "0x63A1D30")]
	public static int4x4 int4x4(int4 c0, int4 c1, int4 c2, int4 c3)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000318")]
	[Address(RVA = "0x63A1D60", Offset = "0x63A0D60", VA = "0x63A1D60")]
	public static int4x4 int4x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23, int m30, int m31, int m32, int m33)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000319")]
	[Address(RVA = "0x63A1DD0", Offset = "0x63A0DD0", VA = "0x63A1DD0")]
	public static int4x4 int4x4(int v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031A")]
	[Address(RVA = "0x63A1E00", Offset = "0x63A0E00", VA = "0x63A1E00")]
	public static int4x4 int4x4(bool v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031B")]
	[Address(RVA = "0x63A1E40", Offset = "0x63A0E40", VA = "0x63A1E40")]
	public static int4x4 int4x4(bool4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031C")]
	[Address(RVA = "0x63A1F20", Offset = "0x63A0F20", VA = "0x63A1F20")]
	public static int4x4 int4x4(uint v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031D")]
	[Address(RVA = "0x63A1F50", Offset = "0x63A0F50", VA = "0x63A1F50")]
	public static int4x4 int4x4(uint4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031E")]
	[Address(RVA = "0x63A1F80", Offset = "0x63A0F80", VA = "0x63A1F80")]
	public static int4x4 int4x4(float v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031F")]
	[Address(RVA = "0x63A1FC0", Offset = "0x63A0FC0", VA = "0x63A1FC0")]
	public static int4x4 int4x4(float4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000320")]
	[Address(RVA = "0x63A2070", Offset = "0x63A1070", VA = "0x63A2070")]
	public static int4x4 int4x4(double v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000321")]
	[Address(RVA = "0x63A20B0", Offset = "0x63A10B0", VA = "0x63A20B0")]
	public static int4x4 int4x4(double4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000322")]
	[Address(RVA = "0x63A2160", Offset = "0x63A1160", VA = "0x63A2160")]
	public static int4x4 transpose(int4x4 v)
	{
		return default(int4x4);
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x63A21E0", Offset = "0x63A11E0", VA = "0x63A21E0")]
	public static int determinant(int4x4 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000324")]
	[Address(RVA = "0x63A2300", Offset = "0x63A1300", VA = "0x63A2300")]
	public static uint hash(int4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000325")]
	[Address(RVA = "0x63A2410", Offset = "0x63A1410", VA = "0x63A2410")]
	public static uint4 hashwide(int4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000326")]
	[Address(RVA = "0x63A2540", Offset = "0x63A1540", VA = "0x63A2540")]
	public static int asint(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000327")]
	[Address(RVA = "0x63A2550", Offset = "0x63A1550", VA = "0x63A2550")]
	public static int2 asint(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000328")]
	[Address(RVA = "0x63A2560", Offset = "0x63A1560", VA = "0x63A2560")]
	public static int3 asint(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000329")]
	[Address(RVA = "0x63A2570", Offset = "0x63A1570", VA = "0x63A2570")]
	public static int4 asint(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032A")]
	[Address(RVA = "0x63A2580", Offset = "0x63A1580", VA = "0x63A2580")]
	public static int asint(float x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032B")]
	[Address(RVA = "0x63A2590", Offset = "0x63A1590", VA = "0x63A2590")]
	public static int2 asint(float2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032C")]
	[Address(RVA = "0x63A25A0", Offset = "0x63A15A0", VA = "0x63A25A0")]
	public static int3 asint(float3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032D")]
	[Address(RVA = "0x63A25B0", Offset = "0x63A15B0", VA = "0x63A25B0")]
	public static int4 asint(float4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032E")]
	[Address(RVA = "0x63A25C0", Offset = "0x63A15C0", VA = "0x63A25C0")]
	public static uint asuint(int x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032F")]
	[Address(RVA = "0x63A25D0", Offset = "0x63A15D0", VA = "0x63A25D0")]
	public static uint2 asuint(int2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000330")]
	[Address(RVA = "0x63A25E0", Offset = "0x63A15E0", VA = "0x63A25E0")]
	public static uint3 asuint(int3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000331")]
	[Address(RVA = "0x63A25F0", Offset = "0x63A15F0", VA = "0x63A25F0")]
	public static uint4 asuint(int4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000332")]
	[Address(RVA = "0x63A2600", Offset = "0x63A1600", VA = "0x63A2600")]
	public static uint asuint(float x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000333")]
	[Address(RVA = "0x63A2610", Offset = "0x63A1610", VA = "0x63A2610")]
	public static uint2 asuint(float2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000334")]
	[Address(RVA = "0x63A2620", Offset = "0x63A1620", VA = "0x63A2620")]
	public static uint3 asuint(float3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000335")]
	[Address(RVA = "0x63A2630", Offset = "0x63A1630", VA = "0x63A2630")]
	public static uint4 asuint(float4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000336")]
	[Address(RVA = "0x63A2640", Offset = "0x63A1640", VA = "0x63A2640")]
	public static long aslong(ulong x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000337")]
	[Address(RVA = "0x63A2650", Offset = "0x63A1650", VA = "0x63A2650")]
	public static long aslong(double x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000338")]
	[Address(RVA = "0x63A2660", Offset = "0x63A1660", VA = "0x63A2660")]
	public static ulong asulong(long x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000339")]
	[Address(RVA = "0x63A2670", Offset = "0x63A1670", VA = "0x63A2670")]
	public static ulong asulong(double x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033A")]
	[Address(RVA = "0x63A2680", Offset = "0x63A1680", VA = "0x63A2680")]
	public static float asfloat(int x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033B")]
	[Address(RVA = "0x63A2690", Offset = "0x63A1690", VA = "0x63A2690")]
	public static float2 asfloat(int2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033C")]
	[Address(RVA = "0x63A26A0", Offset = "0x63A16A0", VA = "0x63A26A0")]
	public static float3 asfloat(int3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033D")]
	[Address(RVA = "0x63A26B0", Offset = "0x63A16B0", VA = "0x63A26B0")]
	public static float4 asfloat(int4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033E")]
	[Address(RVA = "0x63A26C0", Offset = "0x63A16C0", VA = "0x63A26C0")]
	public static float asfloat(uint x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033F")]
	[Address(RVA = "0x63A26D0", Offset = "0x63A16D0", VA = "0x63A26D0")]
	public static float2 asfloat(uint2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000340")]
	[Address(RVA = "0x63A26E0", Offset = "0x63A16E0", VA = "0x63A26E0")]
	public static float3 asfloat(uint3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000341")]
	[Address(RVA = "0x63A26F0", Offset = "0x63A16F0", VA = "0x63A26F0")]
	public static float4 asfloat(uint4 x)
	{
		return default(float4);
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x63A2700", Offset = "0x63A1700", VA = "0x63A2700")]
	public static int bitmask(bool4 value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000343")]
	[Address(RVA = "0x63A2730", Offset = "0x63A1730", VA = "0x63A2730")]
	public static double asdouble(long x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000344")]
	[Address(RVA = "0x63A2740", Offset = "0x63A1740", VA = "0x63A2740")]
	public static double asdouble(ulong x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000345")]
	[Address(RVA = "0x63A2750", Offset = "0x63A1750", VA = "0x63A2750")]
	public static bool isfinite(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x63A2770", Offset = "0x63A1770", VA = "0x63A2770")]
	public static bool2 isfinite(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000347")]
	[Address(RVA = "0x63A27C0", Offset = "0x63A17C0", VA = "0x63A27C0")]
	public static bool3 isfinite(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000348")]
	[Address(RVA = "0x63A2820", Offset = "0x63A1820", VA = "0x63A2820")]
	public static bool4 isfinite(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000349")]
	[Address(RVA = "0x63A28B0", Offset = "0x63A18B0", VA = "0x63A28B0")]
	public static bool isfinite(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034A")]
	[Address(RVA = "0x63A28D0", Offset = "0x63A18D0", VA = "0x63A28D0")]
	public static bool2 isfinite(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034B")]
	[Address(RVA = "0x63A2900", Offset = "0x63A1900", VA = "0x63A2900")]
	public static bool3 isfinite(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034C")]
	[Address(RVA = "0x63A2960", Offset = "0x63A1960", VA = "0x63A2960")]
	public static bool4 isfinite(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034D")]
	[Address(RVA = "0x63A29D0", Offset = "0x63A19D0", VA = "0x63A29D0")]
	public static bool isinf(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034E")]
	[Address(RVA = "0x63A29F0", Offset = "0x63A19F0", VA = "0x63A29F0")]
	public static bool2 isinf(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034F")]
	[Address(RVA = "0x63A2A40", Offset = "0x63A1A40", VA = "0x63A2A40")]
	public static bool3 isinf(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000350")]
	[Address(RVA = "0x63A2AA0", Offset = "0x63A1AA0", VA = "0x63A2AA0")]
	public static bool4 isinf(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000351")]
	[Address(RVA = "0x63A2B30", Offset = "0x63A1B30", VA = "0x63A2B30")]
	public static bool isinf(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000352")]
	[Address(RVA = "0x63A2B50", Offset = "0x63A1B50", VA = "0x63A2B50")]
	public static bool2 isinf(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000353")]
	[Address(RVA = "0x63A2B80", Offset = "0x63A1B80", VA = "0x63A2B80")]
	public static bool3 isinf(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000354")]
	[Address(RVA = "0x63A2BE0", Offset = "0x63A1BE0", VA = "0x63A2BE0")]
	public static bool4 isinf(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000355")]
	[Address(RVA = "0x63A2C50", Offset = "0x63A1C50", VA = "0x63A2C50")]
	public static bool isnan(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000356")]
	[Address(RVA = "0x63A2C70", Offset = "0x63A1C70", VA = "0x63A2C70")]
	public static bool2 isnan(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000357")]
	[Address(RVA = "0x63A2CA0", Offset = "0x63A1CA0", VA = "0x63A2CA0")]
	public static bool3 isnan(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000358")]
	[Address(RVA = "0x63A2CF0", Offset = "0x63A1CF0", VA = "0x63A2CF0")]
	public static bool4 isnan(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000359")]
	[Address(RVA = "0x63A2D40", Offset = "0x63A1D40", VA = "0x63A2D40")]
	public static bool isnan(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035A")]
	[Address(RVA = "0x63A2D70", Offset = "0x63A1D70", VA = "0x63A2D70")]
	public static bool2 isnan(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035B")]
	[Address(RVA = "0x63A2DB0", Offset = "0x63A1DB0", VA = "0x63A2DB0")]
	public static bool3 isnan(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035C")]
	[Address(RVA = "0x63A2E00", Offset = "0x63A1E00", VA = "0x63A2E00")]
	public static bool4 isnan(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035D")]
	[Address(RVA = "0x63A2E70", Offset = "0x63A1E70", VA = "0x63A2E70")]
	public static bool ispow2(int x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035E")]
	[Address(RVA = "0x63A2E80", Offset = "0x63A1E80", VA = "0x63A2E80")]
	public static bool2 ispow2(int2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035F")]
	[Address(RVA = "0x63A2EC0", Offset = "0x63A1EC0", VA = "0x63A2EC0")]
	public static bool3 ispow2(int3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000360")]
	[Address(RVA = "0x63A2F10", Offset = "0x63A1F10", VA = "0x63A2F10")]
	public static bool4 ispow2(int4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000361")]
	[Address(RVA = "0x63A2F80", Offset = "0x63A1F80", VA = "0x63A2F80")]
	public static bool ispow2(uint x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000362")]
	[Address(RVA = "0x63A2F90", Offset = "0x63A1F90", VA = "0x63A2F90")]
	public static bool2 ispow2(uint2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000363")]
	[Address(RVA = "0x63A2FD0", Offset = "0x63A1FD0", VA = "0x63A2FD0")]
	public static bool3 ispow2(uint3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000364")]
	[Address(RVA = "0x63A3020", Offset = "0x63A2020", VA = "0x63A3020")]
	public static bool4 ispow2(uint4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000365")]
	[Address(RVA = "0x63A30A0", Offset = "0x63A20A0", VA = "0x63A30A0")]
	public static int min(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000366")]
	[Address(RVA = "0x63A30B0", Offset = "0x63A20B0", VA = "0x63A30B0")]
	public static int2 min(int2 x, int2 y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000367")]
	[Address(RVA = "0x63A30E0", Offset = "0x63A20E0", VA = "0x63A30E0")]
	public static int3 min(int3 x, int3 y)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000368")]
	[Address(RVA = "0x63A3110", Offset = "0x63A2110", VA = "0x63A3110")]
	public static int4 min(int4 x, int4 y)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000369")]
	[Address(RVA = "0x63A3160", Offset = "0x63A2160", VA = "0x63A3160")]
	public static uint min(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036A")]
	[Address(RVA = "0x63A3170", Offset = "0x63A2170", VA = "0x63A3170")]
	public static uint2 min(uint2 x, uint2 y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036B")]
	[Address(RVA = "0x63A31A0", Offset = "0x63A21A0", VA = "0x63A31A0")]
	public static uint3 min(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036C")]
	[Address(RVA = "0x63A31D0", Offset = "0x63A21D0", VA = "0x63A31D0")]
	public static uint4 min(uint4 x, uint4 y)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036D")]
	[Address(RVA = "0x63A3220", Offset = "0x63A2220", VA = "0x63A3220")]
	public static long min(long x, long y)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036E")]
	[Address(RVA = "0x63A3230", Offset = "0x63A2230", VA = "0x63A3230")]
	public static ulong min(ulong x, ulong y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036F")]
	[Address(RVA = "0x63A3240", Offset = "0x63A2240", VA = "0x63A3240")]
	public static float min(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000370")]
	[Address(RVA = "0x63A3280", Offset = "0x63A2280", VA = "0x63A3280")]
	public static float2 min(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000371")]
	[Address(RVA = "0x63A32B0", Offset = "0x63A22B0", VA = "0x63A32B0")]
	public static float3 min(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000372")]
	[Address(RVA = "0x63A3310", Offset = "0x63A2310", VA = "0x63A3310")]
	public static float4 min(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000373")]
	[Address(RVA = "0x63A3350", Offset = "0x63A2350", VA = "0x63A3350")]
	public static double min(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000374")]
	[Address(RVA = "0x63A33A0", Offset = "0x63A23A0", VA = "0x63A33A0")]
	public static double2 min(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000375")]
	[Address(RVA = "0x63A3420", Offset = "0x63A2420", VA = "0x63A3420")]
	public static double3 min(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000376")]
	[Address(RVA = "0x63A34E0", Offset = "0x63A24E0", VA = "0x63A34E0")]
	public static double4 min(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000377")]
	[Address(RVA = "0x63A35B0", Offset = "0x63A25B0", VA = "0x63A35B0")]
	public static int max(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000378")]
	[Address(RVA = "0x63A35C0", Offset = "0x63A25C0", VA = "0x63A35C0")]
	public static int2 max(int2 x, int2 y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000379")]
	[Address(RVA = "0x63A35F0", Offset = "0x63A25F0", VA = "0x63A35F0")]
	public static int3 max(int3 x, int3 y)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037A")]
	[Address(RVA = "0x63A3620", Offset = "0x63A2620", VA = "0x63A3620")]
	public static int4 max(int4 x, int4 y)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037B")]
	[Address(RVA = "0x63A3670", Offset = "0x63A2670", VA = "0x63A3670")]
	public static uint max(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037C")]
	[Address(RVA = "0x63A3680", Offset = "0x63A2680", VA = "0x63A3680")]
	public static uint2 max(uint2 x, uint2 y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037D")]
	[Address(RVA = "0x63A36B0", Offset = "0x63A26B0", VA = "0x63A36B0")]
	public static uint3 max(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037E")]
	[Address(RVA = "0x63A36E0", Offset = "0x63A26E0", VA = "0x63A36E0")]
	public static uint4 max(uint4 x, uint4 y)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037F")]
	[Address(RVA = "0x63A3730", Offset = "0x63A2730", VA = "0x63A3730")]
	public static long max(long x, long y)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000380")]
	[Address(RVA = "0x63A3740", Offset = "0x63A2740", VA = "0x63A3740")]
	public static ulong max(ulong x, ulong y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000381")]
	[Address(RVA = "0x63A3750", Offset = "0x63A2750", VA = "0x63A3750")]
	public static float max(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000382")]
	[Address(RVA = "0x63A3780", Offset = "0x63A2780", VA = "0x63A3780")]
	public static float2 max(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000383")]
	[Address(RVA = "0x63A37C0", Offset = "0x63A27C0", VA = "0x63A37C0")]
	public static float3 max(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000384")]
	[Address(RVA = "0x63A3820", Offset = "0x63A2820", VA = "0x63A3820")]
	public static float4 max(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000385")]
	[Address(RVA = "0x63A3860", Offset = "0x63A2860", VA = "0x63A3860")]
	public static double max(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000386")]
	[Address(RVA = "0x63A38B0", Offset = "0x63A28B0", VA = "0x63A38B0")]
	public static double2 max(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000387")]
	[Address(RVA = "0x63A3930", Offset = "0x63A2930", VA = "0x63A3930")]
	public static double3 max(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000388")]
	[Address(RVA = "0x63A39F0", Offset = "0x63A29F0", VA = "0x63A39F0")]
	public static double4 max(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000389")]
	[Address(RVA = "0x63A3AC0", Offset = "0x63A2AC0", VA = "0x63A3AC0")]
	public static float lerp(float start, float end, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038A")]
	[Address(RVA = "0x63A3AD0", Offset = "0x63A2AD0", VA = "0x63A3AD0")]
	public static float2 lerp(float2 start, float2 end, float t)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038B")]
	[Address(RVA = "0x63A3AE0", Offset = "0x63A2AE0", VA = "0x63A3AE0")]
	public static float3 lerp(float3 start, float3 end, float t)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038C")]
	[Address(RVA = "0x63A3B00", Offset = "0x63A2B00", VA = "0x63A3B00")]
	public static float4 lerp(float4 start, float4 end, float t)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038D")]
	[Address(RVA = "0x63A3B20", Offset = "0x63A2B20", VA = "0x63A3B20")]
	public static float2 lerp(float2 start, float2 end, float2 t)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038E")]
	[Address(RVA = "0x63A3B30", Offset = "0x63A2B30", VA = "0x63A3B30")]
	public static float3 lerp(float3 start, float3 end, float3 t)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038F")]
	[Address(RVA = "0x63A3B50", Offset = "0x63A2B50", VA = "0x63A3B50")]
	public static float4 lerp(float4 start, float4 end, float4 t)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000390")]
	[Address(RVA = "0x63A3B70", Offset = "0x63A2B70", VA = "0x63A3B70")]
	public static double lerp(double start, double end, double t)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000391")]
	[Address(RVA = "0x63A3B80", Offset = "0x63A2B80", VA = "0x63A3B80")]
	public static double2 lerp(double2 start, double2 end, double t)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000392")]
	[Address(RVA = "0x63A3BB0", Offset = "0x63A2BB0", VA = "0x63A3BB0")]
	public static double3 lerp(double3 start, double3 end, double t)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000393")]
	[Address(RVA = "0x63A3C00", Offset = "0x63A2C00", VA = "0x63A3C00")]
	public static double4 lerp(double4 start, double4 end, double t)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000394")]
	[Address(RVA = "0x63A3C50", Offset = "0x63A2C50", VA = "0x63A3C50")]
	public static double2 lerp(double2 start, double2 end, double2 t)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000395")]
	[Address(RVA = "0x63A3C80", Offset = "0x63A2C80", VA = "0x63A3C80")]
	public static double3 lerp(double3 start, double3 end, double3 t)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000396")]
	[Address(RVA = "0x63A3CD0", Offset = "0x63A2CD0", VA = "0x63A3CD0")]
	public static double4 lerp(double4 start, double4 end, double4 t)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000397")]
	[Address(RVA = "0x63A3D20", Offset = "0x63A2D20", VA = "0x63A3D20")]
	public static float unlerp(float start, float end, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000398")]
	[Address(RVA = "0x63A3D30", Offset = "0x63A2D30", VA = "0x63A3D30")]
	public static float2 unlerp(float2 start, float2 end, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000399")]
	[Address(RVA = "0x63A3D60", Offset = "0x63A2D60", VA = "0x63A3D60")]
	public static float3 unlerp(float3 start, float3 end, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039A")]
	[Address(RVA = "0x63A3D80", Offset = "0x63A2D80", VA = "0x63A3D80")]
	public static float4 unlerp(float4 start, float4 end, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039B")]
	[Address(RVA = "0x63A3DA0", Offset = "0x63A2DA0", VA = "0x63A3DA0")]
	public static double unlerp(double start, double end, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039C")]
	[Address(RVA = "0x63A3DC0", Offset = "0x63A2DC0", VA = "0x63A3DC0")]
	public static double2 unlerp(double2 start, double2 end, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039D")]
	[Address(RVA = "0x63A3DF0", Offset = "0x63A2DF0", VA = "0x63A3DF0")]
	public static double3 unlerp(double3 start, double3 end, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039E")]
	[Address(RVA = "0x63A3E40", Offset = "0x63A2E40", VA = "0x63A3E40")]
	public static double4 unlerp(double4 start, double4 end, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039F")]
	[Address(RVA = "0x63A3E90", Offset = "0x63A2E90", VA = "0x63A3E90")]
	public static float remap(float srcStart, float srcEnd, float dstStart, float dstEnd, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x63A3EB0", Offset = "0x63A2EB0", VA = "0x63A3EB0")]
	public static float2 remap(float2 srcStart, float2 srcEnd, float2 dstStart, float2 dstEnd, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x63A3EF0", Offset = "0x63A2EF0", VA = "0x63A3EF0")]
	public static float3 remap(float3 srcStart, float3 srcEnd, float3 dstStart, float3 dstEnd, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x63A3F40", Offset = "0x63A2F40", VA = "0x63A3F40")]
	public static float4 remap(float4 srcStart, float4 srcEnd, float4 dstStart, float4 dstEnd, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x63A3F80", Offset = "0x63A2F80", VA = "0x63A3F80")]
	public static double remap(double srcStart, double srcEnd, double dstStart, double dstEnd, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x63A3FA0", Offset = "0x63A2FA0", VA = "0x63A3FA0")]
	public static double2 remap(double2 srcStart, double2 srcEnd, double2 dstStart, double2 dstEnd, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x63A3FE0", Offset = "0x63A2FE0", VA = "0x63A3FE0")]
	public static double3 remap(double3 srcStart, double3 srcEnd, double3 dstStart, double3 dstEnd, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x63A4060", Offset = "0x63A3060", VA = "0x63A4060")]
	public static double4 remap(double4 srcStart, double4 srcEnd, double4 dstStart, double4 dstEnd, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x63A40E0", Offset = "0x63A30E0", VA = "0x63A40E0")]
	public static int mad(int mulA, int mulB, int addC)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x63A40F0", Offset = "0x63A30F0", VA = "0x63A40F0")]
	public static int2 mad(int2 mulA, int2 mulB, int2 addC)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x63A4120", Offset = "0x63A3120", VA = "0x63A4120")]
	public static int3 mad(int3 mulA, int3 mulB, int3 addC)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x63A4150", Offset = "0x63A3150", VA = "0x63A4150")]
	public static int4 mad(int4 mulA, int4 mulB, int4 addC)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x63A41A0", Offset = "0x63A31A0", VA = "0x63A41A0")]
	public static uint mad(uint mulA, uint mulB, uint addC)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x63A41B0", Offset = "0x63A31B0", VA = "0x63A41B0")]
	public static uint2 mad(uint2 mulA, uint2 mulB, uint2 addC)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x63A41E0", Offset = "0x63A31E0", VA = "0x63A41E0")]
	public static uint3 mad(uint3 mulA, uint3 mulB, uint3 addC)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x63A4210", Offset = "0x63A3210", VA = "0x63A4210")]
	public static uint4 mad(uint4 mulA, uint4 mulB, uint4 addC)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x63A4260", Offset = "0x63A3260", VA = "0x63A4260")]
	public static long mad(long mulA, long mulB, long addC)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x63A4270", Offset = "0x63A3270", VA = "0x63A4270")]
	public static ulong mad(ulong mulA, ulong mulB, ulong addC)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x63A4280", Offset = "0x63A3280", VA = "0x63A4280")]
	public static float mad(float mulA, float mulB, float addC)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x63A4290", Offset = "0x63A3290", VA = "0x63A4290")]
	public static float2 mad(float2 mulA, float2 mulB, float2 addC)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x63A42A0", Offset = "0x63A32A0", VA = "0x63A42A0")]
	public static float3 mad(float3 mulA, float3 mulB, float3 addC)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x63A42B0", Offset = "0x63A32B0", VA = "0x63A42B0")]
	public static float4 mad(float4 mulA, float4 mulB, float4 addC)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x63A42C0", Offset = "0x63A32C0", VA = "0x63A42C0")]
	public static double mad(double mulA, double mulB, double addC)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x63A42D0", Offset = "0x63A32D0", VA = "0x63A42D0")]
	public static double2 mad(double2 mulA, double2 mulB, double2 addC)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x63A42F0", Offset = "0x63A32F0", VA = "0x63A42F0")]
	public static double3 mad(double3 mulA, double3 mulB, double3 addC)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x63A4330", Offset = "0x63A3330", VA = "0x63A4330")]
	public static double4 mad(double4 mulA, double4 mulB, double4 addC)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x63A4370", Offset = "0x63A3370", VA = "0x63A4370")]
	public static int clamp(int valueToClamp, int lowerBound, int upperBound)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x63A4380", Offset = "0x63A3380", VA = "0x63A4380")]
	public static int2 clamp(int2 valueToClamp, int2 lowerBound, int2 upperBound)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x63A43C0", Offset = "0x63A33C0", VA = "0x63A43C0")]
	public static int3 clamp(int3 valueToClamp, int3 lowerBound, int3 upperBound)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x63A4410", Offset = "0x63A3410", VA = "0x63A4410")]
	public static int4 clamp(int4 valueToClamp, int4 lowerBound, int4 upperBound)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x63A4490", Offset = "0x63A3490", VA = "0x63A4490")]
	public static uint clamp(uint valueToClamp, uint lowerBound, uint upperBound)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x63A44A0", Offset = "0x63A34A0", VA = "0x63A44A0")]
	public static uint2 clamp(uint2 valueToClamp, uint2 lowerBound, uint2 upperBound)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x63A44E0", Offset = "0x63A34E0", VA = "0x63A44E0")]
	public static uint3 clamp(uint3 valueToClamp, uint3 lowerBound, uint3 upperBound)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x63A4530", Offset = "0x63A3530", VA = "0x63A4530")]
	public static uint4 clamp(uint4 valueToClamp, uint4 lowerBound, uint4 upperBound)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x63A45B0", Offset = "0x63A35B0", VA = "0x63A45B0")]
	public static long clamp(long valueToClamp, long lowerBound, long upperBound)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x63A45D0", Offset = "0x63A35D0", VA = "0x63A45D0")]
	public static ulong clamp(ulong valueToClamp, ulong lowerBound, ulong upperBound)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x63A45F0", Offset = "0x63A35F0", VA = "0x63A45F0")]
	public static float clamp(float valueToClamp, float lowerBound, float upperBound)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x63A4650", Offset = "0x63A3650", VA = "0x63A4650")]
	public static float2 clamp(float2 valueToClamp, float2 lowerBound, float2 upperBound)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x63A46B0", Offset = "0x63A36B0", VA = "0x63A46B0")]
	public static float3 clamp(float3 valueToClamp, float3 lowerBound, float3 upperBound)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x63A4750", Offset = "0x63A3750", VA = "0x63A4750")]
	public static float4 clamp(float4 valueToClamp, float4 lowerBound, float4 upperBound)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x63A47B0", Offset = "0x63A37B0", VA = "0x63A47B0")]
	public static double clamp(double valueToClamp, double lowerBound, double upperBound)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x63A4830", Offset = "0x63A3830", VA = "0x63A4830")]
	public static double2 clamp(double2 valueToClamp, double2 lowerBound, double2 upperBound)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x63A48D0", Offset = "0x63A38D0", VA = "0x63A48D0")]
	public static double3 clamp(double3 valueToClamp, double3 lowerBound, double3 upperBound)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x63A4A20", Offset = "0x63A3A20", VA = "0x63A4A20")]
	public static double4 clamp(double4 valueToClamp, double4 lowerBound, double4 upperBound)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x63A4B90", Offset = "0x63A3B90", VA = "0x63A4B90")]
	public static float saturate(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x63A4BF0", Offset = "0x63A3BF0", VA = "0x63A4BF0")]
	public static float2 saturate(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x63A4C50", Offset = "0x63A3C50", VA = "0x63A4C50")]
	public static float3 saturate(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x63A4D10", Offset = "0x63A3D10", VA = "0x63A4D10")]
	public static float4 saturate(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x63A4D70", Offset = "0x63A3D70", VA = "0x63A4D70")]
	public static double saturate(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x63A4DF0", Offset = "0x63A3DF0", VA = "0x63A4DF0")]
	public static double2 saturate(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x63A4EC0", Offset = "0x63A3EC0", VA = "0x63A4EC0")]
	public static double3 saturate(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x63A5000", Offset = "0x63A4000", VA = "0x63A5000")]
	public static double4 saturate(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x63A5150", Offset = "0x63A4150", VA = "0x63A5150")]
	public static int abs(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x63A5160", Offset = "0x63A4160", VA = "0x63A5160")]
	public static int2 abs(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x63A51A0", Offset = "0x63A41A0", VA = "0x63A51A0")]
	public static int3 abs(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x63A51E0", Offset = "0x63A41E0", VA = "0x63A51E0")]
	public static int4 abs(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x63A5250", Offset = "0x63A4250", VA = "0x63A5250")]
	public static long abs(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x63A5260", Offset = "0x63A4260", VA = "0x63A5260")]
	public static float abs(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x63A5270", Offset = "0x63A4270", VA = "0x63A5270")]
	public static float2 abs(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x63A52A0", Offset = "0x63A42A0", VA = "0x63A52A0")]
	public static float3 abs(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x63A52D0", Offset = "0x63A42D0", VA = "0x63A52D0")]
	public static float4 abs(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x63A5320", Offset = "0x63A4320", VA = "0x63A5320")]
	public static double abs(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x63A5330", Offset = "0x63A4330", VA = "0x63A5330")]
	public static double2 abs(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x63A5350", Offset = "0x63A4350", VA = "0x63A5350")]
	public static double3 abs(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x63A5380", Offset = "0x63A4380", VA = "0x63A5380")]
	public static double4 abs(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x63A53A0", Offset = "0x63A43A0", VA = "0x63A53A0")]
	public static int dot(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x63A53B0", Offset = "0x63A43B0", VA = "0x63A53B0")]
	public static int dot(int2 x, int2 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x63A53D0", Offset = "0x63A43D0", VA = "0x63A53D0")]
	public static int dot(int3 x, int3 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x63A53F0", Offset = "0x63A43F0", VA = "0x63A53F0")]
	public static int dot(int4 x, int4 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x63A5420", Offset = "0x63A4420", VA = "0x63A5420")]
	public static uint dot(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x63A5430", Offset = "0x63A4430", VA = "0x63A5430")]
	public static uint dot(uint2 x, uint2 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x63A5450", Offset = "0x63A4450", VA = "0x63A5450")]
	public static uint dot(uint3 x, uint3 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x63A5470", Offset = "0x63A4470", VA = "0x63A5470")]
	public static uint dot(uint4 x, uint4 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x63A54A0", Offset = "0x63A44A0", VA = "0x63A54A0")]
	public static float dot(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x63A54B0", Offset = "0x63A44B0", VA = "0x63A54B0")]
	public static float dot(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x63A54C0", Offset = "0x63A44C0", VA = "0x63A54C0")]
	public static float dot(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x63A54E0", Offset = "0x63A44E0", VA = "0x63A54E0")]
	public static float dot(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x63A5500", Offset = "0x63A4500", VA = "0x63A5500")]
	public static double dot(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x63A5510", Offset = "0x63A4510", VA = "0x63A5510")]
	public static double dot(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x63A5520", Offset = "0x63A4520", VA = "0x63A5520")]
	public static double dot(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x63A5550", Offset = "0x63A4550", VA = "0x63A5550")]
	public static double dot(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x63A5590", Offset = "0x63A4590", VA = "0x63A5590")]
	public static float tan(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x63A55F0", Offset = "0x63A45F0", VA = "0x63A55F0")]
	public static float2 tan(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x63A56C0", Offset = "0x63A46C0", VA = "0x63A56C0")]
	public static float3 tan(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x63A5830", Offset = "0x63A4830", VA = "0x63A5830")]
	public static float4 tan(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x63A5A00", Offset = "0x63A4A00", VA = "0x63A5A00")]
	public static double tan(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x63A5A70", Offset = "0x63A4A70", VA = "0x63A5A70")]
	public static double2 tan(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x63A5B60", Offset = "0x63A4B60", VA = "0x63A5B60")]
	public static double3 tan(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x63A5CE0", Offset = "0x63A4CE0", VA = "0x63A5CE0")]
	public static double4 tan(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x63A5ED0", Offset = "0x63A4ED0", VA = "0x63A5ED0")]
	public static float tanh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x63A5F30", Offset = "0x63A4F30", VA = "0x63A5F30")]
	public static float2 tanh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x63A6000", Offset = "0x63A5000", VA = "0x63A6000")]
	public static float3 tanh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x63A6170", Offset = "0x63A5170", VA = "0x63A6170")]
	public static float4 tanh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x63A6340", Offset = "0x63A5340", VA = "0x63A6340")]
	public static double tanh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x63A63B0", Offset = "0x63A53B0", VA = "0x63A63B0")]
	public static double2 tanh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x63A64A0", Offset = "0x63A54A0", VA = "0x63A64A0")]
	public static double3 tanh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x63A6620", Offset = "0x63A5620", VA = "0x63A6620")]
	public static double4 tanh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000400")]
	[Address(RVA = "0x63A6810", Offset = "0x63A5810", VA = "0x63A6810")]
	public static float atan(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000401")]
	[Address(RVA = "0x63A6870", Offset = "0x63A5870", VA = "0x63A6870")]
	public static float2 atan(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000402")]
	[Address(RVA = "0x63A6940", Offset = "0x63A5940", VA = "0x63A6940")]
	public static float3 atan(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000403")]
	[Address(RVA = "0x63A6AB0", Offset = "0x63A5AB0", VA = "0x63A6AB0")]
	public static float4 atan(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000404")]
	[Address(RVA = "0x63A6C80", Offset = "0x63A5C80", VA = "0x63A6C80")]
	public static double atan(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000405")]
	[Address(RVA = "0x63A6CF0", Offset = "0x63A5CF0", VA = "0x63A6CF0")]
	public static double2 atan(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000406")]
	[Address(RVA = "0x63A6DE0", Offset = "0x63A5DE0", VA = "0x63A6DE0")]
	public static double3 atan(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000407")]
	[Address(RVA = "0x63A6F60", Offset = "0x63A5F60", VA = "0x63A6F60")]
	public static double4 atan(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000408")]
	[Address(RVA = "0x63A7150", Offset = "0x63A6150", VA = "0x63A7150")]
	public static float atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000409")]
	[Address(RVA = "0x63A71D0", Offset = "0x63A61D0", VA = "0x63A71D0")]
	public static float2 atan2(float2 y, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040A")]
	[Address(RVA = "0x63A72D0", Offset = "0x63A62D0", VA = "0x63A72D0")]
	public static float3 atan2(float3 y, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040B")]
	[Address(RVA = "0x63A7470", Offset = "0x63A6470", VA = "0x63A7470")]
	public static float4 atan2(float4 y, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040C")]
	[Address(RVA = "0x63A7680", Offset = "0x63A6680", VA = "0x63A7680")]
	public static double atan2(double y, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040D")]
	[Address(RVA = "0x63A7710", Offset = "0x63A6710", VA = "0x63A7710")]
	public static double2 atan2(double2 y, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040E")]
	[Address(RVA = "0x63A7820", Offset = "0x63A6820", VA = "0x63A7820")]
	public static double3 atan2(double3 y, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040F")]
	[Address(RVA = "0x63A7A00", Offset = "0x63A6A00", VA = "0x63A7A00")]
	public static double4 atan2(double4 y, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000410")]
	[Address(RVA = "0x63A7C70", Offset = "0x63A6C70", VA = "0x63A7C70")]
	public static float cos(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000411")]
	[Address(RVA = "0x63A7CD0", Offset = "0x63A6CD0", VA = "0x63A7CD0")]
	public static float2 cos(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000412")]
	[Address(RVA = "0x63A7DA0", Offset = "0x63A6DA0", VA = "0x63A7DA0")]
	public static float3 cos(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000413")]
	[Address(RVA = "0x63A7F10", Offset = "0x63A6F10", VA = "0x63A7F10")]
	public static float4 cos(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000414")]
	[Address(RVA = "0x63A80E0", Offset = "0x63A70E0", VA = "0x63A80E0")]
	public static double cos(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000415")]
	[Address(RVA = "0x63A8150", Offset = "0x63A7150", VA = "0x63A8150")]
	public static double2 cos(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000416")]
	[Address(RVA = "0x63A8240", Offset = "0x63A7240", VA = "0x63A8240")]
	public static double3 cos(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000417")]
	[Address(RVA = "0x63A83C0", Offset = "0x63A73C0", VA = "0x63A83C0")]
	public static double4 cos(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000418")]
	[Address(RVA = "0x63A85B0", Offset = "0x63A75B0", VA = "0x63A85B0")]
	public static float cosh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000419")]
	[Address(RVA = "0x63A8610", Offset = "0x63A7610", VA = "0x63A8610")]
	public static float2 cosh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041A")]
	[Address(RVA = "0x63A86E0", Offset = "0x63A76E0", VA = "0x63A86E0")]
	public static float3 cosh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041B")]
	[Address(RVA = "0x63A8850", Offset = "0x63A7850", VA = "0x63A8850")]
	public static float4 cosh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041C")]
	[Address(RVA = "0x63A8A20", Offset = "0x63A7A20", VA = "0x63A8A20")]
	public static double cosh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041D")]
	[Address(RVA = "0x63A8A90", Offset = "0x63A7A90", VA = "0x63A8A90")]
	public static double2 cosh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041E")]
	[Address(RVA = "0x63A8B80", Offset = "0x63A7B80", VA = "0x63A8B80")]
	public static double3 cosh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041F")]
	[Address(RVA = "0x63A8D00", Offset = "0x63A7D00", VA = "0x63A8D00")]
	public static double4 cosh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000420")]
	[Address(RVA = "0x63A8EF0", Offset = "0x63A7EF0", VA = "0x63A8EF0")]
	public static float acos(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000421")]
	[Address(RVA = "0x63A8F50", Offset = "0x63A7F50", VA = "0x63A8F50")]
	public static float2 acos(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000422")]
	[Address(RVA = "0x63A9020", Offset = "0x63A8020", VA = "0x63A9020")]
	public static float3 acos(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000423")]
	[Address(RVA = "0x63A9190", Offset = "0x63A8190", VA = "0x63A9190")]
	public static float4 acos(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000424")]
	[Address(RVA = "0x63A9360", Offset = "0x63A8360", VA = "0x63A9360")]
	public static double acos(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000425")]
	[Address(RVA = "0x63A93D0", Offset = "0x63A83D0", VA = "0x63A93D0")]
	public static double2 acos(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000426")]
	[Address(RVA = "0x63A94C0", Offset = "0x63A84C0", VA = "0x63A94C0")]
	public static double3 acos(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000427")]
	[Address(RVA = "0x63A9640", Offset = "0x63A8640", VA = "0x63A9640")]
	public static double4 acos(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000428")]
	[Address(RVA = "0x63A9830", Offset = "0x63A8830", VA = "0x63A9830")]
	public static float sin(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000429")]
	[Address(RVA = "0x63A9890", Offset = "0x63A8890", VA = "0x63A9890")]
	public static float2 sin(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042A")]
	[Address(RVA = "0x63A9960", Offset = "0x63A8960", VA = "0x63A9960")]
	public static float3 sin(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042B")]
	[Address(RVA = "0x63A9AD0", Offset = "0x63A8AD0", VA = "0x63A9AD0")]
	public static float4 sin(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042C")]
	[Address(RVA = "0x63A9CA0", Offset = "0x63A8CA0", VA = "0x63A9CA0")]
	public static double sin(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042D")]
	[Address(RVA = "0x63A9D10", Offset = "0x63A8D10", VA = "0x63A9D10")]
	public static double2 sin(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042E")]
	[Address(RVA = "0x63A9E00", Offset = "0x63A8E00", VA = "0x63A9E00")]
	public static double3 sin(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042F")]
	[Address(RVA = "0x63A9F80", Offset = "0x63A8F80", VA = "0x63A9F80")]
	public static double4 sin(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000430")]
	[Address(RVA = "0x63AA170", Offset = "0x63A9170", VA = "0x63AA170")]
	public static float sinh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000431")]
	[Address(RVA = "0x63AA1D0", Offset = "0x63A91D0", VA = "0x63AA1D0")]
	public static float2 sinh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000432")]
	[Address(RVA = "0x63AA2A0", Offset = "0x63A92A0", VA = "0x63AA2A0")]
	public static float3 sinh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000433")]
	[Address(RVA = "0x63AA410", Offset = "0x63A9410", VA = "0x63AA410")]
	public static float4 sinh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000434")]
	[Address(RVA = "0x63AA5E0", Offset = "0x63A95E0", VA = "0x63AA5E0")]
	public static double sinh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000435")]
	[Address(RVA = "0x63AA650", Offset = "0x63A9650", VA = "0x63AA650")]
	public static double2 sinh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000436")]
	[Address(RVA = "0x63AA740", Offset = "0x63A9740", VA = "0x63AA740")]
	public static double3 sinh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000437")]
	[Address(RVA = "0x63AA8C0", Offset = "0x63A98C0", VA = "0x63AA8C0")]
	public static double4 sinh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000438")]
	[Address(RVA = "0x63AAAB0", Offset = "0x63A9AB0", VA = "0x63AAAB0")]
	public static float asin(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000439")]
	[Address(RVA = "0x63AAB10", Offset = "0x63A9B10", VA = "0x63AAB10")]
	public static float2 asin(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043A")]
	[Address(RVA = "0x63AABE0", Offset = "0x63A9BE0", VA = "0x63AABE0")]
	public static float3 asin(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043B")]
	[Address(RVA = "0x63AAD50", Offset = "0x63A9D50", VA = "0x63AAD50")]
	public static float4 asin(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043C")]
	[Address(RVA = "0x63AAF20", Offset = "0x63A9F20", VA = "0x63AAF20")]
	public static double asin(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043D")]
	[Address(RVA = "0x63AAF90", Offset = "0x63A9F90", VA = "0x63AAF90")]
	public static double2 asin(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043E")]
	[Address(RVA = "0x63AB080", Offset = "0x63AA080", VA = "0x63AB080")]
	public static double3 asin(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043F")]
	[Address(RVA = "0x63AB200", Offset = "0x63AA200", VA = "0x63AB200")]
	public static double4 asin(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000440")]
	[Address(RVA = "0x63AB3F0", Offset = "0x63AA3F0", VA = "0x63AB3F0")]
	public static float floor(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000441")]
	[Address(RVA = "0x63AB460", Offset = "0x63AA460", VA = "0x63AB460")]
	public static float2 floor(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000442")]
	[Address(RVA = "0x63AB520", Offset = "0x63AA520", VA = "0x63AB520")]
	public static float3 floor(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000443")]
	[Address(RVA = "0x63AB630", Offset = "0x63AA630", VA = "0x63AB630")]
	public static float4 floor(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000444")]
	[Address(RVA = "0x63AB790", Offset = "0x63AA790", VA = "0x63AB790")]
	public static double floor(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000445")]
	[Address(RVA = "0x63AB800", Offset = "0x63AA800", VA = "0x63AB800")]
	public static double2 floor(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000446")]
	[Address(RVA = "0x63AB8C0", Offset = "0x63AA8C0", VA = "0x63AB8C0")]
	public static double3 floor(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000447")]
	[Address(RVA = "0x63ABA40", Offset = "0x63AAA40", VA = "0x63ABA40")]
	public static double4 floor(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000448")]
	[Address(RVA = "0x63ABC40", Offset = "0x63AAC40", VA = "0x63ABC40")]
	public static float ceil(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000449")]
	[Address(RVA = "0x63ABCB0", Offset = "0x63AACB0", VA = "0x63ABCB0")]
	public static float2 ceil(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044A")]
	[Address(RVA = "0x63ABD70", Offset = "0x63AAD70", VA = "0x63ABD70")]
	public static float3 ceil(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044B")]
	[Address(RVA = "0x63ABE80", Offset = "0x63AAE80", VA = "0x63ABE80")]
	public static float4 ceil(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044C")]
	[Address(RVA = "0x63ABFE0", Offset = "0x63AAFE0", VA = "0x63ABFE0")]
	public static double ceil(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044D")]
	[Address(RVA = "0x63AC050", Offset = "0x63AB050", VA = "0x63AC050")]
	public static double2 ceil(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044E")]
	[Address(RVA = "0x63AC110", Offset = "0x63AB110", VA = "0x63AC110")]
	public static double3 ceil(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044F")]
	[Address(RVA = "0x63AC290", Offset = "0x63AB290", VA = "0x63AC290")]
	public static double4 ceil(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000450")]
	[Address(RVA = "0x63AC490", Offset = "0x63AB490", VA = "0x63AC490")]
	public static float round(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000451")]
	[Address(RVA = "0x63AC590", Offset = "0x63AB590", VA = "0x63AC590")]
	public static float2 round(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000452")]
	[Address(RVA = "0x63AC7B0", Offset = "0x63AB7B0", VA = "0x63AC7B0")]
	public static float3 round(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000453")]
	[Address(RVA = "0x63ACB30", Offset = "0x63ABB30", VA = "0x63ACB30")]
	public static float4 round(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000454")]
	[Address(RVA = "0x63ACFC0", Offset = "0x63ABFC0", VA = "0x63ACFC0")]
	public static double round(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000455")]
	[Address(RVA = "0x63AD0A0", Offset = "0x63AC0A0", VA = "0x63AD0A0")]
	public static double2 round(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000456")]
	[Address(RVA = "0x63AD300", Offset = "0x63AC300", VA = "0x63AD300")]
	public static double3 round(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000457")]
	[Address(RVA = "0x63AD620", Offset = "0x63AC620", VA = "0x63AD620")]
	public static double4 round(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000458")]
	[Address(RVA = "0x63ADA50", Offset = "0x63ACA50", VA = "0x63ADA50")]
	public static float trunc(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000459")]
	[Address(RVA = "0x63ADAB0", Offset = "0x63ACAB0", VA = "0x63ADAB0")]
	public static float2 trunc(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045A")]
	[Address(RVA = "0x63ADB80", Offset = "0x63ACB80", VA = "0x63ADB80")]
	public static float3 trunc(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045B")]
	[Address(RVA = "0x63ADCF0", Offset = "0x63ACCF0", VA = "0x63ADCF0")]
	public static float4 trunc(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045C")]
	[Address(RVA = "0x63ADEC0", Offset = "0x63ACEC0", VA = "0x63ADEC0")]
	public static double trunc(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045D")]
	[Address(RVA = "0x63ADF30", Offset = "0x63ACF30", VA = "0x63ADF30")]
	public static double2 trunc(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045E")]
	[Address(RVA = "0x63AE000", Offset = "0x63AD000", VA = "0x63AE000")]
	public static double3 trunc(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045F")]
	[Address(RVA = "0x63AE180", Offset = "0x63AD180", VA = "0x63AE180")]
	public static double4 trunc(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000460")]
	[Address(RVA = "0x63AE380", Offset = "0x63AD380", VA = "0x63AE380")]
	public static float frac(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000461")]
	[Address(RVA = "0x63AE3F0", Offset = "0x63AD3F0", VA = "0x63AE3F0")]
	public static float2 frac(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000462")]
	[Address(RVA = "0x63AE4B0", Offset = "0x63AD4B0", VA = "0x63AE4B0")]
	public static float3 frac(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000463")]
	[Address(RVA = "0x63AE5D0", Offset = "0x63AD5D0", VA = "0x63AE5D0")]
	public static float4 frac(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000464")]
	[Address(RVA = "0x63AE750", Offset = "0x63AD750", VA = "0x63AE750")]
	public static double frac(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000465")]
	[Address(RVA = "0x63AE7C0", Offset = "0x63AD7C0", VA = "0x63AE7C0")]
	public static double2 frac(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000466")]
	[Address(RVA = "0x63AE8A0", Offset = "0x63AD8A0", VA = "0x63AE8A0")]
	public static double3 frac(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000467")]
	[Address(RVA = "0x63AE9D0", Offset = "0x63AD9D0", VA = "0x63AE9D0")]
	public static double4 frac(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000468")]
	[Address(RVA = "0x63AEA40", Offset = "0x63ADA40", VA = "0x63AEA40")]
	public static float rcp(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000469")]
	[Address(RVA = "0x63AEA50", Offset = "0x63ADA50", VA = "0x63AEA50")]
	public static float2 rcp(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046A")]
	[Address(RVA = "0x63AEA60", Offset = "0x63ADA60", VA = "0x63AEA60")]
	public static float3 rcp(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046B")]
	[Address(RVA = "0x63AEA80", Offset = "0x63ADA80", VA = "0x63AEA80")]
	public static float4 rcp(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046C")]
	[Address(RVA = "0x63AEAA0", Offset = "0x63ADAA0", VA = "0x63AEAA0")]
	public static double rcp(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046D")]
	[Address(RVA = "0x63AEAC0", Offset = "0x63ADAC0", VA = "0x63AEAC0")]
	public static double2 rcp(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046E")]
	[Address(RVA = "0x63AEAE0", Offset = "0x63ADAE0", VA = "0x63AEAE0")]
	public static double3 rcp(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046F")]
	[Address(RVA = "0x63AEB10", Offset = "0x63ADB10", VA = "0x63AEB10")]
	public static double4 rcp(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000470")]
	[Address(RVA = "0x63AEB40", Offset = "0x63ADB40", VA = "0x63AEB40")]
	public static int sign(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000471")]
	[Address(RVA = "0x63AEB50", Offset = "0x63ADB50", VA = "0x63AEB50")]
	public static int2 sign(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000472")]
	[Address(RVA = "0x63AEB90", Offset = "0x63ADB90", VA = "0x63AEB90")]
	public static int3 sign(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000473")]
	[Address(RVA = "0x63AEBE0", Offset = "0x63ADBE0", VA = "0x63AEBE0")]
	public static int4 sign(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000474")]
	[Address(RVA = "0x63AEC50", Offset = "0x63ADC50", VA = "0x63AEC50")]
	public static float sign(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000475")]
	[Address(RVA = "0x63AEC90", Offset = "0x63ADC90", VA = "0x63AEC90")]
	public static float2 sign(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000476")]
	[Address(RVA = "0x63AECC0", Offset = "0x63ADCC0", VA = "0x63AECC0")]
	public static float3 sign(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000477")]
	[Address(RVA = "0x63AED20", Offset = "0x63ADD20", VA = "0x63AED20")]
	public static float4 sign(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000478")]
	[Address(RVA = "0x63AED60", Offset = "0x63ADD60", VA = "0x63AED60")]
	public static double sign(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000479")]
	[Address(RVA = "0x63AEDA0", Offset = "0x63ADDA0", VA = "0x63AEDA0")]
	public static double2 sign(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047A")]
	[Address(RVA = "0x63AEE10", Offset = "0x63ADE10", VA = "0x63AEE10")]
	public static double3 sign(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047B")]
	[Address(RVA = "0x63AEED0", Offset = "0x63ADED0", VA = "0x63AEED0")]
	public static double4 sign(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047C")]
	[Address(RVA = "0x63AEFD0", Offset = "0x63ADFD0", VA = "0x63AEFD0")]
	public static float pow(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047D")]
	[Address(RVA = "0x63AF050", Offset = "0x63AE050", VA = "0x63AF050")]
	public static float2 pow(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047E")]
	[Address(RVA = "0x63AF150", Offset = "0x63AE150", VA = "0x63AF150")]
	public static float3 pow(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047F")]
	[Address(RVA = "0x63AF300", Offset = "0x63AE300", VA = "0x63AF300")]
	public static float4 pow(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000480")]
	[Address(RVA = "0x63AF510", Offset = "0x63AE510", VA = "0x63AF510")]
	public static double pow(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000481")]
	[Address(RVA = "0x63AF5B0", Offset = "0x63AE5B0", VA = "0x63AF5B0")]
	public static double2 pow(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000482")]
	[Address(RVA = "0x63AF6C0", Offset = "0x63AE6C0", VA = "0x63AF6C0")]
	public static double3 pow(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000483")]
	[Address(RVA = "0x63AF8A0", Offset = "0x63AE8A0", VA = "0x63AF8A0")]
	public static double4 pow(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000484")]
	[Address(RVA = "0x63AFB20", Offset = "0x63AEB20", VA = "0x63AFB20")]
	public static float exp(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000485")]
	[Address(RVA = "0x63AFB80", Offset = "0x63AEB80", VA = "0x63AFB80")]
	public static float2 exp(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000486")]
	[Address(RVA = "0x63AFC50", Offset = "0x63AEC50", VA = "0x63AFC50")]
	public static float3 exp(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000487")]
	[Address(RVA = "0x63AFDC0", Offset = "0x63AEDC0", VA = "0x63AFDC0")]
	public static float4 exp(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000488")]
	[Address(RVA = "0x63AFF90", Offset = "0x63AEF90", VA = "0x63AFF90")]
	public static double exp(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000489")]
	[Address(RVA = "0x63B0000", Offset = "0x63AF000", VA = "0x63B0000")]
	public static double2 exp(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048A")]
	[Address(RVA = "0x63B00F0", Offset = "0x63AF0F0", VA = "0x63B00F0")]
	public static double3 exp(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048B")]
	[Address(RVA = "0x63B0270", Offset = "0x63AF270", VA = "0x63B0270")]
	public static double4 exp(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048C")]
	[Address(RVA = "0x63B0460", Offset = "0x63AF460", VA = "0x63B0460")]
	public static float exp2(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048D")]
	[Address(RVA = "0x63B04D0", Offset = "0x63AF4D0", VA = "0x63B04D0")]
	public static float2 exp2(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048E")]
	[Address(RVA = "0x63B05C0", Offset = "0x63AF5C0", VA = "0x63B05C0")]
	public static float3 exp2(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048F")]
	[Address(RVA = "0x63B0740", Offset = "0x63AF740", VA = "0x63B0740")]
	public static float4 exp2(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000490")]
	[Address(RVA = "0x63B0930", Offset = "0x63AF930", VA = "0x63B0930")]
	public static double exp2(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000491")]
	[Address(RVA = "0x63B09B0", Offset = "0x63AF9B0", VA = "0x63B09B0")]
	public static double2 exp2(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000492")]
	[Address(RVA = "0x63B0AA0", Offset = "0x63AFAA0", VA = "0x63B0AA0")]
	public static double3 exp2(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000493")]
	[Address(RVA = "0x63B0C30", Offset = "0x63AFC30", VA = "0x63B0C30")]
	public static double4 exp2(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000494")]
	[Address(RVA = "0x63B0E40", Offset = "0x63AFE40", VA = "0x63B0E40")]
	public static float exp10(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000495")]
	[Address(RVA = "0x63B0EB0", Offset = "0x63AFEB0", VA = "0x63B0EB0")]
	public static float2 exp10(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000496")]
	[Address(RVA = "0x63B0FA0", Offset = "0x63AFFA0", VA = "0x63B0FA0")]
	public static float3 exp10(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000497")]
	[Address(RVA = "0x63B1120", Offset = "0x63B0120", VA = "0x63B1120")]
	public static float4 exp10(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000498")]
	[Address(RVA = "0x63B1310", Offset = "0x63B0310", VA = "0x63B1310")]
	public static double exp10(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000499")]
	[Address(RVA = "0x63B1390", Offset = "0x63B0390", VA = "0x63B1390")]
	public static double2 exp10(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049A")]
	[Address(RVA = "0x63B1480", Offset = "0x63B0480", VA = "0x63B1480")]
	public static double3 exp10(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049B")]
	[Address(RVA = "0x63B1610", Offset = "0x63B0610", VA = "0x63B1610")]
	public static double4 exp10(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049C")]
	[Address(RVA = "0x63B1820", Offset = "0x63B0820", VA = "0x63B1820")]
	public static float log(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049D")]
	[Address(RVA = "0x63B1880", Offset = "0x63B0880", VA = "0x63B1880")]
	public static float2 log(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049E")]
	[Address(RVA = "0x63B1950", Offset = "0x63B0950", VA = "0x63B1950")]
	public static float3 log(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049F")]
	[Address(RVA = "0x63B1AC0", Offset = "0x63B0AC0", VA = "0x63B1AC0")]
	public static float4 log(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x63B1C90", Offset = "0x63B0C90", VA = "0x63B1C90")]
	public static double log(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x63B1D00", Offset = "0x63B0D00", VA = "0x63B1D00")]
	public static double2 log(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x63B1DF0", Offset = "0x63B0DF0", VA = "0x63B1DF0")]
	public static double3 log(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x63B1F70", Offset = "0x63B0F70", VA = "0x63B1F70")]
	public static double4 log(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x63B2160", Offset = "0x63B1160", VA = "0x63B2160")]
	public static float log2(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x63B21D0", Offset = "0x63B11D0", VA = "0x63B21D0")]
	public static float2 log2(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x63B22C0", Offset = "0x63B12C0", VA = "0x63B22C0")]
	public static float3 log2(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x63B2450", Offset = "0x63B1450", VA = "0x63B2450")]
	public static float4 log2(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x63B2640", Offset = "0x63B1640", VA = "0x63B2640")]
	public static double log2(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x63B26C0", Offset = "0x63B16C0", VA = "0x63B26C0")]
	public static double2 log2(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x63B27B0", Offset = "0x63B17B0", VA = "0x63B27B0")]
	public static double3 log2(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x63B2940", Offset = "0x63B1940", VA = "0x63B2940")]
	public static double4 log2(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x63B2B60", Offset = "0x63B1B60", VA = "0x63B2B60")]
	public static float log10(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x63B2BC0", Offset = "0x63B1BC0", VA = "0x63B2BC0")]
	public static float2 log10(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x63B2C90", Offset = "0x63B1C90", VA = "0x63B2C90")]
	public static float3 log10(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x63B2E00", Offset = "0x63B1E00", VA = "0x63B2E00")]
	public static float4 log10(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x63B2FD0", Offset = "0x63B1FD0", VA = "0x63B2FD0")]
	public static double log10(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x63B3040", Offset = "0x63B2040", VA = "0x63B3040")]
	public static double2 log10(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x63B3130", Offset = "0x63B2130", VA = "0x63B3130")]
	public static double3 log10(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x63B32B0", Offset = "0x63B22B0", VA = "0x63B32B0")]
	public static double4 log10(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x63B34A0", Offset = "0x63B24A0", VA = "0x63B34A0")]
	public static float fmod(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x63B34B0", Offset = "0x63B24B0", VA = "0x63B34B0")]
	public static float2 fmod(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x63B3500", Offset = "0x63B2500", VA = "0x63B3500")]
	public static float3 fmod(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x63B3570", Offset = "0x63B2570", VA = "0x63B3570")]
	public static float4 fmod(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x63B3610", Offset = "0x63B2610", VA = "0x63B3610")]
	public static double fmod(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x63B3620", Offset = "0x63B2620", VA = "0x63B3620")]
	public static double2 fmod(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x63B3660", Offset = "0x63B2660", VA = "0x63B3660")]
	public static double3 fmod(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x63B3700", Offset = "0x63B2700", VA = "0x63B3700")]
	public static double4 fmod(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x63B37E0", Offset = "0x63B27E0", VA = "0x63B37E0")]
	public static float modf(float x, out float i)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x63B3860", Offset = "0x63B2860", VA = "0x63B3860")]
	public static float2 modf(float2 x, out float2 i)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x63B3950", Offset = "0x63B2950", VA = "0x63B3950")]
	public static float3 modf(float3 x, out float3 i)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x63B3990", Offset = "0x63B2990", VA = "0x63B3990")]
	public static float4 modf(float4 x, out float4 i)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x63B39D0", Offset = "0x63B29D0", VA = "0x63B39D0")]
	public static double modf(double x, out double i)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x63B3A50", Offset = "0x63B2A50", VA = "0x63B3A50")]
	public static double2 modf(double2 x, out double2 i)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x63B3B50", Offset = "0x63B2B50", VA = "0x63B3B50")]
	public static double3 modf(double3 x, out double3 i)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x63B3BC0", Offset = "0x63B2BC0", VA = "0x63B3BC0")]
	public static double4 modf(double4 x, out double4 i)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x63B3C30", Offset = "0x63B2C30", VA = "0x63B3C30")]
	public static float sqrt(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x63B3CB0", Offset = "0x63B2CB0", VA = "0x63B3CB0")]
	public static float2 sqrt(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x63B3DC0", Offset = "0x63B2DC0", VA = "0x63B3DC0")]
	public static float3 sqrt(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x63B3F30", Offset = "0x63B2F30", VA = "0x63B3F30")]
	public static float4 sqrt(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x63B4120", Offset = "0x63B3120", VA = "0x63B4120")]
	public static double sqrt(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x63B41A0", Offset = "0x63B31A0", VA = "0x63B41A0")]
	public static double2 sqrt(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x63B42A0", Offset = "0x63B32A0", VA = "0x63B42A0")]
	public static double3 sqrt(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x63B4470", Offset = "0x63B3470", VA = "0x63B4470")]
	public static double4 sqrt(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x63B46D0", Offset = "0x63B36D0", VA = "0x63B46D0")]
	public static float rsqrt(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x63B4760", Offset = "0x63B3760", VA = "0x63B4760")]
	public static float2 rsqrt(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x63B4870", Offset = "0x63B3870", VA = "0x63B4870")]
	public static float3 rsqrt(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x63B4A00", Offset = "0x63B3A00", VA = "0x63B4A00")]
	public static float4 rsqrt(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x63B4C00", Offset = "0x63B3C00", VA = "0x63B4C00")]
	public static double rsqrt(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x63B4C90", Offset = "0x63B3C90", VA = "0x63B4C90")]
	public static double2 rsqrt(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x63B4DA0", Offset = "0x63B3DA0", VA = "0x63B4DA0")]
	public static double3 rsqrt(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x63B4F50", Offset = "0x63B3F50", VA = "0x63B4F50")]
	public static double4 rsqrt(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x63B4FB0", Offset = "0x63B3FB0", VA = "0x63B4FB0")]
	public static float2 normalize(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x63B5050", Offset = "0x63B4050", VA = "0x63B5050")]
	public static float3 normalize(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x63B5130", Offset = "0x63B4130", VA = "0x63B5130")]
	public static float4 normalize(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x63B5210", Offset = "0x63B4210", VA = "0x63B5210")]
	public static double2 normalize(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x63B52F0", Offset = "0x63B42F0", VA = "0x63B52F0")]
	public static double3 normalize(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x63B53F0", Offset = "0x63B43F0", VA = "0x63B53F0")]
	public static double4 normalize(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x63B54F0", Offset = "0x63B44F0", VA = "0x63B54F0")]
	public static float2 normalizesafe(float2 x, [Optional] float2 defaultvalue)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x63B55C0", Offset = "0x63B45C0", VA = "0x63B55C0")]
	public static float3 normalizesafe(float3 x, [Optional] float3 defaultvalue)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x63B56D0", Offset = "0x63B46D0", VA = "0x63B56D0")]
	public static float4 normalizesafe(float4 x, [Optional] float4 defaultvalue)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x63B57E0", Offset = "0x63B47E0", VA = "0x63B57E0")]
	public static double2 normalizesafe(double2 x, [Optional] double2 defaultvalue)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x63B5910", Offset = "0x63B4910", VA = "0x63B5910")]
	public static double3 normalizesafe(double3 x, [Optional] double3 defaultvalue)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x63B5A70", Offset = "0x63B4A70", VA = "0x63B5A70")]
	public static double4 normalizesafe(double4 x, [Optional] double4 defaultvalue)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x63B5BD0", Offset = "0x63B4BD0", VA = "0x63B5BD0")]
	public static float length(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x63B5BE0", Offset = "0x63B4BE0", VA = "0x63B5BE0")]
	public static float length(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x63B5C70", Offset = "0x63B4C70", VA = "0x63B5C70")]
	public static float length(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x63B5D20", Offset = "0x63B4D20", VA = "0x63B5D20")]
	public static float length(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x63B5DE0", Offset = "0x63B4DE0", VA = "0x63B5DE0")]
	public static double length(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x63B5DF0", Offset = "0x63B4DF0", VA = "0x63B5DF0")]
	public static double length(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x63B5EA0", Offset = "0x63B4EA0", VA = "0x63B5EA0")]
	public static double length(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x63B5F60", Offset = "0x63B4F60", VA = "0x63B5F60")]
	public static double length(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x63B6030", Offset = "0x63B5030", VA = "0x63B6030")]
	public static float lengthsq(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x63B6040", Offset = "0x63B5040", VA = "0x63B6040")]
	public static float lengthsq(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x63B6050", Offset = "0x63B5050", VA = "0x63B6050")]
	public static float lengthsq(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x63B6070", Offset = "0x63B5070", VA = "0x63B6070")]
	public static float lengthsq(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x63B6090", Offset = "0x63B5090", VA = "0x63B6090")]
	public static double lengthsq(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x63B60A0", Offset = "0x63B50A0", VA = "0x63B60A0")]
	public static double lengthsq(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x63B60B0", Offset = "0x63B50B0", VA = "0x63B60B0")]
	public static double lengthsq(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x63B60E0", Offset = "0x63B50E0", VA = "0x63B60E0")]
	public static double lengthsq(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x63B6110", Offset = "0x63B5110", VA = "0x63B6110")]
	public static float distance(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x63B6120", Offset = "0x63B5120", VA = "0x63B6120")]
	public static float distance(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x63B61C0", Offset = "0x63B51C0", VA = "0x63B61C0")]
	public static float distance(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x63B62B0", Offset = "0x63B52B0", VA = "0x63B62B0")]
	public static float distance(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x63B63A0", Offset = "0x63B53A0", VA = "0x63B63A0")]
	public static double distance(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x63B63C0", Offset = "0x63B53C0", VA = "0x63B63C0")]
	public static double distance(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x63B64B0", Offset = "0x63B54B0", VA = "0x63B64B0")]
	public static double distance(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x63B6600", Offset = "0x63B5600", VA = "0x63B6600")]
	public static double distance(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x63B6720", Offset = "0x63B5720", VA = "0x63B6720")]
	public static float distancesq(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x63B6730", Offset = "0x63B5730", VA = "0x63B6730")]
	public static float distancesq(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x63B6750", Offset = "0x63B5750", VA = "0x63B6750")]
	public static float distancesq(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x63B6780", Offset = "0x63B5780", VA = "0x63B6780")]
	public static float distancesq(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x63B67B0", Offset = "0x63B57B0", VA = "0x63B67B0")]
	public static double distancesq(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x63B67C0", Offset = "0x63B57C0", VA = "0x63B67C0")]
	public static double distancesq(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x63B67E0", Offset = "0x63B57E0", VA = "0x63B67E0")]
	public static double distancesq(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x63B6820", Offset = "0x63B5820", VA = "0x63B6820")]
	public static double distancesq(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000500")]
	[Address(RVA = "0x63B6860", Offset = "0x63B5860", VA = "0x63B6860")]
	public static float3 cross(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000501")]
	[Address(RVA = "0x63B68B0", Offset = "0x63B58B0", VA = "0x63B68B0")]
	public static double3 cross(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000502")]
	[Address(RVA = "0x63B6900", Offset = "0x63B5900", VA = "0x63B6900")]
	public static float smoothstep(float xMin, float xMax, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000503")]
	[Address(RVA = "0x63B6980", Offset = "0x63B5980", VA = "0x63B6980")]
	public static float2 smoothstep(float2 xMin, float2 xMax, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000504")]
	[Address(RVA = "0x63B6A20", Offset = "0x63B5A20", VA = "0x63B6A20")]
	public static float3 smoothstep(float3 xMin, float3 xMax, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000505")]
	[Address(RVA = "0x63B6B20", Offset = "0x63B5B20", VA = "0x63B6B20")]
	public static float4 smoothstep(float4 xMin, float4 xMax, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000506")]
	[Address(RVA = "0x63B6BA0", Offset = "0x63B5BA0", VA = "0x63B6BA0")]
	public static double smoothstep(double xMin, double xMax, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000507")]
	[Address(RVA = "0x63B6C40", Offset = "0x63B5C40", VA = "0x63B6C40")]
	public static double2 smoothstep(double2 xMin, double2 xMax, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000508")]
	[Address(RVA = "0x63B6D30", Offset = "0x63B5D30", VA = "0x63B6D30")]
	public static double3 smoothstep(double3 xMin, double3 xMax, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000509")]
	[Address(RVA = "0x63B6ED0", Offset = "0x63B5ED0", VA = "0x63B6ED0")]
	public static double4 smoothstep(double4 xMin, double4 xMax, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050A")]
	[Address(RVA = "0x63B7090", Offset = "0x63B6090", VA = "0x63B7090")]
	public static bool any(bool2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050B")]
	[Address(RVA = "0x63B70A0", Offset = "0x63B60A0", VA = "0x63B70A0")]
	public static bool any(bool3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050C")]
	[Address(RVA = "0x63B70B0", Offset = "0x63B60B0", VA = "0x63B70B0")]
	public static bool any(bool4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050D")]
	[Address(RVA = "0x63B70C0", Offset = "0x63B60C0", VA = "0x63B70C0")]
	public static bool any(int2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050E")]
	[Address(RVA = "0x63B70D0", Offset = "0x63B60D0", VA = "0x63B70D0")]
	public static bool any(int3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050F")]
	[Address(RVA = "0x63B70E0", Offset = "0x63B60E0", VA = "0x63B70E0")]
	public static bool any(int4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000510")]
	[Address(RVA = "0x63B70F0", Offset = "0x63B60F0", VA = "0x63B70F0")]
	public static bool any(uint2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000511")]
	[Address(RVA = "0x63B7100", Offset = "0x63B6100", VA = "0x63B7100")]
	public static bool any(uint3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000512")]
	[Address(RVA = "0x63B7110", Offset = "0x63B6110", VA = "0x63B7110")]
	public static bool any(uint4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000513")]
	[Address(RVA = "0x63B7120", Offset = "0x63B6120", VA = "0x63B7120")]
	public static bool any(float2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000514")]
	[Address(RVA = "0x63B7140", Offset = "0x63B6140", VA = "0x63B7140")]
	public static bool any(float3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000515")]
	[Address(RVA = "0x63B7170", Offset = "0x63B6170", VA = "0x63B7170")]
	public static bool any(float4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000516")]
	[Address(RVA = "0x63B71B0", Offset = "0x63B61B0", VA = "0x63B71B0")]
	public static bool any(double2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000517")]
	[Address(RVA = "0x63B71D0", Offset = "0x63B61D0", VA = "0x63B71D0")]
	public static bool any(double3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000518")]
	[Address(RVA = "0x63B7210", Offset = "0x63B6210", VA = "0x63B7210")]
	public static bool any(double4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000519")]
	[Address(RVA = "0x63B7260", Offset = "0x63B6260", VA = "0x63B7260")]
	public static bool all(bool2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051A")]
	[Address(RVA = "0x63B7270", Offset = "0x63B6270", VA = "0x63B7270")]
	public static bool all(bool3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051B")]
	[Address(RVA = "0x63B7280", Offset = "0x63B6280", VA = "0x63B7280")]
	public static bool all(bool4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051C")]
	[Address(RVA = "0x63B7290", Offset = "0x63B6290", VA = "0x63B7290")]
	public static bool all(int2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051D")]
	[Address(RVA = "0x63B72A0", Offset = "0x63B62A0", VA = "0x63B72A0")]
	public static bool all(int3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051E")]
	[Address(RVA = "0x63B72C0", Offset = "0x63B62C0", VA = "0x63B72C0")]
	public static bool all(int4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051F")]
	[Address(RVA = "0x63B72E0", Offset = "0x63B62E0", VA = "0x63B72E0")]
	public static bool all(uint2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000520")]
	[Address(RVA = "0x63B72F0", Offset = "0x63B62F0", VA = "0x63B72F0")]
	public static bool all(uint3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000521")]
	[Address(RVA = "0x63B7310", Offset = "0x63B6310", VA = "0x63B7310")]
	public static bool all(uint4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000522")]
	[Address(RVA = "0x63B7330", Offset = "0x63B6330", VA = "0x63B7330")]
	public static bool all(float2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000523")]
	[Address(RVA = "0x63B7350", Offset = "0x63B6350", VA = "0x63B7350")]
	public static bool all(float3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000524")]
	[Address(RVA = "0x63B7380", Offset = "0x63B6380", VA = "0x63B7380")]
	public static bool all(float4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000525")]
	[Address(RVA = "0x63B73C0", Offset = "0x63B63C0", VA = "0x63B73C0")]
	public static bool all(double2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000526")]
	[Address(RVA = "0x63B73E0", Offset = "0x63B63E0", VA = "0x63B73E0")]
	public static bool all(double3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000527")]
	[Address(RVA = "0x63B7420", Offset = "0x63B6420", VA = "0x63B7420")]
	public static bool all(double4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000528")]
	[Address(RVA = "0x63B7470", Offset = "0x63B6470", VA = "0x63B7470")]
	public static int select(int falseValue, int trueValue, bool test)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000529")]
	[Address(RVA = "0x63B7480", Offset = "0x63B6480", VA = "0x63B7480")]
	public static int2 select(int2 falseValue, int2 trueValue, bool test)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052A")]
	[Address(RVA = "0x63B7490", Offset = "0x63B6490", VA = "0x63B7490")]
	public static int3 select(int3 falseValue, int3 trueValue, bool test)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052B")]
	[Address(RVA = "0x63B74A0", Offset = "0x63B64A0", VA = "0x63B74A0")]
	public static int4 select(int4 falseValue, int4 trueValue, bool test)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052C")]
	[Address(RVA = "0x63B74C0", Offset = "0x63B64C0", VA = "0x63B74C0")]
	public static int2 select(int2 falseValue, int2 trueValue, bool2 test)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052D")]
	[Address(RVA = "0x63B74F0", Offset = "0x63B64F0", VA = "0x63B74F0")]
	public static int3 select(int3 falseValue, int3 trueValue, bool3 test)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052E")]
	[Address(RVA = "0x63B7530", Offset = "0x63B6530", VA = "0x63B7530")]
	public static int4 select(int4 falseValue, int4 trueValue, bool4 test)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052F")]
	[Address(RVA = "0x63B7590", Offset = "0x63B6590", VA = "0x63B7590")]
	public static uint select(uint falseValue, uint trueValue, bool test)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000530")]
	[Address(RVA = "0x63B75A0", Offset = "0x63B65A0", VA = "0x63B75A0")]
	public static uint2 select(uint2 falseValue, uint2 trueValue, bool test)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000531")]
	[Address(RVA = "0x63B75B0", Offset = "0x63B65B0", VA = "0x63B75B0")]
	public static uint3 select(uint3 falseValue, uint3 trueValue, bool test)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000532")]
	[Address(RVA = "0x63B75C0", Offset = "0x63B65C0", VA = "0x63B75C0")]
	public static uint4 select(uint4 falseValue, uint4 trueValue, bool test)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000533")]
	[Address(RVA = "0x63B75E0", Offset = "0x63B65E0", VA = "0x63B75E0")]
	public static uint2 select(uint2 falseValue, uint2 trueValue, bool2 test)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000534")]
	[Address(RVA = "0x63B7610", Offset = "0x63B6610", VA = "0x63B7610")]
	public static uint3 select(uint3 falseValue, uint3 trueValue, bool3 test)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000535")]
	[Address(RVA = "0x63B7650", Offset = "0x63B6650", VA = "0x63B7650")]
	public static uint4 select(uint4 falseValue, uint4 trueValue, bool4 test)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000536")]
	[Address(RVA = "0x63B76B0", Offset = "0x63B66B0", VA = "0x63B76B0")]
	public static long select(long falseValue, long trueValue, bool test)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000537")]
	[Address(RVA = "0x63B76C0", Offset = "0x63B66C0", VA = "0x63B76C0")]
	public static ulong select(ulong falseValue, ulong trueValue, bool test)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000538")]
	[Address(RVA = "0x63B76D0", Offset = "0x63B66D0", VA = "0x63B76D0")]
	public static float select(float falseValue, float trueValue, bool test)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000539")]
	[Address(RVA = "0x63B76E0", Offset = "0x63B66E0", VA = "0x63B76E0")]
	public static float2 select(float2 falseValue, float2 trueValue, bool test)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053A")]
	[Address(RVA = "0x63B76F0", Offset = "0x63B66F0", VA = "0x63B76F0")]
	public static float3 select(float3 falseValue, float3 trueValue, bool test)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053B")]
	[Address(RVA = "0x63B7710", Offset = "0x63B6710", VA = "0x63B7710")]
	public static float4 select(float4 falseValue, float4 trueValue, bool test)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053C")]
	[Address(RVA = "0x63B7730", Offset = "0x63B6730", VA = "0x63B7730")]
	public static float2 select(float2 falseValue, float2 trueValue, bool2 test)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053D")]
	[Address(RVA = "0x63B7760", Offset = "0x63B6760", VA = "0x63B7760")]
	public static float3 select(float3 falseValue, float3 trueValue, bool3 test)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053E")]
	[Address(RVA = "0x63B77B0", Offset = "0x63B67B0", VA = "0x63B77B0")]
	public static float4 select(float4 falseValue, float4 trueValue, bool4 test)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053F")]
	[Address(RVA = "0x63B77F0", Offset = "0x63B67F0", VA = "0x63B77F0")]
	public static double select(double falseValue, double trueValue, bool test)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000540")]
	[Address(RVA = "0x63B7800", Offset = "0x63B6800", VA = "0x63B7800")]
	public static double2 select(double2 falseValue, double2 trueValue, bool test)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000541")]
	[Address(RVA = "0x63B7820", Offset = "0x63B6820", VA = "0x63B7820")]
	public static double3 select(double3 falseValue, double3 trueValue, bool test)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000542")]
	[Address(RVA = "0x63B7850", Offset = "0x63B6850", VA = "0x63B7850")]
	public static double4 select(double4 falseValue, double4 trueValue, bool test)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000543")]
	[Address(RVA = "0x63B7880", Offset = "0x63B6880", VA = "0x63B7880")]
	public static double2 select(double2 falseValue, double2 trueValue, bool2 test)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000544")]
	[Address(RVA = "0x63B78A0", Offset = "0x63B68A0", VA = "0x63B78A0")]
	public static double3 select(double3 falseValue, double3 trueValue, bool3 test)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000545")]
	[Address(RVA = "0x63B78F0", Offset = "0x63B68F0", VA = "0x63B78F0")]
	public static double4 select(double4 falseValue, double4 trueValue, bool4 test)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000546")]
	[Address(RVA = "0x63B7970", Offset = "0x63B6970", VA = "0x63B7970")]
	public static float step(float threshold, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000547")]
	[Address(RVA = "0x63B7990", Offset = "0x63B6990", VA = "0x63B7990")]
	public static float2 step(float2 threshold, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000548")]
	[Address(RVA = "0x63B79C0", Offset = "0x63B69C0", VA = "0x63B79C0")]
	public static float3 step(float3 threshold, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000549")]
	[Address(RVA = "0x63B79E0", Offset = "0x63B69E0", VA = "0x63B79E0")]
	public static float4 step(float4 threshold, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054A")]
	[Address(RVA = "0x63B7A10", Offset = "0x63B6A10", VA = "0x63B7A10")]
	public static double step(double threshold, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054B")]
	[Address(RVA = "0x63B7A30", Offset = "0x63B6A30", VA = "0x63B7A30")]
	public static double2 step(double2 threshold, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054C")]
	[Address(RVA = "0x63B7A50", Offset = "0x63B6A50", VA = "0x63B7A50")]
	public static double3 step(double3 threshold, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054D")]
	[Address(RVA = "0x63B7A90", Offset = "0x63B6A90", VA = "0x63B7A90")]
	public static double4 step(double4 threshold, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054E")]
	[Address(RVA = "0x63B7AF0", Offset = "0x63B6AF0", VA = "0x63B7AF0")]
	public static float2 reflect(float2 i, float2 n)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054F")]
	[Address(RVA = "0x63B7B10", Offset = "0x63B6B10", VA = "0x63B7B10")]
	public static float3 reflect(float3 i, float3 n)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000550")]
	[Address(RVA = "0x63B7B50", Offset = "0x63B6B50", VA = "0x63B7B50")]
	public static float4 reflect(float4 i, float4 n)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000551")]
	[Address(RVA = "0x63B7B90", Offset = "0x63B6B90", VA = "0x63B7B90")]
	public static double2 reflect(double2 i, double2 n)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000552")]
	[Address(RVA = "0x63B7BD0", Offset = "0x63B6BD0", VA = "0x63B7BD0")]
	public static double3 reflect(double3 i, double3 n)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000553")]
	[Address(RVA = "0x63B7C40", Offset = "0x63B6C40", VA = "0x63B7C40")]
	public static double4 reflect(double4 i, double4 n)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000554")]
	[Address(RVA = "0x63B7CB0", Offset = "0x63B6CB0", VA = "0x63B7CB0")]
	public static float2 refract(float2 i, float2 n, float indexOfRefraction)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000555")]
	[Address(RVA = "0x63B7DE0", Offset = "0x63B6DE0", VA = "0x63B7DE0")]
	public static float3 refract(float3 i, float3 n, float indexOfRefraction)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000556")]
	[Address(RVA = "0x63B7F50", Offset = "0x63B6F50", VA = "0x63B7F50")]
	public static float4 refract(float4 i, float4 n, float indexOfRefraction)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000557")]
	[Address(RVA = "0x63B80C0", Offset = "0x63B70C0", VA = "0x63B80C0")]
	public static double2 refract(double2 i, double2 n, double indexOfRefraction)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000558")]
	[Address(RVA = "0x63B8270", Offset = "0x63B7270", VA = "0x63B8270")]
	public static double3 refract(double3 i, double3 n, double indexOfRefraction)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000559")]
	[Address(RVA = "0x63B84A0", Offset = "0x63B74A0", VA = "0x63B84A0")]
	public static double4 refract(double4 i, double4 n, double indexOfRefraction)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055A")]
	[Address(RVA = "0x63B86D0", Offset = "0x63B76D0", VA = "0x63B86D0")]
	public static float2 project(float2 a, float2 ontoB)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055B")]
	[Address(RVA = "0x63B8710", Offset = "0x63B7710", VA = "0x63B8710")]
	public static float3 project(float3 a, float3 ontoB)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055C")]
	[Address(RVA = "0x63B8760", Offset = "0x63B7760", VA = "0x63B8760")]
	public static float4 project(float4 a, float4 ontoB)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055D")]
	[Address(RVA = "0x63B87D0", Offset = "0x63B77D0", VA = "0x63B87D0")]
	public static float2 projectsafe(float2 a, float2 ontoB, [Optional] float2 defaultValue)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055E")]
	[Address(RVA = "0x63B8870", Offset = "0x63B7870", VA = "0x63B8870")]
	public static float3 projectsafe(float3 a, float3 ontoB, [Optional] float3 defaultValue)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055F")]
	[Address(RVA = "0x63B8930", Offset = "0x63B7930", VA = "0x63B8930")]
	public static float4 projectsafe(float4 a, float4 ontoB, [Optional] float4 defaultValue)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000560")]
	[Address(RVA = "0x63B8A40", Offset = "0x63B7A40", VA = "0x63B8A40")]
	public static double2 project(double2 a, double2 ontoB)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000561")]
	[Address(RVA = "0x63B8A80", Offset = "0x63B7A80", VA = "0x63B8A80")]
	public static double3 project(double3 a, double3 ontoB)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000562")]
	[Address(RVA = "0x63B8B00", Offset = "0x63B7B00", VA = "0x63B8B00")]
	public static double4 project(double4 a, double4 ontoB)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000563")]
	[Address(RVA = "0x63B8B90", Offset = "0x63B7B90", VA = "0x63B8B90")]
	public static double2 projectsafe(double2 a, double2 ontoB, [Optional] double2 defaultValue)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000564")]
	[Address(RVA = "0x63B8C20", Offset = "0x63B7C20", VA = "0x63B8C20")]
	public static double3 projectsafe(double3 a, double3 ontoB, [Optional] double3 defaultValue)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000565")]
	[Address(RVA = "0x63B8D30", Offset = "0x63B7D30", VA = "0x63B8D30")]
	public static double4 projectsafe(double4 a, double4 ontoB, [Optional] double4 defaultValue)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000566")]
	[Address(RVA = "0x63B8E60", Offset = "0x63B7E60", VA = "0x63B8E60")]
	public static float2 faceforward(float2 n, float2 i, float2 ng)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000567")]
	[Address(RVA = "0x63B8E80", Offset = "0x63B7E80", VA = "0x63B8E80")]
	public static float3 faceforward(float3 n, float3 i, float3 ng)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000568")]
	[Address(RVA = "0x63B8EC0", Offset = "0x63B7EC0", VA = "0x63B8EC0")]
	public static float4 faceforward(float4 n, float4 i, float4 ng)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000569")]
	[Address(RVA = "0x63B8F00", Offset = "0x63B7F00", VA = "0x63B8F00")]
	public static double2 faceforward(double2 n, double2 i, double2 ng)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056A")]
	[Address(RVA = "0x63B8F50", Offset = "0x63B7F50", VA = "0x63B8F50")]
	public static double3 faceforward(double3 n, double3 i, double3 ng)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056B")]
	[Address(RVA = "0x63B8FE0", Offset = "0x63B7FE0", VA = "0x63B8FE0")]
	public static double4 faceforward(double4 n, double4 i, double4 ng)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056C")]
	[Address(RVA = "0x63B9070", Offset = "0x63B8070", VA = "0x63B9070")]
	public static void sincos(float x, out float s, out float c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056D")]
	[Address(RVA = "0x63B9170", Offset = "0x63B8170", VA = "0x63B9170")]
	public static void sincos(float2 x, out float2 s, out float2 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056E")]
	[Address(RVA = "0x63B9330", Offset = "0x63B8330", VA = "0x63B9330")]
	public static void sincos(float3 x, out float3 s, out float3 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056F")]
	[Address(RVA = "0x63B9380", Offset = "0x63B8380", VA = "0x63B9380")]
	public static void sincos(float4 x, out float4 s, out float4 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000570")]
	[Address(RVA = "0x63B9710", Offset = "0x63B8710", VA = "0x63B9710")]
	public static void sincos(double x, out double s, out double c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000571")]
	[Address(RVA = "0x63B97E0", Offset = "0x63B87E0", VA = "0x63B97E0")]
	public static void sincos(double2 x, out double2 s, out double2 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000572")]
	[Address(RVA = "0x63B99A0", Offset = "0x63B89A0", VA = "0x63B99A0")]
	public static void sincos(double3 x, out double3 s, out double3 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000573")]
	[Address(RVA = "0x63B9C40", Offset = "0x63B8C40", VA = "0x63B9C40")]
	public static void sincos(double4 x, out double4 s, out double4 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000574")]
	[Address(RVA = "0x63B9CD0", Offset = "0x63B8CD0", VA = "0x63B9CD0")]
	public static int countbits(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000575")]
	[Address(RVA = "0x63B9D10", Offset = "0x63B8D10", VA = "0x63B9D10")]
	public static int2 countbits(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000576")]
	[Address(RVA = "0x63B9DC0", Offset = "0x63B8DC0", VA = "0x63B9DC0")]
	public static int3 countbits(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000577")]
	[Address(RVA = "0x63B9EB0", Offset = "0x63B8EB0", VA = "0x63B9EB0")]
	public static int4 countbits(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000578")]
	[Address(RVA = "0x63B9FD0", Offset = "0x63B8FD0", VA = "0x63B9FD0")]
	public static int countbits(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000579")]
	[Address(RVA = "0x63BA010", Offset = "0x63B9010", VA = "0x63BA010")]
	public static int2 countbits(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057A")]
	[Address(RVA = "0x63BA0C0", Offset = "0x63B90C0", VA = "0x63BA0C0")]
	public static int3 countbits(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057B")]
	[Address(RVA = "0x63BA1B0", Offset = "0x63B91B0", VA = "0x63BA1B0")]
	public static int4 countbits(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057C")]
	[Address(RVA = "0x63BA2D0", Offset = "0x63B92D0", VA = "0x63BA2D0")]
	public static int countbits(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057D")]
	[Address(RVA = "0x63BA330", Offset = "0x63B9330", VA = "0x63BA330")]
	public static int countbits(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057E")]
	[Address(RVA = "0x63BA390", Offset = "0x63B9390", VA = "0x63BA390")]
	public static int lzcnt(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057F")]
	[Address(RVA = "0x63BA3D0", Offset = "0x63B93D0", VA = "0x63BA3D0")]
	public static int2 lzcnt(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000580")]
	[Address(RVA = "0x63BA460", Offset = "0x63B9460", VA = "0x63BA460")]
	public static int3 lzcnt(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000581")]
	[Address(RVA = "0x63BA520", Offset = "0x63B9520", VA = "0x63BA520")]
	public static int4 lzcnt(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000582")]
	[Address(RVA = "0x63BA620", Offset = "0x63B9620", VA = "0x63BA620")]
	public static int lzcnt(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000583")]
	[Address(RVA = "0x63BA660", Offset = "0x63B9660", VA = "0x63BA660")]
	public static int2 lzcnt(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000584")]
	[Address(RVA = "0x63BA6F0", Offset = "0x63B96F0", VA = "0x63BA6F0")]
	public static int3 lzcnt(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000585")]
	[Address(RVA = "0x63BA7B0", Offset = "0x63B97B0", VA = "0x63BA7B0")]
	public static int4 lzcnt(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000586")]
	[Address(RVA = "0x63BA8B0", Offset = "0x63B98B0", VA = "0x63BA8B0")]
	public static int lzcnt(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000587")]
	[Address(RVA = "0x63BA900", Offset = "0x63B9900", VA = "0x63BA900")]
	public static int lzcnt(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000588")]
	[Address(RVA = "0x63BA950", Offset = "0x63B9950", VA = "0x63BA950")]
	public static int tzcnt(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000589")]
	[Address(RVA = "0x63BA990", Offset = "0x63B9990", VA = "0x63BA990")]
	public static int2 tzcnt(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058A")]
	[Address(RVA = "0x63BAA30", Offset = "0x63B9A30", VA = "0x63BAA30")]
	public static int3 tzcnt(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058B")]
	[Address(RVA = "0x63BAB00", Offset = "0x63B9B00", VA = "0x63BAB00")]
	public static int4 tzcnt(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058C")]
	[Address(RVA = "0x63BAC10", Offset = "0x63B9C10", VA = "0x63BAC10")]
	public static int tzcnt(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058D")]
	[Address(RVA = "0x63BAC50", Offset = "0x63B9C50", VA = "0x63BAC50")]
	public static int2 tzcnt(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058E")]
	[Address(RVA = "0x63BACF0", Offset = "0x63B9CF0", VA = "0x63BACF0")]
	public static int3 tzcnt(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058F")]
	[Address(RVA = "0x63BADC0", Offset = "0x63B9DC0", VA = "0x63BADC0")]
	public static int4 tzcnt(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000590")]
	[Address(RVA = "0x63BAED0", Offset = "0x63B9ED0", VA = "0x63BAED0")]
	public static int tzcnt(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000591")]
	[Address(RVA = "0x63BAF30", Offset = "0x63B9F30", VA = "0x63BAF30")]
	public static int tzcnt(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000592")]
	[Address(RVA = "0x63BAF90", Offset = "0x63B9F90", VA = "0x63BAF90")]
	public static int reversebits(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000593")]
	[Address(RVA = "0x63BAFD0", Offset = "0x63B9FD0", VA = "0x63BAFD0")]
	public static int2 reversebits(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000594")]
	[Address(RVA = "0x63BB0D0", Offset = "0x63BA0D0", VA = "0x63BB0D0")]
	public static int3 reversebits(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000595")]
	[Address(RVA = "0x63BB200", Offset = "0x63BA200", VA = "0x63BB200")]
	public static int4 reversebits(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000596")]
	[Address(RVA = "0x63BB350", Offset = "0x63BA350", VA = "0x63BB350")]
	public static uint reversebits(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000597")]
	[Address(RVA = "0x63BB390", Offset = "0x63BA390", VA = "0x63BB390")]
	public static uint2 reversebits(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000598")]
	[Address(RVA = "0x63BB4C0", Offset = "0x63BA4C0", VA = "0x63BB4C0")]
	public static uint3 reversebits(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000599")]
	[Address(RVA = "0x63BB630", Offset = "0x63BA630", VA = "0x63BB630")]
	public static uint4 reversebits(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059A")]
	[Address(RVA = "0x63BB840", Offset = "0x63BA840", VA = "0x63BB840")]
	public static long reversebits(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059B")]
	[Address(RVA = "0x63BB8A0", Offset = "0x63BA8A0", VA = "0x63BB8A0")]
	public static ulong reversebits(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059C")]
	[Address(RVA = "0x63BB900", Offset = "0x63BA900", VA = "0x63BB900")]
	public static int rol(int x, int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059D")]
	[Address(RVA = "0x63BB910", Offset = "0x63BA910", VA = "0x63BB910")]
	public static int2 rol(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059E")]
	[Address(RVA = "0x63BB940", Offset = "0x63BA940", VA = "0x63BB940")]
	public static int3 rol(int3 x, int n)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059F")]
	[Address(RVA = "0x63BB980", Offset = "0x63BA980", VA = "0x63BB980")]
	public static int4 rol(int4 x, int n)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x63BB9E0", Offset = "0x63BA9E0", VA = "0x63BB9E0")]
	public static uint rol(uint x, int n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x63BB9F0", Offset = "0x63BA9F0", VA = "0x63BB9F0")]
	public static uint2 rol(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x63BBA20", Offset = "0x63BAA20", VA = "0x63BBA20")]
	public static uint3 rol(uint3 x, int n)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x63BBA60", Offset = "0x63BAA60", VA = "0x63BBA60")]
	public static uint4 rol(uint4 x, int n)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x63BBAC0", Offset = "0x63BAAC0", VA = "0x63BBAC0")]
	public static long rol(long x, int n)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x63BBAD0", Offset = "0x63BAAD0", VA = "0x63BBAD0")]
	public static ulong rol(ulong x, int n)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x63BBAE0", Offset = "0x63BAAE0", VA = "0x63BBAE0")]
	public static int ror(int x, int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x63BBAF0", Offset = "0x63BAAF0", VA = "0x63BBAF0")]
	public static int2 ror(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x63BBB20", Offset = "0x63BAB20", VA = "0x63BBB20")]
	public static int3 ror(int3 x, int n)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x63BBB60", Offset = "0x63BAB60", VA = "0x63BBB60")]
	public static int4 ror(int4 x, int n)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x63BBBC0", Offset = "0x63BABC0", VA = "0x63BBBC0")]
	public static uint ror(uint x, int n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x63BBBD0", Offset = "0x63BABD0", VA = "0x63BBBD0")]
	public static uint2 ror(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x63BBC00", Offset = "0x63BAC00", VA = "0x63BBC00")]
	public static uint3 ror(uint3 x, int n)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x63BBC40", Offset = "0x63BAC40", VA = "0x63BBC40")]
	public static uint4 ror(uint4 x, int n)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x63BBCA0", Offset = "0x63BACA0", VA = "0x63BBCA0")]
	public static long ror(long x, int n)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x63BBCB0", Offset = "0x63BACB0", VA = "0x63BBCB0")]
	public static ulong ror(ulong x, int n)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x63BBCC0", Offset = "0x63BACC0", VA = "0x63BBCC0")]
	public static int ceilpow2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x63BBCF0", Offset = "0x63BACF0", VA = "0x63BBCF0")]
	public static int2 ceilpow2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x63BBDA0", Offset = "0x63BADA0", VA = "0x63BBDA0")]
	public static int3 ceilpow2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x63BBE80", Offset = "0x63BAE80", VA = "0x63BBE80")]
	public static int4 ceilpow2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x63BBFD0", Offset = "0x63BAFD0", VA = "0x63BBFD0")]
	public static uint ceilpow2(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x63BC000", Offset = "0x63BB000", VA = "0x63BC000")]
	public static uint2 ceilpow2(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x63BC0B0", Offset = "0x63BB0B0", VA = "0x63BC0B0")]
	public static uint3 ceilpow2(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x63BC190", Offset = "0x63BB190", VA = "0x63BC190")]
	public static uint4 ceilpow2(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x63BC2D0", Offset = "0x63BB2D0", VA = "0x63BC2D0")]
	public static long ceilpow2(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x63BC320", Offset = "0x63BB320", VA = "0x63BC320")]
	public static ulong ceilpow2(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x63BC370", Offset = "0x63BB370", VA = "0x63BC370")]
	public static int ceillog2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x63BC3B0", Offset = "0x63BB3B0", VA = "0x63BC3B0")]
	public static int2 ceillog2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x63BC430", Offset = "0x63BB430", VA = "0x63BC430")]
	public static int3 ceillog2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x63BC4E0", Offset = "0x63BB4E0", VA = "0x63BC4E0")]
	public static int4 ceillog2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x63BC5F0", Offset = "0x63BB5F0", VA = "0x63BC5F0")]
	public static int ceillog2(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x63BC630", Offset = "0x63BB630", VA = "0x63BC630")]
	public static int2 ceillog2(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x63BC6B0", Offset = "0x63BB6B0", VA = "0x63BC6B0")]
	public static int3 ceillog2(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x63BC760", Offset = "0x63BB760", VA = "0x63BC760")]
	public static int4 ceillog2(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x63BC870", Offset = "0x63BB870", VA = "0x63BC870")]
	public static int floorlog2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x63BC8B0", Offset = "0x63BB8B0", VA = "0x63BC8B0")]
	public static int2 floorlog2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x63BC940", Offset = "0x63BB940", VA = "0x63BC940")]
	public static int3 floorlog2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x63BCA00", Offset = "0x63BBA00", VA = "0x63BCA00")]
	public static int4 floorlog2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x63BCAF0", Offset = "0x63BBAF0", VA = "0x63BCAF0")]
	public static int floorlog2(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x63BCB30", Offset = "0x63BBB30", VA = "0x63BCB30")]
	public static int2 floorlog2(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x63BCBC0", Offset = "0x63BBBC0", VA = "0x63BCBC0")]
	public static int3 floorlog2(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x63BCC80", Offset = "0x63BBC80", VA = "0x63BCC80")]
	public static int4 floorlog2(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x63BCD70", Offset = "0x63BBD70", VA = "0x63BCD70")]
	public static float radians(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x63BCD80", Offset = "0x63BBD80", VA = "0x63BCD80")]
	public static float2 radians(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x63BCD90", Offset = "0x63BBD90", VA = "0x63BCD90")]
	public static float3 radians(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x63BCDA0", Offset = "0x63BBDA0", VA = "0x63BCDA0")]
	public static float4 radians(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x63BCDC0", Offset = "0x63BBDC0", VA = "0x63BCDC0")]
	public static double radians(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x63BCDD0", Offset = "0x63BBDD0", VA = "0x63BCDD0")]
	public static double2 radians(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x63BCDF0", Offset = "0x63BBDF0", VA = "0x63BCDF0")]
	public static double3 radians(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x63BCE20", Offset = "0x63BBE20", VA = "0x63BCE20")]
	public static double4 radians(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x63BCE50", Offset = "0x63BBE50", VA = "0x63BCE50")]
	public static float degrees(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x63BCE60", Offset = "0x63BBE60", VA = "0x63BCE60")]
	public static float2 degrees(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x63BCE70", Offset = "0x63BBE70", VA = "0x63BCE70")]
	public static float3 degrees(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x63BCE80", Offset = "0x63BBE80", VA = "0x63BCE80")]
	public static float4 degrees(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x63BCEA0", Offset = "0x63BBEA0", VA = "0x63BCEA0")]
	public static double degrees(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x63BCEB0", Offset = "0x63BBEB0", VA = "0x63BCEB0")]
	public static double2 degrees(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x63BCED0", Offset = "0x63BBED0", VA = "0x63BCED0")]
	public static double3 degrees(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x63BCF00", Offset = "0x63BBF00", VA = "0x63BCF00")]
	public static double4 degrees(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x63BCF30", Offset = "0x63BBF30", VA = "0x63BCF30")]
	public static int cmin(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x63BCF40", Offset = "0x63BBF40", VA = "0x63BCF40")]
	public static int cmin(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x63BCF60", Offset = "0x63BBF60", VA = "0x63BCF60")]
	public static int cmin(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x63BCF90", Offset = "0x63BBF90", VA = "0x63BCF90")]
	public static uint cmin(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x63BCFA0", Offset = "0x63BBFA0", VA = "0x63BCFA0")]
	public static uint cmin(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x63BCFC0", Offset = "0x63BBFC0", VA = "0x63BCFC0")]
	public static uint cmin(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x63BCFF0", Offset = "0x63BBFF0", VA = "0x63BCFF0")]
	public static float cmin(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x63BD030", Offset = "0x63BC030", VA = "0x63BD030")]
	public static float cmin(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x63BD080", Offset = "0x63BC080", VA = "0x63BD080")]
	public static float cmin(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x63BD0F0", Offset = "0x63BC0F0", VA = "0x63BD0F0")]
	public static double cmin(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x63BD140", Offset = "0x63BC140", VA = "0x63BD140")]
	public static double cmin(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x63BD1B0", Offset = "0x63BC1B0", VA = "0x63BD1B0")]
	public static double cmin(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x63BD270", Offset = "0x63BC270", VA = "0x63BD270")]
	public static int cmax(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x63BD280", Offset = "0x63BC280", VA = "0x63BD280")]
	public static int cmax(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x63BD2A0", Offset = "0x63BC2A0", VA = "0x63BD2A0")]
	public static int cmax(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x63BD2D0", Offset = "0x63BC2D0", VA = "0x63BD2D0")]
	public static uint cmax(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x63BD2E0", Offset = "0x63BC2E0", VA = "0x63BD2E0")]
	public static uint cmax(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x63BD300", Offset = "0x63BC300", VA = "0x63BD300")]
	public static uint cmax(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x63BD330", Offset = "0x63BC330", VA = "0x63BD330")]
	public static float cmax(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x63BD360", Offset = "0x63BC360", VA = "0x63BD360")]
	public static float cmax(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x63BD3B0", Offset = "0x63BC3B0", VA = "0x63BD3B0")]
	public static float cmax(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x63BD420", Offset = "0x63BC420", VA = "0x63BD420")]
	public static double cmax(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x63BD470", Offset = "0x63BC470", VA = "0x63BD470")]
	public static double cmax(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x63BD4E0", Offset = "0x63BC4E0", VA = "0x63BD4E0")]
	public static double cmax(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x63BD590", Offset = "0x63BC590", VA = "0x63BD590")]
	public static int csum(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x63BD5A0", Offset = "0x63BC5A0", VA = "0x63BD5A0")]
	public static int csum(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x63BD5B0", Offset = "0x63BC5B0", VA = "0x63BD5B0")]
	public static int csum(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x63BD5D0", Offset = "0x63BC5D0", VA = "0x63BD5D0")]
	public static uint csum(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x63BD5E0", Offset = "0x63BC5E0", VA = "0x63BD5E0")]
	public static uint csum(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x63BD5F0", Offset = "0x63BC5F0", VA = "0x63BD5F0")]
	public static uint csum(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x63BD610", Offset = "0x63BC610", VA = "0x63BD610")]
	public static float csum(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x63BD620", Offset = "0x63BC620", VA = "0x63BD620")]
	public static float csum(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x63BD630", Offset = "0x63BC630", VA = "0x63BD630")]
	public static float csum(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x63BD650", Offset = "0x63BC650", VA = "0x63BD650")]
	public static double csum(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x63BD660", Offset = "0x63BC660", VA = "0x63BD660")]
	public static double csum(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x63BD680", Offset = "0x63BC680", VA = "0x63BD680")]
	public static double csum(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x63BD6B0", Offset = "0x63BC6B0", VA = "0x63BD6B0")]
	public static float square(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x63BD6C0", Offset = "0x63BC6C0", VA = "0x63BD6C0")]
	public static float2 square(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000600")]
	[Address(RVA = "0x63BD6D0", Offset = "0x63BC6D0", VA = "0x63BD6D0")]
	public static float3 square(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000601")]
	[Address(RVA = "0x63BD6E0", Offset = "0x63BC6E0", VA = "0x63BD6E0")]
	public static float4 square(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000602")]
	[Address(RVA = "0x63BD6F0", Offset = "0x63BC6F0", VA = "0x63BD6F0")]
	public static double square(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000603")]
	[Address(RVA = "0x63BD700", Offset = "0x63BC700", VA = "0x63BD700")]
	public static double2 square(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000604")]
	[Address(RVA = "0x63BD710", Offset = "0x63BC710", VA = "0x63BD710")]
	public static double3 square(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000605")]
	[Address(RVA = "0x63BD740", Offset = "0x63BC740", VA = "0x63BD740")]
	public static double4 square(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000606")]
	[Address(RVA = "0x63BD770", Offset = "0x63BC770", VA = "0x63BD770")]
	public static int square(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000607")]
	[Address(RVA = "0x63BD780", Offset = "0x63BC780", VA = "0x63BD780")]
	public static int2 square(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000608")]
	[Address(RVA = "0x63BD7A0", Offset = "0x63BC7A0", VA = "0x63BD7A0")]
	public static int3 square(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000609")]
	[Address(RVA = "0x63BD7D0", Offset = "0x63BC7D0", VA = "0x63BD7D0")]
	public static int4 square(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060A")]
	[Address(RVA = "0x63BD810", Offset = "0x63BC810", VA = "0x63BD810")]
	public static uint square(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060B")]
	[Address(RVA = "0x63BD820", Offset = "0x63BC820", VA = "0x63BD820")]
	public static uint2 square(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060C")]
	[Address(RVA = "0x63BD840", Offset = "0x63BC840", VA = "0x63BD840")]
	public static uint3 square(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060D")]
	[Address(RVA = "0x63BD870", Offset = "0x63BC870", VA = "0x63BD870")]
	public static uint4 square(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060E")]
	[Address(RVA = "0x63BD8B0", Offset = "0x63BC8B0", VA = "0x63BD8B0")]
	public unsafe static int compress(int* output, int index, int4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060F")]
	[Address(RVA = "0x63BD920", Offset = "0x63BC920", VA = "0x63BD920")]
	public unsafe static int compress(uint* output, int index, uint4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000610")]
	[Address(RVA = "0x63BD990", Offset = "0x63BC990", VA = "0x63BD990")]
	public unsafe static int compress(float* output, int index, float4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000611")]
	[Address(RVA = "0x63BDA00", Offset = "0x63BCA00", VA = "0x63BDA00")]
	public static float f16tof32(uint x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000612")]
	[Address(RVA = "0x63BDA60", Offset = "0x63BCA60", VA = "0x63BDA60")]
	public static float2 f16tof32(uint2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000613")]
	[Address(RVA = "0x63BDB60", Offset = "0x63BCB60", VA = "0x63BDB60")]
	public static float3 f16tof32(uint3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000614")]
	[Address(RVA = "0x63BDCC0", Offset = "0x63BCCC0", VA = "0x63BDCC0")]
	public static float4 f16tof32(uint4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000615")]
	[Address(RVA = "0x63BDEA0", Offset = "0x63BCEA0", VA = "0x63BDEA0")]
	public static uint f32tof16(float x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000616")]
	[Address(RVA = "0x63BDF00", Offset = "0x63BCF00", VA = "0x63BDF00")]
	public static uint2 f32tof16(float2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000617")]
	[Address(RVA = "0x63BDFE0", Offset = "0x63BCFE0", VA = "0x63BDFE0")]
	public static uint3 f32tof16(float3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000618")]
	[Address(RVA = "0x63BE110", Offset = "0x63BD110", VA = "0x63BE110")]
	public static uint4 f32tof16(float4 x)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x63BE2F0", Offset = "0x63BD2F0", VA = "0x63BE2F0")]
	public static void orthonormal_basis(float3 normal, out float3 basis1, out float3 basis2)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x63BE380", Offset = "0x63BD380", VA = "0x63BE380")]
	public static void orthonormal_basis(double3 normal, out double3 basis1, out double3 basis2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061B")]
	[Address(RVA = "0x63BE430", Offset = "0x63BD430", VA = "0x63BE430")]
	public static float chgsign(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061C")]
	[Address(RVA = "0x63BE440", Offset = "0x63BD440", VA = "0x63BE440")]
	public static float2 chgsign(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061D")]
	[Address(RVA = "0x63BE470", Offset = "0x63BD470", VA = "0x63BE470")]
	public static float3 chgsign(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061E")]
	[Address(RVA = "0x63BE4B0", Offset = "0x63BD4B0", VA = "0x63BE4B0")]
	public static float4 chgsign(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061F")]
	[Address(RVA = "0x63BE510", Offset = "0x63BD510", VA = "0x63BE510")]
	private unsafe static uint read32_little_endian(void* pBuffer)
	{
		return default(uint);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x63BE520", Offset = "0x63BD520", VA = "0x63BE520")]
	private unsafe static uint hash_with_unaligned_loads(void* pBuffer, int numBytes, uint seed)
	{
		return default(uint);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x63BE730", Offset = "0x63BD730", VA = "0x63BE730")]
	private unsafe static uint hash_without_unaligned_loads(void* pBuffer, int numBytes, uint seed)
	{
		return default(uint);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x63BE930", Offset = "0x63BD930", VA = "0x63BE930")]
	public unsafe static uint hash(void* pBuffer, int numBytes, uint seed = 0u)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000623")]
	[Address(RVA = "0x63BE940", Offset = "0x63BD940", VA = "0x63BE940")]
	public static float3 up()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000624")]
	[Address(RVA = "0x63BE950", Offset = "0x63BD950", VA = "0x63BE950")]
	public static float3 down()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000625")]
	[Address(RVA = "0x63BE960", Offset = "0x63BD960", VA = "0x63BE960")]
	public static float3 forward()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000626")]
	[Address(RVA = "0x63BE970", Offset = "0x63BD970", VA = "0x63BE970")]
	public static float3 back()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000627")]
	[Address(RVA = "0x63BE980", Offset = "0x63BD980", VA = "0x63BE980")]
	public static float3 left()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000628")]
	[Address(RVA = "0x63BE990", Offset = "0x63BD990", VA = "0x63BE990")]
	public static float3 right()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000629")]
	[Address(RVA = "0x63BE9A0", Offset = "0x63BD9A0", VA = "0x63BE9A0")]
	public static float3 EulerXYZ(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062A")]
	[Address(RVA = "0x63BEDC0", Offset = "0x63BDDC0", VA = "0x63BEDC0")]
	public static float3 EulerXZY(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062B")]
	[Address(RVA = "0x63BF1E0", Offset = "0x63BE1E0", VA = "0x63BF1E0")]
	public static float3 EulerYXZ(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062C")]
	[Address(RVA = "0x63BF600", Offset = "0x63BE600", VA = "0x63BF600")]
	public static float3 EulerYZX(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062D")]
	[Address(RVA = "0x63BFA20", Offset = "0x63BEA20", VA = "0x63BFA20")]
	public static float3 EulerZXY(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062E")]
	[Address(RVA = "0x63BFE50", Offset = "0x63BEE50", VA = "0x63BFE50")]
	public static float3 EulerZYX(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062F")]
	[Address(RVA = "0x63C0270", Offset = "0x63BF270", VA = "0x63C0270")]
	public static float3 Euler(quaternion q, RotationOrder order = RotationOrder.ZXY)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000630")]
	[Address(RVA = "0x63C0330", Offset = "0x63BF330", VA = "0x63C0330")]
	public static float3x3 mulScale(float3x3 m, float3 s)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000631")]
	[Address(RVA = "0x63C03A0", Offset = "0x63BF3A0", VA = "0x63C03A0")]
	public static float3x3 scaleMul(float3 s, float3x3 m)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000632")]
	[Address(RVA = "0x63C0400", Offset = "0x63BF400", VA = "0x63C0400")]
	internal static float4 unpacklo(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000633")]
	[Address(RVA = "0x63C0420", Offset = "0x63BF420", VA = "0x63C0420")]
	internal static double4 unpacklo(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000634")]
	[Address(RVA = "0x63C0450", Offset = "0x63BF450", VA = "0x63C0450")]
	internal static float4 unpackhi(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000635")]
	[Address(RVA = "0x63C0470", Offset = "0x63BF470", VA = "0x63C0470")]
	internal static double4 unpackhi(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000636")]
	[Address(RVA = "0x63C04A0", Offset = "0x63BF4A0", VA = "0x63C04A0")]
	internal static float4 movelh(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000637")]
	[Address(RVA = "0x63C04B0", Offset = "0x63BF4B0", VA = "0x63C04B0")]
	internal static double4 movelh(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000638")]
	[Address(RVA = "0x63C04D0", Offset = "0x63BF4D0", VA = "0x63C04D0")]
	internal static float4 movehl(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000639")]
	[Address(RVA = "0x63C04E0", Offset = "0x63BF4E0", VA = "0x63C04E0")]
	internal static double4 movehl(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063A")]
	[Address(RVA = "0x63C0500", Offset = "0x63BF500", VA = "0x63C0500")]
	internal static uint fold_to_uint(double x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063B")]
	[Address(RVA = "0x63C0510", Offset = "0x63BF510", VA = "0x63C0510")]
	internal static uint2 fold_to_uint(double2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063C")]
	[Address(RVA = "0x63C0540", Offset = "0x63BF540", VA = "0x63C0540")]
	internal static uint3 fold_to_uint(double3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063D")]
	[Address(RVA = "0x63C0580", Offset = "0x63BF580", VA = "0x63C0580")]
	internal static uint4 fold_to_uint(double4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063E")]
	[Address(RVA = "0x63C05E0", Offset = "0x63BF5E0", VA = "0x63C05E0")]
	public static float3x3 float3x3(float4x4 f4x4)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063F")]
	[Address(RVA = "0x63C0640", Offset = "0x63BF640", VA = "0x63C0640")]
	public static float3x3 float3x3(quaternion rotation)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000640")]
	[Address(RVA = "0x63C0670", Offset = "0x63BF670", VA = "0x63C0670")]
	public static float4x4 float4x4(float3x3 rotation, float3 translation)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000641")]
	[Address(RVA = "0x63C06C0", Offset = "0x63BF6C0", VA = "0x63C06C0")]
	public static float4x4 float4x4(quaternion rotation, float3 translation)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000642")]
	[Address(RVA = "0x63C06F0", Offset = "0x63BF6F0", VA = "0x63C06F0")]
	public static float4x4 float4x4(RigidTransform transform)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000643")]
	[Address(RVA = "0x63C0730", Offset = "0x63BF730", VA = "0x63C0730")]
	public static float3x3 orthonormalize(float3x3 i)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000644")]
	[Address(RVA = "0x63C09B0", Offset = "0x63BF9B0", VA = "0x63C09B0")]
	public static float3x3 pseudoinverse(float3x3 m)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000645")]
	[Address(RVA = "0x63C0E70", Offset = "0x63BFE70", VA = "0x63C0E70")]
	public static float mul(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000646")]
	[Address(RVA = "0x63C0E80", Offset = "0x63BFE80", VA = "0x63C0E80")]
	public static float mul(float2 a, float2 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000647")]
	[Address(RVA = "0x63C0E90", Offset = "0x63BFE90", VA = "0x63C0E90")]
	public static float2 mul(float2 a, float2x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000648")]
	[Address(RVA = "0x63C0EB0", Offset = "0x63BFEB0", VA = "0x63C0EB0")]
	public static float3 mul(float2 a, float2x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000649")]
	[Address(RVA = "0x63C0EF0", Offset = "0x63BFEF0", VA = "0x63C0EF0")]
	public static float4 mul(float2 a, float2x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064A")]
	[Address(RVA = "0x63C0F40", Offset = "0x63BFF40", VA = "0x63C0F40")]
	public static float mul(float3 a, float3 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064B")]
	[Address(RVA = "0x63C0F60", Offset = "0x63BFF60", VA = "0x63C0F60")]
	public static float2 mul(float3 a, float3x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064C")]
	[Address(RVA = "0x63C0FC0", Offset = "0x63BFFC0", VA = "0x63C0FC0")]
	public static float3 mul(float3 a, float3x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064D")]
	[Address(RVA = "0x63C1040", Offset = "0x63C0040", VA = "0x63C1040")]
	public static float4 mul(float3 a, float3x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064E")]
	[Address(RVA = "0x63C10D0", Offset = "0x63C00D0", VA = "0x63C10D0")]
	public static float mul(float4 a, float4 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064F")]
	[Address(RVA = "0x63C10F0", Offset = "0x63C00F0", VA = "0x63C10F0")]
	public static float2 mul(float4 a, float4x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000650")]
	[Address(RVA = "0x63C1150", Offset = "0x63C0150", VA = "0x63C1150")]
	public static float3 mul(float4 a, float4x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000651")]
	[Address(RVA = "0x63C11F0", Offset = "0x63C01F0", VA = "0x63C11F0")]
	public static float4 mul(float4 a, float4x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000652")]
	[Address(RVA = "0x63C12A0", Offset = "0x63C02A0", VA = "0x63C12A0")]
	public static float2 mul(float2x2 a, float2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000653")]
	[Address(RVA = "0x63C12D0", Offset = "0x63C02D0", VA = "0x63C12D0")]
	public static float2x2 mul(float2x2 a, float2x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000654")]
	[Address(RVA = "0x63C1300", Offset = "0x63C0300", VA = "0x63C1300")]
	public static float2x3 mul(float2x2 a, float2x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000655")]
	[Address(RVA = "0x63C1360", Offset = "0x63C0360", VA = "0x63C1360")]
	public static float2x4 mul(float2x2 a, float2x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000656")]
	[Address(RVA = "0x63C13E0", Offset = "0x63C03E0", VA = "0x63C13E0")]
	public static float2 mul(float2x3 a, float3 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000657")]
	[Address(RVA = "0x63C1430", Offset = "0x63C0430", VA = "0x63C1430")]
	public static float2x2 mul(float2x3 a, float3x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000658")]
	[Address(RVA = "0x63C14A0", Offset = "0x63C04A0", VA = "0x63C14A0")]
	public static float2x3 mul(float2x3 a, float3x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000659")]
	[Address(RVA = "0x63C1540", Offset = "0x63C0540", VA = "0x63C1540")]
	public static float2x4 mul(float2x3 a, float3x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065A")]
	[Address(RVA = "0x63C1610", Offset = "0x63C0610", VA = "0x63C1610")]
	public static float2 mul(float2x4 a, float4 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065B")]
	[Address(RVA = "0x63C1680", Offset = "0x63C0680", VA = "0x63C1680")]
	public static float2x2 mul(float2x4 a, float4x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065C")]
	[Address(RVA = "0x63C1700", Offset = "0x63C0700", VA = "0x63C1700")]
	public static float2x3 mul(float2x4 a, float4x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065D")]
	[Address(RVA = "0x63C17E0", Offset = "0x63C07E0", VA = "0x63C17E0")]
	public static float2x4 mul(float2x4 a, float4x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065E")]
	[Address(RVA = "0x63C1900", Offset = "0x63C0900", VA = "0x63C1900")]
	public static float3 mul(float3x2 a, float2 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065F")]
	[Address(RVA = "0x63C1940", Offset = "0x63C0940", VA = "0x63C1940")]
	public static float3x2 mul(float3x2 a, float2x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000660")]
	[Address(RVA = "0x63C19C0", Offset = "0x63C09C0", VA = "0x63C19C0")]
	public static float3x3 mul(float3x2 a, float2x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000661")]
	[Address(RVA = "0x63C1A80", Offset = "0x63C0A80", VA = "0x63C1A80")]
	public static float3x4 mul(float3x2 a, float2x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000662")]
	[Address(RVA = "0x63C1B80", Offset = "0x63C0B80", VA = "0x63C1B80")]
	public static float3 mul(float3x3 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000663")]
	[Address(RVA = "0x63C1BE0", Offset = "0x63C0BE0", VA = "0x63C1BE0")]
	public static float3x2 mul(float3x3 a, float3x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000664")]
	[Address(RVA = "0x63C1CB0", Offset = "0x63C0CB0", VA = "0x63C1CB0")]
	public static float3x3 mul(float3x3 a, float3x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000665")]
	[Address(RVA = "0x63C1DE0", Offset = "0x63C0DE0", VA = "0x63C1DE0")]
	public static float3x4 mul(float3x3 a, float3x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000666")]
	[Address(RVA = "0x63C1F60", Offset = "0x63C0F60", VA = "0x63C1F60")]
	public static float3 mul(float3x4 a, float4 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000667")]
	[Address(RVA = "0x63C1FE0", Offset = "0x63C0FE0", VA = "0x63C1FE0")]
	public static float3x2 mul(float3x4 a, float4x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000668")]
	[Address(RVA = "0x63C20F0", Offset = "0x63C10F0", VA = "0x63C20F0")]
	public static float3x3 mul(float3x4 a, float4x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000669")]
	[Address(RVA = "0x63C2280", Offset = "0x63C1280", VA = "0x63C2280")]
	public static float3x4 mul(float3x4 a, float4x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066A")]
	[Address(RVA = "0x63C24B0", Offset = "0x63C14B0", VA = "0x63C24B0")]
	public static float4 mul(float4x2 a, float2 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066B")]
	[Address(RVA = "0x63C2500", Offset = "0x63C1500", VA = "0x63C2500")]
	public static float4x2 mul(float4x2 a, float2x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066C")]
	[Address(RVA = "0x63C2570", Offset = "0x63C1570", VA = "0x63C2570")]
	public static float4x3 mul(float4x2 a, float2x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066D")]
	[Address(RVA = "0x63C2630", Offset = "0x63C1630", VA = "0x63C2630")]
	public static float4x4 mul(float4x2 a, float2x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066E")]
	[Address(RVA = "0x63C2720", Offset = "0x63C1720", VA = "0x63C2720")]
	public static float4 mul(float4x3 a, float3 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066F")]
	[Address(RVA = "0x63C2780", Offset = "0x63C1780", VA = "0x63C2780")]
	public static float4x2 mul(float4x3 a, float3x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000670")]
	[Address(RVA = "0x63C2850", Offset = "0x63C1850", VA = "0x63C2850")]
	public static float4x3 mul(float4x3 a, float3x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000671")]
	[Address(RVA = "0x63C2970", Offset = "0x63C1970", VA = "0x63C2970")]
	public static float4x4 mul(float4x3 a, float3x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000672")]
	[Address(RVA = "0x63C2AE0", Offset = "0x63C1AE0", VA = "0x63C2AE0")]
	public static float4 mul(float4x4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000673")]
	[Address(RVA = "0x63C2B50", Offset = "0x63C1B50", VA = "0x63C2B50")]
	public static float4x2 mul(float4x4 a, float4x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000674")]
	[Address(RVA = "0x63C2C60", Offset = "0x63C1C60", VA = "0x63C2C60")]
	public static float4x3 mul(float4x4 a, float4x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000675")]
	[Address(RVA = "0x63C2DE0", Offset = "0x63C1DE0", VA = "0x63C2DE0")]
	public static float4x4 mul(float4x4 a, float4x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000676")]
	[Address(RVA = "0x63C2FD0", Offset = "0x63C1FD0", VA = "0x63C2FD0")]
	public static double mul(double a, double b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000677")]
	[Address(RVA = "0x63C2FE0", Offset = "0x63C1FE0", VA = "0x63C2FE0")]
	public static double mul(double2 a, double2 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000678")]
	[Address(RVA = "0x63C2FF0", Offset = "0x63C1FF0", VA = "0x63C2FF0")]
	public static double2 mul(double2 a, double2x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000679")]
	[Address(RVA = "0x63C3030", Offset = "0x63C2030", VA = "0x63C3030")]
	public static double3 mul(double2 a, double2x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067A")]
	[Address(RVA = "0x63C3080", Offset = "0x63C2080", VA = "0x63C3080")]
	public static double4 mul(double2 a, double2x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067B")]
	[Address(RVA = "0x63C30E0", Offset = "0x63C20E0", VA = "0x63C30E0")]
	public static double mul(double3 a, double3 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067C")]
	[Address(RVA = "0x63C3110", Offset = "0x63C2110", VA = "0x63C3110")]
	public static double2 mul(double3 a, double3x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067D")]
	[Address(RVA = "0x63C3170", Offset = "0x63C2170", VA = "0x63C3170")]
	public static double3 mul(double3 a, double3x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067E")]
	[Address(RVA = "0x63C3200", Offset = "0x63C2200", VA = "0x63C3200")]
	public static double4 mul(double3 a, double3x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067F")]
	[Address(RVA = "0x63C32A0", Offset = "0x63C22A0", VA = "0x63C32A0")]
	public static double mul(double4 a, double4 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000680")]
	[Address(RVA = "0x63C32E0", Offset = "0x63C22E0", VA = "0x63C32E0")]
	public static double2 mul(double4 a, double4x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000681")]
	[Address(RVA = "0x63C3350", Offset = "0x63C2350", VA = "0x63C3350")]
	public static double3 mul(double4 a, double4x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000682")]
	[Address(RVA = "0x63C3410", Offset = "0x63C2410", VA = "0x63C3410")]
	public static double4 mul(double4 a, double4x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000683")]
	[Address(RVA = "0x63C34F0", Offset = "0x63C24F0", VA = "0x63C34F0")]
	public static double2 mul(double2x2 a, double2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000684")]
	[Address(RVA = "0x63C3520", Offset = "0x63C2520", VA = "0x63C3520")]
	public static double2x2 mul(double2x2 a, double2x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000685")]
	[Address(RVA = "0x63C3580", Offset = "0x63C2580", VA = "0x63C3580")]
	public static double2x3 mul(double2x2 a, double2x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000686")]
	[Address(RVA = "0x63C3600", Offset = "0x63C2600", VA = "0x63C3600")]
	public static double2x4 mul(double2x2 a, double2x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000687")]
	[Address(RVA = "0x63C36A0", Offset = "0x63C26A0", VA = "0x63C36A0")]
	public static double2 mul(double2x3 a, double3 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000688")]
	[Address(RVA = "0x63C36F0", Offset = "0x63C26F0", VA = "0x63C36F0")]
	public static double2x2 mul(double2x3 a, double3x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000689")]
	[Address(RVA = "0x63C3770", Offset = "0x63C2770", VA = "0x63C3770")]
	public static double2x3 mul(double2x3 a, double3x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068A")]
	[Address(RVA = "0x63C3830", Offset = "0x63C2830", VA = "0x63C3830")]
	public static double2x4 mul(double2x3 a, double3x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068B")]
	[Address(RVA = "0x63C3930", Offset = "0x63C2930", VA = "0x63C3930")]
	public static double2 mul(double2x4 a, double4 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068C")]
	[Address(RVA = "0x63C3990", Offset = "0x63C2990", VA = "0x63C3990")]
	public static double2x2 mul(double2x4 a, double4x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068D")]
	[Address(RVA = "0x63C3A40", Offset = "0x63C2A40", VA = "0x63C3A40")]
	public static double2x3 mul(double2x4 a, double4x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068E")]
	[Address(RVA = "0x63C3B50", Offset = "0x63C2B50", VA = "0x63C3B50")]
	public static double2x4 mul(double2x4 a, double4x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068F")]
	[Address(RVA = "0x63C3CC0", Offset = "0x63C2CC0", VA = "0x63C3CC0")]
	public static double3 mul(double3x2 a, double2 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000690")]
	[Address(RVA = "0x63C3D10", Offset = "0x63C2D10", VA = "0x63C3D10")]
	public static double3x2 mul(double3x2 a, double2x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000691")]
	[Address(RVA = "0x63C3DB0", Offset = "0x63C2DB0", VA = "0x63C3DB0")]
	public static double3x3 mul(double3x2 a, double2x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000692")]
	[Address(RVA = "0x63C3E90", Offset = "0x63C2E90", VA = "0x63C3E90")]
	public static double3x4 mul(double3x2 a, double2x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000693")]
	[Address(RVA = "0x63C3FB0", Offset = "0x63C2FB0", VA = "0x63C3FB0")]
	public static double3 mul(double3x3 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000694")]
	[Address(RVA = "0x63C4020", Offset = "0x63C3020", VA = "0x63C4020")]
	public static double3x2 mul(double3x3 a, double3x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000695")]
	[Address(RVA = "0x63C4120", Offset = "0x63C3120", VA = "0x63C4120")]
	public static double3x3 mul(double3x3 a, double3x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000696")]
	[Address(RVA = "0x63C4290", Offset = "0x63C3290", VA = "0x63C4290")]
	public static double3x4 mul(double3x3 a, double3x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000697")]
	[Address(RVA = "0x63C4440", Offset = "0x63C3440", VA = "0x63C4440")]
	public static double3 mul(double3x4 a, double4 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000698")]
	[Address(RVA = "0x63C44E0", Offset = "0x63C34E0", VA = "0x63C44E0")]
	public static double3x2 mul(double3x4 a, double4x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000699")]
	[Address(RVA = "0x63C4640", Offset = "0x63C3640", VA = "0x63C4640")]
	public static double3x3 mul(double3x4 a, double4x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069A")]
	[Address(RVA = "0x63C48A0", Offset = "0x63C38A0", VA = "0x63C48A0")]
	public static double3x4 mul(double3x4 a, double4x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069B")]
	[Address(RVA = "0x63C4B30", Offset = "0x63C3B30", VA = "0x63C4B30")]
	public static double4 mul(double4x2 a, double2 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069C")]
	[Address(RVA = "0x63C4B70", Offset = "0x63C3B70", VA = "0x63C4B70")]
	public static double4x2 mul(double4x2 a, double2x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069D")]
	[Address(RVA = "0x63C4C00", Offset = "0x63C3C00", VA = "0x63C4C00")]
	public static double4x3 mul(double4x2 a, double2x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069E")]
	[Address(RVA = "0x63C4CE0", Offset = "0x63C3CE0", VA = "0x63C4CE0")]
	public static double4x4 mul(double4x2 a, double2x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069F")]
	[Address(RVA = "0x63C4E10", Offset = "0x63C3E10", VA = "0x63C4E10")]
	public static double4 mul(double4x3 a, double3 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x63C4E80", Offset = "0x63C3E80", VA = "0x63C4E80")]
	public static double4x2 mul(double4x3 a, double3x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x63C4F70", Offset = "0x63C3F70", VA = "0x63C4F70")]
	public static double4x3 mul(double4x3 a, double3x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x63C50E0", Offset = "0x63C40E0", VA = "0x63C50E0")]
	public static double4x4 mul(double4x3 a, double3x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x63C52B0", Offset = "0x63C42B0", VA = "0x63C52B0")]
	public static double4 mul(double4x4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x63C5350", Offset = "0x63C4350", VA = "0x63C5350")]
	public static double4x2 mul(double4x4 a, double4x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x63C54A0", Offset = "0x63C44A0", VA = "0x63C54A0")]
	public static double4x3 mul(double4x4 a, double4x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x63C5680", Offset = "0x63C4680", VA = "0x63C5680")]
	public static double4x4 mul(double4x4 a, double4x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x63C58F0", Offset = "0x63C48F0", VA = "0x63C58F0")]
	public static int mul(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x63C5900", Offset = "0x63C4900", VA = "0x63C5900")]
	public static int mul(int2 a, int2 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x63C5920", Offset = "0x63C4920", VA = "0x63C5920")]
	public static int2 mul(int2 a, int2x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x63C5950", Offset = "0x63C4950", VA = "0x63C5950")]
	public static int3 mul(int2 a, int2x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x63C5990", Offset = "0x63C4990", VA = "0x63C5990")]
	public static int4 mul(int2 a, int2x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x63C59F0", Offset = "0x63C49F0", VA = "0x63C59F0")]
	public static int mul(int3 a, int3 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x63C5A10", Offset = "0x63C4A10", VA = "0x63C5A10")]
	public static int2 mul(int3 a, int3x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x63C5A50", Offset = "0x63C4A50", VA = "0x63C5A50")]
	public static int3 mul(int3 a, int3x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x63C5AB0", Offset = "0x63C4AB0", VA = "0x63C5AB0")]
	public static int4 mul(int3 a, int3x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x63C5B30", Offset = "0x63C4B30", VA = "0x63C5B30")]
	public static int mul(int4 a, int4 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x63C5B60", Offset = "0x63C4B60", VA = "0x63C5B60")]
	public static int2 mul(int4 a, int4x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x63C5BC0", Offset = "0x63C4BC0", VA = "0x63C5BC0")]
	public static int3 mul(int4 a, int4x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x63C5C40", Offset = "0x63C4C40", VA = "0x63C5C40")]
	public static int4 mul(int4 a, int4x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x63C5CF0", Offset = "0x63C4CF0", VA = "0x63C5CF0")]
	public static int2 mul(int2x2 a, int2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x63C5D20", Offset = "0x63C4D20", VA = "0x63C5D20")]
	public static int2x2 mul(int2x2 a, int2x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x63C5D80", Offset = "0x63C4D80", VA = "0x63C5D80")]
	public static int2x3 mul(int2x2 a, int2x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x63C5E30", Offset = "0x63C4E30", VA = "0x63C5E30")]
	public static int2x4 mul(int2x2 a, int2x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x63C5F30", Offset = "0x63C4F30", VA = "0x63C5F30")]
	public static int2 mul(int2x3 a, int3 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x63C5F80", Offset = "0x63C4F80", VA = "0x63C5F80")]
	public static int2x2 mul(int2x3 a, int3x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x63C6020", Offset = "0x63C5020", VA = "0x63C6020")]
	public static int2x3 mul(int2x3 a, int3x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x63C6140", Offset = "0x63C5140", VA = "0x63C6140")]
	public static int2x4 mul(int2x3 a, int3x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x63C62C0", Offset = "0x63C52C0", VA = "0x63C62C0")]
	public static int2 mul(int2x4 a, int4 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x63C6340", Offset = "0x63C5340", VA = "0x63C6340")]
	public static int2x2 mul(int2x4 a, int4x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x63C6420", Offset = "0x63C5420", VA = "0x63C6420")]
	public static int2x3 mul(int2x4 a, int4x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x63C65B0", Offset = "0x63C55B0", VA = "0x63C65B0")]
	public static int2x4 mul(int2x4 a, int4x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x63C67D0", Offset = "0x63C57D0", VA = "0x63C67D0")]
	public static int3 mul(int3x2 a, int2 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x63C6820", Offset = "0x63C5820", VA = "0x63C6820")]
	public static int3x2 mul(int3x2 a, int2x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x63C68C0", Offset = "0x63C58C0", VA = "0x63C68C0")]
	public static int3x3 mul(int3x2 a, int2x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x63C69C0", Offset = "0x63C59C0", VA = "0x63C69C0")]
	public static int3x4 mul(int3x2 a, int2x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x63C6B20", Offset = "0x63C5B20", VA = "0x63C6B20")]
	public static int3 mul(int3x3 a, int3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x63C6B90", Offset = "0x63C5B90", VA = "0x63C6B90")]
	public static int3x2 mul(int3x3 a, int3x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x63C6CA0", Offset = "0x63C5CA0", VA = "0x63C6CA0")]
	public static int3x3 mul(int3x3 a, int3x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x63C6E40", Offset = "0x63C5E40", VA = "0x63C6E40")]
	public static int3x4 mul(int3x3 a, int3x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x63C7080", Offset = "0x63C6080", VA = "0x63C7080")]
	public static int3 mul(int3x4 a, int4 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x63C7130", Offset = "0x63C6130", VA = "0x63C7130")]
	public static int3x2 mul(int3x4 a, int4x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x63C72A0", Offset = "0x63C62A0", VA = "0x63C72A0")]
	public static int3x3 mul(int3x4 a, int4x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x63C74E0", Offset = "0x63C64E0", VA = "0x63C74E0")]
	public static int3x4 mul(int3x4 a, int4x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x63C77E0", Offset = "0x63C67E0", VA = "0x63C77E0")]
	public static int4 mul(int4x2 a, int2 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x63C7850", Offset = "0x63C6850", VA = "0x63C7850")]
	public static int4x2 mul(int4x2 a, int2x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x63C7950", Offset = "0x63C6950", VA = "0x63C7950")]
	public static int4x3 mul(int4x2 a, int2x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x63C7AD0", Offset = "0x63C6AD0", VA = "0x63C7AD0")]
	public static int4x4 mul(int4x2 a, int2x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x63C7CE0", Offset = "0x63C6CE0", VA = "0x63C7CE0")]
	public static int4 mul(int4x3 a, int3 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x63C7D80", Offset = "0x63C6D80", VA = "0x63C7D80")]
	public static int4x2 mul(int4x3 a, int3x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x63C7EF0", Offset = "0x63C6EF0", VA = "0x63C7EF0")]
	public static int4x3 mul(int4x3 a, int3x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x63C8150", Offset = "0x63C7150", VA = "0x63C8150")]
	public static int4x4 mul(int4x3 a, int3x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x63C84B0", Offset = "0x63C74B0", VA = "0x63C84B0")]
	public static int4 mul(int4x4 a, int4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x63C85B0", Offset = "0x63C75B0", VA = "0x63C85B0")]
	public static int4x2 mul(int4x4 a, int4x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x63C87C0", Offset = "0x63C77C0", VA = "0x63C87C0")]
	public static int4x3 mul(int4x4 a, int4x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x63C8B30", Offset = "0x63C7B30", VA = "0x63C8B30")]
	public static int4x4 mul(int4x4 a, int4x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x63C8FB0", Offset = "0x63C7FB0", VA = "0x63C8FB0")]
	public static uint mul(uint a, uint b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x63C8FC0", Offset = "0x63C7FC0", VA = "0x63C8FC0")]
	public static uint mul(uint2 a, uint2 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x63C8FE0", Offset = "0x63C7FE0", VA = "0x63C8FE0")]
	public static uint2 mul(uint2 a, uint2x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x63C9010", Offset = "0x63C8010", VA = "0x63C9010")]
	public static uint3 mul(uint2 a, uint2x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x63C9050", Offset = "0x63C8050", VA = "0x63C9050")]
	public static uint4 mul(uint2 a, uint2x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x63C90B0", Offset = "0x63C80B0", VA = "0x63C90B0")]
	public static uint mul(uint3 a, uint3 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x63C90D0", Offset = "0x63C80D0", VA = "0x63C90D0")]
	public static uint2 mul(uint3 a, uint3x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x63C9110", Offset = "0x63C8110", VA = "0x63C9110")]
	public static uint3 mul(uint3 a, uint3x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x63C9170", Offset = "0x63C8170", VA = "0x63C9170")]
	public static uint4 mul(uint3 a, uint3x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x63C91F0", Offset = "0x63C81F0", VA = "0x63C91F0")]
	public static uint mul(uint4 a, uint4 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x63C9220", Offset = "0x63C8220", VA = "0x63C9220")]
	public static uint2 mul(uint4 a, uint4x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x63C9280", Offset = "0x63C8280", VA = "0x63C9280")]
	public static uint3 mul(uint4 a, uint4x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x63C9300", Offset = "0x63C8300", VA = "0x63C9300")]
	public static uint4 mul(uint4 a, uint4x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x63C93B0", Offset = "0x63C83B0", VA = "0x63C93B0")]
	public static uint2 mul(uint2x2 a, uint2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x63C93E0", Offset = "0x63C83E0", VA = "0x63C93E0")]
	public static uint2x2 mul(uint2x2 a, uint2x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x63C9440", Offset = "0x63C8440", VA = "0x63C9440")]
	public static uint2x3 mul(uint2x2 a, uint2x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x63C94F0", Offset = "0x63C84F0", VA = "0x63C94F0")]
	public static uint2x4 mul(uint2x2 a, uint2x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x63C95F0", Offset = "0x63C85F0", VA = "0x63C95F0")]
	public static uint2 mul(uint2x3 a, uint3 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x63C9640", Offset = "0x63C8640", VA = "0x63C9640")]
	public static uint2x2 mul(uint2x3 a, uint3x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x63C96E0", Offset = "0x63C86E0", VA = "0x63C96E0")]
	public static uint2x3 mul(uint2x3 a, uint3x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x63C9800", Offset = "0x63C8800", VA = "0x63C9800")]
	public static uint2x4 mul(uint2x3 a, uint3x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x63C9980", Offset = "0x63C8980", VA = "0x63C9980")]
	public static uint2 mul(uint2x4 a, uint4 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x63C9A00", Offset = "0x63C8A00", VA = "0x63C9A00")]
	public static uint2x2 mul(uint2x4 a, uint4x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x63C9AE0", Offset = "0x63C8AE0", VA = "0x63C9AE0")]
	public static uint2x3 mul(uint2x4 a, uint4x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x63C9C70", Offset = "0x63C8C70", VA = "0x63C9C70")]
	public static uint2x4 mul(uint2x4 a, uint4x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x63C9E90", Offset = "0x63C8E90", VA = "0x63C9E90")]
	public static uint3 mul(uint3x2 a, uint2 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x63C9EE0", Offset = "0x63C8EE0", VA = "0x63C9EE0")]
	public static uint3x2 mul(uint3x2 a, uint2x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x63C9F80", Offset = "0x63C8F80", VA = "0x63C9F80")]
	public static uint3x3 mul(uint3x2 a, uint2x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x63CA080", Offset = "0x63C9080", VA = "0x63CA080")]
	public static uint3x4 mul(uint3x2 a, uint2x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x63CA1E0", Offset = "0x63C91E0", VA = "0x63CA1E0")]
	public static uint3 mul(uint3x3 a, uint3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x63CA250", Offset = "0x63C9250", VA = "0x63CA250")]
	public static uint3x2 mul(uint3x3 a, uint3x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x63CA360", Offset = "0x63C9360", VA = "0x63CA360")]
	public static uint3x3 mul(uint3x3 a, uint3x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x63CA500", Offset = "0x63C9500", VA = "0x63CA500")]
	public static uint3x4 mul(uint3x3 a, uint3x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x63CA740", Offset = "0x63C9740", VA = "0x63CA740")]
	public static uint3 mul(uint3x4 a, uint4 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x63CA7F0", Offset = "0x63C97F0", VA = "0x63CA7F0")]
	public static uint3x2 mul(uint3x4 a, uint4x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x63CA960", Offset = "0x63C9960", VA = "0x63CA960")]
	public static uint3x3 mul(uint3x4 a, uint4x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x63CABA0", Offset = "0x63C9BA0", VA = "0x63CABA0")]
	public static uint3x4 mul(uint3x4 a, uint4x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x63CAEA0", Offset = "0x63C9EA0", VA = "0x63CAEA0")]
	public static uint4 mul(uint4x2 a, uint2 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x63CAF10", Offset = "0x63C9F10", VA = "0x63CAF10")]
	public static uint4x2 mul(uint4x2 a, uint2x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x63CB010", Offset = "0x63CA010", VA = "0x63CB010")]
	public static uint4x3 mul(uint4x2 a, uint2x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000700")]
	[Address(RVA = "0x63CB190", Offset = "0x63CA190", VA = "0x63CB190")]
	public static uint4x4 mul(uint4x2 a, uint2x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000701")]
	[Address(RVA = "0x63CB3A0", Offset = "0x63CA3A0", VA = "0x63CB3A0")]
	public static uint4 mul(uint4x3 a, uint3 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000702")]
	[Address(RVA = "0x63CB440", Offset = "0x63CA440", VA = "0x63CB440")]
	public static uint4x2 mul(uint4x3 a, uint3x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000703")]
	[Address(RVA = "0x63CB5B0", Offset = "0x63CA5B0", VA = "0x63CB5B0")]
	public static uint4x3 mul(uint4x3 a, uint3x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000704")]
	[Address(RVA = "0x63CB810", Offset = "0x63CA810", VA = "0x63CB810")]
	public static uint4x4 mul(uint4x3 a, uint3x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000705")]
	[Address(RVA = "0x63CBB70", Offset = "0x63CAB70", VA = "0x63CBB70")]
	public static uint4 mul(uint4x4 a, uint4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000706")]
	[Address(RVA = "0x63CBC70", Offset = "0x63CAC70", VA = "0x63CBC70")]
	public static uint4x2 mul(uint4x4 a, uint4x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000707")]
	[Address(RVA = "0x63CBE80", Offset = "0x63CAE80", VA = "0x63CBE80")]
	public static uint4x3 mul(uint4x4 a, uint4x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000708")]
	[Address(RVA = "0x63CC1F0", Offset = "0x63CB1F0", VA = "0x63CC1F0")]
	public static uint4x4 mul(uint4x4 a, uint4x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000709")]
	[Address(RVA = "0x63CC670", Offset = "0x63CB670", VA = "0x63CC670")]
	public static quaternion quaternion(float x, float y, float z, float w)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070A")]
	[Address(RVA = "0x63CC680", Offset = "0x63CB680", VA = "0x63CC680")]
	public static quaternion quaternion(float4 value)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070B")]
	[Address(RVA = "0x63CC690", Offset = "0x63CB690", VA = "0x63CC690")]
	public static quaternion quaternion(float3x3 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070C")]
	[Address(RVA = "0x63CC6E0", Offset = "0x63CB6E0", VA = "0x63CC6E0")]
	public static quaternion quaternion(float4x4 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070D")]
	[Address(RVA = "0x63CC740", Offset = "0x63CB740", VA = "0x63CC740")]
	public static quaternion conjugate(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070E")]
	[Address(RVA = "0x63CC760", Offset = "0x63CB760", VA = "0x63CC760")]
	public static quaternion inverse(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070F")]
	[Address(RVA = "0x63CC7D0", Offset = "0x63CB7D0", VA = "0x63CC7D0")]
	public static float dot(quaternion a, quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000710")]
	[Address(RVA = "0x63CC7F0", Offset = "0x63CB7F0", VA = "0x63CC7F0")]
	public static float length(quaternion q)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000711")]
	[Address(RVA = "0x63CC8B0", Offset = "0x63CB8B0", VA = "0x63CC8B0")]
	public static float lengthsq(quaternion q)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000712")]
	[Address(RVA = "0x63CC8D0", Offset = "0x63CB8D0", VA = "0x63CC8D0")]
	public static quaternion normalize(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000713")]
	[Address(RVA = "0x63CC9B0", Offset = "0x63CB9B0", VA = "0x63CC9B0")]
	public static quaternion normalizesafe(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000714")]
	[Address(RVA = "0x63CCAF0", Offset = "0x63CBAF0", VA = "0x63CCAF0")]
	public static quaternion normalizesafe(quaternion q, quaternion defaultvalue)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000715")]
	[Address(RVA = "0x63CCC00", Offset = "0x63CBC00", VA = "0x63CCC00")]
	public static quaternion unitexp(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000716")]
	[Address(RVA = "0x63CCDD0", Offset = "0x63CBDD0", VA = "0x63CCDD0")]
	public static quaternion exp(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000717")]
	[Address(RVA = "0x63CD030", Offset = "0x63CC030", VA = "0x63CD030")]
	public static quaternion unitlog(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000718")]
	[Address(RVA = "0x63CD1F0", Offset = "0x63CC1F0", VA = "0x63CD1F0")]
	public static quaternion log(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000719")]
	[Address(RVA = "0x63CD4A0", Offset = "0x63CC4A0", VA = "0x63CD4A0")]
	public static quaternion mul(quaternion a, quaternion b)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071A")]
	[Address(RVA = "0x63CD530", Offset = "0x63CC530", VA = "0x63CD530")]
	public static float3 mul(quaternion q, float3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071B")]
	[Address(RVA = "0x63CD5E0", Offset = "0x63CC5E0", VA = "0x63CD5E0")]
	public static float3 rotate(quaternion q, float3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071C")]
	[Address(RVA = "0x63CD690", Offset = "0x63CC690", VA = "0x63CD690")]
	public static quaternion nlerp(quaternion q1, quaternion q2, float t)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071D")]
	[Address(RVA = "0x63CD820", Offset = "0x63CC820", VA = "0x63CD820")]
	public static quaternion slerp(quaternion q1, quaternion q2, float t)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071E")]
	[Address(RVA = "0x63CDCA0", Offset = "0x63CCCA0", VA = "0x63CDCA0")]
	public static float angle(quaternion q1, quaternion q2)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071F")]
	[Address(RVA = "0x63CDFA0", Offset = "0x63CCFA0", VA = "0x63CDFA0")]
	public static quaternion rotation(float3x3 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000720")]
	[Address(RVA = "0x63CE380", Offset = "0x63CD380", VA = "0x63CE380")]
	private static float3x3 adj(float3x3 m, out float det)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000721")]
	[Address(RVA = "0x63CE4A0", Offset = "0x63CD4A0", VA = "0x63CE4A0")]
	private static bool adjInverse(float3x3 m, out float3x3 i, float epsilon = 1E-30f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000722")]
	[Address(RVA = "0x63CE600", Offset = "0x63CD600", VA = "0x63CE600")]
	public static uint hash(quaternion q)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000723")]
	[Address(RVA = "0x63CE650", Offset = "0x63CD650", VA = "0x63CE650")]
	public static uint4 hashwide(quaternion q)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000724")]
	[Address(RVA = "0x63CE6B0", Offset = "0x63CD6B0", VA = "0x63CE6B0")]
	public static float3 forward(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000725")]
	[Address(RVA = "0x63CE750", Offset = "0x63CD750", VA = "0x63CE750")]
	public static RigidTransform RigidTransform(quaternion rot, float3 pos)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000726")]
	[Address(RVA = "0x63CE770", Offset = "0x63CD770", VA = "0x63CE770")]
	public static RigidTransform RigidTransform(float3x3 rotation, float3 translation)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000727")]
	[Address(RVA = "0x63CE7F0", Offset = "0x63CD7F0", VA = "0x63CE7F0")]
	public static RigidTransform RigidTransform(float4x4 transform)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000728")]
	[Address(RVA = "0x63CE8B0", Offset = "0x63CD8B0", VA = "0x63CE8B0")]
	public static RigidTransform inverse(RigidTransform t)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000729")]
	[Address(RVA = "0x63CE9E0", Offset = "0x63CD9E0", VA = "0x63CE9E0")]
	public static RigidTransform mul(RigidTransform a, RigidTransform b)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072A")]
	[Address(RVA = "0x63CEB50", Offset = "0x63CDB50", VA = "0x63CEB50")]
	public static float4 mul(RigidTransform a, float4 pos)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072B")]
	[Address(RVA = "0x63CEC50", Offset = "0x63CDC50", VA = "0x63CEC50")]
	public static float3 rotate(RigidTransform a, float3 dir)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072C")]
	[Address(RVA = "0x63CED10", Offset = "0x63CDD10", VA = "0x63CED10")]
	public static float3 transform(RigidTransform a, float3 pos)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072D")]
	[Address(RVA = "0x63CEDE0", Offset = "0x63CDDE0", VA = "0x63CEDE0")]
	public static uint hash(RigidTransform t)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072E")]
	[Address(RVA = "0x63CEE60", Offset = "0x63CDE60", VA = "0x63CEE60")]
	public static uint4 hashwide(RigidTransform t)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072F")]
	[Address(RVA = "0x63CEF20", Offset = "0x63CDF20", VA = "0x63CEF20")]
	public static uint2 uint2(uint x, uint y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000730")]
	[Address(RVA = "0x63CEF30", Offset = "0x63CDF30", VA = "0x63CEF30")]
	public static uint2 uint2(uint2 xy)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000731")]
	[Address(RVA = "0x63CEF40", Offset = "0x63CDF40", VA = "0x63CEF40")]
	public static uint2 uint2(uint v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000732")]
	[Address(RVA = "0x63CEF50", Offset = "0x63CDF50", VA = "0x63CEF50")]
	public static uint2 uint2(bool v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000733")]
	[Address(RVA = "0x63CEF60", Offset = "0x63CDF60", VA = "0x63CEF60")]
	public static uint2 uint2(bool2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000734")]
	[Address(RVA = "0x63CEF80", Offset = "0x63CDF80", VA = "0x63CEF80")]
	public static uint2 uint2(int v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000735")]
	[Address(RVA = "0x63CEF90", Offset = "0x63CDF90", VA = "0x63CEF90")]
	public static uint2 uint2(int2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000736")]
	[Address(RVA = "0x63CEFA0", Offset = "0x63CDFA0", VA = "0x63CEFA0")]
	public static uint2 uint2(float v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000737")]
	[Address(RVA = "0x63CEFC0", Offset = "0x63CDFC0", VA = "0x63CEFC0")]
	public static uint2 uint2(float2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000738")]
	[Address(RVA = "0x63CEFF0", Offset = "0x63CDFF0", VA = "0x63CEFF0")]
	public static uint2 uint2(double v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000739")]
	[Address(RVA = "0x63CF010", Offset = "0x63CE010", VA = "0x63CF010")]
	public static uint2 uint2(double2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073A")]
	[Address(RVA = "0x63CF040", Offset = "0x63CE040", VA = "0x63CF040")]
	public static uint hash(uint2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073B")]
	[Address(RVA = "0x63CF070", Offset = "0x63CE070", VA = "0x63CF070")]
	public static uint2 hashwide(uint2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073C")]
	[Address(RVA = "0x63CF0B0", Offset = "0x63CE0B0", VA = "0x63CF0B0")]
	public static uint shuffle(uint2 left, uint2 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073D")]
	[Address(RVA = "0x63CF0C0", Offset = "0x63CE0C0", VA = "0x63CF0C0")]
	public static uint2 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073E")]
	[Address(RVA = "0x63CF100", Offset = "0x63CE100", VA = "0x63CF100")]
	public static uint3 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073F")]
	[Address(RVA = "0x63CF160", Offset = "0x63CE160", VA = "0x63CF160")]
	public static uint4 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000740")]
	[Address(RVA = "0x63CF1E0", Offset = "0x63CE1E0", VA = "0x63CF1E0")]
	internal static uint select_shuffle_component(uint2 a, uint2 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000741")]
	[Address(RVA = "0x63CF2B0", Offset = "0x63CE2B0", VA = "0x63CF2B0")]
	public static uint2x2 uint2x2(uint2 c0, uint2 c1)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000742")]
	[Address(RVA = "0x63CF2C0", Offset = "0x63CE2C0", VA = "0x63CF2C0")]
	public static uint2x2 uint2x2(uint m00, uint m01, uint m10, uint m11)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000743")]
	[Address(RVA = "0x63CF2E0", Offset = "0x63CE2E0", VA = "0x63CF2E0")]
	public static uint2x2 uint2x2(uint v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000744")]
	[Address(RVA = "0x63CF2F0", Offset = "0x63CE2F0", VA = "0x63CF2F0")]
	public static uint2x2 uint2x2(bool v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000745")]
	[Address(RVA = "0x63CF310", Offset = "0x63CE310", VA = "0x63CF310")]
	public static uint2x2 uint2x2(bool2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000746")]
	[Address(RVA = "0x63CF340", Offset = "0x63CE340", VA = "0x63CF340")]
	public static uint2x2 uint2x2(int v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000747")]
	[Address(RVA = "0x63CF350", Offset = "0x63CE350", VA = "0x63CF350")]
	public static uint2x2 uint2x2(int2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000748")]
	[Address(RVA = "0x63CF360", Offset = "0x63CE360", VA = "0x63CF360")]
	public static uint2x2 uint2x2(float v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000749")]
	[Address(RVA = "0x63CF380", Offset = "0x63CE380", VA = "0x63CF380")]
	public static uint2x2 uint2x2(float2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074A")]
	[Address(RVA = "0x63CF410", Offset = "0x63CE410", VA = "0x63CF410")]
	public static uint2x2 uint2x2(double v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074B")]
	[Address(RVA = "0x63CF440", Offset = "0x63CE440", VA = "0x63CF440")]
	public static uint2x2 uint2x2(double2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074C")]
	[Address(RVA = "0x63CF4F0", Offset = "0x63CE4F0", VA = "0x63CF4F0")]
	public static uint2x2 transpose(uint2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074D")]
	[Address(RVA = "0x63CF510", Offset = "0x63CE510", VA = "0x63CF510")]
	public static uint hash(uint2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074E")]
	[Address(RVA = "0x63CF560", Offset = "0x63CE560", VA = "0x63CF560")]
	public static uint2 hashwide(uint2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074F")]
	[Address(RVA = "0x63CF5B0", Offset = "0x63CE5B0", VA = "0x63CF5B0")]
	public static uint2x3 uint2x3(uint2 c0, uint2 c1, uint2 c2)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000750")]
	[Address(RVA = "0x63CF5C0", Offset = "0x63CE5C0", VA = "0x63CF5C0")]
	public static uint2x3 uint2x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000751")]
	[Address(RVA = "0x63CF5F0", Offset = "0x63CE5F0", VA = "0x63CF5F0")]
	public static uint2x3 uint2x3(uint v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000752")]
	[Address(RVA = "0x63CF610", Offset = "0x63CE610", VA = "0x63CF610")]
	public static uint2x3 uint2x3(bool v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000753")]
	[Address(RVA = "0x63CF640", Offset = "0x63CE640", VA = "0x63CF640")]
	public static uint2x3 uint2x3(bool2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000754")]
	[Address(RVA = "0x63CF6A0", Offset = "0x63CE6A0", VA = "0x63CF6A0")]
	public static uint2x3 uint2x3(int v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000755")]
	[Address(RVA = "0x63CF6C0", Offset = "0x63CE6C0", VA = "0x63CF6C0")]
	public static uint2x3 uint2x3(int2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000756")]
	[Address(RVA = "0x63CF6E0", Offset = "0x63CE6E0", VA = "0x63CF6E0")]
	public static uint2x3 uint2x3(float v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000757")]
	[Address(RVA = "0x63CF710", Offset = "0x63CE710", VA = "0x63CF710")]
	public static uint2x3 uint2x3(float2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000758")]
	[Address(RVA = "0x63CF7E0", Offset = "0x63CE7E0", VA = "0x63CF7E0")]
	public static uint2x3 uint2x3(double v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000759")]
	[Address(RVA = "0x63CF810", Offset = "0x63CE810", VA = "0x63CF810")]
	public static uint2x3 uint2x3(double2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075A")]
	[Address(RVA = "0x63CF900", Offset = "0x63CE900", VA = "0x63CF900")]
	public static uint3x2 transpose(uint2x3 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075B")]
	[Address(RVA = "0x63CF930", Offset = "0x63CE930", VA = "0x63CF930")]
	public static uint hash(uint2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075C")]
	[Address(RVA = "0x63CF9A0", Offset = "0x63CE9A0", VA = "0x63CF9A0")]
	public static uint2 hashwide(uint2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075D")]
	[Address(RVA = "0x63CFA20", Offset = "0x63CEA20", VA = "0x63CFA20")]
	public static uint2x4 uint2x4(uint2 c0, uint2 c1, uint2 c2, uint2 c3)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075E")]
	[Address(RVA = "0x63CFA40", Offset = "0x63CEA40", VA = "0x63CFA40")]
	public static uint2x4 uint2x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075F")]
	[Address(RVA = "0x63CFA90", Offset = "0x63CEA90", VA = "0x63CFA90")]
	public static uint2x4 uint2x4(uint v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000760")]
	[Address(RVA = "0x63CFAB0", Offset = "0x63CEAB0", VA = "0x63CFAB0")]
	public static uint2x4 uint2x4(bool v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000761")]
	[Address(RVA = "0x63CFAE0", Offset = "0x63CEAE0", VA = "0x63CFAE0")]
	public static uint2x4 uint2x4(bool2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000762")]
	[Address(RVA = "0x63CFB60", Offset = "0x63CEB60", VA = "0x63CFB60")]
	public static uint2x4 uint2x4(int v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000763")]
	[Address(RVA = "0x63CFB80", Offset = "0x63CEB80", VA = "0x63CFB80")]
	public static uint2x4 uint2x4(int2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000764")]
	[Address(RVA = "0x63CFBA0", Offset = "0x63CEBA0", VA = "0x63CFBA0")]
	public static uint2x4 uint2x4(float v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000765")]
	[Address(RVA = "0x63CFBD0", Offset = "0x63CEBD0", VA = "0x63CFBD0")]
	public static uint2x4 uint2x4(float2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000766")]
	[Address(RVA = "0x63CFCF0", Offset = "0x63CECF0", VA = "0x63CFCF0")]
	public static uint2x4 uint2x4(double v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000767")]
	[Address(RVA = "0x63CFD30", Offset = "0x63CED30", VA = "0x63CFD30")]
	public static uint2x4 uint2x4(double2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000768")]
	[Address(RVA = "0x63CFE70", Offset = "0x63CEE70", VA = "0x63CFE70")]
	public static uint4x2 transpose(uint2x4 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000769")]
	[Address(RVA = "0x63CFEC0", Offset = "0x63CEEC0", VA = "0x63CFEC0")]
	public static uint hash(uint2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076A")]
	[Address(RVA = "0x63CFF40", Offset = "0x63CEF40", VA = "0x63CFF40")]
	public static uint2 hashwide(uint2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076B")]
	[Address(RVA = "0x63CFFE0", Offset = "0x63CEFE0", VA = "0x63CFFE0")]
	public static uint3 uint3(uint x, uint y, uint z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076C")]
	[Address(RVA = "0x63CFFF0", Offset = "0x63CEFF0", VA = "0x63CFFF0")]
	public static uint3 uint3(uint x, uint2 yz)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076D")]
	[Address(RVA = "0x63D0010", Offset = "0x63CF010", VA = "0x63D0010")]
	public static uint3 uint3(uint2 xy, uint z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076E")]
	[Address(RVA = "0x63D0020", Offset = "0x63CF020", VA = "0x63D0020")]
	public static uint3 uint3(uint3 xyz)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076F")]
	[Address(RVA = "0x63D0030", Offset = "0x63CF030", VA = "0x63D0030")]
	public static uint3 uint3(uint v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000770")]
	[Address(RVA = "0x63D0040", Offset = "0x63CF040", VA = "0x63D0040")]
	public static uint3 uint3(bool v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000771")]
	[Address(RVA = "0x63D0050", Offset = "0x63CF050", VA = "0x63D0050")]
	public static uint3 uint3(bool3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000772")]
	[Address(RVA = "0x63D0080", Offset = "0x63CF080", VA = "0x63D0080")]
	public static uint3 uint3(int v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000773")]
	[Address(RVA = "0x63D0090", Offset = "0x63CF090", VA = "0x63D0090")]
	public static uint3 uint3(int3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000774")]
	[Address(RVA = "0x63D00A0", Offset = "0x63CF0A0", VA = "0x63D00A0")]
	public static uint3 uint3(float v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000775")]
	[Address(RVA = "0x63D00C0", Offset = "0x63CF0C0", VA = "0x63D00C0")]
	public static uint3 uint3(float3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000776")]
	[Address(RVA = "0x63D0100", Offset = "0x63CF100", VA = "0x63D0100")]
	public static uint3 uint3(double v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000777")]
	[Address(RVA = "0x63D0120", Offset = "0x63CF120", VA = "0x63D0120")]
	public static uint3 uint3(double3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000778")]
	[Address(RVA = "0x63D0170", Offset = "0x63CF170", VA = "0x63D0170")]
	public static uint hash(uint3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000779")]
	[Address(RVA = "0x63D01A0", Offset = "0x63CF1A0", VA = "0x63D01A0")]
	public static uint3 hashwide(uint3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077A")]
	[Address(RVA = "0x63D01E0", Offset = "0x63CF1E0", VA = "0x63D01E0")]
	public static uint shuffle(uint3 left, uint3 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077B")]
	[Address(RVA = "0x63D01F0", Offset = "0x63CF1F0", VA = "0x63D01F0")]
	public static uint2 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077C")]
	[Address(RVA = "0x63D0250", Offset = "0x63CF250", VA = "0x63D0250")]
	public static uint3 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077D")]
	[Address(RVA = "0x63D02D0", Offset = "0x63CF2D0", VA = "0x63D02D0")]
	public static uint4 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077E")]
	[Address(RVA = "0x63D0370", Offset = "0x63CF370", VA = "0x63D0370")]
	internal static uint select_shuffle_component(uint3 a, uint3 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077F")]
	[Address(RVA = "0x63D0440", Offset = "0x63CF440", VA = "0x63D0440")]
	public static uint3x2 uint3x2(uint3 c0, uint3 c1)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000780")]
	[Address(RVA = "0x63D0460", Offset = "0x63CF460", VA = "0x63D0460")]
	public static uint3x2 uint3x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000781")]
	[Address(RVA = "0x63D0480", Offset = "0x63CF480", VA = "0x63D0480")]
	public static uint3x2 uint3x2(uint v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000782")]
	[Address(RVA = "0x63D04A0", Offset = "0x63CF4A0", VA = "0x63D04A0")]
	public static uint3x2 uint3x2(bool v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000783")]
	[Address(RVA = "0x63D04D0", Offset = "0x63CF4D0", VA = "0x63D04D0")]
	public static uint3x2 uint3x2(bool3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000784")]
	[Address(RVA = "0x63D0540", Offset = "0x63CF540", VA = "0x63D0540")]
	public static uint3x2 uint3x2(int v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000785")]
	[Address(RVA = "0x63D0560", Offset = "0x63CF560", VA = "0x63D0560")]
	public static uint3x2 uint3x2(int3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000786")]
	[Address(RVA = "0x63D0590", Offset = "0x63CF590", VA = "0x63D0590")]
	public static uint3x2 uint3x2(float v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000787")]
	[Address(RVA = "0x63D05C0", Offset = "0x63CF5C0", VA = "0x63D05C0")]
	public static uint3x2 uint3x2(float3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000788")]
	[Address(RVA = "0x63D0660", Offset = "0x63CF660", VA = "0x63D0660")]
	public static uint3x2 uint3x2(double v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000789")]
	[Address(RVA = "0x63D0690", Offset = "0x63CF690", VA = "0x63D0690")]
	public static uint3x2 uint3x2(double3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078A")]
	[Address(RVA = "0x63D0740", Offset = "0x63CF740", VA = "0x63D0740")]
	public static uint2x3 transpose(uint3x2 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078B")]
	[Address(RVA = "0x63D0780", Offset = "0x63CF780", VA = "0x63D0780")]
	public static uint hash(uint3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078C")]
	[Address(RVA = "0x63D07F0", Offset = "0x63CF7F0", VA = "0x63D07F0")]
	public static uint3 hashwide(uint3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078D")]
	[Address(RVA = "0x63D0870", Offset = "0x63CF870", VA = "0x63D0870")]
	public static uint3x3 uint3x3(uint3 c0, uint3 c1, uint3 c2)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078E")]
	[Address(RVA = "0x63D08A0", Offset = "0x63CF8A0", VA = "0x63D08A0")]
	public static uint3x3 uint3x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078F")]
	[Address(RVA = "0x63D08E0", Offset = "0x63CF8E0", VA = "0x63D08E0")]
	public static uint3x3 uint3x3(uint v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000790")]
	[Address(RVA = "0x63D0910", Offset = "0x63CF910", VA = "0x63D0910")]
	public static uint3x3 uint3x3(bool v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000791")]
	[Address(RVA = "0x63D0940", Offset = "0x63CF940", VA = "0x63D0940")]
	public static uint3x3 uint3x3(bool3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000792")]
	[Address(RVA = "0x63D09D0", Offset = "0x63CF9D0", VA = "0x63D09D0")]
	public static uint3x3 uint3x3(int v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000793")]
	[Address(RVA = "0x63D0A00", Offset = "0x63CFA00", VA = "0x63D0A00")]
	public static uint3x3 uint3x3(int3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000794")]
	[Address(RVA = "0x63D0A40", Offset = "0x63CFA40", VA = "0x63D0A40")]
	public static uint3x3 uint3x3(float v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000795")]
	[Address(RVA = "0x63D0A80", Offset = "0x63CFA80", VA = "0x63D0A80")]
	public static uint3x3 uint3x3(float3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000796")]
	[Address(RVA = "0x63D0B70", Offset = "0x63CFB70", VA = "0x63D0B70")]
	public static uint3x3 uint3x3(double v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000797")]
	[Address(RVA = "0x63D0BB0", Offset = "0x63CFBB0", VA = "0x63D0BB0")]
	public static uint3x3 uint3x3(double3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000798")]
	[Address(RVA = "0x63D0CB0", Offset = "0x63CFCB0", VA = "0x63D0CB0")]
	public static uint3x3 transpose(uint3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000799")]
	[Address(RVA = "0x63D0D00", Offset = "0x63CFD00", VA = "0x63D0D00")]
	public static uint hash(uint3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079A")]
	[Address(RVA = "0x63D0D90", Offset = "0x63CFD90", VA = "0x63D0D90")]
	public static uint3 hashwide(uint3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079B")]
	[Address(RVA = "0x63D0E30", Offset = "0x63CFE30", VA = "0x63D0E30")]
	public static uint3x4 uint3x4(uint3 c0, uint3 c1, uint3 c2, uint3 c3)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079C")]
	[Address(RVA = "0x63D0E70", Offset = "0x63CFE70", VA = "0x63D0E70")]
	public static uint3x4 uint3x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079D")]
	[Address(RVA = "0x63D0ED0", Offset = "0x63CFED0", VA = "0x63D0ED0")]
	public static uint3x4 uint3x4(uint v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079E")]
	[Address(RVA = "0x63D0F00", Offset = "0x63CFF00", VA = "0x63D0F00")]
	public static uint3x4 uint3x4(bool v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079F")]
	[Address(RVA = "0x63D0F40", Offset = "0x63CFF40", VA = "0x63D0F40")]
	public static uint3x4 uint3x4(bool3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x63D0FF0", Offset = "0x63CFFF0", VA = "0x63D0FF0")]
	public static uint3x4 uint3x4(int v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x63D1020", Offset = "0x63D0020", VA = "0x63D1020")]
	public static uint3x4 uint3x4(int3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x63D1070", Offset = "0x63D0070", VA = "0x63D1070")]
	public static uint3x4 uint3x4(float v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x63D10B0", Offset = "0x63D00B0", VA = "0x63D10B0")]
	public static uint3x4 uint3x4(float3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x63D11F0", Offset = "0x63D01F0", VA = "0x63D11F0")]
	public static uint3x4 uint3x4(double v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x63D1230", Offset = "0x63D0230", VA = "0x63D1230")]
	public static uint3x4 uint3x4(double3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x63D1390", Offset = "0x63D0390", VA = "0x63D1390")]
	public static uint4x3 transpose(uint3x4 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x63D1400", Offset = "0x63D0400", VA = "0x63D1400")]
	public static uint hash(uint3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x63D14C0", Offset = "0x63D04C0", VA = "0x63D14C0")]
	public static uint3 hashwide(uint3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x63D1590", Offset = "0x63D0590", VA = "0x63D1590")]
	public static uint4 uint4(uint x, uint y, uint z, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x63D15B0", Offset = "0x63D05B0", VA = "0x63D15B0")]
	public static uint4 uint4(uint x, uint y, uint2 zw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x63D15C0", Offset = "0x63D05C0", VA = "0x63D15C0")]
	public static uint4 uint4(uint x, uint2 yz, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x63D15D0", Offset = "0x63D05D0", VA = "0x63D15D0")]
	public static uint4 uint4(uint x, uint3 yzw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x63D15E0", Offset = "0x63D05E0", VA = "0x63D15E0")]
	public static uint4 uint4(uint2 xy, uint z, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x63D15F0", Offset = "0x63D05F0", VA = "0x63D15F0")]
	public static uint4 uint4(uint2 xy, uint2 zw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x63D1600", Offset = "0x63D0600", VA = "0x63D1600")]
	public static uint4 uint4(uint3 xyz, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x63D1610", Offset = "0x63D0610", VA = "0x63D1610")]
	public static uint4 uint4(uint4 xyzw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x63D1620", Offset = "0x63D0620", VA = "0x63D1620")]
	public static uint4 uint4(uint v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x63D1630", Offset = "0x63D0630", VA = "0x63D1630")]
	public static uint4 uint4(bool v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x63D1640", Offset = "0x63D0640", VA = "0x63D1640")]
	public static uint4 uint4(bool4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x63D1670", Offset = "0x63D0670", VA = "0x63D1670")]
	public static uint4 uint4(int v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x63D1680", Offset = "0x63D0680", VA = "0x63D1680")]
	public static uint4 uint4(int4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x63D1690", Offset = "0x63D0690", VA = "0x63D1690")]
	public static uint4 uint4(float v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x63D16B0", Offset = "0x63D06B0", VA = "0x63D16B0")]
	public static uint4 uint4(float4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x63D1740", Offset = "0x63D0740", VA = "0x63D1740")]
	public static uint4 uint4(double v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x63D1770", Offset = "0x63D0770", VA = "0x63D1770")]
	public static uint4 uint4(double4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x63D1820", Offset = "0x63D0820", VA = "0x63D1820")]
	public static uint hash(uint4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x63D1870", Offset = "0x63D0870", VA = "0x63D1870")]
	public static uint4 hashwide(uint4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x63D18D0", Offset = "0x63D08D0", VA = "0x63D18D0")]
	public static uint shuffle(uint4 left, uint4 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x63D18E0", Offset = "0x63D08E0", VA = "0x63D18E0")]
	public static uint2 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x63D1940", Offset = "0x63D0940", VA = "0x63D1940")]
	public static uint3 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x63D19C0", Offset = "0x63D09C0", VA = "0x63D19C0")]
	public static uint4 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x63D1A70", Offset = "0x63D0A70", VA = "0x63D1A70")]
	internal static uint select_shuffle_component(uint4 a, uint4 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x63D1B60", Offset = "0x63D0B60", VA = "0x63D1B60")]
	public static uint4x2 uint4x2(uint4 c0, uint4 c1)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x63D1B80", Offset = "0x63D0B80", VA = "0x63D1B80")]
	public static uint4x2 uint4x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21, uint m30, uint m31)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x63D1BB0", Offset = "0x63D0BB0", VA = "0x63D1BB0")]
	public static uint4x2 uint4x2(uint v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x63D1BD0", Offset = "0x63D0BD0", VA = "0x63D1BD0")]
	public static uint4x2 uint4x2(bool v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x63D1C00", Offset = "0x63D0C00", VA = "0x63D1C00")]
	public static uint4x2 uint4x2(bool4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x63D1C80", Offset = "0x63D0C80", VA = "0x63D1C80")]
	public static uint4x2 uint4x2(int v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x63D1CA0", Offset = "0x63D0CA0", VA = "0x63D1CA0")]
	public static uint4x2 uint4x2(int4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x63D1CC0", Offset = "0x63D0CC0", VA = "0x63D1CC0")]
	public static uint4x2 uint4x2(float v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x63D1CF0", Offset = "0x63D0CF0", VA = "0x63D1CF0")]
	public static uint4x2 uint4x2(float4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x63D1E10", Offset = "0x63D0E10", VA = "0x63D1E10")]
	public static uint4x2 uint4x2(double v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x63D1E50", Offset = "0x63D0E50", VA = "0x63D1E50")]
	public static uint4x2 uint4x2(double4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x63D1F90", Offset = "0x63D0F90", VA = "0x63D1F90")]
	public static uint2x4 transpose(uint4x2 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x63D1FE0", Offset = "0x63D0FE0", VA = "0x63D1FE0")]
	public static uint hash(uint4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x63D2070", Offset = "0x63D1070", VA = "0x63D2070")]
	public static uint4 hashwide(uint4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x63D2110", Offset = "0x63D1110", VA = "0x63D2110")]
	public static uint4x3 uint4x3(uint4 c0, uint4 c1, uint4 c2)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x63D2130", Offset = "0x63D1130", VA = "0x63D2130")]
	public static uint4x3 uint4x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22, uint m30, uint m31, uint m32)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x63D2190", Offset = "0x63D1190", VA = "0x63D2190")]
	public static uint4x3 uint4x3(uint v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x63D21C0", Offset = "0x63D11C0", VA = "0x63D21C0")]
	public static uint4x3 uint4x3(bool v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x63D21F0", Offset = "0x63D11F0", VA = "0x63D21F0")]
	public static uint4x3 uint4x3(bool4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x63D22A0", Offset = "0x63D12A0", VA = "0x63D22A0")]
	public static uint4x3 uint4x3(int v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x63D22D0", Offset = "0x63D12D0", VA = "0x63D22D0")]
	public static uint4x3 uint4x3(int4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x63D22F0", Offset = "0x63D12F0", VA = "0x63D22F0")]
	public static uint4x3 uint4x3(float v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x63D2330", Offset = "0x63D1330", VA = "0x63D2330")]
	public static uint4x3 uint4x3(float4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x63D24E0", Offset = "0x63D14E0", VA = "0x63D24E0")]
	public static uint4x3 uint4x3(double v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x63D2520", Offset = "0x63D1520", VA = "0x63D2520")]
	public static uint4x3 uint4x3(double4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x63D2700", Offset = "0x63D1700", VA = "0x63D2700")]
	public static uint3x4 transpose(uint4x3 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x63D2770", Offset = "0x63D1770", VA = "0x63D2770")]
	public static uint hash(uint4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x63D2850", Offset = "0x63D1850", VA = "0x63D2850")]
	public static uint4 hashwide(uint4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x63D2930", Offset = "0x63D1930", VA = "0x63D2930")]
	public static uint4x4 uint4x4(uint4 c0, uint4 c1, uint4 c2, uint4 c3)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x63D2960", Offset = "0x63D1960", VA = "0x63D2960")]
	public static uint4x4 uint4x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23, uint m30, uint m31, uint m32, uint m33)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x63D29D0", Offset = "0x63D19D0", VA = "0x63D29D0")]
	public static uint4x4 uint4x4(uint v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x63D2A00", Offset = "0x63D1A00", VA = "0x63D2A00")]
	public static uint4x4 uint4x4(bool v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x63D2A40", Offset = "0x63D1A40", VA = "0x63D2A40")]
	public static uint4x4 uint4x4(bool4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x63D2B20", Offset = "0x63D1B20", VA = "0x63D2B20")]
	public static uint4x4 uint4x4(int v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x63D2B50", Offset = "0x63D1B50", VA = "0x63D2B50")]
	public static uint4x4 uint4x4(int4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x63D2B80", Offset = "0x63D1B80", VA = "0x63D2B80")]
	public static uint4x4 uint4x4(float v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x63D2BC0", Offset = "0x63D1BC0", VA = "0x63D2BC0")]
	public static uint4x4 uint4x4(float4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x63D2E00", Offset = "0x63D1E00", VA = "0x63D2E00")]
	public static uint4x4 uint4x4(double v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x63D2E50", Offset = "0x63D1E50", VA = "0x63D2E50")]
	public static uint4x4 uint4x4(double4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x63D30C0", Offset = "0x63D20C0", VA = "0x63D30C0")]
	public static uint4x4 transpose(uint4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x63D3140", Offset = "0x63D2140", VA = "0x63D3140")]
	public static uint hash(uint4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x63D3250", Offset = "0x63D2250", VA = "0x63D3250")]
	public static uint4 hashwide(uint4x4 v)
	{
		return default(uint4);
	}
}
