// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.math
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x29CF830", Offset = "0x29CDE30", VA = "0x1829CF830")]
	public static AffineTransform AffineTransform(float3 translation, quaternion rotation)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x29CF8B0", Offset = "0x29CDEB0", VA = "0x1829CF8B0")]
	public static AffineTransform AffineTransform(float3 translation, quaternion rotation, float3 scale)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x29CF800", Offset = "0x29CDE00", VA = "0x1829CF800")]
	public static AffineTransform AffineTransform(float3 translation, float3x3 rotationScale)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x29CF6E0", Offset = "0x29CDCE0", VA = "0x1829CF6E0")]
	public static AffineTransform AffineTransform(float3x3 rotationScale)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x29CF760", Offset = "0x29CDD60", VA = "0x1829CF760")]
	public static AffineTransform AffineTransform(float4x4 m)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x29CFAE0", Offset = "0x29CE0E0", VA = "0x1829CFAE0")]
	public static AffineTransform AffineTransform(float3x4 m)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x29CFA30", Offset = "0x29CE030", VA = "0x1829CFA30")]
	public static AffineTransform AffineTransform(RigidTransform rigid)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x29E2A50", Offset = "0x29E1050", VA = "0x1829E2A50")]
	public static float4x4 float4x4(AffineTransform transform)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x29E1040", Offset = "0x29DF640", VA = "0x1829E1040")]
	public static float3x4 float3x4(AffineTransform transform)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x29FBC30", Offset = "0x29FA230", VA = "0x1829FBC30")]
	public static AffineTransform mul(AffineTransform a, AffineTransform b)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x29FAC70", Offset = "0x29F9270", VA = "0x1829FAC70")]
	public static AffineTransform mul(float3x3 a, AffineTransform b)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x29FD7F0", Offset = "0x29FBDF0", VA = "0x1829FD7F0")]
	public static AffineTransform mul(AffineTransform a, float3x3 b)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x29FFAE0", Offset = "0x29FE0E0", VA = "0x1829FFAE0")]
	public static float4 mul(AffineTransform a, float4 pos)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2A043D0", Offset = "0x2A029D0", VA = "0x182A043D0")]
	public static float3 rotate(AffineTransform a, float3 dir)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2A0C530", Offset = "0x2A0AB30", VA = "0x182A0C530")]
	public static float3 transform(AffineTransform a, float3 pos)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x29EC6E0", Offset = "0x29EACE0", VA = "0x1829EC6E0")]
	public static AffineTransform inverse(AffineTransform a)
	{
		return default(AffineTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x29D70C0", Offset = "0x29D56C0", VA = "0x1829D70C0")]
	public static void decompose(AffineTransform a, out float3 translation, out quaternion rotation, out float3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x29E4D10", Offset = "0x29E3310", VA = "0x1829E4D10")]
	public static uint hash(AffineTransform a)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x29E8650", Offset = "0x29E6C50", VA = "0x1829E8650")]
	public static uint4 hashwide(AffineTransform a)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x29D34D0", Offset = "0x29D1AD0", VA = "0x1829D34D0")]
	public static bool2 bool2(bool x, bool y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x29D34F0", Offset = "0x29D1AF0", VA = "0x1829D34F0")]
	public static bool2 bool2(bool2 xy)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x29D34E0", Offset = "0x29D1AE0", VA = "0x1829D34E0")]
	public static bool2 bool2(bool v)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x29E6030", Offset = "0x29E4630", VA = "0x1829E6030")]
	public static uint hash(bool2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x29E7FB0", Offset = "0x29E65B0", VA = "0x1829E7FB0")]
	public static uint2 hashwide(bool2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x2A05BD0", Offset = "0x2A041D0", VA = "0x182A05BD0")]
	public static bool shuffle(bool2 left, bool2 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x2A078C0", Offset = "0x2A05EC0", VA = "0x182A078C0")]
	public static bool2 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x2A05DF0", Offset = "0x2A043F0", VA = "0x182A05DF0")]
	public static bool3 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2A06450", Offset = "0x2A04A50", VA = "0x182A06450")]
	public static bool4 shuffle(bool2 left, bool2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x29CBBF0", Offset = "0x29CA1F0", VA = "0x1829CBBF0")]
	internal static bool select_shuffle_component(bool2 a, bool2 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x29D3510", Offset = "0x29D1B10", VA = "0x1829D3510")]
	public static bool2x2 bool2x2(bool2 c0, bool2 c1)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x29D3540", Offset = "0x29D1B40", VA = "0x1829D3540")]
	public static bool2x2 bool2x2(bool m00, bool m01, bool m10, bool m11)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x29D3520", Offset = "0x29D1B20", VA = "0x1829D3520")]
	public static bool2x2 bool2x2(bool v)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2A0CCE0", Offset = "0x2A0B2E0", VA = "0x182A0CCE0")]
	public static bool2x2 transpose(bool2x2 v)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x29E5F00", Offset = "0x29E4500", VA = "0x1829E5F00")]
	public static uint hash(bool2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x29E9540", Offset = "0x29E7B40", VA = "0x1829E9540")]
	public static uint2 hashwide(bool2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x29D3560", Offset = "0x29D1B60", VA = "0x1829D3560")]
	public static bool2x3 bool2x3(bool2 c0, bool2 c1, bool2 c2)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x29D3580", Offset = "0x29D1B80", VA = "0x1829D3580")]
	public static bool2x3 bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x29D35D0", Offset = "0x29D1BD0", VA = "0x1829D35D0")]
	public static bool2x3 bool2x3(bool v)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2A0C9D0", Offset = "0x2A0AFD0", VA = "0x182A0C9D0")]
	public static bool3x2 transpose(bool2x3 v)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x29E6B90", Offset = "0x29E5190", VA = "0x1829E6B90")]
	public static uint hash(bool2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x29E8300", Offset = "0x29E6900", VA = "0x1829E8300")]
	public static uint2 hashwide(bool2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x29D3610", Offset = "0x29D1C10", VA = "0x1829D3610")]
	public static bool2x4 bool2x4(bool2 c0, bool2 c1, bool2 c2, bool2 c3)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x29D3640", Offset = "0x29D1C40", VA = "0x1829D3640")]
	public static bool2x4 bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x29D3690", Offset = "0x29D1C90", VA = "0x1829D3690")]
	public static bool2x4 bool2x4(bool v)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2A0D380", Offset = "0x2A0B980", VA = "0x182A0D380")]
	public static bool4x2 transpose(bool2x4 v)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x29E63A0", Offset = "0x29E49A0", VA = "0x1829E63A0")]
	public static uint hash(bool2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x29E9D90", Offset = "0x29E8390", VA = "0x1829E9D90")]
	public static uint2 hashwide(bool2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x29D36C0", Offset = "0x29D1CC0", VA = "0x1829D36C0")]
	public static bool3 bool3(bool x, bool y, bool z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x29D3700", Offset = "0x29D1D00", VA = "0x1829D3700")]
	public static bool3 bool3(bool x, bool2 yz)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x29D36E0", Offset = "0x29D1CE0", VA = "0x1829D36E0")]
	public static bool3 bool3(bool2 xy, bool z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x29D3720", Offset = "0x29D1D20", VA = "0x1829D3720")]
	public static bool3 bool3(bool3 xyz)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006C")]
	[Address(RVA = "0x29D36D0", Offset = "0x29D1CD0", VA = "0x1829D36D0")]
	public static bool3 bool3(bool v)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x29E5360", Offset = "0x29E3960", VA = "0x1829E5360")]
	public static uint hash(bool3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006E")]
	[Address(RVA = "0x29E8CE0", Offset = "0x29E72E0", VA = "0x1829E8CE0")]
	public static uint3 hashwide(bool3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2A06870", Offset = "0x2A04E70", VA = "0x182A06870")]
	public static bool shuffle(bool3 left, bool3 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2A075A0", Offset = "0x2A05BA0", VA = "0x182A075A0")]
	public static bool2 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2A06A50", Offset = "0x2A05050", VA = "0x182A06A50")]
	public static bool3 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2A05BE0", Offset = "0x2A041E0", VA = "0x182A05BE0")]
	public static bool4 shuffle(bool3 left, bool3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x29CC050", Offset = "0x29CA650", VA = "0x1829CC050")]
	internal static bool select_shuffle_component(bool3 a, bool3 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x29D3770", Offset = "0x29D1D70", VA = "0x1829D3770")]
	public static bool3x2 bool3x2(bool3 c0, bool3 c1)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x29D3740", Offset = "0x29D1D40", VA = "0x1829D3740")]
	public static bool3x2 bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x29D37A0", Offset = "0x29D1DA0", VA = "0x1829D37A0")]
	public static bool3x2 bool3x2(bool v)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2A0D6D0", Offset = "0x2A0BCD0", VA = "0x182A0D6D0")]
	public static bool2x3 transpose(bool3x2 v)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x29E6780", Offset = "0x29E4D80", VA = "0x1829E6780")]
	public static uint hash(bool3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x29E9740", Offset = "0x29E7D40", VA = "0x1829E9740")]
	public static uint3 hashwide(bool3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x29D3820", Offset = "0x29D1E20", VA = "0x1829D3820")]
	public static bool3x3 bool3x3(bool3 c0, bool3 c1, bool3 c2)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x29D37C0", Offset = "0x29D1DC0", VA = "0x1829D37C0")]
	public static bool3x3 bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x29D3800", Offset = "0x29D1E00", VA = "0x1829D3800")]
	public static bool3x3 bool3x3(bool v)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2A0D320", Offset = "0x2A0B920", VA = "0x182A0D320")]
	public static bool3x3 transpose(bool3x3 v)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x29E6ED0", Offset = "0x29E54D0", VA = "0x1829E6ED0")]
	public static uint hash(bool3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x29E97D0", Offset = "0x29E7DD0", VA = "0x1829E97D0")]
	public static uint3 hashwide(bool3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x29D38C0", Offset = "0x29D1EC0", VA = "0x1829D38C0")]
	public static bool3x4 bool3x4(bool3 c0, bool3 c1, bool3 c2, bool3 c3)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x29D3860", Offset = "0x29D1E60", VA = "0x1829D3860")]
	public static bool3x4 bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x29D3910", Offset = "0x29D1F10", VA = "0x1829D3910")]
	public static bool3x4 bool3x4(bool v)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2A0D720", Offset = "0x2A0BD20", VA = "0x182A0D720")]
	public static bool4x3 transpose(bool3x4 v)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x29E5D00", Offset = "0x29E4300", VA = "0x1829E5D00")]
	public static uint hash(bool3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x29E8940", Offset = "0x29E6F40", VA = "0x1829E8940")]
	public static uint3 hashwide(bool3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x29D3980", Offset = "0x29D1F80", VA = "0x1829D3980")]
	public static bool4 bool4(bool x, bool y, bool z, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x29D39F0", Offset = "0x29D1FF0", VA = "0x1829D39F0")]
	public static bool4 bool4(bool x, bool y, bool2 zw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x29D3960", Offset = "0x29D1F60", VA = "0x1829D3960")]
	public static bool4 bool4(bool x, bool2 yz, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x29D3A30", Offset = "0x29D2030", VA = "0x1829D3A30")]
	public static bool4 bool4(bool x, bool3 yzw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x29D3940", Offset = "0x29D1F40", VA = "0x1829D3940")]
	public static bool4 bool4(bool2 xy, bool z, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x29D39A0", Offset = "0x29D1FA0", VA = "0x1829D39A0")]
	public static bool4 bool4(bool2 xy, bool2 zw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x29D3A10", Offset = "0x29D2010", VA = "0x1829D3A10")]
	public static bool4 bool4(bool3 xyz, bool w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x29D39C0", Offset = "0x29D1FC0", VA = "0x1829D39C0")]
	public static bool4 bool4(bool4 xyzw)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x29D3520", Offset = "0x29D1B20", VA = "0x1829D3520")]
	public static bool4 bool4(bool v)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x29E61E0", Offset = "0x29E47E0", VA = "0x1829E61E0")]
	public static uint hash(bool4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x29E9B60", Offset = "0x29E8160", VA = "0x1829E9B60")]
	public static uint4 hashwide(bool4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2A05BC0", Offset = "0x2A041C0", VA = "0x182A05BC0")]
	public static bool shuffle(bool4 left, bool4 right, ShuffleComponent x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2A07CE0", Offset = "0x2A062E0", VA = "0x182A07CE0")]
	public static bool2 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2A07720", Offset = "0x2A05D20", VA = "0x182A07720")]
	public static bool3 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2A06CF0", Offset = "0x2A052F0", VA = "0x182A06CF0")]
	public static bool4 shuffle(bool4 left, bool4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x29CBAC0", Offset = "0x29CA0C0", VA = "0x1829CBAC0")]
	internal static bool select_shuffle_component(bool4 a, bool4 b, ShuffleComponent component)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x29D3AA0", Offset = "0x29D20A0", VA = "0x1829D3AA0")]
	public static bool4x2 bool4x2(bool4 c0, bool4 c1)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x29D3A50", Offset = "0x29D2050", VA = "0x1829D3A50")]
	public static bool4x2 bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x29D3690", Offset = "0x29D1C90", VA = "0x1829D3690")]
	public static bool4x2 bool4x2(bool v)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2A0C850", Offset = "0x2A0AE50", VA = "0x182A0C850")]
	public static bool2x4 transpose(bool4x2 v)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x29E5970", Offset = "0x29E3F70", VA = "0x1829E5970")]
	public static uint hash(bool4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x29E9260", Offset = "0x29E7860", VA = "0x1829E9260")]
	public static uint4 hashwide(bool4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x29D3B00", Offset = "0x29D2100", VA = "0x1829D3B00")]
	public static bool4x3 bool4x3(bool4 c0, bool4 c1, bool4 c2)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x29D3B10", Offset = "0x29D2110", VA = "0x1829D3B10")]
	public static bool4x3 bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x29D3AB0", Offset = "0x29D20B0", VA = "0x1829D3AB0")]
	public static bool4x3 bool4x3(bool v)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2A0D7E0", Offset = "0x2A0BDE0", VA = "0x182A0D7E0")]
	public static bool3x4 transpose(bool4x3 v)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x29E6240", Offset = "0x29E4840", VA = "0x1829E6240")]
	public static uint hash(bool4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x29E8D30", Offset = "0x29E7330", VA = "0x1829E8D30")]
	public static uint4 hashwide(bool4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x298EBF0", Offset = "0x298D1F0", VA = "0x18298EBF0")]
	public static bool4x4 bool4x4(bool4 c0, bool4 c1, bool4 c2, bool4 c3)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x29D3B90", Offset = "0x29D2190", VA = "0x1829D3B90")]
	public static bool4x4 bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31, bool m32, bool m33)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x29D3C40", Offset = "0x29D2240", VA = "0x1829D3C40")]
	public static bool4x4 bool4x4(bool v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2A0C7B0", Offset = "0x2A0ADB0", VA = "0x182A0C7B0")]
	public static bool4x4 transpose(bool4x4 v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x29E6D50", Offset = "0x29E5350", VA = "0x1829E6D50")]
	public static uint hash(bool4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x29EA000", Offset = "0x29E8600", VA = "0x1829EA000")]
	public static uint4 hashwide(bool4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x298EC90", Offset = "0x298D290", VA = "0x18298EC90")]
	public static double2 double2(double x, double y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x29D8380", Offset = "0x29D6980", VA = "0x1829D8380")]
	public static double2 double2(double2 xy)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x298EA90", Offset = "0x298D090", VA = "0x18298EA90")]
	public static double2 double2(double v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x29D83F0", Offset = "0x29D69F0", VA = "0x1829D83F0")]
	public static double2 double2(bool v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x29D82A0", Offset = "0x29D68A0", VA = "0x1829D82A0")]
	public static double2 double2(bool2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x29D8340", Offset = "0x29D6940", VA = "0x1829D8340")]
	public static double2 double2(int v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x29D82E0", Offset = "0x29D68E0", VA = "0x1829D82E0")]
	public static double2 double2(int2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x29D8240", Offset = "0x29D6840", VA = "0x1829D8240")]
	public static double2 double2(uint v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x29D8310", Offset = "0x29D6910", VA = "0x1829D8310")]
	public static double2 double2(uint2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x29D81F0", Offset = "0x29D67F0", VA = "0x1829D81F0")]
	public static double2 double2(half v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x29D83A0", Offset = "0x29D69A0", VA = "0x1829D83A0")]
	public static double2 double2(half2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x29D8360", Offset = "0x29D6960", VA = "0x1829D8360")]
	public static double2 double2(float v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x29D8270", Offset = "0x29D6870", VA = "0x1829D8270")]
	public static double2 double2(float2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x29E5CB0", Offset = "0x29E42B0", VA = "0x1829E5CB0")]
	public static uint hash(double2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x29E8FB0", Offset = "0x29E75B0", VA = "0x1829E8FB0")]
	public static uint2 hashwide(double2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x2A071F0", Offset = "0x2A057F0", VA = "0x182A071F0")]
	public static double shuffle(double2 left, double2 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x2A06260", Offset = "0x2A04860", VA = "0x182A06260")]
	public static double2 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x2A06E60", Offset = "0x2A05460", VA = "0x182A06E60")]
	public static double3 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x2A07350", Offset = "0x2A05950", VA = "0x182A07350")]
	public static double4 shuffle(double2 left, double2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x29CB9C0", Offset = "0x29C9FC0", VA = "0x1829CB9C0")]
	internal static double select_shuffle_component(double2 a, double2 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x29D8440", Offset = "0x29D6A40", VA = "0x1829D8440")]
	public static double2x2 double2x2(double2 c0, double2 c1)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x29D8510", Offset = "0x29D6B10", VA = "0x1829D8510")]
	public static double2x2 double2x2(double m00, double m01, double m10, double m11)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x29D8460", Offset = "0x29D6A60", VA = "0x1829D8460")]
	public static double2x2 double2x2(double v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x29D8660", Offset = "0x29D6C60", VA = "0x1829D8660")]
	public static double2x2 double2x2(bool v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x29D8470", Offset = "0x29D6A70", VA = "0x1829D8470")]
	public static double2x2 double2x2(bool2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x29D8560", Offset = "0x29D6B60", VA = "0x1829D8560")]
	public static double2x2 double2x2(int v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x29D8590", Offset = "0x29D6B90", VA = "0x1829D8590")]
	public static double2x2 double2x2(int2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x29D84D0", Offset = "0x29D6AD0", VA = "0x1829D84D0")]
	public static double2x2 double2x2(uint v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x29D85F0", Offset = "0x29D6BF0", VA = "0x1829D85F0")]
	public static double2x2 double2x2(uint2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x29D8410", Offset = "0x29D6A10", VA = "0x1829D8410")]
	public static double2x2 double2x2(float v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x29D8530", Offset = "0x29D6B30", VA = "0x1829D8530")]
	public static double2x2 double2x2(float2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x2A0CD10", Offset = "0x2A0B310", VA = "0x182A0CD10")]
	public static double2x2 transpose(double2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x29EC850", Offset = "0x29EAE50", VA = "0x1829EC850")]
	public static double2x2 inverse(double2x2 m)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x29D7B40", Offset = "0x29D6140", VA = "0x1829D7B40")]
	public static double determinant(double2x2 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x29E5E10", Offset = "0x29E4410", VA = "0x1829E5E10")]
	public static uint hash(double2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x29E9AC0", Offset = "0x29E80C0", VA = "0x1829E9AC0")]
	public static uint2 hashwide(double2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x29D8A70", Offset = "0x29D7070", VA = "0x1829D8A70")]
	public static double2x3 double2x3(double2 c0, double2 c1, double2 c2)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x29D8A30", Offset = "0x29D7030", VA = "0x1829D8A30")]
	public static double2x3 double2x3(double m00, double m01, double m02, double m10, double m11, double m12)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x29D8740", Offset = "0x29D6D40", VA = "0x1829D8740")]
	public static double2x3 double2x3(double v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x29D8790", Offset = "0x29D6D90", VA = "0x1829D8790")]
	public static double2x3 double2x3(bool v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x29D88C0", Offset = "0x29D6EC0", VA = "0x1829D88C0")]
	public static double2x3 double2x3(bool2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x29D87C0", Offset = "0x29D6DC0", VA = "0x1829D87C0")]
	public static double2x3 double2x3(int v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x29D8980", Offset = "0x29D6F80", VA = "0x1829D8980")]
	public static double2x3 double2x3(int2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x29D86A0", Offset = "0x29D6CA0", VA = "0x1829D86A0")]
	public static double2x3 double2x3(uint v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x29D8800", Offset = "0x29D6E00", VA = "0x1829D8800")]
	public static double2x3 double2x3(uint2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x29D8700", Offset = "0x29D6D00", VA = "0x1829D8700")]
	public static double2x3 double2x3(float v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x29D8760", Offset = "0x29D6D60", VA = "0x1829D8760")]
	public static double2x3 double2x3(float2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x2A0D7A0", Offset = "0x2A0BDA0", VA = "0x182A0D7A0")]
	public static double3x2 transpose(double2x3 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x29E53D0", Offset = "0x29E39D0", VA = "0x1829E53D0")]
	public static uint hash(double2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x29E98A0", Offset = "0x29E7EA0", VA = "0x1829E98A0")]
	public static uint2 hashwide(double2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x29D8AB0", Offset = "0x29D70B0", VA = "0x1829D8AB0")]
	public static double2x4 double2x4(double2 c0, double2 c1, double2 c2, double2 c3)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x29D8F20", Offset = "0x29D7520", VA = "0x1829D8F20")]
	public static double2x4 double2x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x29D8DA0", Offset = "0x29D73A0", VA = "0x1829D8DA0")]
	public static double2x4 double2x4(double v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x29D8B00", Offset = "0x29D7100", VA = "0x1829D8B00")]
	public static double2x4 double2x4(bool v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x29D8C10", Offset = "0x29D7210", VA = "0x1829D8C10")]
	public static double2x4 double2x4(bool2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x29D8ED0", Offset = "0x29D74D0", VA = "0x1829D8ED0")]
	public static double2x4 double2x4(int v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x29D8CD0", Offset = "0x29D72D0", VA = "0x1829D8CD0")]
	public static double2x4 double2x4(int2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x29D8E10", Offset = "0x29D7410", VA = "0x1829D8E10")]
	public static double2x4 double2x4(uint v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x29D8B30", Offset = "0x29D7130", VA = "0x1829D8B30")]
	public static double2x4 double2x4(uint2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x29D8DC0", Offset = "0x29D73C0", VA = "0x1829D8DC0")]
	public static double2x4 double2x4(float v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x29D8E90", Offset = "0x29D7490", VA = "0x1829D8E90")]
	public static double2x4 double2x4(float2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x2A0CAA0", Offset = "0x2A0B0A0", VA = "0x182A0CAA0")]
	public static double4x2 transpose(double2x4 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x29E5780", Offset = "0x29E3D80", VA = "0x1829E5780")]
	public static uint hash(double2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x29E9ED0", Offset = "0x29E84D0", VA = "0x1829E9ED0")]
	public static uint2 hashwide(double2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x29D9050", Offset = "0x29D7650", VA = "0x1829D9050")]
	public static double3 double3(double x, double y, double z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x29D9180", Offset = "0x29D7780", VA = "0x1829D9180")]
	public static double3 double3(double x, double2 yz)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x29D90D0", Offset = "0x29D76D0", VA = "0x1829D90D0")]
	public static double3 double3(double2 xy, double z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x29D9130", Offset = "0x29D7730", VA = "0x1829D9130")]
	public static double3 double3(double3 xyz)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x29D9070", Offset = "0x29D7670", VA = "0x1829D9070")]
	public static double3 double3(double v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x29D91A0", Offset = "0x29D77A0", VA = "0x1829D91A0")]
	public static double3 double3(bool v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x29D9080", Offset = "0x29D7680", VA = "0x1829D9080")]
	public static double3 double3(bool3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x29D9150", Offset = "0x29D7750", VA = "0x1829D9150")]
	public static double3 double3(int v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x29D8F90", Offset = "0x29D7590", VA = "0x1829D8F90")]
	public static double3 double3(int3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x29D9020", Offset = "0x29D7620", VA = "0x1829D9020")]
	public static double3 double3(uint v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x29D90F0", Offset = "0x29D76F0", VA = "0x1829D90F0")]
	public static double3 double3(uint3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x29D91D0", Offset = "0x29D77D0", VA = "0x1829D91D0")]
	public static double3 double3(half v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x29D8FB0", Offset = "0x29D75B0", VA = "0x1829D8FB0")]
	public static double3 double3(half3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x29D8F70", Offset = "0x29D7570", VA = "0x1829D8F70")]
	public static double3 double3(float v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x29D9230", Offset = "0x29D7830", VA = "0x1829D9230")]
	public static double3 double3(float3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x29E6060", Offset = "0x29E4660", VA = "0x1829E6060")]
	public static uint hash(double3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x29E8490", Offset = "0x29E6A90", VA = "0x1829E8490")]
	public static uint3 hashwide(double3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x2A07910", Offset = "0x2A05F10", VA = "0x182A07910")]
	public static double shuffle(double3 left, double3 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x2A05D30", Offset = "0x2A04330", VA = "0x182A05D30")]
	public static double2 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x2A07A70", Offset = "0x2A06070", VA = "0x182A07A70")]
	public static double3 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x2A05F80", Offset = "0x2A04580", VA = "0x182A05F80")]
	public static double4 shuffle(double3 left, double3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x29CC370", Offset = "0x29CA970", VA = "0x1829CC370")]
	internal static double select_shuffle_component(double3 a, double3 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x29D9610", Offset = "0x29D7C10", VA = "0x1829D9610")]
	public static double3x2 double3x2(double3 c0, double3 c1)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x29D9550", Offset = "0x29D7B50", VA = "0x1829D9550")]
	public static double3x2 double3x2(double m00, double m01, double m10, double m11, double m20, double m21)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000100")]
	[Address(RVA = "0x29D8740", Offset = "0x29D6D40", VA = "0x1829D8740")]
	public static double3x2 double3x2(double v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000101")]
	[Address(RVA = "0x29D93D0", Offset = "0x29D79D0", VA = "0x1829D93D0")]
	public static double3x2 double3x2(bool v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000102")]
	[Address(RVA = "0x29D9410", Offset = "0x29D7A10", VA = "0x1829D9410")]
	public static double3x2 double3x2(bool3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000103")]
	[Address(RVA = "0x29D95D0", Offset = "0x29D7BD0", VA = "0x1829D95D0")]
	public static double3x2 double3x2(int v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000104")]
	[Address(RVA = "0x29D94B0", Offset = "0x29D7AB0", VA = "0x1829D94B0")]
	public static double3x2 double3x2(int3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000105")]
	[Address(RVA = "0x29D9250", Offset = "0x29D7850", VA = "0x1829D9250")]
	public static double3x2 double3x2(uint v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000106")]
	[Address(RVA = "0x29D9330", Offset = "0x29D7930", VA = "0x1829D9330")]
	public static double3x2 double3x2(uint3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000107")]
	[Address(RVA = "0x29D9590", Offset = "0x29D7B90", VA = "0x1829D9590")]
	public static double3x2 double3x2(float v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000108")]
	[Address(RVA = "0x29D92B0", Offset = "0x29D78B0", VA = "0x1829D92B0")]
	public static double3x2 double3x2(float3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000109")]
	[Address(RVA = "0x2A0CC50", Offset = "0x2A0B250", VA = "0x182A0CC50")]
	public static double2x3 transpose(double3x2 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010A")]
	[Address(RVA = "0x29E4A50", Offset = "0x29E3050", VA = "0x1829E4A50")]
	public static uint hash(double3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010B")]
	[Address(RVA = "0x29E75B0", Offset = "0x29E5BB0", VA = "0x1829E75B0")]
	public static uint3 hashwide(double3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010C")]
	[Address(RVA = "0x29D9AC0", Offset = "0x29D80C0", VA = "0x1829D9AC0")]
	public static double3x3 double3x3(double3 c0, double3 c1, double3 c2)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010D")]
	[Address(RVA = "0x29D9820", Offset = "0x29D7E20", VA = "0x1829D9820")]
	public static double3x3 double3x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010E")]
	[Address(RVA = "0x29D9BE0", Offset = "0x29D81E0", VA = "0x1829D9BE0")]
	public static double3x3 double3x3(double v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600010F")]
	[Address(RVA = "0x29D9A50", Offset = "0x29D8050", VA = "0x1829D9A50")]
	public static double3x3 double3x3(bool v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000110")]
	[Address(RVA = "0x29D9690", Offset = "0x29D7C90", VA = "0x1829D9690")]
	public static double3x3 double3x3(bool3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000111")]
	[Address(RVA = "0x29D99F0", Offset = "0x29D7FF0", VA = "0x1829D99F0")]
	public static double3x3 double3x3(int v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x29D9910", Offset = "0x29D7F10", VA = "0x1829D9910")]
	public static double3x3 double3x3(int3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x29D9880", Offset = "0x29D7E80", VA = "0x1829D9880")]
	public static double3x3 double3x3(uint v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000114")]
	[Address(RVA = "0x29D9B00", Offset = "0x29D8100", VA = "0x1829D9B00")]
	public static double3x3 double3x3(uint3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x29D9640", Offset = "0x29D7C40", VA = "0x1829D9640")]
	public static double3x3 double3x3(float v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x29D9780", Offset = "0x29D7D80", VA = "0x1829D9780")]
	public static double3x3 double3x3(float3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x2A0CDC0", Offset = "0x2A0B3C0", VA = "0x182A0CDC0")]
	public static double3x3 transpose(double3x3 v)
	{
		return default(double3x3);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x29EE520", Offset = "0x29ECB20", VA = "0x1829EE520")]
	public static double3x3 inverse(double3x3 m)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000119")]
	[Address(RVA = "0x29D75E0", Offset = "0x29D5BE0", VA = "0x1829D75E0")]
	public static double determinant(double3x3 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x29E5AC0", Offset = "0x29E40C0", VA = "0x1829E5AC0")]
	public static uint hash(double3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x29E95B0", Offset = "0x29E7BB0", VA = "0x1829E95B0")]
	public static uint3 hashwide(double3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011C")]
	[Address(RVA = "0x29D9F30", Offset = "0x29D8530", VA = "0x1829D9F30")]
	public static double3x4 double3x4(double3 c0, double3 c1, double3 c2, double3 c3)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011D")]
	[Address(RVA = "0x29D9C20", Offset = "0x29D8220", VA = "0x1829D9C20")]
	public static double3x4 double3x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011E")]
	[Address(RVA = "0x29D9C00", Offset = "0x29D8200", VA = "0x1829D9C00")]
	public static double3x4 double3x4(double v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600011F")]
	[Address(RVA = "0x29DA1F0", Offset = "0x29D87F0", VA = "0x1829DA1F0")]
	public static double3x4 double3x4(bool v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000120")]
	[Address(RVA = "0x29DA280", Offset = "0x29D8880", VA = "0x1829DA280")]
	public static double3x4 double3x4(bool3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000121")]
	[Address(RVA = "0x29D9CA0", Offset = "0x29D82A0", VA = "0x1829D9CA0")]
	public static double3x4 double3x4(int v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000122")]
	[Address(RVA = "0x29D9E00", Offset = "0x29D8400", VA = "0x1829D9E00")]
	public static double3x4 double3x4(int3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000123")]
	[Address(RVA = "0x29D9FF0", Offset = "0x29D85F0", VA = "0x1829D9FF0")]
	public static double3x4 double3x4(uint v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000124")]
	[Address(RVA = "0x29DA0B0", Offset = "0x29D86B0", VA = "0x1829DA0B0")]
	public static double3x4 double3x4(uint3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000125")]
	[Address(RVA = "0x29D9F80", Offset = "0x29D8580", VA = "0x1829D9F80")]
	public static double3x4 double3x4(float v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000126")]
	[Address(RVA = "0x29D9D20", Offset = "0x29D8320", VA = "0x1829D9D20")]
	public static double3x4 double3x4(float3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000127")]
	[Address(RVA = "0x2A0D600", Offset = "0x2A0BC00", VA = "0x182A0D600")]
	public static double4x3 transpose(double3x4 v)
	{
		return default(double4x3);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x29DF080", Offset = "0x29DD680", VA = "0x1829DF080")]
	public static double3x4 fastinverse(double3x4 m)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000129")]
	[Address(RVA = "0x29E4B30", Offset = "0x29E3130", VA = "0x1829E4B30")]
	public static uint hash(double3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012A")]
	[Address(RVA = "0x29E9010", Offset = "0x29E7610", VA = "0x1829E9010")]
	public static uint3 hashwide(double3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012B")]
	[Address(RVA = "0x2985BC0", Offset = "0x29841C0", VA = "0x182985BC0")]
	public static double4 double4(double x, double y, double z, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012C")]
	[Address(RVA = "0x29DA4F0", Offset = "0x29D8AF0", VA = "0x1829DA4F0")]
	public static double4 double4(double x, double y, double2 zw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012D")]
	[Address(RVA = "0x29DA510", Offset = "0x29D8B10", VA = "0x1829DA510")]
	public static double4 double4(double x, double2 yz, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012E")]
	[Address(RVA = "0x29DA650", Offset = "0x29D8C50", VA = "0x1829DA650")]
	public static double4 double4(double x, double3 yzw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600012F")]
	[Address(RVA = "0x29DA7A0", Offset = "0x29D8DA0", VA = "0x1829DA7A0")]
	public static double4 double4(double2 xy, double z, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000130")]
	[Address(RVA = "0x29DA620", Offset = "0x29D8C20", VA = "0x1829DA620")]
	public static double4 double4(double2 xy, double2 zw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000131")]
	[Address(RVA = "0x29DA550", Offset = "0x29D8B50", VA = "0x1829DA550")]
	public static double4 double4(double3 xyz, double w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000132")]
	[Address(RVA = "0x29DA4C0", Offset = "0x29D8AC0", VA = "0x1829DA4C0")]
	public static double4 double4(double4 xyzw)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000133")]
	[Address(RVA = "0x29D8460", Offset = "0x29D6A60", VA = "0x1829D8460")]
	public static double4 double4(double v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000134")]
	[Address(RVA = "0x29DA6A0", Offset = "0x29D8CA0", VA = "0x1829DA6A0")]
	public static double4 double4(bool v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000135")]
	[Address(RVA = "0x29DA450", Offset = "0x29D8A50", VA = "0x1829DA450")]
	public static double4 double4(bool4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000136")]
	[Address(RVA = "0x29DA570", Offset = "0x29D8B70", VA = "0x1829DA570")]
	public static double4 double4(int v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000137")]
	[Address(RVA = "0x29DA6D0", Offset = "0x29D8CD0", VA = "0x1829DA6D0")]
	public static double4 double4(int4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x29DA700", Offset = "0x29D8D00", VA = "0x1829DA700")]
	public static double4 double4(uint v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x29DA750", Offset = "0x29D8D50", VA = "0x1829DA750")]
	public static double4 double4(uint4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013A")]
	[Address(RVA = "0x29DA5A0", Offset = "0x29D8BA0", VA = "0x1829DA5A0")]
	public static double4 double4(half v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013B")]
	[Address(RVA = "0x29DA3C0", Offset = "0x29D89C0", VA = "0x1829DA3C0")]
	public static double4 double4(half4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013C")]
	[Address(RVA = "0x29DA530", Offset = "0x29D8B30", VA = "0x1829DA530")]
	public static double4 double4(float v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x29DA670", Offset = "0x29D8C70", VA = "0x1829DA670")]
	public static double4 double4(float4 v)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013E")]
	[Address(RVA = "0x29E5250", Offset = "0x29E3850", VA = "0x1829E5250")]
	public static uint hash(double4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600013F")]
	[Address(RVA = "0x29E7D20", Offset = "0x29E6320", VA = "0x1829E7D20")]
	public static uint4 hashwide(double4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000140")]
	[Address(RVA = "0x2A07470", Offset = "0x2A05A70", VA = "0x182A07470")]
	public static double shuffle(double4 left, double4 right, ShuffleComponent x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000141")]
	[Address(RVA = "0x2A06390", Offset = "0x2A04990", VA = "0x182A06390")]
	public static double2 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000142")]
	[Address(RVA = "0x2A06580", Offset = "0x2A04B80", VA = "0x182A06580")]
	public static double3 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000143")]
	[Address(RVA = "0x2A06110", Offset = "0x2A04710", VA = "0x182A06110")]
	public static double4 shuffle(double4 left, double4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000144")]
	[Address(RVA = "0x29CBE10", Offset = "0x29CA410", VA = "0x1829CBE10")]
	internal static double select_shuffle_component(double4 a, double4 b, ShuffleComponent component)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000145")]
	[Address(RVA = "0x29DA810", Offset = "0x29D8E10", VA = "0x1829DA810")]
	public static double4x2 double4x2(double4 c0, double4 c1)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000146")]
	[Address(RVA = "0x29DAAA0", Offset = "0x29D90A0", VA = "0x1829DAAA0")]
	public static double4x2 double4x2(double m00, double m01, double m10, double m11, double m20, double m21, double m30, double m31)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x29D8DA0", Offset = "0x29D73A0", VA = "0x1829D8DA0")]
	public static double4x2 double4x2(double v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000148")]
	[Address(RVA = "0x29DA930", Offset = "0x29D8F30", VA = "0x1829DA930")]
	public static double4x2 double4x2(bool v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000149")]
	[Address(RVA = "0x29DAAF0", Offset = "0x29D90F0", VA = "0x1829DAAF0")]
	public static double4x2 double4x2(bool4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014A")]
	[Address(RVA = "0x29DA8E0", Offset = "0x29D8EE0", VA = "0x1829DA8E0")]
	public static double4x2 double4x2(int v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014B")]
	[Address(RVA = "0x29DA840", Offset = "0x29D8E40", VA = "0x1829DA840")]
	public static double4x2 double4x2(int4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014C")]
	[Address(RVA = "0x29DA990", Offset = "0x29D8F90", VA = "0x1829DA990")]
	public static double4x2 double4x2(uint v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x29DABA0", Offset = "0x29D91A0", VA = "0x1829DABA0")]
	public static double4x2 double4x2(uint4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014E")]
	[Address(RVA = "0x29DA7C0", Offset = "0x29D8DC0", VA = "0x1829DA7C0")]
	public static double4x2 double4x2(float v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014F")]
	[Address(RVA = "0x29DAA10", Offset = "0x29D9010", VA = "0x1829DAA10")]
	public static double4x2 double4x2(float4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000150")]
	[Address(RVA = "0x2A0CC90", Offset = "0x2A0B290", VA = "0x182A0CC90")]
	public static double2x4 transpose(double4x2 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000151")]
	[Address(RVA = "0x29E6660", Offset = "0x29E4C60", VA = "0x1829E6660")]
	public static uint hash(double4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000152")]
	[Address(RVA = "0x29E8510", Offset = "0x29E6B10", VA = "0x1829E8510")]
	public static uint4 hashwide(double4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000153")]
	[Address(RVA = "0x29DAEA0", Offset = "0x29D94A0", VA = "0x1829DAEA0")]
	public static double4x3 double4x3(double4 c0, double4 c1, double4 c2)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000154")]
	[Address(RVA = "0x29DADA0", Offset = "0x29D93A0", VA = "0x1829DADA0")]
	public static double4x3 double4x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22, double m30, double m31, double m32)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000155")]
	[Address(RVA = "0x29D9C00", Offset = "0x29D8200", VA = "0x1829D9C00")]
	public static double4x3 double4x3(double v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000156")]
	[Address(RVA = "0x29DB090", Offset = "0x29D9690", VA = "0x1829DB090")]
	public static double4x3 double4x3(bool v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000157")]
	[Address(RVA = "0x29DAD50", Offset = "0x29D9350", VA = "0x1829DAD50")]
	public static double4x3 double4x3(bool4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000158")]
	[Address(RVA = "0x29DAE20", Offset = "0x29D9420", VA = "0x1829DAE20")]
	public static double4x3 double4x3(int v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000159")]
	[Address(RVA = "0x29DAFA0", Offset = "0x29D95A0", VA = "0x1829DAFA0")]
	public static double4x3 double4x3(int4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015A")]
	[Address(RVA = "0x29DAEE0", Offset = "0x29D94E0", VA = "0x1829DAEE0")]
	public static double4x3 double4x3(uint v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015B")]
	[Address(RVA = "0x29DAC50", Offset = "0x29D9250", VA = "0x1829DAC50")]
	public static double4x3 double4x3(uint4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015C")]
	[Address(RVA = "0x29DB120", Offset = "0x29D9720", VA = "0x1829DB120")]
	public static double4x3 double4x3(float v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015D")]
	[Address(RVA = "0x29DB180", Offset = "0x29D9780", VA = "0x1829DB180")]
	public static double4x3 double4x3(float4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015E")]
	[Address(RVA = "0x2A0D2A0", Offset = "0x2A0B8A0", VA = "0x182A0D2A0")]
	public static double3x4 transpose(double4x3 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600015F")]
	[Address(RVA = "0x29E6470", Offset = "0x29E4A70", VA = "0x1829E6470")]
	public static uint hash(double4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000160")]
	[Address(RVA = "0x29E8130", Offset = "0x29E6730", VA = "0x1829E8130")]
	public static uint4 hashwide(double4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000161")]
	[Address(RVA = "0x29DB580", Offset = "0x29D9B80", VA = "0x1829DB580")]
	public static double4x4 double4x4(double4 c0, double4 c1, double4 c2, double4 c3)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000162")]
	[Address(RVA = "0x29DB9C0", Offset = "0x29D9FC0", VA = "0x1829DB9C0")]
	public static double4x4 double4x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000163")]
	[Address(RVA = "0x29DB360", Offset = "0x29D9960", VA = "0x1829DB360")]
	public static double4x4 double4x4(double v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000164")]
	[Address(RVA = "0x29DB390", Offset = "0x29D9990", VA = "0x1829DB390")]
	public static double4x4 double4x4(bool v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000165")]
	[Address(RVA = "0x29DB8D0", Offset = "0x29D9ED0", VA = "0x1829DB8D0")]
	public static double4x4 double4x4(bool4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x29DB920", Offset = "0x29D9F20", VA = "0x1829DB920")]
	public static double4x4 double4x4(int v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000167")]
	[Address(RVA = "0x29DB450", Offset = "0x29D9A50", VA = "0x1829DB450")]
	public static double4x4 double4x4(int4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000168")]
	[Address(RVA = "0x29DB260", Offset = "0x29D9860", VA = "0x1829DB260")]
	public static double4x4 double4x4(uint v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000169")]
	[Address(RVA = "0x29DB5D0", Offset = "0x29D9BD0", VA = "0x1829DB5D0")]
	public static double4x4 double4x4(uint4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016A")]
	[Address(RVA = "0x29DB850", Offset = "0x29D9E50", VA = "0x1829DB850")]
	public static double4x4 double4x4(float v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016B")]
	[Address(RVA = "0x29DB720", Offset = "0x29D9D20", VA = "0x1829DB720")]
	public static double4x4 double4x4(float4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016C")]
	[Address(RVA = "0x2A042F0", Offset = "0x2A028F0", VA = "0x182A042F0")]
	public static double3 rotate(double4x4 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x2A0C610", Offset = "0x2A0AC10", VA = "0x182A0C610")]
	public static double3 transform(double4x4 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x2A0CF10", Offset = "0x2A0B510", VA = "0x182A0CF10")]
	public static double4x4 transpose(double4x4 v)
	{
		return default(double4x4);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x29ECBE0", Offset = "0x29EB1E0", VA = "0x1829ECBE0")]
	public static double4x4 inverse(double4x4 m)
	{
		return default(double4x4);
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x29DE760", Offset = "0x29DCD60", VA = "0x1829DE760")]
	public static double4x4 fastinverse(double4x4 m)
	{
		return default(double4x4);
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x29D7350", Offset = "0x29D5950", VA = "0x1829D7350")]
	public static double determinant(double4x4 m)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000172")]
	[Address(RVA = "0x29E5000", Offset = "0x29E3600", VA = "0x1829E5000")]
	public static uint hash(double4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000173")]
	[Address(RVA = "0x29E76A0", Offset = "0x29E5CA0", VA = "0x1829E76A0")]
	public static uint4 hashwide(double4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000174")]
	[Address(RVA = "0x29DF2F0", Offset = "0x29DD8F0", VA = "0x1829DF2F0")]
	public static float2 float2(float x, float y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000175")]
	[Address(RVA = "0x29DF3E0", Offset = "0x29DD9E0", VA = "0x1829DF3E0")]
	public static float2 float2(float2 xy)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000176")]
	[Address(RVA = "0x29DF460", Offset = "0x29DDA60", VA = "0x1829DF460")]
	public static float2 float2(float v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000177")]
	[Address(RVA = "0x29DF260", Offset = "0x29DD860", VA = "0x1829DF260")]
	public static float2 float2(bool v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000178")]
	[Address(RVA = "0x29DF2B0", Offset = "0x29DD8B0", VA = "0x1829DF2B0")]
	public static float2 float2(bool2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000179")]
	[Address(RVA = "0x29DF300", Offset = "0x29DD900", VA = "0x1829DF300")]
	public static float2 float2(int v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017A")]
	[Address(RVA = "0x29DF320", Offset = "0x29DD920", VA = "0x1829DF320")]
	public static float2 float2(int2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017B")]
	[Address(RVA = "0x29DF3B0", Offset = "0x29DD9B0", VA = "0x1829DF3B0")]
	public static float2 float2(uint v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017C")]
	[Address(RVA = "0x29DF340", Offset = "0x29DD940", VA = "0x1829DF340")]
	public static float2 float2(uint2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017D")]
	[Address(RVA = "0x29DF400", Offset = "0x29DDA00", VA = "0x1829DF400")]
	public static float2 float2(half v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017E")]
	[Address(RVA = "0x29DF370", Offset = "0x29DD970", VA = "0x1829DF370")]
	public static float2 float2(half2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017F")]
	[Address(RVA = "0x29DF440", Offset = "0x29DDA40", VA = "0x1829DF440")]
	public static float2 float2(double v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000180")]
	[Address(RVA = "0x29DF290", Offset = "0x29DD890", VA = "0x1829DF290")]
	public static float2 float2(double2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000181")]
	[Address(RVA = "0x29E4A20", Offset = "0x29E3020", VA = "0x1829E4A20")]
	public static uint hash(float2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000182")]
	[Address(RVA = "0x29E9A80", Offset = "0x29E8080", VA = "0x1829E9A80")]
	public static uint2 hashwide(float2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000183")]
	[Address(RVA = "0x2A06570", Offset = "0x2A04B70", VA = "0x182A06570")]
	public static float shuffle(float2 left, float2 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000184")]
	[Address(RVA = "0x2A06F40", Offset = "0x2A05540", VA = "0x182A06F40")]
	public static float2 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2A07140", Offset = "0x2A05740", VA = "0x182A07140")]
	public static float3 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2A068B0", Offset = "0x2A04EB0", VA = "0x182A068B0")]
	public static float4 shuffle(float2 left, float2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000187")]
	[Address(RVA = "0x29CC170", Offset = "0x29CA770", VA = "0x1829CC170")]
	internal static float select_shuffle_component(float2 a, float2 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000188")]
	[Address(RVA = "0x29DF510", Offset = "0x29DDB10", VA = "0x1829DF510")]
	public static float2x2 float2x2(float2 c0, float2 c1)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000189")]
	[Address(RVA = "0x29DF470", Offset = "0x29DDA70", VA = "0x1829DF470")]
	public static float2x2 float2x2(float m00, float m01, float m10, float m11)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018A")]
	[Address(RVA = "0x2989E90", Offset = "0x2988490", VA = "0x182989E90")]
	public static float2x2 float2x2(float v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018B")]
	[Address(RVA = "0x29DF670", Offset = "0x29DDC70", VA = "0x1829DF670")]
	public static float2x2 float2x2(bool v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018C")]
	[Address(RVA = "0x29DF6A0", Offset = "0x29DDCA0", VA = "0x1829DF6A0")]
	public static float2x2 float2x2(bool2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018D")]
	[Address(RVA = "0x29DF520", Offset = "0x29DDB20", VA = "0x1829DF520")]
	public static float2x2 float2x2(int v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018E")]
	[Address(RVA = "0x29DF610", Offset = "0x29DDC10", VA = "0x1829DF610")]
	public static float2x2 float2x2(int2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018F")]
	[Address(RVA = "0x29DF590", Offset = "0x29DDB90", VA = "0x1829DF590")]
	public static float2x2 float2x2(uint v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000190")]
	[Address(RVA = "0x29DF490", Offset = "0x29DDA90", VA = "0x1829DF490")]
	public static float2x2 float2x2(uint2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000191")]
	[Address(RVA = "0x29DF5E0", Offset = "0x29DDBE0", VA = "0x1829DF5E0")]
	public static float2x2 float2x2(double v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x29DF550", Offset = "0x29DDB50", VA = "0x1829DF550")]
	public static float2x2 float2x2(double2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000193")]
	[Address(RVA = "0x2A0C8B0", Offset = "0x2A0AEB0", VA = "0x182A0C8B0")]
	public static float2x2 transpose(float2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000194")]
	[Address(RVA = "0x29ECB50", Offset = "0x29EB150", VA = "0x1829ECB50")]
	public static float2x2 inverse(float2x2 m)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000195")]
	[Address(RVA = "0x29D7B60", Offset = "0x29D6160", VA = "0x1829D7B60")]
	public static float determinant(float2x2 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000196")]
	[Address(RVA = "0x29E6A30", Offset = "0x29E5030", VA = "0x1829E6A30")]
	public static uint hash(float2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000197")]
	[Address(RVA = "0x29E9CD0", Offset = "0x29E82D0", VA = "0x1829E9CD0")]
	public static uint2 hashwide(float2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000198")]
	[Address(RVA = "0x27F3660", Offset = "0x27F1C60", VA = "0x1827F3660")]
	public static float2x3 float2x3(float2 c0, float2 c1, float2 c2)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000199")]
	[Address(RVA = "0x29DF890", Offset = "0x29DDE90", VA = "0x1829DF890")]
	public static float2x3 float2x3(float m00, float m01, float m02, float m10, float m11, float m12)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019A")]
	[Address(RVA = "0x29DF700", Offset = "0x29DDD00", VA = "0x1829DF700")]
	public static float2x3 float2x3(float v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019B")]
	[Address(RVA = "0x29DF7F0", Offset = "0x29DDDF0", VA = "0x1829DF7F0")]
	public static float2x3 float2x3(bool v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019C")]
	[Address(RVA = "0x29DF8D0", Offset = "0x29DDED0", VA = "0x1829DF8D0")]
	public static float2x3 float2x3(bool2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019D")]
	[Address(RVA = "0x29DFA60", Offset = "0x29DE060", VA = "0x1829DFA60")]
	public static float2x3 float2x3(int v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019E")]
	[Address(RVA = "0x29DFAA0", Offset = "0x29DE0A0", VA = "0x1829DFAA0")]
	public static float2x3 float2x3(int2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600019F")]
	[Address(RVA = "0x29DF770", Offset = "0x29DDD70", VA = "0x1829DF770")]
	public static float2x3 float2x3(uint v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x29DF990", Offset = "0x29DDF90", VA = "0x1829DF990")]
	public static float2x3 float2x3(uint2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x29DF720", Offset = "0x29DDD20", VA = "0x1829DF720")]
	public static float2x3 float2x3(double v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x29DF830", Offset = "0x29DDE30", VA = "0x1829DF830")]
	public static float2x3 float2x3(double2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x2A0D0D0", Offset = "0x2A0B6D0", VA = "0x182A0D0D0")]
	public static float3x2 transpose(float2x3 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x29E5580", Offset = "0x29E3B80", VA = "0x1829E5580")]
	public static uint hash(float2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x29E7B90", Offset = "0x29E6190", VA = "0x1829E7B90")]
	public static uint2 hashwide(float2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x29DFB50", Offset = "0x29DE150", VA = "0x1829DFB50")]
	public static float2x4 float2x4(float2 c0, float2 c1, float2 c2, float2 c3)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x29DFD90", Offset = "0x29DE390", VA = "0x1829DFD90")]
	public static float2x4 float2x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x29DFE30", Offset = "0x29DE430", VA = "0x1829DFE30")]
	public static float2x4 float2x4(float v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x29DFB70", Offset = "0x29DE170", VA = "0x1829DFB70")]
	public static float2x4 float2x4(bool v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x29DFC30", Offset = "0x29DE230", VA = "0x1829DFC30")]
	public static float2x4 float2x4(bool2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x29DFDE0", Offset = "0x29DE3E0", VA = "0x1829DFDE0")]
	public static float2x4 float2x4(int v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x29DFFA0", Offset = "0x29DE5A0", VA = "0x1829DFFA0")]
	public static float2x4 float2x4(int2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x29DFCF0", Offset = "0x29DE2F0", VA = "0x1829DFCF0")]
	public static float2x4 float2x4(uint v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x29DFEA0", Offset = "0x29DE4A0", VA = "0x1829DFEA0")]
	public static float2x4 float2x4(uint2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x29DFE40", Offset = "0x29DE440", VA = "0x1829DFE40")]
	public static float2x4 float2x4(double v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x29DFBB0", Offset = "0x29DE1B0", VA = "0x1829DFBB0")]
	public static float2x4 float2x4(double2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x2A0CE20", Offset = "0x2A0B420", VA = "0x182A0CE20")]
	public static float4x2 transpose(float2x4 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x29E5F60", Offset = "0x29E4560", VA = "0x1829E5F60")]
	public static uint hash(float2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x29E8B60", Offset = "0x29E7160", VA = "0x1829E8B60")]
	public static uint2 hashwide(float2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x29E0160", Offset = "0x29DE760", VA = "0x1829E0160")]
	public static float3 float3(float x, float y, float z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x29E0260", Offset = "0x29DE860", VA = "0x1829E0260")]
	public static float3 float3(float x, float2 yz)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x29E01E0", Offset = "0x29DE7E0", VA = "0x1829E01E0")]
	public static float3 float3(float2 xy, float z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x29E0200", Offset = "0x29DE800", VA = "0x1829E0200")]
	public static float3 float3(float3 xyz)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x29E0330", Offset = "0x29DE930", VA = "0x1829E0330")]
	public static float3 float3(float v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x29E0060", Offset = "0x29DE660", VA = "0x1829E0060")]
	public static float3 float3(bool v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x29E02E0", Offset = "0x29DE8E0", VA = "0x1829E02E0")]
	public static float3 float3(bool3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x29E00C0", Offset = "0x29DE6C0", VA = "0x1829E00C0")]
	public static float3 float3(int v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x29E02C0", Offset = "0x29DE8C0", VA = "0x1829E02C0")]
	public static float3 float3(int3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x29E0280", Offset = "0x29DE880", VA = "0x1829E0280")]
	public static float3 float3(uint v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x29E0220", Offset = "0x29DE820", VA = "0x1829E0220")]
	public static float3 float3(uint3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x29E00E0", Offset = "0x29DE6E0", VA = "0x1829E00E0")]
	public static float3 float3(half v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x29E0180", Offset = "0x29DE780", VA = "0x1829E0180")]
	public static float3 float3(half3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x29E0130", Offset = "0x29DE730", VA = "0x1829E0130")]
	public static float3 float3(double v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x29E0090", Offset = "0x29DE690", VA = "0x1829E0090")]
	public static float3 float3(double3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x29E6370", Offset = "0x29E4970", VA = "0x1829E6370")]
	public static uint hash(float3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x29E83A0", Offset = "0x29E69A0", VA = "0x1829E83A0")]
	public static uint3 hashwide(float3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x2A07220", Offset = "0x2A05820", VA = "0x182A07220")]
	public static float shuffle(float3 left, float3 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x2A079D0", Offset = "0x2A05FD0", VA = "0x182A079D0")]
	public static float2 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x2A07DE0", Offset = "0x2A063E0", VA = "0x182A07DE0")]
	public static float3 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x2A07BA0", Offset = "0x2A061A0", VA = "0x182A07BA0")]
	public static float4 shuffle(float3 left, float3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x29CB8A0", Offset = "0x29C9EA0", VA = "0x1829CB8A0")]
	internal static float select_shuffle_component(float3 a, float3 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x29E05F0", Offset = "0x29DEBF0", VA = "0x1829E05F0")]
	public static float3x2 float3x2(float3 c0, float3 c1)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x29E0620", Offset = "0x29DEC20", VA = "0x1829E0620")]
	public static float3x2 float3x2(float m00, float m01, float m10, float m11, float m20, float m21)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x29DF700", Offset = "0x29DDD00", VA = "0x1829DF700")]
	public static float3x2 float3x2(float v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x29E0480", Offset = "0x29DEA80", VA = "0x1829E0480")]
	public static float3x2 float3x2(bool v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x29E06E0", Offset = "0x29DECE0", VA = "0x1829E06E0")]
	public static float3x2 float3x2(bool3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x29E04C0", Offset = "0x29DEAC0", VA = "0x1829E04C0")]
	public static float3x2 float3x2(int v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x29E0550", Offset = "0x29DEB50", VA = "0x1829E0550")]
	public static float3x2 float3x2(int3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x29E0660", Offset = "0x29DEC60", VA = "0x1829E0660")]
	public static float3x2 float3x2(uint v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x29E03C0", Offset = "0x29DE9C0", VA = "0x1829E03C0")]
	public static float3x2 float3x2(uint3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x29E0500", Offset = "0x29DEB00", VA = "0x1829E0500")]
	public static float3x2 float3x2(double v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x29E0350", Offset = "0x29DE950", VA = "0x1829E0350")]
	public static float3x2 float3x2(double3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x2A0D1C0", Offset = "0x2A0B7C0", VA = "0x182A0D1C0")]
	public static float2x3 transpose(float3x2 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x29E7070", Offset = "0x29E5670", VA = "0x1829E7070")]
	public static uint hash(float3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x29E7E80", Offset = "0x29E6480", VA = "0x1829E7E80")]
	public static uint3 hashwide(float3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x29E0C70", Offset = "0x29DF270", VA = "0x1829E0C70")]
	public static float3x3 float3x3(float3 c0, float3 c1, float3 c2)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x29E09B0", Offset = "0x29DEFB0", VA = "0x1829E09B0")]
	public static float3x3 float3x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x29E07C0", Offset = "0x29DEDC0", VA = "0x1829E07C0")]
	public static float3x3 float3x3(float v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x29E0780", Offset = "0x29DED80", VA = "0x1829E0780")]
	public static float3x3 float3x3(bool v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x29E0D30", Offset = "0x29DF330", VA = "0x1829E0D30")]
	public static float3x3 float3x3(bool3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x29E0A10", Offset = "0x29DF010", VA = "0x1829E0A10")]
	public static float3x3 float3x3(int v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x29E0880", Offset = "0x29DEE80", VA = "0x1829E0880")]
	public static float3x3 float3x3(int3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x29E0BC0", Offset = "0x29DF1C0", VA = "0x1829E0BC0")]
	public static float3x3 float3x3(uint v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x29E0AB0", Offset = "0x29DF0B0", VA = "0x1829E0AB0")]
	public static float3x3 float3x3(uint3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x29E0CB0", Offset = "0x29DF2B0", VA = "0x1829E0CB0")]
	public static float3x3 float3x3(double v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x29E07E0", Offset = "0x29DEDE0", VA = "0x1829E07E0")]
	public static float3x3 float3x3(double3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x2A0D550", Offset = "0x2A0BB50", VA = "0x182A0D550")]
	public static float3x3 transpose(float3x3 v)
	{
		return default(float3x3);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x29EC8D0", Offset = "0x29EAED0", VA = "0x1829EC8D0")]
	public static float3x3 inverse(float3x3 m)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x29D7A60", Offset = "0x29D6060", VA = "0x1829D7A60")]
	public static float determinant(float3x3 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x29E6CB0", Offset = "0x29E52B0", VA = "0x1829E6CB0")]
	public static uint hash(float3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x29E7DD0", Offset = "0x29E63D0", VA = "0x1829E7DD0")]
	public static uint3 hashwide(float3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x29E14D0", Offset = "0x29DFAD0", VA = "0x1829E14D0")]
	public static float3x4 float3x4(float3 c0, float3 c1, float3 c2, float3 c3)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x29E1610", Offset = "0x29DFC10", VA = "0x1829E1610")]
	public static float3x4 float3x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x29E1260", Offset = "0x29DF860", VA = "0x1829E1260")]
	public static float3x4 float3x4(float v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x29E1000", Offset = "0x29DF600", VA = "0x1829E1000")]
	public static float3x4 float3x4(bool v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x29E0EC0", Offset = "0x29DF4C0", VA = "0x1829E0EC0")]
	public static float3x4 float3x4(bool3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x29E10C0", Offset = "0x29DF6C0", VA = "0x1829E10C0")]
	public static float3x4 float3x4(int v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x29E1140", Offset = "0x29DF740", VA = "0x1829E1140")]
	public static float3x4 float3x4(int3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x29E1520", Offset = "0x29DFB20", VA = "0x1829E1520")]
	public static float3x4 float3x4(uint v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x29E1360", Offset = "0x29DF960", VA = "0x1829E1360")]
	public static float3x4 float3x4(uint3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x29E0E20", Offset = "0x29DF420", VA = "0x1829E0E20")]
	public static float3x4 float3x4(double v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x29E1280", Offset = "0x29DF880", VA = "0x1829E1280")]
	public static float3x4 float3x4(double3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x2A0CFD0", Offset = "0x2A0B5D0", VA = "0x182A0CFD0")]
	public static float4x3 transpose(float3x4 v)
	{
		return default(float4x3);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x29DEF00", Offset = "0x29DD500", VA = "0x1829DEF00")]
	public static float3x4 fastinverse(float3x4 m)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x29E4E20", Offset = "0x29E3420", VA = "0x1829E4E20")]
	public static uint hash(float3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x29E79D0", Offset = "0x29E5FD0", VA = "0x1829E79D0")]
	public static uint3 hashwide(float3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x2989EE0", Offset = "0x29884E0", VA = "0x182989EE0")]
	public static float4 float4(float x, float y, float z, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x29E17B0", Offset = "0x29DFDB0", VA = "0x1829E17B0")]
	public static float4 float4(float x, float y, float2 zw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x29E18A0", Offset = "0x29DFEA0", VA = "0x1829E18A0")]
	public static float4 float4(float x, float2 yz, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x29E18F0", Offset = "0x29DFEF0", VA = "0x1829E18F0")]
	public static float4 float4(float x, float3 yzw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x29E1840", Offset = "0x29DFE40", VA = "0x1829E1840")]
	public static float4 float4(float2 xy, float z, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x29E1910", Offset = "0x29DFF10", VA = "0x1829E1910")]
	public static float4 float4(float2 xy, float2 zw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x29CA720", Offset = "0x29C8D20", VA = "0x1829CA720")]
	public static float4 float4(float3 xyz, float w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static float4 float4(float4 xyzw)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x2989E90", Offset = "0x2988490", VA = "0x182989E90")]
	public static float4 float4(float v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000200")]
	[Address(RVA = "0x29E18D0", Offset = "0x29DFED0", VA = "0x1829E18D0")]
	public static float4 float4(bool v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000201")]
	[Address(RVA = "0x29E16D0", Offset = "0x29DFCD0", VA = "0x1829E16D0")]
	public static float4 float4(bool4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000202")]
	[Address(RVA = "0x29E1880", Offset = "0x29DFE80", VA = "0x1829E1880")]
	public static float4 float4(int v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000203")]
	[Address(RVA = "0x298DB00", Offset = "0x298C100", VA = "0x18298DB00")]
	public static float4 float4(int4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000204")]
	[Address(RVA = "0x29DF590", Offset = "0x29DDB90", VA = "0x1829DF590")]
	public static float4 float4(uint v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000205")]
	[Address(RVA = "0x29E1950", Offset = "0x29DFF50", VA = "0x1829E1950")]
	public static float4 float4(uint4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000206")]
	[Address(RVA = "0x29E17E0", Offset = "0x29DFDE0", VA = "0x1829E17E0")]
	public static float4 float4(half v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000207")]
	[Address(RVA = "0x29E1740", Offset = "0x29DFD40", VA = "0x1829E1740")]
	public static float4 float4(half4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000208")]
	[Address(RVA = "0x29E1860", Offset = "0x29DFE60", VA = "0x1829E1860")]
	public static float4 float4(double v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000209")]
	[Address(RVA = "0x29E1690", Offset = "0x29DFC90", VA = "0x1829E1690")]
	public static float4 float4(double4 v)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020A")]
	[Address(RVA = "0x29E5680", Offset = "0x29E3C80", VA = "0x1829E5680")]
	public static uint hash(float4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020B")]
	[Address(RVA = "0x29E7C90", Offset = "0x29E6290", VA = "0x1829E7C90")]
	public static uint4 hashwide(float4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020C")]
	[Address(RVA = "0x2A05F50", Offset = "0x2A04550", VA = "0x182A05F50")]
	public static float shuffle(float4 left, float4 right, ShuffleComponent x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020D")]
	[Address(RVA = "0x2A07960", Offset = "0x2A05F60", VA = "0x182A07960")]
	public static float2 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020E")]
	[Address(RVA = "0x2A06D80", Offset = "0x2A05380", VA = "0x182A06D80")]
	public static float3 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600020F")]
	[Address(RVA = "0x2A066A0", Offset = "0x2A04CA0", VA = "0x182A066A0")]
	public static float4 shuffle(float4 left, float4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000210")]
	[Address(RVA = "0x29CC5B0", Offset = "0x29CABB0", VA = "0x1829CC5B0")]
	internal static float select_shuffle_component(float4 a, float4 b, ShuffleComponent component)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000211")]
	[Address(RVA = "0x2985BA0", Offset = "0x29841A0", VA = "0x182985BA0")]
	public static float4x2 float4x2(float4 c0, float4 c1)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000212")]
	[Address(RVA = "0x29E1C40", Offset = "0x29E0240", VA = "0x1829E1C40")]
	public static float4x2 float4x2(float m00, float m01, float m10, float m11, float m20, float m21, float m30, float m31)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000213")]
	[Address(RVA = "0x29DFE30", Offset = "0x29DE430", VA = "0x1829DFE30")]
	public static float4x2 float4x2(float v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000214")]
	[Address(RVA = "0x29E1D70", Offset = "0x29E0370", VA = "0x1829E1D70")]
	public static float4x2 float4x2(bool v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000215")]
	[Address(RVA = "0x29E1DB0", Offset = "0x29E03B0", VA = "0x1829E1DB0")]
	public static float4x2 float4x2(bool4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000216")]
	[Address(RVA = "0x29E1C90", Offset = "0x29E0290", VA = "0x1829E1C90")]
	public static float4x2 float4x2(int v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000217")]
	[Address(RVA = "0x29E1BA0", Offset = "0x29E01A0", VA = "0x1829E1BA0")]
	public static float4x2 float4x2(int4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000218")]
	[Address(RVA = "0x29E1CD0", Offset = "0x29E02D0", VA = "0x1829E1CD0")]
	public static float4x2 float4x2(uint v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000219")]
	[Address(RVA = "0x29E1A40", Offset = "0x29E0040", VA = "0x1829E1A40")]
	public static float4x2 float4x2(uint4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x29E19D0", Offset = "0x29DFFD0", VA = "0x1829E19D0")]
	public static float4x2 float4x2(double v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021B")]
	[Address(RVA = "0x29E1B10", Offset = "0x29E0110", VA = "0x1829E1B10")]
	public static float4x2 float4x2(double4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x2A0D210", Offset = "0x2A0B810", VA = "0x182A0D210")]
	public static float2x4 transpose(float4x2 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x29E5A30", Offset = "0x29E4030", VA = "0x1829E5A30")]
	public static uint hash(float4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021E")]
	[Address(RVA = "0x29E99E0", Offset = "0x29E7FE0", VA = "0x1829E99E0")]
	public static uint4 hashwide(float4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600021F")]
	[Address(RVA = "0x29E2460", Offset = "0x29E0A60", VA = "0x1829E2460")]
	public static float4x3 float4x3(float4 c0, float4 c1, float4 c2)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000220")]
	[Address(RVA = "0x29E2240", Offset = "0x29E0840", VA = "0x1829E2240")]
	public static float4x3 float4x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float m30, float m31, float m32)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000221")]
	[Address(RVA = "0x29E1260", Offset = "0x29DF860", VA = "0x1829E1260")]
	public static float4x3 float4x3(float v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000222")]
	[Address(RVA = "0x29E22C0", Offset = "0x29E08C0", VA = "0x1829E22C0")]
	public static float4x3 float4x3(bool v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000223")]
	[Address(RVA = "0x29E20C0", Offset = "0x29E06C0", VA = "0x1829E20C0")]
	public static float4x3 float4x3(bool4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000224")]
	[Address(RVA = "0x29E2310", Offset = "0x29E0910", VA = "0x1829E2310")]
	public static float4x3 float4x3(int v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000225")]
	[Address(RVA = "0x29E2360", Offset = "0x29E0960", VA = "0x1829E2360")]
	public static float4x3 float4x3(int4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000226")]
	[Address(RVA = "0x29E1FD0", Offset = "0x29E05D0", VA = "0x1829E1FD0")]
	public static float4x3 float4x3(uint v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000227")]
	[Address(RVA = "0x29E2100", Offset = "0x29E0700", VA = "0x1829E2100")]
	public static float4x3 float4x3(uint4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000228")]
	[Address(RVA = "0x29E1F30", Offset = "0x29E0530", VA = "0x1829E1F30")]
	public static float4x3 float4x3(double v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000229")]
	[Address(RVA = "0x29E1E60", Offset = "0x29E0460", VA = "0x1829E1E60")]
	public static float4x3 float4x3(double4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022A")]
	[Address(RVA = "0x2A0CB50", Offset = "0x2A0B150", VA = "0x182A0CB50")]
	public static float3x4 transpose(float4x3 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022B")]
	[Address(RVA = "0x29E6A70", Offset = "0x29E5070", VA = "0x1829E6A70")]
	public static uint hash(float4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022C")]
	[Address(RVA = "0x29E7910", Offset = "0x29E5F10", VA = "0x1829E7910")]
	public static uint4 hashwide(float4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022D")]
	[Address(RVA = "0x29E2900", Offset = "0x29E0F00", VA = "0x1829E2900")]
	public static float4x4 float4x4(float4 c0, float4 c1, float4 c2, float4 c3)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022E")]
	[Address(RVA = "0x29E2480", Offset = "0x29E0A80", VA = "0x1829E2480")]
	public static float4x4 float4x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022F")]
	[Address(RVA = "0x29E2890", Offset = "0x29E0E90", VA = "0x1829E2890")]
	public static float4x4 float4x4(float v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000230")]
	[Address(RVA = "0x29E2DC0", Offset = "0x29E13C0", VA = "0x1829E2DC0")]
	public static float4x4 float4x4(bool v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000231")]
	[Address(RVA = "0x29E2ED0", Offset = "0x29E14D0", VA = "0x1829E2ED0")]
	public static float4x4 float4x4(bool4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000232")]
	[Address(RVA = "0x29E2E10", Offset = "0x29E1410", VA = "0x1829E2E10")]
	public static float4x4 float4x4(int v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000233")]
	[Address(RVA = "0x29E2670", Offset = "0x29E0C70", VA = "0x1829E2670")]
	public static float4x4 float4x4(int4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000234")]
	[Address(RVA = "0x29E2530", Offset = "0x29E0B30", VA = "0x1829E2530")]
	public static float4x4 float4x4(uint v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000235")]
	[Address(RVA = "0x29E2BA0", Offset = "0x29E11A0", VA = "0x1829E2BA0")]
	public static float4x4 float4x4(uint4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000236")]
	[Address(RVA = "0x29E27C0", Offset = "0x29E0DC0", VA = "0x1829E27C0")]
	public static float4x4 float4x4(double v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000237")]
	[Address(RVA = "0x29E2930", Offset = "0x29E0F30", VA = "0x1829E2930")]
	public static float4x4 float4x4(double4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000238")]
	[Address(RVA = "0x2A04140", Offset = "0x2A02740", VA = "0x182A04140")]
	public static float3 rotate(float4x4 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000239")]
	[Address(RVA = "0x2A0C720", Offset = "0x2A0AD20", VA = "0x182A0C720")]
	public static float3 transform(float4x4 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023A")]
	[Address(RVA = "0x2A0D3E0", Offset = "0x2A0B9E0", VA = "0x182A0D3E0")]
	public static float4x4 transpose(float4x4 v)
	{
		return default(float4x4);
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x29EE820", Offset = "0x29ECE20", VA = "0x1829EE820")]
	public static float4x4 inverse(float4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x29DE030", Offset = "0x29DC630", VA = "0x1829DE030")]
	public static float4x4 fastinverse(float4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x29D76B0", Offset = "0x29D5CB0", VA = "0x1829D76B0")]
	public static float determinant(float4x4 m)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023E")]
	[Address(RVA = "0x29E4EF0", Offset = "0x29E34F0", VA = "0x1829E4EF0")]
	public static uint hash(float4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600023F")]
	[Address(RVA = "0x29E8A50", Offset = "0x29E7050", VA = "0x1829E8A50")]
	public static uint4 hashwide(float4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000240")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	public static half half(half x)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000241")]
	[Address(RVA = "0x29E4930", Offset = "0x29E2F30", VA = "0x1829E4930")]
	public static half half(float v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000242")]
	[Address(RVA = "0x29C8DE0", Offset = "0x29C73E0", VA = "0x1829C8DE0")]
	public static half half(double v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000243")]
	[Address(RVA = "0x29E4E10", Offset = "0x29E3410", VA = "0x1829E4E10")]
	public static uint hash(half v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000244")]
	[Address(RVA = "0x29D3510", Offset = "0x29D1B10", VA = "0x1829D3510")]
	public static half2 half2(half x, half y)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000245")]
	[Address(RVA = "0x29942D0", Offset = "0x29928D0", VA = "0x1829942D0")]
	public static half2 half2(half2 xy)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000246")]
	[Address(RVA = "0x29E4340", Offset = "0x29E2940", VA = "0x1829E4340")]
	public static half2 half2(half v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000247")]
	[Address(RVA = "0x29E4350", Offset = "0x29E2950", VA = "0x1829E4350")]
	public static half2 half2(float v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000248")]
	[Address(RVA = "0x29E4430", Offset = "0x29E2A30", VA = "0x1829E4430")]
	public static half2 half2(float2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000249")]
	[Address(RVA = "0x29E42C0", Offset = "0x29E28C0", VA = "0x1829E42C0")]
	public static half2 half2(double v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024A")]
	[Address(RVA = "0x29E4300", Offset = "0x29E2900", VA = "0x1829E4300")]
	public static half2 half2(double2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024B")]
	[Address(RVA = "0x29E6FA0", Offset = "0x29E55A0", VA = "0x1829E6FA0")]
	public static uint hash(half2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024C")]
	[Address(RVA = "0x29E93A0", Offset = "0x29E79A0", VA = "0x1829E93A0")]
	public static uint2 hashwide(half2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024D")]
	[Address(RVA = "0x29D3560", Offset = "0x29D1B60", VA = "0x1829D3560")]
	public static half3 half3(half x, half y, half z)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024E")]
	[Address(RVA = "0x29E4660", Offset = "0x29E2C60", VA = "0x1829E4660")]
	public static half3 half3(half x, half2 yz)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600024F")]
	[Address(RVA = "0x29E4680", Offset = "0x29E2C80", VA = "0x1829E4680")]
	public static half3 half3(half2 xy, half z)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000250")]
	[Address(RVA = "0x29E4560", Offset = "0x29E2B60", VA = "0x1829E4560")]
	public static half3 half3(half3 xyz)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000251")]
	[Address(RVA = "0x29E4620", Offset = "0x29E2C20", VA = "0x1829E4620")]
	public static half3 half3(half v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000252")]
	[Address(RVA = "0x29E4630", Offset = "0x29E2C30", VA = "0x1829E4630")]
	public static half3 half3(float v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000253")]
	[Address(RVA = "0x29E45E0", Offset = "0x29E2BE0", VA = "0x1829E45E0")]
	public static half3 half3(float3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000254")]
	[Address(RVA = "0x29E4510", Offset = "0x29E2B10", VA = "0x1829E4510")]
	public static half3 half3(double v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000255")]
	[Address(RVA = "0x29E4590", Offset = "0x29E2B90", VA = "0x1829E4590")]
	public static half3 half3(double3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000256")]
	[Address(RVA = "0x29E49F0", Offset = "0x29E2FF0", VA = "0x1829E49F0")]
	public static uint hash(half3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000257")]
	[Address(RVA = "0x29E8E60", Offset = "0x29E7460", VA = "0x1829E8E60")]
	public static uint3 hashwide(half3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000258")]
	[Address(RVA = "0x29D3610", Offset = "0x29D1C10", VA = "0x1829D3610")]
	public static half4 half4(half x, half y, half z, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000259")]
	[Address(RVA = "0x29E4800", Offset = "0x29E2E00", VA = "0x1829E4800")]
	public static half4 half4(half x, half y, half2 zw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025A")]
	[Address(RVA = "0x29E46F0", Offset = "0x29E2CF0", VA = "0x1829E46F0")]
	public static half4 half4(half x, half2 yz, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025B")]
	[Address(RVA = "0x29E48C0", Offset = "0x29E2EC0", VA = "0x1829E48C0")]
	public static half4 half4(half x, half3 yzw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025C")]
	[Address(RVA = "0x29E46A0", Offset = "0x29E2CA0", VA = "0x1829E46A0")]
	public static half4 half4(half2 xy, half z, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025D")]
	[Address(RVA = "0x29E4780", Offset = "0x29E2D80", VA = "0x1829E4780")]
	public static half4 half4(half2 xy, half2 zw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025E")]
	[Address(RVA = "0x29E47D0", Offset = "0x29E2DD0", VA = "0x1829E47D0")]
	public static half4 half4(half3 xyz, half w)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025F")]
	[Address(RVA = "0x29E4890", Offset = "0x29E2E90", VA = "0x1829E4890")]
	public static half4 half4(half4 xyzw)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000260")]
	[Address(RVA = "0x29E46D0", Offset = "0x29E2CD0", VA = "0x1829E46D0")]
	public static half4 half4(half v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000261")]
	[Address(RVA = "0x29E47A0", Offset = "0x29E2DA0", VA = "0x1829E47A0")]
	public static half4 half4(float v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000262")]
	[Address(RVA = "0x29E48F0", Offset = "0x29E2EF0", VA = "0x1829E48F0")]
	public static half4 half4(float4 v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000263")]
	[Address(RVA = "0x29E4830", Offset = "0x29E2E30", VA = "0x1829E4830")]
	public static half4 half4(double v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000264")]
	[Address(RVA = "0x29E4720", Offset = "0x29E2D20", VA = "0x1829E4720")]
	public static half4 half4(double4 v)
	{
		return default(half4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000265")]
	[Address(RVA = "0x29E49A0", Offset = "0x29E2FA0", VA = "0x1829E49A0")]
	public static uint hash(half4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000266")]
	[Address(RVA = "0x29E9E60", Offset = "0x29E8460", VA = "0x1829E9E60")]
	public static uint4 hashwide(half4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000267")]
	[Address(RVA = "0x29D3AA0", Offset = "0x29D20A0", VA = "0x1829D3AA0")]
	public static int2 int2(int x, int y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000268")]
	[Address(RVA = "0x29C6810", Offset = "0x29C4E10", VA = "0x1829C6810")]
	public static int2 int2(int2 xy)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000269")]
	[Address(RVA = "0x29EA260", Offset = "0x29E8860", VA = "0x1829EA260")]
	public static int2 int2(int v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026A")]
	[Address(RVA = "0x29EA1E0", Offset = "0x29E87E0", VA = "0x1829EA1E0")]
	public static int2 int2(bool v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026B")]
	[Address(RVA = "0x29EA230", Offset = "0x29E8830", VA = "0x1829EA230")]
	public static int2 int2(bool2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026C")]
	[Address(RVA = "0x29EA260", Offset = "0x29E8860", VA = "0x1829EA260")]
	public static int2 int2(uint v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026D")]
	[Address(RVA = "0x29C6810", Offset = "0x29C4E10", VA = "0x1829C6810")]
	public static int2 int2(uint2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026E")]
	[Address(RVA = "0x29EA210", Offset = "0x29E8810", VA = "0x1829EA210")]
	public static int2 int2(float v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026F")]
	[Address(RVA = "0x29EA190", Offset = "0x29E8790", VA = "0x1829EA190")]
	public static int2 int2(float2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000270")]
	[Address(RVA = "0x29EA1C0", Offset = "0x29E87C0", VA = "0x1829EA1C0")]
	public static int2 int2(double v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000271")]
	[Address(RVA = "0x29EA270", Offset = "0x29E8870", VA = "0x1829EA270")]
	public static int2 int2(double2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000272")]
	[Address(RVA = "0x29E5C00", Offset = "0x29E4200", VA = "0x1829E5C00")]
	public static uint hash(int2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000273")]
	[Address(RVA = "0x29E9450", Offset = "0x29E7A50", VA = "0x1829E9450")]
	public static uint2 hashwide(int2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000274")]
	[Address(RVA = "0x2A07260", Offset = "0x2A05860", VA = "0x182A07260")]
	public static int shuffle(int2 left, int2 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000275")]
	[Address(RVA = "0x2A076D0", Offset = "0x2A05CD0", VA = "0x182A076D0")]
	public static int2 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000276")]
	[Address(RVA = "0x2A070D0", Offset = "0x2A056D0", VA = "0x182A070D0")]
	public static int3 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000277")]
	[Address(RVA = "0x2A064D0", Offset = "0x2A04AD0", VA = "0x182A064D0")]
	public static int4 shuffle(int2 left, int2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000278")]
	[Address(RVA = "0x29CC280", Offset = "0x29CA880", VA = "0x1829CC280")]
	internal static int select_shuffle_component(int2 a, int2 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000279")]
	[Address(RVA = "0x29DF510", Offset = "0x29DDB10", VA = "0x1829DF510")]
	public static int2x2 int2x2(int2 c0, int2 c1)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027A")]
	[Address(RVA = "0x29EA360", Offset = "0x29E8960", VA = "0x1829EA360")]
	public static int2x2 int2x2(int m00, int m01, int m10, int m11)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027B")]
	[Address(RVA = "0x29EA330", Offset = "0x29E8930", VA = "0x1829EA330")]
	public static int2x2 int2x2(int v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027C")]
	[Address(RVA = "0x29EA4B0", Offset = "0x29E8AB0", VA = "0x1829EA4B0")]
	public static int2x2 int2x2(bool v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027D")]
	[Address(RVA = "0x29EA290", Offset = "0x29E8890", VA = "0x1829EA290")]
	public static int2x2 int2x2(bool2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027E")]
	[Address(RVA = "0x29EA330", Offset = "0x29E8930", VA = "0x1829EA330")]
	public static int2x2 int2x2(uint v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027F")]
	[Address(RVA = "0x29EA420", Offset = "0x29E8A20", VA = "0x1829EA420")]
	public static int2x2 int2x2(uint2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000280")]
	[Address(RVA = "0x29EA3E0", Offset = "0x29E89E0", VA = "0x1829EA3E0")]
	public static int2x2 int2x2(float v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000281")]
	[Address(RVA = "0x29EA2F0", Offset = "0x29E88F0", VA = "0x1829EA2F0")]
	public static int2x2 int2x2(float2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000282")]
	[Address(RVA = "0x29EA470", Offset = "0x29E8A70", VA = "0x1829EA470")]
	public static int2x2 int2x2(double v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000283")]
	[Address(RVA = "0x29EA390", Offset = "0x29E8990", VA = "0x1829EA390")]
	public static int2x2 int2x2(double2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000284")]
	[Address(RVA = "0x2A0C8F0", Offset = "0x2A0AEF0", VA = "0x182A0C8F0")]
	public static int2x2 transpose(int2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000285")]
	[Address(RVA = "0x29D75D0", Offset = "0x29D5BD0", VA = "0x1829D75D0")]
	public static int determinant(int2x2 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000286")]
	[Address(RVA = "0x29E6620", Offset = "0x29E4C20", VA = "0x1829E6620")]
	public static uint hash(int2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000287")]
	[Address(RVA = "0x29E87E0", Offset = "0x29E6DE0", VA = "0x1829E87E0")]
	public static uint2 hashwide(int2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000288")]
	[Address(RVA = "0x27F3660", Offset = "0x27F1C60", VA = "0x1827F3660")]
	public static int2x3 int2x3(int2 c0, int2 c1, int2 c2)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000289")]
	[Address(RVA = "0x29EA560", Offset = "0x29E8B60", VA = "0x1829EA560")]
	public static int2x3 int2x3(int m00, int m01, int m02, int m10, int m11, int m12)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028A")]
	[Address(RVA = "0x29EA640", Offset = "0x29E8C40", VA = "0x1829EA640")]
	public static int2x3 int2x3(int v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028B")]
	[Address(RVA = "0x29EA7F0", Offset = "0x29E8DF0", VA = "0x1829EA7F0")]
	public static int2x3 int2x3(bool v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028C")]
	[Address(RVA = "0x29EA6D0", Offset = "0x29E8CD0", VA = "0x1829EA6D0")]
	public static int2x3 int2x3(bool2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028D")]
	[Address(RVA = "0x29EA640", Offset = "0x29E8C40", VA = "0x1829EA640")]
	public static int2x3 int2x3(uint v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028E")]
	[Address(RVA = "0x29EA5B0", Offset = "0x29E8BB0", VA = "0x1829EA5B0")]
	public static int2x3 int2x3(uint2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028F")]
	[Address(RVA = "0x29EA510", Offset = "0x29E8B10", VA = "0x1829EA510")]
	public static int2x3 int2x3(float v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000290")]
	[Address(RVA = "0x29EA870", Offset = "0x29E8E70", VA = "0x1829EA870")]
	public static int2x3 int2x3(float2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000291")]
	[Address(RVA = "0x29EA680", Offset = "0x29E8C80", VA = "0x1829EA680")]
	public static int2x3 int2x3(double v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000292")]
	[Address(RVA = "0x29EA780", Offset = "0x29E8D80", VA = "0x1829EA780")]
	public static int2x3 int2x3(double2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000293")]
	[Address(RVA = "0x2A0D680", Offset = "0x2A0BC80", VA = "0x182A0D680")]
	public static int3x2 transpose(int2x3 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000294")]
	[Address(RVA = "0x29E5EA0", Offset = "0x29E44A0", VA = "0x1829E5EA0")]
	public static uint hash(int2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000295")]
	[Address(RVA = "0x29E9330", Offset = "0x29E7930", VA = "0x1829E9330")]
	public static uint2 hashwide(int2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000296")]
	[Address(RVA = "0x2985A50", Offset = "0x2984050", VA = "0x182985A50")]
	public static int2x4 int2x4(int2 c0, int2 c1, int2 c2, int2 c3)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000297")]
	[Address(RVA = "0x29EAA60", Offset = "0x29E9060", VA = "0x1829EAA60")]
	public static int2x4 int2x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000298")]
	[Address(RVA = "0x29EA970", Offset = "0x29E8F70", VA = "0x1829EA970")]
	public static int2x4 int2x4(int v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x29EAAC0", Offset = "0x29E90C0", VA = "0x1829EAAC0")]
	public static int2x4 int2x4(bool v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029A")]
	[Address(RVA = "0x29EA8C0", Offset = "0x29E8EC0", VA = "0x1829EA8C0")]
	public static int2x4 int2x4(bool2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029B")]
	[Address(RVA = "0x29EA970", Offset = "0x29E8F70", VA = "0x1829EA970")]
	public static int2x4 int2x4(uint v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029C")]
	[Address(RVA = "0x29EA9C0", Offset = "0x29E8FC0", VA = "0x1829EA9C0")]
	public static int2x4 int2x4(uint2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029D")]
	[Address(RVA = "0x29EAC40", Offset = "0x29E9240", VA = "0x1829EAC40")]
	public static int2x4 int2x4(float v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029E")]
	[Address(RVA = "0x29EABD0", Offset = "0x29E91D0", VA = "0x1829EABD0")]
	public static int2x4 int2x4(float2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600029F")]
	[Address(RVA = "0x29EAB60", Offset = "0x29E9160", VA = "0x1829EAB60")]
	public static int2x4 int2x4(double v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x29EACB0", Offset = "0x29E92B0", VA = "0x1829EACB0")]
	public static int2x4 int2x4(double2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x2A0CAF0", Offset = "0x2A0B0F0", VA = "0x182A0CAF0")]
	public static int4x2 transpose(int2x4 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x29E5710", Offset = "0x29E3D10", VA = "0x1829E5710")]
	public static uint hash(int2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x29E80A0", Offset = "0x29E66A0", VA = "0x1829E80A0")]
	public static uint2 hashwide(int2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x29D3B00", Offset = "0x29D2100", VA = "0x1829D3B00")]
	public static int3 int3(int x, int y, int z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x29EADB0", Offset = "0x29E93B0", VA = "0x1829EADB0")]
	public static int3 int3(int x, int2 yz)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x29EADD0", Offset = "0x29E93D0", VA = "0x1829EADD0")]
	public static int3 int3(int2 xy, int z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x29E0200", Offset = "0x29DE800", VA = "0x1829E0200")]
	public static int3 int3(int3 xyz)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x29EAD80", Offset = "0x29E9380", VA = "0x1829EAD80")]
	public static int3 int3(int v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x29EAD50", Offset = "0x29E9350", VA = "0x1829EAD50")]
	public static int3 int3(bool v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x29EAE30", Offset = "0x29E9430", VA = "0x1829EAE30")]
	public static int3 int3(bool3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x29EAD80", Offset = "0x29E9380", VA = "0x1829EAD80")]
	public static int3 int3(uint v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x29E0200", Offset = "0x29DE800", VA = "0x1829E0200")]
	public static int3 int3(uint3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x29EAE10", Offset = "0x29E9410", VA = "0x1829EAE10")]
	public static int3 int3(float v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x29EAD90", Offset = "0x29E9390", VA = "0x1829EAD90")]
	public static int3 int3(float3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x29EADF0", Offset = "0x29E93F0", VA = "0x1829EADF0")]
	public static int3 int3(double v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x29EAE60", Offset = "0x29E9460", VA = "0x1829EAE60")]
	public static int3 int3(double3 v)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x29E6C80", Offset = "0x29E5280", VA = "0x1829E6C80")]
	public static uint hash(int3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x29E9990", Offset = "0x29E7F90", VA = "0x1829E9990")]
	public static uint3 hashwide(int3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x2A06350", Offset = "0x2A04950", VA = "0x182A06350")]
	public static int shuffle(int3 left, int3 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x2A069C0", Offset = "0x2A04FC0", VA = "0x182A069C0")]
	public static int2 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x2A074B0", Offset = "0x2A05AB0", VA = "0x182A074B0")]
	public static int3 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x2A06B40", Offset = "0x2A05140", VA = "0x182A06B40")]
	public static int4 shuffle(int3 left, int3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x29CB6A0", Offset = "0x29C9CA0", VA = "0x1829CB6A0")]
	internal static int select_shuffle_component(int3 a, int3 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x29E05F0", Offset = "0x29DEBF0", VA = "0x1829E05F0")]
	public static int3x2 int3x2(int3 c0, int3 c1)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x29EAFA0", Offset = "0x29E95A0", VA = "0x1829EAFA0")]
	public static int3x2 int3x2(int m00, int m01, int m10, int m11, int m20, int m21)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x29EAFD0", Offset = "0x29E95D0", VA = "0x1829EAFD0")]
	public static int3x2 int3x2(int v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x29EAFF0", Offset = "0x29E95F0", VA = "0x1829EAFF0")]
	public static int3x2 int3x2(bool v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x29EB030", Offset = "0x29E9630", VA = "0x1829EB030")]
	public static int3x2 int3x2(bool3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x29EAFD0", Offset = "0x29E95D0", VA = "0x1829EAFD0")]
	public static int3x2 int3x2(uint v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x29EAED0", Offset = "0x29E94D0", VA = "0x1829EAED0")]
	public static int3x2 int3x2(uint3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x29EB0A0", Offset = "0x29E96A0", VA = "0x1829EB0A0")]
	public static int3x2 int3x2(float v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x29EAF40", Offset = "0x29E9540", VA = "0x1829EAF40")]
	public static int3x2 int3x2(float3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x29EB0E0", Offset = "0x29E96E0", VA = "0x1829EB0E0")]
	public static int3x2 int3x2(double v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x29EAE80", Offset = "0x29E9480", VA = "0x1829EAE80")]
	public static int3x2 int3x2(double3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x2A0C920", Offset = "0x2A0AF20", VA = "0x182A0C920")]
	public static int2x3 transpose(int3x2 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x29E6FC0", Offset = "0x29E55C0", VA = "0x1829E6FC0")]
	public static uint hash(int3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x29E8760", Offset = "0x29E6D60", VA = "0x1829E8760")]
	public static uint3 hashwide(int3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x29E0C70", Offset = "0x29DF270", VA = "0x1829E0C70")]
	public static int3x3 int3x3(int3 c0, int3 c1, int3 c2)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x29EB300", Offset = "0x29E9900", VA = "0x1829EB300")]
	public static int3x3 int3x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x29EB110", Offset = "0x29E9710", VA = "0x1829EB110")]
	public static int3x3 int3x3(int v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x29EB450", Offset = "0x29E9A50", VA = "0x1829EB450")]
	public static int3x3 int3x3(bool v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x29EB390", Offset = "0x29E9990", VA = "0x1829EB390")]
	public static int3x3 int3x3(bool3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x29EB110", Offset = "0x29E9710", VA = "0x1829EB110")]
	public static int3x3 int3x3(uint v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x29EB180", Offset = "0x29E9780", VA = "0x1829EB180")]
	public static int3x3 int3x3(uint3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x29EB130", Offset = "0x29E9730", VA = "0x1829EB130")]
	public static int3x3 int3x3(float v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x29EB280", Offset = "0x29E9880", VA = "0x1829EB280")]
	public static int3x3 int3x3(float3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x29EB340", Offset = "0x29E9940", VA = "0x1829EB340")]
	public static int3x3 int3x3(double v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x29EB210", Offset = "0x29E9810", VA = "0x1829EB210")]
	public static int3x3 int3x3(double3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x2A0CEB0", Offset = "0x2A0B4B0", VA = "0x182A0CEB0")]
	public static int3x3 transpose(int3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x29D7AE0", Offset = "0x29D60E0", VA = "0x1829D7AE0")]
	public static int determinant(int3x3 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x29E55E0", Offset = "0x29E3BE0", VA = "0x1829E55E0")]
	public static uint hash(int3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x29E7FF0", Offset = "0x29E65F0", VA = "0x1829E7FF0")]
	public static uint3 hashwide(int3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x29E14D0", Offset = "0x29DFAD0", VA = "0x1829E14D0")]
	public static int3x4 int3x4(int3 c0, int3 c1, int3 c2, int3 c3)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x29EB810", Offset = "0x29E9E10", VA = "0x1829EB810")]
	public static int3x4 int3x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static int3x4 int3x4(int v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x29EB4A0", Offset = "0x29E9AA0", VA = "0x1829EB4A0")]
	public static int3x4 int3x4(bool v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x29EB590", Offset = "0x29E9B90", VA = "0x1829EB590")]
	public static int3x4 int3x4(bool3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static int3x4 int3x4(uint v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x29EB860", Offset = "0x29E9E60", VA = "0x1829EB860")]
	public static int3x4 int3x4(uint3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x29EB7B0", Offset = "0x29E9DB0", VA = "0x1829EB7B0")]
	public static int3x4 int3x4(float v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x29EB6B0", Offset = "0x29E9CB0", VA = "0x1829EB6B0")]
	public static int3x4 int3x4(float3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x29EB750", Offset = "0x29E9D50", VA = "0x1829EB750")]
	public static int3x4 int3x4(double v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x29EB500", Offset = "0x29E9B00", VA = "0x1829EB500")]
	public static int3x4 int3x4(double3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x2A0CA20", Offset = "0x2A0B020", VA = "0x182A0CA20")]
	public static int4x3 transpose(int3x4 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x29E54B0", Offset = "0x29E3AB0", VA = "0x1829E54B0")]
	public static uint hash(int3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x29E8BF0", Offset = "0x29E71F0", VA = "0x1829E8BF0")]
	public static uint3 hashwide(int3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x298EBF0", Offset = "0x298D1F0", VA = "0x18298EBF0")]
	public static int4 int4(int x, int y, int z, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x29EBA00", Offset = "0x29EA000", VA = "0x1829EBA00")]
	public static int4 int4(int x, int y, int2 zw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x29EBA60", Offset = "0x29EA060", VA = "0x1829EBA60")]
	public static int4 int4(int x, int2 yz, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x29EB950", Offset = "0x29E9F50", VA = "0x1829EB950")]
	public static int4 int4(int x, int3 yzw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x29EBA20", Offset = "0x29EA020", VA = "0x1829EBA20")]
	public static int4 int4(int2 xy, int z, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x29C6830", Offset = "0x29C4E30", VA = "0x1829C6830")]
	public static int4 int4(int2 xy, int2 zw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x29EBA40", Offset = "0x29EA040", VA = "0x1829EBA40")]
	public static int4 int4(int3 xyz, int w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static int4 int4(int4 xyzw)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x298EA40", Offset = "0x298D040", VA = "0x18298EA40")]
	public static int4 int4(int v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x29EB910", Offset = "0x29E9F10", VA = "0x1829EB910")]
	public static int4 int4(bool v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x29EB970", Offset = "0x29E9F70", VA = "0x1829EB970")]
	public static int4 int4(bool4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x298EA40", Offset = "0x298D040", VA = "0x18298EA40")]
	public static int4 int4(uint v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static int4 int4(uint4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x29EB9D0", Offset = "0x29E9FD0", VA = "0x1829EB9D0")]
	public static int4 int4(float v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x298DE50", Offset = "0x298C450", VA = "0x18298DE50")]
	public static int4 int4(float4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x29EB9B0", Offset = "0x29E9FB0", VA = "0x1829EB9B0")]
	public static int4 int4(double v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x29841D0", Offset = "0x29827D0", VA = "0x1829841D0")]
	public static int4 int4(double4 v)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x29E7030", Offset = "0x29E5630", VA = "0x1829E7030")]
	public static uint hash(int4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x29E9C70", Offset = "0x29E8270", VA = "0x1829E9C70")]
	public static uint4 hashwide(int4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x2A06990", Offset = "0x2A04F90", VA = "0x182A06990")]
	public static int shuffle(int4 left, int4 right, ShuffleComponent x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x2A05B60", Offset = "0x2A04160", VA = "0x182A05B60")]
	public static int2 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x2A07D30", Offset = "0x2A06330", VA = "0x182A07D30")]
	public static int3 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x2A05E70", Offset = "0x2A04470", VA = "0x182A05E70")]
	public static int4 shuffle(int4 left, int4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x29CBCF0", Offset = "0x29CA2F0", VA = "0x1829CBCF0")]
	internal static int select_shuffle_component(int4 a, int4 b, ShuffleComponent component)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x2985BA0", Offset = "0x29841A0", VA = "0x182985BA0")]
	public static int4x2 int4x2(int4 c0, int4 c1)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x29EBD10", Offset = "0x29EA310", VA = "0x1829EBD10")]
	public static int4x2 int4x2(int m00, int m01, int m10, int m11, int m20, int m21, int m30, int m31)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x29EBB30", Offset = "0x29EA130", VA = "0x1829EBB30")]
	public static int4x2 int4x2(int v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x29EBBD0", Offset = "0x29EA1D0", VA = "0x1829EBBD0")]
	public static int4x2 int4x2(bool v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x29EBC90", Offset = "0x29EA290", VA = "0x1829EBC90")]
	public static int4x2 int4x2(bool4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000300")]
	[Address(RVA = "0x29EBB30", Offset = "0x29EA130", VA = "0x1829EBB30")]
	public static int4x2 int4x2(uint v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000301")]
	[Address(RVA = "0x29EBB50", Offset = "0x29EA150", VA = "0x1829EBB50")]
	public static int4x2 int4x2(uint4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000302")]
	[Address(RVA = "0x29EBBA0", Offset = "0x29EA1A0", VA = "0x1829EBBA0")]
	public static int4x2 int4x2(float v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000303")]
	[Address(RVA = "0x29EBC20", Offset = "0x29EA220", VA = "0x1829EBC20")]
	public static int4x2 int4x2(float4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000304")]
	[Address(RVA = "0x29EBA80", Offset = "0x29EA080", VA = "0x1829EBA80")]
	public static int4x2 int4x2(double v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000305")]
	[Address(RVA = "0x29EBAC0", Offset = "0x29EA0C0", VA = "0x1829EBAC0")]
	public static int4x2 int4x2(double4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000306")]
	[Address(RVA = "0x2A0C970", Offset = "0x2A0AF70", VA = "0x182A0C970")]
	public static int2x4 transpose(int4x2 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000307")]
	[Address(RVA = "0x29E6810", Offset = "0x29E4E10", VA = "0x1829E6810")]
	public static uint hash(int4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000308")]
	[Address(RVA = "0x29E83F0", Offset = "0x29E69F0", VA = "0x1829E83F0")]
	public static uint4 hashwide(int4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000309")]
	[Address(RVA = "0x29E2460", Offset = "0x29E0A60", VA = "0x1829E2460")]
	public static int4x3 int4x3(int4 c0, int4 c1, int4 c2)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030A")]
	[Address(RVA = "0x29EBF90", Offset = "0x29EA590", VA = "0x1829EBF90")]
	public static int4x3 int4x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22, int m30, int m31, int m32)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030B")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static int4x3 int4x3(int v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030C")]
	[Address(RVA = "0x29EC050", Offset = "0x29EA650", VA = "0x1829EC050")]
	public static int4x3 int4x3(bool v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030D")]
	[Address(RVA = "0x29EBEA0", Offset = "0x29EA4A0", VA = "0x1829EBEA0")]
	public static int4x3 int4x3(bool4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030E")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static int4x3 int4x3(uint v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600030F")]
	[Address(RVA = "0x29EBFE0", Offset = "0x29EA5E0", VA = "0x1829EBFE0")]
	public static int4x3 int4x3(uint4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000310")]
	[Address(RVA = "0x29EBE60", Offset = "0x29EA460", VA = "0x1829EBE60")]
	public static int4x3 int4x3(float v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000311")]
	[Address(RVA = "0x29EC0B0", Offset = "0x29EA6B0", VA = "0x1829EC0B0")]
	public static int4x3 int4x3(float4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000312")]
	[Address(RVA = "0x29EBD50", Offset = "0x29EA350", VA = "0x1829EBD50")]
	public static int4x3 int4x3(double v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000313")]
	[Address(RVA = "0x29EBDC0", Offset = "0x29EA3C0", VA = "0x1829EBDC0")]
	public static int4x3 int4x3(double4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000314")]
	[Address(RVA = "0x2A0CD40", Offset = "0x2A0B340", VA = "0x182A0CD40")]
	public static int3x4 transpose(int4x3 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000315")]
	[Address(RVA = "0x29E68A0", Offset = "0x29E4EA0", VA = "0x1829E68A0")]
	public static uint hash(int4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000316")]
	[Address(RVA = "0x29E9480", Offset = "0x29E7A80", VA = "0x1829E9480")]
	public static uint4 hashwide(int4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000317")]
	[Address(RVA = "0x29E2900", Offset = "0x29E0F00", VA = "0x1829E2900")]
	public static int4x4 int4x4(int4 c0, int4 c1, int4 c2, int4 c3)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000318")]
	[Address(RVA = "0x29EC670", Offset = "0x29EAC70", VA = "0x1829EC670")]
	public static int4x4 int4x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23, int m30, int m31, int m32, int m33)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000319")]
	[Address(RVA = "0x29EC2C0", Offset = "0x29EA8C0", VA = "0x1829EC2C0")]
	public static int4x4 int4x4(int v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031A")]
	[Address(RVA = "0x29EC160", Offset = "0x29EA760", VA = "0x1829EC160")]
	public static int4x4 int4x4(bool v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031B")]
	[Address(RVA = "0x29EC350", Offset = "0x29EA950", VA = "0x1829EC350")]
	public static int4x4 int4x4(bool4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031C")]
	[Address(RVA = "0x29EC2C0", Offset = "0x29EA8C0", VA = "0x1829EC2C0")]
	public static int4x4 int4x4(uint v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031D")]
	[Address(RVA = "0x29EC470", Offset = "0x29EAA70", VA = "0x1829EC470")]
	public static int4x4 int4x4(uint4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031E")]
	[Address(RVA = "0x29EC300", Offset = "0x29EA900", VA = "0x1829EC300")]
	public static int4x4 int4x4(float v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600031F")]
	[Address(RVA = "0x29EC1D0", Offset = "0x29EA7D0", VA = "0x1829EC1D0")]
	public static int4x4 int4x4(float4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000320")]
	[Address(RVA = "0x29EC5E0", Offset = "0x29EABE0", VA = "0x1829EC5E0")]
	public static int4x4 int4x4(double v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000321")]
	[Address(RVA = "0x29EC500", Offset = "0x29EAB00", VA = "0x1829EC500")]
	public static int4x4 int4x4(double4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000322")]
	[Address(RVA = "0x2A0D120", Offset = "0x2A0B720", VA = "0x182A0D120")]
	public static int4x4 transpose(int4x4 v)
	{
		return default(int4x4);
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x29D78D0", Offset = "0x29D5ED0", VA = "0x1829D78D0")]
	public static int determinant(int4x4 m)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000324")]
	[Address(RVA = "0x29E60D0", Offset = "0x29E46D0", VA = "0x1829E60D0")]
	public static uint hash(int4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000325")]
	[Address(RVA = "0x29E8830", Offset = "0x29E6E30", VA = "0x1829E8830")]
	public static uint4 hashwide(int4x4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000326")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	public static int asint(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000327")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static int2 asint(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000328")]
	[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
	public static int3 asint(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000329")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public static int4 asint(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032A")]
	[Address(RVA = "0x1A790C0", Offset = "0x1A776C0", VA = "0x181A790C0")]
	public static int asint(float x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032B")]
	[Address(RVA = "0x29D2570", Offset = "0x29D0B70", VA = "0x1829D2570")]
	public static int2 asint(float2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032C")]
	[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
	public static int3 asint(float3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032D")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public static int4 asint(float4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032E")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	public static uint asuint(int x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600032F")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static uint2 asuint(int2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000330")]
	[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
	public static uint3 asuint(int3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000331")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public static uint4 asuint(int4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000332")]
	[Address(RVA = "0x1A790C0", Offset = "0x1A776C0", VA = "0x181A790C0")]
	public static uint asuint(float x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000333")]
	[Address(RVA = "0x29D2570", Offset = "0x29D0B70", VA = "0x1829D2570")]
	public static uint2 asuint(float2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000334")]
	[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
	public static uint3 asuint(float3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000335")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public static uint4 asuint(float4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000336")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static long aslong(ulong x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000337")]
	[Address(RVA = "0x1A78CD0", Offset = "0x1A772D0", VA = "0x181A78CD0")]
	public static long aslong(double x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000338")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static ulong asulong(long x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000339")]
	[Address(RVA = "0x1A78CD0", Offset = "0x1A772D0", VA = "0x181A78CD0")]
	public static ulong asulong(double x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033A")]
	[Address(RVA = "0x1A790A0", Offset = "0x1A776A0", VA = "0x181A790A0")]
	public static float asfloat(int x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033B")]
	[Address(RVA = "0x29D1E10", Offset = "0x29D0410", VA = "0x1829D1E10")]
	public static float2 asfloat(int2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033C")]
	[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
	public static float3 asfloat(int3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033D")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public static float4 asfloat(int4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033E")]
	[Address(RVA = "0x1A790A0", Offset = "0x1A776A0", VA = "0x181A790A0")]
	public static float asfloat(uint x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033F")]
	[Address(RVA = "0x29D1E10", Offset = "0x29D0410", VA = "0x1829D1E10")]
	public static float2 asfloat(uint2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000340")]
	[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
	public static float3 asfloat(uint3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000341")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public static float4 asfloat(uint4 x)
	{
		return default(float4);
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x29D3490", Offset = "0x29D1A90", VA = "0x1829D3490")]
	public static int bitmask(bool4 value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000343")]
	[Address(RVA = "0x1A790B0", Offset = "0x1A776B0", VA = "0x181A790B0")]
	public static double asdouble(long x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000344")]
	[Address(RVA = "0x1A790B0", Offset = "0x1A776B0", VA = "0x181A790B0")]
	public static double asdouble(ulong x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000345")]
	[Address(RVA = "0x29F0240", Offset = "0x29EE840", VA = "0x1829F0240")]
	public static bool isfinite(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x29F01B0", Offset = "0x29EE7B0", VA = "0x1829F01B0")]
	public static bool2 isfinite(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000347")]
	[Address(RVA = "0x29F0090", Offset = "0x29EE690", VA = "0x1829F0090")]
	public static bool3 isfinite(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000348")]
	[Address(RVA = "0x29F00F0", Offset = "0x29EE6F0", VA = "0x1829F00F0")]
	public static bool4 isfinite(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000349")]
	[Address(RVA = "0x29F0060", Offset = "0x29EE660", VA = "0x1829F0060")]
	public static bool isfinite(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034A")]
	[Address(RVA = "0x29F01F0", Offset = "0x29EE7F0", VA = "0x1829F01F0")]
	public static bool2 isfinite(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034B")]
	[Address(RVA = "0x29F0260", Offset = "0x29EE860", VA = "0x1829F0260")]
	public static bool3 isfinite(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034C")]
	[Address(RVA = "0x29F0140", Offset = "0x29EE740", VA = "0x1829F0140")]
	public static bool4 isfinite(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034D")]
	[Address(RVA = "0x29F02C0", Offset = "0x29EE8C0", VA = "0x1829F02C0")]
	public static bool isinf(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034E")]
	[Address(RVA = "0x29F0440", Offset = "0x29EEA40", VA = "0x1829F0440")]
	public static bool2 isinf(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600034F")]
	[Address(RVA = "0x29F0590", Offset = "0x29EEB90", VA = "0x1829F0590")]
	public static bool3 isinf(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000350")]
	[Address(RVA = "0x29F0500", Offset = "0x29EEB00", VA = "0x1829F0500")]
	public static bool4 isinf(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000351")]
	[Address(RVA = "0x29F0360", Offset = "0x29EE960", VA = "0x1829F0360")]
	public static bool isinf(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000352")]
	[Address(RVA = "0x29F04A0", Offset = "0x29EEAA0", VA = "0x1829F04A0")]
	public static bool2 isinf(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000353")]
	[Address(RVA = "0x29F02E0", Offset = "0x29EE8E0", VA = "0x1829F02E0")]
	public static bool3 isinf(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000354")]
	[Address(RVA = "0x29F0390", Offset = "0x29EE990", VA = "0x1829F0390")]
	public static bool4 isinf(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000355")]
	[Address(RVA = "0x1B49660", Offset = "0x1B47C60", VA = "0x181B49660")]
	public static bool isnan(float x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000356")]
	[Address(RVA = "0x29F0670", Offset = "0x29EEC70", VA = "0x1829F0670")]
	public static bool2 isnan(float2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000357")]
	[Address(RVA = "0x29F07B0", Offset = "0x29EEDB0", VA = "0x1829F07B0")]
	public static bool3 isnan(float3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000358")]
	[Address(RVA = "0x29F0760", Offset = "0x29EED60", VA = "0x1829F0760")]
	public static bool4 isnan(float4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000359")]
	[Address(RVA = "0x1B21DA0", Offset = "0x1B203A0", VA = "0x181B21DA0")]
	public static bool isnan(double x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035A")]
	[Address(RVA = "0x29F0720", Offset = "0x29EED20", VA = "0x1829F0720")]
	public static bool2 isnan(double2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035B")]
	[Address(RVA = "0x29F0610", Offset = "0x29EEC10", VA = "0x1829F0610")]
	public static bool3 isnan(double3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035C")]
	[Address(RVA = "0x29F06B0", Offset = "0x29EECB0", VA = "0x1829F06B0")]
	public static bool4 isnan(double4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035D")]
	[Address(RVA = "0x29F0850", Offset = "0x29EEE50", VA = "0x1829F0850")]
	public static bool ispow2(int x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035E")]
	[Address(RVA = "0x29F0860", Offset = "0x29EEE60", VA = "0x1829F0860")]
	public static bool2 ispow2(int2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035F")]
	[Address(RVA = "0x29F07F0", Offset = "0x29EEDF0", VA = "0x1829F07F0")]
	public static bool3 ispow2(int3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000360")]
	[Address(RVA = "0x29F09C0", Offset = "0x29EEFC0", VA = "0x1829F09C0")]
	public static bool4 ispow2(int4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000361")]
	[Address(RVA = "0x29F0910", Offset = "0x29EEF10", VA = "0x1829F0910")]
	public static bool ispow2(uint x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000362")]
	[Address(RVA = "0x29F0920", Offset = "0x29EEF20", VA = "0x1829F0920")]
	public static bool2 ispow2(uint2 x)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000363")]
	[Address(RVA = "0x29F0960", Offset = "0x29EEF60", VA = "0x1829F0960")]
	public static bool3 ispow2(uint3 x)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000364")]
	[Address(RVA = "0x29F08A0", Offset = "0x29EEEA0", VA = "0x1829F08A0")]
	public static bool4 ispow2(uint4 x)
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000365")]
	[Address(RVA = "0x29F3500", Offset = "0x29F1B00", VA = "0x1829F3500")]
	public static int min(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000366")]
	[Address(RVA = "0x29F39A0", Offset = "0x29F1FA0", VA = "0x1829F39A0")]
	public static int2 min(int2 x, int2 y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000367")]
	[Address(RVA = "0x29F39F0", Offset = "0x29F1FF0", VA = "0x1829F39F0")]
	public static int3 min(int3 x, int3 y)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000368")]
	[Address(RVA = "0x29F3690", Offset = "0x29F1C90", VA = "0x1829F3690")]
	public static int4 min(int4 x, int4 y)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000369")]
	[Address(RVA = "0x29F39E0", Offset = "0x29F1FE0", VA = "0x1829F39E0")]
	public static uint min(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036A")]
	[Address(RVA = "0x29F37E0", Offset = "0x29F1DE0", VA = "0x1829F37E0")]
	public static uint2 min(uint2 x, uint2 y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036B")]
	[Address(RVA = "0x29F3830", Offset = "0x29F1E30", VA = "0x1829F3830")]
	public static uint3 min(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036C")]
	[Address(RVA = "0x29F3920", Offset = "0x29F1F20", VA = "0x1829F3920")]
	public static uint4 min(uint4 x, uint4 y)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036D")]
	[Address(RVA = "0x29F3990", Offset = "0x29F1F90", VA = "0x1829F3990")]
	public static long min(long x, long y)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036E")]
	[Address(RVA = "0x29F39D0", Offset = "0x29F1FD0", VA = "0x1829F39D0")]
	public static ulong min(ulong x, ulong y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036F")]
	[Address(RVA = "0x29F3810", Offset = "0x29F1E10", VA = "0x1829F3810")]
	public static float min(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000370")]
	[Address(RVA = "0x29CAB50", Offset = "0x29C9150", VA = "0x1829CAB50")]
	public static float2 min(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000371")]
	[Address(RVA = "0x29F35A0", Offset = "0x29F1BA0", VA = "0x1829F35A0")]
	public static float3 min(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000372")]
	[Address(RVA = "0x29F3880", Offset = "0x29F1E80", VA = "0x1829F3880")]
	public static float4 min(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000373")]
	[Address(RVA = "0x29F3700", Offset = "0x29F1D00", VA = "0x1829F3700")]
	public static double min(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000374")]
	[Address(RVA = "0x29F3620", Offset = "0x29F1C20", VA = "0x1829F3620")]
	public static double2 min(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000375")]
	[Address(RVA = "0x29F3510", Offset = "0x29F1B10", VA = "0x1829F3510")]
	public static double3 min(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000376")]
	[Address(RVA = "0x29F3730", Offset = "0x29F1D30", VA = "0x1829F3730")]
	public static double4 min(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000377")]
	[Address(RVA = "0x29F3160", Offset = "0x29F1760", VA = "0x1829F3160")]
	public static int max(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000378")]
	[Address(RVA = "0x29F3050", Offset = "0x29F1650", VA = "0x1829F3050")]
	public static int2 max(int2 x, int2 y)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000379")]
	[Address(RVA = "0x29F3000", Offset = "0x29F1600", VA = "0x1829F3000")]
	public static int3 max(int3 x, int3 y)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037A")]
	[Address(RVA = "0x29F3270", Offset = "0x29F1870", VA = "0x1829F3270")]
	public static int4 max(int4 x, int4 y)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037B")]
	[Address(RVA = "0x29F3400", Offset = "0x29F1A00", VA = "0x1829F3400")]
	public static uint max(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037C")]
	[Address(RVA = "0x29F3410", Offset = "0x29F1A10", VA = "0x1829F3410")]
	public static uint2 max(uint2 x, uint2 y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037D")]
	[Address(RVA = "0x29F3450", Offset = "0x29F1A50", VA = "0x1829F3450")]
	public static uint3 max(uint3 x, uint3 y)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037E")]
	[Address(RVA = "0x29F3200", Offset = "0x29F1800", VA = "0x1829F3200")]
	public static uint4 max(uint4 x, uint4 y)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037F")]
	[Address(RVA = "0x29F3440", Offset = "0x29F1A40", VA = "0x1829F3440")]
	public static long max(long x, long y)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000380")]
	[Address(RVA = "0x29F3120", Offset = "0x29F1720", VA = "0x1829F3120")]
	public static ulong max(ulong x, ulong y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000381")]
	[Address(RVA = "0x29F3100", Offset = "0x29F1700", VA = "0x1829F3100")]
	public static float max(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000382")]
	[Address(RVA = "0x29F34A0", Offset = "0x29F1AA0", VA = "0x1829F34A0")]
	public static float2 max(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000383")]
	[Address(RVA = "0x29F3080", Offset = "0x29F1680", VA = "0x1829F3080")]
	public static float3 max(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000384")]
	[Address(RVA = "0x29F2F60", Offset = "0x29F1560", VA = "0x1829F2F60")]
	public static float4 max(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000385")]
	[Address(RVA = "0x29F3130", Offset = "0x29F1730", VA = "0x1829F3130")]
	public static double max(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000386")]
	[Address(RVA = "0x29F32E0", Offset = "0x29F18E0", VA = "0x1829F32E0")]
	public static double2 max(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000387")]
	[Address(RVA = "0x29F3170", Offset = "0x29F1770", VA = "0x1829F3170")]
	public static double3 max(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000388")]
	[Address(RVA = "0x29F3350", Offset = "0x29F1950", VA = "0x1829F3350")]
	public static double4 max(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000389")]
	[Address(RVA = "0x29CAAD0", Offset = "0x29C90D0", VA = "0x1829CAAD0")]
	public static float lerp(float start, float end, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038A")]
	[Address(RVA = "0x29F10F0", Offset = "0x29EF6F0", VA = "0x1829F10F0")]
	public static float2 lerp(float2 start, float2 end, float t)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038B")]
	[Address(RVA = "0x29F1010", Offset = "0x29EF610", VA = "0x1829F1010")]
	public static float3 lerp(float3 start, float3 end, float t)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038C")]
	[Address(RVA = "0x1DAF120", Offset = "0x1DAD720", VA = "0x181DAF120")]
	public static float4 lerp(float4 start, float4 end, float t)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038D")]
	[Address(RVA = "0x29F0E80", Offset = "0x29EF480", VA = "0x1829F0E80")]
	public static float2 lerp(float2 start, float2 end, float2 t)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038E")]
	[Address(RVA = "0x29F0D80", Offset = "0x29EF380", VA = "0x1829F0D80")]
	public static float3 lerp(float3 start, float3 end, float3 t)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038F")]
	[Address(RVA = "0x29F0E10", Offset = "0x29EF410", VA = "0x1829F0E10")]
	public static float4 lerp(float4 start, float4 end, float4 t)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000390")]
	[Address(RVA = "0x29F1140", Offset = "0x29EF740", VA = "0x1829F1140")]
	public static double lerp(double start, double end, double t)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000391")]
	[Address(RVA = "0x29F0DD0", Offset = "0x29EF3D0", VA = "0x1829F0DD0")]
	public static double2 lerp(double2 start, double2 end, double t)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000392")]
	[Address(RVA = "0x29F10A0", Offset = "0x29EF6A0", VA = "0x1829F10A0")]
	public static double3 lerp(double3 start, double3 end, double t)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000393")]
	[Address(RVA = "0x29F0FA0", Offset = "0x29EF5A0", VA = "0x1829F0FA0")]
	public static double4 lerp(double4 start, double4 end, double t)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000394")]
	[Address(RVA = "0x29F1060", Offset = "0x29EF660", VA = "0x1829F1060")]
	public static double2 lerp(double2 start, double2 end, double2 t)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000395")]
	[Address(RVA = "0x29F0F50", Offset = "0x29EF550", VA = "0x1829F0F50")]
	public static double3 lerp(double3 start, double3 end, double3 t)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000396")]
	[Address(RVA = "0x29F0EE0", Offset = "0x29EF4E0", VA = "0x1829F0EE0")]
	public static double4 lerp(double4 start, double4 end, double4 t)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000397")]
	[Address(RVA = "0x2A10120", Offset = "0x2A0E720", VA = "0x182A10120")]
	public static float unlerp(float start, float end, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000398")]
	[Address(RVA = "0x2A101B0", Offset = "0x2A0E7B0", VA = "0x182A101B0")]
	public static float2 unlerp(float2 start, float2 end, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000399")]
	[Address(RVA = "0x2A10210", Offset = "0x2A0E810", VA = "0x182A10210")]
	public static float3 unlerp(float3 start, float3 end, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039A")]
	[Address(RVA = "0x2A10130", Offset = "0x2A0E730", VA = "0x182A10130")]
	public static float4 unlerp(float4 start, float4 end, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039B")]
	[Address(RVA = "0x2A102F0", Offset = "0x2A0E8F0", VA = "0x182A102F0")]
	public static double unlerp(double start, double end, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039C")]
	[Address(RVA = "0x2A100E0", Offset = "0x2A0E6E0", VA = "0x182A100E0")]
	public static double2 unlerp(double2 start, double2 end, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039D")]
	[Address(RVA = "0x2A10080", Offset = "0x2A0E680", VA = "0x182A10080")]
	public static double3 unlerp(double3 start, double3 end, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039E")]
	[Address(RVA = "0x2A10270", Offset = "0x2A0E870", VA = "0x182A10270")]
	public static double4 unlerp(double4 start, double4 end, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039F")]
	[Address(RVA = "0x2A03170", Offset = "0x2A01770", VA = "0x182A03170")]
	public static float remap(float srcStart, float srcEnd, float dstStart, float dstEnd, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x2A030B0", Offset = "0x2A016B0", VA = "0x182A030B0")]
	public static float2 remap(float2 srcStart, float2 srcEnd, float2 dstStart, float2 dstEnd, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x2A03500", Offset = "0x2A01B00", VA = "0x182A03500")]
	public static float3 remap(float3 srcStart, float3 srcEnd, float3 dstStart, float3 dstEnd, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x2A02F70", Offset = "0x2A01570", VA = "0x182A02F70")]
	public static float4 remap(float4 srcStart, float4 srcEnd, float4 dstStart, float4 dstEnd, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x2A03080", Offset = "0x2A01680", VA = "0x182A03080")]
	public static double remap(double srcStart, double srcEnd, double dstStart, double dstEnd, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x2A032D0", Offset = "0x2A018D0", VA = "0x182A032D0")]
	public static double2 remap(double2 srcStart, double2 srcEnd, double2 dstStart, double2 dstEnd, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x2A031A0", Offset = "0x2A017A0", VA = "0x182A031A0")]
	public static double3 remap(double3 srcStart, double3 srcEnd, double3 dstStart, double3 dstEnd, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x2A03350", Offset = "0x2A01950", VA = "0x182A03350")]
	public static double4 remap(double4 srcStart, double4 srcEnd, double4 dstStart, double4 dstEnd, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x29F2F00", Offset = "0x29F1500", VA = "0x1829F2F00")]
	public static int mad(int mulA, int mulB, int addC)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x29F2CE0", Offset = "0x29F12E0", VA = "0x1829F2CE0")]
	public static int2 mad(int2 mulA, int2 mulB, int2 addC)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x29F2D10", Offset = "0x29F1310", VA = "0x1829F2D10")]
	public static int3 mad(int3 mulA, int3 mulB, int3 addC)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x29F2CA0", Offset = "0x29F12A0", VA = "0x1829F2CA0")]
	public static int4 mad(int4 mulA, int4 mulB, int4 addC)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x29F2F00", Offset = "0x29F1500", VA = "0x1829F2F00")]
	public static uint mad(uint mulA, uint mulB, uint addC)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x29F2CE0", Offset = "0x29F12E0", VA = "0x1829F2CE0")]
	public static uint2 mad(uint2 mulA, uint2 mulB, uint2 addC)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x29F2D10", Offset = "0x29F1310", VA = "0x1829F2D10")]
	public static uint3 mad(uint3 mulA, uint3 mulB, uint3 addC)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x29F2CA0", Offset = "0x29F12A0", VA = "0x1829F2CA0")]
	public static uint4 mad(uint4 mulA, uint4 mulB, uint4 addC)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x29F2DE0", Offset = "0x29F13E0", VA = "0x1829F2DE0")]
	public static long mad(long mulA, long mulB, long addC)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x29F2DE0", Offset = "0x29F13E0", VA = "0x1829F2DE0")]
	public static ulong mad(ulong mulA, ulong mulB, ulong addC)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x29F2DF0", Offset = "0x29F13F0", VA = "0x1829F2DF0")]
	public static float mad(float mulA, float mulB, float addC)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x29F2D90", Offset = "0x29F1390", VA = "0x1829F2D90")]
	public static float2 mad(float2 mulA, float2 mulB, float2 addC)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x29F2F10", Offset = "0x29F1510", VA = "0x1829F2F10")]
	public static float3 mad(float3 mulA, float3 mulB, float3 addC)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x29F2E40", Offset = "0x29F1440", VA = "0x1829F2E40")]
	public static float4 mad(float4 mulA, float4 mulB, float4 addC)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x29F2E00", Offset = "0x29F1400", VA = "0x1829F2E00")]
	public static double mad(double mulA, double mulB, double addC)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x29F2E10", Offset = "0x29F1410", VA = "0x1829F2E10")]
	public static double2 mad(double2 mulA, double2 mulB, double2 addC)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x29F2D40", Offset = "0x29F1340", VA = "0x1829F2D40")]
	public static double3 mad(double3 mulA, double3 mulB, double3 addC)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x29F2EA0", Offset = "0x29F14A0", VA = "0x1829F2EA0")]
	public static double4 mad(double4 mulA, double4 mulB, double4 addC)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x29D5240", Offset = "0x29D3840", VA = "0x1829D5240")]
	public static int clamp(int valueToClamp, int lowerBound, int upperBound)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x29D52F0", Offset = "0x29D38F0", VA = "0x1829D52F0")]
	public static int2 clamp(int2 valueToClamp, int2 lowerBound, int2 upperBound)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x29D5120", Offset = "0x29D3720", VA = "0x1829D5120")]
	public static int3 clamp(int3 valueToClamp, int3 lowerBound, int3 upperBound)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x29D51B0", Offset = "0x29D37B0", VA = "0x1829D51B0")]
	public static int4 clamp(int4 valueToClamp, int4 lowerBound, int4 upperBound)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x29D5190", Offset = "0x29D3790", VA = "0x1829D5190")]
	public static uint clamp(uint valueToClamp, uint lowerBound, uint upperBound)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x29D4FC0", Offset = "0x29D35C0", VA = "0x1829D4FC0")]
	public static uint2 clamp(uint2 valueToClamp, uint2 lowerBound, uint2 upperBound)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x29D5260", Offset = "0x29D3860", VA = "0x1829D5260")]
	public static uint3 clamp(uint3 valueToClamp, uint3 lowerBound, uint3 upperBound)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x29D4C80", Offset = "0x29D3280", VA = "0x1829D4C80")]
	public static uint4 clamp(uint4 valueToClamp, uint4 lowerBound, uint4 upperBound)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x29D5000", Offset = "0x29D3600", VA = "0x1829D5000")]
	public static long clamp(long valueToClamp, long lowerBound, long upperBound)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x29D52D0", Offset = "0x29D38D0", VA = "0x1829D52D0")]
	public static ulong clamp(ulong valueToClamp, ulong lowerBound, ulong upperBound)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x29CA630", Offset = "0x29C8C30", VA = "0x1829CA630")]
	public static float clamp(float valueToClamp, float lowerBound, float upperBound)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x29CA590", Offset = "0x29C8B90", VA = "0x1829CA590")]
	public static float2 clamp(float2 valueToClamp, float2 lowerBound, float2 upperBound)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x29D5020", Offset = "0x29D3620", VA = "0x1829D5020")]
	public static float3 clamp(float3 valueToClamp, float3 lowerBound, float3 upperBound)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x29D4D60", Offset = "0x29D3360", VA = "0x1829D4D60")]
	public static float4 clamp(float4 valueToClamp, float4 lowerBound, float4 upperBound)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x29D4D10", Offset = "0x29D3310", VA = "0x1829D4D10")]
	public static double clamp(double valueToClamp, double lowerBound, double upperBound)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x29D5330", Offset = "0x29D3930", VA = "0x1829D5330")]
	public static double2 clamp(double2 valueToClamp, double2 lowerBound, double2 upperBound)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x29D4EB0", Offset = "0x29D34B0", VA = "0x1829D4EB0")]
	public static double3 clamp(double3 valueToClamp, double3 lowerBound, double3 upperBound)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x29D53D0", Offset = "0x29D39D0", VA = "0x1829D53D0")]
	public static double4 clamp(double4 valueToClamp, double4 lowerBound, double4 upperBound)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x2A055B0", Offset = "0x2A03BB0", VA = "0x182A055B0")]
	public static float saturate(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x2A054B0", Offset = "0x2A03AB0", VA = "0x182A054B0")]
	public static float2 saturate(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x2A051B0", Offset = "0x2A037B0", VA = "0x182A051B0")]
	public static float3 saturate(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x2A053C0", Offset = "0x2A039C0", VA = "0x182A053C0")]
	public static float4 saturate(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x2A05370", Offset = "0x2A03970", VA = "0x182A05370")]
	public static double saturate(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x2A055F0", Offset = "0x2A03BF0", VA = "0x182A055F0")]
	public static double2 saturate(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x2A054E0", Offset = "0x2A03AE0", VA = "0x182A054E0")]
	public static double3 saturate(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x2A05270", Offset = "0x2A03870", VA = "0x182A05270")]
	public static double4 saturate(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x29D10B0", Offset = "0x29CF6B0", VA = "0x1829D10B0")]
	public static int abs(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x29D0F30", Offset = "0x29CF530", VA = "0x1829D0F30")]
	public static int2 abs(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x29D0FC0", Offset = "0x29CF5C0", VA = "0x1829D0FC0")]
	public static int3 abs(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x29D0F60", Offset = "0x29CF560", VA = "0x1829D0F60")]
	public static int4 abs(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x29D0ED0", Offset = "0x29CF4D0", VA = "0x1829D0ED0")]
	public static long abs(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x29D0EE0", Offset = "0x29CF4E0", VA = "0x1829D0EE0")]
	public static float abs(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x29D1080", Offset = "0x29CF680", VA = "0x1829D1080")]
	public static float2 abs(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x29D1040", Offset = "0x29CF640", VA = "0x1829D1040")]
	public static float3 abs(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x29D0EA0", Offset = "0x29CF4A0", VA = "0x1829D0EA0")]
	public static float4 abs(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x29D1060", Offset = "0x29CF660", VA = "0x1829D1060")]
	public static double abs(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x29D1010", Offset = "0x29CF610", VA = "0x1829D1010")]
	public static double2 abs(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x29D0E70", Offset = "0x29CF470", VA = "0x1829D0E70")]
	public static double3 abs(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x29D0EF0", Offset = "0x29CF4F0", VA = "0x1829D0EF0")]
	public static double4 abs(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x29D8020", Offset = "0x29D6620", VA = "0x1829D8020")]
	public static int dot(int x, int y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x29D80D0", Offset = "0x29D66D0", VA = "0x1829D80D0")]
	public static int dot(int2 x, int2 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x29D80A0", Offset = "0x29D66A0", VA = "0x1829D80A0")]
	public static int dot(int3 x, int3 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x29D8070", Offset = "0x29D6670", VA = "0x1829D8070")]
	public static int dot(int4 x, int4 y)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x29D8020", Offset = "0x29D6620", VA = "0x1829D8020")]
	public static uint dot(uint x, uint y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x29D80D0", Offset = "0x29D66D0", VA = "0x1829D80D0")]
	public static uint dot(uint2 x, uint2 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x29D80A0", Offset = "0x29D66A0", VA = "0x1829D80A0")]
	public static uint dot(uint3 x, uint3 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x29D8070", Offset = "0x29D6670", VA = "0x1829D8070")]
	public static uint dot(uint4 x, uint4 y)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x29D80F0", Offset = "0x29D66F0", VA = "0x1829D80F0")]
	public static float dot(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x29D81C0", Offset = "0x29D67C0", VA = "0x1829D81C0")]
	public static float dot(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x29D8190", Offset = "0x29D6790", VA = "0x1829D8190")]
	public static float dot(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x29CA660", Offset = "0x29C8C60", VA = "0x1829CA660")]
	public static float dot(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x29D80C0", Offset = "0x29D66C0", VA = "0x1829D80C0")]
	public static double dot(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x29D8170", Offset = "0x29D6770", VA = "0x1829D8170")]
	public static double dot(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x29D8100", Offset = "0x29D6700", VA = "0x1829D8100")]
	public static double dot(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x29D8030", Offset = "0x29D6630", VA = "0x1829D8030")]
	public static double dot(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x2A0B9C0", Offset = "0x2A09FC0", VA = "0x182A0B9C0")]
	public static float tan(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x2A0B640", Offset = "0x2A09C40", VA = "0x182A0B640")]
	public static float2 tan(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x2A0BBA0", Offset = "0x2A0A1A0", VA = "0x182A0BBA0")]
	public static float3 tan(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x2A0BA20", Offset = "0x2A0A020", VA = "0x182A0BA20")]
	public static float4 tan(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x2A0B970", Offset = "0x2A09F70", VA = "0x182A0B970")]
	public static double tan(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x2A0B580", Offset = "0x2A09B80", VA = "0x182A0B580")]
	public static double2 tan(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x2A0B860", Offset = "0x2A09E60", VA = "0x182A0B860")]
	public static double3 tan(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x2A0B700", Offset = "0x2A09D00", VA = "0x182A0B700")]
	public static double4 tan(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x2A0C2E0", Offset = "0x2A0A8E0", VA = "0x182A0C2E0")]
	public static float tanh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x2A0C100", Offset = "0x2A0A700", VA = "0x182A0C100")]
	public static float2 tanh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x2A0C1C0", Offset = "0x2A0A7C0", VA = "0x182A0C1C0")]
	public static float3 tanh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x2A0BF30", Offset = "0x2A0A530", VA = "0x182A0BF30")]
	public static float4 tanh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x2A0C0B0", Offset = "0x2A0A6B0", VA = "0x182A0C0B0")]
	public static double tanh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x2A0C340", Offset = "0x2A0A940", VA = "0x182A0C340")]
	public static double2 tanh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x2A0BCC0", Offset = "0x2A0A2C0", VA = "0x182A0BCC0")]
	public static double3 tanh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x2A0BDD0", Offset = "0x2A0A3D0", VA = "0x182A0BDD0")]
	public static double4 tanh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000400")]
	[Address(RVA = "0x29D3140", Offset = "0x29D1740", VA = "0x1829D3140")]
	public static float atan(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000401")]
	[Address(RVA = "0x29D33C0", Offset = "0x29D19C0", VA = "0x1829D33C0")]
	public static float2 atan(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000402")]
	[Address(RVA = "0x29D2EC0", Offset = "0x29D14C0", VA = "0x1829D2EC0")]
	public static float3 atan(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000403")]
	[Address(RVA = "0x29D2D40", Offset = "0x29D1340", VA = "0x1829D2D40")]
	public static float4 atan(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000404")]
	[Address(RVA = "0x29D3370", Offset = "0x29D1970", VA = "0x1829D3370")]
	public static double atan(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000405")]
	[Address(RVA = "0x29D32B0", Offset = "0x29D18B0", VA = "0x1829D32B0")]
	public static double2 atan(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000406")]
	[Address(RVA = "0x29D31A0", Offset = "0x29D17A0", VA = "0x1829D31A0")]
	public static double3 atan(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000407")]
	[Address(RVA = "0x29D2FE0", Offset = "0x29D15E0", VA = "0x1829D2FE0")]
	public static double4 atan(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000408")]
	[Address(RVA = "0x29D2900", Offset = "0x29D0F00", VA = "0x1829D2900")]
	public static float atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000409")]
	[Address(RVA = "0x29D2820", Offset = "0x29D0E20", VA = "0x1829D2820")]
	public static float2 atan2(float2 y, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040A")]
	[Address(RVA = "0x29D26F0", Offset = "0x29D0CF0", VA = "0x1829D26F0")]
	public static float3 atan2(float3 y, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040B")]
	[Address(RVA = "0x29D2A30", Offset = "0x29D1030", VA = "0x1829D2A30")]
	public static float4 atan2(float4 y, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040C")]
	[Address(RVA = "0x29D2690", Offset = "0x29D0C90", VA = "0x1829D2690")]
	public static double atan2(double y, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040D")]
	[Address(RVA = "0x29D2970", Offset = "0x29D0F70", VA = "0x1829D2970")]
	public static double2 atan2(double2 y, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040E")]
	[Address(RVA = "0x29D2580", Offset = "0x29D0B80", VA = "0x1829D2580")]
	public static double3 atan2(double3 y, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600040F")]
	[Address(RVA = "0x29D2BD0", Offset = "0x29D11D0", VA = "0x1829D2BD0")]
	public static double4 atan2(double4 y, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000410")]
	[Address(RVA = "0x29D5D80", Offset = "0x29D4380", VA = "0x1829D5D80")]
	public static float cos(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000411")]
	[Address(RVA = "0x29D5BB0", Offset = "0x29D41B0", VA = "0x1829D5BB0")]
	public static float2 cos(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000412")]
	[Address(RVA = "0x29D5DE0", Offset = "0x29D43E0", VA = "0x1829D5DE0")]
	public static float3 cos(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000413")]
	[Address(RVA = "0x29D6170", Offset = "0x29D4770", VA = "0x1829D6170")]
	public static float4 cos(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000414")]
	[Address(RVA = "0x29D5FC0", Offset = "0x29D45C0", VA = "0x1829D5FC0")]
	public static double cos(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000415")]
	[Address(RVA = "0x29D5F00", Offset = "0x29D4500", VA = "0x1829D5F00")]
	public static double2 cos(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000416")]
	[Address(RVA = "0x29D5C70", Offset = "0x29D4270", VA = "0x1829D5C70")]
	public static double3 cos(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000417")]
	[Address(RVA = "0x29D6010", Offset = "0x29D4610", VA = "0x1829D6010")]
	public static double4 cos(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000418")]
	[Address(RVA = "0x29D63B0", Offset = "0x29D49B0", VA = "0x1829D63B0")]
	public static float cosh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000419")]
	[Address(RVA = "0x29D62F0", Offset = "0x29D48F0", VA = "0x1829D62F0")]
	public static float2 cosh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041A")]
	[Address(RVA = "0x29D6520", Offset = "0x29D4B20", VA = "0x1829D6520")]
	public static float3 cosh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041B")]
	[Address(RVA = "0x29D67A0", Offset = "0x29D4DA0", VA = "0x1829D67A0")]
	public static float4 cosh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041C")]
	[Address(RVA = "0x29D69E0", Offset = "0x29D4FE0", VA = "0x1829D69E0")]
	public static double cosh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041D")]
	[Address(RVA = "0x29D6920", Offset = "0x29D4F20", VA = "0x1829D6920")]
	public static double2 cosh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041E")]
	[Address(RVA = "0x29D6410", Offset = "0x29D4A10", VA = "0x1829D6410")]
	public static double3 cosh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600041F")]
	[Address(RVA = "0x29D6640", Offset = "0x29D4C40", VA = "0x1829D6640")]
	public static double4 cosh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000420")]
	[Address(RVA = "0x29D1690", Offset = "0x29CFC90", VA = "0x1829D1690")]
	public static float acos(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000421")]
	[Address(RVA = "0x29D10C0", Offset = "0x29CF6C0", VA = "0x1829D10C0")]
	public static float2 acos(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000422")]
	[Address(RVA = "0x29D1180", Offset = "0x29CF780", VA = "0x1829D1180")]
	public static float3 acos(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000423")]
	[Address(RVA = "0x29D1400", Offset = "0x29CFA00", VA = "0x1829D1400")]
	public static float4 acos(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000424")]
	[Address(RVA = "0x29D1580", Offset = "0x29CFB80", VA = "0x1829D1580")]
	public static double acos(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000425")]
	[Address(RVA = "0x29D15D0", Offset = "0x29CFBD0", VA = "0x1829D15D0")]
	public static double2 acos(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000426")]
	[Address(RVA = "0x29D16F0", Offset = "0x29CFCF0", VA = "0x1829D16F0")]
	public static double3 acos(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000427")]
	[Address(RVA = "0x29D12A0", Offset = "0x29CF8A0", VA = "0x1829D12A0")]
	public static double4 acos(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000428")]
	[Address(RVA = "0x2A08560", Offset = "0x2A06B60", VA = "0x182A08560")]
	public static float sin(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000429")]
	[Address(RVA = "0x2A089C0", Offset = "0x2A06FC0", VA = "0x182A089C0")]
	public static float2 sin(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042A")]
	[Address(RVA = "0x2A085C0", Offset = "0x2A06BC0", VA = "0x182A085C0")]
	public static float3 sin(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042B")]
	[Address(RVA = "0x2A08840", Offset = "0x2A06E40", VA = "0x182A08840")]
	public static float4 sin(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042C")]
	[Address(RVA = "0x2A08B40", Offset = "0x2A07140", VA = "0x182A08B40")]
	public static double sin(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042D")]
	[Address(RVA = "0x2A08A80", Offset = "0x2A07080", VA = "0x182A08A80")]
	public static double2 sin(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042E")]
	[Address(RVA = "0x2A08450", Offset = "0x2A06A50", VA = "0x182A08450")]
	public static double3 sin(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600042F")]
	[Address(RVA = "0x2A086E0", Offset = "0x2A06CE0", VA = "0x182A086E0")]
	public static double4 sin(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000430")]
	[Address(RVA = "0x2A09D50", Offset = "0x2A08350", VA = "0x182A09D50")]
	public static float sinh(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000431")]
	[Address(RVA = "0x2A09F30", Offset = "0x2A08530", VA = "0x182A09F30")]
	public static float2 sinh(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000432")]
	[Address(RVA = "0x2A09970", Offset = "0x2A07F70", VA = "0x182A09970")]
	public static float3 sinh(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000433")]
	[Address(RVA = "0x2A09DB0", Offset = "0x2A083B0", VA = "0x182A09DB0")]
	public static float4 sinh(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000434")]
	[Address(RVA = "0x2A09D00", Offset = "0x2A08300", VA = "0x182A09D00")]
	public static double sinh(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000435")]
	[Address(RVA = "0x2A098B0", Offset = "0x2A07EB0", VA = "0x182A098B0")]
	public static double2 sinh(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000436")]
	[Address(RVA = "0x2A09BF0", Offset = "0x2A081F0", VA = "0x182A09BF0")]
	public static double3 sinh(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000437")]
	[Address(RVA = "0x2A09A90", Offset = "0x2A08090", VA = "0x182A09A90")]
	public static double4 sinh(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000438")]
	[Address(RVA = "0x29D2510", Offset = "0x29D0B10", VA = "0x1829D2510")]
	public static float asin(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000439")]
	[Address(RVA = "0x29D1E30", Offset = "0x29D0430", VA = "0x1829D1E30")]
	public static float2 asin(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043A")]
	[Address(RVA = "0x29D2050", Offset = "0x29D0650", VA = "0x1829D2050")]
	public static float3 asin(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043B")]
	[Address(RVA = "0x29D2340", Offset = "0x29D0940", VA = "0x1829D2340")]
	public static float4 asin(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043C")]
	[Address(RVA = "0x29D24C0", Offset = "0x29D0AC0", VA = "0x1829D24C0")]
	public static double asin(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043D")]
	[Address(RVA = "0x29D2280", Offset = "0x29D0880", VA = "0x1829D2280")]
	public static double2 asin(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043E")]
	[Address(RVA = "0x29D2170", Offset = "0x29D0770", VA = "0x1829D2170")]
	public static double3 asin(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043F")]
	[Address(RVA = "0x29D1EF0", Offset = "0x29D04F0", VA = "0x1829D1EF0")]
	public static double4 asin(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000440")]
	[Address(RVA = "0x29E2F10", Offset = "0x29E1510", VA = "0x1829E2F10")]
	public static float floor(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000441")]
	[Address(RVA = "0x29CA8C0", Offset = "0x29C8EC0", VA = "0x1829CA8C0")]
	public static float2 floor(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000442")]
	[Address(RVA = "0x29CA980", Offset = "0x29C8F80", VA = "0x1829CA980")]
	public static float3 floor(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000443")]
	[Address(RVA = "0x29CA740", Offset = "0x29C8D40", VA = "0x1829CA740")]
	public static float4 floor(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000444")]
	[Address(RVA = "0x29E3080", Offset = "0x29E1680", VA = "0x1829E3080")]
	public static double floor(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000445")]
	[Address(RVA = "0x29E3230", Offset = "0x29E1830", VA = "0x1829E3230")]
	public static double2 floor(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000446")]
	[Address(RVA = "0x29E2F70", Offset = "0x29E1570", VA = "0x1829E2F70")]
	public static double3 floor(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000447")]
	[Address(RVA = "0x29E30D0", Offset = "0x29E16D0", VA = "0x1829E30D0")]
	public static double4 floor(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000448")]
	[Address(RVA = "0x29D3CA0", Offset = "0x29D22A0", VA = "0x1829D3CA0")]
	public static float ceil(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000449")]
	[Address(RVA = "0x29D3E10", Offset = "0x29D2410", VA = "0x1829D3E10")]
	public static float2 ceil(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044A")]
	[Address(RVA = "0x29D4270", Offset = "0x29D2870", VA = "0x1829D4270")]
	public static float3 ceil(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044B")]
	[Address(RVA = "0x29D3F90", Offset = "0x29D2590", VA = "0x1829D3F90")]
	public static float4 ceil(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044C")]
	[Address(RVA = "0x29D4390", Offset = "0x29D2990", VA = "0x1829D4390")]
	public static double ceil(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044D")]
	[Address(RVA = "0x29D3ED0", Offset = "0x29D24D0", VA = "0x1829D3ED0")]
	public static double2 ceil(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044E")]
	[Address(RVA = "0x29D3D00", Offset = "0x29D2300", VA = "0x1829D3D00")]
	public static double3 ceil(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044F")]
	[Address(RVA = "0x29D4110", Offset = "0x29D2710", VA = "0x1829D4110")]
	public static double4 ceil(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000450")]
	[Address(RVA = "0x2A046B0", Offset = "0x2A02CB0", VA = "0x182A046B0")]
	public static float round(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000451")]
	[Address(RVA = "0x2A04AD0", Offset = "0x2A030D0", VA = "0x182A04AD0")]
	public static float2 round(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000452")]
	[Address(RVA = "0x2A04550", Offset = "0x2A02B50", VA = "0x182A04550")]
	public static float3 round(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000453")]
	[Address(RVA = "0x2A04960", Offset = "0x2A02F60", VA = "0x182A04960")]
	public static float4 round(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000454")]
	[Address(RVA = "0x2A04660", Offset = "0x2A02C60", VA = "0x182A04660")]
	public static double round(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000455")]
	[Address(RVA = "0x2A044A0", Offset = "0x2A02AA0", VA = "0x182A044A0")]
	public static double2 round(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000456")]
	[Address(RVA = "0x2A04710", Offset = "0x2A02D10", VA = "0x182A04710")]
	public static double3 round(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000457")]
	[Address(RVA = "0x2A04810", Offset = "0x2A02E10", VA = "0x182A04810")]
	public static double4 round(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000458")]
	[Address(RVA = "0x2A0DF00", Offset = "0x2A0C500", VA = "0x182A0DF00")]
	public static float trunc(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000459")]
	[Address(RVA = "0x2A0DE40", Offset = "0x2A0C440", VA = "0x182A0DE40")]
	public static float2 trunc(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045A")]
	[Address(RVA = "0x2A0DB20", Offset = "0x2A0C120", VA = "0x182A0DB20")]
	public static float3 trunc(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045B")]
	[Address(RVA = "0x2A0D860", Offset = "0x2A0BE60", VA = "0x182A0D860")]
	public static float4 trunc(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045C")]
	[Address(RVA = "0x2A0D9D0", Offset = "0x2A0BFD0", VA = "0x182A0D9D0")]
	public static double trunc(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045D")]
	[Address(RVA = "0x2A0DD90", Offset = "0x2A0C390", VA = "0x182A0DD90")]
	public static double2 trunc(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045E")]
	[Address(RVA = "0x2A0DA20", Offset = "0x2A0C020", VA = "0x182A0DA20")]
	public static double3 trunc(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600045F")]
	[Address(RVA = "0x2A0DC40", Offset = "0x2A0C240", VA = "0x182A0DC40")]
	public static double4 trunc(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000460")]
	[Address(RVA = "0x29E3AB0", Offset = "0x29E20B0", VA = "0x1829E3AB0")]
	public static float frac(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000461")]
	[Address(RVA = "0x29E3D20", Offset = "0x29E2320", VA = "0x1829E3D20")]
	public static float2 frac(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000462")]
	[Address(RVA = "0x29E3F30", Offset = "0x29E2530", VA = "0x1829E3F30")]
	public static float3 frac(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000463")]
	[Address(RVA = "0x29E3B80", Offset = "0x29E2180", VA = "0x1829E3B80")]
	public static float4 frac(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000464")]
	[Address(RVA = "0x29E3B20", Offset = "0x29E2120", VA = "0x1829E3B20")]
	public static double frac(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000465")]
	[Address(RVA = "0x29E4070", Offset = "0x29E2670", VA = "0x1829E4070")]
	public static double2 frac(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000466")]
	[Address(RVA = "0x29E3E00", Offset = "0x29E2400", VA = "0x1829E3E00")]
	public static double3 frac(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000467")]
	[Address(RVA = "0x29E4140", Offset = "0x29E2740", VA = "0x1829E4140")]
	public static double4 frac(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000468")]
	[Address(RVA = "0x2A02460", Offset = "0x2A00A60", VA = "0x182A02460")]
	public static float rcp(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000469")]
	[Address(RVA = "0x2A02390", Offset = "0x2A00990", VA = "0x182A02390")]
	public static float2 rcp(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046A")]
	[Address(RVA = "0x2A02400", Offset = "0x2A00A00", VA = "0x182A02400")]
	public static float3 rcp(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046B")]
	[Address(RVA = "0x2989C70", Offset = "0x2988270", VA = "0x182989C70")]
	public static float4 rcp(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046C")]
	[Address(RVA = "0x2A02380", Offset = "0x2A00980", VA = "0x182A02380")]
	public static double rcp(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046D")]
	[Address(RVA = "0x2A02430", Offset = "0x2A00A30", VA = "0x182A02430")]
	public static double2 rcp(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046E")]
	[Address(RVA = "0x2A02350", Offset = "0x2A00950", VA = "0x182A02350")]
	public static double3 rcp(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046F")]
	[Address(RVA = "0x2A023C0", Offset = "0x2A009C0", VA = "0x182A023C0")]
	public static double4 rcp(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000470")]
	[Address(RVA = "0x2A07F00", Offset = "0x2A06500", VA = "0x182A07F00")]
	public static int sign(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000471")]
	[Address(RVA = "0x2A08240", Offset = "0x2A06840", VA = "0x182A08240")]
	public static int2 sign(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000472")]
	[Address(RVA = "0x2A08400", Offset = "0x2A06A00", VA = "0x182A08400")]
	public static int3 sign(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000473")]
	[Address(RVA = "0x2A081D0", Offset = "0x2A067D0", VA = "0x182A081D0")]
	public static int4 sign(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000474")]
	[Address(RVA = "0x2A080E0", Offset = "0x2A066E0", VA = "0x182A080E0")]
	public static float sign(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000475")]
	[Address(RVA = "0x2A08000", Offset = "0x2A06600", VA = "0x182A08000")]
	public static float2 sign(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000476")]
	[Address(RVA = "0x2A08380", Offset = "0x2A06980", VA = "0x182A08380")]
	public static float3 sign(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000477")]
	[Address(RVA = "0x2A08110", Offset = "0x2A06710", VA = "0x182A08110")]
	public static float4 sign(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000478")]
	[Address(RVA = "0x2A07FC0", Offset = "0x2A065C0", VA = "0x182A07FC0")]
	public static double sign(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000479")]
	[Address(RVA = "0x2A08060", Offset = "0x2A06660", VA = "0x182A08060")]
	public static double2 sign(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047A")]
	[Address(RVA = "0x2A07F10", Offset = "0x2A06510", VA = "0x182A07F10")]
	public static double3 sign(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047B")]
	[Address(RVA = "0x2A08280", Offset = "0x2A06880", VA = "0x182A08280")]
	public static double4 sign(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047C")]
	[Address(RVA = "0x2A01050", Offset = "0x29FF650", VA = "0x182A01050")]
	public static float pow(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047D")]
	[Address(RVA = "0x2A010C0", Offset = "0x29FF6C0", VA = "0x182A010C0")]
	public static float2 pow(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047E")]
	[Address(RVA = "0x2A00DF0", Offset = "0x29FF3F0", VA = "0x182A00DF0")]
	public static float3 pow(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047F")]
	[Address(RVA = "0x2A01460", Offset = "0x29FFA60", VA = "0x182A01460")]
	public static float4 pow(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000480")]
	[Address(RVA = "0x2A011A0", Offset = "0x29FF7A0", VA = "0x182A011A0")]
	public static double pow(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000481")]
	[Address(RVA = "0x2A01390", Offset = "0x29FF990", VA = "0x182A01390")]
	public static double2 pow(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000482")]
	[Address(RVA = "0x2A00F30", Offset = "0x29FF530", VA = "0x182A00F30")]
	public static double3 pow(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000483")]
	[Address(RVA = "0x2A01210", Offset = "0x29FF810", VA = "0x182A01210")]
	public static double4 pow(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000484")]
	[Address(RVA = "0x29DD0E0", Offset = "0x29DB6E0", VA = "0x1829DD0E0")]
	public static float exp(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000485")]
	[Address(RVA = "0x29DCE50", Offset = "0x29DB450", VA = "0x1829DCE50")]
	public static float2 exp(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000486")]
	[Address(RVA = "0x29DD2A0", Offset = "0x29DB8A0", VA = "0x1829DD2A0")]
	public static float3 exp(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000487")]
	[Address(RVA = "0x29DCCD0", Offset = "0x29DB2D0", VA = "0x1829DCCD0")]
	public static float4 exp(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000488")]
	[Address(RVA = "0x29DCC80", Offset = "0x29DB280", VA = "0x1829DCC80")]
	public static double exp(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000489")]
	[Address(RVA = "0x29DCF10", Offset = "0x29DB510", VA = "0x1829DCF10")]
	public static double2 exp(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048A")]
	[Address(RVA = "0x29DCFD0", Offset = "0x29DB5D0", VA = "0x1829DCFD0")]
	public static double3 exp(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048B")]
	[Address(RVA = "0x29DD140", Offset = "0x29DB740", VA = "0x1829DD140")]
	public static double4 exp(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048C")]
	[Address(RVA = "0x29DC3F0", Offset = "0x29DA9F0", VA = "0x1829DC3F0")]
	public static float exp2(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048D")]
	[Address(RVA = "0x29DC840", Offset = "0x29DAE40", VA = "0x1829DC840")]
	public static float2 exp2(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048E")]
	[Address(RVA = "0x29DC2B0", Offset = "0x29DA8B0", VA = "0x1829DC2B0")]
	public static float3 exp2(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048F")]
	[Address(RVA = "0x29DC920", Offset = "0x29DAF20", VA = "0x1829DC920")]
	public static float4 exp2(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000490")]
	[Address(RVA = "0x29DC450", Offset = "0x29DAA50", VA = "0x1829DC450")]
	public static double exp2(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000491")]
	[Address(RVA = "0x29DC4B0", Offset = "0x29DAAB0", VA = "0x1829DC4B0")]
	public static double2 exp2(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000492")]
	[Address(RVA = "0x29DC580", Offset = "0x29DAB80", VA = "0x1829DC580")]
	public static double3 exp2(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000493")]
	[Address(RVA = "0x29DC6B0", Offset = "0x29DACB0", VA = "0x1829DC6B0")]
	public static double4 exp2(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000494")]
	[Address(RVA = "0x29DC250", Offset = "0x29DA850", VA = "0x1829DC250")]
	public static float exp10(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000495")]
	[Address(RVA = "0x29DBBD0", Offset = "0x29DA1D0", VA = "0x1829DBBD0")]
	public static float2 exp10(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000496")]
	[Address(RVA = "0x29DBA90", Offset = "0x29DA090", VA = "0x1829DBA90")]
	public static float3 exp10(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000497")]
	[Address(RVA = "0x29DBF10", Offset = "0x29DA510", VA = "0x1829DBF10")]
	public static float4 exp10(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000498")]
	[Address(RVA = "0x29DC0C0", Offset = "0x29DA6C0", VA = "0x1829DC0C0")]
	public static double exp10(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000499")]
	[Address(RVA = "0x29DBCB0", Offset = "0x29DA2B0", VA = "0x1829DBCB0")]
	public static double2 exp10(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049A")]
	[Address(RVA = "0x29DC120", Offset = "0x29DA720", VA = "0x1829DC120")]
	public static double3 exp10(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049B")]
	[Address(RVA = "0x29DBD80", Offset = "0x29DA380", VA = "0x1829DBD80")]
	public static double4 exp10(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049C")]
	[Address(RVA = "0x29F2180", Offset = "0x29F0780", VA = "0x1829F2180")]
	public static float log(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049D")]
	[Address(RVA = "0x29F2360", Offset = "0x29F0960", VA = "0x1829F2360")]
	public static float2 log(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049E")]
	[Address(RVA = "0x29F2530", Offset = "0x29F0B30", VA = "0x1829F2530")]
	public static float3 log(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600049F")]
	[Address(RVA = "0x29F21E0", Offset = "0x29F07E0", VA = "0x1829F21E0")]
	public static float4 log(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x29F2130", Offset = "0x29F0730", VA = "0x1829F2130")]
	public static double log(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x29F2070", Offset = "0x29F0670", VA = "0x1829F2070")]
	public static double2 log(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x29F2420", Offset = "0x29F0A20", VA = "0x1829F2420")]
	public static double3 log(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x29F2650", Offset = "0x29F0C50", VA = "0x1829F2650")]
	public static double4 log(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x29F1890", Offset = "0x29EFE90", VA = "0x1829F1890")]
	public static float log2(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x29F1900", Offset = "0x29EFF00", VA = "0x1829F1900")]
	public static float2 log2(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x29F1AF0", Offset = "0x29F00F0", VA = "0x1829F1AF0")]
	public static float3 log2(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x29F1C30", Offset = "0x29F0230", VA = "0x1829F1C30")]
	public static float4 log2(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x29F1A90", Offset = "0x29F0090", VA = "0x1829F1A90")]
	public static double log2(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x29F19D0", Offset = "0x29EFFD0", VA = "0x1829F19D0")]
	public static double2 log2(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x29F1DD0", Offset = "0x29F03D0", VA = "0x1829F1DD0")]
	public static double3 log2(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x29F1EF0", Offset = "0x29F04F0", VA = "0x1829F1EF0")]
	public static double4 log2(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x29F17E0", Offset = "0x29EFDE0", VA = "0x1829F17E0")]
	public static float log10(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x29F1600", Offset = "0x29EFC00", VA = "0x1829F1600")]
	public static float2 log10(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x29F16C0", Offset = "0x29EFCC0", VA = "0x1829F16C0")]
	public static float3 log10(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x29F1370", Offset = "0x29EF970", VA = "0x1829F1370")]
	public static float4 log10(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x29F1840", Offset = "0x29EFE40", VA = "0x1829F1840")]
	public static double log10(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x29F1150", Offset = "0x29EF750", VA = "0x1829F1150")]
	public static double2 log10(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x29F14F0", Offset = "0x29EFAF0", VA = "0x1829F14F0")]
	public static double3 log10(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x29F1210", Offset = "0x29EF810", VA = "0x1829F1210")]
	public static double4 log10(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x29E37C0", Offset = "0x29E1DC0", VA = "0x1829E37C0")]
	public static float fmod(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x29E3670", Offset = "0x29E1C70", VA = "0x1829E3670")]
	public static float2 fmod(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x29E3590", Offset = "0x29E1B90", VA = "0x1829E3590")]
	public static float3 fmod(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x29E36C0", Offset = "0x29E1CC0", VA = "0x1829E36C0")]
	public static float4 fmod(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x29E3830", Offset = "0x29E1E30", VA = "0x1829E3830")]
	public static double fmod(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x29E37D0", Offset = "0x29E1DD0", VA = "0x1829E37D0")]
	public static double2 fmod(double2 x, double2 y)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x29E3600", Offset = "0x29E1C00", VA = "0x1829E3600")]
	public static double3 fmod(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x29E3740", Offset = "0x29E1D40", VA = "0x1829E3740")]
	public static double4 fmod(double4 x, double4 y)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x29F4270", Offset = "0x29F2870", VA = "0x1829F4270")]
	public static float modf(float x, out float i)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x29F3DB0", Offset = "0x29F23B0", VA = "0x1829F3DB0")]
	public static float2 modf(float2 x, out float2 i)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x29F3EA0", Offset = "0x29F24A0", VA = "0x1829F3EA0")]
	public static float3 modf(float3 x, out float3 i)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x29F3B80", Offset = "0x29F2180", VA = "0x1829F3B80")]
	public static float4 modf(float4 x, out float4 i)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x29F3D40", Offset = "0x29F2340", VA = "0x1829F3D40")]
	public static double modf(double x, out double i)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x29F4190", Offset = "0x29F2790", VA = "0x1829F4190")]
	public static double2 modf(double2 x, out double2 i)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x29F3A40", Offset = "0x29F2040", VA = "0x1829F3A40")]
	public static double3 modf(double3 x, out double3 i)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x29F3FF0", Offset = "0x29F25F0", VA = "0x1829F3FF0")]
	public static double4 modf(double4 x, out double4 i)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x2A0AEF0", Offset = "0x2A094F0", VA = "0x182A0AEF0")]
	public static float sqrt(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x29CC6E0", Offset = "0x29CACE0", VA = "0x1829CC6E0")]
	public static float2 sqrt(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x2A0B0D0", Offset = "0x2A096D0", VA = "0x182A0B0D0")]
	public static float3 sqrt(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x2A0AB30", Offset = "0x2A09130", VA = "0x182A0AB30")]
	public static float4 sqrt(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x2A0ABC0", Offset = "0x2A091C0", VA = "0x182A0ABC0")]
	public static double sqrt(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x2A0AC30", Offset = "0x2A09230", VA = "0x182A0AC30")]
	public static double2 sqrt(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x2A0AF70", Offset = "0x2A09570", VA = "0x182A0AF70")]
	public static double3 sqrt(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x2A0AD20", Offset = "0x2A09320", VA = "0x182A0AD20")]
	public static double4 sqrt(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x29CB610", Offset = "0x29C9C10", VA = "0x1829CB610")]
	public static float rsqrt(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x2A05040", Offset = "0x2A03640", VA = "0x182A05040")]
	public static float2 rsqrt(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x2A04B80", Offset = "0x2A03180", VA = "0x182A04B80")]
	public static float3 rsqrt(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x2A04F90", Offset = "0x2A03590", VA = "0x182A04F90")]
	public static float4 rsqrt(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x29CB630", Offset = "0x29C9C30", VA = "0x1829CB630")]
	public static double rsqrt(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x2A050A0", Offset = "0x2A036A0", VA = "0x182A050A0")]
	public static double2 rsqrt(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x2A04C10", Offset = "0x2A03210", VA = "0x182A04C10")]
	public static double3 rsqrt(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x2A04D90", Offset = "0x2A03390", VA = "0x182A04D90")]
	public static double4 rsqrt(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x2A00260", Offset = "0x29FE860", VA = "0x182A00260")]
	public static float2 normalize(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x2A003E0", Offset = "0x29FE9E0", VA = "0x182A003E0")]
	public static float3 normalize(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x2A00180", Offset = "0x29FE780", VA = "0x182A00180")]
	public static float4 normalize(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x2A00390", Offset = "0x29FE990", VA = "0x182A00390")]
	public static double2 normalize(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x2A00120", Offset = "0x29FE720", VA = "0x182A00120")]
	public static double3 normalize(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x2A001F0", Offset = "0x29FE7F0", VA = "0x182A001F0")]
	public static double4 normalize(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x2A00510", Offset = "0x29FEB10", VA = "0x182A00510")]
	public static float2 normalizesafe(float2 x, [Optional] float2 defaultvalue)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x2A008C0", Offset = "0x29FEEC0", VA = "0x182A008C0")]
	public static float3 normalizesafe(float3 x, [Optional] float3 defaultvalue)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x2A005C0", Offset = "0x29FEBC0", VA = "0x182A005C0")]
	public static float4 normalizesafe(float4 x, [Optional] float4 defaultvalue)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x2A00970", Offset = "0x29FEF70", VA = "0x182A00970")]
	public static double2 normalizesafe(double2 x, [Optional] double2 defaultvalue)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x2A009F0", Offset = "0x29FEFF0", VA = "0x182A009F0")]
	public static double3 normalizesafe(double3 x, [Optional] double3 defaultvalue)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x2A00460", Offset = "0x29FEA60", VA = "0x182A00460")]
	public static double4 normalizesafe(double4 x, [Optional] double4 defaultvalue)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x29D0EE0", Offset = "0x29CF4E0", VA = "0x1829D0EE0")]
	public static float length(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x29F0A40", Offset = "0x29EF040", VA = "0x1829F0A40")]
	public static float length(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x29CAAA0", Offset = "0x29C90A0", VA = "0x1829CAAA0")]
	public static float length(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x29F0C20", Offset = "0x29EF220", VA = "0x1829F0C20")]
	public static float length(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x29D1060", Offset = "0x29CF660", VA = "0x1829D1060")]
	public static double length(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x29F0BA0", Offset = "0x29EF1A0", VA = "0x1829F0BA0")]
	public static double length(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x29F0B10", Offset = "0x29EF110", VA = "0x1829F0B10")]
	public static double length(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x29F0A70", Offset = "0x29EF070", VA = "0x1829F0A70")]
	public static double length(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x29F0D70", Offset = "0x29EF370", VA = "0x1829F0D70")]
	public static float lengthsq(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x29F0D50", Offset = "0x29EF350", VA = "0x1829F0D50")]
	public static float lengthsq(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x29F0CF0", Offset = "0x29EF2F0", VA = "0x1829F0CF0")]
	public static float lengthsq(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x29F0C60", Offset = "0x29EF260", VA = "0x1829F0C60")]
	public static float lengthsq(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x29F0CE0", Offset = "0x29EF2E0", VA = "0x1829F0CE0")]
	public static double lengthsq(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x29F0C90", Offset = "0x29EF290", VA = "0x1829F0C90")]
	public static double lengthsq(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x29F0CB0", Offset = "0x29EF2B0", VA = "0x1829F0CB0")]
	public static double lengthsq(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x29F0D20", Offset = "0x29EF320", VA = "0x1829F0D20")]
	public static double lengthsq(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x29D7DF0", Offset = "0x29D63F0", VA = "0x1829D7DF0")]
	public static float distance(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x29D7E30", Offset = "0x29D6430", VA = "0x1829D7E30")]
	public static float distance(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x29D7C20", Offset = "0x29D6220", VA = "0x1829D7C20")]
	public static float distance(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x29D7D10", Offset = "0x29D6310", VA = "0x1829D7D10")]
	public static float distance(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x29D7E10", Offset = "0x29D6410", VA = "0x1829D7E10")]
	public static double distance(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x29D7D60", Offset = "0x29D6360", VA = "0x1829D7D60")]
	public static double distance(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x29D7B80", Offset = "0x29D6180", VA = "0x1829D7B80")]
	public static double distance(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x29D7C60", Offset = "0x29D6260", VA = "0x1829D7C60")]
	public static double distance(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x29D7FA0", Offset = "0x29D65A0", VA = "0x1829D7FA0")]
	public static float distancesq(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x29D7E80", Offset = "0x29D6480", VA = "0x1829D7E80")]
	public static float distancesq(float2 x, float2 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x29D7FB0", Offset = "0x29D65B0", VA = "0x1829D7FB0")]
	public static float distancesq(float3 x, float3 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x29D7EC0", Offset = "0x29D64C0", VA = "0x1829D7EC0")]
	public static float distancesq(float4 x, float4 y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x29D7FF0", Offset = "0x29D65F0", VA = "0x1829D7FF0")]
	public static double distancesq(double x, double y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x29D8000", Offset = "0x29D6600", VA = "0x1829D8000")]
	public static double distancesq(double2 x, double2 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x29D7F60", Offset = "0x29D6560", VA = "0x1829D7F60")]
	public static double distancesq(double3 x, double3 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x29D7F10", Offset = "0x29D6510", VA = "0x1829D7F10")]
	public static double distancesq(double4 x, double4 y)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000500")]
	[Address(RVA = "0x29D6F50", Offset = "0x29D5550", VA = "0x1829D6F50")]
	public static float3 cross(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000501")]
	[Address(RVA = "0x29D6FB0", Offset = "0x29D55B0", VA = "0x1829D6FB0")]
	public static double3 cross(double3 x, double3 y)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000502")]
	[Address(RVA = "0x2A0A7C0", Offset = "0x2A08DC0", VA = "0x182A0A7C0")]
	public static float smoothstep(float xMin, float xMax, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000503")]
	[Address(RVA = "0x2A0A830", Offset = "0x2A08E30", VA = "0x182A0A830")]
	public static float2 smoothstep(float2 xMin, float2 xMax, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000504")]
	[Address(RVA = "0x2A0A370", Offset = "0x2A08970", VA = "0x182A0A370")]
	public static float3 smoothstep(float3 xMin, float3 xMax, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000505")]
	[Address(RVA = "0x2A0A980", Offset = "0x2A08F80", VA = "0x182A0A980")]
	public static float4 smoothstep(float4 xMin, float4 xMax, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000506")]
	[Address(RVA = "0x2A0A900", Offset = "0x2A08F00", VA = "0x182A0A900")]
	public static double smoothstep(double xMin, double xMax, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000507")]
	[Address(RVA = "0x2A0A280", Offset = "0x2A08880", VA = "0x182A0A280")]
	public static double2 smoothstep(double2 xMin, double2 xMax, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000508")]
	[Address(RVA = "0x2A0A670", Offset = "0x2A08C70", VA = "0x182A0A670")]
	public static double3 smoothstep(double3 xMin, double3 xMax, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000509")]
	[Address(RVA = "0x2A0A4B0", Offset = "0x2A08AB0", VA = "0x182A0A4B0")]
	public static double4 smoothstep(double4 xMin, double4 xMax, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050A")]
	[Address(RVA = "0x29D1C60", Offset = "0x29D0260", VA = "0x1829D1C60")]
	public static bool any(bool2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050B")]
	[Address(RVA = "0x29D1D30", Offset = "0x29D0330", VA = "0x1829D1D30")]
	public static bool any(bool3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050C")]
	[Address(RVA = "0x29D1DF0", Offset = "0x29D03F0", VA = "0x1829D1DF0")]
	public static bool any(bool4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050D")]
	[Address(RVA = "0x29D1C40", Offset = "0x29D0240", VA = "0x1829D1C40")]
	public static bool any(int2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050E")]
	[Address(RVA = "0x29D1C70", Offset = "0x29D0270", VA = "0x1829D1C70")]
	public static bool any(int3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600050F")]
	[Address(RVA = "0x29D1C20", Offset = "0x29D0220", VA = "0x1829D1C20")]
	public static bool any(int4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000510")]
	[Address(RVA = "0x29D1C40", Offset = "0x29D0240", VA = "0x1829D1C40")]
	public static bool any(uint2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000511")]
	[Address(RVA = "0x29D1C70", Offset = "0x29D0270", VA = "0x1829D1C70")]
	public static bool any(uint3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000512")]
	[Address(RVA = "0x29D1C20", Offset = "0x29D0220", VA = "0x1829D1C20")]
	public static bool any(uint4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000513")]
	[Address(RVA = "0x29D1D50", Offset = "0x29D0350", VA = "0x1829D1D50")]
	public static bool any(float2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000514")]
	[Address(RVA = "0x29D1CC0", Offset = "0x29D02C0", VA = "0x1829D1CC0")]
	public static bool any(float3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000515")]
	[Address(RVA = "0x29D1D80", Offset = "0x29D0380", VA = "0x1829D1D80")]
	public static bool any(float4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000516")]
	[Address(RVA = "0x29D1C90", Offset = "0x29D0290", VA = "0x1829D1C90")]
	public static bool any(double2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000517")]
	[Address(RVA = "0x29D1DC0", Offset = "0x29D03C0", VA = "0x1829D1DC0")]
	public static bool any(double3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000518")]
	[Address(RVA = "0x29D1CF0", Offset = "0x29D02F0", VA = "0x1829D1CF0")]
	public static bool any(double4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000519")]
	[Address(RVA = "0x29D1800", Offset = "0x29CFE00", VA = "0x1829D1800")]
	public static bool all(bool2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051A")]
	[Address(RVA = "0x29D1970", Offset = "0x29CFF70", VA = "0x1829D1970")]
	public static bool all(bool3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051B")]
	[Address(RVA = "0x29D1910", Offset = "0x29CFF10", VA = "0x1829D1910")]
	public static bool all(bool4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051C")]
	[Address(RVA = "0x29D1830", Offset = "0x29CFE30", VA = "0x1829D1830")]
	public static bool all(int2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051D")]
	[Address(RVA = "0x29D1810", Offset = "0x29CFE10", VA = "0x1829D1810")]
	public static bool all(int3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051E")]
	[Address(RVA = "0x29D18C0", Offset = "0x29CFEC0", VA = "0x1829D18C0")]
	public static bool all(int4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600051F")]
	[Address(RVA = "0x29D1830", Offset = "0x29CFE30", VA = "0x1829D1830")]
	public static bool all(uint2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000520")]
	[Address(RVA = "0x29D1810", Offset = "0x29CFE10", VA = "0x1829D1810")]
	public static bool all(uint3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000521")]
	[Address(RVA = "0x29D18C0", Offset = "0x29CFEC0", VA = "0x1829D18C0")]
	public static bool all(uint4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000522")]
	[Address(RVA = "0x29D18E0", Offset = "0x29CFEE0", VA = "0x1829D18E0")]
	public static bool all(float2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000523")]
	[Address(RVA = "0x29D1990", Offset = "0x29CFF90", VA = "0x1829D1990")]
	public static bool all(float3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000524")]
	[Address(RVA = "0x29D1930", Offset = "0x29CFF30", VA = "0x1829D1930")]
	public static bool all(float4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000525")]
	[Address(RVA = "0x29D19C0", Offset = "0x29CFFC0", VA = "0x1829D19C0")]
	public static bool all(double2 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000526")]
	[Address(RVA = "0x29D1890", Offset = "0x29CFE90", VA = "0x1829D1890")]
	public static bool all(double3 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000527")]
	[Address(RVA = "0x29D1850", Offset = "0x29CFE50", VA = "0x1829D1850")]
	public static bool all(double4 x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000528")]
	[Address(RVA = "0x2A05770", Offset = "0x2A03D70", VA = "0x182A05770")]
	public static int select(int falseValue, int trueValue, bool test)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000529")]
	[Address(RVA = "0x2A057D0", Offset = "0x2A03DD0", VA = "0x182A057D0")]
	public static int2 select(int2 falseValue, int2 trueValue, bool test)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052A")]
	[Address(RVA = "0x2A058A0", Offset = "0x2A03EA0", VA = "0x182A058A0")]
	public static int3 select(int3 falseValue, int3 trueValue, bool test)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052B")]
	[Address(RVA = "0x2A05830", Offset = "0x2A03E30", VA = "0x182A05830")]
	public static int4 select(int4 falseValue, int4 trueValue, bool test)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052C")]
	[Address(RVA = "0x2A058D0", Offset = "0x2A03ED0", VA = "0x182A058D0")]
	public static int2 select(int2 falseValue, int2 trueValue, bool2 test)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052D")]
	[Address(RVA = "0x2A05780", Offset = "0x2A03D80", VA = "0x182A05780")]
	public static int3 select(int3 falseValue, int3 trueValue, bool3 test)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052E")]
	[Address(RVA = "0x2A05970", Offset = "0x2A03F70", VA = "0x182A05970")]
	public static int4 select(int4 falseValue, int4 trueValue, bool4 test)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600052F")]
	[Address(RVA = "0x2A05770", Offset = "0x2A03D70", VA = "0x182A05770")]
	public static uint select(uint falseValue, uint trueValue, bool test)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000530")]
	[Address(RVA = "0x2A057D0", Offset = "0x2A03DD0", VA = "0x182A057D0")]
	public static uint2 select(uint2 falseValue, uint2 trueValue, bool test)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000531")]
	[Address(RVA = "0x2A058A0", Offset = "0x2A03EA0", VA = "0x182A058A0")]
	public static uint3 select(uint3 falseValue, uint3 trueValue, bool test)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000532")]
	[Address(RVA = "0x2A05830", Offset = "0x2A03E30", VA = "0x182A05830")]
	public static uint4 select(uint4 falseValue, uint4 trueValue, bool test)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000533")]
	[Address(RVA = "0x2A058D0", Offset = "0x2A03ED0", VA = "0x182A058D0")]
	public static uint2 select(uint2 falseValue, uint2 trueValue, bool2 test)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000534")]
	[Address(RVA = "0x2A05780", Offset = "0x2A03D80", VA = "0x182A05780")]
	public static uint3 select(uint3 falseValue, uint3 trueValue, bool3 test)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000535")]
	[Address(RVA = "0x2A05970", Offset = "0x2A03F70", VA = "0x182A05970")]
	public static uint4 select(uint4 falseValue, uint4 trueValue, bool4 test)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000536")]
	[Address(RVA = "0x2A05730", Offset = "0x2A03D30", VA = "0x182A05730")]
	public static long select(long falseValue, long trueValue, bool test)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000537")]
	[Address(RVA = "0x2A05730", Offset = "0x2A03D30", VA = "0x182A05730")]
	public static ulong select(ulong falseValue, ulong trueValue, bool test)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000538")]
	[Address(RVA = "0x2A057C0", Offset = "0x2A03DC0", VA = "0x182A057C0")]
	public static float select(float falseValue, float trueValue, bool test)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000539")]
	[Address(RVA = "0x2A057D0", Offset = "0x2A03DD0", VA = "0x182A057D0")]
	public static float2 select(float2 falseValue, float2 trueValue, bool test)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053A")]
	[Address(RVA = "0x2A058A0", Offset = "0x2A03EA0", VA = "0x182A058A0")]
	public static float3 select(float3 falseValue, float3 trueValue, bool test)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053B")]
	[Address(RVA = "0x2A05830", Offset = "0x2A03E30", VA = "0x182A05830")]
	public static float4 select(float4 falseValue, float4 trueValue, bool test)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053C")]
	[Address(RVA = "0x2A057E0", Offset = "0x2A03DE0", VA = "0x182A057E0")]
	public static float2 select(float2 falseValue, float2 trueValue, bool2 test)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053D")]
	[Address(RVA = "0x2A05850", Offset = "0x2A03E50", VA = "0x182A05850")]
	public static float3 select(float3 falseValue, float3 trueValue, bool3 test)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053E")]
	[Address(RVA = "0x2A05900", Offset = "0x2A03F00", VA = "0x182A05900")]
	public static float4 select(float4 falseValue, float4 trueValue, bool4 test)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600053F")]
	[Address(RVA = "0x2A057C0", Offset = "0x2A03DC0", VA = "0x182A057C0")]
	public static double select(double falseValue, double trueValue, bool test)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000540")]
	[Address(RVA = "0x2A05830", Offset = "0x2A03E30", VA = "0x182A05830")]
	public static double2 select(double2 falseValue, double2 trueValue, bool test)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000541")]
	[Address(RVA = "0x2A05AA0", Offset = "0x2A040A0", VA = "0x182A05AA0")]
	public static double3 select(double3 falseValue, double3 trueValue, bool test)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000542")]
	[Address(RVA = "0x2A05AD0", Offset = "0x2A040D0", VA = "0x182A05AD0")]
	public static double4 select(double4 falseValue, double4 trueValue, bool test)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000543")]
	[Address(RVA = "0x2A05740", Offset = "0x2A03D40", VA = "0x182A05740")]
	public static double2 select(double2 falseValue, double2 trueValue, bool2 test)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000544")]
	[Address(RVA = "0x2A05A50", Offset = "0x2A04050", VA = "0x182A05A50")]
	public static double3 select(double3 falseValue, double3 trueValue, bool3 test)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000545")]
	[Address(RVA = "0x2A059E0", Offset = "0x2A03FE0", VA = "0x182A059E0")]
	public static double4 select(double4 falseValue, double4 trueValue, bool4 test)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000546")]
	[Address(RVA = "0x2A0B2F0", Offset = "0x2A098F0", VA = "0x182A0B2F0")]
	public static float step(float threshold, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000547")]
	[Address(RVA = "0x2A0B530", Offset = "0x2A09B30", VA = "0x182A0B530")]
	public static float2 step(float2 threshold, float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000548")]
	[Address(RVA = "0x2A0B450", Offset = "0x2A09A50", VA = "0x182A0B450")]
	public static float3 step(float3 threshold, float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000549")]
	[Address(RVA = "0x2A0B330", Offset = "0x2A09930", VA = "0x182A0B330")]
	public static float4 step(float4 threshold, float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054A")]
	[Address(RVA = "0x2A0B310", Offset = "0x2A09910", VA = "0x182A0B310")]
	public static double step(double threshold, double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054B")]
	[Address(RVA = "0x2A0B410", Offset = "0x2A09A10", VA = "0x182A0B410")]
	public static double2 step(double2 threshold, double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054C")]
	[Address(RVA = "0x2A0B3B0", Offset = "0x2A099B0", VA = "0x182A0B3B0")]
	public static double3 step(double3 threshold, double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054D")]
	[Address(RVA = "0x2A0B4B0", Offset = "0x2A09AB0", VA = "0x182A0B4B0")]
	public static double4 step(double4 threshold, double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054E")]
	[Address(RVA = "0x2A02470", Offset = "0x2A00A70", VA = "0x182A02470")]
	public static float2 reflect(float2 i, float2 n)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600054F")]
	[Address(RVA = "0x2A02650", Offset = "0x2A00C50", VA = "0x182A02650")]
	public static float3 reflect(float3 i, float3 n)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000550")]
	[Address(RVA = "0x2A026D0", Offset = "0x2A00CD0", VA = "0x182A026D0")]
	public static float4 reflect(float4 i, float4 n)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000551")]
	[Address(RVA = "0x2A02600", Offset = "0x2A00C00", VA = "0x182A02600")]
	public static double2 reflect(double2 i, double2 n)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000552")]
	[Address(RVA = "0x2A02580", Offset = "0x2A00B80", VA = "0x182A02580")]
	public static double3 reflect(double3 i, double3 n)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000553")]
	[Address(RVA = "0x2A024D0", Offset = "0x2A00AD0", VA = "0x182A024D0")]
	public static double4 reflect(double4 i, double4 n)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000554")]
	[Address(RVA = "0x2A02940", Offset = "0x2A00F40", VA = "0x182A02940")]
	public static float2 refract(float2 i, float2 n, float indexOfRefraction)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000555")]
	[Address(RVA = "0x2A02BA0", Offset = "0x2A011A0", VA = "0x182A02BA0")]
	public static float3 refract(float3 i, float3 n, float indexOfRefraction)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000556")]
	[Address(RVA = "0x2A02E30", Offset = "0x2A01430", VA = "0x182A02E30")]
	public static float4 refract(float4 i, float4 n, float indexOfRefraction)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000557")]
	[Address(RVA = "0x2A02A60", Offset = "0x2A01060", VA = "0x182A02A60")]
	public static double2 refract(double2 i, double2 n, double indexOfRefraction)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000558")]
	[Address(RVA = "0x2A02CB0", Offset = "0x2A012B0", VA = "0x182A02CB0")]
	public static double3 refract(double3 i, double3 n, double indexOfRefraction)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000559")]
	[Address(RVA = "0x2A02780", Offset = "0x2A00D80", VA = "0x182A02780")]
	public static double4 refract(double4 i, double4 n, double indexOfRefraction)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055A")]
	[Address(RVA = "0x2A01600", Offset = "0x29FFC00", VA = "0x182A01600")]
	public static float2 project(float2 a, float2 ontoB)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055B")]
	[Address(RVA = "0x2A01740", Offset = "0x29FFD40", VA = "0x182A01740")]
	public static float3 project(float3 a, float3 ontoB)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055C")]
	[Address(RVA = "0x2A01830", Offset = "0x29FFE30", VA = "0x182A01830")]
	public static float4 project(float4 a, float4 ontoB)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055D")]
	[Address(RVA = "0x2A019E0", Offset = "0x29FFFE0", VA = "0x182A019E0")]
	public static float2 projectsafe(float2 a, float2 ontoB, [Optional] float2 defaultValue)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055E")]
	[Address(RVA = "0x2A01A80", Offset = "0x2A00080", VA = "0x182A01A80")]
	public static float3 projectsafe(float3 a, float3 ontoB, [Optional] float3 defaultValue)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600055F")]
	[Address(RVA = "0x2A018B0", Offset = "0x29FFEB0", VA = "0x182A018B0")]
	public static float4 projectsafe(float4 a, float4 ontoB, [Optional] float4 defaultValue)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000560")]
	[Address(RVA = "0x2A016F0", Offset = "0x29FFCF0", VA = "0x182A016F0")]
	public static double2 project(double2 a, double2 ontoB)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000561")]
	[Address(RVA = "0x2A017C0", Offset = "0x29FFDC0", VA = "0x182A017C0")]
	public static double3 project(double3 a, double3 ontoB)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000562")]
	[Address(RVA = "0x2A01660", Offset = "0x29FFC60", VA = "0x182A01660")]
	public static double4 project(double4 a, double4 ontoB)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000563")]
	[Address(RVA = "0x2A01CC0", Offset = "0x2A002C0", VA = "0x182A01CC0")]
	public static double2 projectsafe(double2 a, double2 ontoB, [Optional] double2 defaultValue)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000564")]
	[Address(RVA = "0x2A01D60", Offset = "0x2A00360", VA = "0x182A01D60")]
	public static double3 projectsafe(double3 a, double3 ontoB, [Optional] double3 defaultValue)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000565")]
	[Address(RVA = "0x2A01B70", Offset = "0x2A00170", VA = "0x182A01B70")]
	public static double4 projectsafe(double4 a, double4 ontoB, [Optional] double4 defaultValue)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000566")]
	[Address(RVA = "0x29DDE00", Offset = "0x29DC400", VA = "0x1829DDE00")]
	public static float2 faceforward(float2 n, float2 i, float2 ng)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000567")]
	[Address(RVA = "0x29DDF00", Offset = "0x29DC500", VA = "0x1829DDF00")]
	public static float3 faceforward(float3 n, float3 i, float3 ng)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000568")]
	[Address(RVA = "0x29DDCE0", Offset = "0x29DC2E0", VA = "0x1829DDCE0")]
	public static float4 faceforward(float4 n, float4 i, float4 ng)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000569")]
	[Address(RVA = "0x29DDDA0", Offset = "0x29DC3A0", VA = "0x1829DDDA0")]
	public static double2 faceforward(double2 n, double2 i, double2 ng)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056A")]
	[Address(RVA = "0x29DDE80", Offset = "0x29DC480", VA = "0x1829DDE80")]
	public static double3 faceforward(double3 n, double3 i, double3 ng)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056B")]
	[Address(RVA = "0x29DDF80", Offset = "0x29DC580", VA = "0x1829DDF80")]
	public static double4 faceforward(double4 n, double4 i, double4 ng)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056C")]
	[Address(RVA = "0x2A09670", Offset = "0x2A07C70", VA = "0x182A09670")]
	public static void sincos(float x, out float s, out float c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056D")]
	[Address(RVA = "0x2A09730", Offset = "0x2A07D30", VA = "0x182A09730")]
	public static void sincos(float2 x, out float2 s, out float2 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056E")]
	[Address(RVA = "0x2A08E00", Offset = "0x2A07400", VA = "0x182A08E00")]
	public static void sincos(float3 x, out float3 s, out float3 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600056F")]
	[Address(RVA = "0x2A09000", Offset = "0x2A07600", VA = "0x182A09000")]
	public static void sincos(float4 x, out float4 s, out float4 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000570")]
	[Address(RVA = "0x2A092B0", Offset = "0x2A078B0", VA = "0x182A092B0")]
	public static void sincos(double x, out double s, out double c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000571")]
	[Address(RVA = "0x2A09360", Offset = "0x2A07960", VA = "0x182A09360")]
	public static void sincos(double2 x, out double2 s, out double2 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000572")]
	[Address(RVA = "0x2A094A0", Offset = "0x2A07AA0", VA = "0x182A094A0")]
	public static void sincos(double3 x, out double3 s, out double3 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000573")]
	[Address(RVA = "0x2A08B90", Offset = "0x2A07190", VA = "0x182A08B90")]
	public static void sincos(double4 x, out double4 s, out double4 c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000574")]
	[Address(RVA = "0x29D6F10", Offset = "0x29D5510", VA = "0x1829D6F10")]
	public static int countbits(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000575")]
	[Address(RVA = "0x29D6B60", Offset = "0x29D5160", VA = "0x1829D6B60")]
	public static int2 countbits(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000576")]
	[Address(RVA = "0x29D6E30", Offset = "0x29D5430", VA = "0x1829D6E30")]
	public static int3 countbits(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000577")]
	[Address(RVA = "0x29D6D10", Offset = "0x29D5310", VA = "0x1829D6D10")]
	public static int4 countbits(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000578")]
	[Address(RVA = "0x29D6F10", Offset = "0x29D5510", VA = "0x1829D6F10")]
	public static int countbits(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000579")]
	[Address(RVA = "0x29D6B60", Offset = "0x29D5160", VA = "0x1829D6B60")]
	public static int2 countbits(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057A")]
	[Address(RVA = "0x29D6A90", Offset = "0x29D5090", VA = "0x1829D6A90")]
	public static int3 countbits(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057B")]
	[Address(RVA = "0x29D6BF0", Offset = "0x29D51F0", VA = "0x1829D6BF0")]
	public static int4 countbits(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057C")]
	[Address(RVA = "0x29D6A30", Offset = "0x29D5030", VA = "0x1829D6A30")]
	public static int countbits(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057D")]
	[Address(RVA = "0x29D6A30", Offset = "0x29D5030", VA = "0x1829D6A30")]
	public static int countbits(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057E")]
	[Address(RVA = "0x1741B60", Offset = "0x1740160", VA = "0x181741B60")]
	public static int lzcnt(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600057F")]
	[Address(RVA = "0x29F2B40", Offset = "0x29F1140", VA = "0x1829F2B40")]
	public static int2 lzcnt(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000580")]
	[Address(RVA = "0x29F2950", Offset = "0x29F0F50", VA = "0x1829F2950")]
	public static int3 lzcnt(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000581")]
	[Address(RVA = "0x29F2A30", Offset = "0x29F1030", VA = "0x1829F2A30")]
	public static int4 lzcnt(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000582")]
	[Address(RVA = "0x1741B60", Offset = "0x1740160", VA = "0x181741B60")]
	public static int lzcnt(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000583")]
	[Address(RVA = "0x29F2B40", Offset = "0x29F1140", VA = "0x1829F2B40")]
	public static int2 lzcnt(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000584")]
	[Address(RVA = "0x29F2950", Offset = "0x29F0F50", VA = "0x1829F2950")]
	public static int3 lzcnt(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000585")]
	[Address(RVA = "0x29F2A30", Offset = "0x29F1030", VA = "0x1829F2A30")]
	public static int4 lzcnt(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000586")]
	[Address(RVA = "0x29F2BE0", Offset = "0x29F11E0", VA = "0x1829F2BE0")]
	public static int lzcnt(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000587")]
	[Address(RVA = "0x29F2C40", Offset = "0x29F1240", VA = "0x1829F2C40")]
	public static int lzcnt(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000588")]
	[Address(RVA = "0x6CE7A0", Offset = "0x6CCDA0", VA = "0x1806CE7A0")]
	public static int tzcnt(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000589")]
	[Address(RVA = "0x2A0E050", Offset = "0x2A0C650", VA = "0x182A0E050")]
	public static int2 tzcnt(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058A")]
	[Address(RVA = "0x2A0DF60", Offset = "0x2A0C560", VA = "0x182A0DF60")]
	public static int3 tzcnt(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058B")]
	[Address(RVA = "0x2A0E0F0", Offset = "0x2A0C6F0", VA = "0x182A0E0F0")]
	public static int4 tzcnt(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058C")]
	[Address(RVA = "0x6CE7A0", Offset = "0x6CCDA0", VA = "0x1806CE7A0")]
	public static int tzcnt(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058D")]
	[Address(RVA = "0x2A0E050", Offset = "0x2A0C650", VA = "0x182A0E050")]
	public static int2 tzcnt(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058E")]
	[Address(RVA = "0x2A0DF60", Offset = "0x2A0C560", VA = "0x182A0DF60")]
	public static int3 tzcnt(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600058F")]
	[Address(RVA = "0x2A0E0F0", Offset = "0x2A0C6F0", VA = "0x182A0E0F0")]
	public static int4 tzcnt(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000590")]
	[Address(RVA = "0x2993C20", Offset = "0x2992220", VA = "0x182993C20")]
	public static int tzcnt(long x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000591")]
	[Address(RVA = "0x2993C20", Offset = "0x2992220", VA = "0x182993C20")]
	public static int tzcnt(ulong x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000592")]
	[Address(RVA = "0x2A03760", Offset = "0x2A01D60", VA = "0x182A03760")]
	public static int reversebits(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000593")]
	[Address(RVA = "0x2A03A00", Offset = "0x2A02000", VA = "0x182A03A00")]
	public static int2 reversebits(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000594")]
	[Address(RVA = "0x2A03B10", Offset = "0x2A02110", VA = "0x182A03B10")]
	public static int3 reversebits(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000595")]
	[Address(RVA = "0x2A037A0", Offset = "0x2A01DA0", VA = "0x182A037A0")]
	public static int4 reversebits(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000596")]
	[Address(RVA = "0x2A03760", Offset = "0x2A01D60", VA = "0x182A03760")]
	public static uint reversebits(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000597")]
	[Address(RVA = "0x2A03A00", Offset = "0x2A02000", VA = "0x182A03A00")]
	public static uint2 reversebits(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000598")]
	[Address(RVA = "0x2A03900", Offset = "0x2A01F00", VA = "0x182A03900")]
	public static uint3 reversebits(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000599")]
	[Address(RVA = "0x2A03620", Offset = "0x2A01C20", VA = "0x182A03620")]
	public static uint4 reversebits(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059A")]
	[Address(RVA = "0x2A03AB0", Offset = "0x2A020B0", VA = "0x182A03AB0")]
	public static long reversebits(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059B")]
	[Address(RVA = "0x2A03AB0", Offset = "0x2A020B0", VA = "0x182A03AB0")]
	public static ulong reversebits(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059C")]
	[Address(RVA = "0x1B27A20", Offset = "0x1B26020", VA = "0x181B27A20")]
	public static int rol(int x, int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059D")]
	[Address(RVA = "0x2A03C30", Offset = "0x2A02230", VA = "0x182A03C30")]
	public static int2 rol(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059E")]
	[Address(RVA = "0x2A03C80", Offset = "0x2A02280", VA = "0x182A03C80")]
	public static int3 rol(int3 x, int n)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600059F")]
	[Address(RVA = "0x2A03D00", Offset = "0x2A02300", VA = "0x182A03D00")]
	public static int4 rol(int4 x, int n)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x1B27A20", Offset = "0x1B26020", VA = "0x181B27A20")]
	public static uint rol(uint x, int n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x2A03C30", Offset = "0x2A02230", VA = "0x182A03C30")]
	public static uint2 rol(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x2A03E20", Offset = "0x2A02420", VA = "0x182A03E20")]
	public static uint3 rol(uint3 x, int n)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x2A03D90", Offset = "0x2A02390", VA = "0x182A03D90")]
	public static uint4 rol(uint4 x, int n)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x29C67E0", Offset = "0x29C4DE0", VA = "0x1829C67E0")]
	public static long rol(long x, int n)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x29C67E0", Offset = "0x29C4DE0", VA = "0x1829C67E0")]
	public static ulong rol(ulong x, int n)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x19C9AE0", Offset = "0x19C80E0", VA = "0x1819C9AE0")]
	public static int ror(int x, int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x2A03FF0", Offset = "0x2A025F0", VA = "0x182A03FF0")]
	public static int2 ror(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x2A04040", Offset = "0x2A02640", VA = "0x182A04040")]
	public static int3 ror(int3 x, int n)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x2A03EE0", Offset = "0x2A024E0", VA = "0x182A03EE0")]
	public static int4 ror(int4 x, int n)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x19C9AE0", Offset = "0x19C80E0", VA = "0x1819C9AE0")]
	public static uint ror(uint x, int n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x2A03E90", Offset = "0x2A02490", VA = "0x182A03E90")]
	public static uint2 ror(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x2A03F80", Offset = "0x2A02580", VA = "0x182A03F80")]
	public static uint3 ror(uint3 x, int n)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x2A040C0", Offset = "0x2A026C0", VA = "0x182A040C0")]
	public static uint4 ror(uint4 x, int n)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x19CB3B0", Offset = "0x19C99B0", VA = "0x1819CB3B0")]
	public static long ror(long x, int n)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x19CB3B0", Offset = "0x19C99B0", VA = "0x1819CB3B0")]
	public static ulong ror(ulong x, int n)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x12B9530", Offset = "0x12B7B30", VA = "0x1812B9530")]
	public static int ceilpow2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x29D4780", Offset = "0x29D2D80", VA = "0x1829D4780")]
	public static int2 ceilpow2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x29D47F0", Offset = "0x29D2DF0", VA = "0x1829D47F0")]
	public static int3 ceilpow2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x29D4A90", Offset = "0x29D3090", VA = "0x1829D4A90")]
	public static int4 ceilpow2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x29D46A0", Offset = "0x29D2CA0", VA = "0x1829D46A0")]
	public static uint ceilpow2(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x29D4A20", Offset = "0x29D3020", VA = "0x1829D4A20")]
	public static uint2 ceilpow2(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x29D46D0", Offset = "0x29D2CD0", VA = "0x1829D46D0")]
	public static uint3 ceilpow2(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x29D4940", Offset = "0x29D2F40", VA = "0x1829D4940")]
	public static uint4 ceilpow2(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x29D48F0", Offset = "0x29D2EF0", VA = "0x1829D48F0")]
	public static long ceilpow2(long x)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x29D48A0", Offset = "0x29D2EA0", VA = "0x1829D48A0")]
	public static ulong ceilpow2(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x2997FD0", Offset = "0x29965D0", VA = "0x182997FD0")]
	public static int ceillog2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x29D45F0", Offset = "0x29D2BF0", VA = "0x1829D45F0")]
	public static int2 ceillog2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x29D43E0", Offset = "0x29D29E0", VA = "0x1829D43E0")]
	public static int3 ceillog2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x29D44C0", Offset = "0x29D2AC0", VA = "0x1829D44C0")]
	public static int4 ceillog2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x2997FD0", Offset = "0x29965D0", VA = "0x182997FD0")]
	public static int ceillog2(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x29D45F0", Offset = "0x29D2BF0", VA = "0x1829D45F0")]
	public static int2 ceillog2(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x29D43E0", Offset = "0x29D29E0", VA = "0x1829D43E0")]
	public static int3 ceillog2(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x29D44C0", Offset = "0x29D2AC0", VA = "0x1829D44C0")]
	public static int4 ceillog2(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x2998020", Offset = "0x2996620", VA = "0x182998020")]
	public static int floorlog2(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x29E34F0", Offset = "0x29E1AF0", VA = "0x1829E34F0")]
	public static int2 floorlog2(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x29E3410", Offset = "0x29E1A10", VA = "0x1829E3410")]
	public static int3 floorlog2(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x29E32F0", Offset = "0x29E18F0", VA = "0x1829E32F0")]
	public static int4 floorlog2(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x2998020", Offset = "0x2996620", VA = "0x182998020")]
	public static int floorlog2(uint x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x29E34F0", Offset = "0x29E1AF0", VA = "0x1829E34F0")]
	public static int2 floorlog2(uint2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x29E3410", Offset = "0x29E1A10", VA = "0x1829E3410")]
	public static int3 floorlog2(uint3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x29E32F0", Offset = "0x29E18F0", VA = "0x1829E32F0")]
	public static int4 floorlog2(uint4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x2A02220", Offset = "0x2A00820", VA = "0x182A02220")]
	public static float radians(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x2A02290", Offset = "0x2A00890", VA = "0x182A02290")]
	public static float2 radians(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x2A02250", Offset = "0x2A00850", VA = "0x182A02250")]
	public static float3 radians(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x2A02230", Offset = "0x2A00830", VA = "0x182A02230")]
	public static float4 radians(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x2A02310", Offset = "0x2A00910", VA = "0x182A02310")]
	public static double radians(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x2A022C0", Offset = "0x2A008C0", VA = "0x182A022C0")]
	public static double2 radians(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x2A022E0", Offset = "0x2A008E0", VA = "0x182A022E0")]
	public static double3 radians(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x2A02320", Offset = "0x2A00920", VA = "0x182A02320")]
	public static double4 radians(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x29D7220", Offset = "0x29D5820", VA = "0x1829D7220")]
	public static float degrees(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x29D72A0", Offset = "0x29D58A0", VA = "0x1829D72A0")]
	public static float2 degrees(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x29D72F0", Offset = "0x29D58F0", VA = "0x1829D72F0")]
	public static float3 degrees(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x29D72D0", Offset = "0x29D58D0", VA = "0x1829D72D0")]
	public static float4 degrees(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x29D7290", Offset = "0x29D5890", VA = "0x1829D7290")]
	public static double degrees(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x29D7330", Offset = "0x29D5930", VA = "0x1829D7330")]
	public static double2 degrees(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x29D7230", Offset = "0x29D5830", VA = "0x1829D7230")]
	public static double3 degrees(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x29D7260", Offset = "0x29D5860", VA = "0x1829D7260")]
	public static double4 degrees(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x29D5A10", Offset = "0x29D4010", VA = "0x1829D5A10")]
	public static int cmin(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x29D57E0", Offset = "0x29D3DE0", VA = "0x1829D57E0")]
	public static int cmin(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x29D58B0", Offset = "0x29D3EB0", VA = "0x1829D58B0")]
	public static int cmin(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x29D5930", Offset = "0x29D3F30", VA = "0x1829D5930")]
	public static uint cmin(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x29D5A70", Offset = "0x29D4070", VA = "0x1829D5A70")]
	public static uint cmin(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x29D5800", Offset = "0x29D3E00", VA = "0x1829D5800")]
	public static uint cmin(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x29D59E0", Offset = "0x29D3FE0", VA = "0x1829D59E0")]
	public static float cmin(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x29D5940", Offset = "0x29D3F40", VA = "0x1829D5940")]
	public static float cmin(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x29D5980", Offset = "0x29D3F80", VA = "0x1829D5980")]
	public static float cmin(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x29D58F0", Offset = "0x29D3EF0", VA = "0x1829D58F0")]
	public static double cmin(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x29D5A20", Offset = "0x29D4020", VA = "0x1829D5A20")]
	public static double cmin(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x29D5840", Offset = "0x29D3E40", VA = "0x1829D5840")]
	public static double cmin(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x29D5720", Offset = "0x29D3D20", VA = "0x1829D5720")]
	public static int cmax(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x29D5770", Offset = "0x29D3D70", VA = "0x1829D5770")]
	public static int cmax(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x29D5610", Offset = "0x29D3C10", VA = "0x1829D5610")]
	public static int cmax(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x29D5570", Offset = "0x29D3B70", VA = "0x1829D5570")]
	public static uint cmax(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x29D5700", Offset = "0x29D3D00", VA = "0x1829D5700")]
	public static uint cmax(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x29D5650", Offset = "0x29D3C50", VA = "0x1829D5650")]
	public static uint cmax(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x29D55E0", Offset = "0x29D3BE0", VA = "0x1829D55E0")]
	public static float cmax(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x29D5530", Offset = "0x29D3B30", VA = "0x1829D5530")]
	public static float cmax(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x29D5580", Offset = "0x29D3B80", VA = "0x1829D5580")]
	public static float cmax(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x29D5730", Offset = "0x29D3D30", VA = "0x1829D5730")]
	public static double cmax(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x29D5790", Offset = "0x29D3D90", VA = "0x1829D5790")]
	public static double cmax(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x29D5690", Offset = "0x29D3C90", VA = "0x1829D5690")]
	public static double cmax(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x29D7030", Offset = "0x29D5630", VA = "0x1829D7030")]
	public static int csum(int2 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x29D7080", Offset = "0x29D5680", VA = "0x1829D7080")]
	public static int csum(int3 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x57AEB0", Offset = "0x5794B0", VA = "0x18057AEB0")]
	public static int csum(int4 x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x29D7030", Offset = "0x29D5630", VA = "0x1829D7030")]
	public static uint csum(uint2 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x29D7080", Offset = "0x29D5680", VA = "0x1829D7080")]
	public static uint csum(uint3 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x57AEB0", Offset = "0x5794B0", VA = "0x18057AEB0")]
	public static uint csum(uint4 x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x29D7090", Offset = "0x29D5690", VA = "0x1829D7090")]
	public static float csum(float2 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x29D70B0", Offset = "0x29D56B0", VA = "0x1829D70B0")]
	public static float csum(float3 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x29D7010", Offset = "0x29D5610", VA = "0x1829D7010")]
	public static float csum(float4 x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x29D7050", Offset = "0x29D5650", VA = "0x1829D7050")]
	public static double csum(double2 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x29D7040", Offset = "0x29D5640", VA = "0x1829D7040")]
	public static double csum(double3 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x29D7060", Offset = "0x29D5660", VA = "0x1829D7060")]
	public static double csum(double4 x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x29F0D70", Offset = "0x29EF370", VA = "0x1829F0D70")]
	public static float square(float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x2A0B2C0", Offset = "0x2A098C0", VA = "0x182A0B2C0")]
	public static float2 square(float2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000600")]
	[Address(RVA = "0x2A0B230", Offset = "0x2A09830", VA = "0x182A0B230")]
	public static float3 square(float3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000601")]
	[Address(RVA = "0x2A0B1A0", Offset = "0x2A097A0", VA = "0x182A0B1A0")]
	public static float4 square(float4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000602")]
	[Address(RVA = "0x29F0CE0", Offset = "0x29EF2E0", VA = "0x1829F0CE0")]
	public static double square(double x)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000603")]
	[Address(RVA = "0x2A0B180", Offset = "0x2A09780", VA = "0x182A0B180")]
	public static double2 square(double2 x)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000604")]
	[Address(RVA = "0x2A0B200", Offset = "0x2A09800", VA = "0x182A0B200")]
	public static double3 square(double3 x)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000605")]
	[Address(RVA = "0x2A0B140", Offset = "0x2A09740", VA = "0x182A0B140")]
	public static double4 square(double4 x)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000606")]
	[Address(RVA = "0x2A0B280", Offset = "0x2A09880", VA = "0x182A0B280")]
	public static int square(int x)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000607")]
	[Address(RVA = "0x2A0B1E0", Offset = "0x2A097E0", VA = "0x182A0B1E0")]
	public static int2 square(int2 x)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000608")]
	[Address(RVA = "0x2A0B260", Offset = "0x2A09860", VA = "0x182A0B260")]
	public static int3 square(int3 x)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000609")]
	[Address(RVA = "0x2A0B290", Offset = "0x2A09890", VA = "0x182A0B290")]
	public static int4 square(int4 x)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060A")]
	[Address(RVA = "0x2A0B280", Offset = "0x2A09880", VA = "0x182A0B280")]
	public static uint square(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060B")]
	[Address(RVA = "0x2A0B1E0", Offset = "0x2A097E0", VA = "0x182A0B1E0")]
	public static uint2 square(uint2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060C")]
	[Address(RVA = "0x2A0B260", Offset = "0x2A09860", VA = "0x182A0B260")]
	public static uint3 square(uint3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060D")]
	[Address(RVA = "0x2A0B290", Offset = "0x2A09890", VA = "0x182A0B290")]
	public static uint4 square(uint4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060E")]
	[Address(RVA = "0x29D5B10", Offset = "0x29D4110", VA = "0x1829D5B10")]
	public unsafe static int compress(int* output, int index, int4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600060F")]
	[Address(RVA = "0x29D5A90", Offset = "0x29D4090", VA = "0x1829D5A90")]
	public unsafe static int compress(uint* output, int index, uint4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000610")]
	[Address(RVA = "0x29D5A90", Offset = "0x29D4090", VA = "0x1829D5A90")]
	public unsafe static int compress(float* output, int index, float4 val, bool4 mask)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000611")]
	[Address(RVA = "0x29CA6A0", Offset = "0x29C8CA0", VA = "0x1829CA6A0")]
	public static float f16tof32(uint x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000612")]
	[Address(RVA = "0x29DD520", Offset = "0x29DBB20", VA = "0x1829DD520")]
	public static float2 f16tof32(uint2 x)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000613")]
	[Address(RVA = "0x29DD3C0", Offset = "0x29DB9C0", VA = "0x1829DD3C0")]
	public static float3 f16tof32(uint3 x)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000614")]
	[Address(RVA = "0x29DD600", Offset = "0x29DBC00", VA = "0x1829DD600")]
	public static float4 f16tof32(uint4 x)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000615")]
	[Address(RVA = "0x29DDA30", Offset = "0x29DC030", VA = "0x1829DDA30")]
	public static uint f32tof16(float x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000616")]
	[Address(RVA = "0x29DD7E0", Offset = "0x29DBDE0", VA = "0x1829DD7E0")]
	public static uint2 f32tof16(float2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000617")]
	[Address(RVA = "0x29DD8D0", Offset = "0x29DBED0", VA = "0x1829DD8D0")]
	public static uint3 f32tof16(float3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000618")]
	[Address(RVA = "0x29DDAA0", Offset = "0x29DC0A0", VA = "0x1829DDAA0")]
	public static uint4 f32tof16(float4 x)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x2A00A90", Offset = "0x29FF090", VA = "0x182A00A90")]
	public static void orthonormal_basis(float3 normal, out float3 basis1, out float3 basis2)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x2A00B40", Offset = "0x29FF140", VA = "0x182A00B40")]
	public static void orthonormal_basis(double3 normal, out double3 basis1, out double3 basis2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061B")]
	[Address(RVA = "0x29D4C00", Offset = "0x29D3200", VA = "0x1829D4C00")]
	public static float chgsign(float x, float y)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061C")]
	[Address(RVA = "0x29D4B70", Offset = "0x29D3170", VA = "0x1829D4B70")]
	public static float2 chgsign(float2 x, float2 y)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061D")]
	[Address(RVA = "0x29D4BB0", Offset = "0x29D31B0", VA = "0x1829D4BB0")]
	public static float3 chgsign(float3 x, float3 y)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061E")]
	[Address(RVA = "0x29D4C20", Offset = "0x29D3220", VA = "0x1829D4C20")]
	public static float4 chgsign(float4 x, float4 y)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600061F")]
	[Address(RVA = "0x1A51A20", Offset = "0x1A50020", VA = "0x181A51A20")]
	private unsafe static uint read32_little_endian(void* pBuffer)
	{
		return default(uint);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x29E7160", Offset = "0x29E5760", VA = "0x1829E7160")]
	private unsafe static uint hash_with_unaligned_loads(void* pBuffer, int numBytes, uint seed)
	{
		return default(uint);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x29E7300", Offset = "0x29E5900", VA = "0x1829E7300")]
	private unsafe static uint hash_without_unaligned_loads(void* pBuffer, int numBytes, uint seed)
	{
		return default(uint);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x29E6360", Offset = "0x29E4960", VA = "0x1829E6360")]
	public unsafe static uint hash(void* pBuffer, int numBytes, uint seed = 0u)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000623")]
	[Address(RVA = "0x2A10760", Offset = "0x2A0ED60", VA = "0x182A10760")]
	public static float3 up()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000624")]
	[Address(RVA = "0x29DBA70", Offset = "0x29DA070", VA = "0x1829DBA70")]
	public static float3 down()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000625")]
	[Address(RVA = "0x29E3AA0", Offset = "0x29E20A0", VA = "0x1829E3AA0")]
	public static float3 forward()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000626")]
	[Address(RVA = "0x29D3480", Offset = "0x29D1A80", VA = "0x1829D3480")]
	public static float3 back()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000627")]
	[Address(RVA = "0x29F0A30", Offset = "0x29EF030", VA = "0x1829F0A30")]
	public static float3 left()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000628")]
	[Address(RVA = "0x2A03C20", Offset = "0x2A02220", VA = "0x182A03C20")]
	public static float3 right()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000629")]
	[Address(RVA = "0x29CFB80", Offset = "0x29CE180", VA = "0x1829CFB80")]
	public static float3 EulerXYZ(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062A")]
	[Address(RVA = "0x29CFE60", Offset = "0x29CE460", VA = "0x1829CFE60")]
	public static float3 EulerXZY(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062B")]
	[Address(RVA = "0x29D0110", Offset = "0x29CE710", VA = "0x1829D0110")]
	public static float3 EulerYXZ(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062C")]
	[Address(RVA = "0x29D03C0", Offset = "0x29CE9C0", VA = "0x1829D03C0")]
	public static float3 EulerYZX(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062D")]
	[Address(RVA = "0x29D0670", Offset = "0x29CEC70", VA = "0x1829D0670")]
	public static float3 EulerZXY(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062E")]
	[Address(RVA = "0x29D0920", Offset = "0x29CEF20", VA = "0x1829D0920")]
	public static float3 EulerZYX(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600062F")]
	[Address(RVA = "0x29D0BD0", Offset = "0x29CF1D0", VA = "0x1829D0BD0")]
	public static float3 Euler(quaternion q, RotationOrder order = RotationOrder.ZXY)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000630")]
	[Address(RVA = "0x29F4740", Offset = "0x29F2D40", VA = "0x1829F4740")]
	public static float3x3 mulScale(float3x3 m, float3 s)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000631")]
	[Address(RVA = "0x2A05680", Offset = "0x2A03C80", VA = "0x182A05680")]
	public static float3x3 scaleMul(float3 s, float3x3 m)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000632")]
	[Address(RVA = "0x2A10530", Offset = "0x2A0EB30", VA = "0x182A10530")]
	internal static float4 unpacklo(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000633")]
	[Address(RVA = "0x2A10630", Offset = "0x2A0EC30", VA = "0x182A10630")]
	internal static double4 unpacklo(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000634")]
	[Address(RVA = "0x2A10430", Offset = "0x2A0EA30", VA = "0x182A10430")]
	internal static float4 unpackhi(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000635")]
	[Address(RVA = "0x2A10300", Offset = "0x2A0E900", VA = "0x182A10300")]
	internal static double4 unpackhi(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000636")]
	[Address(RVA = "0x29F4510", Offset = "0x29F2B10", VA = "0x1829F4510")]
	internal static float4 movelh(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000637")]
	[Address(RVA = "0x29F4610", Offset = "0x29F2C10", VA = "0x1829F4610")]
	internal static double4 movelh(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000638")]
	[Address(RVA = "0x29F42E0", Offset = "0x29F28E0", VA = "0x1829F42E0")]
	internal static float4 movehl(float4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000639")]
	[Address(RVA = "0x29F43E0", Offset = "0x29F29E0", VA = "0x1829F43E0")]
	internal static double4 movehl(double4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063A")]
	[Address(RVA = "0x29E3960", Offset = "0x29E1F60", VA = "0x1829E3960")]
	internal static uint fold_to_uint(double x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063B")]
	[Address(RVA = "0x29E3840", Offset = "0x29E1E40", VA = "0x1829E3840")]
	internal static uint2 fold_to_uint(double2 x)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063C")]
	[Address(RVA = "0x29E3900", Offset = "0x29E1F00", VA = "0x1829E3900")]
	internal static uint3 fold_to_uint(double3 x)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063D")]
	[Address(RVA = "0x29E3880", Offset = "0x29E1E80", VA = "0x1829E3880")]
	internal static uint4 fold_to_uint(double4 x)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063E")]
	[Address(RVA = "0x29E0950", Offset = "0x29DEF50", VA = "0x1829E0950")]
	public static float3x3 float3x3(float4x4 f4x4)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600063F")]
	[Address(RVA = "0x29E0A70", Offset = "0x29DF070", VA = "0x1829E0A70")]
	public static float3x3 float3x3(quaternion rotation)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000640")]
	[Address(RVA = "0x29E2D50", Offset = "0x29E1350", VA = "0x1829E2D50")]
	public static float4x4 float4x4(float3x3 rotation, float3 translation)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000641")]
	[Address(RVA = "0x29E2E70", Offset = "0x29E1470", VA = "0x1829E2E70")]
	public static float4x4 float4x4(quaternion rotation, float3 translation)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000642")]
	[Address(RVA = "0x29E28B0", Offset = "0x29E0EB0", VA = "0x1829E28B0")]
	public static float4x4 float4x4(RigidTransform transform)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000643")]
	[Address(RVA = "0x2A00BF0", Offset = "0x29FF1F0", VA = "0x182A00BF0")]
	public static float3x3 orthonormalize(float3x3 i)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000644")]
	[Address(RVA = "0x2A01E50", Offset = "0x2A00450", VA = "0x182A01E50")]
	public static float3x3 pseudoinverse(float3x3 m)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000645")]
	[Address(RVA = "0x29D80F0", Offset = "0x29D66F0", VA = "0x1829D80F0")]
	public static float mul(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000646")]
	[Address(RVA = "0x29D81C0", Offset = "0x29D67C0", VA = "0x1829D81C0")]
	public static float mul(float2 a, float2 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000647")]
	[Address(RVA = "0x29F67D0", Offset = "0x29F4DD0", VA = "0x1829F67D0")]
	public static float2 mul(float2 a, float2x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000648")]
	[Address(RVA = "0x29FD030", Offset = "0x29FB630", VA = "0x1829FD030")]
	public static float3 mul(float2 a, float2x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000649")]
	[Address(RVA = "0x29FEC70", Offset = "0x29FD270", VA = "0x1829FEC70")]
	public static float4 mul(float2 a, float2x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064A")]
	[Address(RVA = "0x29D8190", Offset = "0x29D6790", VA = "0x1829D8190")]
	public static float mul(float3 a, float3 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064B")]
	[Address(RVA = "0x29F75B0", Offset = "0x29F5BB0", VA = "0x1829F75B0")]
	public static float2 mul(float3 a, float3x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064C")]
	[Address(RVA = "0x29F72D0", Offset = "0x29F58D0", VA = "0x1829F72D0")]
	public static float3 mul(float3 a, float3x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064D")]
	[Address(RVA = "0x29F9600", Offset = "0x29F7C00", VA = "0x1829F9600")]
	public static float4 mul(float3 a, float3x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064E")]
	[Address(RVA = "0x29CA660", Offset = "0x29C8C60", VA = "0x1829CA660")]
	public static float mul(float4 a, float4 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600064F")]
	[Address(RVA = "0x29FCF30", Offset = "0x29FB530", VA = "0x1829FCF30")]
	public static float2 mul(float4 a, float4x2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000650")]
	[Address(RVA = "0x29F4D50", Offset = "0x29F3350", VA = "0x1829F4D50")]
	public static float3 mul(float4 a, float4x3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000651")]
	[Address(RVA = "0x29FF430", Offset = "0x29FDA30", VA = "0x1829FF430")]
	public static float4 mul(float4 a, float4x4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000652")]
	[Address(RVA = "0x29F5AE0", Offset = "0x29F40E0", VA = "0x1829F5AE0")]
	public static float2 mul(float2x2 a, float2 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000653")]
	[Address(RVA = "0x29FCFA0", Offset = "0x29FB5A0", VA = "0x1829FCFA0")]
	public static float2x2 mul(float2x2 a, float2x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000654")]
	[Address(RVA = "0x29FDBF0", Offset = "0x29FC1F0", VA = "0x1829FDBF0")]
	public static float2x3 mul(float2x2 a, float2x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000655")]
	[Address(RVA = "0x29F47F0", Offset = "0x29F2DF0", VA = "0x1829F47F0")]
	public static float2x4 mul(float2x2 a, float2x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000656")]
	[Address(RVA = "0x29F6330", Offset = "0x29F4930", VA = "0x1829F6330")]
	public static float2 mul(float2x3 a, float3 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000657")]
	[Address(RVA = "0x29F6810", Offset = "0x29F4E10", VA = "0x1829F6810")]
	public static float2x2 mul(float2x3 a, float3x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000658")]
	[Address(RVA = "0x29FB5E0", Offset = "0x29F9BE0", VA = "0x1829FB5E0")]
	public static float2x3 mul(float2x3 a, float3x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000659")]
	[Address(RVA = "0x29F57A0", Offset = "0x29F3DA0", VA = "0x1829F57A0")]
	public static float2x4 mul(float2x3 a, float3x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065A")]
	[Address(RVA = "0x29FC9B0", Offset = "0x29FAFB0", VA = "0x1829FC9B0")]
	public static float2 mul(float2x4 a, float4 b)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065B")]
	[Address(RVA = "0x29F4A10", Offset = "0x29F3010", VA = "0x1829F4A10")]
	public static float2x2 mul(float2x4 a, float4x2 b)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065C")]
	[Address(RVA = "0x29FB2E0", Offset = "0x29F98E0", VA = "0x1829FB2E0")]
	public static float2x3 mul(float2x4 a, float4x3 b)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065D")]
	[Address(RVA = "0x29FB9B0", Offset = "0x29F9FB0", VA = "0x1829FB9B0")]
	public static float2x4 mul(float2x4 a, float4x4 b)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065E")]
	[Address(RVA = "0x29F7610", Offset = "0x29F5C10", VA = "0x1829F7610")]
	public static float3 mul(float3x2 a, float2 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600065F")]
	[Address(RVA = "0x29FCCB0", Offset = "0x29FB2B0", VA = "0x1829FCCB0")]
	public static float3x2 mul(float3x2 a, float2x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000660")]
	[Address(RVA = "0x29FF530", Offset = "0x29FDB30", VA = "0x1829FF530")]
	public static float3x3 mul(float3x2 a, float2x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000661")]
	[Address(RVA = "0x29F4B60", Offset = "0x29F3160", VA = "0x1829F4B60")]
	public static float3x4 mul(float3x2 a, float2x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000662")]
	[Address(RVA = "0x29F7E00", Offset = "0x29F6400", VA = "0x1829F7E00")]
	public static float3 mul(float3x3 a, float3 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000663")]
	[Address(RVA = "0x29FE620", Offset = "0x29FCC20", VA = "0x1829FE620")]
	public static float3x2 mul(float3x3 a, float3x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000664")]
	[Address(RVA = "0x29CABB0", Offset = "0x29C91B0", VA = "0x1829CABB0")]
	public static float3x3 mul(float3x3 a, float3x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000665")]
	[Address(RVA = "0x29FA0E0", Offset = "0x29F86E0", VA = "0x1829FA0E0")]
	public static float3x4 mul(float3x3 a, float3x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000666")]
	[Address(RVA = "0x29F9B90", Offset = "0x29F8190", VA = "0x1829F9B90")]
	public static float3 mul(float3x4 a, float4 b)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000667")]
	[Address(RVA = "0x29FF1A0", Offset = "0x29FD7A0", VA = "0x1829FF1A0")]
	public static float3x2 mul(float3x4 a, float4x2 b)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000668")]
	[Address(RVA = "0x29F96C0", Offset = "0x29F7CC0", VA = "0x1829F96C0")]
	public static float3x3 mul(float3x4 a, float4x3 b)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000669")]
	[Address(RVA = "0x29F5CE0", Offset = "0x29F42E0", VA = "0x1829F5CE0")]
	public static float3x4 mul(float3x4 a, float4x4 b)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066A")]
	[Address(RVA = "0x29FAAC0", Offset = "0x29F90C0", VA = "0x1829FAAC0")]
	public static float4 mul(float4x2 a, float2 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066B")]
	[Address(RVA = "0x29FB4D0", Offset = "0x29F9AD0", VA = "0x1829FB4D0")]
	public static float4x2 mul(float4x2 a, float2x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066C")]
	[Address(RVA = "0x29F8C60", Offset = "0x29F7260", VA = "0x1829F8C60")]
	public static float4x3 mul(float4x2 a, float2x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066D")]
	[Address(RVA = "0x29FA450", Offset = "0x29F8A50", VA = "0x1829FA450")]
	public static float4x4 mul(float4x2 a, float2x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066E")]
	[Address(RVA = "0x29FD280", Offset = "0x29FB880", VA = "0x1829FD280")]
	public static float4 mul(float4x3 a, float3 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600066F")]
	[Address(RVA = "0x29FD3C0", Offset = "0x29FB9C0", VA = "0x1829FD3C0")]
	public static float4x2 mul(float4x3 a, float3x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000670")]
	[Address(RVA = "0x29FC3C0", Offset = "0x29FA9C0", VA = "0x1829FC3C0")]
	public static float4x3 mul(float4x3 a, float3x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000671")]
	[Address(RVA = "0x29FD890", Offset = "0x29FBE90", VA = "0x1829FD890")]
	public static float4x4 mul(float4x3 a, float3x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000672")]
	[Address(RVA = "0x29F4E10", Offset = "0x29F3410", VA = "0x1829F4E10")]
	public static float4 mul(float4x4 a, float4 b)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000673")]
	[Address(RVA = "0x29F6D20", Offset = "0x29F5320", VA = "0x1829F6D20")]
	public static float4x2 mul(float4x4 a, float4x2 b)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000674")]
	[Address(RVA = "0x29FC660", Offset = "0x29FAC60", VA = "0x1829FC660")]
	public static float4x3 mul(float4x4 a, float4x3 b)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000675")]
	[Address(RVA = "0x29FF680", Offset = "0x29FDC80", VA = "0x1829FF680")]
	public static float4x4 mul(float4x4 a, float4x4 b)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000676")]
	[Address(RVA = "0x29D80C0", Offset = "0x29D66C0", VA = "0x1829D80C0")]
	public static double mul(double a, double b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000677")]
	[Address(RVA = "0x29D8170", Offset = "0x29D6770", VA = "0x1829D8170")]
	public static double mul(double2 a, double2 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000678")]
	[Address(RVA = "0x29FE180", Offset = "0x29FC780", VA = "0x1829FE180")]
	public static double2 mul(double2 a, double2x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000679")]
	[Address(RVA = "0x29F79B0", Offset = "0x29F5FB0", VA = "0x1829F79B0")]
	public static double3 mul(double2 a, double2x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067A")]
	[Address(RVA = "0x29F7EC0", Offset = "0x29F64C0", VA = "0x1829F7EC0")]
	public static double4 mul(double2 a, double2x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067B")]
	[Address(RVA = "0x29D8100", Offset = "0x29D6700", VA = "0x1829D8100")]
	public static double mul(double3 a, double3 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067C")]
	[Address(RVA = "0x29F7D50", Offset = "0x29F6350", VA = "0x1829F7D50")]
	public static double2 mul(double3 a, double3x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067D")]
	[Address(RVA = "0x29F85F0", Offset = "0x29F6BF0", VA = "0x1829F85F0")]
	public static double3 mul(double3 a, double3x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067E")]
	[Address(RVA = "0x29F7210", Offset = "0x29F5810", VA = "0x1829F7210")]
	public static double4 mul(double3 a, double3x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067F")]
	[Address(RVA = "0x29D8030", Offset = "0x29D6630", VA = "0x1829D8030")]
	public static double mul(double4 a, double4 b)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000680")]
	[Address(RVA = "0x29F94C0", Offset = "0x29F7AC0", VA = "0x1829F94C0")]
	public static double2 mul(double4 a, double4x2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000681")]
	[Address(RVA = "0x29F5660", Offset = "0x29F3C60", VA = "0x1829F5660")]
	public static double3 mul(double4 a, double4x3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000682")]
	[Address(RVA = "0x29FFDD0", Offset = "0x29FE3D0", VA = "0x1829FFDD0")]
	public static double4 mul(double4 a, double4x4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000683")]
	[Address(RVA = "0x29FAC30", Offset = "0x29F9230", VA = "0x1829FAC30")]
	public static double2 mul(double2x2 a, double2 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000684")]
	[Address(RVA = "0x29F9C80", Offset = "0x29F8280", VA = "0x1829F9C80")]
	public static double2x2 mul(double2x2 a, double2x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000685")]
	[Address(RVA = "0x29FB750", Offset = "0x29F9D50", VA = "0x1829FB750")]
	public static double2x3 mul(double2x2 a, double2x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000686")]
	[Address(RVA = "0x29FB030", Offset = "0x29F9630", VA = "0x1829FB030")]
	public static double2x4 mul(double2x2 a, double2x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000687")]
	[Address(RVA = "0x29F4F00", Offset = "0x29F3500", VA = "0x1829F4F00")]
	public static double2 mul(double2x3 a, double3 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000688")]
	[Address(RVA = "0x29FA380", Offset = "0x29F8980", VA = "0x1829FA380")]
	public static double2x2 mul(double2x3 a, double3x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000689")]
	[Address(RVA = "0x29FE030", Offset = "0x29FC630", VA = "0x1829FE030")]
	public static double2x3 mul(double2x3 a, double3x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068A")]
	[Address(RVA = "0x29FBFA0", Offset = "0x29FA5A0", VA = "0x1829FBFA0")]
	public static double2x4 mul(double2x3 a, double3x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068B")]
	[Address(RVA = "0x29FEBF0", Offset = "0x29FD1F0", VA = "0x1829FEBF0")]
	public static double2 mul(double2x4 a, double4 b)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068C")]
	[Address(RVA = "0x29F6200", Offset = "0x29F4800", VA = "0x1829F6200")]
	public static double2x2 mul(double2x4 a, double4x2 b)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068D")]
	[Address(RVA = "0x29FE440", Offset = "0x29FCA40", VA = "0x1829FE440")]
	public static double2x3 mul(double2x4 a, double4x3 b)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068E")]
	[Address(RVA = "0x29F6530", Offset = "0x29F4B30", VA = "0x1829F6530")]
	public static double2x4 mul(double2x4 a, double4x4 b)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600068F")]
	[Address(RVA = "0x29F9EE0", Offset = "0x29F84E0", VA = "0x1829F9EE0")]
	public static double3 mul(double3x2 a, double2 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000690")]
	[Address(RVA = "0x29FF360", Offset = "0x29FD960", VA = "0x1829FF360")]
	public static double3x2 mul(double3x2 a, double2x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000691")]
	[Address(RVA = "0x29F7360", Offset = "0x29F5960", VA = "0x1829F7360")]
	public static double3x3 mul(double3x2 a, double2x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000692")]
	[Address(RVA = "0x29FFBE0", Offset = "0x29FE1E0", VA = "0x1829FFBE0")]
	public static double3x4 mul(double3x2 a, double2x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000693")]
	[Address(RVA = "0x29FD200", Offset = "0x29FB800", VA = "0x1829FD200")]
	public static double3 mul(double3x3 a, double3 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000694")]
	[Address(RVA = "0x29F7670", Offset = "0x29F5C70", VA = "0x1829F7670")]
	public static double3x2 mul(double3x3 a, double3x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000695")]
	[Address(RVA = "0x29F9CF0", Offset = "0x29F82F0", VA = "0x1829F9CF0")]
	public static double3x3 mul(double3x3 a, double3x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000696")]
	[Address(RVA = "0x29F6F50", Offset = "0x29F5550", VA = "0x1829F6F50")]
	public static double3x4 mul(double3x3 a, double3x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000697")]
	[Address(RVA = "0x29F8780", Offset = "0x29F6D80", VA = "0x1829F8780")]
	public static double3 mul(double3x4 a, double4 b)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000698")]
	[Address(RVA = "0x29FA6E0", Offset = "0x29F8CE0", VA = "0x1829FA6E0")]
	public static double3x2 mul(double3x4 a, double4x2 b)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000699")]
	[Address(RVA = "0x29FE870", Offset = "0x29FCE70", VA = "0x1829FE870")]
	public static double3x3 mul(double3x4 a, double4x3 b)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069A")]
	[Address(RVA = "0x29FEE10", Offset = "0x29FD410", VA = "0x1829FEE10")]
	public static double3x4 mul(double3x4 a, double4x4 b)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069B")]
	[Address(RVA = "0x29FBEE0", Offset = "0x29FA4E0", VA = "0x1829FBEE0")]
	public static double4 mul(double4x2 a, double2 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069C")]
	[Address(RVA = "0x29FE760", Offset = "0x29FCD60", VA = "0x1829FE760")]
	public static double4x2 mul(double4x2 a, double2x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069D")]
	[Address(RVA = "0x29FCD80", Offset = "0x29FB380", VA = "0x1829FCD80")]
	public static double4x3 mul(double4x2 a, double2x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069E")]
	[Address(RVA = "0x29FFED0", Offset = "0x29FE4D0", VA = "0x1829FFED0")]
	public static double4x4 mul(double4x2 a, double2x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600069F")]
	[Address(RVA = "0x29F9950", Offset = "0x29F7F50", VA = "0x1829F9950")]
	public static double4 mul(double4x3 a, double3 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x29FB150", Offset = "0x29F9750", VA = "0x1829FB150")]
	public static double4x2 mul(double4x3 a, double3x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x29FCA30", Offset = "0x29FB030", VA = "0x1829FCA30")]
	public static double4x3 mul(double4x3 a, double3x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x29F7A10", Offset = "0x29F6010", VA = "0x1829F7A10")]
	public static double4x4 mul(double4x3 a, double3x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x29F5990", Offset = "0x29F3F90", VA = "0x1829F5990")]
	public static double4 mul(double4x4 a, double4 b)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x29FAE10", Offset = "0x29F9410", VA = "0x1829FAE10")]
	public static double4x2 mul(double4x4 a, double4x2 b)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x29F8830", Offset = "0x29F6E30", VA = "0x1829F8830")]
	public static double4x3 mul(double4x4 a, double4x3 b)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x29F81D0", Offset = "0x29F67D0", VA = "0x1829F81D0")]
	public static double4x4 mul(double4x4 a, double4x4 b)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x29D8020", Offset = "0x29D6620", VA = "0x1829D8020")]
	public static int mul(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x29D80D0", Offset = "0x29D66D0", VA = "0x1829D80D0")]
	public static int mul(int2 a, int2 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x29F9C40", Offset = "0x29F8240", VA = "0x1829F9C40")]
	public static int2 mul(int2 a, int2x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x29F6780", Offset = "0x29F4D80", VA = "0x1829F6780")]
	public static int3 mul(int2 a, int2x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x29F9540", Offset = "0x29F7B40", VA = "0x1829F9540")]
	public static int4 mul(int2 a, int2x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x29D80A0", Offset = "0x29D66A0", VA = "0x1829D80A0")]
	public static int mul(int3 a, int3 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x29FBF50", Offset = "0x29FA550", VA = "0x1829FBF50")]
	public static int2 mul(int3 a, int3x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x29F5720", Offset = "0x29F3D20", VA = "0x1829F5720")]
	public static int3 mul(int3 a, int3x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x29F6380", Offset = "0x29F4980", VA = "0x1829F6380")]
	public static int4 mul(int3 a, int3x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x29D8070", Offset = "0x29D6670", VA = "0x1829D8070")]
	public static int mul(int4 a, int4 b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x29F95A0", Offset = "0x29F7BA0", VA = "0x1829F95A0")]
	public static int2 mul(int4 a, int4x2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x29F5130", Offset = "0x29F3730", VA = "0x1829F5130")]
	public static int3 mul(int4 a, int4x3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x29F4940", Offset = "0x29F2F40", VA = "0x1829F4940")]
	public static int4 mul(int4 a, int4x4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x29F7E80", Offset = "0x29F6480", VA = "0x1829F7E80")]
	public static int2 mul(int2x2 a, int2 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x29FD320", Offset = "0x29FB920", VA = "0x1829FD320")]
	public static int2x2 mul(int2x2 a, int2x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x29F8680", Offset = "0x29F6C80", VA = "0x1829F8680")]
	public static int2x3 mul(int2x2 a, int2x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x29F51D0", Offset = "0x29F37D0", VA = "0x1829F51D0")]
	public static int2x4 mul(int2x2 a, int2x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x29F99F0", Offset = "0x29F7FF0", VA = "0x1829F99F0")]
	public static int2 mul(int2x3 a, int3 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x29FAB40", Offset = "0x29F9140", VA = "0x1829FAB40")]
	public static int2x2 mul(int2x3 a, int3x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x29F7F40", Offset = "0x29F6540", VA = "0x1829F7F40")]
	public static int2x3 mul(int2x3 a, int3x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x29F6040", Offset = "0x29F4640", VA = "0x1829F6040")]
	public static int2x4 mul(int2x3 a, int3x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x29F77B0", Offset = "0x29F5DB0", VA = "0x1829F77B0")]
	public static int2 mul(int2x4 a, int4 b)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x29F80A0", Offset = "0x29F66A0", VA = "0x1829F80A0")]
	public static int2x2 mul(int2x4 a, int4x2 b)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x29F5B20", Offset = "0x29F4120", VA = "0x1829F5B20")]
	public static int2x3 mul(int2x4 a, int4x3 b)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x29FC180", Offset = "0x29FA780", VA = "0x1829FC180")]
	public static int2x4 mul(int2x4 a, int4x4 b)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x29F7DB0", Offset = "0x29F63B0", VA = "0x1829F7DB0")]
	public static int3 mul(int3x2 a, int2 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x29FEB10", Offset = "0x29FD110", VA = "0x1829FEB10")]
	public static int3x2 mul(int3x2 a, int2x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x29F8B60", Offset = "0x29F7160", VA = "0x1829F8B60")]
	public static int3x3 mul(int3x2 a, int2x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x29F9360", Offset = "0x29F7960", VA = "0x1829F9360")]
	public static int3x4 mul(int3x2 a, int2x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x29F92F0", Offset = "0x29F78F0", VA = "0x1829F92F0")]
	public static int3 mul(int3x3 a, int3 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x29F6420", Offset = "0x29F4A20", VA = "0x1829F6420")]
	public static int3x2 mul(int3x3 a, int3x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x29FD090", Offset = "0x29FB690", VA = "0x1829FD090")]
	public static int3x3 mul(int3x3 a, int3x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x29F90B0", Offset = "0x29F76B0", VA = "0x1829F90B0")]
	public static int3x4 mul(int3x3 a, int3x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x29F7830", Offset = "0x29F5E30", VA = "0x1829F7830")]
	public static int3 mul(int3x4 a, int4 b)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x29F5310", Offset = "0x29F3910", VA = "0x1829F5310")]
	public static int3x2 mul(int3x4 a, int4x2 b)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x29FA8A0", Offset = "0x29F8EA0", VA = "0x1829FA8A0")]
	public static int3x3 mul(int3x4 a, int4x3 b)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x29F6A20", Offset = "0x29F5020", VA = "0x1829F6A20")]
	public static int3x4 mul(int3x4 a, int4x4 b)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x29F5A80", Offset = "0x29F4080", VA = "0x1829F5A80")]
	public static int4 mul(int4x2 a, int2 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x29F78D0", Offset = "0x29F5ED0", VA = "0x1829F78D0")]
	public static int4x2 mul(int4x2 a, int2x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x29F9A60", Offset = "0x29F8060", VA = "0x1829F9A60")]
	public static int4x3 mul(int4x2 a, int2x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x29FB820", Offset = "0x29F9E20", VA = "0x1829FB820")]
	public static int4x4 mul(int4x2 a, int2x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x29F55D0", Offset = "0x29F3BD0", VA = "0x1829F55D0")]
	public static int4 mul(int4x3 a, int3 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x29F68F0", Offset = "0x29F4EF0", VA = "0x1829F68F0")]
	public static int4x2 mul(int4x3 a, int3x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x29F4F60", Offset = "0x29F3560", VA = "0x1829F4F60")]
	public static int4x3 mul(int4x3 a, int3x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x29F8E30", Offset = "0x29F7430", VA = "0x1829F8E30")]
	public static int4x4 mul(int4x3 a, int3x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x29FBE20", Offset = "0x29FA420", VA = "0x1829FBE20")]
	public static int4 mul(int4x4 a, int4 b)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x29F9F40", Offset = "0x29F8540", VA = "0x1829F9F40")]
	public static int4x2 mul(int4x4 a, int4x2 b)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x29FD570", Offset = "0x29FBB70", VA = "0x1829FD570")]
	public static int4x3 mul(int4x4 a, int4x3 b)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x29FDCC0", Offset = "0x29FC2C0", VA = "0x1829FDCC0")]
	public static int4x4 mul(int4x4 a, int4x4 b)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x29D8020", Offset = "0x29D6620", VA = "0x1829D8020")]
	public static uint mul(uint a, uint b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x29D80D0", Offset = "0x29D66D0", VA = "0x1829D80D0")]
	public static uint mul(uint2 a, uint2 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x29F9C40", Offset = "0x29F8240", VA = "0x1829F9C40")]
	public static uint2 mul(uint2 a, uint2x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x29F6780", Offset = "0x29F4D80", VA = "0x1829F6780")]
	public static uint3 mul(uint2 a, uint2x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x29F9540", Offset = "0x29F7B40", VA = "0x1829F9540")]
	public static uint4 mul(uint2 a, uint2x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x29D80A0", Offset = "0x29D66A0", VA = "0x1829D80A0")]
	public static uint mul(uint3 a, uint3 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x29FBF50", Offset = "0x29FA550", VA = "0x1829FBF50")]
	public static uint2 mul(uint3 a, uint3x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x29F5720", Offset = "0x29F3D20", VA = "0x1829F5720")]
	public static uint3 mul(uint3 a, uint3x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x29F6380", Offset = "0x29F4980", VA = "0x1829F6380")]
	public static uint4 mul(uint3 a, uint3x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x29D8070", Offset = "0x29D6670", VA = "0x1829D8070")]
	public static uint mul(uint4 a, uint4 b)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x29F95A0", Offset = "0x29F7BA0", VA = "0x1829F95A0")]
	public static uint2 mul(uint4 a, uint4x2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x29F5130", Offset = "0x29F3730", VA = "0x1829F5130")]
	public static uint3 mul(uint4 a, uint4x3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x29F4940", Offset = "0x29F2F40", VA = "0x1829F4940")]
	public static uint4 mul(uint4 a, uint4x4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x29F7E80", Offset = "0x29F6480", VA = "0x1829F7E80")]
	public static uint2 mul(uint2x2 a, uint2 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x29FD320", Offset = "0x29FB920", VA = "0x1829FD320")]
	public static uint2x2 mul(uint2x2 a, uint2x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x29F8680", Offset = "0x29F6C80", VA = "0x1829F8680")]
	public static uint2x3 mul(uint2x2 a, uint2x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x29F51D0", Offset = "0x29F37D0", VA = "0x1829F51D0")]
	public static uint2x4 mul(uint2x2 a, uint2x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x29F99F0", Offset = "0x29F7FF0", VA = "0x1829F99F0")]
	public static uint2 mul(uint2x3 a, uint3 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x29FAB40", Offset = "0x29F9140", VA = "0x1829FAB40")]
	public static uint2x2 mul(uint2x3 a, uint3x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x29F7F40", Offset = "0x29F6540", VA = "0x1829F7F40")]
	public static uint2x3 mul(uint2x3 a, uint3x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x29F6040", Offset = "0x29F4640", VA = "0x1829F6040")]
	public static uint2x4 mul(uint2x3 a, uint3x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x29F77B0", Offset = "0x29F5DB0", VA = "0x1829F77B0")]
	public static uint2 mul(uint2x4 a, uint4 b)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x29F80A0", Offset = "0x29F66A0", VA = "0x1829F80A0")]
	public static uint2x2 mul(uint2x4 a, uint4x2 b)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x29F5B20", Offset = "0x29F4120", VA = "0x1829F5B20")]
	public static uint2x3 mul(uint2x4 a, uint4x3 b)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x29FC180", Offset = "0x29FA780", VA = "0x1829FC180")]
	public static uint2x4 mul(uint2x4 a, uint4x4 b)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x29F7DB0", Offset = "0x29F63B0", VA = "0x1829F7DB0")]
	public static uint3 mul(uint3x2 a, uint2 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x29FEB10", Offset = "0x29FD110", VA = "0x1829FEB10")]
	public static uint3x2 mul(uint3x2 a, uint2x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x29F8B60", Offset = "0x29F7160", VA = "0x1829F8B60")]
	public static uint3x3 mul(uint3x2 a, uint2x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x29F9360", Offset = "0x29F7960", VA = "0x1829F9360")]
	public static uint3x4 mul(uint3x2 a, uint2x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x29F92F0", Offset = "0x29F78F0", VA = "0x1829F92F0")]
	public static uint3 mul(uint3x3 a, uint3 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x29F6420", Offset = "0x29F4A20", VA = "0x1829F6420")]
	public static uint3x2 mul(uint3x3 a, uint3x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x29FD090", Offset = "0x29FB690", VA = "0x1829FD090")]
	public static uint3x3 mul(uint3x3 a, uint3x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x29F90B0", Offset = "0x29F76B0", VA = "0x1829F90B0")]
	public static uint3x4 mul(uint3x3 a, uint3x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x29F7830", Offset = "0x29F5E30", VA = "0x1829F7830")]
	public static uint3 mul(uint3x4 a, uint4 b)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x29F5310", Offset = "0x29F3910", VA = "0x1829F5310")]
	public static uint3x2 mul(uint3x4 a, uint4x2 b)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x29FA8A0", Offset = "0x29F8EA0", VA = "0x1829FA8A0")]
	public static uint3x3 mul(uint3x4 a, uint4x3 b)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x29F6A20", Offset = "0x29F5020", VA = "0x1829F6A20")]
	public static uint3x4 mul(uint3x4 a, uint4x4 b)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x29F5A80", Offset = "0x29F4080", VA = "0x1829F5A80")]
	public static uint4 mul(uint4x2 a, uint2 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x29F78D0", Offset = "0x29F5ED0", VA = "0x1829F78D0")]
	public static uint4x2 mul(uint4x2 a, uint2x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x29F9A60", Offset = "0x29F8060", VA = "0x1829F9A60")]
	public static uint4x3 mul(uint4x2 a, uint2x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000700")]
	[Address(RVA = "0x29FB820", Offset = "0x29F9E20", VA = "0x1829FB820")]
	public static uint4x4 mul(uint4x2 a, uint2x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000701")]
	[Address(RVA = "0x29F55D0", Offset = "0x29F3BD0", VA = "0x1829F55D0")]
	public static uint4 mul(uint4x3 a, uint3 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000702")]
	[Address(RVA = "0x29F68F0", Offset = "0x29F4EF0", VA = "0x1829F68F0")]
	public static uint4x2 mul(uint4x3 a, uint3x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000703")]
	[Address(RVA = "0x29F4F60", Offset = "0x29F3560", VA = "0x1829F4F60")]
	public static uint4x3 mul(uint4x3 a, uint3x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000704")]
	[Address(RVA = "0x29F8E30", Offset = "0x29F7430", VA = "0x1829F8E30")]
	public static uint4x4 mul(uint4x3 a, uint3x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000705")]
	[Address(RVA = "0x29FBE20", Offset = "0x29FA420", VA = "0x1829FBE20")]
	public static uint4 mul(uint4x4 a, uint4 b)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000706")]
	[Address(RVA = "0x29F9F40", Offset = "0x29F8540", VA = "0x1829F9F40")]
	public static uint4x2 mul(uint4x4 a, uint4x2 b)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000707")]
	[Address(RVA = "0x29FD570", Offset = "0x29FBB70", VA = "0x1829FD570")]
	public static uint4x3 mul(uint4x4 a, uint4x3 b)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000708")]
	[Address(RVA = "0x29FDCC0", Offset = "0x29FC2C0", VA = "0x1829FDCC0")]
	public static uint4x4 mul(uint4x4 a, uint4x4 b)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000709")]
	[Address(RVA = "0x2989EE0", Offset = "0x29884E0", VA = "0x182989EE0")]
	public static quaternion quaternion(float x, float y, float z, float w)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070A")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public static quaternion quaternion(float4 value)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070B")]
	[Address(RVA = "0x2A021E0", Offset = "0x2A007E0", VA = "0x182A021E0")]
	public static quaternion quaternion(float3x3 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070C")]
	[Address(RVA = "0x2A02190", Offset = "0x2A00790", VA = "0x182A02190")]
	public static quaternion quaternion(float4x4 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070D")]
	[Address(RVA = "0x29D5B70", Offset = "0x29D4170", VA = "0x1829D5B70")]
	public static quaternion conjugate(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070E")]
	[Address(RVA = "0x29EE780", Offset = "0x29ECD80", VA = "0x1829EE780")]
	public static quaternion inverse(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600070F")]
	[Address(RVA = "0x29D8130", Offset = "0x29D6730", VA = "0x1829D8130")]
	public static float dot(quaternion a, quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000710")]
	[Address(RVA = "0x29F0C20", Offset = "0x29EF220", VA = "0x1829F0C20")]
	public static float length(quaternion q)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000711")]
	[Address(RVA = "0x29F0C60", Offset = "0x29EF260", VA = "0x1829F0C60")]
	public static float lengthsq(quaternion q)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000712")]
	[Address(RVA = "0x2A002D0", Offset = "0x29FE8D0", VA = "0x182A002D0")]
	public static quaternion normalize(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000713")]
	[Address(RVA = "0x2A00690", Offset = "0x29FEC90", VA = "0x182A00690")]
	public static quaternion normalizesafe(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000714")]
	[Address(RVA = "0x2A007C0", Offset = "0x29FEDC0", VA = "0x182A007C0")]
	public static quaternion normalizesafe(quaternion q, quaternion defaultvalue)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000715")]
	[Address(RVA = "0x2A0FE40", Offset = "0x2A0E440", VA = "0x182A0FE40")]
	public static quaternion unitexp(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000716")]
	[Address(RVA = "0x29DCAD0", Offset = "0x29DB0D0", VA = "0x1829DCAD0")]
	public static quaternion exp(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000717")]
	[Address(RVA = "0x2A0FF80", Offset = "0x2A0E580", VA = "0x182A0FF80")]
	public static quaternion unitlog(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000718")]
	[Address(RVA = "0x29F27B0", Offset = "0x29F0DB0", VA = "0x1829F27B0")]
	public static quaternion log(quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000719")]
	[Address(RVA = "0x29F74B0", Offset = "0x29F5AB0", VA = "0x1829F74B0")]
	public static quaternion mul(quaternion a, quaternion b)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071A")]
	[Address(RVA = "0x29FECF0", Offset = "0x29FD2F0", VA = "0x1829FECF0")]
	public static float3 mul(quaternion q, float3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071B")]
	[Address(RVA = "0x29FECF0", Offset = "0x29FD2F0", VA = "0x1829FECF0")]
	public static float3 rotate(quaternion q, float3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071C")]
	[Address(RVA = "0x29CADA0", Offset = "0x29C93A0", VA = "0x1829CADA0")]
	public static quaternion nlerp(quaternion q1, quaternion q2, float t)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071D")]
	[Address(RVA = "0x2A09FF0", Offset = "0x2A085F0", VA = "0x182A09FF0")]
	public static quaternion slerp(quaternion q1, quaternion q2, float t)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071E")]
	[Address(RVA = "0x29D19F0", Offset = "0x29CFFF0", VA = "0x1829D19F0")]
	public static float angle(quaternion q1, quaternion q2)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600071F")]
	[Address(RVA = "0x29CB260", Offset = "0x29C9860", VA = "0x1829CB260")]
	public static quaternion rotation(float3x3 m)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000720")]
	[Address(RVA = "0x29CA340", Offset = "0x29C8940", VA = "0x1829CA340")]
	private static float3x3 adj(float3x3 m, out float det)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000721")]
	[Address(RVA = "0x29CA170", Offset = "0x29C8770", VA = "0x1829CA170")]
	private static bool adjInverse(float3x3 m, out float3x3 i, float epsilon = 1E-30f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000722")]
	[Address(RVA = "0x29E5680", Offset = "0x29E3C80", VA = "0x1829E5680")]
	public static uint hash(quaternion q)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000723")]
	[Address(RVA = "0x29E7C90", Offset = "0x29E6290", VA = "0x1829E7C90")]
	public static uint4 hashwide(quaternion q)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000724")]
	[Address(RVA = "0x29E3980", Offset = "0x29E1F80", VA = "0x1829E3980")]
	public static float3 forward(quaternion q)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000725")]
	[Address(RVA = "0x29D0D20", Offset = "0x29CF320", VA = "0x1829D0D20")]
	public static RigidTransform RigidTransform(quaternion rot, float3 pos)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000726")]
	[Address(RVA = "0x29D0D40", Offset = "0x29CF340", VA = "0x1829D0D40")]
	public static RigidTransform RigidTransform(float3x3 rotation, float3 translation)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000727")]
	[Address(RVA = "0x29D0DB0", Offset = "0x29CF3B0", VA = "0x1829D0DB0")]
	public static RigidTransform RigidTransform(float4x4 transform)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000728")]
	[Address(RVA = "0x29EFE90", Offset = "0x29EE490", VA = "0x1829EFE90")]
	public static RigidTransform inverse(RigidTransform t)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000729")]
	[Address(RVA = "0x29FE1C0", Offset = "0x29FC7C0", VA = "0x1829FE1C0")]
	public static RigidTransform mul(RigidTransform a, RigidTransform b)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072A")]
	[Address(RVA = "0x29F5470", Offset = "0x29F3A70", VA = "0x1829F5470")]
	public static float4 mul(RigidTransform a, float4 pos)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072B")]
	[Address(RVA = "0x2A041C0", Offset = "0x2A027C0", VA = "0x182A041C0")]
	public static float3 rotate(RigidTransform a, float3 dir)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072C")]
	[Address(RVA = "0x2A0C400", Offset = "0x2A0AA00", VA = "0x182A0C400")]
	public static float3 transform(RigidTransform a, float3 pos)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072D")]
	[Address(RVA = "0x29E70E0", Offset = "0x29E56E0", VA = "0x1829E70E0")]
	public static uint hash(RigidTransform t)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072E")]
	[Address(RVA = "0x29E7F00", Offset = "0x29E6500", VA = "0x1829E7F00")]
	public static uint4 hashwide(RigidTransform t)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072F")]
	[Address(RVA = "0x29D3AA0", Offset = "0x29D20A0", VA = "0x1829D3AA0")]
	public static uint2 uint2(uint x, uint y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000730")]
	[Address(RVA = "0x29C6810", Offset = "0x29C4E10", VA = "0x1829C6810")]
	public static uint2 uint2(uint2 xy)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000731")]
	[Address(RVA = "0x29EA260", Offset = "0x29E8860", VA = "0x1829EA260")]
	public static uint2 uint2(uint v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000732")]
	[Address(RVA = "0x29EA1E0", Offset = "0x29E87E0", VA = "0x1829EA1E0")]
	public static uint2 uint2(bool v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000733")]
	[Address(RVA = "0x29EA230", Offset = "0x29E8830", VA = "0x1829EA230")]
	public static uint2 uint2(bool2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000734")]
	[Address(RVA = "0x29EA260", Offset = "0x29E8860", VA = "0x1829EA260")]
	public static uint2 uint2(int v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000735")]
	[Address(RVA = "0x29C6810", Offset = "0x29C4E10", VA = "0x1829C6810")]
	public static uint2 uint2(int2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000736")]
	[Address(RVA = "0x2A0E2B0", Offset = "0x2A0C8B0", VA = "0x182A0E2B0")]
	public static uint2 uint2(float v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000737")]
	[Address(RVA = "0x2A0E2F0", Offset = "0x2A0C8F0", VA = "0x182A0E2F0")]
	public static uint2 uint2(float2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000738")]
	[Address(RVA = "0x2A0E270", Offset = "0x2A0C870", VA = "0x182A0E270")]
	public static uint2 uint2(double v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000739")]
	[Address(RVA = "0x2A0E220", Offset = "0x2A0C820", VA = "0x182A0E220")]
	public static uint2 uint2(double2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073A")]
	[Address(RVA = "0x29E58A0", Offset = "0x29E3EA0", VA = "0x1829E58A0")]
	public static uint hash(uint2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073B")]
	[Address(RVA = "0x29E7CF0", Offset = "0x29E62F0", VA = "0x1829E7CF0")]
	public static uint2 hashwide(uint2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073C")]
	[Address(RVA = "0x2A06D70", Offset = "0x2A05370", VA = "0x182A06D70")]
	public static uint shuffle(uint2 left, uint2 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073D")]
	[Address(RVA = "0x2A05CE0", Offset = "0x2A042E0", VA = "0x182A05CE0")]
	public static uint2 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073E")]
	[Address(RVA = "0x2A062E0", Offset = "0x2A048E0", VA = "0x182A062E0")]
	public static uint3 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073F")]
	[Address(RVA = "0x2A07630", Offset = "0x2A05C30", VA = "0x182A07630")]
	public static uint4 shuffle(uint2 left, uint2 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000740")]
	[Address(RVA = "0x29CB7B0", Offset = "0x29C9DB0", VA = "0x1829CB7B0")]
	internal static uint select_shuffle_component(uint2 a, uint2 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000741")]
	[Address(RVA = "0x29DF510", Offset = "0x29DDB10", VA = "0x1829DF510")]
	public static uint2x2 uint2x2(uint2 c0, uint2 c1)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000742")]
	[Address(RVA = "0x29EA360", Offset = "0x29E8960", VA = "0x1829EA360")]
	public static uint2x2 uint2x2(uint m00, uint m01, uint m10, uint m11)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000743")]
	[Address(RVA = "0x29EA330", Offset = "0x29E8930", VA = "0x1829EA330")]
	public static uint2x2 uint2x2(uint v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000744")]
	[Address(RVA = "0x29EA4B0", Offset = "0x29E8AB0", VA = "0x1829EA4B0")]
	public static uint2x2 uint2x2(bool v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000745")]
	[Address(RVA = "0x29EA290", Offset = "0x29E8890", VA = "0x1829EA290")]
	public static uint2x2 uint2x2(bool2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000746")]
	[Address(RVA = "0x29EA330", Offset = "0x29E8930", VA = "0x1829EA330")]
	public static uint2x2 uint2x2(int v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000747")]
	[Address(RVA = "0x29EA420", Offset = "0x29E8A20", VA = "0x1829EA420")]
	public static uint2x2 uint2x2(int2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000748")]
	[Address(RVA = "0x2A0E340", Offset = "0x2A0C940", VA = "0x182A0E340")]
	public static uint2x2 uint2x2(float v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000749")]
	[Address(RVA = "0x2A0E4B0", Offset = "0x2A0CAB0", VA = "0x182A0E4B0")]
	public static uint2x2 uint2x2(float2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074A")]
	[Address(RVA = "0x2A0E3B0", Offset = "0x2A0C9B0", VA = "0x182A0E3B0")]
	public static uint2x2 uint2x2(double v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074B")]
	[Address(RVA = "0x2A0E420", Offset = "0x2A0CA20", VA = "0x182A0E420")]
	public static uint2x2 uint2x2(double2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074C")]
	[Address(RVA = "0x2A0C8F0", Offset = "0x2A0AEF0", VA = "0x182A0C8F0")]
	public static uint2x2 transpose(uint2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074D")]
	[Address(RVA = "0x29E69F0", Offset = "0x29E4FF0", VA = "0x1829E69F0")]
	public static uint hash(uint2x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074E")]
	[Address(RVA = "0x29E7C40", Offset = "0x29E6240", VA = "0x1829E7C40")]
	public static uint2 hashwide(uint2x2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074F")]
	[Address(RVA = "0x27F3660", Offset = "0x27F1C60", VA = "0x1827F3660")]
	public static uint2x3 uint2x3(uint2 c0, uint2 c1, uint2 c2)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000750")]
	[Address(RVA = "0x29EA560", Offset = "0x29E8B60", VA = "0x1829EA560")]
	public static uint2x3 uint2x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000751")]
	[Address(RVA = "0x29EA640", Offset = "0x29E8C40", VA = "0x1829EA640")]
	public static uint2x3 uint2x3(uint v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000752")]
	[Address(RVA = "0x29EA7F0", Offset = "0x29E8DF0", VA = "0x1829EA7F0")]
	public static uint2x3 uint2x3(bool v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000753")]
	[Address(RVA = "0x29EA6D0", Offset = "0x29E8CD0", VA = "0x1829EA6D0")]
	public static uint2x3 uint2x3(bool2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000754")]
	[Address(RVA = "0x29EA640", Offset = "0x29E8C40", VA = "0x1829EA640")]
	public static uint2x3 uint2x3(int v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000755")]
	[Address(RVA = "0x29EA5B0", Offset = "0x29E8BB0", VA = "0x1829EA5B0")]
	public static uint2x3 uint2x3(int2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000756")]
	[Address(RVA = "0x2A0E6B0", Offset = "0x2A0CCB0", VA = "0x182A0E6B0")]
	public static uint2x3 uint2x3(float v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000757")]
	[Address(RVA = "0x2A0E5E0", Offset = "0x2A0CBE0", VA = "0x182A0E5E0")]
	public static uint2x3 uint2x3(float2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000758")]
	[Address(RVA = "0x2A0E540", Offset = "0x2A0CB40", VA = "0x182A0E540")]
	public static uint2x3 uint2x3(double v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000759")]
	[Address(RVA = "0x2A0E750", Offset = "0x2A0CD50", VA = "0x182A0E750")]
	public static uint2x3 uint2x3(double2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075A")]
	[Address(RVA = "0x2A0D680", Offset = "0x2A0BC80", VA = "0x182A0D680")]
	public static uint3x2 transpose(uint2x3 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075B")]
	[Address(RVA = "0x29E5FD0", Offset = "0x29E45D0", VA = "0x1829E5FD0")]
	public static uint hash(uint2x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075C")]
	[Address(RVA = "0x29E9D20", Offset = "0x29E8320", VA = "0x1829E9D20")]
	public static uint2 hashwide(uint2x3 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075D")]
	[Address(RVA = "0x2985A50", Offset = "0x2984050", VA = "0x182985A50")]
	public static uint2x4 uint2x4(uint2 c0, uint2 c1, uint2 c2, uint2 c3)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075E")]
	[Address(RVA = "0x29EAA60", Offset = "0x29E9060", VA = "0x1829EAA60")]
	public static uint2x4 uint2x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600075F")]
	[Address(RVA = "0x29EA970", Offset = "0x29E8F70", VA = "0x1829EA970")]
	public static uint2x4 uint2x4(uint v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000760")]
	[Address(RVA = "0x29EAAC0", Offset = "0x29E90C0", VA = "0x1829EAAC0")]
	public static uint2x4 uint2x4(bool v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000761")]
	[Address(RVA = "0x29EA8C0", Offset = "0x29E8EC0", VA = "0x1829EA8C0")]
	public static uint2x4 uint2x4(bool2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000762")]
	[Address(RVA = "0x29EA970", Offset = "0x29E8F70", VA = "0x1829EA970")]
	public static uint2x4 uint2x4(int v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000763")]
	[Address(RVA = "0x29EA9C0", Offset = "0x29E8FC0", VA = "0x1829EA9C0")]
	public static uint2x4 uint2x4(int2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000764")]
	[Address(RVA = "0x2A0E920", Offset = "0x2A0CF20", VA = "0x182A0E920")]
	public static uint2x4 uint2x4(float v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000765")]
	[Address(RVA = "0x2A0E820", Offset = "0x2A0CE20", VA = "0x182A0E820")]
	public static uint2x4 uint2x4(float2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000766")]
	[Address(RVA = "0x2A0E9F0", Offset = "0x2A0CFF0", VA = "0x182A0E9F0")]
	public static uint2x4 uint2x4(double v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000767")]
	[Address(RVA = "0x2A0EAC0", Offset = "0x2A0D0C0", VA = "0x182A0EAC0")]
	public static uint2x4 uint2x4(double2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000768")]
	[Address(RVA = "0x2A0CAF0", Offset = "0x2A0B0F0", VA = "0x182A0CAF0")]
	public static uint4x2 transpose(uint2x4 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000769")]
	[Address(RVA = "0x29E52F0", Offset = "0x29E38F0", VA = "0x1829E52F0")]
	public static uint hash(uint2x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076A")]
	[Address(RVA = "0x29E91D0", Offset = "0x29E77D0", VA = "0x1829E91D0")]
	public static uint2 hashwide(uint2x4 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076B")]
	[Address(RVA = "0x29D3B00", Offset = "0x29D2100", VA = "0x1829D3B00")]
	public static uint3 uint3(uint x, uint y, uint z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076C")]
	[Address(RVA = "0x29EADB0", Offset = "0x29E93B0", VA = "0x1829EADB0")]
	public static uint3 uint3(uint x, uint2 yz)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076D")]
	[Address(RVA = "0x29EADD0", Offset = "0x29E93D0", VA = "0x1829EADD0")]
	public static uint3 uint3(uint2 xy, uint z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076E")]
	[Address(RVA = "0x29E0200", Offset = "0x29DE800", VA = "0x1829E0200")]
	public static uint3 uint3(uint3 xyz)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076F")]
	[Address(RVA = "0x29EAD80", Offset = "0x29E9380", VA = "0x1829EAD80")]
	public static uint3 uint3(uint v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000770")]
	[Address(RVA = "0x29EAD50", Offset = "0x29E9350", VA = "0x1829EAD50")]
	public static uint3 uint3(bool v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000771")]
	[Address(RVA = "0x29EAE30", Offset = "0x29E9430", VA = "0x1829EAE30")]
	public static uint3 uint3(bool3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000772")]
	[Address(RVA = "0x29EAD80", Offset = "0x29E9380", VA = "0x1829EAD80")]
	public static uint3 uint3(int v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000773")]
	[Address(RVA = "0x29E0200", Offset = "0x29DE800", VA = "0x1829E0200")]
	public static uint3 uint3(int3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000774")]
	[Address(RVA = "0x2A0ECD0", Offset = "0x2A0D2D0", VA = "0x182A0ECD0")]
	public static uint3 uint3(float v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000775")]
	[Address(RVA = "0x2A0EBD0", Offset = "0x2A0D1D0", VA = "0x182A0EBD0")]
	public static uint3 uint3(float3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000776")]
	[Address(RVA = "0x2A0EC90", Offset = "0x2A0D290", VA = "0x182A0EC90")]
	public static uint3 uint3(double v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000777")]
	[Address(RVA = "0x2A0EC30", Offset = "0x2A0D230", VA = "0x182A0EC30")]
	public static uint3 uint3(double3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000778")]
	[Address(RVA = "0x29E53A0", Offset = "0x29E39A0", VA = "0x1829E53A0")]
	public static uint hash(uint3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000779")]
	[Address(RVA = "0x29E9710", Offset = "0x29E7D10", VA = "0x1829E9710")]
	public static uint3 hashwide(uint3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077A")]
	[Address(RVA = "0x2A07880", Offset = "0x2A05E80", VA = "0x182A07880")]
	public static uint shuffle(uint3 left, uint3 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077B")]
	[Address(RVA = "0x2A06C60", Offset = "0x2A05260", VA = "0x182A06C60")]
	public static uint2 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077C")]
	[Address(RVA = "0x2A07790", Offset = "0x2A05D90", VA = "0x182A07790")]
	public static uint3 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077D")]
	[Address(RVA = "0x2A06FB0", Offset = "0x2A055B0", VA = "0x182A06FB0")]
	public static uint4 shuffle(uint3 left, uint3 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077E")]
	[Address(RVA = "0x29CBF40", Offset = "0x29CA540", VA = "0x1829CBF40")]
	internal static uint select_shuffle_component(uint3 a, uint3 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077F")]
	[Address(RVA = "0x29E05F0", Offset = "0x29DEBF0", VA = "0x1829E05F0")]
	public static uint3x2 uint3x2(uint3 c0, uint3 c1)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000780")]
	[Address(RVA = "0x29EAFA0", Offset = "0x29E95A0", VA = "0x1829EAFA0")]
	public static uint3x2 uint3x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000781")]
	[Address(RVA = "0x29EAFD0", Offset = "0x29E95D0", VA = "0x1829EAFD0")]
	public static uint3x2 uint3x2(uint v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000782")]
	[Address(RVA = "0x29EAFF0", Offset = "0x29E95F0", VA = "0x1829EAFF0")]
	public static uint3x2 uint3x2(bool v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000783")]
	[Address(RVA = "0x29EB030", Offset = "0x29E9630", VA = "0x1829EB030")]
	public static uint3x2 uint3x2(bool3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000784")]
	[Address(RVA = "0x29EAFD0", Offset = "0x29E95D0", VA = "0x1829EAFD0")]
	public static uint3x2 uint3x2(int v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000785")]
	[Address(RVA = "0x29EAED0", Offset = "0x29E94D0", VA = "0x1829EAED0")]
	public static uint3x2 uint3x2(int3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000786")]
	[Address(RVA = "0x2A0EF20", Offset = "0x2A0D520", VA = "0x182A0EF20")]
	public static uint3x2 uint3x2(float v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000787")]
	[Address(RVA = "0x2A0EE50", Offset = "0x2A0D450", VA = "0x182A0EE50")]
	public static uint3x2 uint3x2(float3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000788")]
	[Address(RVA = "0x2A0ED10", Offset = "0x2A0D310", VA = "0x182A0ED10")]
	public static uint3x2 uint3x2(double v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000789")]
	[Address(RVA = "0x2A0ED90", Offset = "0x2A0D390", VA = "0x182A0ED90")]
	public static uint3x2 uint3x2(double3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078A")]
	[Address(RVA = "0x2A0C920", Offset = "0x2A0AF20", VA = "0x182A0C920")]
	public static uint2x3 transpose(uint3x2 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078B")]
	[Address(RVA = "0x29E56C0", Offset = "0x29E3CC0", VA = "0x1829E56C0")]
	public static uint hash(uint3x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078C")]
	[Address(RVA = "0x29E8EB0", Offset = "0x29E74B0", VA = "0x1829E8EB0")]
	public static uint3 hashwide(uint3x2 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078D")]
	[Address(RVA = "0x29E0C70", Offset = "0x29DF270", VA = "0x1829E0C70")]
	public static uint3x3 uint3x3(uint3 c0, uint3 c1, uint3 c2)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078E")]
	[Address(RVA = "0x29EB300", Offset = "0x29E9900", VA = "0x1829EB300")]
	public static uint3x3 uint3x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078F")]
	[Address(RVA = "0x29EB110", Offset = "0x29E9710", VA = "0x1829EB110")]
	public static uint3x3 uint3x3(uint v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000790")]
	[Address(RVA = "0x29EB450", Offset = "0x29E9A50", VA = "0x1829EB450")]
	public static uint3x3 uint3x3(bool v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000791")]
	[Address(RVA = "0x29EB390", Offset = "0x29E9990", VA = "0x1829EB390")]
	public static uint3x3 uint3x3(bool3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000792")]
	[Address(RVA = "0x29EB110", Offset = "0x29E9710", VA = "0x1829EB110")]
	public static uint3x3 uint3x3(int v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000793")]
	[Address(RVA = "0x29EB180", Offset = "0x29E9780", VA = "0x1829EB180")]
	public static uint3x3 uint3x3(int3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000794")]
	[Address(RVA = "0x2A0F160", Offset = "0x2A0D760", VA = "0x182A0F160")]
	public static uint3x3 uint3x3(float v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000795")]
	[Address(RVA = "0x2A0F050", Offset = "0x2A0D650", VA = "0x182A0F050")]
	public static uint3x3 uint3x3(float3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000796")]
	[Address(RVA = "0x2A0EFA0", Offset = "0x2A0D5A0", VA = "0x182A0EFA0")]
	public static uint3x3 uint3x3(double v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000797")]
	[Address(RVA = "0x2A0F210", Offset = "0x2A0D810", VA = "0x182A0F210")]
	public static uint3x3 uint3x3(double3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000798")]
	[Address(RVA = "0x2A0CEB0", Offset = "0x2A0B4B0", VA = "0x182A0CEB0")]
	public static uint3x3 transpose(uint3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000799")]
	[Address(RVA = "0x29E6B30", Offset = "0x29E5130", VA = "0x1829E6B30")]
	public static uint hash(uint3x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079A")]
	[Address(RVA = "0x29E93D0", Offset = "0x29E79D0", VA = "0x1829E93D0")]
	public static uint3 hashwide(uint3x3 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079B")]
	[Address(RVA = "0x29E14D0", Offset = "0x29DFAD0", VA = "0x1829E14D0")]
	public static uint3x4 uint3x4(uint3 c0, uint3 c1, uint3 c2, uint3 c3)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079C")]
	[Address(RVA = "0x29EB810", Offset = "0x29E9E10", VA = "0x1829EB810")]
	public static uint3x4 uint3x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079D")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static uint3x4 uint3x4(uint v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079E")]
	[Address(RVA = "0x29EB4A0", Offset = "0x29E9AA0", VA = "0x1829EB4A0")]
	public static uint3x4 uint3x4(bool v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600079F")]
	[Address(RVA = "0x29EB590", Offset = "0x29E9B90", VA = "0x1829EB590")]
	public static uint3x4 uint3x4(bool3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static uint3x4 uint3x4(int v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x29EB860", Offset = "0x29E9E60", VA = "0x1829EB860")]
	public static uint3x4 uint3x4(int3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x2A0F4C0", Offset = "0x2A0DAC0", VA = "0x182A0F4C0")]
	public static uint3x4 uint3x4(float v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x2A0F470", Offset = "0x2A0DA70", VA = "0x182A0F470")]
	public static uint3x4 uint3x4(float3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x2A0F320", Offset = "0x2A0D920", VA = "0x182A0F320")]
	public static uint3x4 uint3x4(double v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x2A0F400", Offset = "0x2A0DA00", VA = "0x182A0F400")]
	public static uint3x4 uint3x4(double3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x2A0CA20", Offset = "0x2A0B020", VA = "0x182A0CA20")]
	public static uint4x3 transpose(uint3x4 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x29E6960", Offset = "0x29E4F60", VA = "0x1829E6960")]
	public static uint hash(uint3x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x29E9BD0", Offset = "0x29E81D0", VA = "0x1829E9BD0")]
	public static uint3 hashwide(uint3x4 v)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x298EBF0", Offset = "0x298D1F0", VA = "0x18298EBF0")]
	public static uint4 uint4(uint x, uint y, uint z, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x29EBA00", Offset = "0x29EA000", VA = "0x1829EBA00")]
	public static uint4 uint4(uint x, uint y, uint2 zw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x29EBA60", Offset = "0x29EA060", VA = "0x1829EBA60")]
	public static uint4 uint4(uint x, uint2 yz, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x29EB950", Offset = "0x29E9F50", VA = "0x1829EB950")]
	public static uint4 uint4(uint x, uint3 yzw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x29EBA20", Offset = "0x29EA020", VA = "0x1829EBA20")]
	public static uint4 uint4(uint2 xy, uint z, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x29C6830", Offset = "0x29C4E30", VA = "0x1829C6830")]
	public static uint4 uint4(uint2 xy, uint2 zw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x29EBA40", Offset = "0x29EA040", VA = "0x1829EBA40")]
	public static uint4 uint4(uint3 xyz, uint w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static uint4 uint4(uint4 xyzw)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x298EA40", Offset = "0x298D040", VA = "0x18298EA40")]
	public static uint4 uint4(uint v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x29EB910", Offset = "0x29E9F10", VA = "0x1829EB910")]
	public static uint4 uint4(bool v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x29EB970", Offset = "0x29E9F70", VA = "0x1829EB970")]
	public static uint4 uint4(bool4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x298EA40", Offset = "0x298D040", VA = "0x18298EA40")]
	public static uint4 uint4(int v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static uint4 uint4(int4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x2A0F610", Offset = "0x2A0DC10", VA = "0x182A0F610")]
	public static uint4 uint4(float v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x2A0F6B0", Offset = "0x2A0DCB0", VA = "0x182A0F6B0")]
	public static uint4 uint4(float4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x2A0F660", Offset = "0x2A0DC60", VA = "0x182A0F660")]
	public static uint4 uint4(double v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x2A0F5A0", Offset = "0x2A0DBA0", VA = "0x182A0F5A0")]
	public static uint4 uint4(double4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x29E4CE0", Offset = "0x29E32E0", VA = "0x1829E4CE0")]
	public static uint hash(uint4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x29E7C00", Offset = "0x29E6200", VA = "0x1829E7C00")]
	public static uint4 hashwide(uint4 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x2A060E0", Offset = "0x2A046E0", VA = "0x182A060E0")]
	public static uint shuffle(uint4 left, uint4 right, ShuffleComponent x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x2A05B00", Offset = "0x2A04100", VA = "0x182A05B00")]
	public static uint2 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x2A067C0", Offset = "0x2A04DC0", VA = "0x182A067C0")]
	public static uint3 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x2A07270", Offset = "0x2A05870", VA = "0x182A07270")]
	public static uint4 shuffle(uint4 left, uint4 right, ShuffleComponent x, ShuffleComponent y, ShuffleComponent z, ShuffleComponent w)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x29CC490", Offset = "0x29CAA90", VA = "0x1829CC490")]
	internal static uint select_shuffle_component(uint4 a, uint4 b, ShuffleComponent component)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x2985BA0", Offset = "0x29841A0", VA = "0x182985BA0")]
	public static uint4x2 uint4x2(uint4 c0, uint4 c1)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x29EBD10", Offset = "0x29EA310", VA = "0x1829EBD10")]
	public static uint4x2 uint4x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21, uint m30, uint m31)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x29EBB30", Offset = "0x29EA130", VA = "0x1829EBB30")]
	public static uint4x2 uint4x2(uint v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x29EBBD0", Offset = "0x29EA1D0", VA = "0x1829EBBD0")]
	public static uint4x2 uint4x2(bool v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x29EBC90", Offset = "0x29EA290", VA = "0x1829EBC90")]
	public static uint4x2 uint4x2(bool4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x29EBB30", Offset = "0x29EA130", VA = "0x1829EBB30")]
	public static uint4x2 uint4x2(int v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x29EBB50", Offset = "0x29EA150", VA = "0x1829EBB50")]
	public static uint4x2 uint4x2(int4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x2A0F720", Offset = "0x2A0DD20", VA = "0x182A0F720")]
	public static uint4x2 uint4x2(float v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x2A0F8C0", Offset = "0x2A0DEC0", VA = "0x182A0F8C0")]
	public static uint4x2 uint4x2(float4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x2A0F9B0", Offset = "0x2A0DFB0", VA = "0x182A0F9B0")]
	public static uint4x2 uint4x2(double v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x2A0F7D0", Offset = "0x2A0DDD0", VA = "0x182A0F7D0")]
	public static uint4x2 uint4x2(double4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x2A0C970", Offset = "0x2A0AF70", VA = "0x182A0C970")]
	public static uint2x4 transpose(uint4x2 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x29E6C20", Offset = "0x29E5220", VA = "0x1829E6C20")]
	public static uint hash(uint4x2 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x29E7540", Offset = "0x29E5B40", VA = "0x1829E7540")]
	public static uint4 hashwide(uint4x2 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x29E2460", Offset = "0x29E0A60", VA = "0x1829E2460")]
	public static uint4x3 uint4x3(uint4 c0, uint4 c1, uint4 c2)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x29EBF90", Offset = "0x29EA590", VA = "0x1829EBF90")]
	public static uint4x3 uint4x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22, uint m30, uint m31, uint m32)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static uint4x3 uint4x3(uint v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x29EC050", Offset = "0x29EA650", VA = "0x1829EC050")]
	public static uint4x3 uint4x3(bool v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x29EBEA0", Offset = "0x29EA4A0", VA = "0x1829EBEA0")]
	public static uint4x3 uint4x3(bool4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static uint4x3 uint4x3(int v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x29EBFE0", Offset = "0x29EA5E0", VA = "0x1829EBFE0")]
	public static uint4x3 uint4x3(int4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x2A0FB20", Offset = "0x2A0E120", VA = "0x182A0FB20")]
	public static uint4x3 uint4x3(float v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x2A0FA60", Offset = "0x2A0E060", VA = "0x182A0FA60")]
	public static uint4x3 uint4x3(float4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x2A0FC10", Offset = "0x2A0E210", VA = "0x182A0FC10")]
	public static uint4x3 uint4x3(double v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x2A0FAB0", Offset = "0x2A0E0B0", VA = "0x182A0FAB0")]
	public static uint4x3 uint4x3(double4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x2A0CD40", Offset = "0x2A0B340", VA = "0x182A0CD40")]
	public static uint3x4 transpose(uint4x3 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x29E5C20", Offset = "0x29E4220", VA = "0x1829E5C20")]
	public static uint hash(uint4x3 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x29E8F10", Offset = "0x29E7510", VA = "0x1829E8F10")]
	public static uint4 hashwide(uint4x3 v)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x29E2900", Offset = "0x29E0F00", VA = "0x1829E2900")]
	public static uint4x4 uint4x4(uint4 c0, uint4 c1, uint4 c2, uint4 c3)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x29EC670", Offset = "0x29EAC70", VA = "0x1829EC670")]
	public static uint4x4 uint4x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23, uint m30, uint m31, uint m32, uint m33)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x29EC2C0", Offset = "0x29EA8C0", VA = "0x1829EC2C0")]
	public static uint4x4 uint4x4(uint v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x29EC160", Offset = "0x29EA760", VA = "0x1829EC160")]
	public static uint4x4 uint4x4(bool v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x29EC350", Offset = "0x29EA950", VA = "0x1829EC350")]
	public static uint4x4 uint4x4(bool4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x29EC2C0", Offset = "0x29EA8C0", VA = "0x1829EC2C0")]
	public static uint4x4 uint4x4(int v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x29EC470", Offset = "0x29EAA70", VA = "0x1829EC470")]
	public static uint4x4 uint4x4(int4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x2A0FDE0", Offset = "0x2A0E3E0", VA = "0x182A0FDE0")]
	public static uint4x4 uint4x4(float v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x2A0FD00", Offset = "0x2A0E300", VA = "0x182A0FD00")]
	public static uint4x4 uint4x4(float4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x2A0FE10", Offset = "0x2A0E410", VA = "0x182A0FE10")]
	public static uint4x4 uint4x4(double v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x2A0FD60", Offset = "0x2A0E360", VA = "0x182A0FD60")]
	public static uint4x4 uint4x4(double4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x2A0D120", Offset = "0x2A0B720", VA = "0x182A0D120")]
	public static uint4x4 transpose(uint4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x29E58C0", Offset = "0x29E3EC0", VA = "0x1829E58C0")]
	public static uint hash(uint4x4 v)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x29E7AC0", Offset = "0x29E60C0", VA = "0x1829E7AC0")]
	public static uint4 hashwide(uint4x4 v)
	{
		return default(uint4);
	}
}
