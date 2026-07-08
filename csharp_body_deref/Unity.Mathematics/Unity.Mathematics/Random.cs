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
	[Address(RVA = "0x47FDC80", Offset = "0x47FDC80", VA = "0x47FDC80")]
	public Random(uint seed)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E38")]
	[Address(RVA = "0x47FDCA0", Offset = "0x47FDCA0", VA = "0x47FDCA0")]
	public static Random CreateFromIndex(uint index)
	{
		return default(Random);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E39")]
	[Address(RVA = "0x47FDCE0", Offset = "0x47FDCE0", VA = "0x47FDCE0")]
	internal static uint WangHash(uint n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3A")]
	[Address(RVA = "0x47FDD10", Offset = "0x47FDD10", VA = "0x47FDD10")]
	public void InitState(uint seed = 1851936439u)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3B")]
	[Address(RVA = "0x47FDD30", Offset = "0x47FDD30", VA = "0x47FDD30")]
	public bool NextBool()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3C")]
	[Address(RVA = "0x47FDD50", Offset = "0x47FDD50", VA = "0x47FDD50")]
	public bool2 NextBool2()
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3D")]
	[Address(RVA = "0x47FDD80", Offset = "0x47FDD80", VA = "0x47FDD80")]
	public bool3 NextBool3()
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3E")]
	[Address(RVA = "0x47FDDD0", Offset = "0x47FDDD0", VA = "0x47FDDD0")]
	public bool4 NextBool4()
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3F")]
	[Address(RVA = "0x47FDE10", Offset = "0x47FDE10", VA = "0x47FDE10")]
	public int NextInt()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E40")]
	[Address(RVA = "0x47FDE30", Offset = "0x47FDE30", VA = "0x47FDE30")]
	public int2 NextInt2()
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E41")]
	[Address(RVA = "0x47FDE80", Offset = "0x47FDE80", VA = "0x47FDE80")]
	public int3 NextInt3()
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E42")]
	[Address(RVA = "0x47FDEF0", Offset = "0x47FDEF0", VA = "0x47FDEF0")]
	public int4 NextInt4()
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E43")]
	[Address(RVA = "0x47FDF80", Offset = "0x47FDF80", VA = "0x47FDF80")]
	public int NextInt(int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E44")]
	[Address(RVA = "0x47FDFB0", Offset = "0x47FDFB0", VA = "0x47FDFB0")]
	public int2 NextInt2(int2 max)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E45")]
	[Address(RVA = "0x47FE010", Offset = "0x47FE010", VA = "0x47FE010")]
	public int3 NextInt3(int3 max)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E46")]
	[Address(RVA = "0x47FE090", Offset = "0x47FE090", VA = "0x47FE090")]
	public int4 NextInt4(int4 max)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E47")]
	[Address(RVA = "0x47FE140", Offset = "0x47FE140", VA = "0x47FE140")]
	public int NextInt(int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E48")]
	[Address(RVA = "0x47FE170", Offset = "0x47FE170", VA = "0x47FE170")]
	public int2 NextInt2(int2 min, int2 max)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E49")]
	[Address(RVA = "0x47FE1F0", Offset = "0x47FE1F0", VA = "0x47FE1F0")]
	public int3 NextInt3(int3 min, int3 max)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4A")]
	[Address(RVA = "0x47FE2A0", Offset = "0x47FE2A0", VA = "0x47FE2A0")]
	public int4 NextInt4(int4 min, int4 max)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4B")]
	[Address(RVA = "0x47FE380", Offset = "0x47FE380", VA = "0x47FE380")]
	public uint NextUInt()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4C")]
	[Address(RVA = "0x47FE3A0", Offset = "0x47FE3A0", VA = "0x47FE3A0")]
	public uint2 NextUInt2()
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4D")]
	[Address(RVA = "0x47FE3E0", Offset = "0x47FE3E0", VA = "0x47FE3E0")]
	public uint3 NextUInt3()
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4E")]
	[Address(RVA = "0x47FE440", Offset = "0x47FE440", VA = "0x47FE440")]
	public uint4 NextUInt4()
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4F")]
	[Address(RVA = "0x47FE4C0", Offset = "0x47FE4C0", VA = "0x47FE4C0")]
	public uint NextUInt(uint max)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E50")]
	[Address(RVA = "0x47FE4F0", Offset = "0x47FE4F0", VA = "0x47FE4F0")]
	public uint2 NextUInt2(uint2 max)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E51")]
	[Address(RVA = "0x47FE550", Offset = "0x47FE550", VA = "0x47FE550")]
	public uint3 NextUInt3(uint3 max)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E52")]
	[Address(RVA = "0x47FE5D0", Offset = "0x47FE5D0", VA = "0x47FE5D0")]
	public uint4 NextUInt4(uint4 max)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E53")]
	[Address(RVA = "0x47FE680", Offset = "0x47FE680", VA = "0x47FE680")]
	public uint NextUInt(uint min, uint max)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E54")]
	[Address(RVA = "0x47FE6B0", Offset = "0x47FE6B0", VA = "0x47FE6B0")]
	public uint2 NextUInt2(uint2 min, uint2 max)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E55")]
	[Address(RVA = "0x47FE730", Offset = "0x47FE730", VA = "0x47FE730")]
	public uint3 NextUInt3(uint3 min, uint3 max)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E56")]
	[Address(RVA = "0x47FE7E0", Offset = "0x47FE7E0", VA = "0x47FE7E0")]
	public uint4 NextUInt4(uint4 min, uint4 max)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E57")]
	[Address(RVA = "0x47FE8C0", Offset = "0x47FE8C0", VA = "0x47FE8C0")]
	public float NextFloat()
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E58")]
	[Address(RVA = "0x47FE8F0", Offset = "0x47FE8F0", VA = "0x47FE8F0")]
	public float2 NextFloat2()
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E59")]
	[Address(RVA = "0x47FE950", Offset = "0x47FE950", VA = "0x47FE950")]
	public float3 NextFloat3()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5A")]
	[Address(RVA = "0x47FE9D0", Offset = "0x47FE9D0", VA = "0x47FE9D0")]
	public float4 NextFloat4()
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5B")]
	[Address(RVA = "0x47FEA80", Offset = "0x47FEA80", VA = "0x47FEA80")]
	public float NextFloat(float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5C")]
	[Address(RVA = "0x47FEAC0", Offset = "0x47FEAC0", VA = "0x47FEAC0")]
	public float2 NextFloat2(float2 max)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5D")]
	[Address(RVA = "0x47FEB20", Offset = "0x47FEB20", VA = "0x47FEB20")]
	public float3 NextFloat3(float3 max)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5E")]
	[Address(RVA = "0x47FEBB0", Offset = "0x47FEBB0", VA = "0x47FEBB0")]
	public float4 NextFloat4(float4 max)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5F")]
	[Address(RVA = "0x47FEC60", Offset = "0x47FEC60", VA = "0x47FEC60")]
	public float NextFloat(float min, float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E60")]
	[Address(RVA = "0x47FECA0", Offset = "0x47FECA0", VA = "0x47FECA0")]
	public float2 NextFloat2(float2 min, float2 max)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E61")]
	[Address(RVA = "0x47FED00", Offset = "0x47FED00", VA = "0x47FED00")]
	public float3 NextFloat3(float3 min, float3 max)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E62")]
	[Address(RVA = "0x47FEDA0", Offset = "0x47FEDA0", VA = "0x47FEDA0")]
	public float4 NextFloat4(float4 min, float4 max)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E63")]
	[Address(RVA = "0x47FEE60", Offset = "0x47FEE60", VA = "0x47FEE60")]
	public double NextDouble()
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E64")]
	[Address(RVA = "0x47FEEB0", Offset = "0x47FEEB0", VA = "0x47FEEB0")]
	public double2 NextDouble2()
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E65")]
	[Address(RVA = "0x47FEF50", Offset = "0x47FEF50", VA = "0x47FEF50")]
	public double3 NextDouble3()
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E66")]
	[Address(RVA = "0x47FF040", Offset = "0x47FF040", VA = "0x47FF040")]
	public double4 NextDouble4()
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E67")]
	[Address(RVA = "0x47FF180", Offset = "0x47FF180", VA = "0x47FF180")]
	public double NextDouble(double max)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E68")]
	[Address(RVA = "0x47FF1E0", Offset = "0x47FF1E0", VA = "0x47FF1E0")]
	public double2 NextDouble2(double2 max)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E69")]
	[Address(RVA = "0x47FF280", Offset = "0x47FF280", VA = "0x47FF280")]
	public double3 NextDouble3(double3 max)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6A")]
	[Address(RVA = "0x47FF390", Offset = "0x47FF390", VA = "0x47FF390")]
	public double4 NextDouble4(double4 max)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6B")]
	[Address(RVA = "0x47FF4F0", Offset = "0x47FF4F0", VA = "0x47FF4F0")]
	public double NextDouble(double min, double max)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6C")]
	[Address(RVA = "0x47FF550", Offset = "0x47FF550", VA = "0x47FF550")]
	public double2 NextDouble2(double2 min, double2 max)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6D")]
	[Address(RVA = "0x47FF610", Offset = "0x47FF610", VA = "0x47FF610")]
	public double3 NextDouble3(double3 min, double3 max)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6E")]
	[Address(RVA = "0x47FF750", Offset = "0x47FF750", VA = "0x47FF750")]
	public double4 NextDouble4(double4 min, double4 max)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6F")]
	[Address(RVA = "0x47FF8E0", Offset = "0x47FF8E0", VA = "0x47FF8E0")]
	public float2 NextFloat2Direction()
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E70")]
	[Address(RVA = "0x47FF9E0", Offset = "0x47FF9E0", VA = "0x47FF9E0")]
	public double2 NextDouble2Direction()
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E71")]
	[Address(RVA = "0x47FFB00", Offset = "0x47FFB00", VA = "0x47FFB00")]
	public float3 NextFloat3Direction()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E72")]
	[Address(RVA = "0x47FFD10", Offset = "0x47FFD10", VA = "0x47FFD10")]
	public double3 NextDouble3Direction()
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E73")]
	[Address(RVA = "0x47FFF70", Offset = "0x47FFF70", VA = "0x47FFF70")]
	public quaternion NextQuaternionRotation()
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E74")]
	[Address(RVA = "0x48001C0", Offset = "0x48001C0", VA = "0x48001C0")]
	private uint NextState()
	{
		return default(uint);
	}

	[Token(Token = "0x6001E75")]
	[Address(RVA = "0x48001E0", Offset = "0x48001E0", VA = "0x48001E0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckInitState()
	{
	}

	[Token(Token = "0x6001E76")]
	[Address(RVA = "0x48001F0", Offset = "0x48001F0", VA = "0x48001F0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private static void CheckIndexForHash(uint index)
	{
	}

	[Token(Token = "0x6001E77")]
	[Address(RVA = "0x4800240", Offset = "0x4800240", VA = "0x4800240")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckState()
	{
	}

	[Token(Token = "0x6001E78")]
	[Address(RVA = "0x4800250", Offset = "0x4800250", VA = "0x4800250")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextIntMax(int max)
	{
	}

	[Token(Token = "0x6001E79")]
	[Address(RVA = "0x4800260", Offset = "0x4800260", VA = "0x4800260")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextIntMinMax(int min, int max)
	{
	}

	[Token(Token = "0x6001E7A")]
	[Address(RVA = "0x4800270", Offset = "0x4800270", VA = "0x4800270")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextUIntMinMax(uint min, uint max)
	{
	}
}
