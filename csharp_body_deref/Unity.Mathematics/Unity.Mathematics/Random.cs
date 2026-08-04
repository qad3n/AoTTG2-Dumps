// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.Random
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000051")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct Random
{
	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x0")]
	public uint state;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E37")]
	[Address(RVA = "0x4B1DB00", Offset = "0x4B1DB00", VA = "0x4B1DB00")]
	public Random(uint seed)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E38")]
	[Address(RVA = "0x4B1DB20", Offset = "0x4B1DB20", VA = "0x4B1DB20")]
	public static Random CreateFromIndex(uint index)
	{
		return default(Random);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E39")]
	[Address(RVA = "0x4B1DB60", Offset = "0x4B1DB60", VA = "0x4B1DB60")]
	internal static uint WangHash(uint n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3A")]
	[Address(RVA = "0x4B1DB90", Offset = "0x4B1DB90", VA = "0x4B1DB90")]
	public void InitState(uint seed = 1851936439u)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3B")]
	[Address(RVA = "0x4B1DBB0", Offset = "0x4B1DBB0", VA = "0x4B1DBB0")]
	public bool NextBool()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3C")]
	[Address(RVA = "0x4B1DBD0", Offset = "0x4B1DBD0", VA = "0x4B1DBD0")]
	public bool2 NextBool2()
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3D")]
	[Address(RVA = "0x4B1DC00", Offset = "0x4B1DC00", VA = "0x4B1DC00")]
	public bool3 NextBool3()
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3E")]
	[Address(RVA = "0x4B1DC50", Offset = "0x4B1DC50", VA = "0x4B1DC50")]
	public bool4 NextBool4()
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3F")]
	[Address(RVA = "0x4B1DC90", Offset = "0x4B1DC90", VA = "0x4B1DC90")]
	public int NextInt()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E40")]
	[Address(RVA = "0x4B1DCB0", Offset = "0x4B1DCB0", VA = "0x4B1DCB0")]
	public int2 NextInt2()
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E41")]
	[Address(RVA = "0x4B1DD00", Offset = "0x4B1DD00", VA = "0x4B1DD00")]
	public int3 NextInt3()
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E42")]
	[Address(RVA = "0x4B1DD70", Offset = "0x4B1DD70", VA = "0x4B1DD70")]
	public int4 NextInt4()
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E43")]
	[Address(RVA = "0x4B1DE00", Offset = "0x4B1DE00", VA = "0x4B1DE00")]
	public int NextInt(int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E44")]
	[Address(RVA = "0x4B1DE30", Offset = "0x4B1DE30", VA = "0x4B1DE30")]
	public int2 NextInt2(int2 max)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E45")]
	[Address(RVA = "0x4B1DE90", Offset = "0x4B1DE90", VA = "0x4B1DE90")]
	public int3 NextInt3(int3 max)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E46")]
	[Address(RVA = "0x4B1DF10", Offset = "0x4B1DF10", VA = "0x4B1DF10")]
	public int4 NextInt4(int4 max)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E47")]
	[Address(RVA = "0x4B1DFC0", Offset = "0x4B1DFC0", VA = "0x4B1DFC0")]
	public int NextInt(int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E48")]
	[Address(RVA = "0x4B1DFF0", Offset = "0x4B1DFF0", VA = "0x4B1DFF0")]
	public int2 NextInt2(int2 min, int2 max)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E49")]
	[Address(RVA = "0x4B1E070", Offset = "0x4B1E070", VA = "0x4B1E070")]
	public int3 NextInt3(int3 min, int3 max)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4A")]
	[Address(RVA = "0x4B1E120", Offset = "0x4B1E120", VA = "0x4B1E120")]
	public int4 NextInt4(int4 min, int4 max)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4B")]
	[Address(RVA = "0x4B1E200", Offset = "0x4B1E200", VA = "0x4B1E200")]
	public uint NextUInt()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4C")]
	[Address(RVA = "0x4B1E220", Offset = "0x4B1E220", VA = "0x4B1E220")]
	public uint2 NextUInt2()
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4D")]
	[Address(RVA = "0x4B1E260", Offset = "0x4B1E260", VA = "0x4B1E260")]
	public uint3 NextUInt3()
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4E")]
	[Address(RVA = "0x4B1E2C0", Offset = "0x4B1E2C0", VA = "0x4B1E2C0")]
	public uint4 NextUInt4()
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4F")]
	[Address(RVA = "0x4B1E340", Offset = "0x4B1E340", VA = "0x4B1E340")]
	public uint NextUInt(uint max)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E50")]
	[Address(RVA = "0x4B1E370", Offset = "0x4B1E370", VA = "0x4B1E370")]
	public uint2 NextUInt2(uint2 max)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E51")]
	[Address(RVA = "0x4B1E3D0", Offset = "0x4B1E3D0", VA = "0x4B1E3D0")]
	public uint3 NextUInt3(uint3 max)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E52")]
	[Address(RVA = "0x4B1E450", Offset = "0x4B1E450", VA = "0x4B1E450")]
	public uint4 NextUInt4(uint4 max)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E53")]
	[Address(RVA = "0x4B1E500", Offset = "0x4B1E500", VA = "0x4B1E500")]
	public uint NextUInt(uint min, uint max)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E54")]
	[Address(RVA = "0x4B1E530", Offset = "0x4B1E530", VA = "0x4B1E530")]
	public uint2 NextUInt2(uint2 min, uint2 max)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E55")]
	[Address(RVA = "0x4B1E5B0", Offset = "0x4B1E5B0", VA = "0x4B1E5B0")]
	public uint3 NextUInt3(uint3 min, uint3 max)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E56")]
	[Address(RVA = "0x4B1E660", Offset = "0x4B1E660", VA = "0x4B1E660")]
	public uint4 NextUInt4(uint4 min, uint4 max)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E57")]
	[Address(RVA = "0x4B1E740", Offset = "0x4B1E740", VA = "0x4B1E740")]
	public float NextFloat()
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E58")]
	[Address(RVA = "0x4B1E770", Offset = "0x4B1E770", VA = "0x4B1E770")]
	public float2 NextFloat2()
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E59")]
	[Address(RVA = "0x4B1E7D0", Offset = "0x4B1E7D0", VA = "0x4B1E7D0")]
	public float3 NextFloat3()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5A")]
	[Address(RVA = "0x4B1E850", Offset = "0x4B1E850", VA = "0x4B1E850")]
	public float4 NextFloat4()
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5B")]
	[Address(RVA = "0x4B1E900", Offset = "0x4B1E900", VA = "0x4B1E900")]
	public float NextFloat(float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5C")]
	[Address(RVA = "0x4B1E940", Offset = "0x4B1E940", VA = "0x4B1E940")]
	public float2 NextFloat2(float2 max)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5D")]
	[Address(RVA = "0x4B1E9A0", Offset = "0x4B1E9A0", VA = "0x4B1E9A0")]
	public float3 NextFloat3(float3 max)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5E")]
	[Address(RVA = "0x4B1EA30", Offset = "0x4B1EA30", VA = "0x4B1EA30")]
	public float4 NextFloat4(float4 max)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5F")]
	[Address(RVA = "0x4B1EAE0", Offset = "0x4B1EAE0", VA = "0x4B1EAE0")]
	public float NextFloat(float min, float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E60")]
	[Address(RVA = "0x4B1EB20", Offset = "0x4B1EB20", VA = "0x4B1EB20")]
	public float2 NextFloat2(float2 min, float2 max)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E61")]
	[Address(RVA = "0x4B1EB80", Offset = "0x4B1EB80", VA = "0x4B1EB80")]
	public float3 NextFloat3(float3 min, float3 max)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E62")]
	[Address(RVA = "0x4B1EC20", Offset = "0x4B1EC20", VA = "0x4B1EC20")]
	public float4 NextFloat4(float4 min, float4 max)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E63")]
	[Address(RVA = "0x4B1ECE0", Offset = "0x4B1ECE0", VA = "0x4B1ECE0")]
	public double NextDouble()
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E64")]
	[Address(RVA = "0x4B1ED30", Offset = "0x4B1ED30", VA = "0x4B1ED30")]
	public double2 NextDouble2()
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E65")]
	[Address(RVA = "0x4B1EDD0", Offset = "0x4B1EDD0", VA = "0x4B1EDD0")]
	public double3 NextDouble3()
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E66")]
	[Address(RVA = "0x4B1EEC0", Offset = "0x4B1EEC0", VA = "0x4B1EEC0")]
	public double4 NextDouble4()
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E67")]
	[Address(RVA = "0x4B1F000", Offset = "0x4B1F000", VA = "0x4B1F000")]
	public double NextDouble(double max)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E68")]
	[Address(RVA = "0x4B1F060", Offset = "0x4B1F060", VA = "0x4B1F060")]
	public double2 NextDouble2(double2 max)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E69")]
	[Address(RVA = "0x4B1F100", Offset = "0x4B1F100", VA = "0x4B1F100")]
	public double3 NextDouble3(double3 max)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6A")]
	[Address(RVA = "0x4B1F210", Offset = "0x4B1F210", VA = "0x4B1F210")]
	public double4 NextDouble4(double4 max)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6B")]
	[Address(RVA = "0x4B1F370", Offset = "0x4B1F370", VA = "0x4B1F370")]
	public double NextDouble(double min, double max)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6C")]
	[Address(RVA = "0x4B1F3D0", Offset = "0x4B1F3D0", VA = "0x4B1F3D0")]
	public double2 NextDouble2(double2 min, double2 max)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6D")]
	[Address(RVA = "0x4B1F490", Offset = "0x4B1F490", VA = "0x4B1F490")]
	public double3 NextDouble3(double3 min, double3 max)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6E")]
	[Address(RVA = "0x4B1F5D0", Offset = "0x4B1F5D0", VA = "0x4B1F5D0")]
	public double4 NextDouble4(double4 min, double4 max)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6F")]
	[Address(RVA = "0x4B1F760", Offset = "0x4B1F760", VA = "0x4B1F760")]
	public float2 NextFloat2Direction()
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E70")]
	[Address(RVA = "0x4B1F860", Offset = "0x4B1F860", VA = "0x4B1F860")]
	public double2 NextDouble2Direction()
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E71")]
	[Address(RVA = "0x4B1F980", Offset = "0x4B1F980", VA = "0x4B1F980")]
	public float3 NextFloat3Direction()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E72")]
	[Address(RVA = "0x4B1FB90", Offset = "0x4B1FB90", VA = "0x4B1FB90")]
	public double3 NextDouble3Direction()
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E73")]
	[Address(RVA = "0x4B1FDF0", Offset = "0x4B1FDF0", VA = "0x4B1FDF0")]
	public quaternion NextQuaternionRotation()
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E74")]
	[Address(RVA = "0x4B20040", Offset = "0x4B20040", VA = "0x4B20040")]
	private uint NextState()
	{
		return default(uint);
	}

	[Token(Token = "0x6001E75")]
	[Address(RVA = "0x4B20060", Offset = "0x4B20060", VA = "0x4B20060")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckInitState()
	{
	}

	[Token(Token = "0x6001E76")]
	[Address(RVA = "0x4B20070", Offset = "0x4B20070", VA = "0x4B20070")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private static void CheckIndexForHash(uint index)
	{
	}

	[Token(Token = "0x6001E77")]
	[Address(RVA = "0x4B200C0", Offset = "0x4B200C0", VA = "0x4B200C0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckState()
	{
	}

	[Token(Token = "0x6001E78")]
	[Address(RVA = "0x4B200D0", Offset = "0x4B200D0", VA = "0x4B200D0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextIntMax(int max)
	{
	}

	[Token(Token = "0x6001E79")]
	[Address(RVA = "0x4B200E0", Offset = "0x4B200E0", VA = "0x4B200E0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextIntMinMax(int min, int max)
	{
	}

	[Token(Token = "0x6001E7A")]
	[Address(RVA = "0x4B200F0", Offset = "0x4B200F0", VA = "0x4B200F0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextUIntMinMax(uint min, uint max)
	{
	}
}
